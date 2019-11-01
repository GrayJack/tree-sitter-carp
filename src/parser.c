#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 115
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_ref = 14,
  anon_sym_address = 15,
  anon_sym_DOT = 16,
  anon_sym_AMP = 17,
  anon_sym_AT = 18,
  anon_sym_TILDE = 19,
  sym_integer_literal = 20,
  sym_float_literal = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_str_literal_token1 = 25,
  anon_sym_DQUOTE2 = 26,
  anon_sym_BSLASH = 27,
  anon_sym_POUND_DQUOTE = 28,
  sym_escape_sequence = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  sym_identifier = 32,
  sym_source_file = 33,
  sym_line_comment = 34,
  sym__s_expr = 35,
  sym__expr = 36,
  sym__anything = 37,
  sym__s_forms = 38,
  sym__literals = 39,
  sym__short_helper = 40,
  sym_def = 41,
  sym_fn = 42,
  sym_defn = 43,
  sym_let = 44,
  sym_let_pairs = 45,
  sym_do = 46,
  sym_if = 47,
  sym_while = 48,
  sym_ref = 49,
  sym_address = 50,
  sym_call_expression = 51,
  sym_call_name = 52,
  sym_short_ref = 53,
  sym_short_copy = 54,
  sym_short_fn_ref = 55,
  sym_parameters = 56,
  sym_bool_literal = 57,
  sym_str_literal = 58,
  sym_char_literal = 59,
  sym_pattern_literal = 60,
  sym_array_expression = 61,
  sym_map_expression = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_let_pairs_repeat1 = 64,
  aux_sym_do_repeat1 = 65,
  aux_sym_call_expression_repeat1 = 66,
  aux_sym_parameters_repeat1 = 67,
  aux_sym_str_literal_repeat1 = 68,
  aux_sym_array_expression_repeat1 = 69,
  aux_sym_map_expression_repeat1 = 70,
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
  [18] = {.index = 26, .length = 4},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 3},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 4},
  [24] = {.index = 43, .length = 3},
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
    {field_key, 0},
    {field_value, 1},
  [24] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [26] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [30] =
    {field_module, 0},
    {field_name, 2},
  [32] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [35] =
    {field_expr, 1},
    {field_var, 0},
  [37] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [39] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [43] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
};

