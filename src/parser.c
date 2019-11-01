#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 95
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
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
  anon_sym_if = 12,
  anon_sym_DOT = 13,
  sym_integer_literal = 14,
  sym_float_literal = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_str_literal_token1 = 19,
  anon_sym_DQUOTE2 = 20,
  anon_sym_BSLASH = 21,
  anon_sym_POUND_DQUOTE = 22,
  sym_escape_sequence = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  sym_identifier = 26,
  sym_source_file = 27,
  sym_line_comment = 28,
  sym__s_expr = 29,
  sym__expr = 30,
  sym__anything = 31,
  sym__s_forms = 32,
  sym__literals = 33,
  sym_def = 34,
  sym_fn = 35,
  sym_defn = 36,
  sym_let = 37,
  sym_let_pairs = 38,
  sym_do = 39,
  sym_if = 40,
  sym_call_expression = 41,
  sym_call_name = 42,
  sym_parameters = 43,
  sym_bool_literal = 44,
  sym_str_literal = 45,
  sym_char_literal = 46,
  sym_pattern_literal = 47,
  sym_array_expression = 48,
  sym_map_expression = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_let_pairs_repeat1 = 51,
  aux_sym_do_repeat1 = 52,
  aux_sym_call_expression_repeat1 = 53,
  aux_sym_parameters_repeat1 = 54,
  aux_sym_str_literal_repeat1 = 55,
  aux_sym_array_expression_repeat1 = 56,
  aux_sym_map_expression_repeat1 = 57,
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
  [anon_sym_if] = "if",
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
  [sym_if] = "if",
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
  [anon_sym_if] = {
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
  [sym_if] = {
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
  field_condition = 4,
  field_else = 5,
  field_expr = 6,
  field_key = 7,
  field_module = 8,
  field_name = 9,
  field_pairs = 10,
  field_parameters = 11,
  field_then = 12,
  field_value = 13,
  field_var = 14,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_condition] = "condition",
  [field_else] = "else",
  [field_expr] = "expr",
  [field_key] = "key",
  [field_module] = "module",
  [field_name] = "name",
  [field_pairs] = "pairs",
  [field_parameters] = "parameters",
  [field_then] = "then",
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
  [21] = {.index = 39, .length = 3},
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
  [39] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
};

