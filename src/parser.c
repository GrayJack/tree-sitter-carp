#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 118
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
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
  anon_sym_ref = 14,
  anon_sym_address = 15,
  anon_sym_set_BANG = 16,
  anon_sym_DOT = 17,
  anon_sym_AMP = 18,
  anon_sym_AT = 19,
  anon_sym_TILDE = 20,
  sym_integer_literal = 21,
  sym_float_literal = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_str_literal_token1 = 26,
  anon_sym_DQUOTE2 = 27,
  anon_sym_BSLASH = 28,
  anon_sym_POUND_DQUOTE = 29,
  sym_escape_sequence = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  sym_identifier = 33,
  sym_source_file = 34,
  sym_line_comment = 35,
  sym__s_expr = 36,
  sym__expr = 37,
  sym__anything = 38,
  sym__s_forms = 39,
  sym__literals = 40,
  sym__short_helper = 41,
  sym_def = 42,
  sym_fn = 43,
  sym_defn = 44,
  sym_let = 45,
  sym_let_pairs = 46,
  sym_do = 47,
  sym_if = 48,
  sym_while = 49,
  sym_ref = 50,
  sym_address = 51,
  sym_set = 52,
  sym_call_expression = 53,
  sym_call_name = 54,
  sym_short_ref = 55,
  sym_short_copy = 56,
  sym_short_fn_ref = 57,
  sym_parameters = 58,
  sym_bool_literal = 59,
  sym_str_literal = 60,
  sym_char_literal = 61,
  sym_pattern_literal = 62,
  sym_array_expression = 63,
  sym_map_expression = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_let_pairs_repeat1 = 66,
  aux_sym_do_repeat1 = 67,
  aux_sym_call_expression_repeat1 = 68,
  aux_sym_parameters_repeat1 = 69,
  aux_sym_str_literal_repeat1 = 70,
  aux_sym_array_expression_repeat1 = 71,
  aux_sym_map_expression_repeat1 = 72,
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
  [anon_sym_ref] = "ref",
  [anon_sym_address] = "address",
  [anon_sym_set_BANG] = "set!",
  [anon_sym_DOT] = ".",
  [anon_sym_AMP] = "&",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
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
  [sym__short_helper] = "_short_helper",
  [sym_def] = "def",
  [sym_fn] = "fn",
  [sym_defn] = "defn",
  [sym_let] = "let",
  [sym_let_pairs] = "let_pairs",
  [sym_do] = "do",
  [sym_if] = "if",
  [sym_while] = "while",
  [sym_ref] = "ref",
  [sym_address] = "address",
  [sym_set] = "set",
  [sym_call_expression] = "call_expression",
  [sym_call_name] = "call_name",
  [sym_short_ref] = "short_ref",
  [sym_short_copy] = "short_copy",
  [sym_short_fn_ref] = "short_fn_ref",
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
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [sym__short_helper] = {
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
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
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
  [sym_short_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_short_copy] = {
    .visible = true,
    .named = true,
  },
  [sym_short_fn_ref] = {
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
  field_variable = 15,
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
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 2},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 4},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 3},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 4},
  [25] = {.index = 45, .length = 3},
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
    {field_expr, 1},
  [8] =
    {field_argument, 1},
    {field_call_name, 0},
  [10] =
    {field_name, 1},
    {field_value, 2},
  [12] =
    {field_body, 2},
    {field_parameters, 1},
  [14] =
    {field_name, 1},
    {field_parameters, 2},
  [16] =
    {field_body, 2},
    {field_pairs, 1},
  [18] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [20] =
    {field_body, 2},
    {field_condition, 1},
  [22] =
    {field_expr, 2},
    {field_variable, 1},
  [24] =
    {field_key, 0},
    {field_value, 1},
  [26] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [28] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_module, 0},
    {field_name, 2},
  [34] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [37] =
    {field_expr, 1},
    {field_var, 0},
  [39] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [41] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [45] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
};

