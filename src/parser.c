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
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  anon_sym_modifier = 12,
  anon_sym_on_add = 13,
  anon_sym_ledger = 14,
  anon_sym_civilian = 15,
  anon_sym_removal_cost = 16,
  anon_sym_picture = 17,
  anon_sym_default = 18,
  anon_sym_no = 19,
  anon_sym_cancel_if_invalid = 20,
  anon_sym_check_variable = 21,
  anon_sym_var = 22,
  anon_sym_value = 23,
  anon_sym_compare = 24,
  anon_sym_less_than = 25,
  anon_sym_less_than_or_equals = 26,
  anon_sym_greater_than = 27,
  anon_sym_greater_than_or_equals = 28,
  anon_sym_equals = 29,
  anon_sym_not_equals = 30,
  anon_sym_GT = 31,
  anon_sym_LT = 32,
  anon_sym_log = 33,
  aux_sym_log_effect_token1 = 34,
  anon_sym_set_variable = 35,
  anon_sym_add_to_variable = 36,
  anon_sym_subtract_from_variable = 37,
  anon_sym_divide_variable = 38,
  anon_sym_modulo_variable = 39,
  anon_sym_set_temp_variable = 40,
  anon_sym_add_to_temp_variable = 41,
  anon_sym_subtract_from_temp_variable = 42,
  anon_sym_divide_temp_variable = 43,
  anon_sym_modulo_temp_variable = 44,
  anon_sym_add_dynamic_modifier = 45,
  anon_sym_remove_dynamic_modifier = 46,
  anon_sym_scope = 47,
  anon_sym_days = 48,
  anon_sym_limit = 49,
  sym_number = 50,
  sym_identifier = 51,
  sym_comment = 52,
  sym_translation_unit = 53,
  sym_function_declarations = 54,
  sym_function_declaration = 55,
  sym_ideas_declaration = 56,
  sym__top_level_idea = 57,
  sym_country_idea_block = 58,
  sym_law_idea_block = 59,
  sym_law_yes = 60,
  sym_mid_level_idea = 61,
  sym_idea_content = 62,
  sym__idea_content = 63,
  sym_available = 64,
  sym_allowed = 65,
  sym_allowed_civil_war = 66,
  sym_cancel = 67,
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
  sym_check_variable = 79,
  sym_check_variable_long = 80,
  sym_check_variable_short = 81,
  sym_comp_trigger = 82,
  sym_modifier = 83,
  sym__effect = 84,
  sym_log_effect = 85,
  sym_variable_math_effect = 86,
  sym_dynamic_modifier_effect = 87,
  sym_variable_math_effect_short = 88,
  sym_variable_math_effect_long = 89,
  sym_scripted_effect = 90,
  sym_scope_change = 91,
  sym_limit_effect_block = 92,
  sym_limit_trigger_bloc = 93,
  aux_sym_function_declarations_repeat1 = 94,
  aux_sym_ideas_declaration_repeat1 = 95,
  aux_sym_country_idea_block_repeat1 = 96,
  aux_sym_idea_content_repeat1 = 97,
  aux_sym_trigger_block_repeat1 = 98,
  aux_sym_modifier_block_repeat1 = 99,
  aux_sym_effect_block_repeat1 = 100,
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
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
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
  [sym_identifier] = "identifier",
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
  [sym_available] = "available",
  [sym_allowed] = "allowed",
  [sym_allowed_civil_war] = "allowed_civil_war",
  [sym_cancel] = "cancel",
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
  [sym_check_variable] = "check_variable",
  [sym_check_variable_long] = "check_variable_long",
  [sym_check_variable_short] = "check_variable_short",
  [sym_comp_trigger] = "comp_trigger",
  [sym_modifier] = "modifier",
  [sym__effect] = "_effect",
  [sym_log_effect] = "log_effect",
  [sym_variable_math_effect] = "variable_math_effect",
  [sym_dynamic_modifier_effect] = "dynamic_modifier_effect",
  [sym_variable_math_effect_short] = "variable_math_effect_short",
  [sym_variable_math_effect_long] = "variable_math_effect_long",
  [sym_scripted_effect] = "scripted_effect",
  [sym_scope_change] = "scope_change",
  [sym_limit_effect_block] = "limit_effect_block",
  [sym_limit_trigger_bloc] = "limit_trigger_bloc",
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
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
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
  [sym_identifier] = sym_identifier,
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
  [sym_available] = sym_available,
  [sym_allowed] = sym_allowed,
  [sym_allowed_civil_war] = sym_allowed_civil_war,
  [sym_cancel] = sym_cancel,
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
  [sym_check_variable] = sym_check_variable,
  [sym_check_variable_long] = sym_check_variable_long,
  [sym_check_variable_short] = sym_check_variable_short,
  [sym_comp_trigger] = sym_comp_trigger,
  [sym_modifier] = sym_modifier,
  [sym__effect] = sym__effect,
  [sym_log_effect] = sym_log_effect,
  [sym_variable_math_effect] = sym_variable_math_effect,
  [sym_dynamic_modifier_effect] = sym_dynamic_modifier_effect,
  [sym_variable_math_effect_short] = sym_variable_math_effect_short,
  [sym_variable_math_effect_long] = sym_variable_math_effect_long,
  [sym_scripted_effect] = sym_scripted_effect,
  [sym_scope_change] = sym_scope_change,
  [sym_limit_effect_block] = sym_limit_effect_block,
  [sym_limit_trigger_bloc] = sym_limit_trigger_bloc,
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
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
  [sym_identifier] = {
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
  [sym_available] = {
    .visible = true,
    .named = true,
  },
  [sym_allowed] = {
    .visible = true,
    .named = true,
  },
  [sym_allowed_civil_war] = {
    .visible = true,
    .named = true,
  },
  [sym_cancel] = {
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
  [sym_modifier] = {
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
  [sym_limit_effect_block] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_trigger_bloc] = {
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
      if (eof) ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(354);
      if (lookahead == '>') ADVANCE(390);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(110);
      if (lookahead == '{') ADVANCE(357);
      if (lookahead == '}') ADVANCE(358);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(394);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(309);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(327);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(335);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(150);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(299);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(310);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(311);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(328);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(312);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(329);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(330);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(314);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(331);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(79);
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
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(302);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(209);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(211);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(270);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(169);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 188:
      if (lookahead == 'k') ADVANCE(5);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(367);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 255:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 256:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 259:
      if (lookahead == 'q') ADVANCE(315);
      END_STATE();
    case 260:
      if (lookahead == 'q') ADVANCE(319);
      END_STATE();
    case 261:
      if (lookahead == 'q') ADVANCE(320);
      END_STATE();
    case 262:
      if (lookahead == 'q') ADVANCE(321);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 320:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 321:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 322:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 323:
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 324:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 325:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 326:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 327:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 328:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 329:
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 330:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 331:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 332:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 333:
      if (lookahead == 'w') ADVANCE(361);
      END_STATE();
    case 334:
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 335:
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 336:
      if (lookahead == 'y') ADVANCE(359);
      END_STATE();
    case 337:
      if (lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 338:
      if (lookahead == 'y') ADVANCE(234);
      END_STATE();
    case 339:
      if (lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 340:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(340)
      if (lookahead == '\r') SKIP(340)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'i') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 341:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(341)
      if (lookahead == '\r') SKIP(341)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead == 'm') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == '}') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 342:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(342)
      if (lookahead == '\r') SKIP(342)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'c') ADVANCE(574);
      if (lookahead == '}') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 343:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(343)
      if (lookahead == '\r') SKIP(343)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(269);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 344:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(344)
      if (lookahead == '\r') SKIP(344)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == '}') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 345:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(345)
      if (lookahead == '\r') SKIP(345)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 346:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(346)
      if (lookahead == '\r') SKIP(346)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 347:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(347)
      if (lookahead == '\r') SKIP(347)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead == 'm') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == '}') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 348:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(348)
      if (lookahead == '\r') SKIP(348)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == '}') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 350:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(629);
      if (lookahead == '\r') ADVANCE(630);
      END_STATE();
    case 351:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 352:
      if (eof) ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(352)
      if (lookahead == '\r') SKIP(352)
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == '}') ADVANCE(358);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_ideas);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_ideas);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_country);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_country);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_law);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_law);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_available);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_allowed);
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_allowed_civil_war);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_cancel);
      if (lookahead == '_') ADVANCE(162);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_on_add);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_ledger);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_civilian);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_removal_cost);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_cancel_if_invalid);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_check_variable);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_check_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_compare);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_less_than);
      if (lookahead == '_') ADVANCE(246);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_less_than_or_equals);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_greater_than);
      if (lookahead == '_') ADVANCE(251);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_greater_than_or_equals);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_not_equals);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_log);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_log_effect_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_set_variable);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_set_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_add_to_variable);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_add_to_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_subtract_from_variable);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_subtract_from_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_divide_variable);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_divide_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_modulo_variable);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_modulo_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_set_temp_variable);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_set_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_add_to_temp_variable);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_add_to_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_subtract_from_temp_variable);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_subtract_from_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_divide_temp_variable);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_divide_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_modulo_temp_variable);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_modulo_temp_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_add_dynamic_modifier);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_add_dynamic_modifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_remove_dynamic_modifier);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_remove_dynamic_modifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead == 't') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'u') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'o') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead == 'v') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead == 'v') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == 'v') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == 'v') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead == 'v') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(629);
      if (lookahead == '\\') ADVANCE(350);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 340},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 341},
  [6] = {.lex_state = 347},
  [7] = {.lex_state = 347},
  [8] = {.lex_state = 347},
  [9] = {.lex_state = 347},
  [10] = {.lex_state = 347},
  [11] = {.lex_state = 347},
  [12] = {.lex_state = 347},
  [13] = {.lex_state = 347},
  [14] = {.lex_state = 347},
  [15] = {.lex_state = 347},
  [16] = {.lex_state = 347},
  [17] = {.lex_state = 347},
  [18] = {.lex_state = 347},
  [19] = {.lex_state = 347},
  [20] = {.lex_state = 347},
  [21] = {.lex_state = 347},
  [22] = {.lex_state = 347},
  [23] = {.lex_state = 347},
  [24] = {.lex_state = 347},
  [25] = {.lex_state = 347},
  [26] = {.lex_state = 347},
  [27] = {.lex_state = 0},
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
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 342},
  [45] = {.lex_state = 348},
  [46] = {.lex_state = 348},
  [47] = {.lex_state = 348},
  [48] = {.lex_state = 342},
  [49] = {.lex_state = 348},
  [50] = {.lex_state = 348},
  [51] = {.lex_state = 342},
  [52] = {.lex_state = 343},
  [53] = {.lex_state = 344},
  [54] = {.lex_state = 345},
  [55] = {.lex_state = 352},
  [56] = {.lex_state = 352},
  [57] = {.lex_state = 352},
  [58] = {.lex_state = 352},
  [59] = {.lex_state = 352},
  [60] = {.lex_state = 352},
  [61] = {.lex_state = 352},
  [62] = {.lex_state = 352},
  [63] = {.lex_state = 345},
  [64] = {.lex_state = 352},
  [65] = {.lex_state = 352},
  [66] = {.lex_state = 352},
  [67] = {.lex_state = 342},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 342},
  [71] = {.lex_state = 342},
  [72] = {.lex_state = 342},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 348},
  [75] = {.lex_state = 342},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 348},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 352},
  [81] = {.lex_state = 352},
  [82] = {.lex_state = 352},
  [83] = {.lex_state = 352},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 352},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 352},
  [88] = {.lex_state = 352},
  [89] = {.lex_state = 352},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 352},
  [92] = {.lex_state = 352},
  [93] = {.lex_state = 352},
  [94] = {.lex_state = 352},
  [95] = {.lex_state = 346},
  [96] = {.lex_state = 352},
  [97] = {.lex_state = 346},
  [98] = {.lex_state = 352},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 352},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 352},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 352},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
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
  [166] = {.lex_state = 352},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
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
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
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
    [sym_translation_unit] = STATE(169),
    [sym_function_declarations] = STATE(168),
    [sym_function_declaration] = STATE(65),
    [sym_ideas_declaration] = STATE(168),
    [aux_sym_function_declarations_repeat1] = STATE(65),
    [anon_sym_ideas] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_available,
    ACTIONS(13), 1,
      anon_sym_allowed,
    ACTIONS(15), 1,
      anon_sym_allowed_civil_war,
    ACTIONS(17), 1,
      anon_sym_cancel,
    ACTIONS(19), 1,
      anon_sym_modifier,
    ACTIONS(21), 1,
      anon_sym_on_add,
    ACTIONS(23), 1,
      anon_sym_ledger,
    ACTIONS(25), 1,
      anon_sym_removal_cost,
    ACTIONS(27), 1,
      anon_sym_picture,
    ACTIONS(29), 1,
      anon_sym_default,
    ACTIONS(31), 1,
      anon_sym_cancel_if_invalid,
    STATE(3), 13,
      sym__idea_content,
      sym_available,
      sym_allowed,
      sym_allowed_civil_war,
      sym_cancel,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_removal_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [55] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_available,
    ACTIONS(38), 1,
      anon_sym_allowed,
    ACTIONS(41), 1,
      anon_sym_allowed_civil_war,
    ACTIONS(44), 1,
      anon_sym_cancel,
    ACTIONS(47), 1,
      anon_sym_modifier,
    ACTIONS(50), 1,
      anon_sym_on_add,
    ACTIONS(53), 1,
      anon_sym_ledger,
    ACTIONS(56), 1,
      anon_sym_removal_cost,
    ACTIONS(59), 1,
      anon_sym_picture,
    ACTIONS(62), 1,
      anon_sym_default,
    ACTIONS(65), 1,
      anon_sym_cancel_if_invalid,
    STATE(3), 13,
      sym__idea_content,
      sym_available,
      sym_allowed,
      sym_allowed_civil_war,
      sym_cancel,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_removal_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [110] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_available,
    ACTIONS(13), 1,
      anon_sym_allowed,
    ACTIONS(15), 1,
      anon_sym_allowed_civil_war,
    ACTIONS(17), 1,
      anon_sym_cancel,
    ACTIONS(19), 1,
      anon_sym_modifier,
    ACTIONS(21), 1,
      anon_sym_on_add,
    ACTIONS(23), 1,
      anon_sym_ledger,
    ACTIONS(25), 1,
      anon_sym_removal_cost,
    ACTIONS(27), 1,
      anon_sym_picture,
    ACTIONS(29), 1,
      anon_sym_default,
    ACTIONS(31), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(2), 13,
      sym__idea_content,
      sym_available,
      sym_allowed,
      sym_allowed_civil_war,
      sym_cancel,
      sym_idea_modifiers,
      sym_on_add,
      sym_ledger,
      sym_removal_cost,
      sym_picture,
      sym_default,
      sym_cancel_if_invalid,
      aux_sym_idea_content_repeat1,
  [165] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_log,
    ACTIONS(78), 1,
      anon_sym_limit,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(13), 1,
      sym_limit_trigger_bloc,
    ACTIONS(76), 2,
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
    ACTIONS(74), 10,
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
  [209] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_log,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 2,
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
    ACTIONS(74), 10,
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
  [247] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_log,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 2,
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
    ACTIONS(74), 10,
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
  [285] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_log,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 2,
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
    ACTIONS(74), 10,
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
  [323] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_log,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(8), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(74), 10,
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
  [361] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_log,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(98), 2,
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
    ACTIONS(95), 10,
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
  [399] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_log,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 2,
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
    ACTIONS(74), 10,
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
  [437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_log,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 2,
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
    ACTIONS(74), 10,
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
  [475] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_log,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 2,
      anon_sym_add_dynamic_modifier,
      anon_sym_remove_dynamic_modifier,
    STATE(11), 7,
      sym__effect,
      sym_log_effect,
      sym_variable_math_effect,
      sym_dynamic_modifier_effect,
      sym_scripted_effect,
      sym_scope_change,
      aux_sym_effect_block_repeat1,
    ACTIONS(74), 10,
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
  [513] = 3,
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
      sym_identifier,
  [536] = 3,
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
      sym_identifier,
  [559] = 3,
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
      sym_identifier,
  [582] = 3,
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
      sym_identifier,
  [605] = 3,
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
      sym_identifier,
  [628] = 3,
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
      sym_identifier,
  [651] = 3,
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
      sym_identifier,
  [674] = 3,
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
      sym_identifier,
  [697] = 3,
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
      sym_identifier,
  [720] = 3,
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
      sym_identifier,
  [743] = 3,
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
      sym_identifier,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 14,
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
      sym_identifier,
  [789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 14,
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
      sym_identifier,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(160), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(164), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(168), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(172), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(176), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
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
    ACTIONS(182), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(180), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(184), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(132), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(124), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(188), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(192), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [1032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(196), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [1052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(200), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [1072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(204), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(208), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(212), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(216), 10,
      anon_sym_RBRACE,
      anon_sym_available,
      anon_sym_allowed_civil_war,
      anon_sym_modifier,
      anon_sym_on_add,
      anon_sym_ledger,
      anon_sym_removal_cost,
      anon_sym_picture,
      anon_sym_default,
      anon_sym_cancel_if_invalid,
  [1152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_country,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(51), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [1171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      anon_sym_check_variable,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(49), 4,
      sym__trigger,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_check_variable,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(45), 4,
      sym__trigger,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_check_variable,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(50), 4,
      sym__trigger,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_country,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(44), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [1247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      anon_sym_check_variable,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(49), 4,
      sym__trigger,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_check_variable,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(49), 4,
      sym__trigger,
      sym_check_variable,
      sym_comp_trigger,
      aux_sym_trigger_block_repeat1,
  [1285] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      anon_sym_country,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(51), 4,
      sym__top_level_idea,
      sym_country_idea_block,
      sym_law_idea_block,
      aux_sym_ideas_declaration_repeat1,
  [1304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_less_than,
      anon_sym_greater_than,
    ACTIONS(258), 4,
      anon_sym_less_than_or_equals,
      anon_sym_greater_than_or_equals,
      anon_sym_equals,
      anon_sym_not_equals,
  [1318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      anon_sym_law,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(62), 1,
      sym_law_yes,
    STATE(66), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_var,
    ACTIONS(268), 1,
      sym_number,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(144), 2,
      sym_check_variable_long,
      sym_check_variable_short,
  [1355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 1,
      sym_identifier,
    STATE(59), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(58), 2,
      sym_modifier,
      aux_sym_modifier_block_repeat1,
  [1383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(60), 2,
      sym_modifier,
      aux_sym_modifier_block_repeat1,
  [1411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(59), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(60), 2,
      sym_modifier,
      aux_sym_modifier_block_repeat1,
  [1439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(61), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_var,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(119), 2,
      sym_variable_math_effect_short,
      sym_variable_math_effect_long,
  [1481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      sym_identifier,
    STATE(64), 2,
      sym_function_declaration,
      aux_sym_function_declarations_repeat1,
  [1495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(64), 2,
      sym_function_declaration,
      aux_sym_function_declarations_repeat1,
  [1509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [1523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 2,
      anon_sym_country,
      sym_identifier,
  [1534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      anon_sym_scope,
    ACTIONS(319), 1,
      anon_sym_days,
  [1547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [1556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 2,
      anon_sym_country,
      sym_identifier,
  [1567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 2,
      anon_sym_country,
      sym_identifier,
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 2,
      anon_sym_country,
      sym_identifier,
  [1589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_yes,
    STATE(24), 1,
      sym_limit_effect_block,
  [1602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 2,
      anon_sym_check_variable,
      sym_identifier,
  [1613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 2,
      anon_sym_country,
      sym_identifier,
  [1624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [1633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 2,
      anon_sym_check_variable,
      sym_identifier,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      anon_sym_days,
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_effect_block,
  [1664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      sym_number,
      sym_identifier,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 2,
      sym_number,
      sym_identifier,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_effect_block,
  [1706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      sym_number,
      sym_identifier,
  [1714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_modifier_block,
  [1724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [1740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_trigger_block,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [1766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      sym_number,
      sym_identifier,
  [1782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      sym_number,
      sym_identifier,
  [1790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_yes,
      anon_sym_no,
  [1798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_yes,
      anon_sym_no,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym_number,
      sym_identifier,
  [1822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_idea_content,
  [1832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_trigger_block,
  [1842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_trigger_block,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_trigger_block,
  [1862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_trigger_block,
  [1872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_EQ,
  [1879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
  [1886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_EQ,
  [1893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_yes,
  [1900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_EQ,
  [1907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_EQ,
  [1914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_EQ,
  [1921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_civilian,
  [1928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_number,
  [1935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
  [1942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_EQ,
  [1949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
  [1956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_number,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
  [1970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_EQ,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_EQ,
  [1998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_EQ,
  [2005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_EQ,
  [2012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_EQ,
  [2019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_modifier,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_EQ,
  [2033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_EQ,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
  [2047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_log_effect_token1,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
  [2068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_EQ,
  [2082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
  [2089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_EQ,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_EQ,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_EQ,
  [2117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_EQ,
  [2124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_EQ,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_EQ,
  [2138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_EQ,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_EQ,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_number,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_EQ,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_EQ,
  [2180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_number,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_EQ,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_EQ,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_EQ,
  [2208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [2215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
  [2222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_value,
  [2229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
  [2236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_EQ,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_EQ,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [2257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_compare,
  [2264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_EQ,
  [2271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_EQ,
  [2278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
  [2285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_EQ,
  [2292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
  [2299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_value,
  [2306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_identifier,
  [2313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
  [2320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
  [2327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
  [2334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 209,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 285,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 361,
  [SMALL_STATE(11)] = 399,
  [SMALL_STATE(12)] = 437,
  [SMALL_STATE(13)] = 475,
  [SMALL_STATE(14)] = 513,
  [SMALL_STATE(15)] = 536,
  [SMALL_STATE(16)] = 559,
  [SMALL_STATE(17)] = 582,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 628,
  [SMALL_STATE(20)] = 651,
  [SMALL_STATE(21)] = 674,
  [SMALL_STATE(22)] = 697,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 743,
  [SMALL_STATE(25)] = 766,
  [SMALL_STATE(26)] = 789,
  [SMALL_STATE(27)] = 812,
  [SMALL_STATE(28)] = 832,
  [SMALL_STATE(29)] = 852,
  [SMALL_STATE(30)] = 872,
  [SMALL_STATE(31)] = 892,
  [SMALL_STATE(32)] = 912,
  [SMALL_STATE(33)] = 932,
  [SMALL_STATE(34)] = 952,
  [SMALL_STATE(35)] = 972,
  [SMALL_STATE(36)] = 992,
  [SMALL_STATE(37)] = 1012,
  [SMALL_STATE(38)] = 1032,
  [SMALL_STATE(39)] = 1052,
  [SMALL_STATE(40)] = 1072,
  [SMALL_STATE(41)] = 1092,
  [SMALL_STATE(42)] = 1112,
  [SMALL_STATE(43)] = 1132,
  [SMALL_STATE(44)] = 1152,
  [SMALL_STATE(45)] = 1171,
  [SMALL_STATE(46)] = 1190,
  [SMALL_STATE(47)] = 1209,
  [SMALL_STATE(48)] = 1228,
  [SMALL_STATE(49)] = 1247,
  [SMALL_STATE(50)] = 1266,
  [SMALL_STATE(51)] = 1285,
  [SMALL_STATE(52)] = 1304,
  [SMALL_STATE(53)] = 1318,
  [SMALL_STATE(54)] = 1338,
  [SMALL_STATE(55)] = 1355,
  [SMALL_STATE(56)] = 1369,
  [SMALL_STATE(57)] = 1383,
  [SMALL_STATE(58)] = 1397,
  [SMALL_STATE(59)] = 1411,
  [SMALL_STATE(60)] = 1425,
  [SMALL_STATE(61)] = 1439,
  [SMALL_STATE(62)] = 1453,
  [SMALL_STATE(63)] = 1467,
  [SMALL_STATE(64)] = 1481,
  [SMALL_STATE(65)] = 1495,
  [SMALL_STATE(66)] = 1509,
  [SMALL_STATE(67)] = 1523,
  [SMALL_STATE(68)] = 1534,
  [SMALL_STATE(69)] = 1547,
  [SMALL_STATE(70)] = 1556,
  [SMALL_STATE(71)] = 1567,
  [SMALL_STATE(72)] = 1578,
  [SMALL_STATE(73)] = 1589,
  [SMALL_STATE(74)] = 1602,
  [SMALL_STATE(75)] = 1613,
  [SMALL_STATE(76)] = 1624,
  [SMALL_STATE(77)] = 1633,
  [SMALL_STATE(78)] = 1644,
  [SMALL_STATE(79)] = 1654,
  [SMALL_STATE(80)] = 1664,
  [SMALL_STATE(81)] = 1672,
  [SMALL_STATE(82)] = 1680,
  [SMALL_STATE(83)] = 1688,
  [SMALL_STATE(84)] = 1696,
  [SMALL_STATE(85)] = 1706,
  [SMALL_STATE(86)] = 1714,
  [SMALL_STATE(87)] = 1724,
  [SMALL_STATE(88)] = 1732,
  [SMALL_STATE(89)] = 1740,
  [SMALL_STATE(90)] = 1748,
  [SMALL_STATE(91)] = 1758,
  [SMALL_STATE(92)] = 1766,
  [SMALL_STATE(93)] = 1774,
  [SMALL_STATE(94)] = 1782,
  [SMALL_STATE(95)] = 1790,
  [SMALL_STATE(96)] = 1798,
  [SMALL_STATE(97)] = 1806,
  [SMALL_STATE(98)] = 1814,
  [SMALL_STATE(99)] = 1822,
  [SMALL_STATE(100)] = 1832,
  [SMALL_STATE(101)] = 1842,
  [SMALL_STATE(102)] = 1852,
  [SMALL_STATE(103)] = 1862,
  [SMALL_STATE(104)] = 1872,
  [SMALL_STATE(105)] = 1879,
  [SMALL_STATE(106)] = 1886,
  [SMALL_STATE(107)] = 1893,
  [SMALL_STATE(108)] = 1900,
  [SMALL_STATE(109)] = 1907,
  [SMALL_STATE(110)] = 1914,
  [SMALL_STATE(111)] = 1921,
  [SMALL_STATE(112)] = 1928,
  [SMALL_STATE(113)] = 1935,
  [SMALL_STATE(114)] = 1942,
  [SMALL_STATE(115)] = 1949,
  [SMALL_STATE(116)] = 1956,
  [SMALL_STATE(117)] = 1963,
  [SMALL_STATE(118)] = 1970,
  [SMALL_STATE(119)] = 1977,
  [SMALL_STATE(120)] = 1984,
  [SMALL_STATE(121)] = 1991,
  [SMALL_STATE(122)] = 1998,
  [SMALL_STATE(123)] = 2005,
  [SMALL_STATE(124)] = 2012,
  [SMALL_STATE(125)] = 2019,
  [SMALL_STATE(126)] = 2026,
  [SMALL_STATE(127)] = 2033,
  [SMALL_STATE(128)] = 2040,
  [SMALL_STATE(129)] = 2047,
  [SMALL_STATE(130)] = 2054,
  [SMALL_STATE(131)] = 2061,
  [SMALL_STATE(132)] = 2068,
  [SMALL_STATE(133)] = 2075,
  [SMALL_STATE(134)] = 2082,
  [SMALL_STATE(135)] = 2089,
  [SMALL_STATE(136)] = 2096,
  [SMALL_STATE(137)] = 2103,
  [SMALL_STATE(138)] = 2110,
  [SMALL_STATE(139)] = 2117,
  [SMALL_STATE(140)] = 2124,
  [SMALL_STATE(141)] = 2131,
  [SMALL_STATE(142)] = 2138,
  [SMALL_STATE(143)] = 2145,
  [SMALL_STATE(144)] = 2152,
  [SMALL_STATE(145)] = 2159,
  [SMALL_STATE(146)] = 2166,
  [SMALL_STATE(147)] = 2173,
  [SMALL_STATE(148)] = 2180,
  [SMALL_STATE(149)] = 2187,
  [SMALL_STATE(150)] = 2194,
  [SMALL_STATE(151)] = 2201,
  [SMALL_STATE(152)] = 2208,
  [SMALL_STATE(153)] = 2215,
  [SMALL_STATE(154)] = 2222,
  [SMALL_STATE(155)] = 2229,
  [SMALL_STATE(156)] = 2236,
  [SMALL_STATE(157)] = 2243,
  [SMALL_STATE(158)] = 2250,
  [SMALL_STATE(159)] = 2257,
  [SMALL_STATE(160)] = 2264,
  [SMALL_STATE(161)] = 2271,
  [SMALL_STATE(162)] = 2278,
  [SMALL_STATE(163)] = 2285,
  [SMALL_STATE(164)] = 2292,
  [SMALL_STATE(165)] = 2299,
  [SMALL_STATE(166)] = 2306,
  [SMALL_STATE(167)] = 2313,
  [SMALL_STATE(168)] = 2320,
  [SMALL_STATE(169)] = 2327,
  [SMALL_STATE(170)] = 2334,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(156),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(152),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(151),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(150),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(149),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(143),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(136),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(133),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(127),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(126),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idea_content_repeat1, 2), SHIFT_REPEAT(123),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effect_block_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(147),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(146),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(140),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(139),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_effect, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_effect, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripted_effect, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripted_effect, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_effect_block, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_effect_block, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 7),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 10),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 10),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_trigger_bloc, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_trigger_bloc, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_effect_block, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_effect_block, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_math_effect, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_change, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_change, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_modifier_effect, 13),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_modifier_effect, 13),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_effect_block, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_effect_block, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_removal_cost, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_removal_cost, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ledger, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ledger, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_add, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_add, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_modifiers, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_modifiers, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cancel_if_invalid, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cancel_if_invalid, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cancel, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cancel, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_civil_war, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_allowed_civil_war, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_allowed, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_available, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_available, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trigger_block_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(110),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(69),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(163),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(161),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2), SHIFT_REPEAT(124),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(138),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declarations_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declarations_repeat1, 2), SHIFT_REPEAT(170),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarations, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_trigger, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_trigger, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 6),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 6),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable, 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_variable, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_yes, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid_level_idea, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declaration, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect_long, 6),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_short, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_math_effect_short, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_variable_long, 9),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declaration, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1),
  [525] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
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
