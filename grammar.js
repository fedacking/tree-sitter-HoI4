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
            $.idea_content_trigger,

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

        idea_content_trigger: $ => seq(
            choice(
                'available',
                'allowed',
                'allowed_civil_war',
                'cancel',
                'ai_will_do'
            ),
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
            repeat($._modifier),
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
            $.trigger_scope_change,
        ),

        trigger_scope_change: $ => seq(
            $.identifier,
            "=",
            $.trigger_limit_block
        ),

        trigger_limit_block: $ => seq(
            '{',
            optional($.limit_trigger_block),
            repeat($._trigger),
            '}'
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
			optional(seq(
				'tooltip',
				'=',
				$.loc_key
			))
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

        _modifier: $ => choice(
            $.modifier,
            $.custom_modifier_tooltip
        ),

        modifier: $ => seq(
            $.identifier,
            "=",
            $.number
        ),

        custom_modifier_tooltip: $ => seq(
            'custom_modifier_tooltip',
            '=',
            $.loc_key
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
            $.array_math_effect,
            $.clamp_variable_effect,

            // Unique stuff
            $.dynamic_modifier_effect,
            $.clear_array
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
                'multiply_variable',
                'divide_variable',
                'modulo_variable',
                // Temp
                'set_temp_variable',
                'add_to_temp_variable',
                'subtract_from_temp_variable',
                'multiply_temp_variable',
                'divide_temp_variable',
                'modulo_temp_variable'
            ),
            "=",
            $.variable_math_block
        ),

        array_math_effect: $ => seq(
            choice(
                // Normal
                'add_to_array',
                'remove_from_array',
                'resize_array',
                'find_highest_in_array',
                'find_lowest_in_array',
                // Temp
                'add_to_temp_array',
                'remove_from_temp_array',
                'resize_temp_array',
            ),
            "=",
            $.array_math_block
        ),

        clamp_variable_effect: $ => seq(
            choice(
                "clamp_variable",
                "clamp_temp_variable"
            ),
            '=',
            $.clamp_variable_block
        ),

        clamp_variable_block: $ => seq(
            "{",
            'var',
            '=',
            $.identifier,
            optional(seq(
                'min',
                '=',
                choice(
                    $.identifier,
                    $.number
                )
            )),
            optional(seq(
                'max',
                '=',
                choice(
                    $.identifier,
                    $.number
                )
            )),
            "}"
        ),

        variable_math_block: $ => seq(
            "{",
            choice(
                $.variable_math_effect_long,
                $.math_effect_short
            ),
            "}"
        ),

        array_math_block: $ => seq(
            "{",
            choice(
                $.array_math_effect_long,
                $.math_effect_short
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

        clear_array: $ => seq(
            choice(
                'clear_array',
                'clear_temp_array'
            ),
            '=',
            $.identifier
        ),

        math_effect_short: $ => seq(
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

        array_math_effect_long: $ => seq(
            "array",
            "=",
            $.identifier,
            "value",
            "=",
            choice(
                $.identifier,
                $.number
            ),
            optional(seq(
                'index',
                '=',
                choice(
                    $.identifier,
                    $.number
                ),
            ))
        ),

        scripted_effect: $ => seq(
            $.identifier,
            "=",
            "yes"
        ),

        scope_change: $ => seq(
            $.identifier,
            "=",
            $.effect_limit_block
        ),

        effect_limit_block: $ => seq(
            '{',
            repeat($.for_loop_limits),
            optional($.limit_trigger_block),
            repeat($._effect),
            '}'
        ),

        for_loop_limits: $ => seq(
            choice(
                'start',
                'end',
                'value',
                'array',
                'break',
                'index',
            ),
            '=',
            choice(
                $.identifier,
                $.number
            )
        ),

        limit_trigger_block: $ => seq(
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

        identifier: $ => choice(
            /modifier@\w*/,
            /[a-zA-Z_]\w*\^?\w*/,
        ),

        loc_key: $ => /[a-zA-Z_]\w*/,

        comment: $ => token(
            seq('#', /(\\(.|\r?\n)|[^\\\n])*/),
        ),
    }
  });
  