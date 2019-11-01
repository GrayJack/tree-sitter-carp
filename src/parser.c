#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 98
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  anon_sym_while = 13,
  anon_sym_DOT = 14,
  sym_integer_literal = 15,
  sym_float_literal = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_str_literal_token1 = 20,
  anon_sym_DQUOTE2 = 21,
  anon_sym_BSLASH = 22,
  anon_sym_POUND_DQUOTE = 23,
  sym_escape_sequence = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  sym_identifier = 27,
  sym_source_file = 28,
  sym_line_comment = 29,
  sym__s_expr = 30,
  sym__expr = 31,
  sym__anything = 32,
  sym__s_forms = 33,
  sym__literals = 34,
  sym_def = 35,
  sym_fn = 36,
  sym_defn = 37,
  sym_let = 38,
  sym_let_pairs = 39,
  sym_do = 40,
  sym_if = 41,
  sym_while = 42,
  sym_call_expression = 43,
  sym_call_name = 44,
  sym_parameters = 45,
  sym_bool_literal = 46,
  sym_str_literal = 47,
  sym_char_literal = 48,
  sym_pattern_literal = 49,
  sym_array_expression = 50,
  sym_map_expression = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_let_pairs_repeat1 = 53,
  aux_sym_do_repeat1 = 54,
  aux_sym_call_expression_repeat1 = 55,
  aux_sym_parameters_repeat1 = 56,
  aux_sym_str_literal_repeat1 = 57,
  aux_sym_array_expression_repeat1 = 58,
  aux_sym_map_expression_repeat1 = 59,
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
  [anon_sym_while] = "while",
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
  [sym_while] = "while",
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
  [anon_sym_while] = {
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
  [sym_while] = {
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
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 4},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 3},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 2},
  [22] = {.index = 38, .length = 4},
  [23] = {.index = 42, .length = 3},
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
    {field_condition, 1},
  [7] =
    {field_argument, 1},
    {field_call_name, 0},
  [9] =
    {field_name, 1},
    {field_value, 2},
  [11] =
    {field_body, 2},
    {field_parameters, 1},
  [13] =
    {field_name, 1},
    {field_parameters, 2},
  [15] =
    {field_body, 2},
    {field_pairs, 1},
  [17] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [19] =
    {field_body, 2},
    {field_condition, 1},
  [21] =
    {field_key, 0},
    {field_value, 1},
  [23] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [25] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [29] =
    {field_module, 0},
    {field_name, 2},
  [31] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [34] =
    {field_expr, 1},
    {field_var, 0},
  [36] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [38] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [42] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
};