static TSSymbol ts_alias_sequences[26][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_ref);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_address);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_set_BANG);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 43:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '%' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(58);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(75);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 62:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 67:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 68:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(31);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(71);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(78);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 73:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(32);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(76);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 79:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(60);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
      END_STATE();
    case 83:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(83);
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
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
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
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_set_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
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
    [sym_source_file] = STATE(117),
    [sym_line_comment] = STATE(63),
    [sym__s_expr] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(112),
    [sym__s_expr] = STATE(112),
    [sym__anything] = STATE(112),
    [sym__s_forms] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__short_helper] = STATE(112),
    [sym_def] = STATE(112),
    [sym_fn] = STATE(112),
    [sym_defn] = STATE(112),
    [sym_let] = STATE(112),
    [sym_do] = STATE(112),
    [sym_if] = STATE(112),
    [sym_while] = STATE(112),
    [sym_ref] = STATE(112),
    [sym_address] = STATE(112),
    [sym_set] = STATE(112),
    [sym_call_expression] = STATE(112),
    [sym_call_name] = STATE(9),
    [sym_short_ref] = STATE(112),
    [sym_short_copy] = STATE(112),
    [sym_short_fn_ref] = STATE(52),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
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
    [anon_sym_ref] = ACTIONS(25),
    [anon_sym_address] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
  },
  [3] = {
    [sym_line_comment] = STATE(108),
    [sym__s_expr] = STATE(108),
    [sym__anything] = STATE(108),
    [sym__s_forms] = STATE(108),
    [sym__literals] = STATE(108),
    [sym__short_helper] = STATE(108),
    [sym_def] = STATE(108),
    [sym_fn] = STATE(108),
    [sym_defn] = STATE(108),
    [sym_let] = STATE(108),
    [sym_do] = STATE(108),
    [sym_if] = STATE(108),
    [sym_while] = STATE(108),
    [sym_ref] = STATE(108),
    [sym_address] = STATE(108),
    [sym_set] = STATE(108),
    [sym_call_expression] = STATE(108),
    [sym_call_name] = STATE(9),
    [sym_short_ref] = STATE(108),
    [sym_short_copy] = STATE(108),
    [sym_short_fn_ref] = STATE(52),
    [sym_bool_literal] = STATE(108),
    [sym_str_literal] = STATE(108),
    [sym_char_literal] = STATE(108),
    [sym_pattern_literal] = STATE(108),
    [sym_array_expression] = STATE(108),
    [sym_map_expression] = STATE(108),
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
    [anon_sym_ref] = ACTIONS(25),
    [anon_sym_address] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(53),
    [sym_float_literal] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
  },
  [4] = {
    [sym__s_expr] = STATE(4),
    [sym__expr] = STATE(4),
    [sym__literals] = STATE(4),
    [sym__short_helper] = STATE(4),
    [sym_short_ref] = STATE(4),
    [sym_short_copy] = STATE(4),
    [sym_short_fn_ref] = STATE(4),
    [sym_bool_literal] = STATE(4),
    [sym_str_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [sym_pattern_literal] = STATE(4),
    [sym_array_expression] = STATE(4),
    [sym_map_expression] = STATE(4),
    [aux_sym_call_expression_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(71),
    [sym_integer_literal] = ACTIONS(74),
    [sym_float_literal] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(86),
    [anon_sym_POUND_DQUOTE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(92),
    [sym_identifier] = ACTIONS(74),
  },
  [5] = {
    [sym__s_expr] = STATE(4),
    [sym__expr] = STATE(4),
    [sym__literals] = STATE(4),
    [sym__short_helper] = STATE(4),
    [sym_short_ref] = STATE(4),
    [sym_short_copy] = STATE(4),
    [sym_short_fn_ref] = STATE(4),
    [sym_bool_literal] = STATE(4),
    [sym_str_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [sym_pattern_literal] = STATE(4),
    [sym_array_expression] = STATE(4),
    [sym_map_expression] = STATE(4),
    [aux_sym_call_expression_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(97),
    [sym_float_literal] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(97),
  },
  [6] = {
    [sym__s_expr] = STATE(61),
    [sym__expr] = STATE(61),
    [sym__literals] = STATE(61),
    [sym__short_helper] = STATE(61),
    [sym_short_ref] = STATE(61),
    [sym_short_copy] = STATE(61),
    [sym_short_fn_ref] = STATE(61),
    [sym_bool_literal] = STATE(61),
    [sym_str_literal] = STATE(61),
    [sym_char_literal] = STATE(61),
    [sym_pattern_literal] = STATE(61),
    [sym_array_expression] = STATE(61),
    [sym_map_expression] = STATE(61),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(103),
    [sym_float_literal] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(103),
  },
  [7] = {
    [sym__s_expr] = STATE(61),
    [sym__expr] = STATE(61),
    [sym__literals] = STATE(61),
    [sym__short_helper] = STATE(61),
    [sym_short_ref] = STATE(61),
    [sym_short_copy] = STATE(61),
    [sym_short_fn_ref] = STATE(61),
    [sym_bool_literal] = STATE(61),
    [sym_str_literal] = STATE(61),
    [sym_char_literal] = STATE(61),
    [sym_pattern_literal] = STATE(61),
    [sym_array_expression] = STATE(61),
    [sym_map_expression] = STATE(61),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(121),
    [sym_integer_literal] = ACTIONS(124),
    [sym_float_literal] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(130),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_POUND_DQUOTE] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(142),
    [sym_identifier] = ACTIONS(124),
  },
  [8] = {
    [sym__s_expr] = STATE(61),
    [sym__expr] = STATE(61),
    [sym__literals] = STATE(61),
    [sym__short_helper] = STATE(61),
    [sym_short_ref] = STATE(61),
    [sym_short_copy] = STATE(61),
    [sym_short_fn_ref] = STATE(61),
    [sym_bool_literal] = STATE(61),
    [sym_str_literal] = STATE(61),
    [sym_char_literal] = STATE(61),
    [sym_pattern_literal] = STATE(61),
    [sym_array_expression] = STATE(61),
    [sym_map_expression] = STATE(61),
    [aux_sym_do_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(103),
    [sym_float_literal] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(103),
  },
  [9] = {
    [sym__s_expr] = STATE(5),
    [sym__expr] = STATE(5),
    [sym__literals] = STATE(5),
    [sym__short_helper] = STATE(5),
    [sym_short_ref] = STATE(5),
    [sym_short_copy] = STATE(5),
    [sym_short_fn_ref] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_pattern_literal] = STATE(5),
    [sym_array_expression] = STATE(5),
    [sym_map_expression] = STATE(5),
    [aux_sym_call_expression_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(149),
    [sym_float_literal] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(149),
  },
  [10] = {
    [sym__s_expr] = STATE(107),
    [sym__expr] = STATE(107),
    [sym__literals] = STATE(107),
    [sym__short_helper] = STATE(107),
    [sym_short_ref] = STATE(107),
    [sym_short_copy] = STATE(107),
    [sym_short_fn_ref] = STATE(107),
    [sym_bool_literal] = STATE(107),
    [sym_str_literal] = STATE(107),
    [sym_char_literal] = STATE(107),
    [sym_pattern_literal] = STATE(107),
    [sym_array_expression] = STATE(107),
    [sym_map_expression] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(155),
    [sym_float_literal] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(155),
  },
  [11] = {
    [sym__s_expr] = STATE(101),
    [sym__expr] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__short_helper] = STATE(101),
    [sym_short_ref] = STATE(101),
    [sym_short_copy] = STATE(101),
    [sym_short_fn_ref] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(161),
    [sym_float_literal] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(161),
  },
  [12] = {
    [sym__s_expr] = STATE(110),
    [sym__expr] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__short_helper] = STATE(110),
    [sym_short_ref] = STATE(110),
    [sym_short_copy] = STATE(110),
    [sym_short_fn_ref] = STATE(110),
    [sym_bool_literal] = STATE(110),
    [sym_str_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_pattern_literal] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_map_expression] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(167),
    [sym_float_literal] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(167),
  },
  [13] = {
    [sym__s_expr] = STATE(115),
    [sym__expr] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__short_helper] = STATE(115),
    [sym_short_ref] = STATE(115),
    [sym_short_copy] = STATE(115),
    [sym_short_fn_ref] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_char_literal] = STATE(115),
    [sym_pattern_literal] = STATE(115),
    [sym_array_expression] = STATE(115),
    [sym_map_expression] = STATE(115),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(173),
  },
  [14] = {
    [sym__s_expr] = STATE(81),
    [sym__expr] = STATE(81),
    [sym__literals] = STATE(81),
    [sym__short_helper] = STATE(81),
    [sym_short_ref] = STATE(81),
    [sym_short_copy] = STATE(81),
    [sym_short_fn_ref] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(185),
    [sym_integer_literal] = ACTIONS(187),
    [sym_float_literal] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_BSLASH] = ACTIONS(195),
    [anon_sym_POUND_DQUOTE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_identifier] = ACTIONS(187),
  },
  [15] = {
    [sym__s_expr] = STATE(23),
    [sym__expr] = STATE(23),
    [sym__literals] = STATE(23),
    [sym__short_helper] = STATE(23),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym_str_literal] = STATE(23),
    [sym_char_literal] = STATE(23),
    [sym_pattern_literal] = STATE(23),
    [sym_array_expression] = STATE(23),
    [sym_map_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(201),
    [sym_float_literal] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(201),
  },
  [16] = {
    [sym__s_expr] = STATE(113),
    [sym__expr] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__short_helper] = STATE(113),
    [sym_short_ref] = STATE(113),
    [sym_short_copy] = STATE(113),
    [sym_short_fn_ref] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_char_literal] = STATE(113),
    [sym_pattern_literal] = STATE(113),
    [sym_array_expression] = STATE(113),
    [sym_map_expression] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(205),
    [sym_float_literal] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(205),
  },
  [17] = {
    [sym__s_expr] = STATE(105),
    [sym__expr] = STATE(105),
    [sym__literals] = STATE(105),
    [sym__short_helper] = STATE(105),
    [sym_short_ref] = STATE(105),
    [sym_short_copy] = STATE(105),
    [sym_short_fn_ref] = STATE(105),
    [sym_bool_literal] = STATE(105),
    [sym_str_literal] = STATE(105),
    [sym_char_literal] = STATE(105),
    [sym_pattern_literal] = STATE(105),
    [sym_array_expression] = STATE(105),
    [sym_map_expression] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(209),
    [sym_float_literal] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(209),
  },
  [18] = {
    [sym__s_expr] = STATE(54),
    [sym__expr] = STATE(54),
    [sym__literals] = STATE(54),
    [sym__short_helper] = STATE(54),
    [sym_short_ref] = STATE(54),
    [sym_short_copy] = STATE(54),
    [sym_short_fn_ref] = STATE(54),
    [sym_bool_literal] = STATE(54),
    [sym_str_literal] = STATE(54),
    [sym_char_literal] = STATE(54),
    [sym_pattern_literal] = STATE(54),
    [sym_array_expression] = STATE(54),
    [sym_map_expression] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(213),
    [sym_float_literal] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(213),
  },
  [19] = {
    [sym__s_expr] = STATE(55),
    [sym__expr] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__short_helper] = STATE(55),
    [sym_short_ref] = STATE(55),
    [sym_short_copy] = STATE(55),
    [sym_short_fn_ref] = STATE(55),
    [sym_bool_literal] = STATE(55),
    [sym_str_literal] = STATE(55),
    [sym_char_literal] = STATE(55),
    [sym_pattern_literal] = STATE(55),
    [sym_array_expression] = STATE(55),
    [sym_map_expression] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(217),
    [sym_float_literal] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(217),
  },
  [20] = {
    [sym__s_expr] = STATE(56),
    [sym__expr] = STATE(56),
    [sym__literals] = STATE(56),
    [sym__short_helper] = STATE(56),
    [sym_short_ref] = STATE(56),
    [sym_short_copy] = STATE(56),
    [sym_short_fn_ref] = STATE(56),
    [sym_bool_literal] = STATE(56),
    [sym_str_literal] = STATE(56),
    [sym_char_literal] = STATE(56),
    [sym_pattern_literal] = STATE(56),
    [sym_array_expression] = STATE(56),
    [sym_map_expression] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(221),
    [sym_float_literal] = ACTIONS(223),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(221),
  },
  [21] = {
    [sym__s_expr] = STATE(109),
    [sym__expr] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__short_helper] = STATE(109),
    [sym_short_ref] = STATE(109),
    [sym_short_copy] = STATE(109),
    [sym_short_fn_ref] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(225),
    [sym_float_literal] = ACTIONS(227),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(225),
  },
  [22] = {
    [sym__s_expr] = STATE(94),
    [sym__expr] = STATE(94),
    [sym__literals] = STATE(94),
    [sym__short_helper] = STATE(94),
    [sym_short_ref] = STATE(94),
    [sym_short_copy] = STATE(94),
    [sym_short_fn_ref] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(185),
    [sym_integer_literal] = ACTIONS(229),
    [sym_float_literal] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_BSLASH] = ACTIONS(195),
    [anon_sym_POUND_DQUOTE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_identifier] = ACTIONS(229),
  },
  [23] = {
    [sym__s_expr] = STATE(27),
    [sym__expr] = STATE(27),
    [sym__literals] = STATE(27),
    [sym__short_helper] = STATE(27),
    [sym_short_ref] = STATE(27),
    [sym_short_copy] = STATE(27),
    [sym_short_fn_ref] = STATE(27),
    [sym_bool_literal] = STATE(27),
    [sym_str_literal] = STATE(27),
    [sym_char_literal] = STATE(27),
    [sym_pattern_literal] = STATE(27),
    [sym_array_expression] = STATE(27),
    [sym_map_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(233),
    [sym_float_literal] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(233),
  },
  [24] = {
    [sym__s_expr] = STATE(93),
    [sym__expr] = STATE(93),
    [sym__literals] = STATE(93),
    [sym__short_helper] = STATE(93),
    [sym_short_ref] = STATE(93),
    [sym_short_copy] = STATE(93),
    [sym_short_fn_ref] = STATE(93),
    [sym_bool_literal] = STATE(93),
    [sym_str_literal] = STATE(93),
    [sym_char_literal] = STATE(93),
    [sym_pattern_literal] = STATE(93),
    [sym_array_expression] = STATE(93),
    [sym_map_expression] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(185),
    [sym_integer_literal] = ACTIONS(237),
    [sym_float_literal] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_BSLASH] = ACTIONS(195),
    [anon_sym_POUND_DQUOTE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_identifier] = ACTIONS(237),
  },
  [25] = {
    [sym__s_expr] = STATE(92),
    [sym__expr] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__short_helper] = STATE(92),
    [sym_short_ref] = STATE(92),
    [sym_short_copy] = STATE(92),
    [sym_short_fn_ref] = STATE(92),
    [sym_bool_literal] = STATE(92),
    [sym_str_literal] = STATE(92),
    [sym_char_literal] = STATE(92),
    [sym_pattern_literal] = STATE(92),
    [sym_array_expression] = STATE(92),
    [sym_map_expression] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(185),
    [sym_integer_literal] = ACTIONS(241),
    [sym_float_literal] = ACTIONS(243),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_BSLASH] = ACTIONS(195),
    [anon_sym_POUND_DQUOTE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_identifier] = ACTIONS(241),
  },
  [26] = {
    [sym__s_expr] = STATE(11),
    [sym__expr] = STATE(11),
    [sym__literals] = STATE(11),
    [sym__short_helper] = STATE(11),
    [sym_short_ref] = STATE(11),
    [sym_short_copy] = STATE(11),
    [sym_short_fn_ref] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_str_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_pattern_literal] = STATE(11),
    [sym_array_expression] = STATE(11),
    [sym_map_expression] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(245),
    [sym_float_literal] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(245),
  },
  [27] = {
    [sym__s_expr] = STATE(102),
    [sym__expr] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__short_helper] = STATE(102),
    [sym_short_ref] = STATE(102),
    [sym_short_copy] = STATE(102),
    [sym_short_fn_ref] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(249),
    [sym_float_literal] = ACTIONS(251),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(249),
  },
  [28] = {
    [sym__s_expr] = STATE(116),
    [sym__expr] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__short_helper] = STATE(116),
    [sym_short_ref] = STATE(116),
    [sym_short_copy] = STATE(116),
    [sym_short_fn_ref] = STATE(116),
    [sym_bool_literal] = STATE(116),
    [sym_str_literal] = STATE(116),
    [sym_char_literal] = STATE(116),
    [sym_pattern_literal] = STATE(116),
    [sym_array_expression] = STATE(116),
    [sym_map_expression] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(253),
    [sym_float_literal] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(253),
  },
  [29] = {
    [sym__literals] = STATE(33),
    [sym_bool_literal] = STATE(33),
    [sym_str_literal] = STATE(33),
    [sym_char_literal] = STATE(33),
    [sym_pattern_literal] = STATE(33),
    [sym_array_expression] = STATE(33),
    [sym_map_expression] = STATE(33),
    [aux_sym_array_expression_repeat1] = STATE(33),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(257),
    [sym_integer_literal] = ACTIONS(259),
    [sym_float_literal] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(259),
  },
  [30] = {
    [sym__literals] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_pattern_literal] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_map_expression] = STATE(46),
    [aux_sym_map_expression_repeat1] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(263),
    [sym_integer_literal] = ACTIONS(266),
    [sym_float_literal] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(272),
    [anon_sym_false] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_BSLASH] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_identifier] = ACTIONS(266),
  },
  [31] = {
    [sym__literals] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_pattern_literal] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_map_expression] = STATE(46),
    [aux_sym_map_expression_repeat1] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(293),
    [sym_identifier] = ACTIONS(289),
  },
  [32] = {
    [sym__literals] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_pattern_literal] = STATE(38),
    [sym_array_expression] = STATE(38),
    [sym_map_expression] = STATE(38),
    [aux_sym_array_expression_repeat1] = STATE(38),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(295),
    [sym_integer_literal] = ACTIONS(297),
    [sym_float_literal] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(297),
  },
  [33] = {
    [sym__literals] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_pattern_literal] = STATE(34),
    [sym_array_expression] = STATE(34),
    [sym_map_expression] = STATE(34),
    [aux_sym_array_expression_repeat1] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_integer_literal] = ACTIONS(303),
    [sym_float_literal] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(303),
  },
  [34] = {
    [sym__literals] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_pattern_literal] = STATE(34),
    [sym_array_expression] = STATE(34),
    [sym_map_expression] = STATE(34),
    [aux_sym_array_expression_repeat1] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym_integer_literal] = ACTIONS(312),
    [sym_float_literal] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(318),
    [anon_sym_false] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_BSLASH] = ACTIONS(324),
    [anon_sym_POUND_DQUOTE] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(330),
    [sym_identifier] = ACTIONS(312),
  },
  [35] = {
    [sym__literals] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_pattern_literal] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_map_expression] = STATE(46),
    [aux_sym_map_expression_repeat1] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(333),
    [sym_identifier] = ACTIONS(289),
  },
  [36] = {
    [sym__literals] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_pattern_literal] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_map_expression] = STATE(46),
    [aux_sym_map_expression_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(335),
    [sym_identifier] = ACTIONS(289),
  },
  [37] = {
    [sym__literals] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_pattern_literal] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_map_expression] = STATE(46),
    [aux_sym_map_expression_repeat1] = STATE(35),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(337),
    [sym_identifier] = ACTIONS(289),
  },
  [38] = {
    [sym__literals] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_pattern_literal] = STATE(34),
    [sym_array_expression] = STATE(34),
    [sym_map_expression] = STATE(34),
    [aux_sym_array_expression_repeat1] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_integer_literal] = ACTIONS(303),
    [sym_float_literal] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(303),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [sym_integer_literal] = ACTIONS(343),
    [sym_float_literal] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_POUND_DQUOTE] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [sym_identifier] = ACTIONS(343),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [sym_integer_literal] = ACTIONS(347),
    [sym_float_literal] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(347),
    [anon_sym_false] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_BSLASH] = ACTIONS(345),
    [anon_sym_POUND_DQUOTE] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
    [sym_identifier] = ACTIONS(347),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(349),
    [sym_integer_literal] = ACTIONS(351),
    [sym_float_literal] = ACTIONS(349),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_POUND_DQUOTE] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [sym_identifier] = ACTIONS(351),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [sym_integer_literal] = ACTIONS(355),
    [sym_float_literal] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(355),
    [anon_sym_false] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_POUND_DQUOTE] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [sym_identifier] = ACTIONS(355),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(357),
    [sym_integer_literal] = ACTIONS(359),
    [sym_float_literal] = ACTIONS(357),
    [anon_sym_true] = ACTIONS(359),
    [anon_sym_false] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_BSLASH] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(357),
    [sym_identifier] = ACTIONS(359),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_AMP] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(361),
    [anon_sym_TILDE] = ACTIONS(361),
    [sym_integer_literal] = ACTIONS(363),
    [sym_float_literal] = ACTIONS(361),
    [anon_sym_true] = ACTIONS(363),
    [anon_sym_false] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(361),
    [anon_sym_POUND_DQUOTE] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
    [sym_identifier] = ACTIONS(363),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(365),
    [sym_integer_literal] = ACTIONS(367),
    [sym_float_literal] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_false] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_BSLASH] = ACTIONS(365),
    [anon_sym_POUND_DQUOTE] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [sym_identifier] = ACTIONS(367),
  },
  [46] = {
    [sym__literals] = STATE(62),
    [sym_bool_literal] = STATE(62),
    [sym_str_literal] = STATE(62),
    [sym_char_literal] = STATE(62),
    [sym_pattern_literal] = STATE(62),
    [sym_array_expression] = STATE(62),
    [sym_map_expression] = STATE(62),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(369),
    [sym_float_literal] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(369),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(373),
    [sym_integer_literal] = ACTIONS(375),
    [sym_float_literal] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(375),
    [anon_sym_false] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_POUND_DQUOTE] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
    [sym_identifier] = ACTIONS(375),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [sym_integer_literal] = ACTIONS(379),
    [sym_float_literal] = ACTIONS(377),
    [anon_sym_true] = ACTIONS(379),
    [anon_sym_false] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(377),
    [anon_sym_POUND_DQUOTE] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
    [sym_identifier] = ACTIONS(379),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [sym_integer_literal] = ACTIONS(383),
    [sym_float_literal] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_false] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_POUND_DQUOTE] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(381),
    [sym_identifier] = ACTIONS(383),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [sym_integer_literal] = ACTIONS(387),
    [sym_float_literal] = ACTIONS(385),
    [anon_sym_true] = ACTIONS(387),
    [anon_sym_false] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_BSLASH] = ACTIONS(385),
    [anon_sym_POUND_DQUOTE] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [sym_integer_literal] = ACTIONS(393),
    [sym_float_literal] = ACTIONS(389),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_false] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [sym_identifier] = ACTIONS(393),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_TILDE] = ACTIONS(395),
    [sym_integer_literal] = ACTIONS(397),
    [sym_float_literal] = ACTIONS(395),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_false] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_BSLASH] = ACTIONS(395),
    [anon_sym_POUND_DQUOTE] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [sym_identifier] = ACTIONS(397),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(399),
    [sym_integer_literal] = ACTIONS(401),
    [sym_float_literal] = ACTIONS(399),
    [anon_sym_true] = ACTIONS(401),
    [anon_sym_false] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_BSLASH] = ACTIONS(399),
    [anon_sym_POUND_DQUOTE] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [sym_identifier] = ACTIONS(401),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
    [anon_sym_AT] = ACTIONS(403),
    [anon_sym_TILDE] = ACTIONS(403),
    [sym_integer_literal] = ACTIONS(405),
    [sym_float_literal] = ACTIONS(403),
    [anon_sym_true] = ACTIONS(405),
    [anon_sym_false] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_POUND_DQUOTE] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [sym_identifier] = ACTIONS(405),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(407),
    [sym_integer_literal] = ACTIONS(409),
    [sym_float_literal] = ACTIONS(407),
    [anon_sym_true] = ACTIONS(409),
    [anon_sym_false] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_BSLASH] = ACTIONS(407),
    [anon_sym_POUND_DQUOTE] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [sym_identifier] = ACTIONS(409),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_AMP] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_TILDE] = ACTIONS(411),
    [sym_integer_literal] = ACTIONS(413),
    [sym_float_literal] = ACTIONS(411),
    [anon_sym_true] = ACTIONS(413),
    [anon_sym_false] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_BSLASH] = ACTIONS(411),
    [anon_sym_POUND_DQUOTE] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [sym_identifier] = ACTIONS(413),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_AMP] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_TILDE] = ACTIONS(415),
    [sym_integer_literal] = ACTIONS(417),
    [sym_float_literal] = ACTIONS(415),
    [anon_sym_true] = ACTIONS(417),
    [anon_sym_false] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_BSLASH] = ACTIONS(415),
    [anon_sym_POUND_DQUOTE] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [sym_identifier] = ACTIONS(417),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(419),
    [sym_integer_literal] = ACTIONS(421),
    [sym_float_literal] = ACTIONS(419),
    [anon_sym_true] = ACTIONS(421),
    [anon_sym_false] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_BSLASH] = ACTIONS(419),
    [anon_sym_POUND_DQUOTE] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [sym_identifier] = ACTIONS(421),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_TILDE] = ACTIONS(423),
    [sym_integer_literal] = ACTIONS(425),
    [sym_float_literal] = ACTIONS(423),
    [anon_sym_true] = ACTIONS(425),
    [anon_sym_false] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_BSLASH] = ACTIONS(423),
    [anon_sym_POUND_DQUOTE] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [sym_identifier] = ACTIONS(425),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_integer_literal] = ACTIONS(429),
    [sym_float_literal] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(429),
    [anon_sym_false] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_BSLASH] = ACTIONS(427),
    [anon_sym_POUND_DQUOTE] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [sym_identifier] = ACTIONS(429),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(431),
    [sym_integer_literal] = ACTIONS(433),
    [sym_float_literal] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(433),
    [anon_sym_false] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_BSLASH] = ACTIONS(431),
    [anon_sym_POUND_DQUOTE] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [sym_identifier] = ACTIONS(433),
  },
  [62] = {
    [anon_sym_LBRACK] = ACTIONS(435),
    [sym_integer_literal] = ACTIONS(437),
    [sym_float_literal] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_false] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(435),
    [sym_identifier] = ACTIONS(437),
  },
  [63] = {
    [sym_line_comment] = STATE(64),
    [sym__s_expr] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [64] = {
    [sym_line_comment] = STATE(64),
    [sym__s_expr] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(446),
  },
  [65] = {
    [aux_sym_str_literal_repeat1] = STATE(72),
    [aux_sym_str_literal_token1] = ACTIONS(449),
    [anon_sym_DQUOTE2] = ACTIONS(451),
    [sym_escape_sequence] = ACTIONS(453),
  },
  [66] = {
    [aux_sym_str_literal_repeat1] = STATE(65),
    [aux_sym_str_literal_token1] = ACTIONS(455),
    [anon_sym_DQUOTE2] = ACTIONS(457),
    [sym_escape_sequence] = ACTIONS(459),
  },
  [67] = {
    [aux_sym_str_literal_repeat1] = STATE(71),
    [aux_sym_str_literal_token1] = ACTIONS(461),
    [anon_sym_DQUOTE2] = ACTIONS(463),
    [sym_escape_sequence] = ACTIONS(465),
  },
  [68] = {
    [aux_sym_str_literal_repeat1] = STATE(72),
    [aux_sym_str_literal_token1] = ACTIONS(449),
    [anon_sym_DQUOTE2] = ACTIONS(467),
    [sym_escape_sequence] = ACTIONS(453),
  },
  [69] = {
    [aux_sym_str_literal_repeat1] = STATE(68),
    [aux_sym_str_literal_token1] = ACTIONS(469),
    [anon_sym_DQUOTE2] = ACTIONS(471),
    [sym_escape_sequence] = ACTIONS(473),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
  },
  [71] = {
    [aux_sym_str_literal_repeat1] = STATE(72),
    [aux_sym_str_literal_token1] = ACTIONS(449),
    [anon_sym_DQUOTE2] = ACTIONS(477),
    [sym_escape_sequence] = ACTIONS(453),
  },
  [72] = {
    [aux_sym_str_literal_repeat1] = STATE(72),
    [aux_sym_str_literal_token1] = ACTIONS(479),
    [anon_sym_DQUOTE2] = ACTIONS(482),
    [sym_escape_sequence] = ACTIONS(484),
  },
  [73] = {
    [aux_sym_str_literal_repeat1] = STATE(74),
    [aux_sym_str_literal_token1] = ACTIONS(487),
    [anon_sym_DQUOTE2] = ACTIONS(489),
    [sym_escape_sequence] = ACTIONS(491),
  },
  [74] = {
    [aux_sym_str_literal_repeat1] = STATE(72),
    [aux_sym_str_literal_token1] = ACTIONS(449),
    [anon_sym_DQUOTE2] = ACTIONS(493),
    [sym_escape_sequence] = ACTIONS(453),
  },
  [75] = {
    [aux_sym_let_pairs_repeat1] = STATE(77),
    [anon_sym_RBRACK] = ACTIONS(495),
    [sym_identifier] = ACTIONS(497),
  },
  [76] = {
    [aux_sym_let_pairs_repeat1] = STATE(75),
    [anon_sym_RBRACK] = ACTIONS(499),
    [sym_identifier] = ACTIONS(497),
  },
  [77] = {
    [aux_sym_let_pairs_repeat1] = STATE(77),
    [anon_sym_RBRACK] = ACTIONS(501),
    [sym_identifier] = ACTIONS(503),
  },
  [78] = {
    [aux_sym_parameters_repeat1] = STATE(80),
    [anon_sym_RBRACK] = ACTIONS(506),
    [sym_identifier] = ACTIONS(508),
  },
  [79] = {
    [aux_sym_parameters_repeat1] = STATE(79),
    [anon_sym_RBRACK] = ACTIONS(510),
    [sym_identifier] = ACTIONS(512),
  },
  [80] = {
    [aux_sym_parameters_repeat1] = STATE(79),
    [anon_sym_RBRACK] = ACTIONS(515),
    [sym_identifier] = ACTIONS(517),
  },
  [81] = {
    [anon_sym_RBRACK] = ACTIONS(519),
    [sym_identifier] = ACTIONS(519),
  },
  [82] = {
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_identifier] = ACTIONS(373),
  },
  [83] = {
    [aux_sym_str_literal_token1] = ACTIONS(521),
    [sym_escape_sequence] = ACTIONS(523),
  },
  [84] = {
    [sym_parameters] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(525),
  },
  [85] = {
    [aux_sym_str_literal_token1] = ACTIONS(527),
    [sym_escape_sequence] = ACTIONS(529),
  },
  [86] = {
    [sym_parameters] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(525),
  },
  [87] = {
    [sym_let_pairs] = STATE(12),
    [anon_sym_LBRACK] = ACTIONS(531),
  },
  [88] = {
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym_identifier] = ACTIONS(353),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
  },
  [90] = {
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_identifier] = ACTIONS(381),
  },
  [91] = {
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_identifier] = ACTIONS(345),
  },
  [92] = {
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_identifier] = ACTIONS(403),
  },
  [93] = {
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
  },
  [94] = {
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_identifier] = ACTIONS(411),
  },
  [95] = {
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_identifier] = ACTIONS(377),
  },
  [96] = {
    [anon_sym_RBRACK] = ACTIONS(385),
    [sym_identifier] = ACTIONS(385),
  },
  [97] = {
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym_identifier] = ACTIONS(341),
  },
  [98] = {
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_identifier] = ACTIONS(365),
  },
  [99] = {
    [anon_sym_RBRACK] = ACTIONS(357),
    [sym_identifier] = ACTIONS(357),
  },
  [100] = {
    [anon_sym_RBRACK] = ACTIONS(361),
    [sym_identifier] = ACTIONS(361),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(533),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(535),
  },
  [103] = {
    [sym_identifier] = ACTIONS(537),
  },
  [104] = {
    [sym_identifier] = ACTIONS(539),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(541),
  },
  [106] = {
    [sym_identifier] = ACTIONS(543),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(545),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(547),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(549),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(551),
  },
  [111] = {
    [sym_identifier] = ACTIONS(553),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(555),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(557),
  },
  [114] = {
    [aux_sym_line_comment_token1] = ACTIONS(559),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(561),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(563),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(565),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(114),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(111),
  [11] = {.count = 1, .reusable = false}, SHIFT(86),
  [13] = {.count = 1, .reusable = false}, SHIFT(106),
  [15] = {.count = 1, .reusable = false}, SHIFT(87),
  [17] = {.count = 1, .reusable = true}, SHIFT(32),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(15),
  [23] = {.count = 1, .reusable = false}, SHIFT(26),
  [25] = {.count = 1, .reusable = false}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(17),
  [29] = {.count = 1, .reusable = false}, SHIFT(104),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = false}, SHIFT(112),
  [39] = {.count = 1, .reusable = true}, SHIFT(112),
  [41] = {.count = 1, .reusable = false}, SHIFT(49),
  [43] = {.count = 1, .reusable = true}, SHIFT(69),
  [45] = {.count = 1, .reusable = true}, SHIFT(85),
  [47] = {.count = 1, .reusable = true}, SHIFT(73),
  [49] = {.count = 1, .reusable = true}, SHIFT(37),
  [51] = {.count = 1, .reusable = false}, SHIFT(51),
  [53] = {.count = 1, .reusable = false}, SHIFT(108),
  [55] = {.count = 1, .reusable = true}, SHIFT(108),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(32),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(18),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(19),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(20),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(49),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(69),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(85),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(73),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(37),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [97] = {.count = 1, .reusable = false}, SHIFT(4),
  [99] = {.count = 1, .reusable = true}, SHIFT(4),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [103] = {.count = 1, .reusable = false}, SHIFT(61),
  [105] = {.count = 1, .reusable = true}, SHIFT(61),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [110] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(32),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(18),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(19),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(20),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(61),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(61),
  [130] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(49),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(69),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(85),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(73),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(37),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [149] = {.count = 1, .reusable = false}, SHIFT(5),
  [151] = {.count = 1, .reusable = true}, SHIFT(5),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 12),
  [155] = {.count = 1, .reusable = false}, SHIFT(107),
  [157] = {.count = 1, .reusable = true}, SHIFT(107),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [161] = {.count = 1, .reusable = false}, SHIFT(101),
  [163] = {.count = 1, .reusable = true}, SHIFT(101),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [167] = {.count = 1, .reusable = false}, SHIFT(110),
  [169] = {.count = 1, .reusable = true}, SHIFT(110),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [173] = {.count = 1, .reusable = false}, SHIFT(115),
  [175] = {.count = 1, .reusable = true}, SHIFT(115),
  [177] = {.count = 1, .reusable = true}, SHIFT(2),
  [179] = {.count = 1, .reusable = true}, SHIFT(29),
  [181] = {.count = 1, .reusable = true}, SHIFT(25),
  [183] = {.count = 1, .reusable = true}, SHIFT(24),
  [185] = {.count = 1, .reusable = true}, SHIFT(22),
  [187] = {.count = 1, .reusable = false}, SHIFT(81),
  [189] = {.count = 1, .reusable = true}, SHIFT(81),
  [191] = {.count = 1, .reusable = false}, SHIFT(90),
  [193] = {.count = 1, .reusable = true}, SHIFT(67),
  [195] = {.count = 1, .reusable = true}, SHIFT(83),
  [197] = {.count = 1, .reusable = true}, SHIFT(66),
  [199] = {.count = 1, .reusable = true}, SHIFT(36),
  [201] = {.count = 1, .reusable = false}, SHIFT(23),
  [203] = {.count = 1, .reusable = true}, SHIFT(23),
  [205] = {.count = 1, .reusable = false}, SHIFT(113),
  [207] = {.count = 1, .reusable = true}, SHIFT(113),
  [209] = {.count = 1, .reusable = false}, SHIFT(105),
  [211] = {.count = 1, .reusable = true}, SHIFT(105),
  [213] = {.count = 1, .reusable = false}, SHIFT(54),
  [215] = {.count = 1, .reusable = true}, SHIFT(54),
  [217] = {.count = 1, .reusable = false}, SHIFT(55),
  [219] = {.count = 1, .reusable = true}, SHIFT(55),
  [221] = {.count = 1, .reusable = false}, SHIFT(56),
  [223] = {.count = 1, .reusable = true}, SHIFT(56),
  [225] = {.count = 1, .reusable = false}, SHIFT(109),
  [227] = {.count = 1, .reusable = true}, SHIFT(109),
  [229] = {.count = 1, .reusable = false}, SHIFT(94),
  [231] = {.count = 1, .reusable = true}, SHIFT(94),
  [233] = {.count = 1, .reusable = false}, SHIFT(27),
  [235] = {.count = 1, .reusable = true}, SHIFT(27),
  [237] = {.count = 1, .reusable = false}, SHIFT(93),
  [239] = {.count = 1, .reusable = true}, SHIFT(93),
  [241] = {.count = 1, .reusable = false}, SHIFT(92),
  [243] = {.count = 1, .reusable = true}, SHIFT(92),
  [245] = {.count = 1, .reusable = false}, SHIFT(11),
  [247] = {.count = 1, .reusable = true}, SHIFT(11),
  [249] = {.count = 1, .reusable = false}, SHIFT(102),
  [251] = {.count = 1, .reusable = true}, SHIFT(102),
  [253] = {.count = 1, .reusable = false}, SHIFT(116),
  [255] = {.count = 1, .reusable = true}, SHIFT(116),
  [257] = {.count = 1, .reusable = true}, SHIFT(91),
  [259] = {.count = 1, .reusable = false}, SHIFT(33),
  [261] = {.count = 1, .reusable = true}, SHIFT(33),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(32),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(46),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(46),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(49),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(69),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(85),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(73),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(37),
  [287] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 19),
  [289] = {.count = 1, .reusable = false}, SHIFT(46),
  [291] = {.count = 1, .reusable = true}, SHIFT(46),
  [293] = {.count = 1, .reusable = true}, SHIFT(88),
  [295] = {.count = 1, .reusable = true}, SHIFT(40),
  [297] = {.count = 1, .reusable = false}, SHIFT(38),
  [299] = {.count = 1, .reusable = true}, SHIFT(38),
  [301] = {.count = 1, .reusable = true}, SHIFT(82),
  [303] = {.count = 1, .reusable = false}, SHIFT(34),
  [305] = {.count = 1, .reusable = true}, SHIFT(34),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(32),
  [310] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [312] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(34),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(34),
  [318] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(49),
  [321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(69),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(85),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(73),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(37),
  [333] = {.count = 1, .reusable = true}, SHIFT(42),
  [335] = {.count = 1, .reusable = true}, SHIFT(98),
  [337] = {.count = 1, .reusable = true}, SHIFT(45),
  [339] = {.count = 1, .reusable = true}, SHIFT(47),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 18),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 18),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [369] = {.count = 1, .reusable = false}, SHIFT(62),
  [371] = {.count = 1, .reusable = true}, SHIFT(62),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [391] = {.count = 1, .reusable = true}, SHIFT(103),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 23),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 23),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 20),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 20),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [431] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [433] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [435] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17),
  [437] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 17),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [441] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [449] = {.count = 1, .reusable = false}, SHIFT(72),
  [451] = {.count = 1, .reusable = true}, SHIFT(89),
  [453] = {.count = 1, .reusable = true}, SHIFT(72),
  [455] = {.count = 1, .reusable = false}, SHIFT(65),
  [457] = {.count = 1, .reusable = true}, SHIFT(97),
  [459] = {.count = 1, .reusable = true}, SHIFT(65),
  [461] = {.count = 1, .reusable = false}, SHIFT(71),
  [463] = {.count = 1, .reusable = true}, SHIFT(95),
  [465] = {.count = 1, .reusable = true}, SHIFT(71),
  [467] = {.count = 1, .reusable = true}, SHIFT(44),
  [469] = {.count = 1, .reusable = false}, SHIFT(68),
  [471] = {.count = 1, .reusable = true}, SHIFT(48),
  [473] = {.count = 1, .reusable = true}, SHIFT(68),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [477] = {.count = 1, .reusable = true}, SHIFT(100),
  [479] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(72),
  [482] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(72),
  [487] = {.count = 1, .reusable = false}, SHIFT(74),
  [489] = {.count = 1, .reusable = true}, SHIFT(39),
  [491] = {.count = 1, .reusable = true}, SHIFT(74),
  [493] = {.count = 1, .reusable = true}, SHIFT(41),
  [495] = {.count = 1, .reusable = true}, SHIFT(57),
  [497] = {.count = 1, .reusable = true}, SHIFT(14),
  [499] = {.count = 1, .reusable = true}, SHIFT(53),
  [501] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 24),
  [503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 24), SHIFT_REPEAT(14),
  [506] = {.count = 1, .reusable = true}, SHIFT(59),
  [508] = {.count = 1, .reusable = true}, SHIFT(80),
  [510] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(79),
  [515] = {.count = 1, .reusable = true}, SHIFT(60),
  [517] = {.count = 1, .reusable = true}, SHIFT(79),
  [519] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 22),
  [521] = {.count = 1, .reusable = false}, SHIFT(96),
  [523] = {.count = 1, .reusable = true}, SHIFT(96),
  [525] = {.count = 1, .reusable = true}, SHIFT(78),
  [527] = {.count = 1, .reusable = false}, SHIFT(50),
  [529] = {.count = 1, .reusable = true}, SHIFT(50),
  [531] = {.count = 1, .reusable = true}, SHIFT(76),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 15),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 25),
  [537] = {.count = 1, .reusable = true}, SHIFT(58),
  [539] = {.count = 1, .reusable = true}, SHIFT(21),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [543] = {.count = 1, .reusable = true}, SHIFT(84),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 21),
  [547] = {.count = 1, .reusable = true}, SHIFT(43),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 16),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 13),
  [553] = {.count = 1, .reusable = true}, SHIFT(28),
  [555] = {.count = 1, .reusable = true}, SHIFT(99),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [559] = {.count = 1, .reusable = true}, SHIFT(70),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 11),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 10),
  [565] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
