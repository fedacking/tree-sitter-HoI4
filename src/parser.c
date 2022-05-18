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
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
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
  anon_sym_divide_variable = 41,
  anon_sym_modulo_variable = 42,
  anon_sym_set_temp_variable = 43,
  anon_sym_add_to_temp_variable = 44,
  anon_sym_subtract_from_temp_variable = 45,
  anon_sym_divide_temp_variable = 46,
  anon_sym_modulo_temp_variable = 47,
  anon_sym_add_dynamic_modifier = 48,
  anon_sym_remove_dynamic_modifier = 49,
  anon_sym_scope = 50,
  anon_sym_days = 51,
  anon_sym_limit = 52,
  sym_number = 53,
  aux_sym_identifier_token1 = 54,
  sym_comment = 55,
  sym_translation_unit = 56,
  sym_function_declarations = 57,
  sym_function_declaration = 58,
  sym_ideas_declaration = 59,
  sym__top_level_idea = 60,
  sym_country_idea_block = 61,
  sym_law_idea_block = 62,
  sym_law_yes = 63,
  sym_mid_level_idea = 64,
  sym_idea_content = 65,
  sym__idea_content = 66,
  sym_idea_content_trigger = 67,
  sym_idea_modifiers = 68,
  sym_on_add = 69,
  sym_ledger = 70,
  sym_removal_cost = 71,
  sym_picture = 72,
  sym_default = 73,
  sym_cancel_if_invalid = 74,
  sym_trigger_block = 75,
  sym_modifier_block = 76,
  sym_effect_block = 77,
  sym__trigger = 78,
  sym_trigger_scope_change = 79,
  sym_trigger_limit_block = 80,
  sym_check_variable = 81,
  sym_check_variable_long = 82,
  sym_check_variable_short = 83,
  sym_comp_trigger = 84,
  sym__modifier = 85,
  sym_modifier = 86,
  sym_custom_modifier_tooltip = 87,
  sym__effect = 88,
  sym_log_effect = 89,
  sym_variable_math_effect = 90,
  sym_dynamic_modifier_effect = 91,
  sym_variable_math_effect_short = 92,
  sym_variable_math_effect_long = 93,
  sym_scripted_effect = 94,
  sym_scope_change = 95,
  sym_effect_limit_block = 96,
  sym_limit_trigger_block = 97,
  sym_identifier = 98,
  sym_loc_key = 99,
  aux_sym_function_declarations_repeat1 = 100,
  aux_sym_ideas_declaration_repeat1 = 101,
  aux_sym_country_idea_block_repeat1 = 102,
  aux_sym_idea_content_repeat1 = 103,
  aux_sym_trigger_block_repeat1 = 104,
  aux_sym_modifier_block_repeat1 = 105,
  aux_sym_effect_block_repeat1 = 106,
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
  [anon_sym_divide_variable] = "divide_variable",
  [anon_sym_modulo_variable] = "modulo_variable",
  [anon_sym_set_temp_variable] = "set_temp_variable",
  [anon_sym_add_to_temp_variable] = "add_to_temp_variable",
  [anon_sym_subtract_from_temp_variable] = "subtract_from_temp_variable",
  [anon_sym_divide_temp_variable] = "divide_temp_variable",
  [anon_sym_modulo_temp_variable] = "modulo_temp_variable",
  [anon_sym_add_dynamic_modifier] = "add_dynamic_modifier",
  [anon_sym_remove_dynamic_modifier] = "remove_dynamic_modifier",
  [anon_sym_scope] = "scope",
  [anon_sym_days] = "days",
  [anon_sym_limit] = "limit",
  [sym_number] = "number",
  [aux_sym_identifier_token1] = "identifier_token1",
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
  [sym_dynamic_modifier_effect] = "dynamic_modifier_effect",
  [sym_variable_math_effect_short] = "variable_math_effect_short",
  [sym_variable_math_effect_long] = "variable_math_effect_long",
  [sym_scripted_effect] = "scripted_effect",
  [sym_scope_change] = "scope_change",
  [sym_effect_limit_block] = "effect_limit_block",
  [sym_limit_trigger_block] = "limit_trigger_block",
  [sym_identifier] = "identifier",
  [sym_loc_key] = "loc_key",
  [aux_sym_function_declarations_repeat1] = "function_declarations_repeat1",
  [aux_sym_ideas_declaration_repeat1] = "ideas_declaration_repeat1",
  [aux_sym_country_idea_block_repeat1] = "country_idea_block_repeat1",
  [aux_sym_idea_content_repeat1] = "idea_content_repeat1",
  [aux_sym_trigger_block_repeat1] = "trigger_block_repeat1",
  [aux_sym_modifier_block_repeat1] = "modifier_block_repeat1",
  [aux_sym_effect_block_repeat1] = "effect_block_repeat1",
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
  [anon_sym_divide_variable] = anon_sym_divide_variable,
  [anon_sym_modulo_variable] = anon_sym_modulo_variable,
  [anon_sym_set_temp_variable] = anon_sym_set_temp_variable,
  [anon_sym_add_to_temp_variable] = anon_sym_add_to_temp_variable,
  [anon_sym_subtract_from_temp_variable] = anon_sym_subtract_from_temp_variable,
  [anon_sym_divide_temp_variable] = anon_sym_divide_temp_variable,
  [anon_sym_modulo_temp_variable] = anon_sym_modulo_temp_variable,
  [anon_sym_add_dynamic_modifier] = anon_sym_add_dynamic_modifier,
  [anon_sym_remove_dynamic_modifier] = anon_sym_remove_dynamic_modifier,
  [anon_sym_scope] = anon_sym_scope,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_limit] = anon_sym_limit,
  [sym_number] = sym_number,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
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
  [sym_dynamic_modifier_effect] = sym_dynamic_modifier_effect,
  [sym_variable_math_effect_short] = sym_variable_math_effect_short,
  [sym_variable_math_effect_long] = sym_variable_math_effect_long,
  [sym_scripted_effect] = sym_scripted_effect,
  [sym_scope_change] = sym_scope_change,
  [sym_effect_limit_block] = sym_effect_limit_block,
  [sym_limit_trigger_block] = sym_limit_trigger_block,
  [sym_identifier] = sym_identifier,
  [sym_loc_key] = sym_loc_key,
  [aux_sym_function_declarations_repeat1] = aux_sym_function_declarations_repeat1,
  [aux_sym_ideas_declaration_repeat1] = aux_sym_ideas_declaration_repeat1,
  [aux_sym_country_idea_block_repeat1] = aux_sym_country_idea_block_repeat1,
  [aux_sym_idea_content_repeat1] = aux_sym_idea_content_repeat1,
  [aux_sym_trigger_block_repeat1] = aux_sym_trigger_block_repeat1,
  [aux_sym_modifier_block_repeat1] = aux_sym_modifier_block_repeat1,
  [aux_sym_effect_block_repeat1] = aux_sym_effect_block_repeat1,
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
  [anon_sym_divide_temp_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulo_temp_variable] = {
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
  [sym_dynamic_modifier_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_math_effect_short] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_math_effect_long] = {
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
  [sym_limit_trigger_block] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_loc_key] = {
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
      if (eof) ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '<') ADVANCE(430);
      if (lookahead == '=') ADVANCE(391);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == '{') ADVANCE(394);
      if (lookahead == '}') ADVANCE(395);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(435);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(342);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(370);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(361);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(157);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(369);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(329);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(344);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(343);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(362);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(239);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(148);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(346);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(363);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(240);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(364);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(348);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(366);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(332);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(219);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(226);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(228);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(229);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(407);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 156:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 157:
      if (lookahead == 'f') ADVANCE(303);
      END_STATE();
    case 158:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 159:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 160:
      if (lookahead == 'f') ADVANCE(181);
      END_STATE();
    case 161:
      if (lookahead == 'f') ADVANCE(182);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(433);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 201:
      if (lookahead == 'k') ADVANCE(6);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 239:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 240:
      if (lookahead == 'm') ADVANCE(274);
      END_STATE();
    case 241:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 243:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(431);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 287:
      if (lookahead == 'q') ADVANCE(349);
      END_STATE();
    case 288:
      if (lookahead == 'q') ADVANCE(353);
      END_STATE();
    case 289:
      if (lookahead == 'q') ADVANCE(354);
      END_STATE();
    case 290:
      if (lookahead == 'q') ADVANCE(355);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 349:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 350:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 351:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 356:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 357:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 358:
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 359:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 360:
      if (lookahead == 'v') ADVANCE(178);
      END_STATE();
    case 361:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 362:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 363:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 364:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 365:
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 366:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 367:
      if (lookahead == 'w') ADVANCE(398);
      END_STATE();
    case 368:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 369:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 370:
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 371:
      if (lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 372:
      if (lookahead == 'y') ADVANCE(318);
      END_STATE();
    case 373:
      if (lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 374:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 375:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(375)
      if (lookahead == '\r') SKIP(375)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 376:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(376)
      if (lookahead == '\r') SKIP(376)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == 'm') ADVANCE(629);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == '}') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 377:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(377)
      if (lookahead == '\r') SKIP(377)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead == '}') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 378:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(378)
      if (lookahead == '\r') SKIP(378)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead == '}') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 379:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(379)
      if (lookahead == '\r') SKIP(379)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == '}') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 380:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(380)
      if (lookahead == '\r') SKIP(380)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 381:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(381)
      if (lookahead == '\r') SKIP(381)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == 'v') ADVANCE(489);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 382:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(382)
      if (lookahead == '\r') SKIP(382)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 383:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(383)
      if (lookahead == '\r') SKIP(383)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == 'm') ADVANCE(629);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == '}') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 384:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(384)
      if (lookahead == '\r') SKIP(384)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'c') ADVANCE(627);
      if (lookahead == '}') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 385:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(385)
      if (lookahead == '\r') SKIP(385)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == '}') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 386:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 387:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(693);
      if (lookahead == '\r') ADVANCE(694);
      END_STATE();
    case 388:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 389:
      if (eof) ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(389)
      if (lookahead == '\r') SKIP(389)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '{') ADVANCE(394);
      if (lookahead == '}') ADVANCE(395);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_ideas);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_ideas);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_country);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_country);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_law);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_law);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_available);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_allowed);
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_allowed_civil_war);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_cancel);
      if (lookahead == '_') ADVANCE(169);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_ai_will_do);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_on_add);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_ledger);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_civilian);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_removal_cost);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_cancel_if_invalid);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_check_variable);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_check_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_compare);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_less_than);
      if (lookahead == '_') ADVANCE(266);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_less_than_or_equals);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_greater_than);
      if (lookahead == '_') ADVANCE(277);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_greater_than_or_equals);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_not_equals);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_custom_modifier_tooltip);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_custom_modifier_tooltip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_log);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_log_effect_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_set_variable);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_set_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_add_to_variable);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_add_to_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_subtract_from_variable);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_subtract_from_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_divide_variable);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_divide_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_modulo_variable);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_modulo_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_set_temp_variable);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_set_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_add_to_temp_variable);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_add_to_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_subtract_from_temp_variable);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_subtract_from_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_divide_temp_variable);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_divide_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_modulo_temp_variable);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_modulo_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_add_dynamic_modifier);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_add_dynamic_modifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_remove_dynamic_modifier);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_remove_dynamic_modifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == 't') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead == 'u') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 'o') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(552);
      if (lookahead == 'v') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead == 'v') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead == 'v') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == 'v') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == 'v') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(693);
      if (lookahead == '\\') ADVANCE(387);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 375},
  [2] = {.lex_state = 376},
  [3] = {.lex_state = 383},
  [4] = {.lex_state = 383},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 383},
  [7] = {.lex_state = 383},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 383},
  [11] = {.lex_state = 383},
  [12] = {.lex_state = 383},
  [13] = {.lex_state = 383},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 383},
  [16] = {.lex_state = 383},
  [17] = {.lex_state = 383},
  [18] = {.lex_state = 383},
  [19] = {.lex_state = 383},
  [20] = {.lex_state = 383},
  [21] = {.lex_state = 383},
  [22] = {.lex_state = 383},
  [23] = {.lex_state = 383},
  [24] = {.lex_state = 383},
  [25] = {.lex_state = 383},
  [26] = {.lex_state = 383},
  [27] = {.lex_state = 383},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 377},
  [43] = {.lex_state = 378},
  [44] = {.lex_state = 378},
  [45] = {.lex_state = 378},
  [46] = {.lex_state = 378},
  [47] = {.lex_state = 378},
  [48] = {.lex_state = 378},
  [49] = {.lex_state = 378},
  [50] = {.lex_state = 378},
  [51] = {.lex_state = 378},
  [52] = {.lex_state = 378},
  [53] = {.lex_state = 384},
  [54] = {.lex_state = 384},
  [55] = {.lex_state = 384},
  [56] = {.lex_state = 385},
  [57] = {.lex_state = 385},
  [58] = {.lex_state = 385},
  [59] = {.lex_state = 379},
  [60] = {.lex_state = 380},
  [61] = {.lex_state = 381},
  [62] = {.lex_state = 389},
  [63] = {.lex_state = 389},
  [64] = {.lex_state = 389},
  [65] = {.lex_state = 381},
  [66] = {.lex_state = 389},
  [67] = {.lex_state = 389},
  [68] = {.lex_state = 389},
  [69] = {.lex_state = 389},
  [70] = {.lex_state = 389},
  [71] = {.lex_state = 389},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 389},
  [74] = {.lex_state = 389},
  [75] = {.lex_state = 389},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 389},
  [78] = {.lex_state = 378},
  [79] = {.lex_state = 378},
  [80] = {.lex_state = 378},
  [81] = {.lex_state = 378},
  [82] = {.lex_state = 378},
  [83] = {.lex_state = 378},
  [84] = {.lex_state = 384},
  [85] = {.lex_state = 378},
  [86] = {.lex_state = 378},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 384},
  [89] = {.lex_state = 378},
  [90] = {.lex_state = 384},
  [91] = {.lex_state = 384},
  [92] = {.lex_state = 378},
  [93] = {.lex_state = 385},
  [94] = {.lex_state = 385},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 385},
  [97] = {.lex_state = 389},
  [98] = {.lex_state = 384},
  [99] = {.lex_state = 389},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 382},
  [102] = {.lex_state = 382},
  [103] = {.lex_state = 389},
  [104] = {.lex_state = 389},
  [105] = {.lex_state = 389},
  [106] = {.lex_state = 389},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 389},
  [112] = {.lex_state = 389},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 389},
  [115] = {.lex_state = 389},
  [116] = {.lex_state = 389},
  [117] = {.lex_state = 389},
  [118] = {.lex_state = 389},
  [119] = {.lex_state = 389},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 389},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
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
  [163] = {.lex_state = 0},
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
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
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
    [anon_sym_divide_variable] = ACTIONS(1),
    [anon_sym_modulo_variable] = ACTIONS(1),
    [anon_sym_set_temp_variable] = ACTIONS(1),
    [anon_sym_add_to_temp_variable] = ACTIONS(1),
    [anon_sym_subtract_from_temp_variable] = ACTIONS(1),
    [anon_sym_divide_temp_variable] = ACTIONS(1),
    [anon_sym_modulo_temp_variable] = ACTIONS(1),
    [anon_sym_add_dynamic_modifier] = ACTIONS(1),
    [anon_sym_remove_dynamic_modifier] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_limit] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_translation_unit] = STATE(185),
    [sym_function_declarations] = STATE(184),
    [sym_function_declaration] = STATE(69),
    [sym_ideas_declaration] = STATE(184),
    [sym_identifier] = STATE(183),
    [aux_sym_function_declarations_repeat1] = STATE(69),
    [anon_sym_ideas] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_log,
    ACTIONS(17), 1,
      anon_sym_limit,
    STATE(12), 1,
      sym_limit_trigger_block,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(10), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(13), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [47] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_log,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(13), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(13), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [88] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_log,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(7), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(13), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [129] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_modifier,
    ACTIONS(31), 1,
      anon_sym_on_add,
    ACTIONS(33), 1,
      anon_sym_ledger,
    ACTIONS(35), 1,
      anon_sym_removal_cost,
    ACTIONS(37), 1,
      anon_sym_picture,
    ACTIONS(39), 1,
      anon_sym_default,
    ACTIONS(41), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(27), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(25), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(9), 10,
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
  [178] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_log,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(7), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(13), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [219] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_log,
    ACTIONS(56), 1,
      aux_sym_identifier_token1,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(7), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(50), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [260] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_modifier,
    ACTIONS(70), 1,
      anon_sym_on_add,
    ACTIONS(73), 1,
      anon_sym_ledger,
    ACTIONS(76), 1,
      anon_sym_removal_cost,
    ACTIONS(79), 1,
      anon_sym_picture,
    ACTIONS(82), 1,
      anon_sym_default,
    ACTIONS(85), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(64), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(61), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(8), 10,
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
  [309] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_modifier,
    ACTIONS(31), 1,
      anon_sym_on_add,
    ACTIONS(33), 1,
      anon_sym_ledger,
    ACTIONS(35), 1,
      anon_sym_removal_cost,
    ACTIONS(37), 1,
      anon_sym_picture,
    ACTIONS(39), 1,
      anon_sym_default,
    ACTIONS(41), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(25), 3,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_ai_will_do,
    STATE(8), 10,
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
  [358] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_log,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(7), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(13), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [399] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_log,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(4), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(13), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_log,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(6), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(13), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [481] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_log,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(7), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(13), 10,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(96), 18,
      anon_sym_EQ,
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
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_scope,
      anon_sym_days,
  [550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 14,
      anon_sym_log,
      anon_sym_set_variable,
      anon_sym_add_to_variable,
      anon_sym_subtract_from_variable,
      anon_sym_divide_variable,
      anon_sym_modulo_variable,
      anon_sym_set_temp_variable,
      anon_sym_add_to_temp_variable,
      anon_sym_subtract_from_temp_variable,
      anon_sym_divide_temp_variable,
      anon_sym_modulo_temp_variable,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
      aux_sym_identifier_token1,
  [849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(152), 11,
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
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(144), 11,
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
  [891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(156), 11,
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
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(160), 11,
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
  [933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(164), 11,
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
  [954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(168), 11,
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
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(172), 11,
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
  [996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(176), 11,
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
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(180), 11,
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
  [1038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(116), 11,
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
  [1059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(184), 11,
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
  [1080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(188), 11,
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
  [1101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(192), 11,
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
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(196), 11,
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
  [1143] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(204), 1,
      anon_sym_limit,
    STATE(51), 1,
      sym_limit_trigger_block,
    STATE(95), 1,
      sym_identifier,
    STATE(43), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(44), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1195] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      anon_sym_check_variable,
    ACTIONS(213), 1,
      aux_sym_identifier_token1,
    STATE(95), 1,
      sym_identifier,
    STATE(44), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(49), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(44), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(44), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(46), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(44), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(47), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1356] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(52), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_check_variable,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_identifier,
    STATE(44), 5,
      sym__trigger,
      sym_trigger_scope_change,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      anon_sym_country,
    ACTIONS(235), 1,
      aux_sym_identifier_token1,
    STATE(179), 1,
      sym_identifier,
    STATE(53), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [1424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      anon_sym_country,
    STATE(179), 1,
      sym_identifier,
    STATE(53), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [1446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(240), 1,
      anon_sym_country,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_identifier,
    STATE(54), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [1468] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      anon_sym_custom_modifier_tooltip,
    STATE(134), 1,
      sym_identifier,
    STATE(57), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [1490] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(246), 1,
      anon_sym_custom_modifier_tooltip,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_identifier,
    STATE(58), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [1512] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      anon_sym_custom_modifier_tooltip,
    ACTIONS(255), 1,
      aux_sym_identifier_token1,
    STATE(134), 1,
      sym_identifier,
    STATE(58), 4,
      sym__modifier,
      sym_modifier,
      sym_custom_modifier_tooltip,
      aux_sym_modifier_block_repeat1,
  [1534] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      anon_sym_law,
    STATE(62), 1,
      sym_law_yes,
    STATE(163), 1,
      sym_identifier,
    STATE(71), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_less_than,
      anon_sym_greater_than,
    ACTIONS(264), 4,
      anon_sym_less_than_or_equals,
      anon_sym_greater_than_or_equals,
      anon_sym_equals,
      anon_sym_not_equals,
  [1571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(266), 1,
      anon_sym_var,
    ACTIONS(268), 1,
      sym_number,
    STATE(87), 1,
      sym_identifier,
    STATE(140), 2,
      sym_check_variable_long,
      sym_check_variable_short,
  [1591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    STATE(163), 1,
      sym_identifier,
    STATE(66), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      aux_sym_identifier_token1,
    STATE(163), 1,
      sym_identifier,
    STATE(63), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      aux_sym_identifier_token1,
    STATE(183), 1,
      sym_identifier,
    STATE(64), 2,
      sym_function_declaration,
      aux_sym_function_declarations_repeat1,
  [1642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(284), 1,
      anon_sym_var,
    STATE(155), 1,
      sym_identifier,
    STATE(156), 2,
      sym_variable_math_effect_short,
      sym_variable_math_effect_long,
  [1659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym_identifier,
    STATE(63), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      sym_number,
    ACTIONS(292), 1,
      aux_sym_identifier_token1,
    STATE(78), 1,
      sym_identifier,
    STATE(83), 1,
      sym_trigger_limit_block,
  [1695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym_identifier,
    STATE(63), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_identifier,
    STATE(64), 2,
      sym_function_declaration,
      aux_sym_function_declarations_repeat1,
  [1729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym_identifier,
    STATE(68), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    STATE(163), 1,
      sym_identifier,
    STATE(63), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_yes,
    STATE(22), 1,
      sym_effect_limit_block,
  [1776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(304), 1,
      sym_number,
    STATE(164), 1,
      sym_identifier,
  [1789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(306), 1,
      sym_number,
    STATE(159), 1,
      sym_identifier,
  [1802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(308), 1,
      sym_number,
    STATE(158), 1,
      sym_identifier,
  [1815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 1,
      anon_sym_scope,
    ACTIONS(314), 1,
      anon_sym_days,
  [1828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(316), 1,
      sym_number,
    STATE(150), 1,
      sym_identifier,
  [1841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 2,
      anon_sym_country,
      aux_sym_identifier_token1,
  [1918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [1949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 2,
      anon_sym_country,
      aux_sym_identifier_token1,
  [1960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 2,
      anon_sym_country,
      aux_sym_identifier_token1,
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 2,
      anon_sym_country,
      aux_sym_identifier_token1,
  [1993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 2,
      anon_sym_check_variable,
      aux_sym_identifier_token1,
  [2004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token1,
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token1,
  [2026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_EQ,
    ACTIONS(370), 2,
      anon_sym_GT,
      anon_sym_LT,
  [2037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 2,
      anon_sym_custom_modifier_tooltip,
      aux_sym_identifier_token1,
  [2048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_number,
    ACTIONS(292), 1,
      aux_sym_identifier_token1,
    STATE(78), 1,
      sym_identifier,
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 2,
      anon_sym_country,
      aux_sym_identifier_token1,
  [2072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    ACTIONS(380), 1,
      sym_number,
    STATE(125), 1,
      sym_identifier,
  [2085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_trigger_block,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_yes,
      anon_sym_no,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_yes,
      anon_sym_no,
  [2111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [2119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    STATE(76), 1,
      sym_identifier,
  [2129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    STATE(33), 1,
      sym_identifier,
  [2139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    STATE(120), 1,
      sym_identifier,
  [2149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_effect_block,
  [2159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_modifier_block,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_trigger_block,
  [2179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_idea_content,
  [2189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [2197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_identifier_token1,
    STATE(151), 1,
      sym_identifier,
  [2207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    ACTIONS(400), 1,
      anon_sym_tooltip,
  [2217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      aux_sym_identifier_token1,
    STATE(170), 1,
      sym_loc_key,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      aux_sym_identifier_token1,
    STATE(94), 1,
      sym_loc_key,
  [2237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [2245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [2261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_RBRACE,
      aux_sym_identifier_token1,
  [2269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_days,
  [2279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_effect_block,
  [2297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_trigger_block,
  [2307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_EQ,
  [2314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
  [2321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_number,
  [2328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
  [2335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
  [2342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_civilian,
  [2349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_number,
  [2356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_EQ,
  [2363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_EQ,
  [2370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_EQ,
  [2377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_EQ,
  [2384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_EQ,
  [2391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_EQ,
  [2398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_EQ,
  [2405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_EQ,
  [2412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_EQ,
  [2419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_EQ,
  [2433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_EQ,
  [2440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_EQ,
  [2447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_EQ,
  [2454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_number,
  [2461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_EQ,
  [2468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_EQ,
  [2475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_number,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_EQ,
  [2489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
  [2496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_value,
  [2503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_yes,
  [2510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_EQ,
  [2517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [2524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_EQ,
  [2531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
  [2538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [2545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_value,
  [2552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
  [2559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_EQ,
  [2566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
  [2573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_EQ,
  [2580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_EQ,
  [2587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_compare,
  [2594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_EQ,
  [2601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_modifier,
  [2608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
  [2615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_EQ,
  [2622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
  [2629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
  [2636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_log_effect_token1,
  [2643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
  [2650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
  [2657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
  [2664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_EQ,
  [2671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_EQ,
  [2678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_EQ,
  [2685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_EQ,
  [2692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_EQ,
  [2699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_EQ,
  [2706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
  [2713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
  [2720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_EQ,
  [2727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
  [2741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 260,
  [SMALL_STATE(9)] = 309,
  [SMALL_STATE(10)] = 358,
  [SMALL_STATE(11)] = 399,
  [SMALL_STATE(12)] = 440,
  [SMALL_STATE(13)] = 481,
  [SMALL_STATE(14)] = 522,
  [SMALL_STATE(15)] = 550,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 596,
  [SMALL_STATE(18)] = 619,
  [SMALL_STATE(19)] = 642,
  [SMALL_STATE(20)] = 665,
  [SMALL_STATE(21)] = 688,
  [SMALL_STATE(22)] = 711,
  [SMALL_STATE(23)] = 734,
  [SMALL_STATE(24)] = 757,
  [SMALL_STATE(25)] = 780,
  [SMALL_STATE(26)] = 803,
  [SMALL_STATE(27)] = 826,
  [SMALL_STATE(28)] = 849,
  [SMALL_STATE(29)] = 870,
  [SMALL_STATE(30)] = 891,
  [SMALL_STATE(31)] = 912,
  [SMALL_STATE(32)] = 933,
  [SMALL_STATE(33)] = 954,
  [SMALL_STATE(34)] = 975,
  [SMALL_STATE(35)] = 996,
  [SMALL_STATE(36)] = 1017,
  [SMALL_STATE(37)] = 1038,
  [SMALL_STATE(38)] = 1059,
  [SMALL_STATE(39)] = 1080,
  [SMALL_STATE(40)] = 1101,
  [SMALL_STATE(41)] = 1122,
  [SMALL_STATE(42)] = 1143,
  [SMALL_STATE(43)] = 1172,
  [SMALL_STATE(44)] = 1195,
  [SMALL_STATE(45)] = 1218,
  [SMALL_STATE(46)] = 1241,
  [SMALL_STATE(47)] = 1264,
  [SMALL_STATE(48)] = 1287,
  [SMALL_STATE(49)] = 1310,
  [SMALL_STATE(50)] = 1333,
  [SMALL_STATE(51)] = 1356,
  [SMALL_STATE(52)] = 1379,
  [SMALL_STATE(53)] = 1402,
  [SMALL_STATE(54)] = 1424,
  [SMALL_STATE(55)] = 1446,
  [SMALL_STATE(56)] = 1468,
  [SMALL_STATE(57)] = 1490,
  [SMALL_STATE(58)] = 1512,
  [SMALL_STATE(59)] = 1534,
  [SMALL_STATE(60)] = 1557,
  [SMALL_STATE(61)] = 1571,
  [SMALL_STATE(62)] = 1591,
  [SMALL_STATE(63)] = 1608,
  [SMALL_STATE(64)] = 1625,
  [SMALL_STATE(65)] = 1642,
  [SMALL_STATE(66)] = 1659,
  [SMALL_STATE(67)] = 1676,
  [SMALL_STATE(68)] = 1695,
  [SMALL_STATE(69)] = 1712,
  [SMALL_STATE(70)] = 1729,
  [SMALL_STATE(71)] = 1746,
  [SMALL_STATE(72)] = 1763,
  [SMALL_STATE(73)] = 1776,
  [SMALL_STATE(74)] = 1789,
  [SMALL_STATE(75)] = 1802,
  [SMALL_STATE(76)] = 1815,
  [SMALL_STATE(77)] = 1828,
  [SMALL_STATE(78)] = 1841,
  [SMALL_STATE(79)] = 1852,
  [SMALL_STATE(80)] = 1863,
  [SMALL_STATE(81)] = 1874,
  [SMALL_STATE(82)] = 1885,
  [SMALL_STATE(83)] = 1896,
  [SMALL_STATE(84)] = 1907,
  [SMALL_STATE(85)] = 1918,
  [SMALL_STATE(86)] = 1929,
  [SMALL_STATE(87)] = 1940,
  [SMALL_STATE(88)] = 1949,
  [SMALL_STATE(89)] = 1960,
  [SMALL_STATE(90)] = 1971,
  [SMALL_STATE(91)] = 1982,
  [SMALL_STATE(92)] = 1993,
  [SMALL_STATE(93)] = 2004,
  [SMALL_STATE(94)] = 2015,
  [SMALL_STATE(95)] = 2026,
  [SMALL_STATE(96)] = 2037,
  [SMALL_STATE(97)] = 2048,
  [SMALL_STATE(98)] = 2061,
  [SMALL_STATE(99)] = 2072,
  [SMALL_STATE(100)] = 2085,
  [SMALL_STATE(101)] = 2095,
  [SMALL_STATE(102)] = 2103,
  [SMALL_STATE(103)] = 2111,
  [SMALL_STATE(104)] = 2119,
  [SMALL_STATE(105)] = 2129,
  [SMALL_STATE(106)] = 2139,
  [SMALL_STATE(107)] = 2149,
  [SMALL_STATE(108)] = 2159,
  [SMALL_STATE(109)] = 2169,
  [SMALL_STATE(110)] = 2179,
  [SMALL_STATE(111)] = 2189,
  [SMALL_STATE(112)] = 2197,
  [SMALL_STATE(113)] = 2207,
  [SMALL_STATE(114)] = 2217,
  [SMALL_STATE(115)] = 2227,
  [SMALL_STATE(116)] = 2237,
  [SMALL_STATE(117)] = 2245,
  [SMALL_STATE(118)] = 2253,
  [SMALL_STATE(119)] = 2261,
  [SMALL_STATE(120)] = 2269,
  [SMALL_STATE(121)] = 2279,
  [SMALL_STATE(122)] = 2287,
  [SMALL_STATE(123)] = 2297,
  [SMALL_STATE(124)] = 2307,
  [SMALL_STATE(125)] = 2314,
  [SMALL_STATE(126)] = 2321,
  [SMALL_STATE(127)] = 2328,
  [SMALL_STATE(128)] = 2335,
  [SMALL_STATE(129)] = 2342,
  [SMALL_STATE(130)] = 2349,
  [SMALL_STATE(131)] = 2356,
  [SMALL_STATE(132)] = 2363,
  [SMALL_STATE(133)] = 2370,
  [SMALL_STATE(134)] = 2377,
  [SMALL_STATE(135)] = 2384,
  [SMALL_STATE(136)] = 2391,
  [SMALL_STATE(137)] = 2398,
  [SMALL_STATE(138)] = 2405,
  [SMALL_STATE(139)] = 2412,
  [SMALL_STATE(140)] = 2419,
  [SMALL_STATE(141)] = 2426,
  [SMALL_STATE(142)] = 2433,
  [SMALL_STATE(143)] = 2440,
  [SMALL_STATE(144)] = 2447,
  [SMALL_STATE(145)] = 2454,
  [SMALL_STATE(146)] = 2461,
  [SMALL_STATE(147)] = 2468,
  [SMALL_STATE(148)] = 2475,
  [SMALL_STATE(149)] = 2482,
  [SMALL_STATE(150)] = 2489,
  [SMALL_STATE(151)] = 2496,
  [SMALL_STATE(152)] = 2503,
  [SMALL_STATE(153)] = 2510,
  [SMALL_STATE(154)] = 2517,
  [SMALL_STATE(155)] = 2524,
  [SMALL_STATE(156)] = 2531,
  [SMALL_STATE(157)] = 2538,
  [SMALL_STATE(158)] = 2545,
  [SMALL_STATE(159)] = 2552,
  [SMALL_STATE(160)] = 2559,
  [SMALL_STATE(161)] = 2566,
  [SMALL_STATE(162)] = 2573,
  [SMALL_STATE(163)] = 2580,
  [SMALL_STATE(164)] = 2587,
  [SMALL_STATE(165)] = 2594,
  [SMALL_STATE(166)] = 2601,
  [SMALL_STATE(167)] = 2608,
  [SMALL_STATE(168)] = 2615,
  [SMALL_STATE(169)] = 2622,
  [SMALL_STATE(170)] = 2629,
  [SMALL_STATE(171)] = 2636,
  [SMALL_STATE(172)] = 2643,
  [SMALL_STATE(173)] = 2650,
  [SMALL_STATE(174)] = 2657,
  [SMALL_STATE(175)] = 2664,
  [SMALL_STATE(176)] = 2671,
  [SMALL_STATE(177)] = 2678,
  [SMALL_STATE(178)] = 2685,
  [SMALL_STATE(179)] = 2692,
  [SMALL_STATE(180)] = 2699,
  [SMALL_STATE(181)] = 2706,
  [SMALL_STATE(182)] = 2713,
  [SMALL_STATE(183)] = 2720,
  [SMALL_STATE(184)] = 2727,
  [SMALL_STATE(185)] = 2734,
  [SMALL_STATE(186)] = 2741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effect_block_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(178),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(177),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(176),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(149),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(149),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(147),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(146),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(144),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(143),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(142),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(141),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(139),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 7),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_limit_block, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_limit_block, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 10),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 10),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 13),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 13),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_change, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_change, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_math_effect, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripted_effect, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripted_effect, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_trigger_block, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_trigger_block, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_effect, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_effect, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_removal_cost, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_removal_cost, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cancel_if_invalid, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cancel_if_invalid, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content_trigger, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_content_trigger, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_modifiers, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_modifiers, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ledger, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ledger, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_add, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_add, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trigger_block_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(131),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(14),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(180),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(14),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(133),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(14),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2), SHIFT_REPEAT(14),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declarations_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declarations_repeat1, 2), SHIFT_REPEAT(14),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarations, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_trigger, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_trigger, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_scope_change, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_scope_change, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 6),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 6),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_variable, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_limit_block, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_limit_block, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loc_key, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loc_key, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_modifier_tooltip, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_modifier_tooltip, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_long, 9),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_yes, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid_level_idea, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect_long, 6),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect_short, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_short, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_long, 12),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declaration, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declaration, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1),
  [540] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
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
