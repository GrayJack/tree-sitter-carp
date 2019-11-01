#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 113
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_DOT = 15,
  anon_sym_AMP = 16,
  anon_sym_AT = 17,
  anon_sym_TILDE = 18,
  sym_integer_literal = 19,
  sym_float_literal = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_str_literal_token1 = 24,
  anon_sym_DQUOTE2 = 25,
  anon_sym_BSLASH = 26,
  anon_sym_POUND_DQUOTE = 27,
  sym_escape_sequence = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  sym_identifier = 31,
  sym_source_file = 32,
  sym_line_comment = 33,
  sym__s_expr = 34,
  sym__expr = 35,
  sym__anything = 36,
  sym__s_forms = 37,
  sym__literals = 38,
  sym__short_helper = 39,
  sym_def = 40,
  sym_fn = 41,
  sym_defn = 42,
  sym_let = 43,
  sym_let_pairs = 44,
  sym_do = 45,
  sym_if = 46,
  sym_while = 47,
  sym_ref = 48,
  sym_call_expression = 49,
  sym_call_name = 50,
  sym_short_ref = 51,
  sym_short_copy = 52,
  sym_short_fn_ref = 53,
  sym_parameters = 54,
  sym_bool_literal = 55,
  sym_str_literal = 56,
  sym_char_literal = 57,
  sym_pattern_literal = 58,
  sym_array_expression = 59,
  sym_map_expression = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_let_pairs_repeat1 = 62,
  aux_sym_do_repeat1 = 63,
  aux_sym_call_expression_repeat1 = 64,
  aux_sym_parameters_repeat1 = 65,
  aux_sym_str_literal_repeat1 = 66,
  aux_sym_array_expression_repeat1 = 67,
  aux_sym_map_expression_repeat1 = 68,
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
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(63);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(63);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(63);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 41:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 54:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 56:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 57:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 60:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 61:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 62:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(64);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(68);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 66:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(70);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(56);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 69:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(55);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
      END_STATE();
    case 72:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(72);
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
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
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
    [sym_source_file] = STATE(112),
    [sym_line_comment] = STATE(62),
    [sym__s_expr] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(107),
    [sym__s_expr] = STATE(107),
    [sym__anything] = STATE(107),
    [sym__s_forms] = STATE(107),
    [sym__literals] = STATE(107),
    [sym__short_helper] = STATE(107),
    [sym_def] = STATE(107),
    [sym_fn] = STATE(107),
    [sym_defn] = STATE(107),
    [sym_let] = STATE(107),
    [sym_do] = STATE(107),
    [sym_if] = STATE(107),
    [sym_while] = STATE(107),
    [sym_ref] = STATE(107),
    [sym_call_expression] = STATE(107),
    [sym_call_name] = STATE(6),
    [sym_short_ref] = STATE(107),
    [sym_short_copy] = STATE(107),
    [sym_short_fn_ref] = STATE(51),
    [sym_bool_literal] = STATE(107),
    [sym_str_literal] = STATE(107),
    [sym_char_literal] = STATE(107),
    [sym_pattern_literal] = STATE(107),
    [sym_array_expression] = STATE(107),
    [sym_map_expression] = STATE(107),
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
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
  },
  [3] = {
    [sym_line_comment] = STATE(100),
    [sym__s_expr] = STATE(100),
    [sym__anything] = STATE(100),
    [sym__s_forms] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__short_helper] = STATE(100),
    [sym_def] = STATE(100),
    [sym_fn] = STATE(100),
    [sym_defn] = STATE(100),
    [sym_let] = STATE(100),
    [sym_do] = STATE(100),
    [sym_if] = STATE(100),
    [sym_while] = STATE(100),
    [sym_ref] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_call_name] = STATE(6),
    [sym_short_ref] = STATE(100),
    [sym_short_copy] = STATE(100),
    [sym_short_fn_ref] = STATE(51),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
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
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(49),
    [sym_float_literal] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
  },
  [4] = {
    [sym__s_expr] = STATE(57),
    [sym__expr] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__short_helper] = STATE(57),
    [sym_short_ref] = STATE(57),
    [sym_short_copy] = STATE(57),
    [sym_short_fn_ref] = STATE(57),
    [sym_bool_literal] = STATE(57),
    [sym_str_literal] = STATE(57),
    [sym_char_literal] = STATE(57),
    [sym_pattern_literal] = STATE(57),
    [sym_array_expression] = STATE(57),
    [sym_map_expression] = STATE(57),
    [aux_sym_do_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(55),
    [sym_float_literal] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(55),
  },
  [5] = {
    [sym__s_expr] = STATE(8),
    [sym__expr] = STATE(8),
    [sym__literals] = STATE(8),
    [sym__short_helper] = STATE(8),
    [sym_short_ref] = STATE(8),
    [sym_short_copy] = STATE(8),
    [sym_short_fn_ref] = STATE(8),
    [sym_bool_literal] = STATE(8),
    [sym_str_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_pattern_literal] = STATE(8),
    [sym_array_expression] = STATE(8),
    [sym_map_expression] = STATE(8),
    [aux_sym_call_expression_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(61),
    [sym_float_literal] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(61),
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
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(67),
    [sym_float_literal] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(67),
  },
  [7] = {
    [sym__s_expr] = STATE(57),
    [sym__expr] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__short_helper] = STATE(57),
    [sym_short_ref] = STATE(57),
    [sym_short_copy] = STATE(57),
    [sym_short_fn_ref] = STATE(57),
    [sym_bool_literal] = STATE(57),
    [sym_str_literal] = STATE(57),
    [sym_char_literal] = STATE(57),
    [sym_pattern_literal] = STATE(57),
    [sym_array_expression] = STATE(57),
    [sym_map_expression] = STATE(57),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_TILDE] = ACTIONS(85),
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
  [8] = {
    [sym__s_expr] = STATE(8),
    [sym__expr] = STATE(8),
    [sym__literals] = STATE(8),
    [sym__short_helper] = STATE(8),
    [sym_short_ref] = STATE(8),
    [sym_short_copy] = STATE(8),
    [sym_short_fn_ref] = STATE(8),
    [sym_bool_literal] = STATE(8),
    [sym_str_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_pattern_literal] = STATE(8),
    [sym_array_expression] = STATE(8),
    [sym_map_expression] = STATE(8),
    [aux_sym_call_expression_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(123),
    [sym_integer_literal] = ACTIONS(126),
    [sym_float_literal] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_false] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_BSLASH] = ACTIONS(138),
    [anon_sym_POUND_DQUOTE] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(144),
    [sym_identifier] = ACTIONS(126),
  },
  [9] = {
    [sym__s_expr] = STATE(57),
    [sym__expr] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__short_helper] = STATE(57),
    [sym_short_ref] = STATE(57),
    [sym_short_copy] = STATE(57),
    [sym_short_fn_ref] = STATE(57),
    [sym_bool_literal] = STATE(57),
    [sym_str_literal] = STATE(57),
    [sym_char_literal] = STATE(57),
    [sym_pattern_literal] = STATE(57),
    [sym_array_expression] = STATE(57),
    [sym_map_expression] = STATE(57),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(55),
    [sym_float_literal] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(55),
  },
  [10] = {
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
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(151),
    [sym_float_literal] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(151),
  },
  [11] = {
    [sym__s_expr] = STATE(99),
    [sym__expr] = STATE(99),
    [sym__literals] = STATE(99),
    [sym__short_helper] = STATE(99),
    [sym_short_ref] = STATE(99),
    [sym_short_copy] = STATE(99),
    [sym_short_fn_ref] = STATE(99),
    [sym_bool_literal] = STATE(99),
    [sym_str_literal] = STATE(99),
    [sym_char_literal] = STATE(99),
    [sym_pattern_literal] = STATE(99),
    [sym_array_expression] = STATE(99),
    [sym_map_expression] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(157),
    [sym_float_literal] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(157),
  },
  [12] = {
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
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(163),
    [sym_float_literal] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(163),
  },
  [13] = {
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
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(169),
    [sym_float_literal] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(169),
  },
  [14] = {
    [sym__s_expr] = STATE(26),
    [sym__expr] = STATE(26),
    [sym__literals] = STATE(26),
    [sym__short_helper] = STATE(26),
    [sym_short_ref] = STATE(26),
    [sym_short_copy] = STATE(26),
    [sym_short_fn_ref] = STATE(26),
    [sym_bool_literal] = STATE(26),
    [sym_str_literal] = STATE(26),
    [sym_char_literal] = STATE(26),
    [sym_pattern_literal] = STATE(26),
    [sym_array_expression] = STATE(26),
    [sym_map_expression] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(173),
  },
  [15] = {
    [sym__s_expr] = STATE(14),
    [sym__expr] = STATE(14),
    [sym__literals] = STATE(14),
    [sym__short_helper] = STATE(14),
    [sym_short_ref] = STATE(14),
    [sym_short_copy] = STATE(14),
    [sym_short_fn_ref] = STATE(14),
    [sym_bool_literal] = STATE(14),
    [sym_str_literal] = STATE(14),
    [sym_char_literal] = STATE(14),
    [sym_pattern_literal] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_map_expression] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(177),
    [sym_float_literal] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(177),
  },
  [16] = {
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
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(181),
    [sym_float_literal] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(181),
  },
  [17] = {
    [sym__s_expr] = STATE(108),
    [sym__expr] = STATE(108),
    [sym__literals] = STATE(108),
    [sym__short_helper] = STATE(108),
    [sym_short_ref] = STATE(108),
    [sym_short_copy] = STATE(108),
    [sym_short_fn_ref] = STATE(108),
    [sym_bool_literal] = STATE(108),
    [sym_str_literal] = STATE(108),
    [sym_char_literal] = STATE(108),
    [sym_pattern_literal] = STATE(108),
    [sym_array_expression] = STATE(108),
    [sym_map_expression] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(185),
    [sym_float_literal] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(185),
  },
  [18] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(189),
    [sym_float_literal] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(189),
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
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(193),
    [sym_float_literal] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(193),
  },
  [20] = {
    [sym__s_expr] = STATE(52),
    [sym__expr] = STATE(52),
    [sym__literals] = STATE(52),
    [sym__short_helper] = STATE(52),
    [sym_short_ref] = STATE(52),
    [sym_short_copy] = STATE(52),
    [sym_short_fn_ref] = STATE(52),
    [sym_bool_literal] = STATE(52),
    [sym_str_literal] = STATE(52),
    [sym_char_literal] = STATE(52),
    [sym_pattern_literal] = STATE(52),
    [sym_array_expression] = STATE(52),
    [sym_map_expression] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(197),
    [sym_float_literal] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(197),
  },
  [21] = {
    [sym__s_expr] = STATE(111),
    [sym__expr] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__short_helper] = STATE(111),
    [sym_short_ref] = STATE(111),
    [sym_short_copy] = STATE(111),
    [sym_short_fn_ref] = STATE(111),
    [sym_bool_literal] = STATE(111),
    [sym_str_literal] = STATE(111),
    [sym_char_literal] = STATE(111),
    [sym_pattern_literal] = STATE(111),
    [sym_array_expression] = STATE(111),
    [sym_map_expression] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(201),
    [sym_float_literal] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(201),
  },
  [22] = {
    [sym__s_expr] = STATE(87),
    [sym__expr] = STATE(87),
    [sym__literals] = STATE(87),
    [sym__short_helper] = STATE(87),
    [sym_short_ref] = STATE(87),
    [sym_short_copy] = STATE(87),
    [sym_short_fn_ref] = STATE(87),
    [sym_bool_literal] = STATE(87),
    [sym_str_literal] = STATE(87),
    [sym_char_literal] = STATE(87),
    [sym_pattern_literal] = STATE(87),
    [sym_array_expression] = STATE(87),
    [sym_map_expression] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(213),
    [sym_integer_literal] = ACTIONS(215),
    [sym_float_literal] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_POUND_DQUOTE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [sym_identifier] = ACTIONS(215),
  },
  [23] = {
    [sym__s_expr] = STATE(79),
    [sym__expr] = STATE(79),
    [sym__literals] = STATE(79),
    [sym__short_helper] = STATE(79),
    [sym_short_ref] = STATE(79),
    [sym_short_copy] = STATE(79),
    [sym_short_fn_ref] = STATE(79),
    [sym_bool_literal] = STATE(79),
    [sym_str_literal] = STATE(79),
    [sym_char_literal] = STATE(79),
    [sym_pattern_literal] = STATE(79),
    [sym_array_expression] = STATE(79),
    [sym_map_expression] = STATE(79),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(213),
    [sym_integer_literal] = ACTIONS(229),
    [sym_float_literal] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_POUND_DQUOTE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [sym_identifier] = ACTIONS(229),
  },
  [24] = {
    [sym__s_expr] = STATE(88),
    [sym__expr] = STATE(88),
    [sym__literals] = STATE(88),
    [sym__short_helper] = STATE(88),
    [sym_short_ref] = STATE(88),
    [sym_short_copy] = STATE(88),
    [sym_short_fn_ref] = STATE(88),
    [sym_bool_literal] = STATE(88),
    [sym_str_literal] = STATE(88),
    [sym_char_literal] = STATE(88),
    [sym_pattern_literal] = STATE(88),
    [sym_array_expression] = STATE(88),
    [sym_map_expression] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(213),
    [sym_integer_literal] = ACTIONS(233),
    [sym_float_literal] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_POUND_DQUOTE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [sym_identifier] = ACTIONS(233),
  },
  [25] = {
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
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(213),
    [sym_integer_literal] = ACTIONS(237),
    [sym_float_literal] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_POUND_DQUOTE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [sym_identifier] = ACTIONS(237),
  },
  [26] = {
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
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(241),
    [sym_float_literal] = ACTIONS(243),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(241),
  },
  [27] = {
    [sym__literals] = STATE(32),
    [sym_bool_literal] = STATE(32),
    [sym_str_literal] = STATE(32),
    [sym_char_literal] = STATE(32),
    [sym_pattern_literal] = STATE(32),
    [sym_array_expression] = STATE(32),
    [sym_map_expression] = STATE(32),
    [aux_sym_array_expression_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_integer_literal] = ACTIONS(247),
    [sym_float_literal] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(247),
  },
  [28] = {
    [sym__literals] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_char_literal] = STATE(43),
    [sym_pattern_literal] = STATE(43),
    [sym_array_expression] = STATE(43),
    [sym_map_expression] = STATE(43),
    [aux_sym_map_expression_repeat1] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(254),
    [sym_float_literal] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(260),
    [anon_sym_false] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_POUND_DQUOTE] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(275),
    [sym_identifier] = ACTIONS(254),
  },
  [29] = {
    [sym__literals] = STATE(32),
    [sym_bool_literal] = STATE(32),
    [sym_str_literal] = STATE(32),
    [sym_char_literal] = STATE(32),
    [sym_pattern_literal] = STATE(32),
    [sym_array_expression] = STATE(32),
    [sym_map_expression] = STATE(32),
    [aux_sym_array_expression_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_integer_literal] = ACTIONS(247),
    [sym_float_literal] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(247),
  },
  [30] = {
    [sym__literals] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_char_literal] = STATE(43),
    [sym_pattern_literal] = STATE(43),
    [sym_array_expression] = STATE(43),
    [sym_map_expression] = STATE(43),
    [aux_sym_map_expression_repeat1] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(279),
    [sym_float_literal] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(283),
    [sym_identifier] = ACTIONS(279),
  },
  [31] = {
    [sym__literals] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_char_literal] = STATE(43),
    [sym_pattern_literal] = STATE(43),
    [sym_array_expression] = STATE(43),
    [sym_map_expression] = STATE(43),
    [aux_sym_map_expression_repeat1] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(279),
    [sym_float_literal] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_identifier] = ACTIONS(279),
  },
  [32] = {
    [sym__literals] = STATE(32),
    [sym_bool_literal] = STATE(32),
    [sym_str_literal] = STATE(32),
    [sym_char_literal] = STATE(32),
    [sym_pattern_literal] = STATE(32),
    [sym_array_expression] = STATE(32),
    [sym_map_expression] = STATE(32),
    [aux_sym_array_expression_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym_integer_literal] = ACTIONS(292),
    [sym_float_literal] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(298),
    [anon_sym_false] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(304),
    [anon_sym_POUND_DQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(310),
    [sym_identifier] = ACTIONS(292),
  },
  [33] = {
    [sym__literals] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_char_literal] = STATE(43),
    [sym_pattern_literal] = STATE(43),
    [sym_array_expression] = STATE(43),
    [sym_map_expression] = STATE(43),
    [aux_sym_map_expression_repeat1] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(279),
    [sym_float_literal] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(313),
    [sym_identifier] = ACTIONS(279),
  },
  [34] = {
    [sym__literals] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_char_literal] = STATE(43),
    [sym_pattern_literal] = STATE(43),
    [sym_array_expression] = STATE(43),
    [sym_map_expression] = STATE(43),
    [aux_sym_map_expression_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(279),
    [sym_float_literal] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(315),
    [sym_identifier] = ACTIONS(279),
  },
  [35] = {
    [sym__literals] = STATE(29),
    [sym_bool_literal] = STATE(29),
    [sym_str_literal] = STATE(29),
    [sym_char_literal] = STATE(29),
    [sym_pattern_literal] = STATE(29),
    [sym_array_expression] = STATE(29),
    [sym_map_expression] = STATE(29),
    [aux_sym_array_expression_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(317),
    [sym_integer_literal] = ACTIONS(319),
    [sym_float_literal] = ACTIONS(321),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(319),
  },
  [36] = {
    [sym__literals] = STATE(27),
    [sym_bool_literal] = STATE(27),
    [sym_str_literal] = STATE(27),
    [sym_char_literal] = STATE(27),
    [sym_pattern_literal] = STATE(27),
    [sym_array_expression] = STATE(27),
    [sym_map_expression] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_integer_literal] = ACTIONS(325),
    [sym_float_literal] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(325),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(329),
    [sym_integer_literal] = ACTIONS(331),
    [sym_float_literal] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(329),
    [anon_sym_POUND_DQUOTE] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
    [sym_identifier] = ACTIONS(331),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(333),
    [sym_integer_literal] = ACTIONS(335),
    [sym_float_literal] = ACTIONS(333),
    [anon_sym_true] = ACTIONS(335),
    [anon_sym_false] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(337),
    [sym_integer_literal] = ACTIONS(339),
    [sym_float_literal] = ACTIONS(337),
    [anon_sym_true] = ACTIONS(339),
    [anon_sym_false] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [sym_identifier] = ACTIONS(339),
  },
  [40] = {
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
  [41] = {
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
  [42] = {
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
  [43] = {
    [sym__literals] = STATE(60),
    [sym_bool_literal] = STATE(60),
    [sym_str_literal] = STATE(60),
    [sym_char_literal] = STATE(60),
    [sym_pattern_literal] = STATE(60),
    [sym_array_expression] = STATE(60),
    [sym_map_expression] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(353),
    [sym_float_literal] = ACTIONS(355),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(353),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(357),
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
    [anon_sym_RBRACE] = ACTIONS(357),
    [sym_identifier] = ACTIONS(359),
  },
  [45] = {
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
  [46] = {
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
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(369),
    [sym_integer_literal] = ACTIONS(371),
    [sym_float_literal] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_POUND_DQUOTE] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(369),
    [sym_identifier] = ACTIONS(371),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
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
    [sym_identifier] = ACTIONS(375),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [sym_integer_literal] = ACTIONS(381),
    [sym_float_literal] = ACTIONS(377),
    [anon_sym_true] = ACTIONS(381),
    [anon_sym_false] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(377),
    [anon_sym_POUND_DQUOTE] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [sym_identifier] = ACTIONS(381),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(383),
    [anon_sym_TILDE] = ACTIONS(383),
    [sym_integer_literal] = ACTIONS(385),
    [sym_float_literal] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(385),
    [anon_sym_false] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_BSLASH] = ACTIONS(383),
    [anon_sym_POUND_DQUOTE] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_identifier] = ACTIONS(385),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_TILDE] = ACTIONS(387),
    [sym_integer_literal] = ACTIONS(389),
    [sym_float_literal] = ACTIONS(387),
    [anon_sym_true] = ACTIONS(389),
    [anon_sym_false] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_POUND_DQUOTE] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(387),
    [sym_identifier] = ACTIONS(389),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(391),
    [sym_integer_literal] = ACTIONS(393),
    [sym_float_literal] = ACTIONS(391),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_false] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(391),
    [anon_sym_POUND_DQUOTE] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [sym_identifier] = ACTIONS(393),
  },
  [53] = {
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
  [54] = {
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
  [55] = {
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
  [56] = {
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
  [57] = {
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
  [58] = {
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
  [59] = {
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
  [60] = {
    [anon_sym_LBRACK] = ACTIONS(423),
    [sym_integer_literal] = ACTIONS(425),
    [sym_float_literal] = ACTIONS(423),
    [anon_sym_true] = ACTIONS(425),
    [anon_sym_false] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_BSLASH] = ACTIONS(423),
    [anon_sym_POUND_DQUOTE] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(423),
    [sym_identifier] = ACTIONS(425),
  },
  [61] = {
    [sym_line_comment] = STATE(61),
    [sym__s_expr] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(432),
  },
  [62] = {
    [sym_line_comment] = STATE(61),
    [sym__s_expr] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
  },
  [64] = {
    [aux_sym_str_literal_repeat1] = STATE(69),
    [aux_sym_str_literal_token1] = ACTIONS(439),
    [anon_sym_DQUOTE2] = ACTIONS(441),
    [sym_escape_sequence] = ACTIONS(443),
  },
  [65] = {
    [aux_sym_str_literal_repeat1] = STATE(66),
    [aux_sym_str_literal_token1] = ACTIONS(445),
    [anon_sym_DQUOTE2] = ACTIONS(447),
    [sym_escape_sequence] = ACTIONS(449),
  },
  [66] = {
    [aux_sym_str_literal_repeat1] = STATE(68),
    [aux_sym_str_literal_token1] = ACTIONS(451),
    [anon_sym_DQUOTE2] = ACTIONS(453),
    [sym_escape_sequence] = ACTIONS(455),
  },
  [67] = {
    [aux_sym_str_literal_repeat1] = STATE(72),
    [aux_sym_str_literal_token1] = ACTIONS(457),
    [anon_sym_DQUOTE2] = ACTIONS(459),
    [sym_escape_sequence] = ACTIONS(461),
  },
  [68] = {
    [aux_sym_str_literal_repeat1] = STATE(68),
    [aux_sym_str_literal_token1] = ACTIONS(463),
    [anon_sym_DQUOTE2] = ACTIONS(466),
    [sym_escape_sequence] = ACTIONS(468),
  },
  [69] = {
    [aux_sym_str_literal_repeat1] = STATE(68),
    [aux_sym_str_literal_token1] = ACTIONS(451),
    [anon_sym_DQUOTE2] = ACTIONS(471),
    [sym_escape_sequence] = ACTIONS(455),
  },
  [70] = {
    [aux_sym_str_literal_repeat1] = STATE(71),
    [aux_sym_str_literal_token1] = ACTIONS(473),
    [anon_sym_DQUOTE2] = ACTIONS(475),
    [sym_escape_sequence] = ACTIONS(477),
  },
  [71] = {
    [aux_sym_str_literal_repeat1] = STATE(68),
    [aux_sym_str_literal_token1] = ACTIONS(451),
    [anon_sym_DQUOTE2] = ACTIONS(479),
    [sym_escape_sequence] = ACTIONS(455),
  },
  [72] = {
    [aux_sym_str_literal_repeat1] = STATE(68),
    [aux_sym_str_literal_token1] = ACTIONS(451),
    [anon_sym_DQUOTE2] = ACTIONS(481),
    [sym_escape_sequence] = ACTIONS(455),
  },
  [73] = {
    [aux_sym_parameters_repeat1] = STATE(78),
    [anon_sym_RBRACK] = ACTIONS(483),
    [sym_identifier] = ACTIONS(485),
  },
  [74] = {
    [aux_sym_let_pairs_repeat1] = STATE(77),
    [anon_sym_RBRACK] = ACTIONS(487),
    [sym_identifier] = ACTIONS(489),
  },
  [75] = {
    [aux_sym_let_pairs_repeat1] = STATE(74),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym_identifier] = ACTIONS(489),
  },
  [76] = {
    [aux_sym_parameters_repeat1] = STATE(73),
    [anon_sym_RBRACK] = ACTIONS(493),
    [sym_identifier] = ACTIONS(495),
  },
  [77] = {
    [aux_sym_let_pairs_repeat1] = STATE(77),
    [anon_sym_RBRACK] = ACTIONS(497),
    [sym_identifier] = ACTIONS(499),
  },
  [78] = {
    [aux_sym_parameters_repeat1] = STATE(78),
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym_identifier] = ACTIONS(504),
  },
  [79] = {
    [anon_sym_RBRACK] = ACTIONS(507),
    [sym_identifier] = ACTIONS(507),
  },
  [80] = {
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_identifier] = ACTIONS(333),
  },
  [81] = {
    [aux_sym_str_literal_token1] = ACTIONS(509),
    [sym_escape_sequence] = ACTIONS(511),
  },
  [82] = {
    [aux_sym_str_literal_token1] = ACTIONS(513),
    [sym_escape_sequence] = ACTIONS(515),
  },
  [83] = {
    [sym_parameters] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(517),
  },
  [84] = {
    [sym_parameters] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(517),
  },
  [85] = {
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_identifier] = ACTIONS(337),
  },
  [86] = {
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
  },
  [87] = {
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [88] = {
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_identifier] = ACTIONS(399),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_identifier] = ACTIONS(391),
  },
  [90] = {
    [anon_sym_RBRACK] = ACTIONS(361),
    [sym_identifier] = ACTIONS(361),
  },
  [91] = {
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_identifier] = ACTIONS(365),
  },
  [92] = {
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_identifier] = ACTIONS(369),
  },
  [93] = {
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_identifier] = ACTIONS(345),
  },
  [94] = {
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_identifier] = ACTIONS(373),
  },
  [95] = {
    [anon_sym_RBRACK] = ACTIONS(329),
    [sym_identifier] = ACTIONS(329),
  },
  [96] = {
    [sym_let_pairs] = STATE(12),
    [anon_sym_LBRACK] = ACTIONS(519),
  },
  [97] = {
    [anon_sym_RBRACK] = ACTIONS(357),
    [sym_identifier] = ACTIONS(357),
  },
  [98] = {
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym_identifier] = ACTIONS(341),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(521),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(523),
  },
  [101] = {
    [sym_identifier] = ACTIONS(525),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(527),
  },
  [103] = {
    [sym_identifier] = ACTIONS(529),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(531),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(533),
  },
  [106] = {
    [sym_identifier] = ACTIONS(535),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(537),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(539),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(541),
  },
  [110] = {
    [aux_sym_line_comment_token1] = ACTIONS(543),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(545),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(547),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(110),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(106),
  [11] = {.count = 1, .reusable = false}, SHIFT(84),
  [13] = {.count = 1, .reusable = false}, SHIFT(101),
  [15] = {.count = 1, .reusable = false}, SHIFT(96),
  [17] = {.count = 1, .reusable = true}, SHIFT(36),
  [19] = {.count = 1, .reusable = false}, SHIFT(4),
  [21] = {.count = 1, .reusable = false}, SHIFT(15),
  [23] = {.count = 1, .reusable = false}, SHIFT(16),
  [25] = {.count = 1, .reusable = false}, SHIFT(17),
  [27] = {.count = 1, .reusable = true}, SHIFT(18),
  [29] = {.count = 1, .reusable = true}, SHIFT(19),
  [31] = {.count = 1, .reusable = true}, SHIFT(20),
  [33] = {.count = 1, .reusable = false}, SHIFT(107),
  [35] = {.count = 1, .reusable = true}, SHIFT(107),
  [37] = {.count = 1, .reusable = false}, SHIFT(39),
  [39] = {.count = 1, .reusable = true}, SHIFT(67),
  [41] = {.count = 1, .reusable = true}, SHIFT(81),
  [43] = {.count = 1, .reusable = true}, SHIFT(70),
  [45] = {.count = 1, .reusable = true}, SHIFT(34),
  [47] = {.count = 1, .reusable = false}, SHIFT(49),
  [49] = {.count = 1, .reusable = false}, SHIFT(100),
  [51] = {.count = 1, .reusable = true}, SHIFT(100),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(57),
  [57] = {.count = 1, .reusable = true}, SHIFT(57),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [61] = {.count = 1, .reusable = false}, SHIFT(8),
  [63] = {.count = 1, .reusable = true}, SHIFT(8),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [67] = {.count = 1, .reusable = false}, SHIFT(5),
  [69] = {.count = 1, .reusable = true}, SHIFT(5),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(36),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(18),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(19),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(20),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(57),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(57),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(39),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(67),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(81),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(70),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(34),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(36),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(18),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(19),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(20),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(8),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(8),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(39),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(67),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(81),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(70),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(34),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 12),
  [151] = {.count = 1, .reusable = false}, SHIFT(104),
  [153] = {.count = 1, .reusable = true}, SHIFT(104),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [157] = {.count = 1, .reusable = false}, SHIFT(99),
  [159] = {.count = 1, .reusable = true}, SHIFT(99),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [163] = {.count = 1, .reusable = false}, SHIFT(105),
  [165] = {.count = 1, .reusable = true}, SHIFT(105),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [169] = {.count = 1, .reusable = false}, SHIFT(109),
  [171] = {.count = 1, .reusable = true}, SHIFT(109),
  [173] = {.count = 1, .reusable = false}, SHIFT(26),
  [175] = {.count = 1, .reusable = true}, SHIFT(26),
  [177] = {.count = 1, .reusable = false}, SHIFT(14),
  [179] = {.count = 1, .reusable = true}, SHIFT(14),
  [181] = {.count = 1, .reusable = false}, SHIFT(11),
  [183] = {.count = 1, .reusable = true}, SHIFT(11),
  [185] = {.count = 1, .reusable = false}, SHIFT(108),
  [187] = {.count = 1, .reusable = true}, SHIFT(108),
  [189] = {.count = 1, .reusable = false}, SHIFT(59),
  [191] = {.count = 1, .reusable = true}, SHIFT(59),
  [193] = {.count = 1, .reusable = false}, SHIFT(54),
  [195] = {.count = 1, .reusable = true}, SHIFT(54),
  [197] = {.count = 1, .reusable = false}, SHIFT(52),
  [199] = {.count = 1, .reusable = true}, SHIFT(52),
  [201] = {.count = 1, .reusable = false}, SHIFT(111),
  [203] = {.count = 1, .reusable = true}, SHIFT(111),
  [205] = {.count = 1, .reusable = true}, SHIFT(2),
  [207] = {.count = 1, .reusable = true}, SHIFT(35),
  [209] = {.count = 1, .reusable = true}, SHIFT(22),
  [211] = {.count = 1, .reusable = true}, SHIFT(24),
  [213] = {.count = 1, .reusable = true}, SHIFT(25),
  [215] = {.count = 1, .reusable = false}, SHIFT(87),
  [217] = {.count = 1, .reusable = true}, SHIFT(87),
  [219] = {.count = 1, .reusable = false}, SHIFT(85),
  [221] = {.count = 1, .reusable = true}, SHIFT(65),
  [223] = {.count = 1, .reusable = true}, SHIFT(82),
  [225] = {.count = 1, .reusable = true}, SHIFT(64),
  [227] = {.count = 1, .reusable = true}, SHIFT(33),
  [229] = {.count = 1, .reusable = false}, SHIFT(79),
  [231] = {.count = 1, .reusable = true}, SHIFT(79),
  [233] = {.count = 1, .reusable = false}, SHIFT(88),
  [235] = {.count = 1, .reusable = true}, SHIFT(88),
  [237] = {.count = 1, .reusable = false}, SHIFT(89),
  [239] = {.count = 1, .reusable = true}, SHIFT(89),
  [241] = {.count = 1, .reusable = false}, SHIFT(102),
  [243] = {.count = 1, .reusable = true}, SHIFT(102),
  [245] = {.count = 1, .reusable = true}, SHIFT(37),
  [247] = {.count = 1, .reusable = false}, SHIFT(32),
  [249] = {.count = 1, .reusable = true}, SHIFT(32),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(36),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(43),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(43),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(39),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(67),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(81),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(70),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(34),
  [275] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [277] = {.count = 1, .reusable = true}, SHIFT(95),
  [279] = {.count = 1, .reusable = false}, SHIFT(43),
  [281] = {.count = 1, .reusable = true}, SHIFT(43),
  [283] = {.count = 1, .reusable = true}, SHIFT(98),
  [285] = {.count = 1, .reusable = true}, SHIFT(40),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(36),
  [290] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(32),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(32),
  [298] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(39),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(67),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(81),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(70),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(34),
  [313] = {.count = 1, .reusable = true}, SHIFT(93),
  [315] = {.count = 1, .reusable = true}, SHIFT(41),
  [317] = {.count = 1, .reusable = true}, SHIFT(86),
  [319] = {.count = 1, .reusable = false}, SHIFT(29),
  [321] = {.count = 1, .reusable = true}, SHIFT(29),
  [323] = {.count = 1, .reusable = true}, SHIFT(42),
  [325] = {.count = 1, .reusable = false}, SHIFT(27),
  [327] = {.count = 1, .reusable = true}, SHIFT(27),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 17),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 17),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [353] = {.count = 1, .reusable = false}, SHIFT(60),
  [355] = {.count = 1, .reusable = true}, SHIFT(60),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [379] = {.count = 1, .reusable = true}, SHIFT(103),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 19),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 19),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 22),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 22),
  [411] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [413] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [423] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 16),
  [425] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 16),
  [427] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [439] = {.count = 1, .reusable = false}, SHIFT(69),
  [441] = {.count = 1, .reusable = true}, SHIFT(92),
  [443] = {.count = 1, .reusable = true}, SHIFT(69),
  [445] = {.count = 1, .reusable = false}, SHIFT(66),
  [447] = {.count = 1, .reusable = true}, SHIFT(90),
  [449] = {.count = 1, .reusable = true}, SHIFT(66),
  [451] = {.count = 1, .reusable = false}, SHIFT(68),
  [453] = {.count = 1, .reusable = true}, SHIFT(80),
  [455] = {.count = 1, .reusable = true}, SHIFT(68),
  [457] = {.count = 1, .reusable = false}, SHIFT(72),
  [459] = {.count = 1, .reusable = true}, SHIFT(45),
  [461] = {.count = 1, .reusable = true}, SHIFT(72),
  [463] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(68),
  [466] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(68),
  [471] = {.count = 1, .reusable = true}, SHIFT(97),
  [473] = {.count = 1, .reusable = false}, SHIFT(71),
  [475] = {.count = 1, .reusable = true}, SHIFT(47),
  [477] = {.count = 1, .reusable = true}, SHIFT(71),
  [479] = {.count = 1, .reusable = true}, SHIFT(44),
  [481] = {.count = 1, .reusable = true}, SHIFT(38),
  [483] = {.count = 1, .reusable = true}, SHIFT(53),
  [485] = {.count = 1, .reusable = true}, SHIFT(78),
  [487] = {.count = 1, .reusable = true}, SHIFT(56),
  [489] = {.count = 1, .reusable = true}, SHIFT(23),
  [491] = {.count = 1, .reusable = true}, SHIFT(58),
  [493] = {.count = 1, .reusable = true}, SHIFT(50),
  [495] = {.count = 1, .reusable = true}, SHIFT(73),
  [497] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23), SHIFT_REPEAT(23),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(78),
  [507] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 21),
  [509] = {.count = 1, .reusable = false}, SHIFT(46),
  [511] = {.count = 1, .reusable = true}, SHIFT(46),
  [513] = {.count = 1, .reusable = false}, SHIFT(91),
  [515] = {.count = 1, .reusable = true}, SHIFT(91),
  [517] = {.count = 1, .reusable = true}, SHIFT(76),
  [519] = {.count = 1, .reusable = true}, SHIFT(75),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 15),
  [523] = {.count = 1, .reusable = true}, SHIFT(48),
  [525] = {.count = 1, .reusable = true}, SHIFT(83),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 24),
  [529] = {.count = 1, .reusable = true}, SHIFT(55),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 20),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 13),
  [535] = {.count = 1, .reusable = true}, SHIFT(21),
  [537] = {.count = 1, .reusable = true}, SHIFT(94),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 11),
  [543] = {.count = 1, .reusable = true}, SHIFT(63),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 10),
  [547] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
