#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ideas = 1,
  anon_sym_EQ = 2,
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
  anon_sym_GT = 21,
  anon_sym_LT = 22,
  anon_sym_log = 23,
  aux_sym_log_effect_token1 = 24,
  anon_sym_set_variable = 25,
  anon_sym_var = 26,
  anon_sym_value = 27,
  sym_number = 28,
  sym_identifier = 29,
  sym_comment = 30,
  sym_ideas_declaration = 31,
  sym_top_level_idea = 32,
  sym_country_idea_block = 33,
  sym_law_idea_block = 34,
  sym_law_yes = 35,
  sym_mid_level_idea = 36,
  sym_idea_content = 37,
  sym_available = 38,
  sym_allowed = 39,
  sym_allowed_civil_war = 40,
  sym_cancel = 41,
  sym_idea_modifiers = 42,
  sym_on_add = 43,
  sym_ledger = 44,
  sym_removal_cost = 45,
  sym_picture = 46,
  sym_default = 47,
  sym_cancel_if_invalid = 48,
  sym_trigger_block = 49,
  sym_modifier_block = 50,
  sym_effect_block = 51,
  sym_trigger = 52,
  sym_modifier = 53,
  sym_effect = 54,
  sym_log_effect = 55,
  sym_set_variable = 56,
  sym_set_variable_short = 57,
  sym_set_variable_long = 58,
  sym_scripted_effect = 59,
  aux_sym_ideas_declaration_repeat1 = 60,
  aux_sym_country_idea_block_repeat1 = 61,
  aux_sym_mid_level_idea_repeat1 = 62,
  aux_sym_trigger_block_repeat1 = 63,
  aux_sym_modifier_block_repeat1 = 64,
  aux_sym_effect_block_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ideas] = "ideas",
  [anon_sym_EQ] = "=",
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
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_log] = "log",
  [aux_sym_log_effect_token1] = "log_effect_token1",
  [anon_sym_set_variable] = "set_variable",
  [anon_sym_var] = "var",
  [anon_sym_value] = "value",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_ideas_declaration] = "ideas_declaration",
  [sym_top_level_idea] = "top_level_idea",
  [sym_country_idea_block] = "country_idea_block",
  [sym_law_idea_block] = "law_idea_block",
  [sym_law_yes] = "law_yes",
  [sym_mid_level_idea] = "mid_level_idea",
  [sym_idea_content] = "idea_content",
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
  [sym_trigger] = "trigger",
  [sym_modifier] = "modifier",
  [sym_effect] = "effect",
  [sym_log_effect] = "log_effect",
  [sym_set_variable] = "set_variable",
  [sym_set_variable_short] = "set_variable_short",
  [sym_set_variable_long] = "set_variable_long",
  [sym_scripted_effect] = "scripted_effect",
  [aux_sym_ideas_declaration_repeat1] = "ideas_declaration_repeat1",
  [aux_sym_country_idea_block_repeat1] = "country_idea_block_repeat1",
  [aux_sym_mid_level_idea_repeat1] = "mid_level_idea_repeat1",
  [aux_sym_trigger_block_repeat1] = "trigger_block_repeat1",
  [aux_sym_modifier_block_repeat1] = "modifier_block_repeat1",
  [aux_sym_effect_block_repeat1] = "effect_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ideas] = anon_sym_ideas,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_log] = anon_sym_log,
  [aux_sym_log_effect_token1] = aux_sym_log_effect_token1,
  [anon_sym_set_variable] = anon_sym_set_variable,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_value] = anon_sym_value,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_ideas_declaration] = sym_ideas_declaration,
  [sym_top_level_idea] = sym_top_level_idea,
  [sym_country_idea_block] = sym_country_idea_block,
  [sym_law_idea_block] = sym_law_idea_block,
  [sym_law_yes] = sym_law_yes,
  [sym_mid_level_idea] = sym_mid_level_idea,
  [sym_idea_content] = sym_idea_content,
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
  [sym_trigger] = sym_trigger,
  [sym_modifier] = sym_modifier,
  [sym_effect] = sym_effect,
  [sym_log_effect] = sym_log_effect,
  [sym_set_variable] = sym_set_variable,
  [sym_set_variable_short] = sym_set_variable_short,
  [sym_set_variable_long] = sym_set_variable_long,
  [sym_scripted_effect] = sym_scripted_effect,
  [aux_sym_ideas_declaration_repeat1] = aux_sym_ideas_declaration_repeat1,
  [aux_sym_country_idea_block_repeat1] = aux_sym_country_idea_block_repeat1,
  [aux_sym_mid_level_idea_repeat1] = aux_sym_mid_level_idea_repeat1,
  [aux_sym_trigger_block_repeat1] = aux_sym_trigger_block_repeat1,
  [aux_sym_modifier_block_repeat1] = aux_sym_modifier_block_repeat1,
  [aux_sym_effect_block_repeat1] = aux_sym_effect_block_repeat1,
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
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
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
  [sym_ideas_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_top_level_idea] = {
    .visible = true,
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
  [sym_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_log_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_set_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_set_variable_short] = {
    .visible = true,
    .named = true,
  },
  [sym_set_variable_long] = {
    .visible = true,
    .named = true,
  },
  [sym_scripted_effect] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ideas_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_country_idea_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mid_level_idea_repeat1] = {
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
      if (eof) ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'y') ADVANCE(38);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 107:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 109:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 110:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 111:
      if (lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 113:
      if (lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(115)
      if (lookahead == '\r') SKIP(115)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '}') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 116:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(116)
      if (lookahead == '\r') SKIP(116)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == '}') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '\r') SKIP(117)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == '}') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '\r') SKIP(118)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 119:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '\r') SKIP(119)
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'v') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 121:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(183);
      END_STATE();
    case 122:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ideas);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_country);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_country);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_law);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_law);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_available);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_allowed);
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_allowed_civil_war);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_cancel);
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_on_add);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ledger);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_civilian);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_removal_cost);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_cancel_if_invalid);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_log);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_log_effect_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_set_variable);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_set_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 115},
  [24] = {.lex_state = 115},
  [25] = {.lex_state = 115},
  [26] = {.lex_state = 116},
  [27] = {.lex_state = 116},
  [28] = {.lex_state = 116},
  [29] = {.lex_state = 117},
  [30] = {.lex_state = 115},
  [31] = {.lex_state = 118},
  [32] = {.lex_state = 118},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 118},
  [35] = {.lex_state = 118},
  [36] = {.lex_state = 118},
  [37] = {.lex_state = 118},
  [38] = {.lex_state = 118},
  [39] = {.lex_state = 118},
  [40] = {.lex_state = 118},
  [41] = {.lex_state = 115},
  [42] = {.lex_state = 115},
  [43] = {.lex_state = 118},
  [44] = {.lex_state = 118},
  [45] = {.lex_state = 118},
  [46] = {.lex_state = 115},
  [47] = {.lex_state = 116},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 116},
  [50] = {.lex_state = 116},
  [51] = {.lex_state = 116},
  [52] = {.lex_state = 116},
  [53] = {.lex_state = 116},
  [54] = {.lex_state = 118},
  [55] = {.lex_state = 118},
  [56] = {.lex_state = 118},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 118},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 118},
  [63] = {.lex_state = 118},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 118},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 118},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 118},
  [106] = {.lex_state = 118},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ideas] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [aux_sym_log_effect_token1] = ACTIONS(1),
    [anon_sym_set_variable] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_ideas_declaration] = STATE(107),
    [anon_sym_ideas] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_available,
    ACTIONS(11), 1,
      anon_sym_allowed,
    ACTIONS(13), 1,
      anon_sym_allowed_civil_war,
    ACTIONS(15), 1,
      anon_sym_cancel,
    ACTIONS(17), 1,
      anon_sym_modifier,
    ACTIONS(19), 1,
      anon_sym_on_add,
    ACTIONS(21), 1,
      anon_sym_ledger,
    ACTIONS(23), 1,
      anon_sym_removal_cost,
    ACTIONS(25), 1,
      anon_sym_picture,
    ACTIONS(27), 1,
      anon_sym_default,
    ACTIONS(29), 1,
      anon_sym_cancel_if_invalid,
    STATE(3), 2,
      sym_idea_content,
      aux_sym_mid_level_idea_repeat1,
    STATE(9), 11,
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
  [57] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_available,
    ACTIONS(36), 1,
      anon_sym_allowed,
    ACTIONS(39), 1,
      anon_sym_allowed_civil_war,
    ACTIONS(42), 1,
      anon_sym_cancel,
    ACTIONS(45), 1,
      anon_sym_modifier,
    ACTIONS(48), 1,
      anon_sym_on_add,
    ACTIONS(51), 1,
      anon_sym_ledger,
    ACTIONS(54), 1,
      anon_sym_removal_cost,
    ACTIONS(57), 1,
      anon_sym_picture,
    ACTIONS(60), 1,
      anon_sym_default,
    ACTIONS(63), 1,
      anon_sym_cancel_if_invalid,
    STATE(3), 2,
      sym_idea_content,
      aux_sym_mid_level_idea_repeat1,
    STATE(9), 11,
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
  [114] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_available,
    ACTIONS(11), 1,
      anon_sym_allowed,
    ACTIONS(13), 1,
      anon_sym_allowed_civil_war,
    ACTIONS(15), 1,
      anon_sym_cancel,
    ACTIONS(17), 1,
      anon_sym_modifier,
    ACTIONS(19), 1,
      anon_sym_on_add,
    ACTIONS(21), 1,
      anon_sym_ledger,
    ACTIONS(23), 1,
      anon_sym_removal_cost,
    ACTIONS(25), 1,
      anon_sym_picture,
    ACTIONS(27), 1,
      anon_sym_default,
    ACTIONS(29), 1,
      anon_sym_cancel_if_invalid,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_idea_content,
      aux_sym_mid_level_idea_repeat1,
    STATE(9), 11,
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
  [171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(68), 10,
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
  [191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(72), 10,
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
  [211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(76), 10,
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
  [231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(80), 10,
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
  [251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(84), 10,
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
  [271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(88), 10,
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
  [291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(92), 10,
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
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(96), 10,
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
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(100), 10,
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
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(104), 10,
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
  [371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(108), 10,
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
  [391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(112), 10,
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
  [411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(116), 10,
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
  [431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(120), 10,
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
  [451] = 3,
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
  [471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(128), 10,
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
  [491] = 3,
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
  [511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_allowed,
      anon_sym_cancel,
    ACTIONS(136), 10,
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
  [531] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(144), 1,
      anon_sym_set_variable,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(24), 2,
      sym_effect,
      aux_sym_effect_block_repeat1,
    STATE(41), 3,
      sym_log_effect,
      sym_set_variable,
      sym_scripted_effect,
  [556] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(144), 1,
      anon_sym_set_variable,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_effect,
      aux_sym_effect_block_repeat1,
    STATE(41), 3,
      sym_log_effect,
      sym_set_variable,
      sym_scripted_effect,
  [581] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      anon_sym_log,
    ACTIONS(155), 1,
      anon_sym_set_variable,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(25), 2,
      sym_effect,
      aux_sym_effect_block_repeat1,
    STATE(41), 3,
      sym_log_effect,
      sym_set_variable,
      sym_scripted_effect,
  [606] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 1,
      anon_sym_country,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(26), 2,
      sym_top_level_idea,
      aux_sym_ideas_declaration_repeat1,
    STATE(53), 2,
      sym_country_idea_block,
      sym_law_idea_block,
  [627] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      anon_sym_country,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(26), 2,
      sym_top_level_idea,
      aux_sym_ideas_declaration_repeat1,
    STATE(53), 2,
      sym_country_idea_block,
      sym_law_idea_block,
  [648] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_country,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_top_level_idea,
      aux_sym_ideas_declaration_repeat1,
    STATE(53), 2,
      sym_country_idea_block,
      sym_law_idea_block,
  [669] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_law,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(37), 1,
      sym_law_yes,
    STATE(36), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 3,
      anon_sym_log,
      anon_sym_set_variable,
      sym_identifier,
  [701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(34), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(32), 2,
      sym_modifier,
      aux_sym_modifier_block_repeat1,
  [729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_var,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(104), 2,
      sym_set_variable_short,
      sym_set_variable_long,
  [743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(34), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(45), 2,
      sym_trigger,
      aux_sym_trigger_block_repeat1,
  [771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(32), 2,
      sym_modifier,
      aux_sym_modifier_block_repeat1,
  [813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_modifier,
      aux_sym_modifier_block_repeat1,
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 3,
      anon_sym_log,
      anon_sym_set_variable,
      sym_identifier,
  [853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 3,
      anon_sym_log,
      anon_sym_set_variable,
      sym_identifier,
  [865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_mid_level_idea,
      aux_sym_country_idea_block_repeat1,
  [879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_trigger,
      aux_sym_trigger_block_repeat1,
  [893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(45), 2,
      sym_trigger,
      aux_sym_trigger_block_repeat1,
  [907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 3,
      anon_sym_log,
      anon_sym_set_variable,
      sym_identifier,
  [919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 2,
      anon_sym_country,
      sym_identifier,
  [930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      anon_sym_country,
      sym_identifier,
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 2,
      anon_sym_country,
      sym_identifier,
  [961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 2,
      anon_sym_country,
      sym_identifier,
  [972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 2,
      anon_sym_country,
      sym_identifier,
  [983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 2,
      anon_sym_country,
      sym_identifier,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      sym_number,
      sym_identifier,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_yes,
      anon_sym_no,
  [1026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_yes,
      anon_sym_no,
  [1034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_trigger_block,
  [1052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_trigger_block,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      sym_number,
      sym_identifier,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      sym_number,
      sym_identifier,
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_trigger_block,
  [1088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_effect_block,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_modifier_block,
  [1108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_trigger_block,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
  [1148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_EQ,
  [1155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
  [1162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_EQ,
  [1169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_EQ,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_EQ,
  [1183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_yes,
  [1190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_EQ,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_EQ,
  [1211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_EQ,
  [1218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_EQ,
  [1225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_EQ,
  [1232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_civilian,
  [1239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_EQ,
  [1246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_EQ,
  [1253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_EQ,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
  [1267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_number,
  [1274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_EQ,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_log_effect_token1,
  [1295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_yes,
  [1309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_EQ,
  [1316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_EQ,
  [1323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
  [1330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_EQ,
  [1337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_EQ,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [1351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_EQ,
  [1365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_EQ,
  [1372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_identifier,
  [1386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_identifier,
  [1393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [1400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_value,
  [1407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_EQ,
  [1421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_number,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 191,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 271,
  [SMALL_STATE(11)] = 291,
  [SMALL_STATE(12)] = 311,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 351,
  [SMALL_STATE(15)] = 371,
  [SMALL_STATE(16)] = 391,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 431,
  [SMALL_STATE(19)] = 451,
  [SMALL_STATE(20)] = 471,
  [SMALL_STATE(21)] = 491,
  [SMALL_STATE(22)] = 511,
  [SMALL_STATE(23)] = 531,
  [SMALL_STATE(24)] = 556,
  [SMALL_STATE(25)] = 581,
  [SMALL_STATE(26)] = 606,
  [SMALL_STATE(27)] = 627,
  [SMALL_STATE(28)] = 648,
  [SMALL_STATE(29)] = 669,
  [SMALL_STATE(30)] = 689,
  [SMALL_STATE(31)] = 701,
  [SMALL_STATE(32)] = 715,
  [SMALL_STATE(33)] = 729,
  [SMALL_STATE(34)] = 743,
  [SMALL_STATE(35)] = 757,
  [SMALL_STATE(36)] = 771,
  [SMALL_STATE(37)] = 785,
  [SMALL_STATE(38)] = 799,
  [SMALL_STATE(39)] = 813,
  [SMALL_STATE(40)] = 827,
  [SMALL_STATE(41)] = 841,
  [SMALL_STATE(42)] = 853,
  [SMALL_STATE(43)] = 865,
  [SMALL_STATE(44)] = 879,
  [SMALL_STATE(45)] = 893,
  [SMALL_STATE(46)] = 907,
  [SMALL_STATE(47)] = 919,
  [SMALL_STATE(48)] = 930,
  [SMALL_STATE(49)] = 939,
  [SMALL_STATE(50)] = 950,
  [SMALL_STATE(51)] = 961,
  [SMALL_STATE(52)] = 972,
  [SMALL_STATE(53)] = 983,
  [SMALL_STATE(54)] = 994,
  [SMALL_STATE(55)] = 1002,
  [SMALL_STATE(56)] = 1010,
  [SMALL_STATE(57)] = 1018,
  [SMALL_STATE(58)] = 1026,
  [SMALL_STATE(59)] = 1034,
  [SMALL_STATE(60)] = 1042,
  [SMALL_STATE(61)] = 1052,
  [SMALL_STATE(62)] = 1062,
  [SMALL_STATE(63)] = 1070,
  [SMALL_STATE(64)] = 1078,
  [SMALL_STATE(65)] = 1088,
  [SMALL_STATE(66)] = 1098,
  [SMALL_STATE(67)] = 1108,
  [SMALL_STATE(68)] = 1116,
  [SMALL_STATE(69)] = 1126,
  [SMALL_STATE(70)] = 1134,
  [SMALL_STATE(71)] = 1141,
  [SMALL_STATE(72)] = 1148,
  [SMALL_STATE(73)] = 1155,
  [SMALL_STATE(74)] = 1162,
  [SMALL_STATE(75)] = 1169,
  [SMALL_STATE(76)] = 1176,
  [SMALL_STATE(77)] = 1183,
  [SMALL_STATE(78)] = 1190,
  [SMALL_STATE(79)] = 1197,
  [SMALL_STATE(80)] = 1204,
  [SMALL_STATE(81)] = 1211,
  [SMALL_STATE(82)] = 1218,
  [SMALL_STATE(83)] = 1225,
  [SMALL_STATE(84)] = 1232,
  [SMALL_STATE(85)] = 1239,
  [SMALL_STATE(86)] = 1246,
  [SMALL_STATE(87)] = 1253,
  [SMALL_STATE(88)] = 1260,
  [SMALL_STATE(89)] = 1267,
  [SMALL_STATE(90)] = 1274,
  [SMALL_STATE(91)] = 1281,
  [SMALL_STATE(92)] = 1288,
  [SMALL_STATE(93)] = 1295,
  [SMALL_STATE(94)] = 1302,
  [SMALL_STATE(95)] = 1309,
  [SMALL_STATE(96)] = 1316,
  [SMALL_STATE(97)] = 1323,
  [SMALL_STATE(98)] = 1330,
  [SMALL_STATE(99)] = 1337,
  [SMALL_STATE(100)] = 1344,
  [SMALL_STATE(101)] = 1351,
  [SMALL_STATE(102)] = 1358,
  [SMALL_STATE(103)] = 1365,
  [SMALL_STATE(104)] = 1372,
  [SMALL_STATE(105)] = 1379,
  [SMALL_STATE(106)] = 1386,
  [SMALL_STATE(107)] = 1393,
  [SMALL_STATE(108)] = 1400,
  [SMALL_STATE(109)] = 1407,
  [SMALL_STATE(110)] = 1414,
  [SMALL_STATE(111)] = 1421,
  [SMALL_STATE(112)] = 1428,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(76),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(75),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(74),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(73),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(72),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(91),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(86),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(70),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(87),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(95),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mid_level_idea_repeat1, 2), SHIFT_REPEAT(97),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed_civil_war, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_allowed_civil_war, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_content, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_content, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_available, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_available, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger_block, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trigger_block, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_removal_cost, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_removal_cost, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allowed, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_allowed, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cancel_if_invalid, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cancel_if_invalid, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_block, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_block, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cancel, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cancel, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idea_modifiers, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idea_modifiers, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect_block, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect_block, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ledger, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ledger, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_add, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_add, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effect_block_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(81),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(82),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_block_repeat1, 2), SHIFT_REPEAT(83),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(99),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ideas_declaration_repeat1, 2), SHIFT_REPEAT(96),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_variable, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifier_block_repeat1, 2), SHIFT_REPEAT(78),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_country_idea_block_repeat1, 2), SHIFT_REPEAT(85),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_effect, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_effect, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trigger_block_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trigger_block_repeat1, 2), SHIFT_REPEAT(48),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripted_effect, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripted_effect, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 6),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_idea_block, 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_law_idea_block, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_country_idea_block, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_country_idea_block, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_idea, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level_idea, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid_level_idea, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trigger, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid_level_idea, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_law_yes, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declaration, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ideas_declaration, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable_short, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable_long, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Hoi4(void) {
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
