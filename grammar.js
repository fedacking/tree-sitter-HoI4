module.exports = grammar({
    name: 'HoI4',
    extras: $ => [
        /\s|\r?\n/,
        $.comment,
    ],
    
    rules: {
        // Ideas Block

        translation_unit: $ => choice(
            $.ideas_declaration,
            $.function_declarations
        ),

        function_declarations: $ => repeat1(
          $.function_declaration
        ),

        function_declaration: $ => seq(
            $.identifier,
            '=',
            $.effect_block
        ),

        ideas_declaration: $ => seq(
            'ideas',
            '=',
            '{',
            repeat($._top_level_idea),
            '}'
        ),
        
        _top_level_idea: $ => choice(
            $.country_idea_block,
            $.law_idea_block
        ),

        country_idea_block: $ => seq(
            'country',
            '=',
            '{',
            repeat($.mid_level_idea),
            '}'
        ),

        law_idea_block: $ => seq(
            $.identifier,
            '=',
            '{',
            optional($.law_yes),
            repeat($.mid_level_idea),
            '}'
        ),

        law_yes: $ => seq(
            'law',
            '=',
            'yes'
        ),

        mid_level_idea: $ => seq(
            $.identifier,
            '=',
            $.idea_content
        ),

        idea_content: $ => seq(
            '{',
            repeat($._idea_content),
            '}'
        ),

        _idea_content: $ => choice(
            // Triggers
            $.available,
            $.allowed,
            $.allowed_civil_war,
            $.cancel,
            // Modifiers
            $.idea_modifiers,
            // Effects
            $.on_add,

            $.removal_cost,
            $.ledger,
            $.picture,
            $.default,
            $.cancel_if_invalid
        ),

        available: $ => seq(
            'available',
            '=',
            $.trigger_block,
        ),

        allowed: $ => seq(
            'allowed',
            '=',
            $.trigger_block,
        ),

        allowed_civil_war: $ => seq(
            'allowed_civil_war',
            '=',
            $.trigger_block,
        ),

        cancel: $ => seq(
            'cancel',
            '=',
            $.trigger_block,
        ),

        idea_modifiers: $ => seq(
            'modifier',
            '=',
            $.modifier_block,
        ),

        on_add: $ => seq(
            'on_add',
            '=',
            $.effect_block,
        ),

        ledger: $ => seq(
            'ledger',
            '=',
            'civilian'
        ),

        removal_cost: $ => seq(
            'removal_cost',
            '=',
            $.number
        ),

        picture: $ => seq(
            'picture',
            '=',
            $.identifier
        ),

        default: $ => seq(
            'default',
            '=',
            choice(
                'no',
                'yes'
            )
        ),

        cancel_if_invalid: $ => seq(
            'cancel_if_invalid',
            '=',
            choice(
                'no',
                'yes'
            )
        ),

        trigger_block: $ => seq(
            '{',
            repeat($._trigger),
            '}'
        ),

        modifier_block: $ => seq(
            '{',
            repeat($.modifier),
            '}'
        ),

        effect_block: $ => seq(
            '{',
            repeat($._effect),
            '}'
        ),

        _trigger: $ => choice(
            $.check_variable,
            $.comp_trigger,
        ),

        check_variable: $ => seq(
            'check_variable',
            '=',
            '{',
            choice(
                $.check_variable_long,
                $.check_variable_short,
            ),
            '}'
        ),

        check_variable_long: $ => seq(
            'var',
            '=',
            choice(
                $.number,
                $.identifier
            ),
            'value',
            '=',
            choice(
                $.number,
                $.identifier
            ),
            'compare',
            '=',
            choice(
                'less_than',
                'less_than_or_equals',
                'greater_than',
                'greater_than_or_equals',
                'equals',
                'not_equals',
            ),
			optional(
				'tooltip',
				'=',
				$.identifier
			)
        ),

        check_variable_short: $ => seq(
            choice(
                $.number,
                $.identifier
            ),
            choice(
                "=",
                ">",
                "<"
            ),
            choice(
                $.number,
                $.identifier
            )
        ),

        comp_trigger: $ => seq(
            $.identifier,
            choice(
                "=",
                ">",
                "<"
            ),
            choice(
                $.number,
                $.identifier
            )
        ),

        modifier: $ => seq(
            $.identifier,
            "=",
            $.number
        ),

        _effect: $ => choice(
            // log is special
            $.log_effect, 

            // every effect = yes 
            $.scripted_effect,

            // any blahblah = { effects }
            $.scope_change,

            // Variable Math
            $.variable_math_effect,

            // Unique stuff
            $.dynamic_modifier_effect
        ),

        log_effect: $ => seq(
            "log",
            "=",
            token(seq(
                "\"",
                /[^"]+/,
                "\""
            ))
        ),

        variable_math_effect: $ => seq(
            choice(
                // Normal
                'set_variable',
                'add_to_variable',
                'subtract_from_variable',
                'divide_variable',
                'modulo_variable',
                // Temp
                'set_temp_variable',
                'add_to_temp_variable',
                'subtract_from_temp_variable',
                'divide_temp_variable',
                'modulo_temp_variable'
            ),
            "=",
            "{",
            choice(
                $.variable_math_effect_long,
                $.variable_math_effect_short
            ),
            "}"
        ),

        dynamic_modifier_effect: $ => seq(
            choice(
                'add_dynamic_modifier',
                'remove_dynamic_modifier'
            ),
            '=',
            '{',
            'modifier',
            '=',
            $.identifier,
            optional(seq(
                'scope',
                '=',
                $.identifier
            )),
            optional(seq(
                'days',
                '=',
                $.number
            )),
            '}'
        ),

        variable_math_effect_short: $ => seq(
            $.identifier,
            "=",
            choice(
                $.identifier,
                $.number
            ),
        ),

        variable_math_effect_long: $ => seq(
            "var",
            "=",
            $.identifier,
            "value",
            "=",
            choice(
                $.identifier,
                $.number
            ),
        ),

        scripted_effect: $ => seq(
            $.identifier,
            "=",
            "yes"
        ),

        scope_change: $ => seq(
            $.identifier,
            "=",
            $.limit_effect_block
        ),

        limit_effect_block: $ => seq(
            '{',
            optional($.limit_trigger_bloc),
            repeat($._effect),
            '}'
        ),

        limit_trigger_bloc: $ => seq(
            'limit',
            '=',
            $.trigger_block,
        ),

        number: $ => token(seq(
            optional(/[-\+]/),
            choice(
                repeat1(/[0-9]/),
                seq(
                    repeat(/[0-9]/), 
                    '.',
                    repeat1(/[0-9]/), 
                )
            )
        )),

        identifier: $ => /[a-zA-Z_]\w*/,

        comment: $ => token(
            seq('#', /(\\(.|\r?\n)|[^\\\n])*/),
        ),
    }
  });
  