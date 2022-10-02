module.exports = grammar({
    name: 'HoI4',
    extras: $ => [
        /\s|\r?\n/,
        $.comment,
    ],
    
    rules: {

        translation_unit: $ => choice(
            $.ideas_declarations,
			$.character_declarations,
            $.function_declarations
        ),

        ideas_declarations: $ => seq(
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

        character_declarations: $ => seq(
            'characters',
            '=',
            '{',
            repeat($.character),
            '}'
        ),

		character: $ => seq(
			$.identifier,
			'=',
			'{',
			repeat($._character_content),
			'}'
		),

		_character_content: $ => choice(
			$.character_name,
			$.character_portraits,
			$.character_country_leader,
			$.character_advisor,
			$.character_commander
		),

		character_name: $ => seq(
			'name',
			'=',
			$._loc_key_string
		),

		character_portraits: $ => seq(
			'portraits',
			'=',
			'{',
			repeat($.character_portrait),
			'}'
		),

		character_portrait: $ => seq(
			choice(
				'civilian',
				'army',
				'navy'
			),
			'=',
			'{',
			repeat($._character_portrait_content),
			'}'
		),

		_character_portrait_content: $ => seq(
			choice(
				'large',
				'small'
			),
			'=',
			$._gfx
		),

		character_country_leader: $ => seq(
			'country_leader',
			'=',
			'{',
			repeat($._country_leader_content),
			'}'
		),

		_country_leader_content: $ => choice(
			$.desc,
			$.expire,
			$.ideology,
			$.id,
			$.traits,
		),

		character_advisor: $ => seq(
			'advisor',
			'=',
			'{',
			repeat($._advisor_content),
			'}'
		),

		_advisor_content: $ => choice(
			$.traits,
			$.idea_advisor_content,
			$._idea_content
		),

		idea_advisor_content: $ => seq(
			choice(
				'slot',
				'idea_token'
			),
			'=',
			$.identifier
		),

		character_commander: $ => seq(
			choice(
				'field_marshal',
				'corps_commander',
				'navy_leader'
			),
			'=',
			'{',
			repeat($._commander_content),
			'}'
		),

		_commander_content: $ => choice(
			$.traits,
			$.id,
			$.skill
		),

        function_declarations: $ => repeat1(
          $.function_declaration
        ),

        function_declaration: $ => seq(
            $.identifier,
            '=',
            $.effect_block
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

            $.cost,
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
            choice(
				'civilian',
				'hidden',
				'army',
				'air',
				'navy'
			)
        ),

        cost: $ => seq(
            choice(
				'cost',
				'removal_cost'
			),
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

		// I put here everything related to the info about leaders
		desc: $ => seq(
			'desc',
			'=',
			$._loc_key_string
		),

		expire: $ => seq(
			'expire',
			'=',
			$.date
		),

		ideology: $ => seq(
			'ideology',
			'=',
			$.identifier
		),

		id: $ => seq(
			choice(
				'legacy_id',
				'id',
			),
			'=',
			$.number
		),

		skill: $ => seq(
			choice(
				'skill',
				'attack_skill',
				'defense_skill',
				'maneuvering_skill',
				'coordination_skill',
				'planning_skill',
				'logistics_skill'
			),
			'=',
			$.number
		),

		traits: $ => seq(
			'traits',
			'=',
			$.traits_block
		),


		// Block Stuff
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

        traits_block: $ => seq(
            '{',
            repeat($.identifier),
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
				$._loc_key_string
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
            $._loc_key_string
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

        date: $ => seq(
            '"',
            /[1-9]{1,4}.[1-9]{1,2}.[1-9]{1,2}/,
			'"'
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

		_gfx: $ => choice(
			$.gfx_string,
			$.gfx_key
		),

		gfx_string: $ => /".*"/,

        gfx_key: $ => /[a-zA-Z_]\w*/,

		_loc_key_string: $ => choice(
			$.loc_key,
			$.loc_key_enclosed,
			$.loc_string
		),

		loc_string: $ => /".*"/,

		loc_key_enclosed: $ => seq(
			'"',	
			$.loc_key,	
			'"'	
		),

        loc_key: $ => /[a-zA-Z_]\w*/,

        comment: $ => token(
            seq('#', /(\\(.|\r?\n)|[^\\\n])*/),
        ),
    }
  });
  