static TSSymbol ts_alias_sequences[22][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
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
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
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
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
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
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
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
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 0},
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
    [anon_sym_if] = ACTIONS(1),
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
    [sym_source_file] = STATE(94),
    [sym_line_comment] = STATE(48),
    [sym__s_expr] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(89),
    [sym__s_expr] = STATE(89),
    [sym__anything] = STATE(89),
    [sym__s_forms] = STATE(89),
    [sym__literals] = STATE(89),
    [sym_def] = STATE(89),
    [sym_fn] = STATE(89),
    [sym_defn] = STATE(89),
    [sym_let] = STATE(89),
    [sym_do] = STATE(89),
    [sym_if] = STATE(89),
    [sym_call_expression] = STATE(89),
    [sym_call_name] = STATE(9),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
  },
  [3] = {
    [sym_line_comment] = STATE(87),
    [sym__s_expr] = STATE(87),
    [sym__anything] = STATE(87),
    [sym__s_forms] = STATE(87),
    [sym__literals] = STATE(87),
    [sym_def] = STATE(87),
    [sym_fn] = STATE(87),
    [sym_defn] = STATE(87),
    [sym_let] = STATE(87),
    [sym_do] = STATE(87),
    [sym_if] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym_call_name] = STATE(9),
    [sym_bool_literal] = STATE(87),
    [sym_str_literal] = STATE(87),
    [sym_char_literal] = STATE(87),
    [sym_pattern_literal] = STATE(87),
    [sym_array_expression] = STATE(87),
    [sym_map_expression] = STATE(87),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
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
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(48),
    [sym_integer_literal] = ACTIONS(51),
    [sym_float_literal] = ACTIONS(54),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(51),
  },
  [5] = {
    [sym__s_expr] = STATE(42),
    [sym__expr] = STATE(42),
    [sym__literals] = STATE(42),
    [sym_bool_literal] = STATE(42),
    [sym_str_literal] = STATE(42),
    [sym_char_literal] = STATE(42),
    [sym_pattern_literal] = STATE(42),
    [sym_array_expression] = STATE(42),
    [sym_map_expression] = STATE(42),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(74),
    [sym_float_literal] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(74),
  },
  [6] = {
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
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(80),
    [sym_float_literal] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(80),
  },
  [7] = {
    [sym__s_expr] = STATE(42),
    [sym__expr] = STATE(42),
    [sym__literals] = STATE(42),
    [sym_bool_literal] = STATE(42),
    [sym_str_literal] = STATE(42),
    [sym_char_literal] = STATE(42),
    [sym_pattern_literal] = STATE(42),
    [sym_array_expression] = STATE(42),
    [sym_map_expression] = STATE(42),
    [aux_sym_do_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(74),
    [sym_float_literal] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(74),
  },
  [8] = {
    [sym__s_expr] = STATE(42),
    [sym__expr] = STATE(42),
    [sym__literals] = STATE(42),
    [sym_bool_literal] = STATE(42),
    [sym_str_literal] = STATE(42),
    [sym_char_literal] = STATE(42),
    [sym_pattern_literal] = STATE(42),
    [sym_array_expression] = STATE(42),
    [sym_map_expression] = STATE(42),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [sym_integer_literal] = ACTIONS(94),
    [sym_float_literal] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_BSLASH] = ACTIONS(106),
    [anon_sym_POUND_DQUOTE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(112),
    [sym_identifier] = ACTIONS(94),
  },
  [9] = {
    [sym__s_expr] = STATE(6),
    [sym__expr] = STATE(6),
    [sym__literals] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [sym_str_literal] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_pattern_literal] = STATE(6),
    [sym_array_expression] = STATE(6),
    [sym_map_expression] = STATE(6),
    [aux_sym_call_expression_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(117),
    [sym_float_literal] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(117),
  },
  [10] = {
    [sym__s_expr] = STATE(85),
    [sym__expr] = STATE(85),
    [sym__literals] = STATE(85),
    [sym_bool_literal] = STATE(85),
    [sym_str_literal] = STATE(85),
    [sym_char_literal] = STATE(85),
    [sym_pattern_literal] = STATE(85),
    [sym_array_expression] = STATE(85),
    [sym_map_expression] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(123),
    [sym_float_literal] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(123),
  },
  [11] = {
    [sym__s_expr] = STATE(83),
    [sym__expr] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_char_literal] = STATE(83),
    [sym_pattern_literal] = STATE(83),
    [sym_array_expression] = STATE(83),
    [sym_map_expression] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(129),
    [sym_float_literal] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(129),
  },
  [12] = {
    [sym__s_expr] = STATE(86),
    [sym__expr] = STATE(86),
    [sym__literals] = STATE(86),
    [sym_bool_literal] = STATE(86),
    [sym_str_literal] = STATE(86),
    [sym_char_literal] = STATE(86),
    [sym_pattern_literal] = STATE(86),
    [sym_array_expression] = STATE(86),
    [sym_map_expression] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(135),
    [sym_float_literal] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(135),
  },
  [13] = {
    [sym__s_expr] = STATE(66),
    [sym__expr] = STATE(66),
    [sym__literals] = STATE(66),
    [sym_bool_literal] = STATE(66),
    [sym_str_literal] = STATE(66),
    [sym_char_literal] = STATE(66),
    [sym_pattern_literal] = STATE(66),
    [sym_array_expression] = STATE(66),
    [sym_map_expression] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(141),
    [sym_integer_literal] = ACTIONS(143),
    [sym_float_literal] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_BSLASH] = ACTIONS(151),
    [anon_sym_POUND_DQUOTE] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [sym_identifier] = ACTIONS(143),
  },
  [14] = {
    [sym__s_expr] = STATE(15),
    [sym__expr] = STATE(15),
    [sym__literals] = STATE(15),
    [sym_bool_literal] = STATE(15),
    [sym_str_literal] = STATE(15),
    [sym_char_literal] = STATE(15),
    [sym_pattern_literal] = STATE(15),
    [sym_array_expression] = STATE(15),
    [sym_map_expression] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(157),
    [sym_float_literal] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(157),
  },
  [15] = {
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(161),
    [sym_float_literal] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(161),
  },
  [16] = {
    [sym__s_expr] = STATE(14),
    [sym__expr] = STATE(14),
    [sym__literals] = STATE(14),
    [sym_bool_literal] = STATE(14),
    [sym_str_literal] = STATE(14),
    [sym_char_literal] = STATE(14),
    [sym_pattern_literal] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_map_expression] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(165),
    [sym_float_literal] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(165),
  },
  [17] = {
    [sym__s_expr] = STATE(90),
    [sym__expr] = STATE(90),
    [sym__literals] = STATE(90),
    [sym_bool_literal] = STATE(90),
    [sym_str_literal] = STATE(90),
    [sym_char_literal] = STATE(90),
    [sym_pattern_literal] = STATE(90),
    [sym_array_expression] = STATE(90),
    [sym_map_expression] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(169),
    [sym_float_literal] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(169),
  },
  [18] = {
    [sym__literals] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [aux_sym_map_expression_repeat1] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym_identifier] = ACTIONS(173),
  },
  [19] = {
    [sym__literals] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym_str_literal] = STATE(23),
    [sym_char_literal] = STATE(23),
    [sym_pattern_literal] = STATE(23),
    [sym_array_expression] = STATE(23),
    [sym_map_expression] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_integer_literal] = ACTIONS(181),
    [sym_float_literal] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(181),
  },
  [20] = {
    [sym__literals] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [aux_sym_map_expression_repeat1] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(185),
    [sym_identifier] = ACTIONS(173),
  },
  [21] = {
    [sym__literals] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [aux_sym_map_expression_repeat1] = STATE(26),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(173),
  },
  [22] = {
    [sym__literals] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [aux_sym_map_expression_repeat1] = STATE(26),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(189),
    [sym_identifier] = ACTIONS(173),
  },
  [23] = {
    [sym__literals] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym_str_literal] = STATE(23),
    [sym_char_literal] = STATE(23),
    [sym_pattern_literal] = STATE(23),
    [sym_array_expression] = STATE(23),
    [sym_map_expression] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(194),
    [sym_integer_literal] = ACTIONS(196),
    [sym_float_literal] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(202),
    [anon_sym_false] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_POUND_DQUOTE] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(214),
    [sym_identifier] = ACTIONS(196),
  },
  [24] = {
    [sym__literals] = STATE(27),
    [sym_bool_literal] = STATE(27),
    [sym_str_literal] = STATE(27),
    [sym_char_literal] = STATE(27),
    [sym_pattern_literal] = STATE(27),
    [sym_array_expression] = STATE(27),
    [sym_map_expression] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym_integer_literal] = ACTIONS(219),
    [sym_float_literal] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(219),
  },
  [25] = {
    [sym__literals] = STATE(19),
    [sym_bool_literal] = STATE(19),
    [sym_str_literal] = STATE(19),
    [sym_char_literal] = STATE(19),
    [sym_pattern_literal] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym_map_expression] = STATE(19),
    [aux_sym_array_expression_repeat1] = STATE(19),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_integer_literal] = ACTIONS(225),
    [sym_float_literal] = ACTIONS(227),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(225),
  },
  [26] = {
    [sym__literals] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [aux_sym_map_expression_repeat1] = STATE(26),
    [anon_sym_LBRACK] = ACTIONS(229),
    [sym_integer_literal] = ACTIONS(232),
    [sym_float_literal] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(238),
    [anon_sym_false] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_BSLASH] = ACTIONS(244),
    [anon_sym_POUND_DQUOTE] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(232),
  },
  [27] = {
    [sym__literals] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym_str_literal] = STATE(23),
    [sym_char_literal] = STATE(23),
    [sym_pattern_literal] = STATE(23),
    [sym_array_expression] = STATE(23),
    [sym_map_expression] = STATE(23),
    [aux_sym_array_expression_repeat1] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(255),
    [sym_integer_literal] = ACTIONS(181),
    [sym_float_literal] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(181),
  },
  [28] = {
    [sym__literals] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_pattern_literal] = STATE(47),
    [sym_array_expression] = STATE(47),
    [sym_map_expression] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(257),
    [sym_float_literal] = ACTIONS(259),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(257),
  },
  [29] = {
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_integer_literal] = ACTIONS(263),
    [sym_float_literal] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(263),
    [anon_sym_false] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_BSLASH] = ACTIONS(261),
    [anon_sym_POUND_DQUOTE] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [sym_identifier] = ACTIONS(263),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [sym_integer_literal] = ACTIONS(267),
    [sym_float_literal] = ACTIONS(265),
    [anon_sym_true] = ACTIONS(267),
    [anon_sym_false] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_BSLASH] = ACTIONS(265),
    [anon_sym_POUND_DQUOTE] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [sym_identifier] = ACTIONS(267),
  },
  [31] = {
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_integer_literal] = ACTIONS(271),
    [sym_float_literal] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_BSLASH] = ACTIONS(269),
    [anon_sym_POUND_DQUOTE] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [sym_identifier] = ACTIONS(271),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_integer_literal] = ACTIONS(275),
    [sym_float_literal] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_BSLASH] = ACTIONS(273),
    [anon_sym_POUND_DQUOTE] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [sym_identifier] = ACTIONS(275),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_integer_literal] = ACTIONS(279),
    [sym_float_literal] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(279),
    [anon_sym_false] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_BSLASH] = ACTIONS(277),
    [anon_sym_POUND_DQUOTE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_identifier] = ACTIONS(279),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [sym_integer_literal] = ACTIONS(283),
    [sym_float_literal] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(283),
    [anon_sym_false] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_BSLASH] = ACTIONS(281),
    [anon_sym_POUND_DQUOTE] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_identifier] = ACTIONS(283),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_integer_literal] = ACTIONS(287),
    [sym_float_literal] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_BSLASH] = ACTIONS(285),
    [anon_sym_POUND_DQUOTE] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_identifier] = ACTIONS(287),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_integer_literal] = ACTIONS(291),
    [sym_float_literal] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(289),
    [anon_sym_POUND_DQUOTE] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [sym_identifier] = ACTIONS(291),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [sym_integer_literal] = ACTIONS(295),
    [sym_float_literal] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_BSLASH] = ACTIONS(293),
    [anon_sym_POUND_DQUOTE] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [sym_identifier] = ACTIONS(295),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_integer_literal] = ACTIONS(299),
    [sym_float_literal] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_BSLASH] = ACTIONS(297),
    [anon_sym_POUND_DQUOTE] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [sym_identifier] = ACTIONS(299),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_integer_literal] = ACTIONS(303),
    [sym_float_literal] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(301),
    [anon_sym_POUND_DQUOTE] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [sym_identifier] = ACTIONS(303),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(307),
    [sym_integer_literal] = ACTIONS(309),
    [sym_float_literal] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_identifier] = ACTIONS(309),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [sym_integer_literal] = ACTIONS(313),
    [sym_float_literal] = ACTIONS(311),
    [anon_sym_true] = ACTIONS(313),
    [anon_sym_false] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(311),
    [anon_sym_POUND_DQUOTE] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [sym_identifier] = ACTIONS(313),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [sym_integer_literal] = ACTIONS(317),
    [sym_float_literal] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(317),
    [anon_sym_false] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(315),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [sym_identifier] = ACTIONS(317),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_integer_literal] = ACTIONS(321),
    [sym_float_literal] = ACTIONS(319),
    [anon_sym_true] = ACTIONS(321),
    [anon_sym_false] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [anon_sym_BSLASH] = ACTIONS(319),
    [anon_sym_POUND_DQUOTE] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [sym_identifier] = ACTIONS(321),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [sym_integer_literal] = ACTIONS(325),
    [sym_float_literal] = ACTIONS(323),
    [anon_sym_true] = ACTIONS(325),
    [anon_sym_false] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [anon_sym_BSLASH] = ACTIONS(323),
    [anon_sym_POUND_DQUOTE] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [sym_identifier] = ACTIONS(325),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [sym_integer_literal] = ACTIONS(329),
    [sym_float_literal] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(329),
    [anon_sym_false] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_BSLASH] = ACTIONS(327),
    [anon_sym_POUND_DQUOTE] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [sym_identifier] = ACTIONS(329),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [sym_integer_literal] = ACTIONS(333),
    [sym_float_literal] = ACTIONS(331),
    [anon_sym_true] = ACTIONS(333),
    [anon_sym_false] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(331),
    [anon_sym_POUND_DQUOTE] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [sym_identifier] = ACTIONS(333),
  },
  [47] = {
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_integer_literal] = ACTIONS(337),
    [sym_float_literal] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(337),
    [anon_sym_false] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
  },
  [48] = {
    [sym_line_comment] = STATE(49),
    [sym__s_expr] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [49] = {
    [sym_line_comment] = STATE(49),
    [sym__s_expr] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(346),
  },
  [50] = {
    [aux_sym_str_literal_repeat1] = STATE(57),
    [aux_sym_str_literal_token1] = ACTIONS(349),
    [anon_sym_DQUOTE2] = ACTIONS(351),
    [sym_escape_sequence] = ACTIONS(353),
  },
  [51] = {
    [aux_sym_str_literal_repeat1] = STATE(57),
    [aux_sym_str_literal_token1] = ACTIONS(349),
    [anon_sym_DQUOTE2] = ACTIONS(355),
    [sym_escape_sequence] = ACTIONS(353),
  },
  [52] = {
    [aux_sym_str_literal_repeat1] = STATE(56),
    [aux_sym_str_literal_token1] = ACTIONS(357),
    [anon_sym_DQUOTE2] = ACTIONS(359),
    [sym_escape_sequence] = ACTIONS(361),
  },
  [53] = {
    [aux_sym_str_literal_repeat1] = STATE(50),
    [aux_sym_str_literal_token1] = ACTIONS(363),
    [anon_sym_DQUOTE2] = ACTIONS(365),
    [sym_escape_sequence] = ACTIONS(367),
  },
  [54] = {
    [aux_sym_str_literal_repeat1] = STATE(58),
    [aux_sym_str_literal_token1] = ACTIONS(369),
    [anon_sym_DQUOTE2] = ACTIONS(371),
    [sym_escape_sequence] = ACTIONS(373),
  },
  [55] = {
    [aux_sym_str_literal_repeat1] = STATE(51),
    [aux_sym_str_literal_token1] = ACTIONS(375),
    [anon_sym_DQUOTE2] = ACTIONS(377),
    [sym_escape_sequence] = ACTIONS(379),
  },
  [56] = {
    [aux_sym_str_literal_repeat1] = STATE(57),
    [aux_sym_str_literal_token1] = ACTIONS(349),
    [anon_sym_DQUOTE2] = ACTIONS(381),
    [sym_escape_sequence] = ACTIONS(353),
  },
  [57] = {
    [aux_sym_str_literal_repeat1] = STATE(57),
    [aux_sym_str_literal_token1] = ACTIONS(383),
    [anon_sym_DQUOTE2] = ACTIONS(386),
    [sym_escape_sequence] = ACTIONS(388),
  },
  [58] = {
    [aux_sym_str_literal_repeat1] = STATE(57),
    [aux_sym_str_literal_token1] = ACTIONS(349),
    [anon_sym_DQUOTE2] = ACTIONS(391),
    [sym_escape_sequence] = ACTIONS(353),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
  },
  [60] = {
    [aux_sym_parameters_repeat1] = STATE(63),
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym_identifier] = ACTIONS(397),
  },
  [61] = {
    [aux_sym_let_pairs_repeat1] = STATE(65),
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_identifier] = ACTIONS(401),
  },
  [62] = {
    [aux_sym_parameters_repeat1] = STATE(60),
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_identifier] = ACTIONS(405),
  },
  [63] = {
    [aux_sym_parameters_repeat1] = STATE(63),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_identifier] = ACTIONS(409),
  },
  [64] = {
    [aux_sym_let_pairs_repeat1] = STATE(64),
    [anon_sym_RBRACK] = ACTIONS(412),
    [sym_identifier] = ACTIONS(414),
  },
  [65] = {
    [aux_sym_let_pairs_repeat1] = STATE(64),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_identifier] = ACTIONS(401),
  },
  [66] = {
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [67] = {
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_identifier] = ACTIONS(269),
  },
  [68] = {
    [sym_parameters] = STATE(11),
    [anon_sym_LBRACK] = ACTIONS(421),
  },
  [69] = {
    [sym_let_pairs] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(423),
  },
  [70] = {
    [aux_sym_str_literal_token1] = ACTIONS(425),
    [sym_escape_sequence] = ACTIONS(427),
  },
  [71] = {
    [aux_sym_str_literal_token1] = ACTIONS(429),
    [sym_escape_sequence] = ACTIONS(431),
  },
  [72] = {
    [sym_parameters] = STATE(12),
    [anon_sym_LBRACK] = ACTIONS(421),
  },
  [73] = {
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_identifier] = ACTIONS(297),
  },
  [74] = {
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_identifier] = ACTIONS(261),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_identifier] = ACTIONS(277),
  },
  [76] = {
    [anon_sym_RBRACK] = ACTIONS(281),
    [sym_identifier] = ACTIONS(281),
  },
  [77] = {
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
  },
  [78] = {
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_identifier] = ACTIONS(289),
  },
  [79] = {
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_identifier] = ACTIONS(293),
  },
  [80] = {
    [anon_sym_RBRACK] = ACTIONS(265),
    [sym_identifier] = ACTIONS(265),
  },
  [81] = {
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_identifier] = ACTIONS(301),
  },
  [82] = {
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_identifier] = ACTIONS(273),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(433),
  },
  [84] = {
    [anon_sym_RPAREN] = ACTIONS(435),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(437),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(439),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(441),
  },
  [88] = {
    [sym_identifier] = ACTIONS(443),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(445),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(447),
  },
  [91] = {
    [sym_identifier] = ACTIONS(449),
  },
  [92] = {
    [aux_sym_line_comment_token1] = ACTIONS(451),
  },
  [93] = {
    [sym_identifier] = ACTIONS(453),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(455),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(92),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(93),
  [11] = {.count = 1, .reusable = false}, SHIFT(68),
  [13] = {.count = 1, .reusable = false}, SHIFT(91),
  [15] = {.count = 1, .reusable = false}, SHIFT(69),
  [17] = {.count = 1, .reusable = true}, SHIFT(25),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(16),
  [23] = {.count = 1, .reusable = false}, SHIFT(89),
  [25] = {.count = 1, .reusable = true}, SHIFT(89),
  [27] = {.count = 1, .reusable = false}, SHIFT(38),
  [29] = {.count = 1, .reusable = true}, SHIFT(55),
  [31] = {.count = 1, .reusable = true}, SHIFT(70),
  [33] = {.count = 1, .reusable = true}, SHIFT(53),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = false}, SHIFT(40),
  [39] = {.count = 1, .reusable = false}, SHIFT(87),
  [41] = {.count = 1, .reusable = true}, SHIFT(87),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(25),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(38),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(55),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(70),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(53),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(20),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [74] = {.count = 1, .reusable = false}, SHIFT(42),
  [76] = {.count = 1, .reusable = true}, SHIFT(42),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [80] = {.count = 1, .reusable = false}, SHIFT(4),
  [82] = {.count = 1, .reusable = true}, SHIFT(4),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(3),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(25),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(42),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(42),
  [100] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(38),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(55),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(70),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(53),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 12), SHIFT_REPEAT(20),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [117] = {.count = 1, .reusable = false}, SHIFT(6),
  [119] = {.count = 1, .reusable = true}, SHIFT(6),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [123] = {.count = 1, .reusable = false}, SHIFT(85),
  [125] = {.count = 1, .reusable = true}, SHIFT(85),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [129] = {.count = 1, .reusable = false}, SHIFT(83),
  [131] = {.count = 1, .reusable = true}, SHIFT(83),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 10),
  [135] = {.count = 1, .reusable = false}, SHIFT(86),
  [137] = {.count = 1, .reusable = true}, SHIFT(86),
  [139] = {.count = 1, .reusable = true}, SHIFT(2),
  [141] = {.count = 1, .reusable = true}, SHIFT(24),
  [143] = {.count = 1, .reusable = false}, SHIFT(66),
  [145] = {.count = 1, .reusable = true}, SHIFT(66),
  [147] = {.count = 1, .reusable = false}, SHIFT(73),
  [149] = {.count = 1, .reusable = true}, SHIFT(52),
  [151] = {.count = 1, .reusable = true}, SHIFT(71),
  [153] = {.count = 1, .reusable = true}, SHIFT(54),
  [155] = {.count = 1, .reusable = true}, SHIFT(18),
  [157] = {.count = 1, .reusable = false}, SHIFT(15),
  [159] = {.count = 1, .reusable = true}, SHIFT(15),
  [161] = {.count = 1, .reusable = false}, SHIFT(84),
  [163] = {.count = 1, .reusable = true}, SHIFT(84),
  [165] = {.count = 1, .reusable = false}, SHIFT(14),
  [167] = {.count = 1, .reusable = true}, SHIFT(14),
  [169] = {.count = 1, .reusable = false}, SHIFT(90),
  [171] = {.count = 1, .reusable = true}, SHIFT(90),
  [173] = {.count = 1, .reusable = false}, SHIFT(28),
  [175] = {.count = 1, .reusable = true}, SHIFT(28),
  [177] = {.count = 1, .reusable = true}, SHIFT(78),
  [179] = {.count = 1, .reusable = true}, SHIFT(30),
  [181] = {.count = 1, .reusable = false}, SHIFT(23),
  [183] = {.count = 1, .reusable = true}, SHIFT(23),
  [185] = {.count = 1, .reusable = true}, SHIFT(36),
  [187] = {.count = 1, .reusable = true}, SHIFT(39),
  [189] = {.count = 1, .reusable = true}, SHIFT(81),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(25),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(23),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(23),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(38),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(55),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(70),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(53),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(20),
  [217] = {.count = 1, .reusable = true}, SHIFT(74),
  [219] = {.count = 1, .reusable = false}, SHIFT(27),
  [221] = {.count = 1, .reusable = true}, SHIFT(27),
  [223] = {.count = 1, .reusable = true}, SHIFT(29),
  [225] = {.count = 1, .reusable = false}, SHIFT(19),
  [227] = {.count = 1, .reusable = true}, SHIFT(19),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(28),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(28),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(38),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(55),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(70),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(53),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(20),
  [253] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15),
  [255] = {.count = 1, .reusable = true}, SHIFT(80),
  [257] = {.count = 1, .reusable = false}, SHIFT(47),
  [259] = {.count = 1, .reusable = true}, SHIFT(47),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 14),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 14),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [307] = {.count = 1, .reusable = true}, SHIFT(88),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 16),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 16),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [317] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 19),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 19),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 13),
  [337] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 13),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [341] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [349] = {.count = 1, .reusable = false}, SHIFT(57),
  [351] = {.count = 1, .reusable = true}, SHIFT(32),
  [353] = {.count = 1, .reusable = true}, SHIFT(57),
  [355] = {.count = 1, .reusable = true}, SHIFT(31),
  [357] = {.count = 1, .reusable = false}, SHIFT(56),
  [359] = {.count = 1, .reusable = true}, SHIFT(75),
  [361] = {.count = 1, .reusable = true}, SHIFT(56),
  [363] = {.count = 1, .reusable = false}, SHIFT(50),
  [365] = {.count = 1, .reusable = true}, SHIFT(35),
  [367] = {.count = 1, .reusable = true}, SHIFT(50),
  [369] = {.count = 1, .reusable = false}, SHIFT(58),
  [371] = {.count = 1, .reusable = true}, SHIFT(77),
  [373] = {.count = 1, .reusable = true}, SHIFT(58),
  [375] = {.count = 1, .reusable = false}, SHIFT(51),
  [377] = {.count = 1, .reusable = true}, SHIFT(33),
  [379] = {.count = 1, .reusable = true}, SHIFT(51),
  [381] = {.count = 1, .reusable = true}, SHIFT(67),
  [383] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(57),
  [386] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(57),
  [391] = {.count = 1, .reusable = true}, SHIFT(82),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [395] = {.count = 1, .reusable = true}, SHIFT(44),
  [397] = {.count = 1, .reusable = true}, SHIFT(63),
  [399] = {.count = 1, .reusable = true}, SHIFT(46),
  [401] = {.count = 1, .reusable = true}, SHIFT(13),
  [403] = {.count = 1, .reusable = true}, SHIFT(43),
  [405] = {.count = 1, .reusable = true}, SHIFT(60),
  [407] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(63),
  [412] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 20),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 20), SHIFT_REPEAT(13),
  [417] = {.count = 1, .reusable = true}, SHIFT(45),
  [419] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 18),
  [421] = {.count = 1, .reusable = true}, SHIFT(62),
  [423] = {.count = 1, .reusable = true}, SHIFT(61),
  [425] = {.count = 1, .reusable = false}, SHIFT(34),
  [427] = {.count = 1, .reusable = true}, SHIFT(34),
  [429] = {.count = 1, .reusable = false}, SHIFT(76),
  [431] = {.count = 1, .reusable = true}, SHIFT(76),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 9),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 21),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 11),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 17),
  [441] = {.count = 1, .reusable = true}, SHIFT(37),
  [443] = {.count = 1, .reusable = true}, SHIFT(41),
  [445] = {.count = 1, .reusable = true}, SHIFT(79),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 8),
  [449] = {.count = 1, .reusable = true}, SHIFT(72),
  [451] = {.count = 1, .reusable = true}, SHIFT(59),
  [453] = {.count = 1, .reusable = true}, SHIFT(17),
  [455] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