static TSSymbol ts_alias_sequences[25][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(34);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(34);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(34);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(34);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 42:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(69);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(69);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(56);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 59:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 60:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 64:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 65:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 66:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(68);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(70);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(75);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(60);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(77);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 73:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(59);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 76:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(58);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
      END_STATE();
    case 79:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(79);
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
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 8},
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
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
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
    [sym_source_file] = STATE(114),
    [sym_line_comment] = STATE(62),
    [sym__s_expr] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(109),
    [sym__s_expr] = STATE(109),
    [sym__anything] = STATE(109),
    [sym__s_forms] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__short_helper] = STATE(109),
    [sym_def] = STATE(109),
    [sym_fn] = STATE(109),
    [sym_defn] = STATE(109),
    [sym_let] = STATE(109),
    [sym_do] = STATE(109),
    [sym_if] = STATE(109),
    [sym_while] = STATE(109),
    [sym_ref] = STATE(109),
    [sym_address] = STATE(109),
    [sym_call_expression] = STATE(109),
    [sym_call_name] = STATE(6),
    [sym_short_ref] = STATE(109),
    [sym_short_copy] = STATE(109),
    [sym_short_fn_ref] = STATE(51),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
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
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [3] = {
    [sym_line_comment] = STATE(101),
    [sym__s_expr] = STATE(101),
    [sym__anything] = STATE(101),
    [sym__s_forms] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__short_helper] = STATE(101),
    [sym_def] = STATE(101),
    [sym_fn] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_let] = STATE(101),
    [sym_do] = STATE(101),
    [sym_if] = STATE(101),
    [sym_while] = STATE(101),
    [sym_ref] = STATE(101),
    [sym_address] = STATE(101),
    [sym_call_expression] = STATE(101),
    [sym_call_name] = STATE(6),
    [sym_short_ref] = STATE(101),
    [sym_short_copy] = STATE(101),
    [sym_short_fn_ref] = STATE(51),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
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
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(51),
    [sym_float_literal] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [4] = {
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
    [sym_short_ref] = STATE(59),
    [sym_short_copy] = STATE(59),
    [sym_short_fn_ref] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_pattern_literal] = STATE(59),
    [sym_array_expression] = STATE(59),
    [sym_map_expression] = STATE(59),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(57),
    [sym_float_literal] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(57),
  },
  [5] = {
    [sym__s_expr] = STATE(9),
    [sym__expr] = STATE(9),
    [sym__literals] = STATE(9),
    [sym__short_helper] = STATE(9),
    [sym_short_ref] = STATE(9),
    [sym_short_copy] = STATE(9),
    [sym_short_fn_ref] = STATE(9),
    [sym_bool_literal] = STATE(9),
    [sym_str_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_pattern_literal] = STATE(9),
    [sym_array_expression] = STATE(9),
    [sym_map_expression] = STATE(9),
    [aux_sym_call_expression_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(63),
    [sym_float_literal] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(63),
  },
  [6] = {
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
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(69),
    [sym_float_literal] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(69),
  },
  [7] = {
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
    [sym_short_ref] = STATE(59),
    [sym_short_copy] = STATE(59),
    [sym_short_fn_ref] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_pattern_literal] = STATE(59),
    [sym_array_expression] = STATE(59),
    [sym_map_expression] = STATE(59),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(87),
    [sym_integer_literal] = ACTIONS(90),
    [sym_float_literal] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(102),
    [anon_sym_POUND_DQUOTE] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(108),
    [sym_identifier] = ACTIONS(90),
  },
  [8] = {
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
    [sym_short_ref] = STATE(59),
    [sym_short_copy] = STATE(59),
    [sym_short_fn_ref] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_pattern_literal] = STATE(59),
    [sym_array_expression] = STATE(59),
    [sym_map_expression] = STATE(59),
    [aux_sym_do_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(57),
    [sym_float_literal] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(57),
  },
  [9] = {
    [sym__s_expr] = STATE(9),
    [sym__expr] = STATE(9),
    [sym__literals] = STATE(9),
    [sym__short_helper] = STATE(9),
    [sym_short_ref] = STATE(9),
    [sym_short_copy] = STATE(9),
    [sym_short_fn_ref] = STATE(9),
    [sym_bool_literal] = STATE(9),
    [sym_str_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_pattern_literal] = STATE(9),
    [sym_array_expression] = STATE(9),
    [sym_map_expression] = STATE(9),
    [aux_sym_call_expression_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(127),
    [sym_integer_literal] = ACTIONS(130),
    [sym_float_literal] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(136),
    [anon_sym_false] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_BSLASH] = ACTIONS(142),
    [anon_sym_POUND_DQUOTE] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(148),
    [sym_identifier] = ACTIONS(130),
  },
  [10] = {
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
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(153),
    [sym_float_literal] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(153),
  },
  [11] = {
    [sym__s_expr] = STATE(112),
    [sym__expr] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__short_helper] = STATE(112),
    [sym_short_ref] = STATE(112),
    [sym_short_copy] = STATE(112),
    [sym_short_fn_ref] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(159),
    [sym_float_literal] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(159),
  },
  [12] = {
    [sym__s_expr] = STATE(100),
    [sym__expr] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__short_helper] = STATE(100),
    [sym_short_ref] = STATE(100),
    [sym_short_copy] = STATE(100),
    [sym_short_fn_ref] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(165),
    [sym_float_literal] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(165),
  },
  [13] = {
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
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(171),
    [sym_float_literal] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(171),
  },
  [14] = {
    [sym__s_expr] = STATE(91),
    [sym__expr] = STATE(91),
    [sym__literals] = STATE(91),
    [sym__short_helper] = STATE(91),
    [sym_short_ref] = STATE(91),
    [sym_short_copy] = STATE(91),
    [sym_short_fn_ref] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(183),
    [sym_integer_literal] = ACTIONS(185),
    [sym_float_literal] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_BSLASH] = ACTIONS(193),
    [anon_sym_POUND_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [sym_identifier] = ACTIONS(185),
  },
  [15] = {
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
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(199),
    [sym_float_literal] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(199),
  },
  [16] = {
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(203),
    [sym_float_literal] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(203),
  },
  [17] = {
    [sym__s_expr] = STATE(58),
    [sym__expr] = STATE(58),
    [sym__literals] = STATE(58),
    [sym__short_helper] = STATE(58),
    [sym_short_ref] = STATE(58),
    [sym_short_copy] = STATE(58),
    [sym_short_fn_ref] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_char_literal] = STATE(58),
    [sym_pattern_literal] = STATE(58),
    [sym_array_expression] = STATE(58),
    [sym_map_expression] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(207),
    [sym_float_literal] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(207),
  },
  [18] = {
    [sym__s_expr] = STATE(53),
    [sym__expr] = STATE(53),
    [sym__literals] = STATE(53),
    [sym__short_helper] = STATE(53),
    [sym_short_ref] = STATE(53),
    [sym_short_copy] = STATE(53),
    [sym_short_fn_ref] = STATE(53),
    [sym_bool_literal] = STATE(53),
    [sym_str_literal] = STATE(53),
    [sym_char_literal] = STATE(53),
    [sym_pattern_literal] = STATE(53),
    [sym_array_expression] = STATE(53),
    [sym_map_expression] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(211),
  },
  [19] = {
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
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(215),
    [sym_float_literal] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(215),
  },
  [20] = {
    [sym__s_expr] = STATE(84),
    [sym__expr] = STATE(84),
    [sym__literals] = STATE(84),
    [sym__short_helper] = STATE(84),
    [sym_short_ref] = STATE(84),
    [sym_short_copy] = STATE(84),
    [sym_short_fn_ref] = STATE(84),
    [sym_bool_literal] = STATE(84),
    [sym_str_literal] = STATE(84),
    [sym_char_literal] = STATE(84),
    [sym_pattern_literal] = STATE(84),
    [sym_array_expression] = STATE(84),
    [sym_map_expression] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(183),
    [sym_integer_literal] = ACTIONS(219),
    [sym_float_literal] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_BSLASH] = ACTIONS(193),
    [anon_sym_POUND_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [sym_identifier] = ACTIONS(219),
  },
  [21] = {
    [sym__s_expr] = STATE(12),
    [sym__expr] = STATE(12),
    [sym__literals] = STATE(12),
    [sym__short_helper] = STATE(12),
    [sym_short_ref] = STATE(12),
    [sym_short_copy] = STATE(12),
    [sym_short_fn_ref] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_pattern_literal] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym_map_expression] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(223),
    [sym_float_literal] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(223),
  },
  [22] = {
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
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(227),
    [sym_float_literal] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(227),
  },
  [23] = {
    [sym__s_expr] = STATE(25),
    [sym__expr] = STATE(25),
    [sym__literals] = STATE(25),
    [sym__short_helper] = STATE(25),
    [sym_short_ref] = STATE(25),
    [sym_short_copy] = STATE(25),
    [sym_short_fn_ref] = STATE(25),
    [sym_bool_literal] = STATE(25),
    [sym_str_literal] = STATE(25),
    [sym_char_literal] = STATE(25),
    [sym_pattern_literal] = STATE(25),
    [sym_array_expression] = STATE(25),
    [sym_map_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(231),
    [sym_float_literal] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(231),
  },
  [24] = {
    [sym__s_expr] = STATE(89),
    [sym__expr] = STATE(89),
    [sym__literals] = STATE(89),
    [sym__short_helper] = STATE(89),
    [sym_short_ref] = STATE(89),
    [sym_short_copy] = STATE(89),
    [sym_short_fn_ref] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(183),
    [sym_integer_literal] = ACTIONS(235),
    [sym_float_literal] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_BSLASH] = ACTIONS(193),
    [anon_sym_POUND_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [sym_identifier] = ACTIONS(235),
  },
  [25] = {
    [sym__s_expr] = STATE(104),
    [sym__expr] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__short_helper] = STATE(104),
    [sym_short_ref] = STATE(104),
    [sym_short_copy] = STATE(104),
    [sym_short_fn_ref] = STATE(104),
    [sym_bool_literal] = STATE(104),
    [sym_str_literal] = STATE(104),
    [sym_char_literal] = STATE(104),
    [sym_pattern_literal] = STATE(104),
    [sym_array_expression] = STATE(104),
    [sym_map_expression] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(239),
    [sym_float_literal] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(239),
  },
  [26] = {
    [sym__s_expr] = STATE(90),
    [sym__expr] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__short_helper] = STATE(90),
    [sym_short_ref] = STATE(90),
    [sym_short_copy] = STATE(90),
    [sym_short_fn_ref] = STATE(90),
    [sym_bool_literal] = STATE(90),
    [sym_str_literal] = STATE(90),
    [sym_char_literal] = STATE(90),
    [sym_pattern_literal] = STATE(90),
    [sym_array_expression] = STATE(90),
    [sym_map_expression] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(183),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_BSLASH] = ACTIONS(193),
    [anon_sym_POUND_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [sym_identifier] = ACTIONS(243),
  },
  [27] = {
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
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(247),
    [sym_float_literal] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(247),
  },
  [28] = {
    [sym__literals] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_pattern_literal] = STATE(34),
    [sym_array_expression] = STATE(34),
    [sym_map_expression] = STATE(34),
    [aux_sym_array_expression_repeat1] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(253),
    [sym_float_literal] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(253),
  },
  [29] = {
    [sym__literals] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_pattern_literal] = STATE(45),
    [sym_array_expression] = STATE(45),
    [sym_map_expression] = STATE(45),
    [aux_sym_map_expression_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(257),
    [sym_integer_literal] = ACTIONS(260),
    [sym_float_literal] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_BSLASH] = ACTIONS(272),
    [anon_sym_POUND_DQUOTE] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_identifier] = ACTIONS(260),
  },
  [30] = {
    [sym__literals] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_pattern_literal] = STATE(34),
    [sym_array_expression] = STATE(34),
    [sym_map_expression] = STATE(34),
    [aux_sym_array_expression_repeat1] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_integer_literal] = ACTIONS(253),
    [sym_float_literal] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(253),
  },
  [31] = {
    [sym__literals] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_pattern_literal] = STATE(45),
    [sym_array_expression] = STATE(45),
    [sym_map_expression] = STATE(45),
    [aux_sym_map_expression_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(289),
    [sym_identifier] = ACTIONS(285),
  },
  [32] = {
    [sym__literals] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_pattern_literal] = STATE(45),
    [sym_array_expression] = STATE(45),
    [sym_map_expression] = STATE(45),
    [aux_sym_map_expression_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(291),
    [sym_identifier] = ACTIONS(285),
  },
  [33] = {
    [sym__literals] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_pattern_literal] = STATE(45),
    [sym_array_expression] = STATE(45),
    [sym_map_expression] = STATE(45),
    [aux_sym_map_expression_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(293),
    [sym_identifier] = ACTIONS(285),
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
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(298),
    [sym_integer_literal] = ACTIONS(300),
    [sym_float_literal] = ACTIONS(303),
    [anon_sym_true] = ACTIONS(306),
    [anon_sym_false] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(312),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(318),
    [sym_identifier] = ACTIONS(300),
  },
  [35] = {
    [sym__literals] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_pattern_literal] = STATE(45),
    [sym_array_expression] = STATE(45),
    [sym_map_expression] = STATE(45),
    [aux_sym_map_expression_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(321),
    [sym_identifier] = ACTIONS(285),
  },
  [36] = {
    [sym__literals] = STATE(30),
    [sym_bool_literal] = STATE(30),
    [sym_str_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_pattern_literal] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_map_expression] = STATE(30),
    [aux_sym_array_expression_repeat1] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_integer_literal] = ACTIONS(325),
    [sym_float_literal] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(325),
  },
  [37] = {
    [sym__literals] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [aux_sym_array_expression_repeat1] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(329),
    [sym_integer_literal] = ACTIONS(331),
    [sym_float_literal] = ACTIONS(333),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(331),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [anon_sym_AMP] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_TILDE] = ACTIONS(335),
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
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_TILDE] = ACTIONS(339),
    [sym_integer_literal] = ACTIONS(341),
    [sym_float_literal] = ACTIONS(339),
    [anon_sym_true] = ACTIONS(341),
    [anon_sym_false] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_BSLASH] = ACTIONS(339),
    [anon_sym_POUND_DQUOTE] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(339),
    [sym_identifier] = ACTIONS(341),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [anon_sym_AMP] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_TILDE] = ACTIONS(343),
    [sym_integer_literal] = ACTIONS(345),
    [sym_float_literal] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(345),
    [anon_sym_false] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_BSLASH] = ACTIONS(343),
    [anon_sym_POUND_DQUOTE] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(343),
    [sym_identifier] = ACTIONS(345),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(347),
    [sym_integer_literal] = ACTIONS(349),
    [sym_float_literal] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(349),
    [anon_sym_false] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [anon_sym_BSLASH] = ACTIONS(347),
    [anon_sym_POUND_DQUOTE] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(347),
    [sym_identifier] = ACTIONS(349),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [anon_sym_AMP] = ACTIONS(351),
    [anon_sym_AT] = ACTIONS(351),
    [anon_sym_TILDE] = ACTIONS(351),
    [sym_integer_literal] = ACTIONS(353),
    [sym_float_literal] = ACTIONS(351),
    [anon_sym_true] = ACTIONS(353),
    [anon_sym_false] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_BSLASH] = ACTIONS(351),
    [anon_sym_POUND_DQUOTE] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(355),
    [anon_sym_AMP] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_TILDE] = ACTIONS(355),
    [sym_integer_literal] = ACTIONS(357),
    [sym_float_literal] = ACTIONS(355),
    [anon_sym_true] = ACTIONS(357),
    [anon_sym_false] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [anon_sym_BSLASH] = ACTIONS(355),
    [anon_sym_POUND_DQUOTE] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(355),
    [sym_identifier] = ACTIONS(357),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_AMP] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(359),
    [sym_integer_literal] = ACTIONS(361),
    [sym_float_literal] = ACTIONS(359),
    [anon_sym_true] = ACTIONS(361),
    [anon_sym_false] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [anon_sym_BSLASH] = ACTIONS(359),
    [anon_sym_POUND_DQUOTE] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(359),
    [sym_identifier] = ACTIONS(361),
  },
  [45] = {
    [sym__literals] = STATE(61),
    [sym_bool_literal] = STATE(61),
    [sym_str_literal] = STATE(61),
    [sym_char_literal] = STATE(61),
    [sym_pattern_literal] = STATE(61),
    [sym_array_expression] = STATE(61),
    [sym_map_expression] = STATE(61),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(363),
    [sym_float_literal] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(363),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
    [anon_sym_AMP] = ACTIONS(367),
    [anon_sym_AT] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(367),
    [sym_integer_literal] = ACTIONS(369),
    [sym_float_literal] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(369),
    [anon_sym_false] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [anon_sym_BSLASH] = ACTIONS(367),
    [anon_sym_POUND_DQUOTE] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(367),
    [sym_identifier] = ACTIONS(369),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(371),
    [anon_sym_TILDE] = ACTIONS(371),
    [sym_integer_literal] = ACTIONS(373),
    [sym_float_literal] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(371),
    [anon_sym_POUND_DQUOTE] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(371),
    [sym_identifier] = ACTIONS(373),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(375),
    [anon_sym_TILDE] = ACTIONS(375),
    [sym_integer_literal] = ACTIONS(377),
    [sym_float_literal] = ACTIONS(375),
    [anon_sym_true] = ACTIONS(377),
    [anon_sym_false] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [anon_sym_BSLASH] = ACTIONS(375),
    [anon_sym_POUND_DQUOTE] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(375),
    [anon_sym_RBRACE] = ACTIONS(375),
    [sym_identifier] = ACTIONS(377),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_TILDE] = ACTIONS(379),
    [sym_integer_literal] = ACTIONS(381),
    [sym_float_literal] = ACTIONS(379),
    [anon_sym_true] = ACTIONS(381),
    [anon_sym_false] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [anon_sym_BSLASH] = ACTIONS(379),
    [anon_sym_POUND_DQUOTE] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(379),
    [anon_sym_RBRACE] = ACTIONS(379),
    [sym_identifier] = ACTIONS(381),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(383),
    [anon_sym_TILDE] = ACTIONS(383),
    [sym_integer_literal] = ACTIONS(387),
    [sym_float_literal] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(387),
    [anon_sym_false] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_BSLASH] = ACTIONS(383),
    [anon_sym_POUND_DQUOTE] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_identifier] = ACTIONS(387),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [sym_integer_literal] = ACTIONS(391),
    [sym_float_literal] = ACTIONS(389),
    [anon_sym_true] = ACTIONS(391),
    [anon_sym_false] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [sym_identifier] = ACTIONS(391),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [sym_integer_literal] = ACTIONS(395),
    [sym_float_literal] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(395),
    [anon_sym_false] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_BSLASH] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [sym_identifier] = ACTIONS(395),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [sym_integer_literal] = ACTIONS(399),
    [sym_float_literal] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [sym_identifier] = ACTIONS(399),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [sym_integer_literal] = ACTIONS(403),
    [sym_float_literal] = ACTIONS(401),
    [anon_sym_true] = ACTIONS(403),
    [anon_sym_false] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [sym_integer_literal] = ACTIONS(407),
    [sym_float_literal] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(407),
    [anon_sym_false] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [sym_identifier] = ACTIONS(407),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(409),
    [sym_integer_literal] = ACTIONS(411),
    [sym_float_literal] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(411),
    [anon_sym_false] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_BSLASH] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(413),
    [sym_integer_literal] = ACTIONS(415),
    [sym_float_literal] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(415),
    [anon_sym_false] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_BSLASH] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [sym_identifier] = ACTIONS(415),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [sym_integer_literal] = ACTIONS(419),
    [sym_float_literal] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(419),
    [anon_sym_false] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_BSLASH] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [sym_identifier] = ACTIONS(419),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(421),
    [sym_integer_literal] = ACTIONS(423),
    [sym_float_literal] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(423),
    [anon_sym_false] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_BSLASH] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [sym_identifier] = ACTIONS(423),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(425),
    [sym_integer_literal] = ACTIONS(427),
    [sym_float_literal] = ACTIONS(425),
    [anon_sym_true] = ACTIONS(427),
    [anon_sym_false] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_BSLASH] = ACTIONS(425),
    [anon_sym_POUND_DQUOTE] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(425),
    [sym_identifier] = ACTIONS(427),
  },
  [61] = {
    [anon_sym_LBRACK] = ACTIONS(429),
    [sym_integer_literal] = ACTIONS(431),
    [sym_float_literal] = ACTIONS(429),
    [anon_sym_true] = ACTIONS(431),
    [anon_sym_false] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(429),
    [sym_identifier] = ACTIONS(431),
  },
  [62] = {
    [sym_line_comment] = STATE(63),
    [sym__s_expr] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [63] = {
    [sym_line_comment] = STATE(63),
    [sym__s_expr] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(440),
  },
  [64] = {
    [aux_sym_str_literal_repeat1] = STATE(70),
    [aux_sym_str_literal_token1] = ACTIONS(443),
    [anon_sym_DQUOTE2] = ACTIONS(445),
    [sym_escape_sequence] = ACTIONS(447),
  },
  [65] = {
    [aux_sym_str_literal_repeat1] = STATE(72),
    [aux_sym_str_literal_token1] = ACTIONS(449),
    [anon_sym_DQUOTE2] = ACTIONS(451),
    [sym_escape_sequence] = ACTIONS(453),
  },
  [66] = {
    [aux_sym_str_literal_repeat1] = STATE(67),
    [aux_sym_str_literal_token1] = ACTIONS(455),
    [anon_sym_DQUOTE2] = ACTIONS(457),
    [sym_escape_sequence] = ACTIONS(459),
  },
  [67] = {
    [aux_sym_str_literal_repeat1] = STATE(69),
    [aux_sym_str_literal_token1] = ACTIONS(461),
    [anon_sym_DQUOTE2] = ACTIONS(463),
    [sym_escape_sequence] = ACTIONS(465),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
  },
  [69] = {
    [aux_sym_str_literal_repeat1] = STATE(69),
    [aux_sym_str_literal_token1] = ACTIONS(469),
    [anon_sym_DQUOTE2] = ACTIONS(472),
    [sym_escape_sequence] = ACTIONS(474),
  },
  [70] = {
    [aux_sym_str_literal_repeat1] = STATE(69),
    [aux_sym_str_literal_token1] = ACTIONS(461),
    [anon_sym_DQUOTE2] = ACTIONS(477),
    [sym_escape_sequence] = ACTIONS(465),
  },
  [71] = {
    [aux_sym_str_literal_repeat1] = STATE(73),
    [aux_sym_str_literal_token1] = ACTIONS(479),
    [anon_sym_DQUOTE2] = ACTIONS(481),
    [sym_escape_sequence] = ACTIONS(483),
  },
  [72] = {
    [aux_sym_str_literal_repeat1] = STATE(69),
    [aux_sym_str_literal_token1] = ACTIONS(461),
    [anon_sym_DQUOTE2] = ACTIONS(485),
    [sym_escape_sequence] = ACTIONS(465),
  },
  [73] = {
    [aux_sym_str_literal_repeat1] = STATE(69),
    [aux_sym_str_literal_token1] = ACTIONS(461),
    [anon_sym_DQUOTE2] = ACTIONS(487),
    [sym_escape_sequence] = ACTIONS(465),
  },
  [74] = {
    [aux_sym_let_pairs_repeat1] = STATE(76),
    [anon_sym_RBRACK] = ACTIONS(489),
    [sym_identifier] = ACTIONS(491),
  },
  [75] = {
    [aux_sym_let_pairs_repeat1] = STATE(74),
    [anon_sym_RBRACK] = ACTIONS(493),
    [sym_identifier] = ACTIONS(491),
  },
  [76] = {
    [aux_sym_let_pairs_repeat1] = STATE(76),
    [anon_sym_RBRACK] = ACTIONS(495),
    [sym_identifier] = ACTIONS(497),
  },
  [77] = {
    [aux_sym_parameters_repeat1] = STATE(78),
    [anon_sym_RBRACK] = ACTIONS(500),
    [sym_identifier] = ACTIONS(502),
  },
  [78] = {
    [aux_sym_parameters_repeat1] = STATE(79),
    [anon_sym_RBRACK] = ACTIONS(504),
    [sym_identifier] = ACTIONS(506),
  },
  [79] = {
    [aux_sym_parameters_repeat1] = STATE(79),
    [anon_sym_RBRACK] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
  },
  [80] = {
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym_identifier] = ACTIONS(335),
  },
  [81] = {
    [sym_parameters] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(513),
  },
  [82] = {
    [aux_sym_str_literal_token1] = ACTIONS(515),
    [sym_escape_sequence] = ACTIONS(517),
  },
  [83] = {
    [aux_sym_str_literal_token1] = ACTIONS(519),
    [sym_escape_sequence] = ACTIONS(521),
  },
  [84] = {
    [anon_sym_RBRACK] = ACTIONS(523),
    [sym_identifier] = ACTIONS(523),
  },
  [85] = {
    [sym_parameters] = STATE(11),
    [anon_sym_LBRACK] = ACTIONS(513),
  },
  [86] = {
    [sym_let_pairs] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(525),
  },
  [87] = {
    [anon_sym_RBRACK] = ACTIONS(343),
    [sym_identifier] = ACTIONS(343),
  },
  [88] = {
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym_identifier] = ACTIONS(351),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_identifier] = ACTIONS(417),
  },
  [90] = {
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_identifier] = ACTIONS(397),
  },
  [91] = {
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_identifier] = ACTIONS(401),
  },
  [92] = {
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_identifier] = ACTIONS(367),
  },
  [93] = {
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_identifier] = ACTIONS(375),
  },
  [94] = {
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym_identifier] = ACTIONS(379),
  },
  [95] = {
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_identifier] = ACTIONS(359),
  },
  [96] = {
    [anon_sym_RBRACK] = ACTIONS(347),
    [sym_identifier] = ACTIONS(347),
  },
  [97] = {
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_identifier] = ACTIONS(339),
  },
  [98] = {
    [anon_sym_RBRACK] = ACTIONS(371),
    [sym_identifier] = ACTIONS(371),
  },
  [99] = {
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_identifier] = ACTIONS(355),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(527),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(529),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(531),
  },
  [103] = {
    [sym_identifier] = ACTIONS(533),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(535),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(537),
  },
  [106] = {
    [sym_identifier] = ACTIONS(539),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(541),
  },
  [108] = {
    [sym_identifier] = ACTIONS(543),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(545),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(547),
  },
  [111] = {
    [aux_sym_line_comment_token1] = ACTIONS(549),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(551),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(553),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(555),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(111),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(108),
  [11] = {.count = 1, .reusable = false}, SHIFT(85),
  [13] = {.count = 1, .reusable = false}, SHIFT(103),
  [15] = {.count = 1, .reusable = false}, SHIFT(86),
  [17] = {.count = 1, .reusable = true}, SHIFT(37),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(22),
  [23] = {.count = 1, .reusable = false}, SHIFT(21),
  [25] = {.count = 1, .reusable = false}, SHIFT(15),
  [27] = {.count = 1, .reusable = false}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = false}, SHIFT(109),
  [37] = {.count = 1, .reusable = true}, SHIFT(109),
  [39] = {.count = 1, .reusable = false}, SHIFT(40),
  [41] = {.count = 1, .reusable = true}, SHIFT(66),
  [43] = {.count = 1, .reusable = true}, SHIFT(82),
  [45] = {.count = 1, .reusable = true}, SHIFT(71),
  [47] = {.count = 1, .reusable = true}, SHIFT(33),
  [49] = {.count = 1, .reusable = false}, SHIFT(50),
  [51] = {.count = 1, .reusable = false}, SHIFT(101),
  [53] = {.count = 1, .reusable = true}, SHIFT(101),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [57] = {.count = 1, .reusable = false}, SHIFT(59),
  [59] = {.count = 1, .reusable = true}, SHIFT(59),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [63] = {.count = 1, .reusable = false}, SHIFT(9),
  [65] = {.count = 1, .reusable = true}, SHIFT(9),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [69] = {.count = 1, .reusable = false}, SHIFT(5),
  [71] = {.count = 1, .reusable = true}, SHIFT(5),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(37),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(17),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(18),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(19),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(59),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(59),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(40),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(66),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(82),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(71),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(33),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(37),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(17),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(18),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(19),
  [130] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(9),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(9),
  [136] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(40),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(66),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(82),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(71),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(33),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 12),
  [153] = {.count = 1, .reusable = false}, SHIFT(102),
  [155] = {.count = 1, .reusable = true}, SHIFT(102),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [159] = {.count = 1, .reusable = false}, SHIFT(112),
  [161] = {.count = 1, .reusable = true}, SHIFT(112),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [165] = {.count = 1, .reusable = false}, SHIFT(100),
  [167] = {.count = 1, .reusable = true}, SHIFT(100),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [171] = {.count = 1, .reusable = false}, SHIFT(107),
  [173] = {.count = 1, .reusable = true}, SHIFT(107),
  [175] = {.count = 1, .reusable = true}, SHIFT(2),
  [177] = {.count = 1, .reusable = true}, SHIFT(36),
  [179] = {.count = 1, .reusable = true}, SHIFT(24),
  [181] = {.count = 1, .reusable = true}, SHIFT(26),
  [183] = {.count = 1, .reusable = true}, SHIFT(14),
  [185] = {.count = 1, .reusable = false}, SHIFT(91),
  [187] = {.count = 1, .reusable = true}, SHIFT(91),
  [189] = {.count = 1, .reusable = false}, SHIFT(87),
  [191] = {.count = 1, .reusable = true}, SHIFT(64),
  [193] = {.count = 1, .reusable = true}, SHIFT(83),
  [195] = {.count = 1, .reusable = true}, SHIFT(65),
  [197] = {.count = 1, .reusable = true}, SHIFT(35),
  [199] = {.count = 1, .reusable = false}, SHIFT(105),
  [201] = {.count = 1, .reusable = true}, SHIFT(105),
  [203] = {.count = 1, .reusable = false}, SHIFT(110),
  [205] = {.count = 1, .reusable = true}, SHIFT(110),
  [207] = {.count = 1, .reusable = false}, SHIFT(58),
  [209] = {.count = 1, .reusable = true}, SHIFT(58),
  [211] = {.count = 1, .reusable = false}, SHIFT(53),
  [213] = {.count = 1, .reusable = true}, SHIFT(53),
  [215] = {.count = 1, .reusable = false}, SHIFT(54),
  [217] = {.count = 1, .reusable = true}, SHIFT(54),
  [219] = {.count = 1, .reusable = false}, SHIFT(84),
  [221] = {.count = 1, .reusable = true}, SHIFT(84),
  [223] = {.count = 1, .reusable = false}, SHIFT(12),
  [225] = {.count = 1, .reusable = true}, SHIFT(12),
  [227] = {.count = 1, .reusable = false}, SHIFT(23),
  [229] = {.count = 1, .reusable = true}, SHIFT(23),
  [231] = {.count = 1, .reusable = false}, SHIFT(25),
  [233] = {.count = 1, .reusable = true}, SHIFT(25),
  [235] = {.count = 1, .reusable = false}, SHIFT(89),
  [237] = {.count = 1, .reusable = true}, SHIFT(89),
  [239] = {.count = 1, .reusable = false}, SHIFT(104),
  [241] = {.count = 1, .reusable = true}, SHIFT(104),
  [243] = {.count = 1, .reusable = false}, SHIFT(90),
  [245] = {.count = 1, .reusable = true}, SHIFT(90),
  [247] = {.count = 1, .reusable = false}, SHIFT(113),
  [249] = {.count = 1, .reusable = true}, SHIFT(113),
  [251] = {.count = 1, .reusable = true}, SHIFT(38),
  [253] = {.count = 1, .reusable = false}, SHIFT(34),
  [255] = {.count = 1, .reusable = true}, SHIFT(34),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(37),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(45),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(45),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(40),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(66),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(82),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(71),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(33),
  [281] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [283] = {.count = 1, .reusable = true}, SHIFT(80),
  [285] = {.count = 1, .reusable = false}, SHIFT(45),
  [287] = {.count = 1, .reusable = true}, SHIFT(45),
  [289] = {.count = 1, .reusable = true}, SHIFT(99),
  [291] = {.count = 1, .reusable = true}, SHIFT(43),
  [293] = {.count = 1, .reusable = true}, SHIFT(44),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(37),
  [298] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(34),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(34),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(40),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(66),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(82),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(71),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(33),
  [321] = {.count = 1, .reusable = true}, SHIFT(95),
  [323] = {.count = 1, .reusable = true}, SHIFT(88),
  [325] = {.count = 1, .reusable = false}, SHIFT(30),
  [327] = {.count = 1, .reusable = true}, SHIFT(30),
  [329] = {.count = 1, .reusable = true}, SHIFT(42),
  [331] = {.count = 1, .reusable = false}, SHIFT(28),
  [333] = {.count = 1, .reusable = true}, SHIFT(28),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 17),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 17),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [363] = {.count = 1, .reusable = false}, SHIFT(61),
  [365] = {.count = 1, .reusable = true}, SHIFT(61),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [385] = {.count = 1, .reusable = true}, SHIFT(106),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 22),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 22),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 19),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 19),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [423] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [429] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 16),
  [431] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 16),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [435] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [443] = {.count = 1, .reusable = false}, SHIFT(70),
  [445] = {.count = 1, .reusable = true}, SHIFT(92),
  [447] = {.count = 1, .reusable = true}, SHIFT(70),
  [449] = {.count = 1, .reusable = false}, SHIFT(72),
  [451] = {.count = 1, .reusable = true}, SHIFT(94),
  [453] = {.count = 1, .reusable = true}, SHIFT(72),
  [455] = {.count = 1, .reusable = false}, SHIFT(67),
  [457] = {.count = 1, .reusable = true}, SHIFT(46),
  [459] = {.count = 1, .reusable = true}, SHIFT(67),
  [461] = {.count = 1, .reusable = false}, SHIFT(69),
  [463] = {.count = 1, .reusable = true}, SHIFT(39),
  [465] = {.count = 1, .reusable = true}, SHIFT(69),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [469] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(69),
  [472] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(69),
  [477] = {.count = 1, .reusable = true}, SHIFT(97),
  [479] = {.count = 1, .reusable = false}, SHIFT(73),
  [481] = {.count = 1, .reusable = true}, SHIFT(49),
  [483] = {.count = 1, .reusable = true}, SHIFT(73),
  [485] = {.count = 1, .reusable = true}, SHIFT(98),
  [487] = {.count = 1, .reusable = true}, SHIFT(47),
  [489] = {.count = 1, .reusable = true}, SHIFT(55),
  [491] = {.count = 1, .reusable = true}, SHIFT(20),
  [493] = {.count = 1, .reusable = true}, SHIFT(60),
  [495] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23),
  [497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23), SHIFT_REPEAT(20),
  [500] = {.count = 1, .reusable = true}, SHIFT(57),
  [502] = {.count = 1, .reusable = true}, SHIFT(78),
  [504] = {.count = 1, .reusable = true}, SHIFT(52),
  [506] = {.count = 1, .reusable = true}, SHIFT(79),
  [508] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(79),
  [513] = {.count = 1, .reusable = true}, SHIFT(77),
  [515] = {.count = 1, .reusable = false}, SHIFT(48),
  [517] = {.count = 1, .reusable = true}, SHIFT(48),
  [519] = {.count = 1, .reusable = false}, SHIFT(93),
  [521] = {.count = 1, .reusable = true}, SHIFT(93),
  [523] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 21),
  [525] = {.count = 1, .reusable = true}, SHIFT(75),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 15),
  [529] = {.count = 1, .reusable = true}, SHIFT(41),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 20),
  [533] = {.count = 1, .reusable = true}, SHIFT(81),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 24),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [539] = {.count = 1, .reusable = true}, SHIFT(56),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 13),
  [543] = {.count = 1, .reusable = true}, SHIFT(27),
  [545] = {.count = 1, .reusable = true}, SHIFT(96),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [549] = {.count = 1, .reusable = true}, SHIFT(68),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 11),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 10),
  [555] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