static TSSymbol ts_alias_sequences[24][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(57);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(57);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(57);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_while);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 37:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(59);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(59);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(30);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 55:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 56:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(58);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(60);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(62);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(53);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(64);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 63:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(51);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
      END_STATE();
    case 66:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(66);
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
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 0},
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
    [anon_sym_while] = ACTIONS(1),
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
    [sym_source_file] = STATE(97),
    [sym_line_comment] = STATE(51),
    [sym__s_expr] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(92),
    [sym__s_expr] = STATE(92),
    [sym__anything] = STATE(92),
    [sym__s_forms] = STATE(92),
    [sym__literals] = STATE(92),
    [sym_def] = STATE(92),
    [sym_fn] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_let] = STATE(92),
    [sym_do] = STATE(92),
    [sym_if] = STATE(92),
    [sym_while] = STATE(92),
    [sym_call_expression] = STATE(92),
    [sym_call_name] = STATE(9),
    [sym_bool_literal] = STATE(92),
    [sym_str_literal] = STATE(92),
    [sym_char_literal] = STATE(92),
    [sym_pattern_literal] = STATE(92),
    [sym_array_expression] = STATE(92),
    [sym_map_expression] = STATE(92),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(23),
    [sym_integer_literal] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
  },
  [3] = {
    [sym_line_comment] = STATE(90),
    [sym__s_expr] = STATE(90),
    [sym__anything] = STATE(90),
    [sym__s_forms] = STATE(90),
    [sym__literals] = STATE(90),
    [sym_def] = STATE(90),
    [sym_fn] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_let] = STATE(90),
    [sym_do] = STATE(90),
    [sym_if] = STATE(90),
    [sym_while] = STATE(90),
    [sym_call_expression] = STATE(90),
    [sym_call_name] = STATE(9),
    [sym_bool_literal] = STATE(90),
    [sym_str_literal] = STATE(90),
    [sym_char_literal] = STATE(90),
    [sym_pattern_literal] = STATE(90),
    [sym_array_expression] = STATE(90),
    [sym_map_expression] = STATE(90),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(23),
    [sym_integer_literal] = ACTIONS(41),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
  },
  [4] = {
    [sym__s_expr] = STATE(48),
    [sym__expr] = STATE(48),
    [sym__literals] = STATE(48),
    [sym_bool_literal] = STATE(48),
    [sym_str_literal] = STATE(48),
    [sym_char_literal] = STATE(48),
    [sym_pattern_literal] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym_map_expression] = STATE(48),
    [aux_sym_do_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(50),
    [sym_integer_literal] = ACTIONS(53),
    [sym_float_literal] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_POUND_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(53),
  },
  [5] = {
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
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(76),
    [sym_float_literal] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(76),
  },
  [6] = {
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
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [sym_integer_literal] = ACTIONS(88),
    [sym_float_literal] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(94),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(100),
    [anon_sym_POUND_DQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym_identifier] = ACTIONS(88),
  },
  [7] = {
    [sym__s_expr] = STATE(48),
    [sym__expr] = STATE(48),
    [sym__literals] = STATE(48),
    [sym_bool_literal] = STATE(48),
    [sym_str_literal] = STATE(48),
    [sym_char_literal] = STATE(48),
    [sym_pattern_literal] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym_map_expression] = STATE(48),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(111),
    [sym_float_literal] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(111),
  },
  [8] = {
    [sym__s_expr] = STATE(48),
    [sym__expr] = STATE(48),
    [sym__literals] = STATE(48),
    [sym_bool_literal] = STATE(48),
    [sym_str_literal] = STATE(48),
    [sym_char_literal] = STATE(48),
    [sym_pattern_literal] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym_map_expression] = STATE(48),
    [aux_sym_do_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(111),
    [sym_float_literal] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(111),
  },
  [9] = {
    [sym__s_expr] = STATE(5),
    [sym__expr] = STATE(5),
    [sym__literals] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_pattern_literal] = STATE(5),
    [sym_array_expression] = STATE(5),
    [sym_map_expression] = STATE(5),
    [aux_sym_call_expression_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(119),
    [sym_float_literal] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(119),
  },
  [10] = {
    [sym__s_expr] = STATE(89),
    [sym__expr] = STATE(89),
    [sym__literals] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(125),
    [sym_float_literal] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(125),
  },
  [11] = {
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
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(131),
    [sym_float_literal] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(131),
  },
  [12] = {
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
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(137),
    [sym_float_literal] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(137),
  },
  [13] = {
    [sym__s_expr] = STATE(87),
    [sym__expr] = STATE(87),
    [sym__literals] = STATE(87),
    [sym_bool_literal] = STATE(87),
    [sym_str_literal] = STATE(87),
    [sym_char_literal] = STATE(87),
    [sym_pattern_literal] = STATE(87),
    [sym_array_expression] = STATE(87),
    [sym_map_expression] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(143),
    [sym_float_literal] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(143),
  },
  [14] = {
    [sym__s_expr] = STATE(93),
    [sym__expr] = STATE(93),
    [sym__literals] = STATE(93),
    [sym_bool_literal] = STATE(93),
    [sym_str_literal] = STATE(93),
    [sym_char_literal] = STATE(93),
    [sym_pattern_literal] = STATE(93),
    [sym_array_expression] = STATE(93),
    [sym_map_expression] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(147),
    [sym_float_literal] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(147),
  },
  [15] = {
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(151),
    [sym_float_literal] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(151),
  },
  [16] = {
    [sym__s_expr] = STATE(74),
    [sym__expr] = STATE(74),
    [sym__literals] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_str_literal] = STATE(74),
    [sym_char_literal] = STATE(74),
    [sym_pattern_literal] = STATE(74),
    [sym_array_expression] = STATE(74),
    [sym_map_expression] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_integer_literal] = ACTIONS(159),
    [sym_float_literal] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_BSLASH] = ACTIONS(167),
    [anon_sym_POUND_DQUOTE] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(171),
    [sym_identifier] = ACTIONS(159),
  },
  [17] = {
    [sym__s_expr] = STATE(19),
    [sym__expr] = STATE(19),
    [sym__literals] = STATE(19),
    [sym_bool_literal] = STATE(19),
    [sym_str_literal] = STATE(19),
    [sym_char_literal] = STATE(19),
    [sym_pattern_literal] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym_map_expression] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(173),
  },
  [18] = {
    [sym__s_expr] = STATE(11),
    [sym__expr] = STATE(11),
    [sym__literals] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_str_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_pattern_literal] = STATE(11),
    [sym_array_expression] = STATE(11),
    [sym_map_expression] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(177),
    [sym_float_literal] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(177),
  },
  [19] = {
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
    [sym_integer_literal] = ACTIONS(181),
    [sym_float_literal] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(181),
  },
  [20] = {
    [sym__literals] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [aux_sym_array_expression_repeat1] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(185),
    [sym_integer_literal] = ACTIONS(187),
    [sym_float_literal] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(187),
  },
  [21] = {
    [sym__literals] = STATE(30),
    [sym_bool_literal] = STATE(30),
    [sym_str_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_pattern_literal] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_map_expression] = STATE(30),
    [aux_sym_map_expression_repeat1] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(194),
    [sym_float_literal] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(200),
    [anon_sym_false] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_BSLASH] = ACTIONS(206),
    [anon_sym_POUND_DQUOTE] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(215),
    [sym_identifier] = ACTIONS(194),
  },
  [22] = {
    [sym__literals] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [aux_sym_array_expression_repeat1] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(220),
    [sym_integer_literal] = ACTIONS(222),
    [sym_float_literal] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(228),
    [anon_sym_false] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [anon_sym_BSLASH] = ACTIONS(234),
    [anon_sym_POUND_DQUOTE] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(240),
    [sym_identifier] = ACTIONS(222),
  },
  [23] = {
    [sym__literals] = STATE(30),
    [sym_bool_literal] = STATE(30),
    [sym_str_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_pattern_literal] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_map_expression] = STATE(30),
    [aux_sym_map_expression_repeat1] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(247),
    [sym_identifier] = ACTIONS(243),
  },
  [24] = {
    [sym__literals] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [aux_sym_array_expression_repeat1] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym_integer_literal] = ACTIONS(187),
    [sym_float_literal] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(187),
  },
  [25] = {
    [sym__literals] = STATE(30),
    [sym_bool_literal] = STATE(30),
    [sym_str_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_pattern_literal] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_map_expression] = STATE(30),
    [aux_sym_map_expression_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_identifier] = ACTIONS(243),
  },
  [26] = {
    [sym__literals] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_char_literal] = STATE(20),
    [sym_pattern_literal] = STATE(20),
    [sym_array_expression] = STATE(20),
    [sym_map_expression] = STATE(20),
    [aux_sym_array_expression_repeat1] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym_integer_literal] = ACTIONS(255),
    [sym_float_literal] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(255),
  },
  [27] = {
    [sym__literals] = STATE(24),
    [sym_bool_literal] = STATE(24),
    [sym_str_literal] = STATE(24),
    [sym_char_literal] = STATE(24),
    [sym_pattern_literal] = STATE(24),
    [sym_array_expression] = STATE(24),
    [sym_map_expression] = STATE(24),
    [aux_sym_array_expression_repeat1] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(259),
    [sym_integer_literal] = ACTIONS(261),
    [sym_float_literal] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(261),
  },
  [28] = {
    [sym__literals] = STATE(30),
    [sym_bool_literal] = STATE(30),
    [sym_str_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_pattern_literal] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_map_expression] = STATE(30),
    [aux_sym_map_expression_repeat1] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(265),
    [sym_identifier] = ACTIONS(243),
  },
  [29] = {
    [sym__literals] = STATE(30),
    [sym_bool_literal] = STATE(30),
    [sym_str_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_pattern_literal] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_map_expression] = STATE(30),
    [aux_sym_map_expression_repeat1] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(267),
    [sym_identifier] = ACTIONS(243),
  },
  [30] = {
    [sym__literals] = STATE(49),
    [sym_bool_literal] = STATE(49),
    [sym_str_literal] = STATE(49),
    [sym_char_literal] = STATE(49),
    [sym_pattern_literal] = STATE(49),
    [sym_array_expression] = STATE(49),
    [sym_map_expression] = STATE(49),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(269),
    [sym_float_literal] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(269),
  },
  [31] = {
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
  [32] = {
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
  [33] = {
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
  [34] = {
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
  [35] = {
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
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_integer_literal] = ACTIONS(295),
    [sym_float_literal] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_BSLASH] = ACTIONS(293),
    [anon_sym_POUND_DQUOTE] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [sym_identifier] = ACTIONS(295),
  },
  [37] = {
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
  [38] = {
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
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [sym_integer_literal] = ACTIONS(307),
    [sym_float_literal] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [sym_identifier] = ACTIONS(307),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym_integer_literal] = ACTIONS(311),
    [sym_float_literal] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(311),
    [anon_sym_false] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_POUND_DQUOTE] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [sym_identifier] = ACTIONS(311),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
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
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(319),
    [sym_integer_literal] = ACTIONS(321),
    [sym_float_literal] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(321),
    [anon_sym_false] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_BSLASH] = ACTIONS(317),
    [anon_sym_POUND_DQUOTE] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_identifier] = ACTIONS(321),
  },
  [43] = {
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
  [44] = {
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
  [45] = {
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
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_integer_literal] = ACTIONS(337),
    [sym_float_literal] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(337),
    [anon_sym_false] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [sym_integer_literal] = ACTIONS(341),
    [sym_float_literal] = ACTIONS(339),
    [anon_sym_true] = ACTIONS(341),
    [anon_sym_false] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_POUND_DQUOTE] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [sym_identifier] = ACTIONS(341),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [sym_integer_literal] = ACTIONS(345),
    [sym_float_literal] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(345),
    [anon_sym_false] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_BSLASH] = ACTIONS(343),
    [anon_sym_POUND_DQUOTE] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [sym_identifier] = ACTIONS(345),
  },
  [49] = {
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym_integer_literal] = ACTIONS(349),
    [sym_float_literal] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(349),
    [anon_sym_false] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [anon_sym_BSLASH] = ACTIONS(347),
    [anon_sym_POUND_DQUOTE] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
    [sym_identifier] = ACTIONS(349),
  },
  [50] = {
    [sym_line_comment] = STATE(50),
    [sym__s_expr] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(356),
  },
  [51] = {
    [sym_line_comment] = STATE(50),
    [sym__s_expr] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [52] = {
    [aux_sym_str_literal_repeat1] = STATE(57),
    [aux_sym_str_literal_token1] = ACTIONS(361),
    [anon_sym_DQUOTE2] = ACTIONS(363),
    [sym_escape_sequence] = ACTIONS(365),
  },
  [53] = {
    [aux_sym_str_literal_repeat1] = STATE(56),
    [aux_sym_str_literal_token1] = ACTIONS(367),
    [anon_sym_DQUOTE2] = ACTIONS(369),
    [sym_escape_sequence] = ACTIONS(371),
  },
  [54] = {
    [aux_sym_str_literal_repeat1] = STATE(55),
    [aux_sym_str_literal_token1] = ACTIONS(373),
    [anon_sym_DQUOTE2] = ACTIONS(375),
    [sym_escape_sequence] = ACTIONS(377),
  },
  [55] = {
    [aux_sym_str_literal_repeat1] = STATE(60),
    [aux_sym_str_literal_token1] = ACTIONS(379),
    [anon_sym_DQUOTE2] = ACTIONS(381),
    [sym_escape_sequence] = ACTIONS(383),
  },
  [56] = {
    [aux_sym_str_literal_repeat1] = STATE(60),
    [aux_sym_str_literal_token1] = ACTIONS(379),
    [anon_sym_DQUOTE2] = ACTIONS(385),
    [sym_escape_sequence] = ACTIONS(383),
  },
  [57] = {
    [aux_sym_str_literal_repeat1] = STATE(60),
    [aux_sym_str_literal_token1] = ACTIONS(379),
    [anon_sym_DQUOTE2] = ACTIONS(387),
    [sym_escape_sequence] = ACTIONS(383),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
  },
  [59] = {
    [aux_sym_str_literal_repeat1] = STATE(60),
    [aux_sym_str_literal_token1] = ACTIONS(379),
    [anon_sym_DQUOTE2] = ACTIONS(391),
    [sym_escape_sequence] = ACTIONS(383),
  },
  [60] = {
    [aux_sym_str_literal_repeat1] = STATE(60),
    [aux_sym_str_literal_token1] = ACTIONS(393),
    [anon_sym_DQUOTE2] = ACTIONS(396),
    [sym_escape_sequence] = ACTIONS(398),
  },
  [61] = {
    [aux_sym_str_literal_repeat1] = STATE(59),
    [aux_sym_str_literal_token1] = ACTIONS(401),
    [anon_sym_DQUOTE2] = ACTIONS(403),
    [sym_escape_sequence] = ACTIONS(405),
  },
  [62] = {
    [aux_sym_parameters_repeat1] = STATE(67),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_identifier] = ACTIONS(409),
  },
  [63] = {
    [aux_sym_let_pairs_repeat1] = STATE(65),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_identifier] = ACTIONS(413),
  },
  [64] = {
    [aux_sym_parameters_repeat1] = STATE(62),
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym_identifier] = ACTIONS(417),
  },
  [65] = {
    [aux_sym_let_pairs_repeat1] = STATE(66),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_identifier] = ACTIONS(413),
  },
  [66] = {
    [aux_sym_let_pairs_repeat1] = STATE(66),
    [anon_sym_RBRACK] = ACTIONS(421),
    [sym_identifier] = ACTIONS(423),
  },
  [67] = {
    [aux_sym_parameters_repeat1] = STATE(67),
    [anon_sym_RBRACK] = ACTIONS(426),
    [sym_identifier] = ACTIONS(428),
  },
  [68] = {
    [sym_parameters] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(431),
  },
  [69] = {
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_identifier] = ACTIONS(277),
  },
  [70] = {
    [sym_parameters] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(431),
  },
  [71] = {
    [sym_let_pairs] = STATE(12),
    [anon_sym_LBRACK] = ACTIONS(433),
  },
  [72] = {
    [aux_sym_str_literal_token1] = ACTIONS(435),
    [sym_escape_sequence] = ACTIONS(437),
  },
  [73] = {
    [aux_sym_str_literal_token1] = ACTIONS(439),
    [sym_escape_sequence] = ACTIONS(441),
  },
  [74] = {
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_identifier] = ACTIONS(443),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(281),
    [sym_identifier] = ACTIONS(281),
  },
  [76] = {
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_identifier] = ACTIONS(289),
  },
  [77] = {
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym_identifier] = ACTIONS(309),
  },
  [78] = {
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_identifier] = ACTIONS(293),
  },
  [79] = {
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_identifier] = ACTIONS(301),
  },
  [80] = {
    [anon_sym_RBRACK] = ACTIONS(305),
    [sym_identifier] = ACTIONS(305),
  },
  [81] = {
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_identifier] = ACTIONS(273),
  },
  [82] = {
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym_identifier] = ACTIONS(313),
  },
  [83] = {
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
  },
  [84] = {
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_identifier] = ACTIONS(297),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(445),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(447),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(449),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(451),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(453),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(455),
  },
  [91] = {
    [sym_identifier] = ACTIONS(457),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(459),
  },
  [93] = {
    [anon_sym_RPAREN] = ACTIONS(461),
  },
  [94] = {
    [sym_identifier] = ACTIONS(463),
  },
  [95] = {
    [aux_sym_line_comment_token1] = ACTIONS(465),
  },
  [96] = {
    [sym_identifier] = ACTIONS(467),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(469),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(95),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(96),
  [11] = {.count = 1, .reusable = false}, SHIFT(70),
  [13] = {.count = 1, .reusable = false}, SHIFT(94),
  [15] = {.count = 1, .reusable = false}, SHIFT(71),
  [17] = {.count = 1, .reusable = true}, SHIFT(26),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(17),
  [23] = {.count = 1, .reusable = false}, SHIFT(18),
  [25] = {.count = 1, .reusable = false}, SHIFT(92),
  [27] = {.count = 1, .reusable = true}, SHIFT(92),
  [29] = {.count = 1, .reusable = false}, SHIFT(35),
  [31] = {.count = 1, .reusable = true}, SHIFT(61),
  [33] = {.count = 1, .reusable = true}, SHIFT(72),
  [35] = {.count = 1, .reusable = true}, SHIFT(52),
  [37] = {.count = 1, .reusable = true}, SHIFT(23),
  [39] = {.count = 1, .reusable = false}, SHIFT(42),
  [41] = {.count = 1, .reusable = false}, SHIFT(90),
  [43] = {.count = 1, .reusable = true}, SHIFT(90),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(3),
  [48] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(26),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(48),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(48),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(35),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(61),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(72),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(52),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 13), SHIFT_REPEAT(23),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [76] = {.count = 1, .reusable = false}, SHIFT(6),
  [78] = {.count = 1, .reusable = true}, SHIFT(6),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(26),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(6),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(6),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(35),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(61),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(72),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(52),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(23),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [111] = {.count = 1, .reusable = false}, SHIFT(48),
  [113] = {.count = 1, .reusable = true}, SHIFT(48),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [119] = {.count = 1, .reusable = false}, SHIFT(5),
  [121] = {.count = 1, .reusable = true}, SHIFT(5),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 11),
  [125] = {.count = 1, .reusable = false}, SHIFT(89),
  [127] = {.count = 1, .reusable = true}, SHIFT(89),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [131] = {.count = 1, .reusable = false}, SHIFT(88),
  [133] = {.count = 1, .reusable = true}, SHIFT(88),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [137] = {.count = 1, .reusable = false}, SHIFT(85),
  [139] = {.count = 1, .reusable = true}, SHIFT(85),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [143] = {.count = 1, .reusable = false}, SHIFT(87),
  [145] = {.count = 1, .reusable = true}, SHIFT(87),
  [147] = {.count = 1, .reusable = false}, SHIFT(93),
  [149] = {.count = 1, .reusable = true}, SHIFT(93),
  [151] = {.count = 1, .reusable = false}, SHIFT(86),
  [153] = {.count = 1, .reusable = true}, SHIFT(86),
  [155] = {.count = 1, .reusable = true}, SHIFT(2),
  [157] = {.count = 1, .reusable = true}, SHIFT(27),
  [159] = {.count = 1, .reusable = false}, SHIFT(74),
  [161] = {.count = 1, .reusable = true}, SHIFT(74),
  [163] = {.count = 1, .reusable = false}, SHIFT(76),
  [165] = {.count = 1, .reusable = true}, SHIFT(54),
  [167] = {.count = 1, .reusable = true}, SHIFT(73),
  [169] = {.count = 1, .reusable = true}, SHIFT(53),
  [171] = {.count = 1, .reusable = true}, SHIFT(25),
  [173] = {.count = 1, .reusable = false}, SHIFT(19),
  [175] = {.count = 1, .reusable = true}, SHIFT(19),
  [177] = {.count = 1, .reusable = false}, SHIFT(11),
  [179] = {.count = 1, .reusable = true}, SHIFT(11),
  [181] = {.count = 1, .reusable = false}, SHIFT(15),
  [183] = {.count = 1, .reusable = true}, SHIFT(15),
  [185] = {.count = 1, .reusable = true}, SHIFT(32),
  [187] = {.count = 1, .reusable = false}, SHIFT(22),
  [189] = {.count = 1, .reusable = true}, SHIFT(22),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(26),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(30),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(30),
  [200] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(35),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(61),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(72),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(52),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(23),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(26),
  [220] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(22),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(22),
  [228] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(35),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(61),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(72),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(52),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(23),
  [243] = {.count = 1, .reusable = false}, SHIFT(30),
  [245] = {.count = 1, .reusable = true}, SHIFT(30),
  [247] = {.count = 1, .reusable = true}, SHIFT(31),
  [249] = {.count = 1, .reusable = true}, SHIFT(69),
  [251] = {.count = 1, .reusable = true}, SHIFT(81),
  [253] = {.count = 1, .reusable = true}, SHIFT(40),
  [255] = {.count = 1, .reusable = false}, SHIFT(20),
  [257] = {.count = 1, .reusable = true}, SHIFT(20),
  [259] = {.count = 1, .reusable = true}, SHIFT(77),
  [261] = {.count = 1, .reusable = false}, SHIFT(24),
  [263] = {.count = 1, .reusable = true}, SHIFT(24),
  [265] = {.count = 1, .reusable = true}, SHIFT(33),
  [267] = {.count = 1, .reusable = true}, SHIFT(75),
  [269] = {.count = 1, .reusable = false}, SHIFT(49),
  [271] = {.count = 1, .reusable = true}, SHIFT(49),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 16),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 16),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [319] = {.count = 1, .reusable = true}, SHIFT(91),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 21),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 21),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 18),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 18),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [343] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [345] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [347] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15),
  [349] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 15),
  [351] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [361] = {.count = 1, .reusable = false}, SHIFT(57),
  [363] = {.count = 1, .reusable = true}, SHIFT(39),
  [365] = {.count = 1, .reusable = true}, SHIFT(57),
  [367] = {.count = 1, .reusable = false}, SHIFT(56),
  [369] = {.count = 1, .reusable = true}, SHIFT(80),
  [371] = {.count = 1, .reusable = true}, SHIFT(56),
  [373] = {.count = 1, .reusable = false}, SHIFT(55),
  [375] = {.count = 1, .reusable = true}, SHIFT(78),
  [377] = {.count = 1, .reusable = true}, SHIFT(55),
  [379] = {.count = 1, .reusable = false}, SHIFT(60),
  [381] = {.count = 1, .reusable = true}, SHIFT(84),
  [383] = {.count = 1, .reusable = true}, SHIFT(60),
  [385] = {.count = 1, .reusable = true}, SHIFT(83),
  [387] = {.count = 1, .reusable = true}, SHIFT(34),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [391] = {.count = 1, .reusable = true}, SHIFT(37),
  [393] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(60),
  [396] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(60),
  [401] = {.count = 1, .reusable = false}, SHIFT(59),
  [403] = {.count = 1, .reusable = true}, SHIFT(36),
  [405] = {.count = 1, .reusable = true}, SHIFT(59),
  [407] = {.count = 1, .reusable = true}, SHIFT(43),
  [409] = {.count = 1, .reusable = true}, SHIFT(67),
  [411] = {.count = 1, .reusable = true}, SHIFT(47),
  [413] = {.count = 1, .reusable = true}, SHIFT(16),
  [415] = {.count = 1, .reusable = true}, SHIFT(46),
  [417] = {.count = 1, .reusable = true}, SHIFT(62),
  [419] = {.count = 1, .reusable = true}, SHIFT(44),
  [421] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 22),
  [423] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 22), SHIFT_REPEAT(16),
  [426] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(67),
  [431] = {.count = 1, .reusable = true}, SHIFT(64),
  [433] = {.count = 1, .reusable = true}, SHIFT(63),
  [435] = {.count = 1, .reusable = false}, SHIFT(38),
  [437] = {.count = 1, .reusable = true}, SHIFT(38),
  [439] = {.count = 1, .reusable = false}, SHIFT(79),
  [441] = {.count = 1, .reusable = true}, SHIFT(79),
  [443] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 20),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 12),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 23),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 10),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 14),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 19),
  [455] = {.count = 1, .reusable = true}, SHIFT(41),
  [457] = {.count = 1, .reusable = true}, SHIFT(45),
  [459] = {.count = 1, .reusable = true}, SHIFT(82),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 9),
  [463] = {.count = 1, .reusable = true}, SHIFT(68),
  [465] = {.count = 1, .reusable = true}, SHIFT(58),
  [467] = {.count = 1, .reusable = true}, SHIFT(14),
  [469] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
