#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 37
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_SEMI = 1,
  aux_sym_line_comment_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_def = 5,
  sym_integer_literal = 6,
  sym_float_literal = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_str_literal_token1 = 11,
  anon_sym_DQUOTE2 = 12,
  anon_sym_BSLASH = 13,
  anon_sym_POUND_DQUOTE = 14,
  sym_escape_sequence = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  sym_identifier = 20,
  sym_source_file = 21,
  sym_line_comment = 22,
  sym__s_expr = 23,
  sym__anything = 24,
  sym_def = 25,
  sym__literals = 26,
  sym_bool_literal = 27,
  sym_str_literal = 28,
  sym_char_literal = 29,
  sym_pattern_literal = 30,
  sym_array_expression = 31,
  sym_map_expression = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_str_literal_repeat1 = 34,
  aux_sym_array_expression_repeat1 = 35,
  aux_sym_map_expression_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_def] = "def",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_literal_token1] = "str_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_line_comment] = "line_comment",
  [sym__s_expr] = "_s_expr",
  [sym__anything] = "_anything",
  [sym_def] = "def",
  [sym__literals] = "_literals",
  [sym_bool_literal] = "bool_literal",
  [sym_str_literal] = "str_literal",
  [sym_char_literal] = "char_literal",
  [sym_pattern_literal] = "pattern_literal",
  [sym_array_expression] = "array_expression",
  [sym_map_expression] = "map_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_map_expression_repeat1] = "map_expression_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__s_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__anything] = {
    .visible = false,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_map_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 2},
  [2] =
    {field_key, 0},
    {field_value, 1},
  [4] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [6] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(17);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(17);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(51);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_line_comment] = STATE(22),
    [sym__s_expr] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(33),
    [sym__s_expr] = STATE(33),
    [sym__anything] = STATE(33),
    [sym_def] = STATE(33),
    [sym__literals] = STATE(33),
    [sym_bool_literal] = STATE(33),
    [sym_str_literal] = STATE(33),
    [sym_char_literal] = STATE(33),
    [sym_pattern_literal] = STATE(33),
    [sym_array_expression] = STATE(33),
    [sym_map_expression] = STATE(33),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [sym_integer_literal] = ACTIONS(11),
    [sym_float_literal] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_identifier] = ACTIONS(11),
  },
  [3] = {
    [sym_line_comment] = STATE(34),
    [sym__s_expr] = STATE(34),
    [sym__anything] = STATE(34),
    [sym_def] = STATE(34),
    [sym__literals] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_pattern_literal] = STATE(34),
    [sym_array_expression] = STATE(34),
    [sym_map_expression] = STATE(34),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [sym_integer_literal] = ACTIONS(27),
    [sym_float_literal] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
  },
  [4] = {
    [sym__literals] = STATE(9),
    [sym_bool_literal] = STATE(9),
    [sym_str_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_pattern_literal] = STATE(9),
    [sym_array_expression] = STATE(9),
    [sym_map_expression] = STATE(9),
    [aux_sym_array_expression_repeat1] = STATE(9),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_identifier] = ACTIONS(31),
  },
  [5] = {
    [sym__literals] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_pattern_literal] = STATE(5),
    [sym_array_expression] = STATE(5),
    [sym_map_expression] = STATE(5),
    [aux_sym_array_expression_repeat1] = STATE(5),
    [sym_integer_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(40),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(37),
  },
  [6] = {
    [sym__literals] = STATE(10),
    [sym_bool_literal] = STATE(10),
    [sym_str_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_pattern_literal] = STATE(10),
    [sym_array_expression] = STATE(10),
    [sym_map_expression] = STATE(10),
    [aux_sym_map_expression_repeat1] = STATE(7),
    [sym_integer_literal] = ACTIONS(63),
    [sym_float_literal] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(63),
  },
  [7] = {
    [sym__literals] = STATE(10),
    [sym_bool_literal] = STATE(10),
    [sym_str_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_pattern_literal] = STATE(10),
    [sym_array_expression] = STATE(10),
    [sym_map_expression] = STATE(10),
    [aux_sym_map_expression_repeat1] = STATE(8),
    [sym_integer_literal] = ACTIONS(63),
    [sym_float_literal] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(63),
  },
  [8] = {
    [sym__literals] = STATE(10),
    [sym_bool_literal] = STATE(10),
    [sym_str_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_pattern_literal] = STATE(10),
    [sym_array_expression] = STATE(10),
    [sym_map_expression] = STATE(10),
    [aux_sym_map_expression_repeat1] = STATE(8),
    [sym_integer_literal] = ACTIONS(71),
    [sym_float_literal] = ACTIONS(74),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [anon_sym_BSLASH] = ACTIONS(83),
    [anon_sym_POUND_DQUOTE] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(95),
    [sym_identifier] = ACTIONS(71),
  },
  [9] = {
    [sym__literals] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_pattern_literal] = STATE(5),
    [sym_array_expression] = STATE(5),
    [sym_map_expression] = STATE(5),
    [aux_sym_array_expression_repeat1] = STATE(5),
    [sym_integer_literal] = ACTIONS(97),
    [sym_float_literal] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_identifier] = ACTIONS(97),
  },
  [10] = {
    [sym__literals] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [sym_integer_literal] = ACTIONS(103),
    [sym_float_literal] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_identifier] = ACTIONS(103),
  },
  [11] = {
    [anon_sym_RPAREN] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(109),
    [sym_float_literal] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(107),
    [anon_sym_POUND_DQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
  },
  [12] = {
    [anon_sym_RPAREN] = ACTIONS(111),
    [sym_integer_literal] = ACTIONS(113),
    [sym_float_literal] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(111),
    [anon_sym_POUND_DQUOTE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
  },
  [13] = {
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_integer_literal] = ACTIONS(117),
    [sym_float_literal] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
  },
  [14] = {
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_integer_literal] = ACTIONS(121),
    [sym_float_literal] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_BSLASH] = ACTIONS(119),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
  },
  [15] = {
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_integer_literal] = ACTIONS(125),
    [sym_float_literal] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_BSLASH] = ACTIONS(123),
    [anon_sym_POUND_DQUOTE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(127),
    [sym_integer_literal] = ACTIONS(129),
    [sym_float_literal] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_BSLASH] = ACTIONS(127),
    [anon_sym_POUND_DQUOTE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym_identifier] = ACTIONS(129),
  },
  [17] = {
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym_integer_literal] = ACTIONS(133),
    [sym_float_literal] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_BSLASH] = ACTIONS(131),
    [anon_sym_POUND_DQUOTE] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_integer_literal] = ACTIONS(137),
    [sym_float_literal] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_BSLASH] = ACTIONS(135),
    [anon_sym_POUND_DQUOTE] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_integer_literal] = ACTIONS(141),
    [sym_float_literal] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_BSLASH] = ACTIONS(139),
    [anon_sym_POUND_DQUOTE] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
  },
  [20] = {
    [anon_sym_RPAREN] = ACTIONS(143),
    [sym_integer_literal] = ACTIONS(145),
    [sym_float_literal] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_BSLASH] = ACTIONS(143),
    [anon_sym_POUND_DQUOTE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
  },
  [21] = {
    [sym_integer_literal] = ACTIONS(147),
    [sym_float_literal] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_BSLASH] = ACTIONS(149),
    [anon_sym_POUND_DQUOTE] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym_identifier] = ACTIONS(147),
  },
  [22] = {
    [sym_line_comment] = STATE(23),
    [sym__s_expr] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [23] = {
    [sym_line_comment] = STATE(23),
    [sym__s_expr] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(158),
  },
  [24] = {
    [aux_sym_str_literal_repeat1] = STATE(27),
    [aux_sym_str_literal_token1] = ACTIONS(161),
    [anon_sym_DQUOTE2] = ACTIONS(163),
    [sym_escape_sequence] = ACTIONS(165),
  },
  [25] = {
    [aux_sym_str_literal_repeat1] = STATE(27),
    [aux_sym_str_literal_token1] = ACTIONS(161),
    [anon_sym_DQUOTE2] = ACTIONS(167),
    [sym_escape_sequence] = ACTIONS(165),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
  },
  [27] = {
    [aux_sym_str_literal_repeat1] = STATE(27),
    [aux_sym_str_literal_token1] = ACTIONS(171),
    [anon_sym_DQUOTE2] = ACTIONS(174),
    [sym_escape_sequence] = ACTIONS(176),
  },
  [28] = {
    [aux_sym_str_literal_repeat1] = STATE(25),
    [aux_sym_str_literal_token1] = ACTIONS(179),
    [anon_sym_DQUOTE2] = ACTIONS(181),
    [sym_escape_sequence] = ACTIONS(183),
  },
  [29] = {
    [aux_sym_str_literal_repeat1] = STATE(24),
    [aux_sym_str_literal_token1] = ACTIONS(185),
    [anon_sym_DQUOTE2] = ACTIONS(187),
    [sym_escape_sequence] = ACTIONS(189),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
  },
  [31] = {
    [aux_sym_str_literal_token1] = ACTIONS(193),
    [sym_escape_sequence] = ACTIONS(195),
  },
  [32] = {
    [aux_sym_line_comment_token1] = ACTIONS(197),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(199),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(201),
  },
  [35] = {
    [sym_identifier] = ACTIONS(203),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(205),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(32),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(35),
  [11] = {.count = 1, .reusable = false}, SHIFT(33),
  [13] = {.count = 1, .reusable = true}, SHIFT(33),
  [15] = {.count = 1, .reusable = false}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, SHIFT(29),
  [19] = {.count = 1, .reusable = true}, SHIFT(31),
  [21] = {.count = 1, .reusable = true}, SHIFT(28),
  [23] = {.count = 1, .reusable = true}, SHIFT(4),
  [25] = {.count = 1, .reusable = true}, SHIFT(6),
  [27] = {.count = 1, .reusable = false}, SHIFT(34),
  [29] = {.count = 1, .reusable = true}, SHIFT(34),
  [31] = {.count = 1, .reusable = false}, SHIFT(9),
  [33] = {.count = 1, .reusable = true}, SHIFT(9),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(5),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(29),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(31),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(28),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(6),
  [63] = {.count = 1, .reusable = false}, SHIFT(10),
  [65] = {.count = 1, .reusable = true}, SHIFT(10),
  [67] = {.count = 1, .reusable = true}, SHIFT(20),
  [69] = {.count = 1, .reusable = true}, SHIFT(16),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4), SHIFT_REPEAT(10),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4), SHIFT_REPEAT(10),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4), SHIFT_REPEAT(11),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4), SHIFT_REPEAT(29),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4), SHIFT_REPEAT(31),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4), SHIFT_REPEAT(28),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4), SHIFT_REPEAT(4),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4), SHIFT_REPEAT(6),
  [95] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 4),
  [97] = {.count = 1, .reusable = false}, SHIFT(5),
  [99] = {.count = 1, .reusable = true}, SHIFT(5),
  [101] = {.count = 1, .reusable = true}, SHIFT(12),
  [103] = {.count = 1, .reusable = false}, SHIFT(21),
  [105] = {.count = 1, .reusable = true}, SHIFT(21),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 3),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [161] = {.count = 1, .reusable = false}, SHIFT(27),
  [163] = {.count = 1, .reusable = true}, SHIFT(14),
  [165] = {.count = 1, .reusable = true}, SHIFT(27),
  [167] = {.count = 1, .reusable = true}, SHIFT(13),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [171] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(27),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(27),
  [179] = {.count = 1, .reusable = false}, SHIFT(25),
  [181] = {.count = 1, .reusable = true}, SHIFT(18),
  [183] = {.count = 1, .reusable = true}, SHIFT(25),
  [185] = {.count = 1, .reusable = false}, SHIFT(24),
  [187] = {.count = 1, .reusable = true}, SHIFT(15),
  [189] = {.count = 1, .reusable = true}, SHIFT(24),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [193] = {.count = 1, .reusable = false}, SHIFT(17),
  [195] = {.count = 1, .reusable = true}, SHIFT(17),
  [197] = {.count = 1, .reusable = true}, SHIFT(30),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 1),
  [201] = {.count = 1, .reusable = true}, SHIFT(26),
  [203] = {.count = 1, .reusable = true}, SHIFT(2),
  [205] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_carp(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
