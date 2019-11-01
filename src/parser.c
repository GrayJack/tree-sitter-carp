#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 91
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_SEMI = 1,
  aux_sym_line_comment_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_def = 5,
  anon_sym_fn = 6,
  anon_sym_defn = 7,
  anon_sym_let = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_do = 11,
  anon_sym_DOT = 12,
  sym_integer_literal = 13,
  sym_float_literal = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_str_literal_token1 = 18,
  anon_sym_DQUOTE2 = 19,
  anon_sym_BSLASH = 20,
  anon_sym_POUND_DQUOTE = 21,
  sym_escape_sequence = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  sym_identifier = 25,
  sym_source_file = 26,
  sym_line_comment = 27,
  sym__s_expr = 28,
  sym__expr = 29,
  sym__anything = 30,
  sym__s_forms = 31,
  sym__literals = 32,
  sym_def = 33,
  sym_fn = 34,
  sym_defn = 35,
  sym_let = 36,
  sym_let_pairs = 37,
  sym_do = 38,
  sym_call_expression = 39,
  sym_call_name = 40,
  sym_parameters = 41,
  sym_bool_literal = 42,
  sym_str_literal = 43,
  sym_char_literal = 44,
  sym_pattern_literal = 45,
  sym_array_expression = 46,
  sym_map_expression = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_let_pairs_repeat1 = 49,
  aux_sym_do_repeat1 = 50,
  aux_sym_call_expression_repeat1 = 51,
  aux_sym_parameters_repeat1 = 52,
  aux_sym_str_literal_repeat1 = 53,
  aux_sym_array_expression_repeat1 = 54,
  aux_sym_map_expression_repeat1 = 55,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_def] = "def",
  [anon_sym_fn] = "fn",
  [anon_sym_defn] = "defn",
  [anon_sym_let] = "let",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_do] = "do",
  [anon_sym_DOT] = ".",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_line_comment] = "line_comment",
  [sym__s_expr] = "_s_expr",
  [sym__expr] = "_expr",
  [sym__anything] = "_anything",
  [sym__s_forms] = "_s_forms",
  [sym__literals] = "_literals",
  [sym_def] = "def",
  [sym_fn] = "fn",
  [sym_defn] = "defn",
  [sym_let] = "let",
  [sym_let_pairs] = "let_pairs",
  [sym_do] = "do",
  [sym_call_expression] = "call_expression",
  [sym_call_name] = "call_name",
  [sym_parameters] = "parameters",
  [sym_bool_literal] = "bool_literal",
  [sym_str_literal] = "str_literal",
  [sym_char_literal] = "char_literal",
  [sym_pattern_literal] = "pattern_literal",
  [sym_array_expression] = "array_expression",
  [sym_map_expression] = "map_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_let_pairs_repeat1] = "let_pairs_repeat1",
  [aux_sym_do_repeat1] = "do_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
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
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__anything] = {
    .visible = false,
    .named = true,
  },
  [sym__s_forms] = {
    .visible = false,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_let_pairs] = {
    .visible = true,
    .named = true,
  },
  [sym_do] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
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
  [aux_sym_let_pairs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
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
  field_argument = 1,
  field_body = 2,
  field_call_name = 3,
  field_expr = 4,
  field_key = 5,
  field_module = 6,
  field_name = 7,
  field_pairs = 8,
  field_parameters = 9,
  field_value = 10,
  field_var = 11,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_expr] = "expr",
  [field_key] = "key",
  [field_module] = "module",
  [field_name] = "name",
  [field_pairs] = "pairs",
  [field_parameters] = "parameters",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 4},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 3},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_call_name, 0},
  [2] =
    {field_parameters, 1},
  [3] =
    {field_pairs, 1},
  [4] =
    {field_expr, 0},
  [5] =
    {field_expr, 1, .inherited = true},
  [6] =
    {field_argument, 1},
    {field_call_name, 0},
  [8] =
    {field_name, 1},
    {field_value, 2},
  [10] =
    {field_body, 2},
    {field_parameters, 1},
  [12] =
    {field_name, 1},
    {field_parameters, 2},
  [14] =
    {field_body, 2},
    {field_pairs, 1},
  [16] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [18] =
    {field_key, 0},
    {field_value, 1},
  [20] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [22] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [26] =
    {field_module, 0},
    {field_name, 2},
  [28] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [31] =
    {field_expr, 1},
    {field_var, 0},
  [33] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [35] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[21][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym_line_comment] = STATE(45),
    [sym__s_expr] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(85),
    [sym__s_expr] = STATE(85),
    [sym__anything] = STATE(85),
    [sym__s_forms] = STATE(85),
    [sym__literals] = STATE(85),
    [sym_def] = STATE(85),
    [sym_fn] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_let] = STATE(85),
    [sym_do] = STATE(85),
    [sym_call_expression] = STATE(85),
    [sym_call_name] = STATE(7),
    [sym_bool_literal] = STATE(85),
    [sym_str_literal] = STATE(85),
    [sym_char_literal] = STATE(85),
    [sym_pattern_literal] = STATE(85),
    [sym_array_expression] = STATE(85),
    [sym_map_expression] = STATE(85),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [sym_integer_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [3] = {
    [sym_line_comment] = STATE(83),
    [sym__s_expr] = STATE(83),
    [sym__anything] = STATE(83),
    [sym__s_forms] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_def] = STATE(83),
    [sym_fn] = STATE(83),
    [sym_defn] = STATE(83),
    [sym_let] = STATE(83),
    [sym_do] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_call_name] = STATE(7),
    [sym_bool_literal] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_char_literal] = STATE(83),
    [sym_pattern_literal] = STATE(83),
    [sym_array_expression] = STATE(83),
    [sym_map_expression] = STATE(83),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [sym_integer_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
  },
  [4] = {
    [sym__s_expr] = STATE(4),
    [sym__expr] = STATE(4),
    [sym__literals] = STATE(4),
    [sym_bool_literal] = STATE(4),
    [sym_str_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [sym_pattern_literal] = STATE(4),
    [sym_array_expression] = STATE(4),
    [sym_map_expression] = STATE(4),
    [aux_sym_call_expression_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(46),
    [sym_integer_literal] = ACTIONS(49),
    [sym_float_literal] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(61),
    [anon_sym_POUND_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(49),
  },
  [5] = {
    [sym__s_expr] = STATE(38),
    [sym__expr] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_pattern_literal] = STATE(38),
    [sym_array_expression] = STATE(38),
    [sym_map_expression] = STATE(38),
    [aux_sym_do_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [sym_integer_literal] = ACTIONS(78),
    [sym_float_literal] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(90),
    [anon_sym_POUND_DQUOTE] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(96),
    [sym_identifier] = ACTIONS(78),
  },
  [6] = {
    [sym__s_expr] = STATE(38),
    [sym__expr] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_pattern_literal] = STATE(38),
    [sym_array_expression] = STATE(38),
    [sym_map_expression] = STATE(38),
    [aux_sym_do_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(101),
    [sym_float_literal] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(101),
  },
  [7] = {
    [sym__s_expr] = STATE(9),
    [sym__expr] = STATE(9),
    [sym__literals] = STATE(9),
    [sym_bool_literal] = STATE(9),
    [sym_str_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_pattern_literal] = STATE(9),
    [sym_array_expression] = STATE(9),
    [sym_map_expression] = STATE(9),
    [aux_sym_call_expression_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(107),
    [sym_float_literal] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(107),
  },
  [8] = {
    [sym__s_expr] = STATE(38),
    [sym__expr] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_pattern_literal] = STATE(38),
    [sym_array_expression] = STATE(38),
    [sym_map_expression] = STATE(38),
    [aux_sym_do_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(101),
    [sym_float_literal] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(101),
  },
  [9] = {
    [sym__s_expr] = STATE(4),
    [sym__expr] = STATE(4),
    [sym__literals] = STATE(4),
    [sym_bool_literal] = STATE(4),
    [sym_str_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [sym_pattern_literal] = STATE(4),
    [sym_array_expression] = STATE(4),
    [sym_map_expression] = STATE(4),
    [aux_sym_call_expression_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(115),
    [sym_float_literal] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(115),
  },
  [10] = {
    [sym__s_expr] = STATE(82),
    [sym__expr] = STATE(82),
    [sym__literals] = STATE(82),
    [sym_bool_literal] = STATE(82),
    [sym_str_literal] = STATE(82),
    [sym_char_literal] = STATE(82),
    [sym_pattern_literal] = STATE(82),
    [sym_array_expression] = STATE(82),
    [sym_map_expression] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(121),
    [sym_float_literal] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(121),
  },
  [11] = {
    [sym__s_expr] = STATE(81),
    [sym__expr] = STATE(81),
    [sym__literals] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(127),
    [sym_float_literal] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(127),
  },
  [12] = {
    [sym__s_expr] = STATE(84),
    [sym__expr] = STATE(84),
    [sym__literals] = STATE(84),
    [sym_bool_literal] = STATE(84),
    [sym_str_literal] = STATE(84),
    [sym_char_literal] = STATE(84),
    [sym_pattern_literal] = STATE(84),
    [sym_array_expression] = STATE(84),
    [sym_map_expression] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(133),
    [sym_float_literal] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(133),
  },
  [13] = {
    [sym__s_expr] = STATE(68),
    [sym__expr] = STATE(68),
    [sym__literals] = STATE(68),
    [sym_bool_literal] = STATE(68),
    [sym_str_literal] = STATE(68),
    [sym_char_literal] = STATE(68),
    [sym_pattern_literal] = STATE(68),
    [sym_array_expression] = STATE(68),
    [sym_map_expression] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [sym_integer_literal] = ACTIONS(141),
    [sym_float_literal] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_BSLASH] = ACTIONS(149),
    [anon_sym_POUND_DQUOTE] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_identifier] = ACTIONS(141),
  },
  [14] = {
    [sym__s_expr] = STATE(88),
    [sym__expr] = STATE(88),
    [sym__literals] = STATE(88),
    [sym_bool_literal] = STATE(88),
    [sym_str_literal] = STATE(88),
    [sym_char_literal] = STATE(88),
    [sym_pattern_literal] = STATE(88),
    [sym_array_expression] = STATE(88),
    [sym_map_expression] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(155),
    [sym_float_literal] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(155),
  },
  [15] = {
    [sym__literals] = STATE(15),
    [sym_bool_literal] = STATE(15),
    [sym_str_literal] = STATE(15),
    [sym_char_literal] = STATE(15),
    [sym_pattern_literal] = STATE(15),
    [sym_array_expression] = STATE(15),
    [sym_map_expression] = STATE(15),
    [aux_sym_array_expression_repeat1] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(162),
    [sym_integer_literal] = ACTIONS(164),
    [sym_float_literal] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(170),
    [anon_sym_false] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_BSLASH] = ACTIONS(176),
    [anon_sym_POUND_DQUOTE] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(182),
    [sym_identifier] = ACTIONS(164),
  },
  [16] = {
    [sym__literals] = STATE(25),
    [sym_bool_literal] = STATE(25),
    [sym_str_literal] = STATE(25),
    [sym_char_literal] = STATE(25),
    [sym_pattern_literal] = STATE(25),
    [sym_array_expression] = STATE(25),
    [sym_map_expression] = STATE(25),
    [aux_sym_map_expression_repeat1] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym_integer_literal] = ACTIONS(188),
    [sym_float_literal] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(194),
    [anon_sym_false] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(200),
    [anon_sym_POUND_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(209),
    [sym_identifier] = ACTIONS(188),
  },
  [17] = {
    [sym__literals] = STATE(25),
    [sym_bool_literal] = STATE(25),
    [sym_str_literal] = STATE(25),
    [sym_char_literal] = STATE(25),
    [sym_pattern_literal] = STATE(25),
    [sym_array_expression] = STATE(25),
    [sym_map_expression] = STATE(25),
    [aux_sym_map_expression_repeat1] = STATE(18),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(215),
    [sym_identifier] = ACTIONS(211),
  },
  [18] = {
    [sym__literals] = STATE(25),
    [sym_bool_literal] = STATE(25),
    [sym_str_literal] = STATE(25),
    [sym_char_literal] = STATE(25),
    [sym_pattern_literal] = STATE(25),
    [sym_array_expression] = STATE(25),
    [sym_map_expression] = STATE(25),
    [aux_sym_map_expression_repeat1] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(217),
    [sym_identifier] = ACTIONS(211),
  },
  [19] = {
    [sym__literals] = STATE(25),
    [sym_bool_literal] = STATE(25),
    [sym_str_literal] = STATE(25),
    [sym_char_literal] = STATE(25),
    [sym_pattern_literal] = STATE(25),
    [sym_array_expression] = STATE(25),
    [sym_map_expression] = STATE(25),
    [aux_sym_map_expression_repeat1] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(219),
    [sym_identifier] = ACTIONS(211),
  },
  [20] = {
    [sym__literals] = STATE(24),
    [sym_bool_literal] = STATE(24),
    [sym_str_literal] = STATE(24),
    [sym_char_literal] = STATE(24),
    [sym_pattern_literal] = STATE(24),
    [sym_array_expression] = STATE(24),
    [sym_map_expression] = STATE(24),
    [aux_sym_array_expression_repeat1] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_integer_literal] = ACTIONS(223),
    [sym_float_literal] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(223),
  },
  [21] = {
    [sym__literals] = STATE(25),
    [sym_bool_literal] = STATE(25),
    [sym_str_literal] = STATE(25),
    [sym_char_literal] = STATE(25),
    [sym_pattern_literal] = STATE(25),
    [sym_array_expression] = STATE(25),
    [sym_map_expression] = STATE(25),
    [aux_sym_map_expression_repeat1] = STATE(19),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(227),
    [sym_identifier] = ACTIONS(211),
  },
  [22] = {
    [sym__literals] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym_str_literal] = STATE(23),
    [sym_char_literal] = STATE(23),
    [sym_pattern_literal] = STATE(23),
    [sym_array_expression] = STATE(23),
    [sym_map_expression] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym_integer_literal] = ACTIONS(231),
    [sym_float_literal] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(231),
  },
  [23] = {
    [sym__literals] = STATE(15),
    [sym_bool_literal] = STATE(15),
    [sym_str_literal] = STATE(15),
    [sym_char_literal] = STATE(15),
    [sym_pattern_literal] = STATE(15),
    [sym_array_expression] = STATE(15),
    [sym_map_expression] = STATE(15),
    [aux_sym_array_expression_repeat1] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym_integer_literal] = ACTIONS(237),
    [sym_float_literal] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(237),
  },
  [24] = {
    [sym__literals] = STATE(15),
    [sym_bool_literal] = STATE(15),
    [sym_str_literal] = STATE(15),
    [sym_char_literal] = STATE(15),
    [sym_pattern_literal] = STATE(15),
    [sym_array_expression] = STATE(15),
    [sym_map_expression] = STATE(15),
    [aux_sym_array_expression_repeat1] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_integer_literal] = ACTIONS(237),
    [sym_float_literal] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(237),
  },
  [25] = {
    [sym__literals] = STATE(44),
    [sym_bool_literal] = STATE(44),
    [sym_str_literal] = STATE(44),
    [sym_char_literal] = STATE(44),
    [sym_pattern_literal] = STATE(44),
    [sym_array_expression] = STATE(44),
    [sym_map_expression] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(243),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [sym_integer_literal] = ACTIONS(249),
    [sym_float_literal] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [anon_sym_BSLASH] = ACTIONS(247),
    [anon_sym_POUND_DQUOTE] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
    [sym_identifier] = ACTIONS(249),
  },
  [27] = {
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(253),
    [sym_float_literal] = ACTIONS(251),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_BSLASH] = ACTIONS(251),
    [anon_sym_POUND_DQUOTE] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_identifier] = ACTIONS(253),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [sym_integer_literal] = ACTIONS(257),
    [sym_float_literal] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(257),
    [anon_sym_false] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_BSLASH] = ACTIONS(255),
    [anon_sym_POUND_DQUOTE] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [sym_identifier] = ACTIONS(257),
  },
  [29] = {
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [sym_integer_literal] = ACTIONS(261),
    [sym_float_literal] = ACTIONS(259),
    [anon_sym_true] = ACTIONS(261),
    [anon_sym_false] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_BSLASH] = ACTIONS(259),
    [anon_sym_POUND_DQUOTE] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [sym_identifier] = ACTIONS(261),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_integer_literal] = ACTIONS(265),
    [sym_float_literal] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(265),
    [anon_sym_false] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_BSLASH] = ACTIONS(263),
    [anon_sym_POUND_DQUOTE] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [sym_identifier] = ACTIONS(265),
  },
  [31] = {
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_integer_literal] = ACTIONS(269),
    [sym_float_literal] = ACTIONS(267),
    [anon_sym_true] = ACTIONS(269),
    [anon_sym_false] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_BSLASH] = ACTIONS(267),
    [anon_sym_POUND_DQUOTE] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
    [sym_identifier] = ACTIONS(269),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_integer_literal] = ACTIONS(273),
    [sym_float_literal] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(273),
    [anon_sym_false] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [anon_sym_BSLASH] = ACTIONS(271),
    [anon_sym_POUND_DQUOTE] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [sym_identifier] = ACTIONS(273),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym_integer_literal] = ACTIONS(277),
    [sym_float_literal] = ACTIONS(275),
    [anon_sym_true] = ACTIONS(277),
    [anon_sym_false] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_POUND_DQUOTE] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [sym_identifier] = ACTIONS(277),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_integer_literal] = ACTIONS(281),
    [sym_float_literal] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(281),
    [anon_sym_false] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [anon_sym_BSLASH] = ACTIONS(279),
    [anon_sym_POUND_DQUOTE] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [sym_identifier] = ACTIONS(281),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(285),
    [anon_sym_false] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_BSLASH] = ACTIONS(283),
    [anon_sym_POUND_DQUOTE] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(289),
    [anon_sym_false] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_BSLASH] = ACTIONS(287),
    [anon_sym_POUND_DQUOTE] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_identifier] = ACTIONS(289),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(293),
    [sym_integer_literal] = ACTIONS(295),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(291),
    [anon_sym_POUND_DQUOTE] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [sym_identifier] = ACTIONS(295),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_integer_literal] = ACTIONS(299),
    [sym_float_literal] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_BSLASH] = ACTIONS(297),
    [anon_sym_POUND_DQUOTE] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [sym_identifier] = ACTIONS(299),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [sym_integer_literal] = ACTIONS(303),
    [sym_float_literal] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(301),
    [anon_sym_POUND_DQUOTE] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [sym_identifier] = ACTIONS(303),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [sym_integer_literal] = ACTIONS(307),
    [sym_float_literal] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_identifier] = ACTIONS(307),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [sym_integer_literal] = ACTIONS(311),
    [sym_float_literal] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(311),
    [anon_sym_false] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_POUND_DQUOTE] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [sym_identifier] = ACTIONS(311),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_integer_literal] = ACTIONS(315),
    [sym_float_literal] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(315),
    [anon_sym_false] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_POUND_DQUOTE] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [sym_identifier] = ACTIONS(315),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [sym_integer_literal] = ACTIONS(319),
    [sym_float_literal] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(319),
    [anon_sym_false] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_BSLASH] = ACTIONS(317),
    [anon_sym_POUND_DQUOTE] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_identifier] = ACTIONS(319),
  },
  [44] = {
    [anon_sym_LBRACK] = ACTIONS(321),
    [sym_integer_literal] = ACTIONS(323),
    [sym_float_literal] = ACTIONS(321),
    [anon_sym_true] = ACTIONS(323),
    [anon_sym_false] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_BSLASH] = ACTIONS(321),
    [anon_sym_POUND_DQUOTE] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [sym_identifier] = ACTIONS(323),
  },
  [45] = {
    [sym_line_comment] = STATE(46),
    [sym__s_expr] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [46] = {
    [sym_line_comment] = STATE(46),
    [sym__s_expr] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(332),
  },
  [47] = {
    [aux_sym_str_literal_repeat1] = STATE(56),
    [aux_sym_str_literal_token1] = ACTIONS(335),
    [anon_sym_DQUOTE2] = ACTIONS(337),
    [sym_escape_sequence] = ACTIONS(339),
  },
  [48] = {
    [aux_sym_str_literal_repeat1] = STATE(53),
    [aux_sym_str_literal_token1] = ACTIONS(341),
    [anon_sym_DQUOTE2] = ACTIONS(343),
    [sym_escape_sequence] = ACTIONS(345),
  },
  [49] = {
    [aux_sym_str_literal_repeat1] = STATE(52),
    [aux_sym_str_literal_token1] = ACTIONS(347),
    [anon_sym_DQUOTE2] = ACTIONS(349),
    [sym_escape_sequence] = ACTIONS(351),
  },
  [50] = {
    [aux_sym_str_literal_repeat1] = STATE(53),
    [aux_sym_str_literal_token1] = ACTIONS(341),
    [anon_sym_DQUOTE2] = ACTIONS(353),
    [sym_escape_sequence] = ACTIONS(345),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
  },
  [52] = {
    [aux_sym_str_literal_repeat1] = STATE(53),
    [aux_sym_str_literal_token1] = ACTIONS(341),
    [anon_sym_DQUOTE2] = ACTIONS(357),
    [sym_escape_sequence] = ACTIONS(345),
  },
  [53] = {
    [aux_sym_str_literal_repeat1] = STATE(53),
    [aux_sym_str_literal_token1] = ACTIONS(359),
    [anon_sym_DQUOTE2] = ACTIONS(362),
    [sym_escape_sequence] = ACTIONS(364),
  },
  [54] = {
    [aux_sym_str_literal_repeat1] = STATE(50),
    [aux_sym_str_literal_token1] = ACTIONS(367),
    [anon_sym_DQUOTE2] = ACTIONS(369),
    [sym_escape_sequence] = ACTIONS(371),
  },
  [55] = {
    [aux_sym_str_literal_repeat1] = STATE(48),
    [aux_sym_str_literal_token1] = ACTIONS(373),
    [anon_sym_DQUOTE2] = ACTIONS(375),
    [sym_escape_sequence] = ACTIONS(377),
  },
  [56] = {
    [aux_sym_str_literal_repeat1] = STATE(53),
    [aux_sym_str_literal_token1] = ACTIONS(341),
    [anon_sym_DQUOTE2] = ACTIONS(379),
    [sym_escape_sequence] = ACTIONS(345),
  },
  [57] = {
    [aux_sym_parameters_repeat1] = STATE(61),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_identifier] = ACTIONS(383),
  },
  [58] = {
    [aux_sym_let_pairs_repeat1] = STATE(58),
    [anon_sym_RBRACK] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
  },
  [59] = {
    [aux_sym_let_pairs_repeat1] = STATE(58),
    [anon_sym_RBRACK] = ACTIONS(390),
    [sym_identifier] = ACTIONS(392),
  },
  [60] = {
    [aux_sym_parameters_repeat1] = STATE(57),
    [anon_sym_RBRACK] = ACTIONS(394),
    [sym_identifier] = ACTIONS(396),
  },
  [61] = {
    [aux_sym_parameters_repeat1] = STATE(61),
    [anon_sym_RBRACK] = ACTIONS(398),
    [sym_identifier] = ACTIONS(400),
  },
  [62] = {
    [aux_sym_let_pairs_repeat1] = STATE(59),
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_identifier] = ACTIONS(392),
  },
  [63] = {
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym_identifier] = ACTIONS(275),
  },
  [64] = {
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
  },
  [65] = {
    [sym_parameters] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(405),
  },
  [66] = {
    [sym_let_pairs] = STATE(11),
    [anon_sym_LBRACK] = ACTIONS(407),
  },
  [67] = {
    [aux_sym_str_literal_token1] = ACTIONS(409),
    [sym_escape_sequence] = ACTIONS(411),
  },
  [68] = {
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_identifier] = ACTIONS(413),
  },
  [69] = {
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_identifier] = ACTIONS(287),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(255),
    [sym_identifier] = ACTIONS(255),
  },
  [71] = {
    [anon_sym_RBRACK] = ACTIONS(259),
    [sym_identifier] = ACTIONS(259),
  },
  [72] = {
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_identifier] = ACTIONS(267),
  },
  [73] = {
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_identifier] = ACTIONS(271),
  },
  [74] = {
    [aux_sym_str_literal_token1] = ACTIONS(415),
    [sym_escape_sequence] = ACTIONS(417),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(247),
    [sym_identifier] = ACTIONS(247),
  },
  [76] = {
    [sym_parameters] = STATE(12),
    [anon_sym_LBRACK] = ACTIONS(405),
  },
  [77] = {
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_identifier] = ACTIONS(283),
  },
  [78] = {
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_identifier] = ACTIONS(279),
  },
  [79] = {
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_identifier] = ACTIONS(263),
  },
  [80] = {
    [aux_sym_line_comment_token1] = ACTIONS(419),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(421),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(423),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(425),
  },
  [84] = {
    [anon_sym_RPAREN] = ACTIONS(427),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(429),
  },
  [86] = {
    [sym_identifier] = ACTIONS(431),
  },
  [87] = {
    [sym_identifier] = ACTIONS(433),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(435),
  },
  [89] = {
    [sym_identifier] = ACTIONS(437),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(439),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(80),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(89),
  [11] = {.count = 1, .reusable = false}, SHIFT(65),
  [13] = {.count = 1, .reusable = false}, SHIFT(87),
  [15] = {.count = 1, .reusable = false}, SHIFT(66),
  [17] = {.count = 1, .reusable = true}, SHIFT(20),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(85),
  [23] = {.count = 1, .reusable = true}, SHIFT(85),
  [25] = {.count = 1, .reusable = false}, SHIFT(36),
  [27] = {.count = 1, .reusable = true}, SHIFT(49),
  [29] = {.count = 1, .reusable = true}, SHIFT(67),
  [31] = {.count = 1, .reusable = true}, SHIFT(47),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(37),
  [37] = {.count = 1, .reusable = false}, SHIFT(83),
  [39] = {.count = 1, .reusable = true}, SHIFT(83),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(20),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(36),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(49),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(67),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(47),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(17),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(3),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(20),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(38),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(38),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(36),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(49),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(67),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(47),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(17),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [101] = {.count = 1, .reusable = false}, SHIFT(38),
  [103] = {.count = 1, .reusable = true}, SHIFT(38),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [107] = {.count = 1, .reusable = false}, SHIFT(9),
  [109] = {.count = 1, .reusable = true}, SHIFT(9),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [115] = {.count = 1, .reusable = false}, SHIFT(4),
  [117] = {.count = 1, .reusable = true}, SHIFT(4),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [121] = {.count = 1, .reusable = false}, SHIFT(82),
  [123] = {.count = 1, .reusable = true}, SHIFT(82),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [127] = {.count = 1, .reusable = false}, SHIFT(81),
  [129] = {.count = 1, .reusable = true}, SHIFT(81),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 10),
  [133] = {.count = 1, .reusable = false}, SHIFT(84),
  [135] = {.count = 1, .reusable = true}, SHIFT(84),
  [137] = {.count = 1, .reusable = true}, SHIFT(2),
  [139] = {.count = 1, .reusable = true}, SHIFT(22),
  [141] = {.count = 1, .reusable = false}, SHIFT(68),
  [143] = {.count = 1, .reusable = true}, SHIFT(68),
  [145] = {.count = 1, .reusable = false}, SHIFT(69),
  [147] = {.count = 1, .reusable = true}, SHIFT(55),
  [149] = {.count = 1, .reusable = true}, SHIFT(74),
  [151] = {.count = 1, .reusable = true}, SHIFT(54),
  [153] = {.count = 1, .reusable = true}, SHIFT(21),
  [155] = {.count = 1, .reusable = false}, SHIFT(88),
  [157] = {.count = 1, .reusable = true}, SHIFT(88),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(20),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(15),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(15),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(36),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(49),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(67),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(47),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(17),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(20),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(36),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(49),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(67),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(47),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(17),
  [209] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15),
  [211] = {.count = 1, .reusable = false}, SHIFT(25),
  [213] = {.count = 1, .reusable = true}, SHIFT(25),
  [215] = {.count = 1, .reusable = true}, SHIFT(33),
  [217] = {.count = 1, .reusable = true}, SHIFT(30),
  [219] = {.count = 1, .reusable = true}, SHIFT(79),
  [221] = {.count = 1, .reusable = true}, SHIFT(28),
  [223] = {.count = 1, .reusable = false}, SHIFT(24),
  [225] = {.count = 1, .reusable = true}, SHIFT(24),
  [227] = {.count = 1, .reusable = true}, SHIFT(63),
  [229] = {.count = 1, .reusable = true}, SHIFT(70),
  [231] = {.count = 1, .reusable = false}, SHIFT(23),
  [233] = {.count = 1, .reusable = true}, SHIFT(23),
  [235] = {.count = 1, .reusable = true}, SHIFT(64),
  [237] = {.count = 1, .reusable = false}, SHIFT(15),
  [239] = {.count = 1, .reusable = true}, SHIFT(15),
  [241] = {.count = 1, .reusable = true}, SHIFT(27),
  [243] = {.count = 1, .reusable = false}, SHIFT(44),
  [245] = {.count = 1, .reusable = true}, SHIFT(44),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 14),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 14),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [293] = {.count = 1, .reusable = true}, SHIFT(86),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [297] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [299] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 19),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 19),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 16),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 16),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 13),
  [323] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 13),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [327] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [335] = {.count = 1, .reusable = false}, SHIFT(56),
  [337] = {.count = 1, .reusable = true}, SHIFT(32),
  [339] = {.count = 1, .reusable = true}, SHIFT(56),
  [341] = {.count = 1, .reusable = false}, SHIFT(53),
  [343] = {.count = 1, .reusable = true}, SHIFT(77),
  [345] = {.count = 1, .reusable = true}, SHIFT(53),
  [347] = {.count = 1, .reusable = false}, SHIFT(52),
  [349] = {.count = 1, .reusable = true}, SHIFT(29),
  [351] = {.count = 1, .reusable = true}, SHIFT(52),
  [353] = {.count = 1, .reusable = true}, SHIFT(78),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [357] = {.count = 1, .reusable = true}, SHIFT(35),
  [359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(53),
  [362] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(53),
  [367] = {.count = 1, .reusable = false}, SHIFT(50),
  [369] = {.count = 1, .reusable = true}, SHIFT(73),
  [371] = {.count = 1, .reusable = true}, SHIFT(50),
  [373] = {.count = 1, .reusable = false}, SHIFT(48),
  [375] = {.count = 1, .reusable = true}, SHIFT(71),
  [377] = {.count = 1, .reusable = true}, SHIFT(48),
  [379] = {.count = 1, .reusable = true}, SHIFT(34),
  [381] = {.count = 1, .reusable = true}, SHIFT(40),
  [383] = {.count = 1, .reusable = true}, SHIFT(61),
  [385] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 20),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 20), SHIFT_REPEAT(13),
  [390] = {.count = 1, .reusable = true}, SHIFT(39),
  [392] = {.count = 1, .reusable = true}, SHIFT(13),
  [394] = {.count = 1, .reusable = true}, SHIFT(42),
  [396] = {.count = 1, .reusable = true}, SHIFT(57),
  [398] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(61),
  [403] = {.count = 1, .reusable = true}, SHIFT(43),
  [405] = {.count = 1, .reusable = true}, SHIFT(60),
  [407] = {.count = 1, .reusable = true}, SHIFT(62),
  [409] = {.count = 1, .reusable = false}, SHIFT(31),
  [411] = {.count = 1, .reusable = true}, SHIFT(31),
  [413] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 18),
  [415] = {.count = 1, .reusable = false}, SHIFT(72),
  [417] = {.count = 1, .reusable = true}, SHIFT(72),
  [419] = {.count = 1, .reusable = true}, SHIFT(51),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 11),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 9),
  [425] = {.count = 1, .reusable = true}, SHIFT(26),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 17),
  [429] = {.count = 1, .reusable = true}, SHIFT(75),
  [431] = {.count = 1, .reusable = true}, SHIFT(41),
  [433] = {.count = 1, .reusable = true}, SHIFT(76),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 8),
  [437] = {.count = 1, .reusable = true}, SHIFT(14),
  [439] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
