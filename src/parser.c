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
#define STATE_COUNT 234
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_ideas = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_country = 5,
  anon_sym_law = 6,
  anon_sym_yes = 7,
  anon_sym_available = 8,
  anon_sym_allowed = 9,
  anon_sym_allowed_civil_war = 10,
  anon_sym_cancel = 11,
  anon_sym_ai_will_do = 12,
  anon_sym_modifier = 13,
  anon_sym_on_add = 14,
  anon_sym_ledger = 15,
  anon_sym_civilian = 16,
  anon_sym_removal_cost = 17,
  anon_sym_picture = 18,
  anon_sym_default = 19,
  anon_sym_no = 20,
  anon_sym_cancel_if_invalid = 21,
  anon_sym_check_variable = 22,
  anon_sym_var = 23,
  anon_sym_value = 24,
  anon_sym_compare = 25,
  anon_sym_less_than = 26,
  anon_sym_less_than_or_equals = 27,
  anon_sym_greater_than = 28,
  anon_sym_greater_than_or_equals = 29,
  anon_sym_equals = 30,
  anon_sym_not_equals = 31,
  anon_sym_tooltip = 32,
  anon_sym_GT = 33,
  anon_sym_LT = 34,
  anon_sym_custom_modifier_tooltip = 35,
  anon_sym_log = 36,
  aux_sym_log_effect_token1 = 37,
  anon_sym_set_variable = 38,
  anon_sym_add_to_variable = 39,
  anon_sym_subtract_from_variable = 40,
  anon_sym_multiply_variable = 41,
  anon_sym_divide_variable = 42,
  anon_sym_modulo_variable = 43,
  anon_sym_set_temp_variable = 44,
  anon_sym_add_to_temp_variable = 45,
  anon_sym_subtract_from_temp_variable = 46,
  anon_sym_multiply_temp_variable = 47,
  anon_sym_divide_temp_variable = 48,
  anon_sym_modulo_temp_variable = 49,
  anon_sym_add_to_array = 50,
  anon_sym_remove_from_array = 51,
  anon_sym_resize_array = 52,
  anon_sym_find_highest_in_array = 53,
  anon_sym_find_lowest_in_array = 54,
  anon_sym_add_to_temp_array = 55,
  anon_sym_remove_from_temp_array = 56,
  anon_sym_resize_temp_array = 57,
  anon_sym_clamp_variable = 58,
  anon_sym_clamp_temp_variable = 59,
  anon_sym_min = 60,
  anon_sym_max = 61,
  anon_sym_add_dynamic_modifier = 62,
  anon_sym_remove_dynamic_modifier = 63,
  anon_sym_scope = 64,
  anon_sym_days = 65,
  anon_sym_clear_array = 66,
  anon_sym_clear_temp_array = 67,
  anon_sym_array = 68,
  anon_sym_index = 69,
  anon_sym_start = 70,
  anon_sym_end = 71,
  anon_sym_break = 72,
  anon_sym_limit = 73,
  sym_number = 74,
  aux_sym_identifier_token1 = 75,
  aux_sym_identifier_token2 = 76,
  sym_loc_key = 77,
  sym_comment = 78,
  sym_translation_unit = 79,
  sym_function_declarations = 80,
  sym_function_declaration = 81,
  sym_ideas_declaration = 82,
  sym__top_level_idea = 83,
  sym_country_idea_block = 84,
  sym_law_idea_block = 85,
  sym_law_yes = 86,
  sym_mid_level_idea = 87,
  sym_idea_content = 88,
  sym__idea_content = 89,
  sym_idea_content_trigger = 90,
  sym_idea_modifiers = 91,
  sym_on_add = 92,
  sym_ledger = 93,
  sym_removal_cost = 94,
  sym_picture = 95,
  sym_default = 96,
  sym_cancel_if_invalid = 97,
  sym_trigger_block = 98,
  sym_modifier_block = 99,
  sym_effect_block = 100,
  sym__trigger = 101,
  sym_trigger_scope_change = 102,
  sym_trigger_limit_block = 103,
  sym_check_variable = 104,
  sym_check_variable_long = 105,
  sym_check_variable_short = 106,
  sym_comp_trigger = 107,
  sym__modifier = 108,
  sym_modifier = 109,
  sym_custom_modifier_tooltip = 110,
  sym__effect = 111,
  sym_log_effect = 112,
  sym_variable_math_effect = 113,
  sym_array_math_effect = 114,
  sym_clamp_variable_effect = 115,
  sym_clamp_variable_block = 116,
  sym_variable_math_block = 117,
  sym_array_math_block = 118,
  sym_dynamic_modifier_effect = 119,
  sym_clear_array = 120,
  sym_math_effect_short = 121,
  sym_variable_math_effect_long = 122,
  sym_array_math_effect_long = 123,
  sym_scripted_effect = 124,
  sym_scope_change = 125,
  sym_effect_limit_block = 126,
  sym_for_loop_limits = 127,
  sym_limit_trigger_block = 128,
  sym_identifier = 129,
  aux_sym_function_declarations_repeat1 = 130,
  aux_sym_ideas_declaration_repeat1 = 131,
  aux_sym_country_idea_block_repeat1 = 132,
  aux_sym_idea_content_repeat1 = 133,
  aux_sym_trigger_block_repeat1 = 134,
  aux_sym_modifier_block_repeat1 = 135,
  aux_sym_effect_block_repeat1 = 136,
  aux_sym_effect_limit_block_repeat1 = 137,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_ideas] = "ideas",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_country] = "country",
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
  [anon_sym_civilian] = "civilian",
  [anon_sym_removal_cost] = "removal_cost",
  [anon_sym_picture] = "picture",
  [anon_sym_default] = "default",
  [anon_sym_no] = "no",
  [anon_sym_cancel_if_invalid] = "cancel_if_invalid",
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
  [sym_number] = "number",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [sym_loc_key] = "loc_key",
  [sym_comment] = "comment",
  [sym_translation_unit] = "translation_unit",
  [sym_function_declarations] = "function_declarations",
  [sym_function_declaration] = "function_declaration",
  [sym_ideas_declaration] = "ideas_declaration",
  [sym__top_level_idea] = "_top_level_idea",
  [sym_country_idea_block] = "country_idea_block",
  [sym_law_idea_block] = "law_idea_block",
  [sym_law_yes] = "law_yes",
  [sym_mid_level_idea] = "mid_level_idea",
  [sym_idea_content] = "idea_content",
  [sym__idea_content] = "_idea_content",
  [sym_idea_content_trigger] = "idea_content_trigger",
  [sym_idea_modifiers] = "idea_modifiers",
  [sym_on_add] = "on_add",
  [sym_ledger] = "ledger",
  [sym_removal_cost] = "removal_cost",
  [sym_picture] = "picture",
  [sym_default] = "default",
  [sym_cancel_if_invalid] = "cancel_if_invalid",
  [sym_trigger_block] = "trigger_block",
  [sym_modifier_block] = "modifier_block",
  [sym_effect_block] = "effect_block",
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
  [sym_identifier] = "identifier",
  [aux_sym_function_declarations_repeat1] = "function_declarations_repeat1",
  [aux_sym_ideas_declaration_repeat1] = "ideas_declaration_repeat1",
  [aux_sym_country_idea_block_repeat1] = "country_idea_block_repeat1",
  [aux_sym_idea_content_repeat1] = "idea_content_repeat1",
  [aux_sym_trigger_block_repeat1] = "trigger_block_repeat1",
  [aux_sym_modifier_block_repeat1] = "modifier_block_repeat1",
  [aux_sym_effect_block_repeat1] = "effect_block_repeat1",
  [aux_sym_effect_limit_block_repeat1] = "effect_limit_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ideas] = anon_sym_ideas,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_country] = anon_sym_country,
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
  [anon_sym_civilian] = anon_sym_civilian,
  [anon_sym_removal_cost] = anon_sym_removal_cost,
  [anon_sym_picture] = anon_sym_picture,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_cancel_if_invalid] = anon_sym_cancel_if_invalid,
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
  [sym_number] = sym_number,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [sym_loc_key] = sym_loc_key,
  [sym_comment] = sym_comment,
  [sym_translation_unit] = sym_translation_unit,
  [sym_function_declarations] = sym_function_declarations,
  [sym_function_declaration] = sym_function_declaration,
  [sym_ideas_declaration] = sym_ideas_declaration,
  [sym__top_level_idea] = sym__top_level_idea,
  [sym_country_idea_block] = sym_country_idea_block,
  [sym_law_idea_block] = sym_law_idea_block,
  [sym_law_yes] = sym_law_yes,
  [sym_mid_level_idea] = sym_mid_level_idea,
  [sym_idea_content] = sym_idea_content,
  [sym__idea_content] = sym__idea_content,
  [sym_idea_content_trigger] = sym_idea_content_trigger,
  [sym_idea_modifiers] = sym_idea_modifiers,
  [sym_on_add] = sym_on_add,
  [sym_ledger] = sym_ledger,
  [sym_removal_cost] = sym_removal_cost,
  [sym_picture] = sym_picture,
  [sym_default] = sym_default,
  [sym_cancel_if_invalid] = sym_cancel_if_invalid,
  [sym_trigger_block] = sym_trigger_block,
  [sym_modifier_block] = sym_modifier_block,
  [sym_effect_block] = sym_effect_block,
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
  [sym_identifier] = sym_identifier,
  [aux_sym_function_declarations_repeat1] = aux_sym_function_declarations_repeat1,
  [aux_sym_ideas_declaration_repeat1] = aux_sym_ideas_declaration_repeat1,
  [aux_sym_country_idea_block_repeat1] = aux_sym_country_idea_block_repeat1,
  [aux_sym_idea_content_repeat1] = aux_sym_idea_content_repeat1,
  [aux_sym_trigger_block_repeat1] = aux_sym_trigger_block_repeat1,
  [aux_sym_modifier_block_repeat1] = aux_sym_modifier_block_repeat1,
  [aux_sym_effect_block_repeat1] = aux_sym_effect_block_repeat1,
  [aux_sym_effect_limit_block_repeat1] = aux_sym_effect_limit_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ideas] = {
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
  [anon_sym_civilian] = {
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
  [sym_loc_key] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_unit] = {
    .visible = true,
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
  [sym_ideas_declaration] = {
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
  [sym_removal_cost] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ideas_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_country_idea_block_repeat1] = {
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
      if (eof) ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(572);
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'g') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == 'v') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(202);
      if (lookahead == '{') ADVANCE(578);
      if (lookahead == '}') ADVANCE(579);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(621);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(167);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(500);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(537);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(526);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(536);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(342);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(506);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(264);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(503);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(273);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(222);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(224);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(508);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(527);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(350);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(295);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(509);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(528);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(510);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(529);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(511);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(530);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(512);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(531);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(532);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'h') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(544);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(546);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(504);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(317);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(318);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(319);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(320);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(321);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(323);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(324);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(325);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(326);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(327);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(329);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(330);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(331);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(332);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(493);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(501);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(684);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(592);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(586);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(600);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(244);
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == 'f') ADVANCE(444);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 234:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 235:
      if (lookahead == 'f') ADVANCE(268);
      END_STATE();
    case 236:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 237:
      if (lookahead == 'f') ADVANCE(276);
      END_STATE();
    case 238:
      if (lookahead == 'f') ADVANCE(269);
      END_STATE();
    case 239:
      if (lookahead == 'f') ADVANCE(270);
      END_STATE();
    case 240:
      if (lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 241:
      if (lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 242:
      if (lookahead == 'g') ADVANCE(619);
      END_STATE();
    case 243:
      if (lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 244:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 245:
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 246:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 247:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 248:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 297:
      if (lookahead == 'k') ADVANCE(686);
      END_STATE();
    case 298:
      if (lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(514);
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(408);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(378);
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 349:
      if (lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 350:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(407);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(396);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 354:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 355:
      if (lookahead == 'm') ADVANCE(410);
      END_STATE();
    case 356:
      if (lookahead == 'm') ADVANCE(411);
      END_STATE();
    case 357:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 358:
      if (lookahead == 'm') ADVANCE(413);
      END_STATE();
    case 359:
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(666);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 'q') ADVANCE(513);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(522);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 399:
      if (lookahead == 'p') ADVANCE(614);
      END_STATE();
    case 400:
      if (lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 401:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 402:
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 403:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 404:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 405:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 406:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 407:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 408:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 409:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 410:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 415:
      if (lookahead == 'q') ADVANCE(513);
      END_STATE();
    case 416:
      if (lookahead == 'q') ADVANCE(516);
      END_STATE();
    case 417:
      if (lookahead == 'q') ADVANCE(518);
      END_STATE();
    case 418:
      if (lookahead == 'q') ADVANCE(519);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 475:
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(507);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(688);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == 'v') ADVANCE(120);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 513:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 514:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 515:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 516:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 517:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 518:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 519:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 520:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 521:
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 522:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 523:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 524:
      if (lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 525:
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 526:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 527:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 528:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 529:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 530:
      if (lookahead == 'v') ADVANCE(127);
      END_STATE();
    case 531:
      if (lookahead == 'v') ADVANCE(128);
      END_STATE();
    case 532:
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 533:
      if (lookahead == 'w') ADVANCE(582);
      END_STATE();
    case 534:
      if (lookahead == 'w') ADVANCE(207);
      END_STATE();
    case 535:
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 536:
      if (lookahead == 'w') ADVANCE(77);
      END_STATE();
    case 537:
      if (lookahead == 'w') ADVANCE(260);
      END_STATE();
    case 538:
      if (lookahead == 'x') ADVANCE(667);
      END_STATE();
    case 539:
      if (lookahead == 'x') ADVANCE(680);
      END_STATE();
    case 540:
      if (lookahead == 'y') ADVANCE(678);
      END_STATE();
    case 541:
      if (lookahead == 'y') ADVANCE(580);
      END_STATE();
    case 542:
      if (lookahead == 'y') ADVANCE(674);
      END_STATE();
    case 543:
      if (lookahead == 'y') ADVANCE(646);
      END_STATE();
    case 544:
      if (lookahead == 'y') ADVANCE(650);
      END_STATE();
    case 545:
      if (lookahead == 'y') ADVANCE(676);
      END_STATE();
    case 546:
      if (lookahead == 'y') ADVANCE(656);
      END_STATE();
    case 547:
      if (lookahead == 'y') ADVANCE(648);
      END_STATE();
    case 548:
      if (lookahead == 'y') ADVANCE(660);
      END_STATE();
    case 549:
      if (lookahead == 'y') ADVANCE(654);
      END_STATE();
    case 550:
      if (lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 551:
      if (lookahead == 'y') ADVANCE(658);
      END_STATE();
    case 552:
      if (lookahead == 'y') ADVANCE(476);
      END_STATE();
    case 553:
      if (lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 554:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 555:
      if (lookahead == 'y') ADVANCE(374);
      END_STATE();
    case 556:
      if (lookahead == 'z') ADVANCE(223);
      END_STATE();
    case 557:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(557)
      if (lookahead == '\r') SKIP(557)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead == 'm') ADVANCE(968);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 558:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(558)
      if (lookahead == '\r') SKIP(558)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead == 'b') ADVANCE(1019);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'd') ADVANCE(878);
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead == 'f') ADVANCE(894);
      if (lookahead == 'i') ADVANCE(962);
      if (lookahead == 'l') ADVANCE(879);
      if (lookahead == 'm') ADVANCE(972);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead == 's') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(734);
      if (lookahead == '}') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 559:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(559)
      if (lookahead == '\r') SKIP(559)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'd') ADVANCE(878);
      if (lookahead == 'f') ADVANCE(894);
      if (lookahead == 'l') ADVANCE(966);
      if (lookahead == 'm') ADVANCE(972);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead == 's') ADVANCE(828);
      if (lookahead == '}') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 560:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(560)
      if (lookahead == '\r') SKIP(560)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'g') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 'v') ADVANCE(79);
      if (lookahead == '}') ADVANCE(579);
      END_STATE();
    case 561:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(561)
      if (lookahead == '\r') SKIP(561)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'c') ADVANCE(874);
      if (lookahead == 'l') ADVANCE(880);
      if (lookahead == 'm') ADVANCE(968);
      if (lookahead == '}') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 562:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(562)
      if (lookahead == '\r') SKIP(562)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'c') ADVANCE(874);
      if (lookahead == 'm') ADVANCE(968);
      if (lookahead == '}') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 563:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(563)
      if (lookahead == '\r') SKIP(563)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'l') ADVANCE(733);
      if (lookahead == 'm') ADVANCE(968);
      if (lookahead == '}') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 564:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(564)
      if (lookahead == '\r') SKIP(564)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(968);
      if (lookahead == 'v') ADVANCE(749);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 565:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(565)
      if (lookahead == '\r') SKIP(565)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead == 'm') ADVANCE(968);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 566:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(566)
      if (lookahead == '\r') SKIP(566)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 567:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(567)
      if (lookahead == '\r') SKIP(567)
      if (lookahead == '#') ADVANCE(1100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 568:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(568)
      if (lookahead == '\r') SKIP(568)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'c') ADVANCE(970);
      if (lookahead == 'm') ADVANCE(968);
      if (lookahead == '}') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 569:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(569)
      if (lookahead == '\r') SKIP(569)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == 'c') ADVANCE(1066);
      if (lookahead == 'm') ADVANCE(968);
      if (lookahead == '}') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 570:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 571:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(1100);
      if (lookahead == '\r') ADVANCE(1101);
      END_STATE();
    case 572:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 573:
      if (eof) ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(573)
      if (lookahead == '\r') SKIP(573)
      if (lookahead == '#') ADVANCE(1100);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(968);
      if (lookahead == '{') ADVANCE(578);
      if (lookahead == '}') ADVANCE(579);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ideas);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_ideas);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_country);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_country);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_law);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_law);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_available);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_allowed);
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_allowed_civil_war);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_cancel);
      if (lookahead == '_') ADVANCE(255);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_ai_will_do);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_modifier);
      if (lookahead == '@') ADVANCE(692);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_on_add);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_ledger);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_civilian);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_removal_cost);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_cancel_if_invalid);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_check_variable);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_check_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_compare);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_less_than);
      if (lookahead == '_') ADVANCE(390);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_less_than_or_equals);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_greater_than);
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_greater_than_or_equals);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_not_equals);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_custom_modifier_tooltip);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_custom_modifier_tooltip);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_log_effect_token1);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_set_variable);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_set_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_add_to_variable);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_add_to_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_subtract_from_variable);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_subtract_from_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_multiply_variable);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_multiply_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_divide_variable);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_divide_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_modulo_variable);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_modulo_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_set_temp_variable);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_set_temp_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_add_to_temp_variable);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_add_to_temp_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_subtract_from_temp_variable);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_subtract_from_temp_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_multiply_temp_variable);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_multiply_temp_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_divide_temp_variable);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_divide_temp_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_modulo_temp_variable);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_modulo_temp_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_add_to_array);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_add_to_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_remove_from_array);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_remove_from_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_resize_array);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_resize_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_find_highest_in_array);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_find_highest_in_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_find_lowest_in_array);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_find_lowest_in_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_add_to_temp_array);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_add_to_temp_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_remove_from_temp_array);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_remove_from_temp_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_resize_temp_array);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_resize_temp_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_clamp_variable);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_clamp_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_clamp_temp_variable);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_clamp_temp_variable);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_add_dynamic_modifier);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_add_dynamic_modifier);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_remove_dynamic_modifier);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_remove_dynamic_modifier);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_clear_array);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_clear_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_clear_temp_array);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_clear_temp_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_limit);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '@') ADVANCE(692);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == '_') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(937);
      if (lookahead == 'e') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == 't') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1021);
      if (lookahead == 't') ADVANCE(855);
      if (lookahead == 'v') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == 't') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == 'v') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1025);
      if (lookahead == 't') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'a') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'b') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'c') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'c') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'c') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'c') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(1093);
      if (lookahead == 't') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(811);
      if (lookahead == 'r') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'd') ADVANCE(1095);
      if (lookahead == 'f') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(1050);
      if (lookahead == 't') ADVANCE(735);
      if (lookahead == 'u') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(1050);
      if (lookahead == 'u') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'f') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'f') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'f') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'f') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'f') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'g') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'g') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'h') ADVANCE(883);
      if (lookahead == 'l') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'h') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'h') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == 'u') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'i') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'k') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'k') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'l') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(969);
      if (lookahead == 's') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'm') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'n') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'n') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'n') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'n') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'n') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'n') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'n') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(813);
      if (lookahead == 'u') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 's') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 's') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 's') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 's') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead == 'v') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(857);
      if (lookahead == 'v') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == 'v') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(862);
      if (lookahead == 'v') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(863);
      if (lookahead == 'v') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(864);
      if (lookahead == 'v') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'u') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'u') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'u') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'w') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'w') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'x') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'y') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (lookahead == 'z') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1097);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '^') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1097);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1098);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_loc_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1100);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1100);
      if (lookahead == '\\') ADVANCE(571);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 557},
  [2] = {.lex_state = 558},
  [3] = {.lex_state = 558},
  [4] = {.lex_state = 559},
  [5] = {.lex_state = 559},
  [6] = {.lex_state = 559},
  [7] = {.lex_state = 559},
  [8] = {.lex_state = 559},
  [9] = {.lex_state = 559},
  [10] = {.lex_state = 559},
  [11] = {.lex_state = 559},
  [12] = {.lex_state = 559},
  [13] = {.lex_state = 559},
  [14] = {.lex_state = 558},
  [15] = {.lex_state = 558},
  [16] = {.lex_state = 558},
  [17] = {.lex_state = 559},
  [18] = {.lex_state = 559},
  [19] = {.lex_state = 559},
  [20] = {.lex_state = 559},
  [21] = {.lex_state = 559},
  [22] = {.lex_state = 559},
  [23] = {.lex_state = 559},
  [24] = {.lex_state = 559},
  [25] = {.lex_state = 559},
  [26] = {.lex_state = 559},
  [27] = {.lex_state = 559},
  [28] = {.lex_state = 559},
  [29] = {.lex_state = 559},
  [30] = {.lex_state = 559},
  [31] = {.lex_state = 559},
  [32] = {.lex_state = 559},
  [33] = {.lex_state = 559},
  [34] = {.lex_state = 559},
  [35] = {.lex_state = 559},
  [36] = {.lex_state = 559},
  [37] = {.lex_state = 559},
  [38] = {.lex_state = 559},
  [39] = {.lex_state = 559},
  [40] = {.lex_state = 560},
  [41] = {.lex_state = 560},
  [42] = {.lex_state = 560},
  [43] = {.lex_state = 560},
  [44] = {.lex_state = 560},
  [45] = {.lex_state = 560},
  [46] = {.lex_state = 560},
  [47] = {.lex_state = 560},
  [48] = {.lex_state = 560},
  [49] = {.lex_state = 560},
  [50] = {.lex_state = 560},
  [51] = {.lex_state = 560},
  [52] = {.lex_state = 560},
  [53] = {.lex_state = 560},
  [54] = {.lex_state = 560},
  [55] = {.lex_state = 560},
  [56] = {.lex_state = 560},
  [57] = {.lex_state = 560},
  [58] = {.lex_state = 561},
  [59] = {.lex_state = 562},
  [60] = {.lex_state = 562},
  [61] = {.lex_state = 562},
  [62] = {.lex_state = 562},
  [63] = {.lex_state = 562},
  [64] = {.lex_state = 562},
  [65] = {.lex_state = 562},
  [66] = {.lex_state = 562},
  [67] = {.lex_state = 562},
  [68] = {.lex_state = 562},
  [69] = {.lex_state = 568},
  [70] = {.lex_state = 569},
  [71] = {.lex_state = 569},
  [72] = {.lex_state = 568},
  [73] = {.lex_state = 568},
  [74] = {.lex_state = 569},
  [75] = {.lex_state = 563},
  [76] = {.lex_state = 564},
  [77] = {.lex_state = 560},
  [78] = {.lex_state = 573},
  [79] = {.lex_state = 573},
  [80] = {.lex_state = 573},
  [81] = {.lex_state = 565},
  [82] = {.lex_state = 573},
  [83] = {.lex_state = 564},
  [84] = {.lex_state = 573},
  [85] = {.lex_state = 573},
  [86] = {.lex_state = 573},
  [87] = {.lex_state = 573},
  [88] = {.lex_state = 573},
  [89] = {.lex_state = 568},
  [90] = {.lex_state = 562},
  [91] = {.lex_state = 573},
  [92] = {.lex_state = 568},
  [93] = {.lex_state = 573},
  [94] = {.lex_state = 573},
  [95] = {.lex_state = 573},
  [96] = {.lex_state = 573},
  [97] = {.lex_state = 573},
  [98] = {.lex_state = 573},
  [99] = {.lex_state = 562},
  [100] = {.lex_state = 568},
  [101] = {.lex_state = 568},
  [102] = {.lex_state = 568},
  [103] = {.lex_state = 562},
  [104] = {.lex_state = 562},
  [105] = {.lex_state = 562},
  [106] = {.lex_state = 562},
  [107] = {.lex_state = 562},
  [108] = {.lex_state = 573},
  [109] = {.lex_state = 573},
  [110] = {.lex_state = 573},
  [111] = {.lex_state = 562},
  [112] = {.lex_state = 569},
  [113] = {.lex_state = 569},
  [114] = {.lex_state = 562},
  [115] = {.lex_state = 562},
  [116] = {.lex_state = 573},
  [117] = {.lex_state = 573},
  [118] = {.lex_state = 573},
  [119] = {.lex_state = 573},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 573},
  [124] = {.lex_state = 573},
  [125] = {.lex_state = 573},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 573},
  [129] = {.lex_state = 573},
  [130] = {.lex_state = 573},
  [131] = {.lex_state = 573},
  [132] = {.lex_state = 573},
  [133] = {.lex_state = 573},
  [134] = {.lex_state = 573},
  [135] = {.lex_state = 573},
  [136] = {.lex_state = 573},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 566},
  [146] = {.lex_state = 566},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 560},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 567},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
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
  [214] = {.lex_state = 567},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_ideas] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_country] = ACTIONS(1),
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
    [anon_sym_civilian] = ACTIONS(1),
    [anon_sym_removal_cost] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_cancel_if_invalid] = ACTIONS(1),
    [anon_sym_check_variable] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_compare] = ACTIONS(1),
    [anon_sym_less_than] = ACTIONS(1),
    [anon_sym_less_than_or_equals] = ACTIONS(1),
    [anon_sym_greater_than] = ACTIONS(1),
    [anon_sym_greater_than_or_equals] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_not_equals] = ACTIONS(1),
    [anon_sym_tooltip] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_custom_modifier_tooltip] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [aux_sym_log_effect_token1] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_translation_unit] = STATE(232),
    [sym_function_declarations] = STATE(231),
    [sym_function_declaration] = STATE(85),
    [sym_ideas_declaration] = STATE(231),
    [sym_identifier] = STATE(230),
    [aux_sym_function_declarations_repeat1] = STATE(85),
    [anon_sym_ideas] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(27), 1,
      anon_sym_limit,
    STATE(13), 1,
      sym_limit_trigger_block,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    STATE(3), 2,
      sym_for_loop_limits,
      aux_sym_effect_limit_block_repeat1,
    ACTIONS(13), 6,
      anon_sym_value,
      anon_sym_array,
      anon_sym_index,
      anon_sym_start,
      anon_sym_end,
      anon_sym_break,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(27), 1,
      anon_sym_limit,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_limit_trigger_block,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    STATE(14), 2,
      sym_for_loop_limits,
      aux_sym_effect_limit_block_repeat1,
    ACTIONS(13), 6,
      anon_sym_value,
      anon_sym_array,
      anon_sym_index,
      anon_sym_start,
      anon_sym_end,
      anon_sym_break,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_log,
    ACTIONS(51), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      aux_sym_identifier_token2,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(42), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(45), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(48), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(39), 8,
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
    ACTIONS(36), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(9), 10,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
      anon_sym_add_to_array,
      anon_sym_remove_from_array,
      anon_sym_resize_array,
      anon_sym_find_highest_in_array,
      anon_sym_find_lowest_in_array,
      anon_sym_add_to_temp_array,
      anon_sym_remove_from_temp_array,
      anon_sym_resize_temp_array,
    STATE(6), 10,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(15), 1,
      anon_sym_log,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_clamp_variable,
      anon_sym_clamp_temp_variable,
    ACTIONS(23), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    ACTIONS(25), 2,
      anon_sym_clear_array,
      anon_sym_clear_temp_array,
    ACTIONS(19), 8,
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
    ACTIONS(17), 12,
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
    ACTIONS(69), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    STATE(14), 2,
      sym_for_loop_limits,
      aux_sym_effect_limit_block_repeat1,
    ACTIONS(71), 6,
      anon_sym_value,
      anon_sym_array,
      anon_sym_index,
      anon_sym_start,
      anon_sym_end,
      anon_sym_break,
    ACTIONS(74), 29,
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
    ACTIONS(76), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(78), 35,
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
    ACTIONS(80), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(82), 35,
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
    ACTIONS(80), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
    ACTIONS(82), 28,
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
    ACTIONS(84), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(86), 28,
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
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(90), 28,
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
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(94), 28,
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
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(98), 28,
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
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(102), 28,
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
  [1212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(106), 28,
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
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(110), 28,
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
  [1288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(114), 28,
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
  [1326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(118), 28,
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
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(122), 28,
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
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(126), 28,
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
  [1440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(130), 28,
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
  [1478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(134), 28,
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
  [1516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(138), 28,
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
  [1554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(142), 28,
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
  [1592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(146), 28,
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
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(150), 28,
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
  [1668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(154), 28,
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
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(158), 28,
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
  [1744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(162), 28,
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
  [1782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(166), 28,
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
  [1820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(170), 28,
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
  [1858] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      anon_sym_modifier,
    ACTIONS(183), 1,
      anon_sym_on_add,
    ACTIONS(186), 1,
      anon_sym_ledger,
    ACTIONS(189), 1,
      anon_sym_removal_cost,
    ACTIONS(192), 1,
      anon_sym_picture,
    ACTIONS(195), 1,
      anon_sym_default,
    ACTIONS(198), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(177), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(174), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(40), 10,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_removal_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [1907] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      anon_sym_modifier,
    ACTIONS(209), 1,
      anon_sym_on_add,
    ACTIONS(211), 1,
      anon_sym_ledger,
    ACTIONS(213), 1,
      anon_sym_removal_cost,
    ACTIONS(215), 1,
      anon_sym_picture,
    ACTIONS(217), 1,
      anon_sym_default,
    ACTIONS(219), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(205), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(203), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(40), 10,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_removal_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [1956] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_modifier,
    ACTIONS(209), 1,
      anon_sym_on_add,
    ACTIONS(211), 1,
      anon_sym_ledger,
    ACTIONS(213), 1,
      anon_sym_removal_cost,
    ACTIONS(215), 1,
      anon_sym_picture,
    ACTIONS(217), 1,
      anon_sym_default,
    ACTIONS(219), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(203), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(41), 10,
      sym__idea_content,
      sym_idea_content_trigger,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_removal_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [2005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(80), 18,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
      anon_sym_value,
      anon_sym_compare,
      anon_sym_min,
      anon_sym_max,
      anon_sym_scope,
      anon_sym_days,
      anon_sym_index,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(104), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(124), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(223), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(227), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(231), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(235), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(239), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(243), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(247), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(251), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(255), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(259), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(263), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(267), 11,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [2327] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(275), 1,
      anon_sym_limit,
    STATE(66), 1,
      sym_limit_trigger_block,
    STATE(127), 1,
      sym_identifier,
    STATE(61), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(62), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2385] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(65), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2411] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(63), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(63), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2463] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_check_variable,
    ACTIONS(290), 1,
      aux_sym_identifier_token1,
    ACTIONS(293), 1,
      aux_sym_identifier_token2,
    STATE(127), 1,
      sym_identifier,
    STATE(63), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2489] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(67), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2515] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(63), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2541] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(68), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2567] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(63), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2593] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(273), 1,
      anon_sym_check_variable,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_identifier,
    STATE(63), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [2619] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      anon_sym_country,
    ACTIONS(309), 1,
      aux_sym_identifier_token1,
    ACTIONS(312), 1,
      aux_sym_identifier_token2,
    STATE(220), 1,
      sym_identifier,
    STATE(69), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [2644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      anon_sym_custom_modifier_tooltip,
    ACTIONS(320), 1,
      aux_sym_identifier_token1,
    ACTIONS(323), 1,
      aux_sym_identifier_token2,
    STATE(175), 1,
      sym_identifier,
    STATE(70), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [2669] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_custom_modifier_tooltip,
    STATE(175), 1,
      sym_identifier,
    STATE(74), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [2694] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      anon_sym_country,
    STATE(220), 1,
      sym_identifier,
    STATE(69), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [2719] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(332), 1,
      anon_sym_country,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_identifier,
    STATE(72), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [2744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(328), 1,
      anon_sym_custom_modifier_tooltip,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_identifier,
    STATE(70), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [2769] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      anon_sym_law,
    STATE(78), 1,
      sym_law_yes,
    STATE(162), 1,
      sym_identifier,
    STATE(88), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [2795] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(342), 1,
      anon_sym_var,
    ACTIONS(344), 1,
      sym_number,
    STATE(121), 1,
      sym_identifier,
    STATE(181), 2,
      sym_check_variable_long,
      sym_check_variable_short,
  [2818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_less_than,
      anon_sym_greater_than,
    ACTIONS(348), 4,
      anon_sym_less_than_or_equals,
      anon_sym_greater_than_or_equals,
      anon_sym_equals,
      anon_sym_not_equals,
  [2832] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_identifier,
    STATE(82), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [2852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      aux_sym_identifier_token1,
    ACTIONS(357), 1,
      aux_sym_identifier_token2,
    STATE(162), 1,
      sym_identifier,
    STATE(79), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [2872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_identifier,
    STATE(79), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [2892] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(362), 1,
      anon_sym_array,
    STATE(158), 1,
      sym_identifier,
    STATE(156), 2,
      sym_math_effect_short,
      sym_array_math_effect_long,
  [2912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_identifier,
    STATE(79), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [2932] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(366), 1,
      anon_sym_var,
    STATE(158), 1,
      sym_identifier,
    STATE(159), 2,
      sym_math_effect_short,
      sym_variable_math_effect_long,
  [2952] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      aux_sym_identifier_token1,
    ACTIONS(373), 1,
      aux_sym_identifier_token2,
    STATE(230), 1,
      sym_identifier,
    STATE(84), 2,
      sym_function_declaration,
      aux_sym_function_declarations_repeat1,
  [2972] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_identifier,
    STATE(84), 2,
      sym_function_declaration,
      aux_sym_function_declarations_repeat1,
  [2992] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      aux_sym_identifier_token1,
    ACTIONS(384), 1,
      aux_sym_identifier_token2,
    STATE(90), 1,
      sym_identifier,
    STATE(106), 1,
      sym_trigger_limit_block,
  [3014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_identifier,
    STATE(80), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [3034] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_identifier,
    STATE(79), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(390), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [3066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(394), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      aux_sym_identifier_token1,
    ACTIONS(384), 1,
      aux_sym_identifier_token2,
    STATE(90), 1,
      sym_identifier,
  [3094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(398), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [3106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(400), 1,
      sym_number,
    STATE(168), 1,
      sym_identifier,
  [3122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(402), 1,
      sym_number,
    STATE(223), 1,
      sym_identifier,
  [3138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_number,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    STATE(137), 1,
      sym_identifier,
  [3154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    ACTIONS(410), 1,
      sym_number,
    STATE(149), 1,
      sym_identifier,
  [3170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(412), 1,
      sym_number,
    STATE(166), 1,
      sym_identifier,
  [3186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_number,
    ACTIONS(416), 1,
      aux_sym_identifier_token1,
    ACTIONS(418), 1,
      aux_sym_identifier_token2,
    STATE(15), 1,
      sym_identifier,
  [3202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(126), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(422), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [3226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(426), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [3238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(430), 2,
      anon_sym_country,
      aux_sym_identifier_token2,
  [3250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(106), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(82), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(170), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(434), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(438), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(440), 1,
      sym_number,
    STATE(199), 1,
      sym_identifier,
  [3326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(442), 1,
      sym_number,
    STATE(200), 1,
      sym_identifier,
  [3342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    ACTIONS(444), 1,
      sym_number,
    STATE(209), 1,
      sym_identifier,
  [3358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(448), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(452), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token2,
  [3382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(456), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token2,
  [3394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(460), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
    ACTIONS(464), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token2,
  [3418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(466), 1,
      sym_number,
    STATE(203), 1,
      sym_identifier,
  [3434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    ACTIONS(468), 1,
      sym_number,
    STATE(202), 1,
      sym_identifier,
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_identifier_token2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [3461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym_identifier_token2,
    ACTIONS(470), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [3472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(476), 1,
      anon_sym_scope,
    ACTIONS(478), 1,
      anon_sym_days,
  [3485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [3494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(484), 1,
      anon_sym_min,
    ACTIONS(486), 1,
      anon_sym_max,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym_identifier_token2,
    ACTIONS(488), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [3518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    STATE(35), 1,
      sym_identifier,
  [3531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_identifier_token2,
    ACTIONS(492), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [3542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_yes,
    STATE(32), 1,
      sym_effect_limit_block,
  [3555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(502), 2,
      anon_sym_GT,
      anon_sym_LT,
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_identifier_token2,
    ACTIONS(504), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_identifier_token2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [3588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    STATE(120), 1,
      sym_identifier,
  [3601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    STATE(122), 1,
      sym_identifier,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    STATE(222), 1,
      sym_identifier,
  [3627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    STATE(224), 1,
      sym_identifier,
  [3640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    STATE(152), 1,
      sym_identifier,
  [3653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_identifier_token1,
    ACTIONS(408), 1,
      aux_sym_identifier_token2,
    STATE(46), 1,
      sym_identifier,
  [3666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_identifier_token2,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [3677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      anon_sym_max,
  [3687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_array_math_block,
  [3697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_trigger_block,
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_trigger_block,
  [3717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_modifier_block,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_effect_block,
  [3737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_effect_block,
  [3747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_trigger_block,
  [3757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_yes,
      anon_sym_no,
  [3765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 2,
      anon_sym_yes,
      anon_sym_no,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(536), 1,
      anon_sym_tooltip,
  [3783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_clamp_variable_block,
  [3793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      anon_sym_index,
  [3803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_idea_content,
  [3813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_variable_math_block,
  [3823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    ACTIONS(550), 1,
      anon_sym_days,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_number,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_EQ,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [3861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_EQ,
  [3868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_EQ,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_EQ,
  [3889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_EQ,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_modifier,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_var,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_yes,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_EQ,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_EQ,
  [3959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
  [3966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_EQ,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_EQ,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_EQ,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_EQ,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_EQ,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_EQ,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      aux_sym_log_effect_token1,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_EQ,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_EQ,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_EQ,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
  [4050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym_loc_key,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_EQ,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
  [4078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_EQ,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_EQ,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_EQ,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_number,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_EQ,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_EQ,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_number,
  [4127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_EQ,
  [4134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_EQ,
  [4141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_EQ,
  [4148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_EQ,
  [4155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
  [4162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
  [4169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
  [4176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_value,
  [4183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
  [4190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_EQ,
  [4197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_EQ,
  [4204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_EQ,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_EQ,
  [4218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_EQ,
  [4225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_compare,
  [4232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_EQ,
  [4239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_EQ,
  [4246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_EQ,
  [4253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_EQ,
  [4260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_loc_key,
  [4267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [4274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_EQ,
  [4281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_EQ,
  [4288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_EQ,
  [4295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_EQ,
  [4302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_EQ,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_EQ,
  [4316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_value,
  [4323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
  [4330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_value,
  [4337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      ts_builtin_sym_end,
  [4344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_EQ,
  [4351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_number,
  [4358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_civilian,
  [4365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
  [4372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_EQ,
  [4379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
  [4386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      ts_builtin_sym_end,
  [4393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
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
  [SMALL_STATE(21)] = 1136,
  [SMALL_STATE(22)] = 1174,
  [SMALL_STATE(23)] = 1212,
  [SMALL_STATE(24)] = 1250,
  [SMALL_STATE(25)] = 1288,
  [SMALL_STATE(26)] = 1326,
  [SMALL_STATE(27)] = 1364,
  [SMALL_STATE(28)] = 1402,
  [SMALL_STATE(29)] = 1440,
  [SMALL_STATE(30)] = 1478,
  [SMALL_STATE(31)] = 1516,
  [SMALL_STATE(32)] = 1554,
  [SMALL_STATE(33)] = 1592,
  [SMALL_STATE(34)] = 1630,
  [SMALL_STATE(35)] = 1668,
  [SMALL_STATE(36)] = 1706,
  [SMALL_STATE(37)] = 1744,
  [SMALL_STATE(38)] = 1782,
  [SMALL_STATE(39)] = 1820,
  [SMALL_STATE(40)] = 1858,
  [SMALL_STATE(41)] = 1907,
  [SMALL_STATE(42)] = 1956,
  [SMALL_STATE(43)] = 2005,
  [SMALL_STATE(44)] = 2033,
  [SMALL_STATE(45)] = 2054,
  [SMALL_STATE(46)] = 2075,
  [SMALL_STATE(47)] = 2096,
  [SMALL_STATE(48)] = 2117,
  [SMALL_STATE(49)] = 2138,
  [SMALL_STATE(50)] = 2159,
  [SMALL_STATE(51)] = 2180,
  [SMALL_STATE(52)] = 2201,
  [SMALL_STATE(53)] = 2222,
  [SMALL_STATE(54)] = 2243,
  [SMALL_STATE(55)] = 2264,
  [SMALL_STATE(56)] = 2285,
  [SMALL_STATE(57)] = 2306,
  [SMALL_STATE(58)] = 2327,
  [SMALL_STATE(59)] = 2359,
  [SMALL_STATE(60)] = 2385,
  [SMALL_STATE(61)] = 2411,
  [SMALL_STATE(62)] = 2437,
  [SMALL_STATE(63)] = 2463,
  [SMALL_STATE(64)] = 2489,
  [SMALL_STATE(65)] = 2515,
  [SMALL_STATE(66)] = 2541,
  [SMALL_STATE(67)] = 2567,
  [SMALL_STATE(68)] = 2593,
  [SMALL_STATE(69)] = 2619,
  [SMALL_STATE(70)] = 2644,
  [SMALL_STATE(71)] = 2669,
  [SMALL_STATE(72)] = 2694,
  [SMALL_STATE(73)] = 2719,
  [SMALL_STATE(74)] = 2744,
  [SMALL_STATE(75)] = 2769,
  [SMALL_STATE(76)] = 2795,
  [SMALL_STATE(77)] = 2818,
  [SMALL_STATE(78)] = 2832,
  [SMALL_STATE(79)] = 2852,
  [SMALL_STATE(80)] = 2872,
  [SMALL_STATE(81)] = 2892,
  [SMALL_STATE(82)] = 2912,
  [SMALL_STATE(83)] = 2932,
  [SMALL_STATE(84)] = 2952,
  [SMALL_STATE(85)] = 2972,
  [SMALL_STATE(86)] = 2992,
  [SMALL_STATE(87)] = 3014,
  [SMALL_STATE(88)] = 3034,
  [SMALL_STATE(89)] = 3054,
  [SMALL_STATE(90)] = 3066,
  [SMALL_STATE(91)] = 3078,
  [SMALL_STATE(92)] = 3094,
  [SMALL_STATE(93)] = 3106,
  [SMALL_STATE(94)] = 3122,
  [SMALL_STATE(95)] = 3138,
  [SMALL_STATE(96)] = 3154,
  [SMALL_STATE(97)] = 3170,
  [SMALL_STATE(98)] = 3186,
  [SMALL_STATE(99)] = 3202,
  [SMALL_STATE(100)] = 3214,
  [SMALL_STATE(101)] = 3226,
  [SMALL_STATE(102)] = 3238,
  [SMALL_STATE(103)] = 3250,
  [SMALL_STATE(104)] = 3262,
  [SMALL_STATE(105)] = 3274,
  [SMALL_STATE(106)] = 3286,
  [SMALL_STATE(107)] = 3298,
  [SMALL_STATE(108)] = 3310,
  [SMALL_STATE(109)] = 3326,
  [SMALL_STATE(110)] = 3342,
  [SMALL_STATE(111)] = 3358,
  [SMALL_STATE(112)] = 3370,
  [SMALL_STATE(113)] = 3382,
  [SMALL_STATE(114)] = 3394,
  [SMALL_STATE(115)] = 3406,
  [SMALL_STATE(116)] = 3418,
  [SMALL_STATE(117)] = 3434,
  [SMALL_STATE(118)] = 3450,
  [SMALL_STATE(119)] = 3461,
  [SMALL_STATE(120)] = 3472,
  [SMALL_STATE(121)] = 3485,
  [SMALL_STATE(122)] = 3494,
  [SMALL_STATE(123)] = 3507,
  [SMALL_STATE(124)] = 3518,
  [SMALL_STATE(125)] = 3531,
  [SMALL_STATE(126)] = 3542,
  [SMALL_STATE(127)] = 3555,
  [SMALL_STATE(128)] = 3566,
  [SMALL_STATE(129)] = 3577,
  [SMALL_STATE(130)] = 3588,
  [SMALL_STATE(131)] = 3601,
  [SMALL_STATE(132)] = 3614,
  [SMALL_STATE(133)] = 3627,
  [SMALL_STATE(134)] = 3640,
  [SMALL_STATE(135)] = 3653,
  [SMALL_STATE(136)] = 3666,
  [SMALL_STATE(137)] = 3677,
  [SMALL_STATE(138)] = 3687,
  [SMALL_STATE(139)] = 3697,
  [SMALL_STATE(140)] = 3707,
  [SMALL_STATE(141)] = 3717,
  [SMALL_STATE(142)] = 3727,
  [SMALL_STATE(143)] = 3737,
  [SMALL_STATE(144)] = 3747,
  [SMALL_STATE(145)] = 3757,
  [SMALL_STATE(146)] = 3765,
  [SMALL_STATE(147)] = 3773,
  [SMALL_STATE(148)] = 3783,
  [SMALL_STATE(149)] = 3793,
  [SMALL_STATE(150)] = 3803,
  [SMALL_STATE(151)] = 3813,
  [SMALL_STATE(152)] = 3823,
  [SMALL_STATE(153)] = 3833,
  [SMALL_STATE(154)] = 3840,
  [SMALL_STATE(155)] = 3847,
  [SMALL_STATE(156)] = 3854,
  [SMALL_STATE(157)] = 3861,
  [SMALL_STATE(158)] = 3868,
  [SMALL_STATE(159)] = 3875,
  [SMALL_STATE(160)] = 3882,
  [SMALL_STATE(161)] = 3889,
  [SMALL_STATE(162)] = 3896,
  [SMALL_STATE(163)] = 3903,
  [SMALL_STATE(164)] = 3910,
  [SMALL_STATE(165)] = 3917,
  [SMALL_STATE(166)] = 3924,
  [SMALL_STATE(167)] = 3931,
  [SMALL_STATE(168)] = 3938,
  [SMALL_STATE(169)] = 3945,
  [SMALL_STATE(170)] = 3952,
  [SMALL_STATE(171)] = 3959,
  [SMALL_STATE(172)] = 3966,
  [SMALL_STATE(173)] = 3973,
  [SMALL_STATE(174)] = 3980,
  [SMALL_STATE(175)] = 3987,
  [SMALL_STATE(176)] = 3994,
  [SMALL_STATE(177)] = 4001,
  [SMALL_STATE(178)] = 4008,
  [SMALL_STATE(179)] = 4015,
  [SMALL_STATE(180)] = 4022,
  [SMALL_STATE(181)] = 4029,
  [SMALL_STATE(182)] = 4036,
  [SMALL_STATE(183)] = 4043,
  [SMALL_STATE(184)] = 4050,
  [SMALL_STATE(185)] = 4057,
  [SMALL_STATE(186)] = 4064,
  [SMALL_STATE(187)] = 4071,
  [SMALL_STATE(188)] = 4078,
  [SMALL_STATE(189)] = 4085,
  [SMALL_STATE(190)] = 4092,
  [SMALL_STATE(191)] = 4099,
  [SMALL_STATE(192)] = 4106,
  [SMALL_STATE(193)] = 4113,
  [SMALL_STATE(194)] = 4120,
  [SMALL_STATE(195)] = 4127,
  [SMALL_STATE(196)] = 4134,
  [SMALL_STATE(197)] = 4141,
  [SMALL_STATE(198)] = 4148,
  [SMALL_STATE(199)] = 4155,
  [SMALL_STATE(200)] = 4162,
  [SMALL_STATE(201)] = 4169,
  [SMALL_STATE(202)] = 4176,
  [SMALL_STATE(203)] = 4183,
  [SMALL_STATE(204)] = 4190,
  [SMALL_STATE(205)] = 4197,
  [SMALL_STATE(206)] = 4204,
  [SMALL_STATE(207)] = 4211,
  [SMALL_STATE(208)] = 4218,
  [SMALL_STATE(209)] = 4225,
  [SMALL_STATE(210)] = 4232,
  [SMALL_STATE(211)] = 4239,
  [SMALL_STATE(212)] = 4246,
  [SMALL_STATE(213)] = 4253,
  [SMALL_STATE(214)] = 4260,
  [SMALL_STATE(215)] = 4267,
  [SMALL_STATE(216)] = 4274,
  [SMALL_STATE(217)] = 4281,
  [SMALL_STATE(218)] = 4288,
  [SMALL_STATE(219)] = 4295,
  [SMALL_STATE(220)] = 4302,
  [SMALL_STATE(221)] = 4309,
  [SMALL_STATE(222)] = 4316,
  [SMALL_STATE(223)] = 4323,
  [SMALL_STATE(224)] = 4330,
  [SMALL_STATE(225)] = 4337,
  [SMALL_STATE(226)] = 4344,
  [SMALL_STATE(227)] = 4351,
  [SMALL_STATE(228)] = 4358,
  [SMALL_STATE(229)] = 4365,
  [SMALL_STATE(230)] = 4372,
  [SMALL_STATE(231)] = 4379,
  [SMALL_STATE(232)] = 4386,
  [SMALL_STATE(233)] = 4393,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effect_block_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(217),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(216),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(211),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(206),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(205),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(196),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(17),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effect_limit_block_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_limit_block_repeat1, 2), SHIFT_REPEAT(186),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_effect_limit_block_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_limits, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_limits, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_block, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_math_block, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 10),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 10),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 7),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 7),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 13),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 13),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamp_variable_block, 11),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clamp_variable_block, 11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamp_variable_block, 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clamp_variable_block, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_effect, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_effect, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamp_variable_block, 8),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clamp_variable_block, 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_change, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_change, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripted_effect, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripted_effect, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_math_block, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_math_block, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clear_array, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clear_array, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamp_variable_effect, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clamp_variable_effect, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_math_effect, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_math_effect, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_math_effect, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_trigger_block, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_trigger_block, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(219),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(219),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(218),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(208),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(204),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(198),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(197),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(195),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(154),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_removal_cost, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_removal_cost, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ledger, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ledger, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cancel_if_invalid, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cancel_if_invalid, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_add, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_add, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_modifiers, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_modifiers, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content_trigger, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_content_trigger, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trigger_block_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(167),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(17),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(17),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(221),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(17),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(17),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(174),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(17),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(17),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2), SHIFT_REPEAT(17),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_country_idea_block_repeat1, 2), SHIFT_REPEAT(17),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declarations_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarations, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_trigger, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_trigger, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 5),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 6),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_scope_change, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_scope_change, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_modifier_tooltip, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_modifier_tooltip, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable, 5),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_variable, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_content, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_yes, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_yes, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid_level_idea, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid_level_idea, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_content, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_long, 9),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_math_effect_long, 6),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect_long, 6),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declaration, 5),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_math_effect_long, 9),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_short, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_long, 12),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_effect_short, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declaration, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1),
  [706] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
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
