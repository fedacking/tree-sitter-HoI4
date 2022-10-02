#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 331
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 208
#define ALIAS_COUNT 0
#define TOKEN_COUNT 112
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ideas = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_country = 5,
  anon_sym_characters = 6,
  anon_sym_name = 7,
  anon_sym_portraits = 8,
  anon_sym_civilian = 9,
  anon_sym_army = 10,
  anon_sym_navy = 11,
  anon_sym_large = 12,
  anon_sym_small = 13,
  anon_sym_country_leader = 14,
  anon_sym_advisor = 15,
  anon_sym_slot = 16,
  anon_sym_idea_token = 17,
  anon_sym_field_marshal = 18,
  anon_sym_corps_commander = 19,
  anon_sym_navy_leader = 20,
  anon_sym_law = 21,
  anon_sym_yes = 22,
  anon_sym_available = 23,
  anon_sym_allowed = 24,
  anon_sym_allowed_civil_war = 25,
  anon_sym_cancel = 26,
  anon_sym_ai_will_do = 27,
  anon_sym_modifier = 28,
  anon_sym_on_add = 29,
  anon_sym_ledger = 30,
  anon_sym_hidden = 31,
  anon_sym_air = 32,
  anon_sym_cost = 33,
  anon_sym_removal_cost = 34,
  anon_sym_picture = 35,
  anon_sym_default = 36,
  anon_sym_no = 37,
  anon_sym_cancel_if_invalid = 38,
  anon_sym_desc = 39,
  anon_sym_expire = 40,
  anon_sym_ideology = 41,
  anon_sym_legacy_id = 42,
  anon_sym_id = 43,
  anon_sym_skill = 44,
  anon_sym_attack_skill = 45,
  anon_sym_defense_skill = 46,
  anon_sym_maneuvering_skill = 47,
  anon_sym_coordination_skill = 48,
  anon_sym_planning_skill = 49,
  anon_sym_logistics_skill = 50,
  anon_sym_traits = 51,
  anon_sym_check_variable = 52,
  anon_sym_var = 53,
  anon_sym_value = 54,
  anon_sym_compare = 55,
  anon_sym_less_than = 56,
  anon_sym_less_than_or_equals = 57,
  anon_sym_greater_than = 58,
  anon_sym_greater_than_or_equals = 59,
  anon_sym_equals = 60,
  anon_sym_not_equals = 61,
  anon_sym_tooltip = 62,
  anon_sym_GT = 63,
  anon_sym_LT = 64,
  anon_sym_custom_modifier_tooltip = 65,
  anon_sym_log = 66,
  aux_sym_log_effect_token1 = 67,
  anon_sym_set_variable = 68,
  anon_sym_add_to_variable = 69,
  anon_sym_subtract_from_variable = 70,
  anon_sym_multiply_variable = 71,
  anon_sym_divide_variable = 72,
  anon_sym_modulo_variable = 73,
  anon_sym_set_temp_variable = 74,
  anon_sym_add_to_temp_variable = 75,
  anon_sym_subtract_from_temp_variable = 76,
  anon_sym_multiply_temp_variable = 77,
  anon_sym_divide_temp_variable = 78,
  anon_sym_modulo_temp_variable = 79,
  anon_sym_add_to_array = 80,
  anon_sym_remove_from_array = 81,
  anon_sym_resize_array = 82,
  anon_sym_find_highest_in_array = 83,
  anon_sym_find_lowest_in_array = 84,
  anon_sym_add_to_temp_array = 85,
  anon_sym_remove_from_temp_array = 86,
  anon_sym_resize_temp_array = 87,
  anon_sym_clamp_variable = 88,
  anon_sym_clamp_temp_variable = 89,
  anon_sym_min = 90,
  anon_sym_max = 91,
  anon_sym_add_dynamic_modifier = 92,
  anon_sym_remove_dynamic_modifier = 93,
  anon_sym_scope = 94,
  anon_sym_days = 95,
  anon_sym_clear_array = 96,
  anon_sym_clear_temp_array = 97,
  anon_sym_array = 98,
  anon_sym_index = 99,
  anon_sym_start = 100,
  anon_sym_end = 101,
  anon_sym_break = 102,
  anon_sym_limit = 103,
  anon_sym_DQUOTE = 104,
  aux_sym_date_token1 = 105,
  sym_number = 106,
  aux_sym_identifier_token1 = 107,
  aux_sym_identifier_token2 = 108,
  aux_sym_gfx_string_token1 = 109,
  aux_sym_gfx_key_token1 = 110,
  sym_comment = 111,
  sym_translation_unit = 112,
  sym_ideas_declarations = 113,
  sym__top_level_idea = 114,
  sym_country_idea_block = 115,
  sym_character_declarations = 116,
  sym_character = 117,
  sym__character_content = 118,
  sym_character_name = 119,
  sym_character_portraits = 120,
  sym_character_portrait = 121,
  sym__character_portrait_content = 122,
  sym_character_country_leader = 123,
  sym__country_leader_content = 124,
  sym_character_advisor = 125,
  sym__advisor_content = 126,
  sym_idea_advisor_content = 127,
  sym_character_commander = 128,
  sym__commander_content = 129,
  sym_function_declarations = 130,
  sym_function_declaration = 131,
  sym_law_idea_block = 132,
  sym_law_yes = 133,
  sym_mid_level_idea = 134,
  sym_idea_content = 135,
  sym__idea_content = 136,
  sym_idea_content_trigger = 137,
  sym_idea_modifiers = 138,
  sym_on_add = 139,
  sym_ledger = 140,
  sym_cost = 141,
  sym_picture = 142,
  sym_default = 143,
  sym_cancel_if_invalid = 144,
  sym_desc = 145,
  sym_expire = 146,
  sym_ideology = 147,
  sym_id = 148,
  sym_skill = 149,
  sym_traits = 150,
  sym_trigger_block = 151,
  sym_modifier_block = 152,
  sym_effect_block = 153,
  sym_traits_block = 154,
  sym__trigger = 155,
  sym_trigger_scope_change = 156,
  sym_trigger_limit_block = 157,
  sym_check_variable = 158,
  sym_check_variable_long = 159,
  sym_check_variable_short = 160,
  sym_comp_trigger = 161,
  sym__modifier = 162,
  sym_modifier = 163,
  sym_custom_modifier_tooltip = 164,
  sym__effect = 165,
  sym_log_effect = 166,
  sym_variable_math_effect = 167,
  sym_array_math_effect = 168,
  sym_clamp_variable_effect = 169,
  sym_clamp_variable_block = 170,
  sym_variable_math_block = 171,
  sym_array_math_block = 172,
  sym_dynamic_modifier_effect = 173,
  sym_clear_array = 174,
  sym_math_effect_short = 175,
  sym_variable_math_effect_long = 176,
  sym_array_math_effect_long = 177,
  sym_scripted_effect = 178,
  sym_scope_change = 179,
  sym_effect_limit_block = 180,
  sym_for_loop_limits = 181,
  sym_limit_trigger_block = 182,
  sym_date = 183,
  sym_identifier = 184,
  sym__gfx = 185,
  sym_gfx_string = 186,
  sym_gfx_key = 187,
  sym__loc_key_string = 188,
  sym_loc_string = 189,
  sym_loc_key_enclosed = 190,
  sym_loc_key = 191,
  aux_sym_ideas_declarations_repeat1 = 192,
  aux_sym_country_idea_block_repeat1 = 193,
  aux_sym_character_declarations_repeat1 = 194,
  aux_sym_character_repeat1 = 195,
  aux_sym_character_portraits_repeat1 = 196,
  aux_sym_character_portrait_repeat1 = 197,
  aux_sym_character_country_leader_repeat1 = 198,
  aux_sym_character_advisor_repeat1 = 199,
  aux_sym_character_commander_repeat1 = 200,
  aux_sym_function_declarations_repeat1 = 201,
  aux_sym_idea_content_repeat1 = 202,
  aux_sym_trigger_block_repeat1 = 203,
  aux_sym_modifier_block_repeat1 = 204,
  aux_sym_effect_block_repeat1 = 205,
  aux_sym_traits_block_repeat1 = 206,
  aux_sym_effect_limit_block_repeat1 = 207,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ideas] = "ideas",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_country] = "country",
  [anon_sym_characters] = "characters",
  [anon_sym_name] = "name",
  [anon_sym_portraits] = "portraits",
  [anon_sym_civilian] = "civilian",
  [anon_sym_army] = "army",
  [anon_sym_navy] = "navy",
  [anon_sym_large] = "large",
  [anon_sym_small] = "small",
  [anon_sym_country_leader] = "country_leader",
  [anon_sym_advisor] = "advisor",
  [anon_sym_slot] = "slot",
  [anon_sym_idea_token] = "idea_token",
  [anon_sym_field_marshal] = "field_marshal",
  [anon_sym_corps_commander] = "corps_commander",
  [anon_sym_navy_leader] = "navy_leader",
  [anon_sym_law] = "law",
  [anon_sym_yes] = "yes",
  [anon_sym_available] = "available",
  [anon_sym_allowed] = "allowed",
  [anon_sym_allowed_civil_war] = "allowed_civil_war",
  [anon_sym_cancel] = "cancel",
  [anon_sym_ai_will_do] = "ai_will_do",
  [anon_sym_modifier] = "modifier",
  [anon_sym_on_add] = "on_add",
  [anon_sym_ledger] = "ledger",
  [anon_sym_hidden] = "hidden",
  [anon_sym_air] = "air",
  [anon_sym_cost] = "cost",
  [anon_sym_removal_cost] = "removal_cost",
  [anon_sym_picture] = "picture",
  [anon_sym_default] = "default",
  [anon_sym_no] = "no",
  [anon_sym_cancel_if_invalid] = "cancel_if_invalid",
  [anon_sym_desc] = "desc",
  [anon_sym_expire] = "expire",
  [anon_sym_ideology] = "ideology",
  [anon_sym_legacy_id] = "legacy_id",
  [anon_sym_id] = "id",
  [anon_sym_skill] = "skill",
  [anon_sym_attack_skill] = "attack_skill",
  [anon_sym_defense_skill] = "defense_skill",
  [anon_sym_maneuvering_skill] = "maneuvering_skill",
  [anon_sym_coordination_skill] = "coordination_skill",
  [anon_sym_planning_skill] = "planning_skill",
  [anon_sym_logistics_skill] = "logistics_skill",
  [anon_sym_traits] = "traits",
  [anon_sym_check_variable] = "check_variable",
  [anon_sym_var] = "var",
  [anon_sym_value] = "value",
  [anon_sym_compare] = "compare",
  [anon_sym_less_than] = "less_than",
  [anon_sym_less_than_or_equals] = "less_than_or_equals",
  [anon_sym_greater_than] = "greater_than",
  [anon_sym_greater_than_or_equals] = "greater_than_or_equals",
  [anon_sym_equals] = "equals",
  [anon_sym_not_equals] = "not_equals",
  [anon_sym_tooltip] = "tooltip",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_custom_modifier_tooltip] = "custom_modifier_tooltip",
  [anon_sym_log] = "log",
  [aux_sym_log_effect_token1] = "log_effect_token1",
  [anon_sym_set_variable] = "set_variable",
  [anon_sym_add_to_variable] = "add_to_variable",
  [anon_sym_subtract_from_variable] = "subtract_from_variable",
  [anon_sym_multiply_variable] = "multiply_variable",
  [anon_sym_divide_variable] = "divide_variable",
  [anon_sym_modulo_variable] = "modulo_variable",
  [anon_sym_set_temp_variable] = "set_temp_variable",
  [anon_sym_add_to_temp_variable] = "add_to_temp_variable",
  [anon_sym_subtract_from_temp_variable] = "subtract_from_temp_variable",
  [anon_sym_multiply_temp_variable] = "multiply_temp_variable",
  [anon_sym_divide_temp_variable] = "divide_temp_variable",
  [anon_sym_modulo_temp_variable] = "modulo_temp_variable",
  [anon_sym_add_to_array] = "add_to_array",
  [anon_sym_remove_from_array] = "remove_from_array",
  [anon_sym_resize_array] = "resize_array",
  [anon_sym_find_highest_in_array] = "find_highest_in_array",
  [anon_sym_find_lowest_in_array] = "find_lowest_in_array",
  [anon_sym_add_to_temp_array] = "add_to_temp_array",
  [anon_sym_remove_from_temp_array] = "remove_from_temp_array",
  [anon_sym_resize_temp_array] = "resize_temp_array",
  [anon_sym_clamp_variable] = "clamp_variable",
  [anon_sym_clamp_temp_variable] = "clamp_temp_variable",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_add_dynamic_modifier] = "add_dynamic_modifier",
  [anon_sym_remove_dynamic_modifier] = "remove_dynamic_modifier",
  [anon_sym_scope] = "scope",
  [anon_sym_days] = "days",
  [anon_sym_clear_array] = "clear_array",
  [anon_sym_clear_temp_array] = "clear_temp_array",
  [anon_sym_array] = "array",
  [anon_sym_index] = "index",
  [anon_sym_start] = "start",
  [anon_sym_end] = "end",
  [anon_sym_break] = "break",
  [anon_sym_limit] = "limit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_date_token1] = "date_token1",
  [sym_number] = "number",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [aux_sym_gfx_string_token1] = "gfx_string_token1",
  [aux_sym_gfx_key_token1] = "gfx_key_token1",
  [sym_comment] = "comment",
  [sym_translation_unit] = "translation_unit",
  [sym_ideas_declarations] = "ideas_declarations",
  [sym__top_level_idea] = "_top_level_idea",
  [sym_country_idea_block] = "country_idea_block",
  [sym_character_declarations] = "character_declarations",
  [sym_character] = "character",
  [sym__character_content] = "_character_content",
  [sym_character_name] = "character_name",
  [sym_character_portraits] = "character_portraits",
  [sym_character_portrait] = "character_portrait",
  [sym__character_portrait_content] = "_character_portrait_content",
  [sym_character_country_leader] = "character_country_leader",
  [sym__country_leader_content] = "_country_leader_content",
  [sym_character_advisor] = "character_advisor",
  [sym__advisor_content] = "_advisor_content",
  [sym_idea_advisor_content] = "idea_advisor_content",
  [sym_character_commander] = "character_commander",
  [sym__commander_content] = "_commander_content",
  [sym_function_declarations] = "function_declarations",
  [sym_function_declaration] = "function_declaration",
  [sym_law_idea_block] = "law_idea_block",
  [sym_law_yes] = "law_yes",
  [sym_mid_level_idea] = "mid_level_idea",
  [sym_idea_content] = "idea_content",
  [sym__idea_content] = "_idea_content",
  [sym_idea_content_trigger] = "idea_content_trigger",
  [sym_idea_modifiers] = "idea_modifiers",
  [sym_on_add] = "on_add",
  [sym_ledger] = "ledger",
  [sym_cost] = "cost",
  [sym_picture] = "picture",
  [sym_default] = "default",
  [sym_cancel_if_invalid] = "cancel_if_invalid",
  [sym_desc] = "desc",
  [sym_expire] = "expire",
  [sym_ideology] = "ideology",
  [sym_id] = "id",
  [sym_skill] = "skill",
  [sym_traits] = "traits",
  [sym_trigger_block] = "trigger_block",
  [sym_modifier_block] = "modifier_block",
  [sym_effect_block] = "effect_block",
  [sym_traits_block] = "traits_block",
  [sym__trigger] = "_trigger",
  [sym_trigger_scope_change] = "trigger_scope_change",
  [sym_trigger_limit_block] = "trigger_limit_block",
  [sym_check_variable] = "check_variable",
  [sym_check_variable_long] = "check_variable_long",
  [sym_check_variable_short] = "check_variable_short",
  [sym_comp_trigger] = "comp_trigger",
  [sym__modifier] = "_modifier",
  [sym_modifier] = "modifier",
  [sym_custom_modifier_tooltip] = "custom_modifier_tooltip",
  [sym__effect] = "_effect",
  [sym_log_effect] = "log_effect",
  [sym_variable_math_effect] = "variable_math_effect",
  [sym_array_math_effect] = "array_math_effect",
  [sym_clamp_variable_effect] = "clamp_variable_effect",
  [sym_clamp_variable_block] = "clamp_variable_block",
  [sym_variable_math_block] = "variable_math_block",
  [sym_array_math_block] = "array_math_block",
  [sym_dynamic_modifier_effect] = "dynamic_modifier_effect",
  [sym_clear_array] = "clear_array",
  [sym_math_effect_short] = "math_effect_short",
  [sym_variable_math_effect_long] = "variable_math_effect_long",
  [sym_array_math_effect_long] = "array_math_effect_long",
  [sym_scripted_effect] = "scripted_effect",
  [sym_scope_change] = "scope_change",
  [sym_effect_limit_block] = "effect_limit_block",
  [sym_for_loop_limits] = "for_loop_limits",
  [sym_limit_trigger_block] = "limit_trigger_block",
  [sym_date] = "date",
  [sym_identifier] = "identifier",
  [sym__gfx] = "_gfx",
  [sym_gfx_string] = "gfx_string",
  [sym_gfx_key] = "gfx_key",
  [sym__loc_key_string] = "_loc_key_string",
  [sym_loc_string] = "loc_string",
  [sym_loc_key_enclosed] = "loc_key_enclosed",
  [sym_loc_key] = "loc_key",
  [aux_sym_ideas_declarations_repeat1] = "ideas_declarations_repeat1",
  [aux_sym_country_idea_block_repeat1] = "country_idea_block_repeat1",
  [aux_sym_character_declarations_repeat1] = "character_declarations_repeat1",
  [aux_sym_character_repeat1] = "character_repeat1",
  [aux_sym_character_portraits_repeat1] = "character_portraits_repeat1",
  [aux_sym_character_portrait_repeat1] = "character_portrait_repeat1",
  [aux_sym_character_country_leader_repeat1] = "character_country_leader_repeat1",
  [aux_sym_character_advisor_repeat1] = "character_advisor_repeat1",
  [aux_sym_character_commander_repeat1] = "character_commander_repeat1",
  [aux_sym_function_declarations_repeat1] = "function_declarations_repeat1",
  [aux_sym_idea_content_repeat1] = "idea_content_repeat1",
  [aux_sym_trigger_block_repeat1] = "trigger_block_repeat1",
  [aux_sym_modifier_block_repeat1] = "modifier_block_repeat1",
  [aux_sym_effect_block_repeat1] = "effect_block_repeat1",
  [aux_sym_traits_block_repeat1] = "traits_block_repeat1",
  [aux_sym_effect_limit_block_repeat1] = "effect_limit_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ideas] = anon_sym_ideas,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_country] = anon_sym_country,
  [anon_sym_characters] = anon_sym_characters,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_portraits] = anon_sym_portraits,
  [anon_sym_civilian] = anon_sym_civilian,
  [anon_sym_army] = anon_sym_army,
  [anon_sym_navy] = anon_sym_navy,
  [anon_sym_large] = anon_sym_large,
  [anon_sym_small] = anon_sym_small,
  [anon_sym_country_leader] = anon_sym_country_leader,
  [anon_sym_advisor] = anon_sym_advisor,
  [anon_sym_slot] = anon_sym_slot,
  [anon_sym_idea_token] = anon_sym_idea_token,
  [anon_sym_field_marshal] = anon_sym_field_marshal,
  [anon_sym_corps_commander] = anon_sym_corps_commander,
  [anon_sym_navy_leader] = anon_sym_navy_leader,
  [anon_sym_law] = anon_sym_law,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_available] = anon_sym_available,
  [anon_sym_allowed] = anon_sym_allowed,
  [anon_sym_allowed_civil_war] = anon_sym_allowed_civil_war,
  [anon_sym_cancel] = anon_sym_cancel,
  [anon_sym_ai_will_do] = anon_sym_ai_will_do,
  [anon_sym_modifier] = anon_sym_modifier,
  [anon_sym_on_add] = anon_sym_on_add,
  [anon_sym_ledger] = anon_sym_ledger,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_air] = anon_sym_air,
  [anon_sym_cost] = anon_sym_cost,
  [anon_sym_removal_cost] = anon_sym_removal_cost,
  [anon_sym_picture] = anon_sym_picture,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_cancel_if_invalid] = anon_sym_cancel_if_invalid,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_expire] = anon_sym_expire,
  [anon_sym_ideology] = anon_sym_ideology,
  [anon_sym_legacy_id] = anon_sym_legacy_id,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_skill] = anon_sym_skill,
  [anon_sym_attack_skill] = anon_sym_attack_skill,
  [anon_sym_defense_skill] = anon_sym_defense_skill,
  [anon_sym_maneuvering_skill] = anon_sym_maneuvering_skill,
  [anon_sym_coordination_skill] = anon_sym_coordination_skill,
  [anon_sym_planning_skill] = anon_sym_planning_skill,
  [anon_sym_logistics_skill] = anon_sym_logistics_skill,
  [anon_sym_traits] = anon_sym_traits,
  [anon_sym_check_variable] = anon_sym_check_variable,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_compare] = anon_sym_compare,
  [anon_sym_less_than] = anon_sym_less_than,
  [anon_sym_less_than_or_equals] = anon_sym_less_than_or_equals,
  [anon_sym_greater_than] = anon_sym_greater_than,
  [anon_sym_greater_than_or_equals] = anon_sym_greater_than_or_equals,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_not_equals] = anon_sym_not_equals,
  [anon_sym_tooltip] = anon_sym_tooltip,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_custom_modifier_tooltip] = anon_sym_custom_modifier_tooltip,
  [anon_sym_log] = anon_sym_log,
  [aux_sym_log_effect_token1] = aux_sym_log_effect_token1,
  [anon_sym_set_variable] = anon_sym_set_variable,
  [anon_sym_add_to_variable] = anon_sym_add_to_variable,
  [anon_sym_subtract_from_variable] = anon_sym_subtract_from_variable,
  [anon_sym_multiply_variable] = anon_sym_multiply_variable,
  [anon_sym_divide_variable] = anon_sym_divide_variable,
  [anon_sym_modulo_variable] = anon_sym_modulo_variable,
  [anon_sym_set_temp_variable] = anon_sym_set_temp_variable,
  [anon_sym_add_to_temp_variable] = anon_sym_add_to_temp_variable,
  [anon_sym_subtract_from_temp_variable] = anon_sym_subtract_from_temp_variable,
  [anon_sym_multiply_temp_variable] = anon_sym_multiply_temp_variable,
  [anon_sym_divide_temp_variable] = anon_sym_divide_temp_variable,
  [anon_sym_modulo_temp_variable] = anon_sym_modulo_temp_variable,
  [anon_sym_add_to_array] = anon_sym_add_to_array,
  [anon_sym_remove_from_array] = anon_sym_remove_from_array,
  [anon_sym_resize_array] = anon_sym_resize_array,
  [anon_sym_find_highest_in_array] = anon_sym_find_highest_in_array,
  [anon_sym_find_lowest_in_array] = anon_sym_find_lowest_in_array,
  [anon_sym_add_to_temp_array] = anon_sym_add_to_temp_array,
  [anon_sym_remove_from_temp_array] = anon_sym_remove_from_temp_array,
  [anon_sym_resize_temp_array] = anon_sym_resize_temp_array,
  [anon_sym_clamp_variable] = anon_sym_clamp_variable,
  [anon_sym_clamp_temp_variable] = anon_sym_clamp_temp_variable,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_add_dynamic_modifier] = anon_sym_add_dynamic_modifier,
  [anon_sym_remove_dynamic_modifier] = anon_sym_remove_dynamic_modifier,
  [anon_sym_scope] = anon_sym_scope,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_clear_array] = anon_sym_clear_array,
  [anon_sym_clear_temp_array] = anon_sym_clear_temp_array,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_limit] = anon_sym_limit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [sym_number] = sym_number,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [aux_sym_gfx_string_token1] = aux_sym_gfx_string_token1,
  [aux_sym_gfx_key_token1] = aux_sym_gfx_key_token1,
  [sym_comment] = sym_comment,
  [sym_translation_unit] = sym_translation_unit,
  [sym_ideas_declarations] = sym_ideas_declarations,
  [sym__top_level_idea] = sym__top_level_idea,
  [sym_country_idea_block] = sym_country_idea_block,
  [sym_character_declarations] = sym_character_declarations,
  [sym_character] = sym_character,
  [sym__character_content] = sym__character_content,
  [sym_character_name] = sym_character_name,
  [sym_character_portraits] = sym_character_portraits,
  [sym_character_portrait] = sym_character_portrait,
  [sym__character_portrait_content] = sym__character_portrait_content,
  [sym_character_country_leader] = sym_character_country_leader,
  [sym__country_leader_content] = sym__country_leader_content,
  [sym_character_advisor] = sym_character_advisor,
  [sym__advisor_content] = sym__advisor_content,
  [sym_idea_advisor_content] = sym_idea_advisor_content,
  [sym_character_commander] = sym_character_commander,
  [sym__commander_content] = sym__commander_content,
  [sym_function_declarations] = sym_function_declarations,
  [sym_function_declaration] = sym_function_declaration,
  [sym_law_idea_block] = sym_law_idea_block,
  [sym_law_yes] = sym_law_yes,
  [sym_mid_level_idea] = sym_mid_level_idea,
  [sym_idea_content] = sym_idea_content,
  [sym__idea_content] = sym__idea_content,
  [sym_idea_content_trigger] = sym_idea_content_trigger,
  [sym_idea_modifiers] = sym_idea_modifiers,
  [sym_on_add] = sym_on_add,
  [sym_ledger] = sym_ledger,
  [sym_cost] = sym_cost,
  [sym_picture] = sym_picture,
  [sym_default] = sym_default,
  [sym_cancel_if_invalid] = sym_cancel_if_invalid,
  [sym_desc] = sym_desc,
  [sym_expire] = sym_expire,
  [sym_ideology] = sym_ideology,
  [sym_id] = sym_id,
  [sym_skill] = sym_skill,
  [sym_traits] = sym_traits,
  [sym_trigger_block] = sym_trigger_block,
  [sym_modifier_block] = sym_modifier_block,
  [sym_effect_block] = sym_effect_block,
  [sym_traits_block] = sym_traits_block,
  [sym__trigger] = sym__trigger,
  [sym_trigger_scope_change] = sym_trigger_scope_change,
  [sym_trigger_limit_block] = sym_trigger_limit_block,
  [sym_check_variable] = sym_check_variable,
  [sym_check_variable_long] = sym_check_variable_long,
  [sym_check_variable_short] = sym_check_variable_short,
  [sym_comp_trigger] = sym_comp_trigger,
  [sym__modifier] = sym__modifier,
  [sym_modifier] = sym_modifier,
  [sym_custom_modifier_tooltip] = sym_custom_modifier_tooltip,
  [sym__effect] = sym__effect,
  [sym_log_effect] = sym_log_effect,
  [sym_variable_math_effect] = sym_variable_math_effect,
  [sym_array_math_effect] = sym_array_math_effect,
  [sym_clamp_variable_effect] = sym_clamp_variable_effect,
  [sym_clamp_variable_block] = sym_clamp_variable_block,
  [sym_variable_math_block] = sym_variable_math_block,
  [sym_array_math_block] = sym_array_math_block,
  [sym_dynamic_modifier_effect] = sym_dynamic_modifier_effect,
  [sym_clear_array] = sym_clear_array,
  [sym_math_effect_short] = sym_math_effect_short,
  [sym_variable_math_effect_long] = sym_variable_math_effect_long,
  [sym_array_math_effect_long] = sym_array_math_effect_long,
  [sym_scripted_effect] = sym_scripted_effect,
  [sym_scope_change] = sym_scope_change,
  [sym_effect_limit_block] = sym_effect_limit_block,
  [sym_for_loop_limits] = sym_for_loop_limits,
  [sym_limit_trigger_block] = sym_limit_trigger_block,
  [sym_date] = sym_date,
  [sym_identifier] = sym_identifier,
  [sym__gfx] = sym__gfx,
  [sym_gfx_string] = sym_gfx_string,
  [sym_gfx_key] = sym_gfx_key,
  [sym__loc_key_string] = sym__loc_key_string,
  [sym_loc_string] = sym_loc_string,
  [sym_loc_key_enclosed] = sym_loc_key_enclosed,
  [sym_loc_key] = sym_loc_key,
  [aux_sym_ideas_declarations_repeat1] = aux_sym_ideas_declarations_repeat1,
  [aux_sym_country_idea_block_repeat1] = aux_sym_country_idea_block_repeat1,
  [aux_sym_character_declarations_repeat1] = aux_sym_character_declarations_repeat1,
  [aux_sym_character_repeat1] = aux_sym_character_repeat1,
  [aux_sym_character_portraits_repeat1] = aux_sym_character_portraits_repeat1,
  [aux_sym_character_portrait_repeat1] = aux_sym_character_portrait_repeat1,
  [aux_sym_character_country_leader_repeat1] = aux_sym_character_country_leader_repeat1,
  [aux_sym_character_advisor_repeat1] = aux_sym_character_advisor_repeat1,
  [aux_sym_character_commander_repeat1] = aux_sym_character_commander_repeat1,
  [aux_sym_function_declarations_repeat1] = aux_sym_function_declarations_repeat1,
  [aux_sym_idea_content_repeat1] = aux_sym_idea_content_repeat1,
  [aux_sym_trigger_block_repeat1] = aux_sym_trigger_block_repeat1,
  [aux_sym_modifier_block_repeat1] = aux_sym_modifier_block_repeat1,
  [aux_sym_effect_block_repeat1] = aux_sym_effect_block_repeat1,
  [aux_sym_traits_block_repeat1] = aux_sym_traits_block_repeat1,
  [aux_sym_effect_limit_block_repeat1] = aux_sym_effect_limit_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ideas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_characters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_portraits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_civilian] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_army] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_navy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_large] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_small] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_leader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_advisor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idea_token] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field_marshal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_corps_commander] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_navy_leader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_law] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_available] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowed_civil_war] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cancel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ai_will_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ledger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_air] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_removal_cost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_picture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cancel_if_invalid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ideology] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_legacy_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attack_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defense_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maneuvering_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coordination_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_planning_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logistics_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_traits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less_than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less_than_or_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greater_than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greater_than_or_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tooltip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom_modifier_tooltip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_log_effect_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_set_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_to_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subtract_from_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiply_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divide_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulo_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_temp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_to_temp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subtract_from_temp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiply_temp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divide_temp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulo_temp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_to_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove_from_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_find_highest_in_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_find_lowest_in_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_to_temp_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove_from_temp_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize_temp_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clamp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clamp_temp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_dynamic_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove_dynamic_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clear_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clear_temp_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gfx_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gfx_key_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_ideas_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_idea] = {
    .visible = false,
    .named = true,
  },
  [sym_country_idea_block] = {
    .visible = true,
    .named = true,
  },
  [sym_character_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym__character_content] = {
    .visible = false,
    .named = true,
  },
  [sym_character_name] = {
    .visible = true,
    .named = true,
  },
  [sym_character_portraits] = {
    .visible = true,
    .named = true,
  },
  [sym_character_portrait] = {
    .visible = true,
    .named = true,
  },
  [sym__character_portrait_content] = {
    .visible = false,
    .named = true,
  },
  [sym_character_country_leader] = {
    .visible = true,
    .named = true,
  },
  [sym__country_leader_content] = {
    .visible = false,
    .named = true,
  },
  [sym_character_advisor] = {
    .visible = true,
    .named = true,
  },
  [sym__advisor_content] = {
    .visible = false,
    .named = true,
  },
  [sym_idea_advisor_content] = {
    .visible = true,
    .named = true,
  },
  [sym_character_commander] = {
    .visible = true,
    .named = true,
  },
  [sym__commander_content] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_law_idea_block] = {
    .visible = true,
    .named = true,
  },
  [sym_law_yes] = {
    .visible = true,
    .named = true,
  },
  [sym_mid_level_idea] = {
    .visible = true,
    .named = true,
  },
  [sym_idea_content] = {
    .visible = true,
    .named = true,
  },
  [sym__idea_content] = {
    .visible = false,
    .named = true,
  },
  [sym_idea_content_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_idea_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_on_add] = {
    .visible = true,
    .named = true,
  },
  [sym_ledger] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_picture] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_cancel_if_invalid] = {
    .visible = true,
    .named = true,
  },
  [sym_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_expire] = {
    .visible = true,
    .named = true,
  },
  [sym_ideology] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_skill] = {
    .visible = true,
    .named = true,
  },
  [sym_traits] = {
    .visible = true,
    .named = true,
  },
  [sym_trigger_block] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_block] = {
    .visible = true,
    .named = true,
  },
  [sym_effect_block] = {
    .visible = true,
    .named = true,
  },
  [sym_traits_block] = {
    .visible = true,
    .named = true,
  },
  [sym__trigger] = {
    .visible = false,
    .named = true,
  },
  [sym_trigger_scope_change] = {
    .visible = true,
    .named = true,
  },
  [sym_trigger_limit_block] = {
    .visible = true,
    .named = true,
  },
  [sym_check_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_check_variable_long] = {
    .visible = true,
    .named = true,
  },
  [sym_check_variable_short] = {
    .visible = true,
    .named = true,
  },
  [sym_comp_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym__modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_modifier_tooltip] = {
    .visible = true,
    .named = true,
  },
  [sym__effect] = {
    .visible = false,
    .named = true,
  },
  [sym_log_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_math_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_array_math_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_clamp_variable_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_clamp_variable_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_math_block] = {
    .visible = true,
    .named = true,
  },
  [sym_array_math_block] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_modifier_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_clear_array] = {
    .visible = true,
    .named = true,
  },
  [sym_math_effect_short] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_math_effect_long] = {
    .visible = true,
    .named = true,
  },
  [sym_array_math_effect_long] = {
    .visible = true,
    .named = true,
  },
  [sym_scripted_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_change] = {
    .visible = true,
    .named = true,
  },
  [sym_effect_limit_block] = {
    .visible = true,
    .named = true,
  },
  [sym_for_loop_limits] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_trigger_block] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__gfx] = {
    .visible = false,
    .named = true,
  },
  [sym_gfx_string] = {
    .visible = true,
    .named = true,
  },
  [sym_gfx_key] = {
    .visible = true,
    .named = true,
  },
  [sym__loc_key_string] = {
    .visible = false,
    .named = true,
  },
  [sym_loc_string] = {
    .visible = true,
    .named = true,
  },
  [sym_loc_key_enclosed] = {
    .visible = true,
    .named = true,
  },
  [sym_loc_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ideas_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_country_idea_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_portraits_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_portrait_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_country_leader_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_advisor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_commander_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_idea_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trigger_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effect_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_traits_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effect_limit_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(953);
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(799);
      if (lookahead == '<') ADVANCE(878);
      if (lookahead == '=') ADVANCE(806);
      if (lookahead == '>') ADVANCE(877);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(599);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 'g') ADVANCE(627);
      if (lookahead == 'h') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(541);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(266);
      if (lookahead == '{') ADVANCE(807);
      if (lookahead == '}') ADVANCE(808);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(883);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(749);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(749);
      if (lookahead == 'r') ADVANCE(841);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(215);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(706);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(138);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(748);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(739);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(494);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(492);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(194);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(669);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(474);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(689);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(360);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(382);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(251);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(701);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(701);
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(195);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(356);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(707);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(713);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(678);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(477);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(300);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(679);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(303);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(680);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(682);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(148);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(683);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(717);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(740);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(499);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(405);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(718);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(741);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(501);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(719);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(742);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(720);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(743);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(721);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(744);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(745);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(734);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(598);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'i') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'i') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == 'u') ADVANCE(668);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(724);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(761);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(611);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(629);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(631);
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(638);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(648);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(714);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(456);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(457);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(458);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(459);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(460);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(461);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(462);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(463);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(465);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(466);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(467);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(468);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(469);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(470);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(471);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == 'k') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == 'k') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(848);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(693);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(545);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(705);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(711);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(681);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(852);
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(946);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(838);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(832);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(847);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(854);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'v') ADVANCE(349);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(769);
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(853);
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(730);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(730);
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'f') ADVANCE(628);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 313:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 314:
      if (lookahead == 'f') ADVANCE(364);
      END_STATE();
    case 315:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 316:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 317:
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 318:
      if (lookahead == 'f') ADVANCE(386);
      END_STATE();
    case 319:
      if (lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 320:
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 321:
      if (lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 322:
      if (lookahead == 'f') ADVANCE(630);
      END_STATE();
    case 323:
      if (lookahead == 'g') ADVANCE(882);
      END_STATE();
    case 324:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 325:
      if (lookahead == 'g') ADVANCE(756);
      END_STATE();
    case 326:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 327:
      if (lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 328:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 329:
      if (lookahead == 'g') ADVANCE(370);
      END_STATE();
    case 330:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 331:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 332:
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 333:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 334:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 335:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 336:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(775);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(437);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(700);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 407:
      if (lookahead == 'k') ADVANCE(948);
      END_STATE();
    case 408:
      if (lookahead == 'k') ADVANCE(346);
      END_STATE();
    case 409:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 410:
      if (lookahead == 'k') ADVANCE(19);
      END_STATE();
    case 411:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 412:
      if (lookahead == 'k') ADVANCE(376);
      END_STATE();
    case 413:
      if (lookahead == 'k') ADVANCE(377);
      END_STATE();
    case 414:
      if (lookahead == 'k') ADVANCE(378);
      END_STATE();
    case 415:
      if (lookahead == 'k') ADVANCE(379);
      END_STATE();
    case 416:
      if (lookahead == 'k') ADVANCE(380);
      END_STATE();
    case 417:
      if (lookahead == 'k') ADVANCE(381);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(855);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(820);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(834);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(856);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(857);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(860);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(861);
      END_STATE();
    case 426:
      if (lookahead == 'l') ADVANCE(858);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(859);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 430:
      if (lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 431:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 432:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 433:
      if (lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 434:
      if (lookahead == 'l') ADVANCE(661);
      END_STATE();
    case 435:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 437:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 438:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 439:
      if (lookahead == 'l') ADVANCE(773);
      END_STATE();
    case 440:
      if (lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 441:
      if (lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 443:
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 444:
      if (lookahead == 'l') ADVANCE(666);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(667);
      END_STATE();
    case 447:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 448:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 449:
      if (lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 452:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(710);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 478:
      if (lookahead == 'm') ADVANCE(752);
      END_STATE();
    case 479:
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 480:
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 481:
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 482:
      if (lookahead == 'm') ADVANCE(577);
      END_STATE();
    case 483:
      if (lookahead == 'm') ADVANCE(537);
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 485:
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(753);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(771);
      END_STATE();
    case 487:
      if (lookahead == 'm') ADVANCE(496);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(578);
      END_STATE();
    case 489:
      if (lookahead == 'm') ADVANCE(573);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 491:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 492:
      if (lookahead == 'm') ADVANCE(553);
      END_STATE();
    case 493:
      if (lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 494:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(558);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(575);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(576);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(562);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(579);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(581);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(582);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'q') ADVANCE(725);
      if (lookahead == 'x') ADVANCE(568);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(928);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(824);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 'x') ADVANCE(929);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(835);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 566:
      if (lookahead == 'p') ADVANCE(876);
      END_STATE();
    case 567:
      if (lookahead == 'p') ADVANCE(879);
      END_STATE();
    case 568:
      if (lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 569:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 570:
      if (lookahead == 'p') ADVANCE(439);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(671);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 584:
      if (lookahead == 'q') ADVANCE(725);
      END_STATE();
    case 585:
      if (lookahead == 'q') ADVANCE(727);
      END_STATE();
    case 586:
      if (lookahead == 'q') ADVANCE(728);
      END_STATE();
    case 587:
      if (lookahead == 'q') ADVANCE(729);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(822);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(826);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(833);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 'w') ADVANCE(828);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(755);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 617:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 618:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 619:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 620:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 622:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 623:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 625:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 626:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 627:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 628:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 629:
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 630:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 631:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 632:
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 634:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 636:
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(623);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 643:
      if (lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 660:
      if (lookahead == 's') ADVANCE(935);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(874);
      END_STATE();
    case 662:
      if (lookahead == 's') ADVANCE(862);
      END_STATE();
    case 663:
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 664:
      if (lookahead == 's') ADVANCE(811);
      END_STATE();
    case 665:
      if (lookahead == 's') ADVANCE(871);
      END_STATE();
    case 666:
      if (lookahead == 's') ADVANCE(873);
      END_STATE();
    case 667:
      if (lookahead == 's') ADVANCE(875);
      END_STATE();
    case 668:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 669:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 670:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 672:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 673:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 674:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 675:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 676:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 677:
      if (lookahead == 's') ADVANCE(703);
      END_STATE();
    case 678:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 679:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 680:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(842);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(823);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(950);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(944);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(845);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(843);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(639);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == 'v') ADVANCE(159);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 722:
      if (lookahead == 'u') ADVANCE(733);
      END_STATE();
    case 723:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 724:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 725:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 726:
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 727:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 728:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 729:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 730:
      if (lookahead == 'v') ADVANCE(349);
      END_STATE();
    case 731:
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 732:
      if (lookahead == 'v') ADVANCE(767);
      END_STATE();
    case 733:
      if (lookahead == 'v') ADVANCE(294);
      END_STATE();
    case 734:
      if (lookahead == 'v') ADVANCE(374);
      END_STATE();
    case 735:
      if (lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 736:
      if (lookahead == 'v') ADVANCE(373);
      END_STATE();
    case 737:
      if (lookahead == 'v') ADVANCE(108);
      END_STATE();
    case 738:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 739:
      if (lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 740:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 741:
      if (lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 742:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 743:
      if (lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 744:
      if (lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 745:
      if (lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 746:
      if (lookahead == 'w') ADVANCE(277);
      END_STATE();
    case 747:
      if (lookahead == 'w') ADVANCE(295);
      END_STATE();
    case 748:
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 749:
      if (lookahead == 'w') ADVANCE(375);
      END_STATE();
    case 750:
      if (lookahead == 'x') ADVANCE(568);
      END_STATE();
    case 751:
      if (lookahead == 'x') ADVANCE(942);
      END_STATE();
    case 752:
      if (lookahead == 'y') ADVANCE(816);
      END_STATE();
    case 753:
      if (lookahead == 'y') ADVANCE(818);
      END_STATE();
    case 754:
      if (lookahead == 'y') ADVANCE(940);
      END_STATE();
    case 755:
      if (lookahead == 'y') ADVANCE(810);
      END_STATE();
    case 756:
      if (lookahead == 'y') ADVANCE(850);
      END_STATE();
    case 757:
      if (lookahead == 'y') ADVANCE(936);
      END_STATE();
    case 758:
      if (lookahead == 'y') ADVANCE(908);
      END_STATE();
    case 759:
      if (lookahead == 'y') ADVANCE(912);
      END_STATE();
    case 760:
      if (lookahead == 'y') ADVANCE(938);
      END_STATE();
    case 761:
      if (lookahead == 'y') ADVANCE(918);
      END_STATE();
    case 762:
      if (lookahead == 'y') ADVANCE(910);
      END_STATE();
    case 763:
      if (lookahead == 'y') ADVANCE(922);
      END_STATE();
    case 764:
      if (lookahead == 'y') ADVANCE(916);
      END_STATE();
    case 765:
      if (lookahead == 'y') ADVANCE(914);
      END_STATE();
    case 766:
      if (lookahead == 'y') ADVANCE(920);
      END_STATE();
    case 767:
      if (lookahead == 'y') ADVANCE(817);
      END_STATE();
    case 768:
      if (lookahead == 'y') ADVANCE(660);
      END_STATE();
    case 769:
      if (lookahead == 'y') ADVANCE(526);
      END_STATE();
    case 770:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 771:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 772:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 773:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 774:
      if (lookahead == 'y') ADVANCE(534);
      END_STATE();
    case 775:
      if (lookahead == 'z') ADVANCE(301);
      END_STATE();
    case 776:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(776)
      if (lookahead == '\r') SKIP(776)
      if (lookahead == '"') ADVANCE(952);
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'c') ADVANCE(1147);
      if (lookahead == 'i') ADVANCE(1082);
      if (lookahead == 'm') ADVANCE(1243);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 777:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(777)
      if (lookahead == '\r') SKIP(777)
      if (lookahead == '"') ADVANCE(801);
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'a') ADVANCE(1088);
      if (lookahead == 'b') ADVANCE(1294);
      if (lookahead == 'c') ADVANCE(1191);
      if (lookahead == 'd') ADVANCE(1153);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == 'f') ADVANCE(1165);
      if (lookahead == 'i') ADVANCE(1237);
      if (lookahead == 'l') ADVANCE(1154);
      if (lookahead == 'm') ADVANCE(1247);
      if (lookahead == 'r') ADVANCE(1097);
      if (lookahead == 's') ADVANCE(1117);
      if (lookahead == 'v') ADVANCE(1005);
      if (lookahead == '}') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 778:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(778)
      if (lookahead == '\r') SKIP(778)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == '<') ADVANCE(878);
      if (lookahead == '=') ADVANCE(806);
      if (lookahead == '>') ADVANCE(877);
      if (lookahead == 'a') ADVANCE(1089);
      if (lookahead == 'c') ADVANCE(1191);
      if (lookahead == 'd') ADVANCE(1153);
      if (lookahead == 'f') ADVANCE(1165);
      if (lookahead == 'l') ADVANCE(1241);
      if (lookahead == 'm') ADVANCE(1247);
      if (lookahead == 'r') ADVANCE(1097);
      if (lookahead == 's') ADVANCE(1118);
      if (lookahead == '}') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 779:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(779)
      if (lookahead == '\r') SKIP(779)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'f') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'm') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '}') ADVANCE(808);
      END_STATE();
    case 780:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(780)
      if (lookahead == '\r') SKIP(780)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == 'h') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == '}') ADVANCE(808);
      END_STATE();
    case 781:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(781)
      if (lookahead == '\r') SKIP(781)
      if (lookahead == '"') ADVANCE(952);
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(536);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == 'f') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '}') ADVANCE(808);
      END_STATE();
    case 782:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(782)
      if (lookahead == '\r') SKIP(782)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'c') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'm') ADVANCE(1243);
      if (lookahead == '}') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 783:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(783)
      if (lookahead == '\r') SKIP(783)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'c') ADVANCE(1149);
      if (lookahead == 'm') ADVANCE(1243);
      if (lookahead == '}') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 784:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(784)
      if (lookahead == '\r') SKIP(784)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'l') ADVANCE(1004);
      if (lookahead == 'm') ADVANCE(1243);
      if (lookahead == '}') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 785:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(785)
      if (lookahead == '\r') SKIP(785)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(799);
      if (lookahead == 'm') ADVANCE(1243);
      if (lookahead == 'v') ADVANCE(1020);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 786:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(786)
      if (lookahead == '\r') SKIP(786)
      if (lookahead == '"') ADVANCE(953);
      if (lookahead == '#') ADVANCE(1380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1379);
      END_STATE();
    case 787:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(787)
      if (lookahead == '\r') SKIP(787)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'a') ADVANCE(1295);
      if (lookahead == 'm') ADVANCE(1243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 788:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(788)
      if (lookahead == '\r') SKIP(788)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'c') ADVANCE(1345);
      if (lookahead == 'm') ADVANCE(1243);
      if (lookahead == '}') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 789:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(789)
      if (lookahead == '\r') SKIP(789)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'c') ADVANCE(1246);
      if (lookahead == 'm') ADVANCE(1243);
      if (lookahead == '}') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 790:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(796);
      END_STATE();
    case 791:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 792:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(796);
      END_STATE();
    case 793:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(956);
      END_STATE();
    case 794:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 795:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(797);
      END_STATE();
    case 796:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(957);
      END_STATE();
    case 797:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(794);
      END_STATE();
    case 798:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(797);
      END_STATE();
    case 799:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(961);
      END_STATE();
    case 800:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(1380);
      if (lookahead == '\r') ADVANCE(1381);
      END_STATE();
    case 801:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 802:
      if (eof) ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(802)
      if (lookahead == '\r') SKIP(802)
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(799);
      if (lookahead == 'm') ADVANCE(1243);
      if (lookahead == '{') ADVANCE(807);
      if (lookahead == '}') ADVANCE(808);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_ideas);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_ideas);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_country);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_country);
      if (lookahead == '_') ADVANCE(477);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_characters);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_characters);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_portraits);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_civilian);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_army);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_navy);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_navy);
      if (lookahead == '_') ADVANCE(474);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_large);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_small);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_country_leader);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_advisor);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_idea_token);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_field_marshal);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_corps_commander);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_navy_leader);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_law);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_law);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_available);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_allowed);
      if (lookahead == '_') ADVANCE(196);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_allowed_civil_war);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_cancel);
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_ai_will_do);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_modifier);
      if (lookahead == '@') ADVANCE(962);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_on_add);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_ledger);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_air);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_cost);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_removal_cost);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_cancel_if_invalid);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_expire);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_ideology);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_legacy_id);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_attack_skill);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_defense_skill);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_maneuvering_skill);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_coordination_skill);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_planning_skill);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_logistics_skill);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_traits);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_check_variable);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_check_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_compare);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_less_than);
      if (lookahead == '_') ADVANCE(555);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_less_than_or_equals);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_greater_than);
      if (lookahead == '_') ADVANCE(564);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_greater_than_or_equals);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_not_equals);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_custom_modifier_tooltip);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_custom_modifier_tooltip);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_log_effect_token1);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_set_variable);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_set_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_add_to_variable);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_add_to_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_subtract_from_variable);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_subtract_from_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_multiply_variable);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_multiply_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_divide_variable);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_divide_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_modulo_variable);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_modulo_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_set_temp_variable);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_set_temp_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_add_to_temp_variable);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_add_to_temp_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_subtract_from_temp_variable);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_subtract_from_temp_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_multiply_temp_variable);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_multiply_temp_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_divide_temp_variable);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_divide_temp_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_modulo_temp_variable);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_modulo_temp_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_add_to_array);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_add_to_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_remove_from_array);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_remove_from_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_resize_array);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_resize_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_find_highest_in_array);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_find_highest_in_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_find_lowest_in_array);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_find_lowest_in_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_add_to_temp_array);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_add_to_temp_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_remove_from_temp_array);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_remove_from_temp_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_resize_temp_array);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_resize_temp_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_clamp_variable);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_clamp_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_clamp_temp_variable);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_clamp_temp_variable);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_add_dynamic_modifier);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_add_dynamic_modifier);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_remove_dynamic_modifier);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_remove_dynamic_modifier);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_clear_array);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_clear_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_clear_temp_array);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_clear_temp_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_limit);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(954);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(956);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(961);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '@') ADVANCE(962);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == '_') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'e') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1297);
      if (lookahead == 't') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1298);
      if (lookahead == 't') ADVANCE(1129);
      if (lookahead == 'v') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1299);
      if (lookahead == 't') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1301);
      if (lookahead == 'v') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1302);
      if (lookahead == 't') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'c') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'c') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'c') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'c') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'c') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1372);
      if (lookahead == 't') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1084);
      if (lookahead == 'r') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1374);
      if (lookahead == 'f') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1328);
      if (lookahead == 't') ADVANCE(1007);
      if (lookahead == 'u') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1328);
      if (lookahead == 'u') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'f') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'f') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'f') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'f') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'f') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'g') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'g') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'h') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'h') ADVANCE(1159);
      if (lookahead == 'l') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'h') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'h') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1140);
      if (lookahead == 'u') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'o') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'k') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'k') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1244);
      if (lookahead == 's') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'm') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1086);
      if (lookahead == 'u') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'p') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'r') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 's') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 's') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 's') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 's') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 's') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1127);
      if (lookahead == 'v') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1131);
      if (lookahead == 'v') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1134);
      if (lookahead == 'v') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1136);
      if (lookahead == 'v') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1137);
      if (lookahead == 'v') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1138);
      if (lookahead == 'v') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'u') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'u') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'u') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'v') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'w') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'w') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'x') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'y') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (lookahead == 'z') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1376);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_gfx_string_token1);
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_gfx_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1379);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1380);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1380);
      if (lookahead == '\\') ADVANCE(800);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 776},
  [2] = {.lex_state = 777},
  [3] = {.lex_state = 777},
  [4] = {.lex_state = 778},
  [5] = {.lex_state = 778},
  [6] = {.lex_state = 778},
  [7] = {.lex_state = 778},
  [8] = {.lex_state = 778},
  [9] = {.lex_state = 778},
  [10] = {.lex_state = 778},
  [11] = {.lex_state = 778},
  [12] = {.lex_state = 778},
  [13] = {.lex_state = 778},
  [14] = {.lex_state = 777},
  [15] = {.lex_state = 777},
  [16] = {.lex_state = 777},
  [17] = {.lex_state = 778},
  [18] = {.lex_state = 778},
  [19] = {.lex_state = 778},
  [20] = {.lex_state = 779},
  [21] = {.lex_state = 778},
  [22] = {.lex_state = 778},
  [23] = {.lex_state = 778},
  [24] = {.lex_state = 778},
  [25] = {.lex_state = 779},
  [26] = {.lex_state = 778},
  [27] = {.lex_state = 778},
  [28] = {.lex_state = 778},
  [29] = {.lex_state = 778},
  [30] = {.lex_state = 778},
  [31] = {.lex_state = 779},
  [32] = {.lex_state = 778},
  [33] = {.lex_state = 778},
  [34] = {.lex_state = 778},
  [35] = {.lex_state = 778},
  [36] = {.lex_state = 778},
  [37] = {.lex_state = 778},
  [38] = {.lex_state = 778},
  [39] = {.lex_state = 778},
  [40] = {.lex_state = 778},
  [41] = {.lex_state = 778},
  [42] = {.lex_state = 778},
  [43] = {.lex_state = 780},
  [44] = {.lex_state = 780},
  [45] = {.lex_state = 780},
  [46] = {.lex_state = 780},
  [47] = {.lex_state = 779},
  [48] = {.lex_state = 779},
  [49] = {.lex_state = 779},
  [50] = {.lex_state = 779},
  [51] = {.lex_state = 779},
  [52] = {.lex_state = 779},
  [53] = {.lex_state = 779},
  [54] = {.lex_state = 779},
  [55] = {.lex_state = 779},
  [56] = {.lex_state = 779},
  [57] = {.lex_state = 779},
  [58] = {.lex_state = 779},
  [59] = {.lex_state = 779},
  [60] = {.lex_state = 779},
  [61] = {.lex_state = 779},
  [62] = {.lex_state = 779},
  [63] = {.lex_state = 779},
  [64] = {.lex_state = 779},
  [65] = {.lex_state = 781},
  [66] = {.lex_state = 781},
  [67] = {.lex_state = 781},
  [68] = {.lex_state = 781},
  [69] = {.lex_state = 779},
  [70] = {.lex_state = 779},
  [71] = {.lex_state = 779},
  [72] = {.lex_state = 781},
  [73] = {.lex_state = 781},
  [74] = {.lex_state = 781},
  [75] = {.lex_state = 781},
  [76] = {.lex_state = 781},
  [77] = {.lex_state = 781},
  [78] = {.lex_state = 782},
  [79] = {.lex_state = 781},
  [80] = {.lex_state = 783},
  [81] = {.lex_state = 783},
  [82] = {.lex_state = 783},
  [83] = {.lex_state = 783},
  [84] = {.lex_state = 783},
  [85] = {.lex_state = 783},
  [86] = {.lex_state = 783},
  [87] = {.lex_state = 783},
  [88] = {.lex_state = 783},
  [89] = {.lex_state = 783},
  [90] = {.lex_state = 788},
  [91] = {.lex_state = 788},
  [92] = {.lex_state = 789},
  [93] = {.lex_state = 788},
  [94] = {.lex_state = 789},
  [95] = {.lex_state = 789},
  [96] = {.lex_state = 779},
  [97] = {.lex_state = 779},
  [98] = {.lex_state = 779},
  [99] = {.lex_state = 779},
  [100] = {.lex_state = 779},
  [101] = {.lex_state = 779},
  [102] = {.lex_state = 779},
  [103] = {.lex_state = 779},
  [104] = {.lex_state = 779},
  [105] = {.lex_state = 784},
  [106] = {.lex_state = 781},
  [107] = {.lex_state = 785},
  [108] = {.lex_state = 786},
  [109] = {.lex_state = 781},
  [110] = {.lex_state = 786},
  [111] = {.lex_state = 781},
  [112] = {.lex_state = 786},
  [113] = {.lex_state = 786},
  [114] = {.lex_state = 781},
  [115] = {.lex_state = 802},
  [116] = {.lex_state = 802},
  [117] = {.lex_state = 787},
  [118] = {.lex_state = 785},
  [119] = {.lex_state = 802},
  [120] = {.lex_state = 802},
  [121] = {.lex_state = 802},
  [122] = {.lex_state = 802},
  [123] = {.lex_state = 802},
  [124] = {.lex_state = 802},
  [125] = {.lex_state = 780},
  [126] = {.lex_state = 780},
  [127] = {.lex_state = 802},
  [128] = {.lex_state = 802},
  [129] = {.lex_state = 780},
  [130] = {.lex_state = 802},
  [131] = {.lex_state = 802},
  [132] = {.lex_state = 779},
  [133] = {.lex_state = 802},
  [134] = {.lex_state = 802},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 786},
  [138] = {.lex_state = 780},
  [139] = {.lex_state = 802},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 783},
  [142] = {.lex_state = 802},
  [143] = {.lex_state = 783},
  [144] = {.lex_state = 783},
  [145] = {.lex_state = 783},
  [146] = {.lex_state = 788},
  [147] = {.lex_state = 783},
  [148] = {.lex_state = 788},
  [149] = {.lex_state = 788},
  [150] = {.lex_state = 802},
  [151] = {.lex_state = 783},
  [152] = {.lex_state = 788},
  [153] = {.lex_state = 788},
  [154] = {.lex_state = 783},
  [155] = {.lex_state = 783},
  [156] = {.lex_state = 802},
  [157] = {.lex_state = 802},
  [158] = {.lex_state = 802},
  [159] = {.lex_state = 802},
  [160] = {.lex_state = 780},
  [161] = {.lex_state = 783},
  [162] = {.lex_state = 780},
  [163] = {.lex_state = 783},
  [164] = {.lex_state = 789},
  [165] = {.lex_state = 789},
  [166] = {.lex_state = 802},
  [167] = {.lex_state = 802},
  [168] = {.lex_state = 802},
  [169] = {.lex_state = 802},
  [170] = {.lex_state = 789},
  [171] = {.lex_state = 789},
  [172] = {.lex_state = 789},
  [173] = {.lex_state = 802},
  [174] = {.lex_state = 802},
  [175] = {.lex_state = 802},
  [176] = {.lex_state = 802},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 802},
  [179] = {.lex_state = 802},
  [180] = {.lex_state = 802},
  [181] = {.lex_state = 802},
  [182] = {.lex_state = 802},
  [183] = {.lex_state = 802},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 802},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 802},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 802},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 802},
  [193] = {.lex_state = 802},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 802},
  [196] = {.lex_state = 802},
  [197] = {.lex_state = 802},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 802},
  [200] = {.lex_state = 802},
  [201] = {.lex_state = 802},
  [202] = {.lex_state = 776},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 786},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 786},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 776},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 779},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 776},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 777},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 776},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 776},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ideas] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_country] = ACTIONS(1),
    [anon_sym_characters] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_portraits] = ACTIONS(1),
    [anon_sym_civilian] = ACTIONS(1),
    [anon_sym_army] = ACTIONS(1),
    [anon_sym_navy] = ACTIONS(1),
    [anon_sym_large] = ACTIONS(1),
    [anon_sym_small] = ACTIONS(1),
    [anon_sym_country_leader] = ACTIONS(1),
    [anon_sym_advisor] = ACTIONS(1),
    [anon_sym_slot] = ACTIONS(1),
    [anon_sym_idea_token] = ACTIONS(1),
    [anon_sym_field_marshal] = ACTIONS(1),
    [anon_sym_corps_commander] = ACTIONS(1),
    [anon_sym_navy_leader] = ACTIONS(1),
    [anon_sym_law] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_available] = ACTIONS(1),
    [anon_sym_allowed] = ACTIONS(1),
    [anon_sym_allowed_civil_war] = ACTIONS(1),
    [anon_sym_cancel] = ACTIONS(1),
    [anon_sym_ai_will_do] = ACTIONS(1),
    [anon_sym_modifier] = ACTIONS(1),
    [anon_sym_on_add] = ACTIONS(1),
    [anon_sym_ledger] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_air] = ACTIONS(1),
    [anon_sym_cost] = ACTIONS(1),
    [anon_sym_removal_cost] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_cancel_if_invalid] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_expire] = ACTIONS(1),
    [anon_sym_ideology] = ACTIONS(1),
    [anon_sym_legacy_id] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_attack_skill] = ACTIONS(1),
    [anon_sym_defense_skill] = ACTIONS(1),
    [anon_sym_maneuvering_skill] = ACTIONS(1),
    [anon_sym_coordination_skill] = ACTIONS(1),
    [anon_sym_planning_skill] = ACTIONS(1),
    [anon_sym_logistics_skill] = ACTIONS(1),
    [anon_sym_traits] = ACTIONS(1),
    [anon_sym_check_variable] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_compare] = ACTIONS(1),
    [anon_sym_less_than] = ACTIONS(1),
    [anon_sym_less_than_or_equals] = ACTIONS(1),
    [anon_sym_greater_than] = ACTIONS(1),
    [anon_sym_greater_than_or_equals] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_tooltip] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_custom_modifier_tooltip] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_set_variable] = ACTIONS(1),
    [anon_sym_add_to_variable] = ACTIONS(1),
    [anon_sym_subtract_from_variable] = ACTIONS(1),
    [anon_sym_multiply_variable] = ACTIONS(1),
    [anon_sym_divide_variable] = ACTIONS(1),
    [anon_sym_modulo_variable] = ACTIONS(1),
    [anon_sym_set_temp_variable] = ACTIONS(1),
    [anon_sym_add_to_temp_variable] = ACTIONS(1),
    [anon_sym_subtract_from_temp_variable] = ACTIONS(1),
    [anon_sym_multiply_temp_variable] = ACTIONS(1),
    [anon_sym_divide_temp_variable] = ACTIONS(1),
    [anon_sym_modulo_temp_variable] = ACTIONS(1),
    [anon_sym_add_to_array] = ACTIONS(1),
    [anon_sym_remove_from_array] = ACTIONS(1),
    [anon_sym_resize_array] = ACTIONS(1),
    [anon_sym_find_highest_in_array] = ACTIONS(1),
    [anon_sym_find_lowest_in_array] = ACTIONS(1),
    [anon_sym_add_to_temp_array] = ACTIONS(1),
    [anon_sym_remove_from_temp_array] = ACTIONS(1),
    [anon_sym_resize_temp_array] = ACTIONS(1),
    [anon_sym_clamp_variable] = ACTIONS(1),
    [anon_sym_clamp_temp_variable] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_add_dynamic_modifier] = ACTIONS(1),
    [anon_sym_remove_dynamic_modifier] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_clear_array] = ACTIONS(1),
    [anon_sym_clear_temp_array] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_limit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_gfx_string_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_translation_unit] = STATE(327),
    [sym_ideas_declarations] = STATE(326),
    [sym_character_declarations] = STATE(326),
    [sym_function_declarations] = STATE(326),
    [sym_function_declaration] = STATE(124),
    [sym_identifier] = STATE(324),
    [aux_sym_function_declarations_repeat1] = STATE(124),
    [anon_sym_ideas] = ACTIONS(5),
    [anon_sym_characters] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [aux_sym_identifier_token2] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(29), 1,
      anon_sym_limit,
    STATE(10), 1,
      sym_limit_trigger_block,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    STATE(14), 2,
      sym_for_loop_limits,
      aux_sym_effect_limit_block_repeat1,
    ACTIONS(15), 6,
      anon_sym_value,
      anon_sym_array,
      anon_sym_index,
      anon_sym_start,
      anon_sym_end,
      anon_sym_break,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(7), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [85] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(29), 1,
      anon_sym_limit,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_limit_trigger_block,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    STATE(2), 2,
      sym_for_loop_limits,
      aux_sym_effect_limit_block_repeat1,
    ACTIONS(15), 6,
      anon_sym_value,
      anon_sym_array,
      anon_sym_index,
      anon_sym_start,
      anon_sym_end,
      anon_sym_break,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(5), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [170] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(11), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [237] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_log,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(11), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [304] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_log,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(7), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [371] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(11), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [438] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(11), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [505] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(8), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [572] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(12), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [639] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_log,
    ACTIONS(61), 1,
      aux_sym_identifier_token1,
    ACTIONS(64), 1,
      aux_sym_identifier_token2,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(52), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(55), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(58), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(49), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(11), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(46), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [706] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(11), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [773] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(17), 1,
      anon_sym_log,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(25), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(27), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(21), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(4), 10,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_array_math_effect,
      sym_clamp_variable_effect,
      sym_dynamic_modifier_effect,
      sym_clear_array,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(19), 12,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    STATE(14), 2,
      sym_for_loop_limits,
      aux_sym_effect_limit_block_repeat1,
    ACTIONS(73), 6,
      anon_sym_value,
      anon_sym_array,
      anon_sym_index,
      anon_sym_start,
      anon_sym_end,
      anon_sym_break,
    ACTIONS(76), 29,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      anon_sym_limit,
      aux_sym_identifier_token2,
  [891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(80), 35,
      anon_sym_value,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      anon_sym_array,
      anon_sym_index,
      anon_sym_start,
      anon_sym_end,
      anon_sym_break,
      anon_sym_limit,
      aux_sym_identifier_token2,
  [936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(84), 35,
      anon_sym_value,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      anon_sym_array,
      anon_sym_index,
      anon_sym_start,
      anon_sym_end,
      anon_sym_break,
      anon_sym_limit,
      aux_sym_identifier_token2,
  [981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
    ACTIONS(80), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(88), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(92), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1098] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_modifier,
    ACTIONS(104), 1,
      anon_sym_on_add,
    ACTIONS(106), 1,
      anon_sym_ledger,
    ACTIONS(110), 1,
      anon_sym_picture,
    ACTIONS(112), 1,
      anon_sym_default,
    ACTIONS(114), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(116), 1,
      anon_sym_traits,
    ACTIONS(96), 2,
      anon_sym_slot,
      anon_sym_idea_token,
    ACTIONS(100), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(108), 2,
      anon_sym_cost,
      anon_sym_removal_cost,
    ACTIONS(98), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(25), 13,
      sym__advisor_content,
      sym_idea_advisor_content,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      sym_traits,
      aux_sym_character_advisor_repeat1,
  [1158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(120), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(124), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(128), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(132), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1310] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      anon_sym_modifier,
    ACTIONS(148), 1,
      anon_sym_on_add,
    ACTIONS(151), 1,
      anon_sym_ledger,
    ACTIONS(157), 1,
      anon_sym_picture,
    ACTIONS(160), 1,
      anon_sym_default,
    ACTIONS(163), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(166), 1,
      anon_sym_traits,
    ACTIONS(136), 2,
      anon_sym_slot,
      anon_sym_idea_token,
    ACTIONS(142), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(154), 2,
      anon_sym_cost,
      anon_sym_removal_cost,
    ACTIONS(139), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(25), 13,
      sym__advisor_content,
      sym_idea_advisor_content,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      sym_traits,
      aux_sym_character_advisor_repeat1,
  [1370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(171), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(175), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(179), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(183), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(187), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1560] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_modifier,
    ACTIONS(104), 1,
      anon_sym_on_add,
    ACTIONS(106), 1,
      anon_sym_ledger,
    ACTIONS(110), 1,
      anon_sym_picture,
    ACTIONS(112), 1,
      anon_sym_default,
    ACTIONS(114), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(116), 1,
      anon_sym_traits,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 2,
      anon_sym_slot,
      anon_sym_idea_token,
    ACTIONS(100), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(108), 2,
      anon_sym_cost,
      anon_sym_removal_cost,
    ACTIONS(98), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(20), 13,
      sym__advisor_content,
      sym_idea_advisor_content,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      sym_traits,
      aux_sym_character_advisor_repeat1,
  [1620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(193), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(197), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(201), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(205), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(209), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(213), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(217), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(221), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(225), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [1962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(229), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [2000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(233), 28,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_multiply_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_multiply_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
      aux_sym_identifier_token2,
  [2038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_allowed,
      anon_sym_cancel,
      anon_sym_id,
    ACTIONS(235), 26,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_skill,
      anon_sym_attack_skill,
      anon_sym_defense_skill,
      anon_sym_maneuvering_skill,
      anon_sym_coordination_skill,
      anon_sym_planning_skill,
      anon_sym_logistics_skill,
      anon_sym_traits,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_allowed,
      anon_sym_cancel,
      anon_sym_id,
    ACTIONS(239), 26,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_skill,
      anon_sym_attack_skill,
      anon_sym_defense_skill,
      anon_sym_maneuvering_skill,
      anon_sym_coordination_skill,
      anon_sym_planning_skill,
      anon_sym_logistics_skill,
      anon_sym_traits,
  [2112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_allowed,
      anon_sym_cancel,
      anon_sym_id,
    ACTIONS(243), 26,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_skill,
      anon_sym_attack_skill,
      anon_sym_defense_skill,
      anon_sym_maneuvering_skill,
      anon_sym_coordination_skill,
      anon_sym_planning_skill,
      anon_sym_logistics_skill,
      anon_sym_traits,
  [2149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_allowed,
      anon_sym_cancel,
      anon_sym_id,
    ACTIONS(78), 26,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_traits,
      anon_sym_value,
      anon_sym_compare,
      anon_sym_min,
      anon_sym_max,
      anon_sym_scope,
      anon_sym_days,
      anon_sym_index,
  [2186] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_modifier,
    ACTIONS(104), 1,
      anon_sym_on_add,
    ACTIONS(106), 1,
      anon_sym_ledger,
    ACTIONS(110), 1,
      anon_sym_picture,
    ACTIONS(112), 1,
      anon_sym_default,
    ACTIONS(114), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(108), 2,
      anon_sym_cost,
      anon_sym_removal_cost,
    ACTIONS(98), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(48), 10,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [2236] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      anon_sym_modifier,
    ACTIONS(260), 1,
      anon_sym_on_add,
    ACTIONS(263), 1,
      anon_sym_ledger,
    ACTIONS(269), 1,
      anon_sym_picture,
    ACTIONS(272), 1,
      anon_sym_default,
    ACTIONS(275), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(254), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(266), 2,
      anon_sym_cost,
      anon_sym_removal_cost,
    ACTIONS(251), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(48), 10,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [2286] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_modifier,
    ACTIONS(104), 1,
      anon_sym_on_add,
    ACTIONS(106), 1,
      anon_sym_ledger,
    ACTIONS(110), 1,
      anon_sym_picture,
    ACTIONS(112), 1,
      anon_sym_default,
    ACTIONS(114), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(108), 2,
      anon_sym_cost,
      anon_sym_removal_cost,
    ACTIONS(98), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(47), 10,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(280), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(284), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(288), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(292), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(195), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(296), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(300), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(304), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(308), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(312), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(316), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(173), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(320), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(324), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(328), 15,
      anon_sym_RBRACE,
      anon_sym_slot,
      anon_sym_idea_token,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_cost,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_traits,
  [2711] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_traits,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 2,
      anon_sym_legacy_id,
      anon_sym_id,
    STATE(66), 5,
      sym__commander_content,
      sym_id,
      sym_skill,
      sym_traits,
      aux_sym_character_commander_repeat1,
    ACTIONS(336), 7,
      anon_sym_skill,
      anon_sym_attack_skill,
      anon_sym_defense_skill,
      anon_sym_maneuvering_skill,
      anon_sym_coordination_skill,
      anon_sym_planning_skill,
      anon_sym_logistics_skill,
  [2741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_traits,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 2,
      anon_sym_legacy_id,
      anon_sym_id,
    STATE(67), 5,
      sym__commander_content,
      sym_id,
      sym_skill,
      sym_traits,
      aux_sym_character_commander_repeat1,
    ACTIONS(336), 7,
      anon_sym_skill,
      anon_sym_attack_skill,
      anon_sym_defense_skill,
      anon_sym_maneuvering_skill,
      anon_sym_coordination_skill,
      anon_sym_planning_skill,
      anon_sym_logistics_skill,
  [2771] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      anon_sym_traits,
    ACTIONS(342), 2,
      anon_sym_legacy_id,
      anon_sym_id,
    STATE(67), 5,
      sym__commander_content,
      sym_id,
      sym_skill,
      sym_traits,
      aux_sym_character_commander_repeat1,
    ACTIONS(345), 7,
      anon_sym_skill,
      anon_sym_attack_skill,
      anon_sym_defense_skill,
      anon_sym_maneuvering_skill,
      anon_sym_coordination_skill,
      anon_sym_planning_skill,
      anon_sym_logistics_skill,
  [2801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_id,
    ACTIONS(351), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_traits,
      anon_sym_DQUOTE,
  [2824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(357), 1,
      anon_sym_name,
    ACTIONS(359), 1,
      anon_sym_portraits,
    ACTIONS(361), 1,
      anon_sym_country_leader,
    ACTIONS(363), 1,
      anon_sym_advisor,
    ACTIONS(365), 3,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
    STATE(71), 7,
      sym__character_content,
      sym_character_name,
      sym_character_portraits,
      sym_character_country_leader,
      sym_character_advisor,
      sym_character_commander,
      aux_sym_character_repeat1,
  [2857] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_name,
    ACTIONS(372), 1,
      anon_sym_portraits,
    ACTIONS(375), 1,
      anon_sym_country_leader,
    ACTIONS(378), 1,
      anon_sym_advisor,
    ACTIONS(381), 3,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
    STATE(70), 7,
      sym__character_content,
      sym_character_name,
      sym_character_portraits,
      sym_character_country_leader,
      sym_character_advisor,
      sym_character_commander,
      aux_sym_character_repeat1,
  [2890] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_name,
    ACTIONS(359), 1,
      anon_sym_portraits,
    ACTIONS(361), 1,
      anon_sym_country_leader,
    ACTIONS(363), 1,
      anon_sym_advisor,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 3,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
    STATE(70), 7,
      sym__character_content,
      sym_character_name,
      sym_character_portraits,
      sym_character_country_leader,
      sym_character_advisor,
      sym_character_commander,
      aux_sym_character_repeat1,
  [2923] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_traits,
    ACTIONS(334), 1,
      anon_sym_legacy_id,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 1,
      anon_sym_desc,
    ACTIONS(390), 1,
      anon_sym_expire,
    ACTIONS(392), 1,
      anon_sym_ideology,
    ACTIONS(394), 1,
      anon_sym_id,
    STATE(77), 7,
      sym__country_leader_content,
      sym_desc,
      sym_expire,
      sym_ideology,
      sym_id,
      sym_traits,
      aux_sym_character_country_leader_repeat1,
  [2957] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      anon_sym_desc,
    ACTIONS(401), 1,
      anon_sym_expire,
    ACTIONS(404), 1,
      anon_sym_ideology,
    ACTIONS(407), 1,
      anon_sym_legacy_id,
    ACTIONS(410), 1,
      anon_sym_id,
    ACTIONS(413), 1,
      anon_sym_traits,
    STATE(73), 7,
      sym__country_leader_content,
      sym_desc,
      sym_expire,
      sym_ideology,
      sym_id,
      sym_traits,
      aux_sym_character_country_leader_repeat1,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_id,
    ACTIONS(416), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_traits,
  [3013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_id,
    ACTIONS(420), 13,
      anon_sym_RBRACE,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_skill,
      anon_sym_attack_skill,
      anon_sym_defense_skill,
      anon_sym_maneuvering_skill,
      anon_sym_coordination_skill,
      anon_sym_planning_skill,
      anon_sym_logistics_skill,
      anon_sym_traits,
  [3035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_id,
    ACTIONS(424), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_traits,
  [3057] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_traits,
    ACTIONS(334), 1,
      anon_sym_legacy_id,
    ACTIONS(388), 1,
      anon_sym_desc,
    ACTIONS(390), 1,
      anon_sym_expire,
    ACTIONS(392), 1,
      anon_sym_ideology,
    ACTIONS(394), 1,
      anon_sym_id,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(73), 7,
      sym__country_leader_content,
      sym_desc,
      sym_expire,
      sym_ideology,
      sym_id,
      sym_traits,
      aux_sym_character_country_leader_repeat1,
  [3091] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(434), 1,
      anon_sym_limit,
    STATE(82), 1,
      sym_limit_trigger_block,
    STATE(185), 1,
      sym_identifier,
    STATE(81), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 11,
      anon_sym_RBRACE,
      anon_sym_legacy_id,
      anon_sym_id,
      anon_sym_skill,
      anon_sym_attack_skill,
      anon_sym_defense_skill,
      anon_sym_maneuvering_skill,
      anon_sym_coordination_skill,
      anon_sym_planning_skill,
      anon_sym_logistics_skill,
      anon_sym_traits,
  [3140] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(83), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3166] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(84), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3192] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(87), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3218] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(84), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3244] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(446), 1,
      anon_sym_check_variable,
    ACTIONS(449), 1,
      aux_sym_identifier_token1,
    ACTIONS(452), 1,
      aux_sym_identifier_token2,
    STATE(185), 1,
      sym_identifier,
    STATE(84), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3270] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(86), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(84), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3322] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(84), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(84), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3374] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(432), 1,
      anon_sym_check_variable,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_identifier,
    STATE(88), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [3400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      anon_sym_custom_modifier_tooltip,
    STATE(250), 1,
      sym_identifier,
    STATE(91), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [3425] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(467), 1,
      anon_sym_custom_modifier_tooltip,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      sym_identifier,
    STATE(93), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [3450] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_country,
    ACTIONS(476), 1,
      aux_sym_identifier_token1,
    ACTIONS(479), 1,
      aux_sym_identifier_token2,
    STATE(308), 1,
      sym_identifier,
    STATE(92), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declarations_repeat1,
  [3475] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(484), 1,
      anon_sym_custom_modifier_tooltip,
    ACTIONS(487), 1,
      aux_sym_identifier_token1,
    ACTIONS(490), 1,
      aux_sym_identifier_token2,
    STATE(250), 1,
      sym_identifier,
    STATE(93), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [3500] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      anon_sym_country,
    STATE(308), 1,
      sym_identifier,
    STATE(95), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declarations_repeat1,
  [3525] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(495), 1,
      anon_sym_country,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_identifier,
    STATE(92), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declarations_repeat1,
  [3550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_portraits,
      anon_sym_country_leader,
      anon_sym_advisor,
      anon_sym_field_marshal,
      anon_sym_corps_commander,
      anon_sym_navy_leader,
  [3676] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      anon_sym_law,
    STATE(130), 1,
      sym_law_yes,
    STATE(241), 1,
      sym_identifier,
    STATE(116), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [3702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_id,
    ACTIONS(521), 6,
      anon_sym_RBRACE,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_traits,
  [3717] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(525), 1,
      anon_sym_var,
    ACTIONS(527), 1,
      sym_number,
    STATE(187), 1,
      sym_identifier,
    STATE(263), 2,
      sym_check_variable_long,
      sym_check_variable_short,
  [3740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      aux_sym_gfx_string_token1,
    ACTIONS(533), 1,
      aux_sym_gfx_key_token1,
    STATE(114), 4,
      sym__loc_key_string,
      sym_loc_string,
      sym_loc_key_enclosed,
      sym_loc_key,
  [3759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_id,
    ACTIONS(535), 6,
      anon_sym_RBRACE,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_traits,
  [3774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      aux_sym_gfx_string_token1,
    ACTIONS(533), 1,
      aux_sym_gfx_key_token1,
    STATE(306), 4,
      sym__loc_key_string,
      sym_loc_string,
      sym_loc_key_enclosed,
      sym_loc_key,
  [3793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_id,
    ACTIONS(539), 6,
      anon_sym_RBRACE,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_traits,
  [3808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      aux_sym_gfx_string_token1,
    ACTIONS(533), 1,
      aux_sym_gfx_key_token1,
    STATE(104), 4,
      sym__loc_key_string,
      sym_loc_string,
      sym_loc_key_enclosed,
      sym_loc_key,
  [3827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    ACTIONS(545), 1,
      aux_sym_gfx_string_token1,
    ACTIONS(547), 1,
      aux_sym_gfx_key_token1,
    STATE(153), 4,
      sym__loc_key_string,
      sym_loc_string,
      sym_loc_key_enclosed,
      sym_loc_key,
  [3846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_id,
    ACTIONS(549), 6,
      anon_sym_RBRACE,
      anon_sym_desc,
      anon_sym_expire,
      anon_sym_ideology,
      anon_sym_legacy_id,
      anon_sym_traits,
  [3861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    ACTIONS(555), 1,
      aux_sym_identifier_token1,
    ACTIONS(558), 1,
      aux_sym_identifier_token2,
    STATE(305), 1,
      sym_identifier,
    STATE(115), 2,
      sym_character,
      aux_sym_character_declarations_repeat1,
  [3881] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_identifier,
    STATE(127), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [3901] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(563), 1,
      anon_sym_array,
    STATE(230), 1,
      sym_identifier,
    STATE(228), 2,
      sym_math_effect_short,
      sym_array_math_effect_long,
  [3921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(565), 1,
      anon_sym_var,
    STATE(230), 1,
      sym_identifier,
    STATE(231), 2,
      sym_math_effect_short,
      sym_variable_math_effect_long,
  [3941] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    ACTIONS(569), 1,
      sym_number,
    ACTIONS(571), 1,
      aux_sym_identifier_token1,
    ACTIONS(573), 1,
      aux_sym_identifier_token2,
    STATE(141), 1,
      sym_trigger_limit_block,
    STATE(163), 1,
      sym_identifier,
  [3963] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_identifier,
    STATE(122), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [3983] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    ACTIONS(579), 1,
      aux_sym_identifier_token1,
    ACTIONS(582), 1,
      aux_sym_identifier_token2,
    STATE(324), 1,
      sym_identifier,
    STATE(121), 2,
      sym_function_declaration,
      aux_sym_function_declarations_repeat1,
  [4003] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_identifier,
    STATE(127), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [4023] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_identifier,
    STATE(127), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [4043] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    STATE(324), 1,
      sym_identifier,
    STATE(121), 2,
      sym_function_declaration,
      aux_sym_function_declarations_repeat1,
  [4063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    STATE(126), 2,
      sym_character_portrait,
      aux_sym_character_portraits_repeat1,
    ACTIONS(593), 3,
      anon_sym_civilian,
      anon_sym_army,
      anon_sym_navy,
  [4079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    STATE(129), 2,
      sym_character_portrait,
      aux_sym_character_portraits_repeat1,
    ACTIONS(593), 3,
      anon_sym_civilian,
      anon_sym_army,
      anon_sym_navy,
  [4095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      aux_sym_identifier_token1,
    ACTIONS(602), 1,
      aux_sym_identifier_token2,
    STATE(241), 1,
      sym_identifier,
    STATE(127), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [4115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_identifier,
    STATE(131), 2,
      sym_character,
      aux_sym_character_declarations_repeat1,
  [4135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(129), 2,
      sym_character_portrait,
      aux_sym_character_portraits_repeat1,
    ACTIONS(609), 3,
      anon_sym_civilian,
      anon_sym_army,
      anon_sym_navy,
  [4151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_identifier,
    STATE(123), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [4171] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_identifier,
    STATE(115), 2,
      sym_character,
      aux_sym_character_declarations_repeat1,
  [4191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 2,
      anon_sym_less_than,
      anon_sym_greater_than,
    ACTIONS(616), 4,
      anon_sym_less_than_or_equals,
      anon_sym_greater_than_or_equals,
      anon_sym_equals,
      anon_sym_not_equals,
  [4205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(620), 1,
      aux_sym_identifier_token1,
    ACTIONS(622), 1,
      aux_sym_identifier_token2,
    STATE(134), 2,
      sym_identifier,
      aux_sym_traits_block_repeat1,
  [4222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(626), 1,
      aux_sym_identifier_token1,
    ACTIONS(629), 1,
      aux_sym_identifier_token2,
    STATE(134), 2,
      sym_identifier,
      aux_sym_traits_block_repeat1,
  [4239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    ACTIONS(634), 2,
      anon_sym_large,
      anon_sym_small,
    STATE(140), 2,
      sym__character_portrait_content,
      aux_sym_character_portrait_repeat1,
  [4254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(638), 2,
      anon_sym_large,
      anon_sym_small,
    STATE(136), 2,
      sym__character_portrait_content,
      aux_sym_character_portrait_repeat1,
  [4269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      aux_sym_gfx_string_token1,
    ACTIONS(643), 1,
      aux_sym_gfx_key_token1,
    STATE(194), 3,
      sym__gfx,
      sym_gfx_string,
      sym_gfx_key,
  [4284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 5,
      anon_sym_civilian,
      anon_sym_army,
      anon_sym_navy,
      anon_sym_hidden,
      anon_sym_air,
  [4295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_identifier_token1,
    ACTIONS(622), 1,
      aux_sym_identifier_token2,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    STATE(133), 2,
      sym_identifier,
      aux_sym_traits_block_repeat1,
  [4312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(634), 2,
      anon_sym_large,
      anon_sym_small,
    STATE(136), 2,
      sym__character_portrait_content,
      aux_sym_character_portrait_repeat1,
  [4327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(653), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(655), 1,
      sym_number,
    STATE(286), 1,
      sym_identifier,
  [4355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(175), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(197), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(80), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(418), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token2,
  [4403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(132), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(353), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token2,
  [4427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(426), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token2,
  [4439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym_number,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(300), 1,
      sym_identifier,
  [4455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(665), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(669), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token2,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(673), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token2,
  [4491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(677), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(681), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4515] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(683), 1,
      sym_number,
    STATE(294), 1,
      sym_identifier,
  [4531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    ACTIONS(685), 1,
      sym_number,
    STATE(293), 1,
      sym_identifier,
  [4547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(687), 1,
      sym_number,
    STATE(291), 1,
      sym_identifier,
  [4563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(689), 1,
      sym_number,
    STATE(290), 1,
      sym_identifier,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 4,
      anon_sym_RBRACE,
      anon_sym_civilian,
      anon_sym_army,
      anon_sym_navy,
  [4589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(695), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 4,
      anon_sym_RBRACE,
      anon_sym_civilian,
      anon_sym_army,
      anon_sym_navy,
  [4611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(701), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [4623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(705), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [4635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(709), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [4647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    ACTIONS(711), 1,
      sym_number,
    STATE(215), 1,
      sym_identifier,
  [4663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    ACTIONS(713), 1,
      sym_number,
    STATE(217), 1,
      sym_identifier,
  [4679] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(715), 1,
      sym_number,
    STATE(243), 1,
      sym_identifier,
  [4695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_number,
    ACTIONS(571), 1,
      aux_sym_identifier_token1,
    ACTIONS(573), 1,
      aux_sym_identifier_token2,
    STATE(163), 1,
      sym_identifier,
  [4711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(719), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [4723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(723), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [4735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(727), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [4747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_number,
    ACTIONS(731), 1,
      aux_sym_identifier_token1,
    ACTIONS(733), 1,
      aux_sym_identifier_token2,
    STATE(16), 1,
      sym_identifier,
  [4763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    ACTIONS(735), 1,
      sym_number,
    STATE(242), 1,
      sym_identifier,
  [4779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(184), 1,
      sym_identifier,
  [4792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_identifier_token2,
    ACTIONS(737), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [4803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      anon_sym_yes,
    STATE(36), 1,
      sym_effect_limit_block,
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_identifier_token2,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [4827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      aux_sym_identifier_token2,
    ACTIONS(745), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [4838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(220), 1,
      sym_identifier,
  [4851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_identifier_token2,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [4862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_identifier_token2,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [4873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_identifier_token2,
    ACTIONS(753), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [4884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    ACTIONS(759), 1,
      anon_sym_min,
    ACTIONS(761), 1,
      anon_sym_max,
  [4897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_EQ,
    ACTIONS(765), 2,
      anon_sym_GT,
      anon_sym_LT,
  [4908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym_identifier_token2,
    ACTIONS(767), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [4919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [4928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      aux_sym_identifier_token2,
    STATE(38), 1,
      sym_identifier,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 3,
      anon_sym_RBRACE,
      anon_sym_large,
      anon_sym_small,
  [4950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(60), 1,
      sym_identifier,
  [4963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 3,
      anon_sym_RBRACE,
      anon_sym_large,
      anon_sym_small,
  [4972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(50), 1,
      sym_identifier,
  [4985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      aux_sym_identifier_token2,
    ACTIONS(777), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [4996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 3,
      anon_sym_RBRACE,
      anon_sym_large,
      anon_sym_small,
  [5005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym_identifier_token2,
    ACTIONS(783), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [5016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(198), 1,
      sym_identifier,
  [5029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_identifier_token2,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [5040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    ACTIONS(789), 1,
      anon_sym_scope,
    ACTIONS(791), 1,
      anon_sym_days,
  [5053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(312), 1,
      sym_identifier,
  [5066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(245), 1,
      sym_identifier,
  [5079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_identifier_token1,
    ACTIONS(661), 1,
      aux_sym_identifier_token2,
    STATE(111), 1,
      sym_identifier,
  [5092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_date,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_yes,
      anon_sym_no,
  [5110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_traits_block,
  [5120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 2,
      anon_sym_yes,
      anon_sym_no,
  [5128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_tooltip,
  [5138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_effect_block,
  [5148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_modifier_block,
  [5158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_trigger_block,
  [5168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_trigger_block,
  [5178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_variable_math_block,
  [5188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_effect_block,
  [5198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_array_math_block,
  [5208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_clamp_variable_block,
  [5218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
    ACTIONS(823), 1,
      anon_sym_index,
  [5228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_idea_content,
  [5238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    ACTIONS(829), 1,
      anon_sym_max,
  [5248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_trigger_block,
  [5258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_gfx_key_token1,
    STATE(311), 1,
      sym_loc_key,
  [5268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    ACTIONS(835), 1,
      anon_sym_days,
  [5278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_gfx_key_token1,
    STATE(325), 1,
      sym_loc_key,
  [5288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_EQ,
  [5295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_EQ,
  [5302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_EQ,
  [5309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_EQ,
  [5316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_EQ,
  [5323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_EQ,
  [5330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [5337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_EQ,
  [5344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_EQ,
  [5351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
  [5358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_EQ,
  [5365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_EQ,
  [5372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_EQ,
  [5379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_date_token1,
  [5386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_EQ,
  [5393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_EQ,
  [5400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_EQ,
  [5407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_EQ,
  [5414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_EQ,
  [5421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_EQ,
  [5428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
  [5435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
  [5442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
  [5449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_value,
  [5456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_modifier,
  [5463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_EQ,
  [5470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_var,
  [5477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_EQ,
  [5484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_EQ,
  [5491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
  [5498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_EQ,
  [5505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
  [5512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
  [5519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_EQ,
  [5526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_EQ,
  [5533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
  [5540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_EQ,
  [5547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_number,
  [5554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_EQ,
  [5561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_EQ,
  [5568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
  [5575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
  [5582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_EQ,
  [5589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      aux_sym_log_effect_token1,
  [5596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      ts_builtin_sym_end,
  [5603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
  [5610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym_number,
  [5617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      ts_builtin_sym_end,
  [5624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
  [5631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LBRACE,
  [5638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_EQ,
  [5645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_EQ,
  [5652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_EQ,
  [5659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_EQ,
  [5666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_EQ,
  [5673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_yes,
  [5680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_number,
  [5687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym_number,
  [5694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_EQ,
  [5701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_EQ,
  [5708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_EQ,
  [5715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_EQ,
  [5722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_EQ,
  [5729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_EQ,
  [5736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [5743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACE,
  [5750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_EQ,
  [5757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_LBRACE,
  [5764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
  [5771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
  [5778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [5785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_value,
  [5792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [5799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_number,
  [5806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_EQ,
  [5813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_EQ,
  [5820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_EQ,
  [5827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_EQ,
  [5834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_compare,
  [5841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_EQ,
  [5848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_LBRACE,
  [5855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_EQ,
  [5862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_EQ,
  [5869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_EQ,
  [5876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
  [5883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      ts_builtin_sym_end,
  [5890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_EQ,
  [5897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_EQ,
  [5904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_number,
  [5911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_DQUOTE,
  [5918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_value,
  [5925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      ts_builtin_sym_end,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_EQ,
  [5939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_EQ,
  [5946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_EQ,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_EQ,
  [5960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_EQ,
  [5967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_EQ,
  [5974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_EQ,
  [5981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_LBRACE,
  [5988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_LBRACE,
  [5995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_EQ,
  [6002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_EQ,
  [6009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_DQUOTE,
  [6016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      ts_builtin_sym_end,
  [6023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
  [6030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_EQ,
  [6037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_EQ,
  [6044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 304,
  [SMALL_STATE(7)] = 371,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 505,
  [SMALL_STATE(10)] = 572,
  [SMALL_STATE(11)] = 639,
  [SMALL_STATE(12)] = 706,
  [SMALL_STATE(13)] = 773,
  [SMALL_STATE(14)] = 840,
  [SMALL_STATE(15)] = 891,
  [SMALL_STATE(16)] = 936,
  [SMALL_STATE(17)] = 981,
  [SMALL_STATE(18)] = 1022,
  [SMALL_STATE(19)] = 1060,
  [SMALL_STATE(20)] = 1098,
  [SMALL_STATE(21)] = 1158,
  [SMALL_STATE(22)] = 1196,
  [SMALL_STATE(23)] = 1234,
  [SMALL_STATE(24)] = 1272,
  [SMALL_STATE(25)] = 1310,
  [SMALL_STATE(26)] = 1370,
  [SMALL_STATE(27)] = 1408,
  [SMALL_STATE(28)] = 1446,
  [SMALL_STATE(29)] = 1484,
  [SMALL_STATE(30)] = 1522,
  [SMALL_STATE(31)] = 1560,
  [SMALL_STATE(32)] = 1620,
  [SMALL_STATE(33)] = 1658,
  [SMALL_STATE(34)] = 1696,
  [SMALL_STATE(35)] = 1734,
  [SMALL_STATE(36)] = 1772,
  [SMALL_STATE(37)] = 1810,
  [SMALL_STATE(38)] = 1848,
  [SMALL_STATE(39)] = 1886,
  [SMALL_STATE(40)] = 1924,
  [SMALL_STATE(41)] = 1962,
  [SMALL_STATE(42)] = 2000,
  [SMALL_STATE(43)] = 2038,
  [SMALL_STATE(44)] = 2075,
  [SMALL_STATE(45)] = 2112,
  [SMALL_STATE(46)] = 2149,
  [SMALL_STATE(47)] = 2186,
  [SMALL_STATE(48)] = 2236,
  [SMALL_STATE(49)] = 2286,
  [SMALL_STATE(50)] = 2336,
  [SMALL_STATE(51)] = 2361,
  [SMALL_STATE(52)] = 2386,
  [SMALL_STATE(53)] = 2411,
  [SMALL_STATE(54)] = 2436,
  [SMALL_STATE(55)] = 2461,
  [SMALL_STATE(56)] = 2486,
  [SMALL_STATE(57)] = 2511,
  [SMALL_STATE(58)] = 2536,
  [SMALL_STATE(59)] = 2561,
  [SMALL_STATE(60)] = 2586,
  [SMALL_STATE(61)] = 2611,
  [SMALL_STATE(62)] = 2636,
  [SMALL_STATE(63)] = 2661,
  [SMALL_STATE(64)] = 2686,
  [SMALL_STATE(65)] = 2711,
  [SMALL_STATE(66)] = 2741,
  [SMALL_STATE(67)] = 2771,
  [SMALL_STATE(68)] = 2801,
  [SMALL_STATE(69)] = 2824,
  [SMALL_STATE(70)] = 2857,
  [SMALL_STATE(71)] = 2890,
  [SMALL_STATE(72)] = 2923,
  [SMALL_STATE(73)] = 2957,
  [SMALL_STATE(74)] = 2991,
  [SMALL_STATE(75)] = 3013,
  [SMALL_STATE(76)] = 3035,
  [SMALL_STATE(77)] = 3057,
  [SMALL_STATE(78)] = 3091,
  [SMALL_STATE(79)] = 3123,
  [SMALL_STATE(80)] = 3140,
  [SMALL_STATE(81)] = 3166,
  [SMALL_STATE(82)] = 3192,
  [SMALL_STATE(83)] = 3218,
  [SMALL_STATE(84)] = 3244,
  [SMALL_STATE(85)] = 3270,
  [SMALL_STATE(86)] = 3296,
  [SMALL_STATE(87)] = 3322,
  [SMALL_STATE(88)] = 3348,
  [SMALL_STATE(89)] = 3374,
  [SMALL_STATE(90)] = 3400,
  [SMALL_STATE(91)] = 3425,
  [SMALL_STATE(92)] = 3450,
  [SMALL_STATE(93)] = 3475,
  [SMALL_STATE(94)] = 3500,
  [SMALL_STATE(95)] = 3525,
  [SMALL_STATE(96)] = 3550,
  [SMALL_STATE(97)] = 3564,
  [SMALL_STATE(98)] = 3578,
  [SMALL_STATE(99)] = 3592,
  [SMALL_STATE(100)] = 3606,
  [SMALL_STATE(101)] = 3620,
  [SMALL_STATE(102)] = 3634,
  [SMALL_STATE(103)] = 3648,
  [SMALL_STATE(104)] = 3662,
  [SMALL_STATE(105)] = 3676,
  [SMALL_STATE(106)] = 3702,
  [SMALL_STATE(107)] = 3717,
  [SMALL_STATE(108)] = 3740,
  [SMALL_STATE(109)] = 3759,
  [SMALL_STATE(110)] = 3774,
  [SMALL_STATE(111)] = 3793,
  [SMALL_STATE(112)] = 3808,
  [SMALL_STATE(113)] = 3827,
  [SMALL_STATE(114)] = 3846,
  [SMALL_STATE(115)] = 3861,
  [SMALL_STATE(116)] = 3881,
  [SMALL_STATE(117)] = 3901,
  [SMALL_STATE(118)] = 3921,
  [SMALL_STATE(119)] = 3941,
  [SMALL_STATE(120)] = 3963,
  [SMALL_STATE(121)] = 3983,
  [SMALL_STATE(122)] = 4003,
  [SMALL_STATE(123)] = 4023,
  [SMALL_STATE(124)] = 4043,
  [SMALL_STATE(125)] = 4063,
  [SMALL_STATE(126)] = 4079,
  [SMALL_STATE(127)] = 4095,
  [SMALL_STATE(128)] = 4115,
  [SMALL_STATE(129)] = 4135,
  [SMALL_STATE(130)] = 4151,
  [SMALL_STATE(131)] = 4171,
  [SMALL_STATE(132)] = 4191,
  [SMALL_STATE(133)] = 4205,
  [SMALL_STATE(134)] = 4222,
  [SMALL_STATE(135)] = 4239,
  [SMALL_STATE(136)] = 4254,
  [SMALL_STATE(137)] = 4269,
  [SMALL_STATE(138)] = 4284,
  [SMALL_STATE(139)] = 4295,
  [SMALL_STATE(140)] = 4312,
  [SMALL_STATE(141)] = 4327,
  [SMALL_STATE(142)] = 4339,
  [SMALL_STATE(143)] = 4355,
  [SMALL_STATE(144)] = 4367,
  [SMALL_STATE(145)] = 4379,
  [SMALL_STATE(146)] = 4391,
  [SMALL_STATE(147)] = 4403,
  [SMALL_STATE(148)] = 4415,
  [SMALL_STATE(149)] = 4427,
  [SMALL_STATE(150)] = 4439,
  [SMALL_STATE(151)] = 4455,
  [SMALL_STATE(152)] = 4467,
  [SMALL_STATE(153)] = 4479,
  [SMALL_STATE(154)] = 4491,
  [SMALL_STATE(155)] = 4503,
  [SMALL_STATE(156)] = 4515,
  [SMALL_STATE(157)] = 4531,
  [SMALL_STATE(158)] = 4547,
  [SMALL_STATE(159)] = 4563,
  [SMALL_STATE(160)] = 4579,
  [SMALL_STATE(161)] = 4589,
  [SMALL_STATE(162)] = 4601,
  [SMALL_STATE(163)] = 4611,
  [SMALL_STATE(164)] = 4623,
  [SMALL_STATE(165)] = 4635,
  [SMALL_STATE(166)] = 4647,
  [SMALL_STATE(167)] = 4663,
  [SMALL_STATE(168)] = 4679,
  [SMALL_STATE(169)] = 4695,
  [SMALL_STATE(170)] = 4711,
  [SMALL_STATE(171)] = 4723,
  [SMALL_STATE(172)] = 4735,
  [SMALL_STATE(173)] = 4747,
  [SMALL_STATE(174)] = 4763,
  [SMALL_STATE(175)] = 4779,
  [SMALL_STATE(176)] = 4792,
  [SMALL_STATE(177)] = 4803,
  [SMALL_STATE(178)] = 4816,
  [SMALL_STATE(179)] = 4827,
  [SMALL_STATE(180)] = 4838,
  [SMALL_STATE(181)] = 4851,
  [SMALL_STATE(182)] = 4862,
  [SMALL_STATE(183)] = 4873,
  [SMALL_STATE(184)] = 4884,
  [SMALL_STATE(185)] = 4897,
  [SMALL_STATE(186)] = 4908,
  [SMALL_STATE(187)] = 4919,
  [SMALL_STATE(188)] = 4928,
  [SMALL_STATE(189)] = 4941,
  [SMALL_STATE(190)] = 4950,
  [SMALL_STATE(191)] = 4963,
  [SMALL_STATE(192)] = 4972,
  [SMALL_STATE(193)] = 4985,
  [SMALL_STATE(194)] = 4996,
  [SMALL_STATE(195)] = 5005,
  [SMALL_STATE(196)] = 5016,
  [SMALL_STATE(197)] = 5029,
  [SMALL_STATE(198)] = 5040,
  [SMALL_STATE(199)] = 5053,
  [SMALL_STATE(200)] = 5066,
  [SMALL_STATE(201)] = 5079,
  [SMALL_STATE(202)] = 5092,
  [SMALL_STATE(203)] = 5102,
  [SMALL_STATE(204)] = 5110,
  [SMALL_STATE(205)] = 5120,
  [SMALL_STATE(206)] = 5128,
  [SMALL_STATE(207)] = 5138,
  [SMALL_STATE(208)] = 5148,
  [SMALL_STATE(209)] = 5158,
  [SMALL_STATE(210)] = 5168,
  [SMALL_STATE(211)] = 5178,
  [SMALL_STATE(212)] = 5188,
  [SMALL_STATE(213)] = 5198,
  [SMALL_STATE(214)] = 5208,
  [SMALL_STATE(215)] = 5218,
  [SMALL_STATE(216)] = 5228,
  [SMALL_STATE(217)] = 5238,
  [SMALL_STATE(218)] = 5248,
  [SMALL_STATE(219)] = 5258,
  [SMALL_STATE(220)] = 5268,
  [SMALL_STATE(221)] = 5278,
  [SMALL_STATE(222)] = 5288,
  [SMALL_STATE(223)] = 5295,
  [SMALL_STATE(224)] = 5302,
  [SMALL_STATE(225)] = 5309,
  [SMALL_STATE(226)] = 5316,
  [SMALL_STATE(227)] = 5323,
  [SMALL_STATE(228)] = 5330,
  [SMALL_STATE(229)] = 5337,
  [SMALL_STATE(230)] = 5344,
  [SMALL_STATE(231)] = 5351,
  [SMALL_STATE(232)] = 5358,
  [SMALL_STATE(233)] = 5365,
  [SMALL_STATE(234)] = 5372,
  [SMALL_STATE(235)] = 5379,
  [SMALL_STATE(236)] = 5386,
  [SMALL_STATE(237)] = 5393,
  [SMALL_STATE(238)] = 5400,
  [SMALL_STATE(239)] = 5407,
  [SMALL_STATE(240)] = 5414,
  [SMALL_STATE(241)] = 5421,
  [SMALL_STATE(242)] = 5428,
  [SMALL_STATE(243)] = 5435,
  [SMALL_STATE(244)] = 5442,
  [SMALL_STATE(245)] = 5449,
  [SMALL_STATE(246)] = 5456,
  [SMALL_STATE(247)] = 5463,
  [SMALL_STATE(248)] = 5470,
  [SMALL_STATE(249)] = 5477,
  [SMALL_STATE(250)] = 5484,
  [SMALL_STATE(251)] = 5491,
  [SMALL_STATE(252)] = 5498,
  [SMALL_STATE(253)] = 5505,
  [SMALL_STATE(254)] = 5512,
  [SMALL_STATE(255)] = 5519,
  [SMALL_STATE(256)] = 5526,
  [SMALL_STATE(257)] = 5533,
  [SMALL_STATE(258)] = 5540,
  [SMALL_STATE(259)] = 5547,
  [SMALL_STATE(260)] = 5554,
  [SMALL_STATE(261)] = 5561,
  [SMALL_STATE(262)] = 5568,
  [SMALL_STATE(263)] = 5575,
  [SMALL_STATE(264)] = 5582,
  [SMALL_STATE(265)] = 5589,
  [SMALL_STATE(266)] = 5596,
  [SMALL_STATE(267)] = 5603,
  [SMALL_STATE(268)] = 5610,
  [SMALL_STATE(269)] = 5617,
  [SMALL_STATE(270)] = 5624,
  [SMALL_STATE(271)] = 5631,
  [SMALL_STATE(272)] = 5638,
  [SMALL_STATE(273)] = 5645,
  [SMALL_STATE(274)] = 5652,
  [SMALL_STATE(275)] = 5659,
  [SMALL_STATE(276)] = 5666,
  [SMALL_STATE(277)] = 5673,
  [SMALL_STATE(278)] = 5680,
  [SMALL_STATE(279)] = 5687,
  [SMALL_STATE(280)] = 5694,
  [SMALL_STATE(281)] = 5701,
  [SMALL_STATE(282)] = 5708,
  [SMALL_STATE(283)] = 5715,
  [SMALL_STATE(284)] = 5722,
  [SMALL_STATE(285)] = 5729,
  [SMALL_STATE(286)] = 5736,
  [SMALL_STATE(287)] = 5743,
  [SMALL_STATE(288)] = 5750,
  [SMALL_STATE(289)] = 5757,
  [SMALL_STATE(290)] = 5764,
  [SMALL_STATE(291)] = 5771,
  [SMALL_STATE(292)] = 5778,
  [SMALL_STATE(293)] = 5785,
  [SMALL_STATE(294)] = 5792,
  [SMALL_STATE(295)] = 5799,
  [SMALL_STATE(296)] = 5806,
  [SMALL_STATE(297)] = 5813,
  [SMALL_STATE(298)] = 5820,
  [SMALL_STATE(299)] = 5827,
  [SMALL_STATE(300)] = 5834,
  [SMALL_STATE(301)] = 5841,
  [SMALL_STATE(302)] = 5848,
  [SMALL_STATE(303)] = 5855,
  [SMALL_STATE(304)] = 5862,
  [SMALL_STATE(305)] = 5869,
  [SMALL_STATE(306)] = 5876,
  [SMALL_STATE(307)] = 5883,
  [SMALL_STATE(308)] = 5890,
  [SMALL_STATE(309)] = 5897,
  [SMALL_STATE(310)] = 5904,
  [SMALL_STATE(311)] = 5911,
  [SMALL_STATE(312)] = 5918,
  [SMALL_STATE(313)] = 5925,
  [SMALL_STATE(314)] = 5932,
  [SMALL_STATE(315)] = 5939,
  [SMALL_STATE(316)] = 5946,
  [SMALL_STATE(317)] = 5953,
  [SMALL_STATE(318)] = 5960,
  [SMALL_STATE(319)] = 5967,
  [SMALL_STATE(320)] = 5974,
  [SMALL_STATE(321)] = 5981,
  [SMALL_STATE(322)] = 5988,
  [SMALL_STATE(323)] = 5995,
  [SMALL_STATE(324)] = 6002,
  [SMALL_STATE(325)] = 6009,
  [SMALL_STATE(326)] = 6016,
  [SMALL_STATE(327)] = 6023,
  [SMALL_STATE(328)] = 6030,
  [SMALL_STATE(329)] = 6037,
  [SMALL_STATE(330)] = 6044,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effect_block_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(297),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(296),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(284),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(276),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(275),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(274),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(17),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effect_limit_block_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_limit_block_repeat1, 2), SHIFT_REPEAT(225),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_effect_limit_block_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_limits, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_limits, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamp_variable_block, 11),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clamp_variable_block, 11),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 7),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_block, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_math_block, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_trigger_block, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_trigger_block, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(272),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(223),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(223),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(264),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(303),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(240),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(318),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(317),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(316),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(314),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_advisor_repeat1, 2), SHIFT_REPEAT(280),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 13),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 13),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_math_effect, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_math_block, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_math_block, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_effect, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_effect, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_math_effect, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_math_effect, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_change, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_change, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripted_effect, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripted_effect, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clear_array, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clear_array, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamp_variable_block, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clamp_variable_block, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 10),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 10),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamp_variable_block, 8),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clamp_variable_block, 8),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamp_variable_effect, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clamp_variable_effect, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_traits_block, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_traits_block, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_traits, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_traits, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_traits_block, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_traits_block, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(223),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(223),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(264),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(303),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(240),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(318),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(317),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(316),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(314),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content_trigger, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_content_trigger, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cancel_if_invalid, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cancel_if_invalid, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_advisor_content, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_advisor_content, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_modifiers, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_modifiers, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_add, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_add, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ledger, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ledger, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_commander_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_commander_repeat1, 2), SHIFT_REPEAT(281),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_commander_repeat1, 2), SHIFT_REPEAT(247),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_commander_repeat1, 2), SHIFT_REPEAT(280),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loc_key, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loc_key, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_repeat1, 2), SHIFT_REPEAT(238),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_repeat1, 2), SHIFT_REPEAT(237),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_repeat1, 2), SHIFT_REPEAT(236),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_repeat1, 2), SHIFT_REPEAT(234),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_repeat1, 2), SHIFT_REPEAT(233),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_country_leader_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_country_leader_repeat1, 2), SHIFT_REPEAT(285),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_country_leader_repeat1, 2), SHIFT_REPEAT(283),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_country_leader_repeat1, 2), SHIFT_REPEAT(282),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_country_leader_repeat1, 2), SHIFT_REPEAT(281),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_country_leader_repeat1, 2), SHIFT_REPEAT(281),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_country_leader_repeat1, 2), SHIFT_REPEAT(280),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loc_key_enclosed, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loc_key_enclosed, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loc_string, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loc_string, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trigger_block_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(315),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(17),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(17),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ideas_declarations_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declarations_repeat1, 2), SHIFT_REPEAT(309),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ideas_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(249),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(17),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(17),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_portraits, 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_commander, 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_advisor, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_advisor, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_country_leader, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_country_leader, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_portraits, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_commander, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_name, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expire, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expire, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideology, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ideology, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desc, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_desc, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_declarations_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declarations_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarations, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2), SHIFT_REPEAT(17),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_country_idea_block_repeat1, 2), SHIFT_REPEAT(17),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_portraits_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_portraits_repeat1, 2), SHIFT_REPEAT(299),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_traits_block_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_traits_block_repeat1, 2), SHIFT_REPEAT(181),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_traits_block_repeat1, 2), SHIFT_REPEAT(181),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_portrait_repeat1, 2),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_portrait_repeat1, 2), SHIFT_REPEAT(222),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_scope_change, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_scope_change, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_modifier_tooltip, 3),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_modifier_tooltip, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 3),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable, 5),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_variable, 5),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_portrait, 5),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_portrait, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_trigger, 3),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_trigger, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 4),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 4),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 5),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 6),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 6),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 5),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 2),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_content, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 4),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 4),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_yes, 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_yes, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid_level_idea, 3),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid_level_idea, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gfx_string, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gfx_key, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 5),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 5),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_portrait_content, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 3),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_content, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_long, 9),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_math_effect_long, 6),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect_long, 6),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_declarations, 5),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declarations, 5),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_effect_short, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_math_effect_long, 9),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_short, 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_long, 12),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_declarations, 4),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declarations, 4),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1),
  [1043] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_HoI4(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
