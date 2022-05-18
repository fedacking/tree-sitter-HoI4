module.exports = grammar({
    name: 'HoI4',
    extras: $ => [
        /\s|\r?\n/,
        $.comment,
    ],
    
    rules: {
        // Ideas Block
        ideas_declaration: $ => seq(
            'ideas',
            '=',
            '{',
            repeat($.top_level_idea),
            '}'
        ),
        
        top_level_idea: $ => choice(
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
            repeat($.trigger),
            '}'
        ),

        modifier_block: $ => seq(
            '{',
            repeat($.modifier),
            '}'
        ),

        effect_block: $ => seq(
            '{',
            repeat($.effect),
            '}'
        ),

        trigger: $ => seq(
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

        effect: $ => choice(
            $.log_effect, // Para que no repita el nombre
            $.set_variable,
            $.scripted_effect,
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

        set_variable: $ => seq(
            "set_variable",
            "=",
            "{",
            choice(
                $.set_variable_long,
                $.set_variable_short
            ),
            "}"
        ),

        set_variable_short: $ => seq(
            $.identifier,
            "=",
            choice(
                $.identifier,
                $.number
            ),
        ),

        set_variable_long: $ => seq(
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
  