#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 247
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_SEMI = 1,
  aux_sym_line_comment_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_use = 5,
  anon_sym_doc = 6,
  anon_sym_def = 7,
  anon_sym_fn = 8,
  anon_sym_defn = 9,
  anon_sym_let = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_do = 13,
  anon_sym_if = 14,
  anon_sym_while = 15,
  anon_sym_ref = 16,
  anon_sym_address = 17,
  anon_sym_set_BANG = 18,
  anon_sym_the = 19,
  anon_sym_register = 20,
  anon_sym_Bool = 21,
  anon_sym_Char = 22,
  anon_sym_Int = 23,
  anon_sym_Long = 24,
  anon_sym_Float = 25,
  anon_sym_Double = 26,
  anon_sym_Vector2 = 27,
  anon_sym_Vector3 = 28,
  anon_sym_VectorN = 29,
  anon_sym_String = 30,
  anon_sym_Pattern = 31,
  anon_sym_Array = 32,
  anon_sym_Map = 33,
  anon_sym_Maybe = 34,
  anon_sym_Result = 35,
  anon_sym_Id = 36,
  anon_sym_Ptr = 37,
  anon_sym_DOT = 38,
  anon_sym_definterface = 39,
  anon_sym_defmacro = 40,
  anon_sym_defndynamic = 41,
  anon_sym_defmodule = 42,
  anon_sym_deftype = 43,
  anon_sym_RPAREN2 = 44,
  anon_sym_COMMA = 45,
  anon_sym_RBRACK2 = 46,
  anon_sym_Fn = 47,
  anon_sym_ = 48,
  anon_sym_AMP = 49,
  anon_sym_AT = 50,
  anon_sym_TILDE = 51,
  anon_sym_SQUOTE = 52,
  sym_integer_literal = 53,
  sym_float_literal = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_str_literal_token1 = 58,
  anon_sym_DQUOTE2 = 59,
  anon_sym_BSLASH = 60,
  anon_sym_POUND_DQUOTE = 61,
  sym_escape_sequence = 62,
  anon_sym_LBRACE = 63,
  anon_sym_RBRACE = 64,
  anon_sym_COLON = 65,
  sym_hidden = 66,
  anon_sym_let_DASHdo = 67,
  anon_sym_break = 68,
  anon_sym_for = 69,
  anon_sym_when = 70,
  anon_sym_cond = 71,
  anon_sym_unless = 72,
  anon_sym_case = 73,
  anon_sym_foreach = 74,
  anon_sym_PLUS = 75,
  anon_sym_DASH = 76,
  anon_sym_SLASH = 77,
  anon_sym_STAR = 78,
  anon_sym_PERCENT = 79,
  anon_sym_LT = 80,
  anon_sym_GT = 81,
  anon_sym_EQ = 82,
  anon_sym_LT_EQ = 83,
  anon_sym_GT_EQ = 84,
  anon_sym_SLASH_EQ = 85,
  anon_sym_and = 86,
  anon_sym_or = 87,
  anon_sym_not = 88,
  anon_sym_and_STAR = 89,
  anon_sym_or_STAR = 90,
  sym_identifier = 91,
  sym_upper_identifier = 92,
  sym_source_file = 93,
  sym_line_comment = 94,
  sym__s_expr = 95,
  sym__expr = 96,
  sym__anything = 97,
  sym__s_forms = 98,
  sym__defs = 99,
  sym__literals = 100,
  sym__short_helper = 101,
  sym_use = 102,
  sym_doc = 103,
  sym_def = 104,
  sym_fn = 105,
  sym_defn = 106,
  sym_let = 107,
  sym_let_pairs = 108,
  sym_do = 109,
  sym_if = 110,
  sym_while = 111,
  sym_ref = 112,
  sym_address = 113,
  sym_set = 114,
  sym_the = 115,
  sym_register = 116,
  sym_type = 117,
  sym_complex_type = 118,
  sym_call_expression = 119,
  sym_call_name = 120,
  sym_definterface = 121,
  sym_defmacro = 122,
  sym_defndynamic = 123,
  sym_defmodule = 124,
  sym_deftype = 125,
  sym__deftype1 = 126,
  sym__deftype2 = 127,
  sym__name_deftypes = 128,
  sym_fields = 129,
  sym_interface_fn = 130,
  sym_short_ref = 131,
  sym_short_copy = 132,
  sym_short_fn_ref = 133,
  sym_short_quote = 134,
  sym_parameters = 135,
  sym_typed_parameters = 136,
  sym_bool_literal = 137,
  sym_str_literal = 138,
  sym_char_literal = 139,
  sym_pattern_literal = 140,
  sym_array_expression = 141,
  sym_map_expression = 142,
  sym_symbol = 143,
  sym_operators = 144,
  aux_sym_source_file_repeat1 = 145,
  aux_sym_let_pairs_repeat1 = 146,
  aux_sym_do_repeat1 = 147,
  aux_sym_complex_type_repeat1 = 148,
  aux_sym_call_expression_repeat1 = 149,
  aux_sym_defmodule_repeat1 = 150,
  aux_sym__deftype2_repeat1 = 151,
  aux_sym__name_deftypes_repeat1 = 152,
  aux_sym_fields_repeat1 = 153,
  aux_sym_parameters_repeat1 = 154,
  aux_sym_typed_parameters_repeat1 = 155,
  aux_sym_str_literal_repeat1 = 156,
  aux_sym_array_expression_repeat1 = 157,
  aux_sym_map_expression_repeat1 = 158,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_use] = "use",
  [anon_sym_doc] = "doc",
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
  [anon_sym_the] = "the",
  [anon_sym_register] = "register",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Char] = "Char",
  [anon_sym_Int] = "Int",
  [anon_sym_Long] = "Long",
  [anon_sym_Float] = "Float",
  [anon_sym_Double] = "Double",
  [anon_sym_Vector2] = "Vector2",
  [anon_sym_Vector3] = "Vector3",
  [anon_sym_VectorN] = "VectorN",
  [anon_sym_String] = "String",
  [anon_sym_Pattern] = "Pattern",
  [anon_sym_Array] = "Array",
  [anon_sym_Map] = "Map",
  [anon_sym_Maybe] = "Maybe",
  [anon_sym_Result] = "Result",
  [anon_sym_Id] = "Id",
  [anon_sym_Ptr] = "Ptr",
  [anon_sym_DOT] = ".",
  [anon_sym_definterface] = "definterface",
  [anon_sym_defmacro] = "defmacro",
  [anon_sym_defndynamic] = "defndynamic",
  [anon_sym_defmodule] = "defmodule",
  [anon_sym_deftype] = "deftype",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK2] = "]",
  [anon_sym_Fn] = "Fn",
  [anon_sym_] = "λ",
  [anon_sym_AMP] = "&",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
  [anon_sym_SQUOTE] = "'",
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
  [anon_sym_COLON] = ":",
  [sym_hidden] = "hidden",
  [anon_sym_let_DASHdo] = "let-do",
  [anon_sym_break] = "break",
  [anon_sym_for] = "for",
  [anon_sym_when] = "when",
  [anon_sym_cond] = "cond",
  [anon_sym_unless] = "unless",
  [anon_sym_case] = "case",
  [anon_sym_foreach] = "foreach",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_and_STAR] = "and*",
  [anon_sym_or_STAR] = "or*",
  [sym_identifier] = "identifier",
  [sym_upper_identifier] = "upper_identifier",
  [sym_source_file] = "source_file",
  [sym_line_comment] = "line_comment",
  [sym__s_expr] = "_s_expr",
  [sym__expr] = "_expr",
  [sym__anything] = "_anything",
  [sym__s_forms] = "_s_forms",
  [sym__defs] = "_defs",
  [sym__literals] = "_literals",
  [sym__short_helper] = "_short_helper",
  [sym_use] = "use",
  [sym_doc] = "doc",
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
  [sym_the] = "the",
  [sym_register] = "register",
  [sym_type] = "type",
  [sym_complex_type] = "complex_type",
  [sym_call_expression] = "call_expression",
  [sym_call_name] = "call_name",
  [sym_definterface] = "definterface",
  [sym_defmacro] = "defmacro",
  [sym_defndynamic] = "defndynamic",
  [sym_defmodule] = "defmodule",
  [sym_deftype] = "deftype",
  [sym__deftype1] = "_deftype1",
  [sym__deftype2] = "_deftype2",
  [sym__name_deftypes] = "_name_deftypes",
  [sym_fields] = "fields",
  [sym_interface_fn] = "interface_fn",
  [sym_short_ref] = "short_ref",
  [sym_short_copy] = "short_copy",
  [sym_short_fn_ref] = "short_fn_ref",
  [sym_short_quote] = "short_quote",
  [sym_parameters] = "parameters",
  [sym_typed_parameters] = "typed_parameters",
  [sym_bool_literal] = "bool_literal",
  [sym_str_literal] = "str_literal",
  [sym_char_literal] = "char_literal",
  [sym_pattern_literal] = "pattern_literal",
  [sym_array_expression] = "array_expression",
  [sym_map_expression] = "map_expression",
  [sym_symbol] = "symbol",
  [sym_operators] = "operators",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_let_pairs_repeat1] = "let_pairs_repeat1",
  [aux_sym_do_repeat1] = "do_repeat1",
  [aux_sym_complex_type_repeat1] = "complex_type_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [aux_sym_defmodule_repeat1] = "defmodule_repeat1",
  [aux_sym__deftype2_repeat1] = "_deftype2_repeat1",
  [aux_sym__name_deftypes_repeat1] = "_name_deftypes_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_typed_parameters_repeat1] = "typed_parameters_repeat1",
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
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doc] = {
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
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VectorN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Maybe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_definterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defndynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deftype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
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
  [anon_sym_SQUOTE] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_hidden] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_upper_identifier] = {
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
  [sym__defs] = {
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
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_doc] = {
    .visible = true,
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
  [sym_the] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_complex_type] = {
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
  [sym_definterface] = {
    .visible = true,
    .named = true,
  },
  [sym_defmacro] = {
    .visible = true,
    .named = true,
  },
  [sym_defndynamic] = {
    .visible = true,
    .named = true,
  },
  [sym_defmodule] = {
    .visible = true,
    .named = true,
  },
  [sym_deftype] = {
    .visible = true,
    .named = true,
  },
  [sym__deftype1] = {
    .visible = false,
    .named = true,
  },
  [sym__deftype2] = {
    .visible = false,
    .named = true,
  },
  [sym__name_deftypes] = {
    .visible = false,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_fn] = {
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
  [sym_short_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_parameters] = {
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_operators] = {
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
  [aux_sym_complex_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defmodule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__deftype2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_deftypes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typed_parameters_repeat1] = {
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
  field_definition = 5,
  field_doc_str = 6,
  field_else = 7,
  field_expr = 8,
  field_fields = 9,
  field_fn = 10,
  field_generic_type = 11,
  field_key = 12,
  field_module = 13,
  field_name = 14,
  field_pairs = 15,
  field_parameters = 16,
  field_return_type = 17,
  field_then = 18,
  field_type = 19,
  field_typed_params = 20,
  field_value = 21,
  field_value_name = 22,
  field_var = 23,
  field_variable = 24,
  field_variant = 25,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_condition] = "condition",
  [field_definition] = "definition",
  [field_doc_str] = "doc_str",
  [field_else] = "else",
  [field_expr] = "expr",
  [field_fields] = "fields",
  [field_fn] = "fn",
  [field_generic_type] = "generic_type",
  [field_key] = "key",
  [field_module] = "module",
  [field_name] = "name",
  [field_pairs] = "pairs",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_then] = "then",
  [field_type] = "type",
  [field_typed_params] = "typed_params",
  [field_value] = "value",
  [field_value_name] = "value_name",
  [field_var] = "var",
  [field_variable] = "variable",
  [field_variant] = "variant",
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
  [9] = {.index = 8, .length = 1},
  [11] = {.index = 9, .length = 1},
  [12] = {.index = 10, .length = 3},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 2},
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 2},
  [23] = {.index = 33, .length = 2},
  [24] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 1},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 3},
  [28] = {.index = 43, .length = 4},
  [29] = {.index = 47, .length = 2},
  [30] = {.index = 49, .length = 2},
  [31] = {.index = 51, .length = 4},
  [32] = {.index = 55, .length = 2},
  [33] = {.index = 57, .length = 3},
  [34] = {.index = 60, .length = 2},
  [35] = {.index = 62, .length = 2},
  [36] = {.index = 64, .length = 4},
  [37] = {.index = 68, .length = 3},
  [38] = {.index = 71, .length = 3},
  [39] = {.index = 74, .length = 2},
  [41] = {.index = 76, .length = 4},
  [42] = {.index = 80, .length = 2},
  [43] = {.index = 82, .length = 2},
  [44] = {.index = 84, .length = 2},
  [45] = {.index = 86, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_call_name, 0},
  [2] =
    {field_module, 1},
  [3] =
    {field_parameters, 1},
  [4] =
    {field_pairs, 1},
  [5] =
    {field_expr, 0},
  [6] =
    {field_expr, 1, .inherited = true},
  [7] =
    {field_condition, 1},
  [8] =
    {field_expr, 1},
  [9] =
    {field_name, 1},
  [10] =
    {field_fields, 1, .inherited = true},
    {field_generic_type, 1, .inherited = true},
    {field_name, 1, .inherited = true},
  [13] =
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [15] =
    {field_argument, 1},
    {field_call_name, 0},
  [17] =
    {field_doc_str, 2},
    {field_fn, 1},
  [19] =
    {field_name, 1},
    {field_value, 2},
  [21] =
    {field_body, 2},
    {field_parameters, 1},
  [23] =
    {field_name, 1},
    {field_parameters, 2},
  [25] =
    {field_body, 2},
    {field_pairs, 1},
  [27] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [29] =
    {field_body, 2},
    {field_condition, 1},
  [31] =
    {field_expr, 2},
    {field_variable, 1},
  [33] =
    {field_expr, 2},
    {field_type, 1},
  [35] =
    {field_name, 1},
    {field_type, 2},
  [37] =
    {field_definition, 0},
  [38] =
    {field_definition, 2, .inherited = true},
    {field_name, 1},
  [40] =
    {field_fields, 1},
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [43] =
    {field_fields, 1, .inherited = true},
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [47] =
    {field_key, 0},
    {field_value, 1},
  [49] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [51] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [55] =
    {field_module, 0},
    {field_name, 2},
  [57] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [60] =
    {field_expr, 1},
    {field_var, 0},
  [62] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [64] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [68] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
  [71] =
    {field_name, 1},
    {field_type, 2},
    {field_value_name, 3},
  [74] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [76] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [80] =
    {field_fn, 3},
    {field_name, 1},
  [82] =
    {field_generic_type, 2},
    {field_name, 1},
  [84] =
    {field_return_type, 2},
    {field_typed_params, 1},
  [86] =
    {field_fields, 2},
    {field_variant, 1},
};

static TSSymbol ts_alias_sequences[46][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [0] = sym_identifier,
  },
  [40] = {
    [0] = sym_type,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'B') ADVANCE(223);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'D') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(199);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(187);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == 955) ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '!' ||
          ('?' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'B') ADVANCE(223);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'D') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(199);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(187);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == 955) ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '!' ||
          ('?' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == 'w') ADVANCE(190);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(273);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'B') ADVANCE(223);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'D') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(200);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'B') ADVANCE(223);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'D') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(200);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'B') ADVANCE(223);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'D') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(199);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == 955) ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(274);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_doc);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_address);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_register);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Char);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Int);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Long);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Float);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Double);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Vector2);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Vector3);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_VectorN);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_String);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Pattern);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Map);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Maybe);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Result);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Ptr);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_definterface);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_defndynamic);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_deftype);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_hidden);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_let_DASHdo);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_and_STAR);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_or_STAR);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == '3') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(215);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 25},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 11},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 11},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 11},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_doc] = ACTIONS(1),
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
    [anon_sym_the] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Long] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_Vector2] = ACTIONS(1),
    [anon_sym_Vector3] = ACTIONS(1),
    [anon_sym_VectorN] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Pattern] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_Maybe] = ACTIONS(1),
    [anon_sym_Result] = ACTIONS(1),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_Ptr] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_definterface] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [anon_sym_defndynamic] = ACTIONS(1),
    [anon_sym_defmodule] = ACTIONS(1),
    [anon_sym_deftype] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_Fn] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [sym_hidden] = ACTIONS(1),
    [anon_sym_let_DASHdo] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and_STAR] = ACTIONS(1),
    [anon_sym_or_STAR] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(246),
    [sym_line_comment] = STATE(132),
    [sym__s_expr] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(239),
    [sym__s_expr] = STATE(239),
    [sym__anything] = STATE(239),
    [sym__s_forms] = STATE(239),
    [sym__defs] = STATE(239),
    [sym__literals] = STATE(239),
    [sym__short_helper] = STATE(239),
    [sym_use] = STATE(239),
    [sym_doc] = STATE(239),
    [sym_def] = STATE(239),
    [sym_fn] = STATE(239),
    [sym_defn] = STATE(239),
    [sym_let] = STATE(239),
    [sym_do] = STATE(239),
    [sym_if] = STATE(239),
    [sym_while] = STATE(239),
    [sym_ref] = STATE(239),
    [sym_address] = STATE(239),
    [sym_set] = STATE(239),
    [sym_the] = STATE(239),
    [sym_register] = STATE(239),
    [sym_call_expression] = STATE(239),
    [sym_call_name] = STATE(12),
    [sym_definterface] = STATE(239),
    [sym_defmacro] = STATE(239),
    [sym_defndynamic] = STATE(239),
    [sym_defmodule] = STATE(239),
    [sym_deftype] = STATE(239),
    [sym_short_ref] = STATE(239),
    [sym_short_copy] = STATE(239),
    [sym_short_fn_ref] = STATE(126),
    [sym_short_quote] = STATE(239),
    [sym_bool_literal] = STATE(239),
    [sym_str_literal] = STATE(239),
    [sym_char_literal] = STATE(239),
    [sym_pattern_literal] = STATE(239),
    [sym_array_expression] = STATE(239),
    [sym_map_expression] = STATE(239),
    [sym_symbol] = STATE(239),
    [sym_operators] = STATE(239),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_doc] = ACTIONS(11),
    [anon_sym_def] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_defn] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_ref] = ACTIONS(29),
    [anon_sym_address] = ACTIONS(31),
    [anon_sym_set_BANG] = ACTIONS(33),
    [anon_sym_the] = ACTIONS(35),
    [anon_sym_register] = ACTIONS(37),
    [anon_sym_definterface] = ACTIONS(39),
    [anon_sym_defmacro] = ACTIONS(41),
    [anon_sym_defndynamic] = ACTIONS(43),
    [anon_sym_defmodule] = ACTIONS(45),
    [anon_sym_deftype] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(57),
    [sym_float_literal] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_SLASH_EQ] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_and_STAR] = ACTIONS(71),
    [anon_sym_or_STAR] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym_upper_identifier] = ACTIONS(75),
  },
  [3] = {
    [sym_line_comment] = STATE(211),
    [sym__s_expr] = STATE(211),
    [sym__anything] = STATE(211),
    [sym__s_forms] = STATE(211),
    [sym__defs] = STATE(211),
    [sym__literals] = STATE(211),
    [sym__short_helper] = STATE(211),
    [sym_use] = STATE(211),
    [sym_doc] = STATE(211),
    [sym_def] = STATE(211),
    [sym_fn] = STATE(211),
    [sym_defn] = STATE(211),
    [sym_let] = STATE(211),
    [sym_do] = STATE(211),
    [sym_if] = STATE(211),
    [sym_while] = STATE(211),
    [sym_ref] = STATE(211),
    [sym_address] = STATE(211),
    [sym_set] = STATE(211),
    [sym_the] = STATE(211),
    [sym_register] = STATE(211),
    [sym_call_expression] = STATE(211),
    [sym_call_name] = STATE(12),
    [sym_definterface] = STATE(211),
    [sym_defmacro] = STATE(211),
    [sym_defndynamic] = STATE(211),
    [sym_defmodule] = STATE(211),
    [sym_deftype] = STATE(211),
    [sym_short_ref] = STATE(211),
    [sym_short_copy] = STATE(211),
    [sym_short_fn_ref] = STATE(126),
    [sym_short_quote] = STATE(211),
    [sym_bool_literal] = STATE(211),
    [sym_str_literal] = STATE(211),
    [sym_char_literal] = STATE(211),
    [sym_pattern_literal] = STATE(211),
    [sym_array_expression] = STATE(211),
    [sym_map_expression] = STATE(211),
    [sym_symbol] = STATE(211),
    [sym_operators] = STATE(211),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_doc] = ACTIONS(11),
    [anon_sym_def] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_defn] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_ref] = ACTIONS(29),
    [anon_sym_address] = ACTIONS(31),
    [anon_sym_set_BANG] = ACTIONS(33),
    [anon_sym_the] = ACTIONS(35),
    [anon_sym_register] = ACTIONS(37),
    [anon_sym_definterface] = ACTIONS(39),
    [anon_sym_defmacro] = ACTIONS(41),
    [anon_sym_defndynamic] = ACTIONS(43),
    [anon_sym_defmodule] = ACTIONS(45),
    [anon_sym_deftype] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(77),
    [sym_float_literal] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_SLASH_EQ] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_and_STAR] = ACTIONS(71),
    [anon_sym_or_STAR] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym_upper_identifier] = ACTIONS(75),
  },
  [4] = {
    [sym_line_comment] = STATE(196),
    [sym__s_expr] = STATE(196),
    [sym__anything] = STATE(196),
    [sym__s_forms] = STATE(196),
    [sym__defs] = STATE(196),
    [sym__literals] = STATE(196),
    [sym__short_helper] = STATE(196),
    [sym_use] = STATE(196),
    [sym_doc] = STATE(196),
    [sym_def] = STATE(196),
    [sym_fn] = STATE(196),
    [sym_defn] = STATE(196),
    [sym_let] = STATE(196),
    [sym_do] = STATE(196),
    [sym_if] = STATE(196),
    [sym_while] = STATE(196),
    [sym_ref] = STATE(196),
    [sym_address] = STATE(196),
    [sym_set] = STATE(196),
    [sym_the] = STATE(196),
    [sym_register] = STATE(196),
    [sym_call_expression] = STATE(196),
    [sym_call_name] = STATE(12),
    [sym_definterface] = STATE(196),
    [sym_defmacro] = STATE(196),
    [sym_defndynamic] = STATE(196),
    [sym_defmodule] = STATE(196),
    [sym_deftype] = STATE(196),
    [sym_short_ref] = STATE(196),
    [sym_short_copy] = STATE(196),
    [sym_short_fn_ref] = STATE(126),
    [sym_short_quote] = STATE(196),
    [sym_bool_literal] = STATE(196),
    [sym_str_literal] = STATE(196),
    [sym_char_literal] = STATE(196),
    [sym_pattern_literal] = STATE(196),
    [sym_array_expression] = STATE(196),
    [sym_map_expression] = STATE(196),
    [sym_symbol] = STATE(196),
    [sym_operators] = STATE(196),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_doc] = ACTIONS(11),
    [anon_sym_def] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_defn] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_ref] = ACTIONS(29),
    [anon_sym_address] = ACTIONS(31),
    [anon_sym_set_BANG] = ACTIONS(33),
    [anon_sym_the] = ACTIONS(35),
    [anon_sym_register] = ACTIONS(37),
    [anon_sym_definterface] = ACTIONS(39),
    [anon_sym_defmacro] = ACTIONS(41),
    [anon_sym_defndynamic] = ACTIONS(43),
    [anon_sym_defmodule] = ACTIONS(45),
    [anon_sym_deftype] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(79),
    [sym_float_literal] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_SLASH_EQ] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_and_STAR] = ACTIONS(71),
    [anon_sym_or_STAR] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym_upper_identifier] = ACTIONS(75),
  },
  [5] = {
    [sym__s_expr] = STATE(115),
    [sym__expr] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__short_helper] = STATE(115),
    [sym_short_ref] = STATE(115),
    [sym_short_copy] = STATE(115),
    [sym_short_fn_ref] = STATE(115),
    [sym_short_quote] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_char_literal] = STATE(115),
    [sym_pattern_literal] = STATE(115),
    [sym_array_expression] = STATE(115),
    [sym_map_expression] = STATE(115),
    [sym_symbol] = STATE(115),
    [aux_sym_defmodule_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(83),
    [sym_float_literal] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(83),
  },
  [6] = {
    [sym__s_expr] = STATE(6),
    [sym__expr] = STATE(6),
    [sym__literals] = STATE(6),
    [sym__short_helper] = STATE(6),
    [sym_short_ref] = STATE(6),
    [sym_short_copy] = STATE(6),
    [sym_short_fn_ref] = STATE(6),
    [sym_short_quote] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [sym_str_literal] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_pattern_literal] = STATE(6),
    [sym_array_expression] = STATE(6),
    [sym_map_expression] = STATE(6),
    [sym_symbol] = STATE(6),
    [aux_sym_call_expression_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [sym_integer_literal] = ACTIONS(105),
    [sym_float_literal] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(114),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_identifier] = ACTIONS(105),
  },
  [7] = {
    [sym__s_expr] = STATE(115),
    [sym__expr] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__short_helper] = STATE(115),
    [sym_short_ref] = STATE(115),
    [sym_short_copy] = STATE(115),
    [sym_short_fn_ref] = STATE(115),
    [sym_short_quote] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_char_literal] = STATE(115),
    [sym_pattern_literal] = STATE(115),
    [sym_array_expression] = STATE(115),
    [sym_map_expression] = STATE(115),
    [sym_symbol] = STATE(115),
    [aux_sym_defmodule_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_integer_literal] = ACTIONS(146),
    [sym_float_literal] = ACTIONS(146),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_BSLASH] = ACTIONS(155),
    [anon_sym_POUND_DQUOTE] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(164),
    [sym_identifier] = ACTIONS(146),
  },
  [8] = {
    [sym__s_expr] = STATE(125),
    [sym__expr] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__short_helper] = STATE(125),
    [sym_short_ref] = STATE(125),
    [sym_short_copy] = STATE(125),
    [sym_short_fn_ref] = STATE(125),
    [sym_short_quote] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [sym_symbol] = STATE(125),
    [aux_sym_do_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(169),
    [sym_float_literal] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(169),
  },
  [9] = {
    [sym__s_expr] = STATE(125),
    [sym__expr] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__short_helper] = STATE(125),
    [sym_short_ref] = STATE(125),
    [sym_short_copy] = STATE(125),
    [sym_short_fn_ref] = STATE(125),
    [sym_short_quote] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [sym_symbol] = STATE(125),
    [aux_sym_do_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [sym_integer_literal] = ACTIONS(191),
    [sym_float_literal] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(194),
    [anon_sym_false] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(200),
    [anon_sym_POUND_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(209),
    [sym_identifier] = ACTIONS(191),
  },
  [10] = {
    [sym__s_expr] = STATE(115),
    [sym__expr] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__short_helper] = STATE(115),
    [sym_short_ref] = STATE(115),
    [sym_short_copy] = STATE(115),
    [sym_short_fn_ref] = STATE(115),
    [sym_short_quote] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_char_literal] = STATE(115),
    [sym_pattern_literal] = STATE(115),
    [sym_array_expression] = STATE(115),
    [sym_map_expression] = STATE(115),
    [sym_symbol] = STATE(115),
    [aux_sym_defmodule_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(83),
    [sym_float_literal] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(83),
  },
  [11] = {
    [sym__s_expr] = STATE(125),
    [sym__expr] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__short_helper] = STATE(125),
    [sym_short_ref] = STATE(125),
    [sym_short_copy] = STATE(125),
    [sym_short_fn_ref] = STATE(125),
    [sym_short_quote] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [sym_symbol] = STATE(125),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(169),
    [sym_float_literal] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(169),
  },
  [12] = {
    [sym__s_expr] = STATE(13),
    [sym__expr] = STATE(13),
    [sym__literals] = STATE(13),
    [sym__short_helper] = STATE(13),
    [sym_short_ref] = STATE(13),
    [sym_short_copy] = STATE(13),
    [sym_short_fn_ref] = STATE(13),
    [sym_short_quote] = STATE(13),
    [sym_bool_literal] = STATE(13),
    [sym_str_literal] = STATE(13),
    [sym_char_literal] = STATE(13),
    [sym_pattern_literal] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_map_expression] = STATE(13),
    [sym_symbol] = STATE(13),
    [aux_sym_call_expression_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(218),
    [sym_float_literal] = ACTIONS(218),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(218),
  },
  [13] = {
    [sym__s_expr] = STATE(6),
    [sym__expr] = STATE(6),
    [sym__literals] = STATE(6),
    [sym__short_helper] = STATE(6),
    [sym_short_ref] = STATE(6),
    [sym_short_copy] = STATE(6),
    [sym_short_fn_ref] = STATE(6),
    [sym_short_quote] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [sym_str_literal] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_pattern_literal] = STATE(6),
    [sym_array_expression] = STATE(6),
    [sym_map_expression] = STATE(6),
    [sym_symbol] = STATE(6),
    [aux_sym_call_expression_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(222),
    [sym_float_literal] = ACTIONS(222),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(222),
  },
  [14] = {
    [sym__short_helper] = STATE(22),
    [sym_type] = STATE(22),
    [sym_complex_type] = STATE(53),
    [sym_short_ref] = STATE(22),
    [sym_short_copy] = STATE(22),
    [sym_short_fn_ref] = STATE(22),
    [sym_short_quote] = STATE(22),
    [aux_sym_typed_parameters_repeat1] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(226),
    [anon_sym_Char] = ACTIONS(226),
    [anon_sym_Int] = ACTIONS(226),
    [anon_sym_Long] = ACTIONS(226),
    [anon_sym_Float] = ACTIONS(226),
    [anon_sym_Double] = ACTIONS(226),
    [anon_sym_Vector2] = ACTIONS(226),
    [anon_sym_Vector3] = ACTIONS(226),
    [anon_sym_VectorN] = ACTIONS(226),
    [anon_sym_String] = ACTIONS(226),
    [anon_sym_Pattern] = ACTIONS(226),
    [anon_sym_Array] = ACTIONS(226),
    [anon_sym_Map] = ACTIONS(226),
    [anon_sym_Maybe] = ACTIONS(226),
    [anon_sym_Result] = ACTIONS(226),
    [anon_sym_Id] = ACTIONS(226),
    [anon_sym_Ptr] = ACTIONS(226),
    [anon_sym_RBRACK2] = ACTIONS(228),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_identifier] = ACTIONS(238),
  },
  [15] = {
    [sym__s_expr] = STATE(217),
    [sym__expr] = STATE(217),
    [sym__literals] = STATE(217),
    [sym__short_helper] = STATE(217),
    [sym_short_ref] = STATE(217),
    [sym_short_copy] = STATE(217),
    [sym_short_fn_ref] = STATE(217),
    [sym_short_quote] = STATE(217),
    [sym_bool_literal] = STATE(217),
    [sym_str_literal] = STATE(217),
    [sym_char_literal] = STATE(217),
    [sym_pattern_literal] = STATE(217),
    [sym_array_expression] = STATE(217),
    [sym_map_expression] = STATE(217),
    [sym_symbol] = STATE(217),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(242),
    [sym_float_literal] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(242),
  },
  [16] = {
    [sym__s_expr] = STATE(223),
    [sym__expr] = STATE(223),
    [sym__literals] = STATE(223),
    [sym__short_helper] = STATE(223),
    [sym_short_ref] = STATE(223),
    [sym_short_copy] = STATE(223),
    [sym_short_fn_ref] = STATE(223),
    [sym_short_quote] = STATE(223),
    [sym_bool_literal] = STATE(223),
    [sym_str_literal] = STATE(223),
    [sym_char_literal] = STATE(223),
    [sym_pattern_literal] = STATE(223),
    [sym_array_expression] = STATE(223),
    [sym_map_expression] = STATE(223),
    [sym_symbol] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(246),
    [sym_float_literal] = ACTIONS(246),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(246),
  },
  [17] = {
    [sym__s_expr] = STATE(221),
    [sym__expr] = STATE(221),
    [sym__literals] = STATE(221),
    [sym__short_helper] = STATE(221),
    [sym_short_ref] = STATE(221),
    [sym_short_copy] = STATE(221),
    [sym_short_fn_ref] = STATE(221),
    [sym_short_quote] = STATE(221),
    [sym_bool_literal] = STATE(221),
    [sym_str_literal] = STATE(221),
    [sym_char_literal] = STATE(221),
    [sym_pattern_literal] = STATE(221),
    [sym_array_expression] = STATE(221),
    [sym_map_expression] = STATE(221),
    [sym_symbol] = STATE(221),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(250),
    [sym_float_literal] = ACTIONS(250),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(250),
  },
  [18] = {
    [sym__s_expr] = STATE(215),
    [sym__expr] = STATE(215),
    [sym__literals] = STATE(215),
    [sym__short_helper] = STATE(215),
    [sym_short_ref] = STATE(215),
    [sym_short_copy] = STATE(215),
    [sym_short_fn_ref] = STATE(215),
    [sym_short_quote] = STATE(215),
    [sym_bool_literal] = STATE(215),
    [sym_str_literal] = STATE(215),
    [sym_char_literal] = STATE(215),
    [sym_pattern_literal] = STATE(215),
    [sym_array_expression] = STATE(215),
    [sym_map_expression] = STATE(215),
    [sym_symbol] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(254),
    [sym_float_literal] = ACTIONS(254),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(254),
  },
  [19] = {
    [sym__s_expr] = STATE(241),
    [sym__expr] = STATE(241),
    [sym__literals] = STATE(241),
    [sym__short_helper] = STATE(241),
    [sym_short_ref] = STATE(241),
    [sym_short_copy] = STATE(241),
    [sym_short_fn_ref] = STATE(241),
    [sym_short_quote] = STATE(241),
    [sym_bool_literal] = STATE(241),
    [sym_str_literal] = STATE(241),
    [sym_char_literal] = STATE(241),
    [sym_pattern_literal] = STATE(241),
    [sym_array_expression] = STATE(241),
    [sym_map_expression] = STATE(241),
    [sym_symbol] = STATE(241),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(258),
    [sym_float_literal] = ACTIONS(258),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(258),
  },
  [20] = {
    [sym__s_expr] = STATE(242),
    [sym__expr] = STATE(242),
    [sym__literals] = STATE(242),
    [sym__short_helper] = STATE(242),
    [sym_short_ref] = STATE(242),
    [sym_short_copy] = STATE(242),
    [sym_short_fn_ref] = STATE(242),
    [sym_short_quote] = STATE(242),
    [sym_bool_literal] = STATE(242),
    [sym_str_literal] = STATE(242),
    [sym_char_literal] = STATE(242),
    [sym_pattern_literal] = STATE(242),
    [sym_array_expression] = STATE(242),
    [sym_map_expression] = STATE(242),
    [sym_symbol] = STATE(242),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(262),
    [sym_float_literal] = ACTIONS(262),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(262),
  },
  [21] = {
    [sym__s_expr] = STATE(197),
    [sym__expr] = STATE(197),
    [sym__literals] = STATE(197),
    [sym__short_helper] = STATE(197),
    [sym_short_ref] = STATE(197),
    [sym_short_copy] = STATE(197),
    [sym_short_fn_ref] = STATE(197),
    [sym_short_quote] = STATE(197),
    [sym_bool_literal] = STATE(197),
    [sym_str_literal] = STATE(197),
    [sym_char_literal] = STATE(197),
    [sym_pattern_literal] = STATE(197),
    [sym_array_expression] = STATE(197),
    [sym_map_expression] = STATE(197),
    [sym_symbol] = STATE(197),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(266),
    [sym_float_literal] = ACTIONS(266),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(266),
  },
  [22] = {
    [sym__short_helper] = STATE(23),
    [sym_type] = STATE(23),
    [sym_complex_type] = STATE(53),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_short_quote] = STATE(23),
    [aux_sym_typed_parameters_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(226),
    [anon_sym_Char] = ACTIONS(226),
    [anon_sym_Int] = ACTIONS(226),
    [anon_sym_Long] = ACTIONS(226),
    [anon_sym_Float] = ACTIONS(226),
    [anon_sym_Double] = ACTIONS(226),
    [anon_sym_Vector2] = ACTIONS(226),
    [anon_sym_Vector3] = ACTIONS(226),
    [anon_sym_VectorN] = ACTIONS(226),
    [anon_sym_String] = ACTIONS(226),
    [anon_sym_Pattern] = ACTIONS(226),
    [anon_sym_Array] = ACTIONS(226),
    [anon_sym_Map] = ACTIONS(226),
    [anon_sym_Maybe] = ACTIONS(226),
    [anon_sym_Result] = ACTIONS(226),
    [anon_sym_Id] = ACTIONS(226),
    [anon_sym_Ptr] = ACTIONS(226),
    [anon_sym_RBRACK2] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_identifier] = ACTIONS(238),
  },
  [23] = {
    [sym__short_helper] = STATE(23),
    [sym_type] = STATE(23),
    [sym_complex_type] = STATE(53),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_short_quote] = STATE(23),
    [aux_sym_typed_parameters_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_Bool] = ACTIONS(273),
    [anon_sym_Char] = ACTIONS(273),
    [anon_sym_Int] = ACTIONS(273),
    [anon_sym_Long] = ACTIONS(273),
    [anon_sym_Float] = ACTIONS(273),
    [anon_sym_Double] = ACTIONS(273),
    [anon_sym_Vector2] = ACTIONS(273),
    [anon_sym_Vector3] = ACTIONS(273),
    [anon_sym_VectorN] = ACTIONS(273),
    [anon_sym_String] = ACTIONS(273),
    [anon_sym_Pattern] = ACTIONS(273),
    [anon_sym_Array] = ACTIONS(273),
    [anon_sym_Map] = ACTIONS(273),
    [anon_sym_Maybe] = ACTIONS(273),
    [anon_sym_Result] = ACTIONS(273),
    [anon_sym_Id] = ACTIONS(273),
    [anon_sym_Ptr] = ACTIONS(273),
    [anon_sym_RBRACK2] = ACTIONS(276),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_AT] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [sym_identifier] = ACTIONS(290),
  },
  [24] = {
    [sym__s_expr] = STATE(60),
    [sym__expr] = STATE(60),
    [sym__literals] = STATE(60),
    [sym__short_helper] = STATE(60),
    [sym_short_ref] = STATE(60),
    [sym_short_copy] = STATE(60),
    [sym_short_fn_ref] = STATE(60),
    [sym_short_quote] = STATE(60),
    [sym_bool_literal] = STATE(60),
    [sym_str_literal] = STATE(60),
    [sym_char_literal] = STATE(60),
    [sym_pattern_literal] = STATE(60),
    [sym_array_expression] = STATE(60),
    [sym_map_expression] = STATE(60),
    [sym_symbol] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(297),
    [sym_float_literal] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(303),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [sym_identifier] = ACTIONS(297),
  },
  [25] = {
    [sym__s_expr] = STATE(45),
    [sym__expr] = STATE(45),
    [sym__literals] = STATE(45),
    [sym__short_helper] = STATE(45),
    [sym_short_ref] = STATE(45),
    [sym_short_copy] = STATE(45),
    [sym_short_fn_ref] = STATE(45),
    [sym_short_quote] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_pattern_literal] = STATE(45),
    [sym_array_expression] = STATE(45),
    [sym_map_expression] = STATE(45),
    [sym_symbol] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(311),
    [sym_float_literal] = ACTIONS(311),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(311),
  },
  [26] = {
    [sym__s_expr] = STATE(176),
    [sym__expr] = STATE(176),
    [sym__literals] = STATE(176),
    [sym__short_helper] = STATE(176),
    [sym_short_ref] = STATE(176),
    [sym_short_copy] = STATE(176),
    [sym_short_fn_ref] = STATE(176),
    [sym_short_quote] = STATE(176),
    [sym_bool_literal] = STATE(176),
    [sym_str_literal] = STATE(176),
    [sym_char_literal] = STATE(176),
    [sym_pattern_literal] = STATE(176),
    [sym_array_expression] = STATE(176),
    [sym_map_expression] = STATE(176),
    [sym_symbol] = STATE(176),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [sym_integer_literal] = ACTIONS(325),
    [sym_float_literal] = ACTIONS(325),
    [anon_sym_true] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(331),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [sym_identifier] = ACTIONS(325),
  },
  [27] = {
    [sym__s_expr] = STATE(119),
    [sym__expr] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__short_helper] = STATE(119),
    [sym_short_ref] = STATE(119),
    [sym_short_copy] = STATE(119),
    [sym_short_fn_ref] = STATE(119),
    [sym_short_quote] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [sym_symbol] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(339),
    [sym_float_literal] = ACTIONS(339),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(339),
  },
  [28] = {
    [sym__s_expr] = STATE(114),
    [sym__expr] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__short_helper] = STATE(114),
    [sym_short_ref] = STATE(114),
    [sym_short_copy] = STATE(114),
    [sym_short_fn_ref] = STATE(114),
    [sym_short_quote] = STATE(114),
    [sym_bool_literal] = STATE(114),
    [sym_str_literal] = STATE(114),
    [sym_char_literal] = STATE(114),
    [sym_pattern_literal] = STATE(114),
    [sym_array_expression] = STATE(114),
    [sym_map_expression] = STATE(114),
    [sym_symbol] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(341),
    [sym_float_literal] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(341),
  },
  [29] = {
    [sym__s_expr] = STATE(116),
    [sym__expr] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__short_helper] = STATE(116),
    [sym_short_ref] = STATE(116),
    [sym_short_copy] = STATE(116),
    [sym_short_fn_ref] = STATE(116),
    [sym_short_quote] = STATE(116),
    [sym_bool_literal] = STATE(116),
    [sym_str_literal] = STATE(116),
    [sym_char_literal] = STATE(116),
    [sym_pattern_literal] = STATE(116),
    [sym_array_expression] = STATE(116),
    [sym_map_expression] = STATE(116),
    [sym_symbol] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(343),
    [sym_float_literal] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(343),
  },
  [30] = {
    [sym__s_expr] = STATE(120),
    [sym__expr] = STATE(120),
    [sym__literals] = STATE(120),
    [sym__short_helper] = STATE(120),
    [sym_short_ref] = STATE(120),
    [sym_short_copy] = STATE(120),
    [sym_short_fn_ref] = STATE(120),
    [sym_short_quote] = STATE(120),
    [sym_bool_literal] = STATE(120),
    [sym_str_literal] = STATE(120),
    [sym_char_literal] = STATE(120),
    [sym_pattern_literal] = STATE(120),
    [sym_array_expression] = STATE(120),
    [sym_map_expression] = STATE(120),
    [sym_symbol] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(345),
    [sym_float_literal] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(345),
  },
  [31] = {
    [sym__s_expr] = STATE(51),
    [sym__expr] = STATE(51),
    [sym__literals] = STATE(51),
    [sym__short_helper] = STATE(51),
    [sym_short_ref] = STATE(51),
    [sym_short_copy] = STATE(51),
    [sym_short_fn_ref] = STATE(51),
    [sym_short_quote] = STATE(51),
    [sym_bool_literal] = STATE(51),
    [sym_str_literal] = STATE(51),
    [sym_char_literal] = STATE(51),
    [sym_pattern_literal] = STATE(51),
    [sym_array_expression] = STATE(51),
    [sym_map_expression] = STATE(51),
    [sym_symbol] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(347),
    [sym_float_literal] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(303),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [sym_identifier] = ACTIONS(347),
  },
  [32] = {
    [sym__s_expr] = STATE(64),
    [sym__expr] = STATE(64),
    [sym__literals] = STATE(64),
    [sym__short_helper] = STATE(64),
    [sym_short_ref] = STATE(64),
    [sym_short_copy] = STATE(64),
    [sym_short_fn_ref] = STATE(64),
    [sym_short_quote] = STATE(64),
    [sym_bool_literal] = STATE(64),
    [sym_str_literal] = STATE(64),
    [sym_char_literal] = STATE(64),
    [sym_pattern_literal] = STATE(64),
    [sym_array_expression] = STATE(64),
    [sym_map_expression] = STATE(64),
    [sym_symbol] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(349),
    [sym_float_literal] = ACTIONS(349),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(303),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [sym_identifier] = ACTIONS(349),
  },
  [33] = {
    [sym__s_expr] = STATE(233),
    [sym__expr] = STATE(233),
    [sym__literals] = STATE(233),
    [sym__short_helper] = STATE(233),
    [sym_short_ref] = STATE(233),
    [sym_short_copy] = STATE(233),
    [sym_short_fn_ref] = STATE(233),
    [sym_short_quote] = STATE(233),
    [sym_bool_literal] = STATE(233),
    [sym_str_literal] = STATE(233),
    [sym_char_literal] = STATE(233),
    [sym_pattern_literal] = STATE(233),
    [sym_array_expression] = STATE(233),
    [sym_map_expression] = STATE(233),
    [sym_symbol] = STATE(233),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(351),
    [sym_float_literal] = ACTIONS(351),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(351),
  },
  [34] = {
    [sym__s_expr] = STATE(180),
    [sym__expr] = STATE(180),
    [sym__literals] = STATE(180),
    [sym__short_helper] = STATE(180),
    [sym_short_ref] = STATE(180),
    [sym_short_copy] = STATE(180),
    [sym_short_fn_ref] = STATE(180),
    [sym_short_quote] = STATE(180),
    [sym_bool_literal] = STATE(180),
    [sym_str_literal] = STATE(180),
    [sym_char_literal] = STATE(180),
    [sym_pattern_literal] = STATE(180),
    [sym_array_expression] = STATE(180),
    [sym_map_expression] = STATE(180),
    [sym_symbol] = STATE(180),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [sym_integer_literal] = ACTIONS(353),
    [sym_float_literal] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(331),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [sym_identifier] = ACTIONS(353),
  },
  [35] = {
    [sym__s_expr] = STATE(205),
    [sym__expr] = STATE(205),
    [sym__literals] = STATE(205),
    [sym__short_helper] = STATE(205),
    [sym_short_ref] = STATE(205),
    [sym_short_copy] = STATE(205),
    [sym_short_fn_ref] = STATE(205),
    [sym_short_quote] = STATE(205),
    [sym_bool_literal] = STATE(205),
    [sym_str_literal] = STATE(205),
    [sym_char_literal] = STATE(205),
    [sym_pattern_literal] = STATE(205),
    [sym_array_expression] = STATE(205),
    [sym_map_expression] = STATE(205),
    [sym_symbol] = STATE(205),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(355),
    [sym_float_literal] = ACTIONS(355),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(355),
  },
  [36] = {
    [sym__s_expr] = STATE(179),
    [sym__expr] = STATE(179),
    [sym__literals] = STATE(179),
    [sym__short_helper] = STATE(179),
    [sym_short_ref] = STATE(179),
    [sym_short_copy] = STATE(179),
    [sym_short_fn_ref] = STATE(179),
    [sym_short_quote] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [sym_symbol] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [sym_integer_literal] = ACTIONS(357),
    [sym_float_literal] = ACTIONS(357),
    [anon_sym_true] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(331),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [sym_identifier] = ACTIONS(357),
  },
  [37] = {
    [sym__s_expr] = STATE(178),
    [sym__expr] = STATE(178),
    [sym__literals] = STATE(178),
    [sym__short_helper] = STATE(178),
    [sym_short_ref] = STATE(178),
    [sym_short_copy] = STATE(178),
    [sym_short_fn_ref] = STATE(178),
    [sym_short_quote] = STATE(178),
    [sym_bool_literal] = STATE(178),
    [sym_str_literal] = STATE(178),
    [sym_char_literal] = STATE(178),
    [sym_pattern_literal] = STATE(178),
    [sym_array_expression] = STATE(178),
    [sym_map_expression] = STATE(178),
    [sym_symbol] = STATE(178),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [sym_integer_literal] = ACTIONS(359),
    [sym_float_literal] = ACTIONS(359),
    [anon_sym_true] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(331),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [sym_identifier] = ACTIONS(359),
  },
  [38] = {
    [sym__s_expr] = STATE(195),
    [sym__expr] = STATE(195),
    [sym__literals] = STATE(195),
    [sym__short_helper] = STATE(195),
    [sym_short_ref] = STATE(195),
    [sym_short_copy] = STATE(195),
    [sym_short_fn_ref] = STATE(195),
    [sym_short_quote] = STATE(195),
    [sym_bool_literal] = STATE(195),
    [sym_str_literal] = STATE(195),
    [sym_char_literal] = STATE(195),
    [sym_pattern_literal] = STATE(195),
    [sym_array_expression] = STATE(195),
    [sym_map_expression] = STATE(195),
    [sym_symbol] = STATE(195),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(361),
    [sym_float_literal] = ACTIONS(361),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(361),
  },
  [39] = {
    [sym__s_expr] = STATE(177),
    [sym__expr] = STATE(177),
    [sym__literals] = STATE(177),
    [sym__short_helper] = STATE(177),
    [sym_short_ref] = STATE(177),
    [sym_short_copy] = STATE(177),
    [sym_short_fn_ref] = STATE(177),
    [sym_short_quote] = STATE(177),
    [sym_bool_literal] = STATE(177),
    [sym_str_literal] = STATE(177),
    [sym_char_literal] = STATE(177),
    [sym_pattern_literal] = STATE(177),
    [sym_array_expression] = STATE(177),
    [sym_map_expression] = STATE(177),
    [sym_symbol] = STATE(177),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [sym_integer_literal] = ACTIONS(363),
    [sym_float_literal] = ACTIONS(363),
    [anon_sym_true] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(331),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [sym_identifier] = ACTIONS(363),
  },
  [40] = {
    [sym__s_expr] = STATE(231),
    [sym__expr] = STATE(231),
    [sym__literals] = STATE(231),
    [sym__short_helper] = STATE(231),
    [sym_short_ref] = STATE(231),
    [sym_short_copy] = STATE(231),
    [sym_short_fn_ref] = STATE(231),
    [sym_short_quote] = STATE(231),
    [sym_bool_literal] = STATE(231),
    [sym_str_literal] = STATE(231),
    [sym_char_literal] = STATE(231),
    [sym_pattern_literal] = STATE(231),
    [sym_array_expression] = STATE(231),
    [sym_map_expression] = STATE(231),
    [sym_symbol] = STATE(231),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(365),
    [sym_float_literal] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(365),
  },
  [41] = {
    [sym__s_expr] = STATE(16),
    [sym__expr] = STATE(16),
    [sym__literals] = STATE(16),
    [sym__short_helper] = STATE(16),
    [sym_short_ref] = STATE(16),
    [sym_short_copy] = STATE(16),
    [sym_short_fn_ref] = STATE(16),
    [sym_short_quote] = STATE(16),
    [sym_bool_literal] = STATE(16),
    [sym_str_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_pattern_literal] = STATE(16),
    [sym_array_expression] = STATE(16),
    [sym_map_expression] = STATE(16),
    [sym_symbol] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(367),
    [sym_float_literal] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(367),
  },
  [42] = {
    [sym__s_expr] = STATE(208),
    [sym__expr] = STATE(208),
    [sym__literals] = STATE(208),
    [sym__short_helper] = STATE(208),
    [sym_short_ref] = STATE(208),
    [sym_short_copy] = STATE(208),
    [sym_short_fn_ref] = STATE(208),
    [sym_short_quote] = STATE(208),
    [sym_bool_literal] = STATE(208),
    [sym_str_literal] = STATE(208),
    [sym_char_literal] = STATE(208),
    [sym_pattern_literal] = STATE(208),
    [sym_array_expression] = STATE(208),
    [sym_map_expression] = STATE(208),
    [sym_symbol] = STATE(208),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(369),
    [sym_float_literal] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(369),
  },
  [43] = {
    [sym__s_expr] = STATE(222),
    [sym__expr] = STATE(222),
    [sym__literals] = STATE(222),
    [sym__short_helper] = STATE(222),
    [sym_short_ref] = STATE(222),
    [sym_short_copy] = STATE(222),
    [sym_short_fn_ref] = STATE(222),
    [sym_short_quote] = STATE(222),
    [sym_bool_literal] = STATE(222),
    [sym_str_literal] = STATE(222),
    [sym_char_literal] = STATE(222),
    [sym_pattern_literal] = STATE(222),
    [sym_array_expression] = STATE(222),
    [sym_map_expression] = STATE(222),
    [sym_symbol] = STATE(222),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(371),
    [sym_float_literal] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(371),
  },
  [44] = {
    [sym__s_expr] = STATE(57),
    [sym__expr] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__short_helper] = STATE(57),
    [sym_short_ref] = STATE(57),
    [sym_short_copy] = STATE(57),
    [sym_short_fn_ref] = STATE(57),
    [sym_short_quote] = STATE(57),
    [sym_bool_literal] = STATE(57),
    [sym_str_literal] = STATE(57),
    [sym_char_literal] = STATE(57),
    [sym_pattern_literal] = STATE(57),
    [sym_array_expression] = STATE(57),
    [sym_map_expression] = STATE(57),
    [sym_symbol] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(373),
    [sym_float_literal] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(303),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [sym_identifier] = ACTIONS(373),
  },
  [45] = {
    [sym__s_expr] = STATE(43),
    [sym__expr] = STATE(43),
    [sym__literals] = STATE(43),
    [sym__short_helper] = STATE(43),
    [sym_short_ref] = STATE(43),
    [sym_short_copy] = STATE(43),
    [sym_short_fn_ref] = STATE(43),
    [sym_short_quote] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_char_literal] = STATE(43),
    [sym_pattern_literal] = STATE(43),
    [sym_array_expression] = STATE(43),
    [sym_map_expression] = STATE(43),
    [sym_symbol] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(375),
    [sym_float_literal] = ACTIONS(375),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(375),
  },
  [46] = {
    [sym__short_helper] = STATE(21),
    [sym_type] = STATE(21),
    [sym_complex_type] = STATE(117),
    [sym_short_ref] = STATE(21),
    [sym_short_copy] = STATE(21),
    [sym_short_fn_ref] = STATE(21),
    [sym_short_quote] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_Bool] = ACTIONS(379),
    [anon_sym_Char] = ACTIONS(379),
    [anon_sym_Int] = ACTIONS(379),
    [anon_sym_Long] = ACTIONS(379),
    [anon_sym_Float] = ACTIONS(379),
    [anon_sym_Double] = ACTIONS(379),
    [anon_sym_Vector2] = ACTIONS(379),
    [anon_sym_Vector3] = ACTIONS(379),
    [anon_sym_VectorN] = ACTIONS(379),
    [anon_sym_String] = ACTIONS(379),
    [anon_sym_Pattern] = ACTIONS(379),
    [anon_sym_Array] = ACTIONS(379),
    [anon_sym_Map] = ACTIONS(379),
    [anon_sym_Maybe] = ACTIONS(379),
    [anon_sym_Result] = ACTIONS(379),
    [anon_sym_Id] = ACTIONS(379),
    [anon_sym_Ptr] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(381),
  },
  [47] = {
    [sym__short_helper] = STATE(235),
    [sym_type] = STATE(235),
    [sym_complex_type] = STATE(117),
    [sym_short_ref] = STATE(235),
    [sym_short_copy] = STATE(235),
    [sym_short_fn_ref] = STATE(235),
    [sym_short_quote] = STATE(235),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_Bool] = ACTIONS(379),
    [anon_sym_Char] = ACTIONS(379),
    [anon_sym_Int] = ACTIONS(379),
    [anon_sym_Long] = ACTIONS(379),
    [anon_sym_Float] = ACTIONS(379),
    [anon_sym_Double] = ACTIONS(379),
    [anon_sym_Vector2] = ACTIONS(379),
    [anon_sym_Vector3] = ACTIONS(379),
    [anon_sym_VectorN] = ACTIONS(379),
    [anon_sym_String] = ACTIONS(379),
    [anon_sym_Pattern] = ACTIONS(379),
    [anon_sym_Array] = ACTIONS(379),
    [anon_sym_Map] = ACTIONS(379),
    [anon_sym_Maybe] = ACTIONS(379),
    [anon_sym_Result] = ACTIONS(379),
    [anon_sym_Id] = ACTIONS(379),
    [anon_sym_Ptr] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(381),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_Bool] = ACTIONS(387),
    [anon_sym_Char] = ACTIONS(387),
    [anon_sym_Int] = ACTIONS(387),
    [anon_sym_Long] = ACTIONS(387),
    [anon_sym_Float] = ACTIONS(387),
    [anon_sym_Double] = ACTIONS(387),
    [anon_sym_Vector2] = ACTIONS(387),
    [anon_sym_Vector3] = ACTIONS(387),
    [anon_sym_VectorN] = ACTIONS(387),
    [anon_sym_String] = ACTIONS(387),
    [anon_sym_Pattern] = ACTIONS(387),
    [anon_sym_Array] = ACTIONS(387),
    [anon_sym_Map] = ACTIONS(387),
    [anon_sym_Maybe] = ACTIONS(387),
    [anon_sym_Result] = ACTIONS(387),
    [anon_sym_Id] = ACTIONS(387),
    [anon_sym_Ptr] = ACTIONS(387),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACK2] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_Bool] = ACTIONS(391),
    [anon_sym_Char] = ACTIONS(391),
    [anon_sym_Int] = ACTIONS(391),
    [anon_sym_Long] = ACTIONS(391),
    [anon_sym_Float] = ACTIONS(391),
    [anon_sym_Double] = ACTIONS(391),
    [anon_sym_Vector2] = ACTIONS(391),
    [anon_sym_Vector3] = ACTIONS(391),
    [anon_sym_VectorN] = ACTIONS(391),
    [anon_sym_String] = ACTIONS(391),
    [anon_sym_Pattern] = ACTIONS(391),
    [anon_sym_Array] = ACTIONS(391),
    [anon_sym_Map] = ACTIONS(391),
    [anon_sym_Maybe] = ACTIONS(391),
    [anon_sym_Result] = ACTIONS(391),
    [anon_sym_Id] = ACTIONS(391),
    [anon_sym_Ptr] = ACTIONS(391),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_RBRACK2] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [sym_identifier] = ACTIONS(391),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_Bool] = ACTIONS(395),
    [anon_sym_Char] = ACTIONS(395),
    [anon_sym_Int] = ACTIONS(395),
    [anon_sym_Long] = ACTIONS(395),
    [anon_sym_Float] = ACTIONS(395),
    [anon_sym_Double] = ACTIONS(395),
    [anon_sym_Vector2] = ACTIONS(395),
    [anon_sym_Vector3] = ACTIONS(395),
    [anon_sym_VectorN] = ACTIONS(395),
    [anon_sym_String] = ACTIONS(395),
    [anon_sym_Pattern] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(395),
    [anon_sym_Map] = ACTIONS(395),
    [anon_sym_Maybe] = ACTIONS(395),
    [anon_sym_Result] = ACTIONS(395),
    [anon_sym_Id] = ACTIONS(395),
    [anon_sym_Ptr] = ACTIONS(395),
    [anon_sym_RBRACK2] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [sym_identifier] = ACTIONS(395),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_Bool] = ACTIONS(399),
    [anon_sym_Char] = ACTIONS(399),
    [anon_sym_Int] = ACTIONS(399),
    [anon_sym_Long] = ACTIONS(399),
    [anon_sym_Float] = ACTIONS(399),
    [anon_sym_Double] = ACTIONS(399),
    [anon_sym_Vector2] = ACTIONS(399),
    [anon_sym_Vector3] = ACTIONS(399),
    [anon_sym_VectorN] = ACTIONS(399),
    [anon_sym_String] = ACTIONS(399),
    [anon_sym_Pattern] = ACTIONS(399),
    [anon_sym_Array] = ACTIONS(399),
    [anon_sym_Map] = ACTIONS(399),
    [anon_sym_Maybe] = ACTIONS(399),
    [anon_sym_Result] = ACTIONS(399),
    [anon_sym_Id] = ACTIONS(399),
    [anon_sym_Ptr] = ACTIONS(399),
    [anon_sym_RBRACK2] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [sym_identifier] = ACTIONS(399),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_Bool] = ACTIONS(403),
    [anon_sym_Char] = ACTIONS(403),
    [anon_sym_Int] = ACTIONS(403),
    [anon_sym_Long] = ACTIONS(403),
    [anon_sym_Float] = ACTIONS(403),
    [anon_sym_Double] = ACTIONS(403),
    [anon_sym_Vector2] = ACTIONS(403),
    [anon_sym_Vector3] = ACTIONS(403),
    [anon_sym_VectorN] = ACTIONS(403),
    [anon_sym_String] = ACTIONS(403),
    [anon_sym_Pattern] = ACTIONS(403),
    [anon_sym_Array] = ACTIONS(403),
    [anon_sym_Map] = ACTIONS(403),
    [anon_sym_Maybe] = ACTIONS(403),
    [anon_sym_Result] = ACTIONS(403),
    [anon_sym_Id] = ACTIONS(403),
    [anon_sym_Ptr] = ACTIONS(403),
    [anon_sym_RBRACK2] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_Bool] = ACTIONS(407),
    [anon_sym_Char] = ACTIONS(407),
    [anon_sym_Int] = ACTIONS(407),
    [anon_sym_Long] = ACTIONS(407),
    [anon_sym_Float] = ACTIONS(407),
    [anon_sym_Double] = ACTIONS(407),
    [anon_sym_Vector2] = ACTIONS(407),
    [anon_sym_Vector3] = ACTIONS(407),
    [anon_sym_VectorN] = ACTIONS(407),
    [anon_sym_String] = ACTIONS(407),
    [anon_sym_Pattern] = ACTIONS(407),
    [anon_sym_Array] = ACTIONS(407),
    [anon_sym_Map] = ACTIONS(407),
    [anon_sym_Maybe] = ACTIONS(407),
    [anon_sym_Result] = ACTIONS(407),
    [anon_sym_Id] = ACTIONS(407),
    [anon_sym_Ptr] = ACTIONS(407),
    [anon_sym_RBRACK2] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [sym_identifier] = ACTIONS(407),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_Bool] = ACTIONS(411),
    [anon_sym_Char] = ACTIONS(411),
    [anon_sym_Int] = ACTIONS(411),
    [anon_sym_Long] = ACTIONS(411),
    [anon_sym_Float] = ACTIONS(411),
    [anon_sym_Double] = ACTIONS(411),
    [anon_sym_Vector2] = ACTIONS(411),
    [anon_sym_Vector3] = ACTIONS(411),
    [anon_sym_VectorN] = ACTIONS(411),
    [anon_sym_String] = ACTIONS(411),
    [anon_sym_Pattern] = ACTIONS(411),
    [anon_sym_Array] = ACTIONS(411),
    [anon_sym_Map] = ACTIONS(411),
    [anon_sym_Maybe] = ACTIONS(411),
    [anon_sym_Result] = ACTIONS(411),
    [anon_sym_Id] = ACTIONS(411),
    [anon_sym_Ptr] = ACTIONS(411),
    [anon_sym_RBRACK2] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(409),
    [anon_sym_SQUOTE] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_Bool] = ACTIONS(415),
    [anon_sym_Char] = ACTIONS(415),
    [anon_sym_Int] = ACTIONS(415),
    [anon_sym_Long] = ACTIONS(415),
    [anon_sym_Float] = ACTIONS(415),
    [anon_sym_Double] = ACTIONS(415),
    [anon_sym_Vector2] = ACTIONS(415),
    [anon_sym_Vector3] = ACTIONS(415),
    [anon_sym_VectorN] = ACTIONS(415),
    [anon_sym_String] = ACTIONS(415),
    [anon_sym_Pattern] = ACTIONS(415),
    [anon_sym_Array] = ACTIONS(415),
    [anon_sym_Map] = ACTIONS(415),
    [anon_sym_Maybe] = ACTIONS(415),
    [anon_sym_Result] = ACTIONS(415),
    [anon_sym_Id] = ACTIONS(415),
    [anon_sym_Ptr] = ACTIONS(415),
    [anon_sym_RBRACK2] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [sym_identifier] = ACTIONS(415),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_Bool] = ACTIONS(419),
    [anon_sym_Char] = ACTIONS(419),
    [anon_sym_Int] = ACTIONS(419),
    [anon_sym_Long] = ACTIONS(419),
    [anon_sym_Float] = ACTIONS(419),
    [anon_sym_Double] = ACTIONS(419),
    [anon_sym_Vector2] = ACTIONS(419),
    [anon_sym_Vector3] = ACTIONS(419),
    [anon_sym_VectorN] = ACTIONS(419),
    [anon_sym_String] = ACTIONS(419),
    [anon_sym_Pattern] = ACTIONS(419),
    [anon_sym_Array] = ACTIONS(419),
    [anon_sym_Map] = ACTIONS(419),
    [anon_sym_Maybe] = ACTIONS(419),
    [anon_sym_Result] = ACTIONS(419),
    [anon_sym_Id] = ACTIONS(419),
    [anon_sym_Ptr] = ACTIONS(419),
    [anon_sym_RBRACK2] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [sym_identifier] = ACTIONS(419),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_Bool] = ACTIONS(423),
    [anon_sym_Char] = ACTIONS(423),
    [anon_sym_Int] = ACTIONS(423),
    [anon_sym_Long] = ACTIONS(423),
    [anon_sym_Float] = ACTIONS(423),
    [anon_sym_Double] = ACTIONS(423),
    [anon_sym_Vector2] = ACTIONS(423),
    [anon_sym_Vector3] = ACTIONS(423),
    [anon_sym_VectorN] = ACTIONS(423),
    [anon_sym_String] = ACTIONS(423),
    [anon_sym_Pattern] = ACTIONS(423),
    [anon_sym_Array] = ACTIONS(423),
    [anon_sym_Map] = ACTIONS(423),
    [anon_sym_Maybe] = ACTIONS(423),
    [anon_sym_Result] = ACTIONS(423),
    [anon_sym_Id] = ACTIONS(423),
    [anon_sym_Ptr] = ACTIONS(423),
    [anon_sym_RBRACK2] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [sym_identifier] = ACTIONS(423),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_Bool] = ACTIONS(427),
    [anon_sym_Char] = ACTIONS(427),
    [anon_sym_Int] = ACTIONS(427),
    [anon_sym_Long] = ACTIONS(427),
    [anon_sym_Float] = ACTIONS(427),
    [anon_sym_Double] = ACTIONS(427),
    [anon_sym_Vector2] = ACTIONS(427),
    [anon_sym_Vector3] = ACTIONS(427),
    [anon_sym_VectorN] = ACTIONS(427),
    [anon_sym_String] = ACTIONS(427),
    [anon_sym_Pattern] = ACTIONS(427),
    [anon_sym_Array] = ACTIONS(427),
    [anon_sym_Map] = ACTIONS(427),
    [anon_sym_Maybe] = ACTIONS(427),
    [anon_sym_Result] = ACTIONS(427),
    [anon_sym_Id] = ACTIONS(427),
    [anon_sym_Ptr] = ACTIONS(427),
    [anon_sym_RBRACK2] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(425),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [sym_identifier] = ACTIONS(427),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_Bool] = ACTIONS(431),
    [anon_sym_Char] = ACTIONS(431),
    [anon_sym_Int] = ACTIONS(431),
    [anon_sym_Long] = ACTIONS(431),
    [anon_sym_Float] = ACTIONS(431),
    [anon_sym_Double] = ACTIONS(431),
    [anon_sym_Vector2] = ACTIONS(431),
    [anon_sym_Vector3] = ACTIONS(431),
    [anon_sym_VectorN] = ACTIONS(431),
    [anon_sym_String] = ACTIONS(431),
    [anon_sym_Pattern] = ACTIONS(431),
    [anon_sym_Array] = ACTIONS(431),
    [anon_sym_Map] = ACTIONS(431),
    [anon_sym_Maybe] = ACTIONS(431),
    [anon_sym_Result] = ACTIONS(431),
    [anon_sym_Id] = ACTIONS(431),
    [anon_sym_Ptr] = ACTIONS(431),
    [anon_sym_RBRACK2] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [sym_identifier] = ACTIONS(431),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_Bool] = ACTIONS(435),
    [anon_sym_Char] = ACTIONS(435),
    [anon_sym_Int] = ACTIONS(435),
    [anon_sym_Long] = ACTIONS(435),
    [anon_sym_Float] = ACTIONS(435),
    [anon_sym_Double] = ACTIONS(435),
    [anon_sym_Vector2] = ACTIONS(435),
    [anon_sym_Vector3] = ACTIONS(435),
    [anon_sym_VectorN] = ACTIONS(435),
    [anon_sym_String] = ACTIONS(435),
    [anon_sym_Pattern] = ACTIONS(435),
    [anon_sym_Array] = ACTIONS(435),
    [anon_sym_Map] = ACTIONS(435),
    [anon_sym_Maybe] = ACTIONS(435),
    [anon_sym_Result] = ACTIONS(435),
    [anon_sym_Id] = ACTIONS(435),
    [anon_sym_Ptr] = ACTIONS(435),
    [anon_sym_RBRACK2] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_Bool] = ACTIONS(439),
    [anon_sym_Char] = ACTIONS(439),
    [anon_sym_Int] = ACTIONS(439),
    [anon_sym_Long] = ACTIONS(439),
    [anon_sym_Float] = ACTIONS(439),
    [anon_sym_Double] = ACTIONS(439),
    [anon_sym_Vector2] = ACTIONS(439),
    [anon_sym_Vector3] = ACTIONS(439),
    [anon_sym_VectorN] = ACTIONS(439),
    [anon_sym_String] = ACTIONS(439),
    [anon_sym_Pattern] = ACTIONS(439),
    [anon_sym_Array] = ACTIONS(439),
    [anon_sym_Map] = ACTIONS(439),
    [anon_sym_Maybe] = ACTIONS(439),
    [anon_sym_Result] = ACTIONS(439),
    [anon_sym_Id] = ACTIONS(439),
    [anon_sym_Ptr] = ACTIONS(439),
    [anon_sym_RBRACK2] = ACTIONS(437),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [sym_identifier] = ACTIONS(439),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_Bool] = ACTIONS(443),
    [anon_sym_Char] = ACTIONS(443),
    [anon_sym_Int] = ACTIONS(443),
    [anon_sym_Long] = ACTIONS(443),
    [anon_sym_Float] = ACTIONS(443),
    [anon_sym_Double] = ACTIONS(443),
    [anon_sym_Vector2] = ACTIONS(443),
    [anon_sym_Vector3] = ACTIONS(443),
    [anon_sym_VectorN] = ACTIONS(443),
    [anon_sym_String] = ACTIONS(443),
    [anon_sym_Pattern] = ACTIONS(443),
    [anon_sym_Array] = ACTIONS(443),
    [anon_sym_Map] = ACTIONS(443),
    [anon_sym_Maybe] = ACTIONS(443),
    [anon_sym_Result] = ACTIONS(443),
    [anon_sym_Id] = ACTIONS(443),
    [anon_sym_Ptr] = ACTIONS(443),
    [anon_sym_RBRACK2] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [sym_identifier] = ACTIONS(443),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_Bool] = ACTIONS(447),
    [anon_sym_Char] = ACTIONS(447),
    [anon_sym_Int] = ACTIONS(447),
    [anon_sym_Long] = ACTIONS(447),
    [anon_sym_Float] = ACTIONS(447),
    [anon_sym_Double] = ACTIONS(447),
    [anon_sym_Vector2] = ACTIONS(447),
    [anon_sym_Vector3] = ACTIONS(447),
    [anon_sym_VectorN] = ACTIONS(447),
    [anon_sym_String] = ACTIONS(447),
    [anon_sym_Pattern] = ACTIONS(447),
    [anon_sym_Array] = ACTIONS(447),
    [anon_sym_Map] = ACTIONS(447),
    [anon_sym_Maybe] = ACTIONS(447),
    [anon_sym_Result] = ACTIONS(447),
    [anon_sym_Id] = ACTIONS(447),
    [anon_sym_Ptr] = ACTIONS(447),
    [anon_sym_RBRACK2] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [sym_identifier] = ACTIONS(447),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_Bool] = ACTIONS(451),
    [anon_sym_Char] = ACTIONS(451),
    [anon_sym_Int] = ACTIONS(451),
    [anon_sym_Long] = ACTIONS(451),
    [anon_sym_Float] = ACTIONS(451),
    [anon_sym_Double] = ACTIONS(451),
    [anon_sym_Vector2] = ACTIONS(451),
    [anon_sym_Vector3] = ACTIONS(451),
    [anon_sym_VectorN] = ACTIONS(451),
    [anon_sym_String] = ACTIONS(451),
    [anon_sym_Pattern] = ACTIONS(451),
    [anon_sym_Array] = ACTIONS(451),
    [anon_sym_Map] = ACTIONS(451),
    [anon_sym_Maybe] = ACTIONS(451),
    [anon_sym_Result] = ACTIONS(451),
    [anon_sym_Id] = ACTIONS(451),
    [anon_sym_Ptr] = ACTIONS(451),
    [anon_sym_RBRACK2] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_Bool] = ACTIONS(455),
    [anon_sym_Char] = ACTIONS(455),
    [anon_sym_Int] = ACTIONS(455),
    [anon_sym_Long] = ACTIONS(455),
    [anon_sym_Float] = ACTIONS(455),
    [anon_sym_Double] = ACTIONS(455),
    [anon_sym_Vector2] = ACTIONS(455),
    [anon_sym_Vector3] = ACTIONS(455),
    [anon_sym_VectorN] = ACTIONS(455),
    [anon_sym_String] = ACTIONS(455),
    [anon_sym_Pattern] = ACTIONS(455),
    [anon_sym_Array] = ACTIONS(455),
    [anon_sym_Map] = ACTIONS(455),
    [anon_sym_Maybe] = ACTIONS(455),
    [anon_sym_Result] = ACTIONS(455),
    [anon_sym_Id] = ACTIONS(455),
    [anon_sym_Ptr] = ACTIONS(455),
    [anon_sym_RBRACK2] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [sym_identifier] = ACTIONS(455),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_Bool] = ACTIONS(459),
    [anon_sym_Char] = ACTIONS(459),
    [anon_sym_Int] = ACTIONS(459),
    [anon_sym_Long] = ACTIONS(459),
    [anon_sym_Float] = ACTIONS(459),
    [anon_sym_Double] = ACTIONS(459),
    [anon_sym_Vector2] = ACTIONS(459),
    [anon_sym_Vector3] = ACTIONS(459),
    [anon_sym_VectorN] = ACTIONS(459),
    [anon_sym_String] = ACTIONS(459),
    [anon_sym_Pattern] = ACTIONS(459),
    [anon_sym_Array] = ACTIONS(459),
    [anon_sym_Map] = ACTIONS(459),
    [anon_sym_Maybe] = ACTIONS(459),
    [anon_sym_Result] = ACTIONS(459),
    [anon_sym_Id] = ACTIONS(459),
    [anon_sym_Ptr] = ACTIONS(459),
    [anon_sym_RBRACK2] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [sym_identifier] = ACTIONS(459),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_Bool] = ACTIONS(463),
    [anon_sym_Char] = ACTIONS(463),
    [anon_sym_Int] = ACTIONS(463),
    [anon_sym_Long] = ACTIONS(463),
    [anon_sym_Float] = ACTIONS(463),
    [anon_sym_Double] = ACTIONS(463),
    [anon_sym_Vector2] = ACTIONS(463),
    [anon_sym_Vector3] = ACTIONS(463),
    [anon_sym_VectorN] = ACTIONS(463),
    [anon_sym_String] = ACTIONS(463),
    [anon_sym_Pattern] = ACTIONS(463),
    [anon_sym_Array] = ACTIONS(463),
    [anon_sym_Map] = ACTIONS(463),
    [anon_sym_Maybe] = ACTIONS(463),
    [anon_sym_Result] = ACTIONS(463),
    [anon_sym_Id] = ACTIONS(463),
    [anon_sym_Ptr] = ACTIONS(463),
    [anon_sym_RBRACK2] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [sym_identifier] = ACTIONS(463),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_Bool] = ACTIONS(467),
    [anon_sym_Char] = ACTIONS(467),
    [anon_sym_Int] = ACTIONS(467),
    [anon_sym_Long] = ACTIONS(467),
    [anon_sym_Float] = ACTIONS(467),
    [anon_sym_Double] = ACTIONS(467),
    [anon_sym_Vector2] = ACTIONS(467),
    [anon_sym_Vector3] = ACTIONS(467),
    [anon_sym_VectorN] = ACTIONS(467),
    [anon_sym_String] = ACTIONS(467),
    [anon_sym_Pattern] = ACTIONS(467),
    [anon_sym_Array] = ACTIONS(467),
    [anon_sym_Map] = ACTIONS(467),
    [anon_sym_Maybe] = ACTIONS(467),
    [anon_sym_Result] = ACTIONS(467),
    [anon_sym_Id] = ACTIONS(467),
    [anon_sym_Ptr] = ACTIONS(467),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [sym_identifier] = ACTIONS(467),
  },
  [69] = {
    [sym_interface_fn] = STATE(202),
    [aux_sym_complex_type_repeat1] = STATE(81),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_Bool] = ACTIONS(471),
    [anon_sym_Char] = ACTIONS(471),
    [anon_sym_Int] = ACTIONS(471),
    [anon_sym_Long] = ACTIONS(471),
    [anon_sym_Float] = ACTIONS(471),
    [anon_sym_Double] = ACTIONS(471),
    [anon_sym_Vector2] = ACTIONS(471),
    [anon_sym_Vector3] = ACTIONS(471),
    [anon_sym_VectorN] = ACTIONS(471),
    [anon_sym_String] = ACTIONS(471),
    [anon_sym_Pattern] = ACTIONS(471),
    [anon_sym_Array] = ACTIONS(471),
    [anon_sym_Map] = ACTIONS(471),
    [anon_sym_Maybe] = ACTIONS(471),
    [anon_sym_Result] = ACTIONS(471),
    [anon_sym_Id] = ACTIONS(471),
    [anon_sym_Ptr] = ACTIONS(471),
    [anon_sym_Fn] = ACTIONS(473),
    [anon_sym_] = ACTIONS(473),
    [sym_identifier] = ACTIONS(475),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_Bool] = ACTIONS(479),
    [anon_sym_Char] = ACTIONS(479),
    [anon_sym_Int] = ACTIONS(479),
    [anon_sym_Long] = ACTIONS(479),
    [anon_sym_Float] = ACTIONS(479),
    [anon_sym_Double] = ACTIONS(479),
    [anon_sym_Vector2] = ACTIONS(479),
    [anon_sym_Vector3] = ACTIONS(479),
    [anon_sym_VectorN] = ACTIONS(479),
    [anon_sym_String] = ACTIONS(479),
    [anon_sym_Pattern] = ACTIONS(479),
    [anon_sym_Array] = ACTIONS(479),
    [anon_sym_Map] = ACTIONS(479),
    [anon_sym_Maybe] = ACTIONS(479),
    [anon_sym_Result] = ACTIONS(479),
    [anon_sym_Id] = ACTIONS(479),
    [anon_sym_Ptr] = ACTIONS(479),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(477),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(477),
    [sym_identifier] = ACTIONS(479),
  },
  [71] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(481),
    [anon_sym_Char] = ACTIONS(481),
    [anon_sym_Int] = ACTIONS(481),
    [anon_sym_Long] = ACTIONS(481),
    [anon_sym_Float] = ACTIONS(481),
    [anon_sym_Double] = ACTIONS(481),
    [anon_sym_Vector2] = ACTIONS(481),
    [anon_sym_Vector3] = ACTIONS(481),
    [anon_sym_VectorN] = ACTIONS(481),
    [anon_sym_String] = ACTIONS(481),
    [anon_sym_Pattern] = ACTIONS(481),
    [anon_sym_Array] = ACTIONS(481),
    [anon_sym_Map] = ACTIONS(481),
    [anon_sym_Maybe] = ACTIONS(481),
    [anon_sym_Result] = ACTIONS(481),
    [anon_sym_Id] = ACTIONS(481),
    [anon_sym_Ptr] = ACTIONS(481),
    [anon_sym_RBRACK2] = ACTIONS(483),
    [sym_identifier] = ACTIONS(485),
  },
  [72] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(481),
    [anon_sym_Char] = ACTIONS(481),
    [anon_sym_Int] = ACTIONS(481),
    [anon_sym_Long] = ACTIONS(481),
    [anon_sym_Float] = ACTIONS(481),
    [anon_sym_Double] = ACTIONS(481),
    [anon_sym_Vector2] = ACTIONS(481),
    [anon_sym_Vector3] = ACTIONS(481),
    [anon_sym_VectorN] = ACTIONS(481),
    [anon_sym_String] = ACTIONS(481),
    [anon_sym_Pattern] = ACTIONS(481),
    [anon_sym_Array] = ACTIONS(481),
    [anon_sym_Map] = ACTIONS(481),
    [anon_sym_Maybe] = ACTIONS(481),
    [anon_sym_Result] = ACTIONS(481),
    [anon_sym_Id] = ACTIONS(481),
    [anon_sym_Ptr] = ACTIONS(481),
    [anon_sym_RBRACK2] = ACTIONS(487),
    [sym_identifier] = ACTIONS(485),
  },
  [73] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(481),
    [anon_sym_Char] = ACTIONS(481),
    [anon_sym_Int] = ACTIONS(481),
    [anon_sym_Long] = ACTIONS(481),
    [anon_sym_Float] = ACTIONS(481),
    [anon_sym_Double] = ACTIONS(481),
    [anon_sym_Vector2] = ACTIONS(481),
    [anon_sym_Vector3] = ACTIONS(481),
    [anon_sym_VectorN] = ACTIONS(481),
    [anon_sym_String] = ACTIONS(481),
    [anon_sym_Pattern] = ACTIONS(481),
    [anon_sym_Array] = ACTIONS(481),
    [anon_sym_Map] = ACTIONS(481),
    [anon_sym_Maybe] = ACTIONS(481),
    [anon_sym_Result] = ACTIONS(481),
    [anon_sym_Id] = ACTIONS(481),
    [anon_sym_Ptr] = ACTIONS(481),
    [anon_sym_RBRACK2] = ACTIONS(489),
    [sym_identifier] = ACTIONS(485),
  },
  [74] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_Bool] = ACTIONS(494),
    [anon_sym_Char] = ACTIONS(494),
    [anon_sym_Int] = ACTIONS(494),
    [anon_sym_Long] = ACTIONS(494),
    [anon_sym_Float] = ACTIONS(494),
    [anon_sym_Double] = ACTIONS(494),
    [anon_sym_Vector2] = ACTIONS(494),
    [anon_sym_Vector3] = ACTIONS(494),
    [anon_sym_VectorN] = ACTIONS(494),
    [anon_sym_String] = ACTIONS(494),
    [anon_sym_Pattern] = ACTIONS(494),
    [anon_sym_Array] = ACTIONS(494),
    [anon_sym_Map] = ACTIONS(494),
    [anon_sym_Maybe] = ACTIONS(494),
    [anon_sym_Result] = ACTIONS(494),
    [anon_sym_Id] = ACTIONS(494),
    [anon_sym_Ptr] = ACTIONS(494),
    [anon_sym_RBRACK2] = ACTIONS(497),
    [sym_identifier] = ACTIONS(499),
  },
  [75] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(481),
    [anon_sym_Char] = ACTIONS(481),
    [anon_sym_Int] = ACTIONS(481),
    [anon_sym_Long] = ACTIONS(481),
    [anon_sym_Float] = ACTIONS(481),
    [anon_sym_Double] = ACTIONS(481),
    [anon_sym_Vector2] = ACTIONS(481),
    [anon_sym_Vector3] = ACTIONS(481),
    [anon_sym_VectorN] = ACTIONS(481),
    [anon_sym_String] = ACTIONS(481),
    [anon_sym_Pattern] = ACTIONS(481),
    [anon_sym_Array] = ACTIONS(481),
    [anon_sym_Map] = ACTIONS(481),
    [anon_sym_Maybe] = ACTIONS(481),
    [anon_sym_Result] = ACTIONS(481),
    [anon_sym_Id] = ACTIONS(481),
    [anon_sym_Ptr] = ACTIONS(481),
    [anon_sym_RBRACK2] = ACTIONS(502),
    [sym_identifier] = ACTIONS(485),
  },
  [76] = {
    [sym_type] = STATE(33),
    [sym_complex_type] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_Bool] = ACTIONS(379),
    [anon_sym_Char] = ACTIONS(379),
    [anon_sym_Int] = ACTIONS(379),
    [anon_sym_Long] = ACTIONS(379),
    [anon_sym_Float] = ACTIONS(379),
    [anon_sym_Double] = ACTIONS(379),
    [anon_sym_Vector2] = ACTIONS(379),
    [anon_sym_Vector3] = ACTIONS(379),
    [anon_sym_VectorN] = ACTIONS(379),
    [anon_sym_String] = ACTIONS(379),
    [anon_sym_Pattern] = ACTIONS(379),
    [anon_sym_Array] = ACTIONS(379),
    [anon_sym_Map] = ACTIONS(379),
    [anon_sym_Maybe] = ACTIONS(379),
    [anon_sym_Result] = ACTIONS(379),
    [anon_sym_Id] = ACTIONS(379),
    [anon_sym_Ptr] = ACTIONS(379),
    [sym_identifier] = ACTIONS(381),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(504),
    [anon_sym_Bool] = ACTIONS(506),
    [anon_sym_Char] = ACTIONS(506),
    [anon_sym_Int] = ACTIONS(506),
    [anon_sym_Long] = ACTIONS(506),
    [anon_sym_Float] = ACTIONS(506),
    [anon_sym_Double] = ACTIONS(506),
    [anon_sym_Vector2] = ACTIONS(506),
    [anon_sym_Vector3] = ACTIONS(506),
    [anon_sym_VectorN] = ACTIONS(506),
    [anon_sym_String] = ACTIONS(506),
    [anon_sym_Pattern] = ACTIONS(506),
    [anon_sym_Array] = ACTIONS(506),
    [anon_sym_Map] = ACTIONS(506),
    [anon_sym_Maybe] = ACTIONS(506),
    [anon_sym_Result] = ACTIONS(506),
    [anon_sym_Id] = ACTIONS(506),
    [anon_sym_Ptr] = ACTIONS(506),
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_RBRACK2] = ACTIONS(504),
    [sym_identifier] = ACTIONS(506),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_Bool] = ACTIONS(512),
    [anon_sym_Char] = ACTIONS(512),
    [anon_sym_Int] = ACTIONS(512),
    [anon_sym_Long] = ACTIONS(512),
    [anon_sym_Float] = ACTIONS(512),
    [anon_sym_Double] = ACTIONS(512),
    [anon_sym_Vector2] = ACTIONS(512),
    [anon_sym_Vector3] = ACTIONS(512),
    [anon_sym_VectorN] = ACTIONS(512),
    [anon_sym_String] = ACTIONS(512),
    [anon_sym_Pattern] = ACTIONS(512),
    [anon_sym_Array] = ACTIONS(512),
    [anon_sym_Map] = ACTIONS(512),
    [anon_sym_Maybe] = ACTIONS(512),
    [anon_sym_Result] = ACTIONS(512),
    [anon_sym_Id] = ACTIONS(512),
    [anon_sym_Ptr] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_RBRACK2] = ACTIONS(510),
    [sym_identifier] = ACTIONS(512),
  },
  [79] = {
    [aux_sym_complex_type_repeat1] = STATE(81),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_Bool] = ACTIONS(471),
    [anon_sym_Char] = ACTIONS(471),
    [anon_sym_Int] = ACTIONS(471),
    [anon_sym_Long] = ACTIONS(471),
    [anon_sym_Float] = ACTIONS(471),
    [anon_sym_Double] = ACTIONS(471),
    [anon_sym_Vector2] = ACTIONS(471),
    [anon_sym_Vector3] = ACTIONS(471),
    [anon_sym_VectorN] = ACTIONS(471),
    [anon_sym_String] = ACTIONS(471),
    [anon_sym_Pattern] = ACTIONS(471),
    [anon_sym_Array] = ACTIONS(471),
    [anon_sym_Map] = ACTIONS(471),
    [anon_sym_Maybe] = ACTIONS(471),
    [anon_sym_Result] = ACTIONS(471),
    [anon_sym_Id] = ACTIONS(471),
    [anon_sym_Ptr] = ACTIONS(471),
    [sym_identifier] = ACTIONS(475),
  },
  [80] = {
    [aux_sym_complex_type_repeat1] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(516),
    [anon_sym_Bool] = ACTIONS(471),
    [anon_sym_Char] = ACTIONS(471),
    [anon_sym_Int] = ACTIONS(471),
    [anon_sym_Long] = ACTIONS(471),
    [anon_sym_Float] = ACTIONS(471),
    [anon_sym_Double] = ACTIONS(471),
    [anon_sym_Vector2] = ACTIONS(471),
    [anon_sym_Vector3] = ACTIONS(471),
    [anon_sym_VectorN] = ACTIONS(471),
    [anon_sym_String] = ACTIONS(471),
    [anon_sym_Pattern] = ACTIONS(471),
    [anon_sym_Array] = ACTIONS(471),
    [anon_sym_Map] = ACTIONS(471),
    [anon_sym_Maybe] = ACTIONS(471),
    [anon_sym_Result] = ACTIONS(471),
    [anon_sym_Id] = ACTIONS(471),
    [anon_sym_Ptr] = ACTIONS(471),
    [sym_identifier] = ACTIONS(518),
  },
  [81] = {
    [aux_sym_complex_type_repeat1] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_Bool] = ACTIONS(471),
    [anon_sym_Char] = ACTIONS(471),
    [anon_sym_Int] = ACTIONS(471),
    [anon_sym_Long] = ACTIONS(471),
    [anon_sym_Float] = ACTIONS(471),
    [anon_sym_Double] = ACTIONS(471),
    [anon_sym_Vector2] = ACTIONS(471),
    [anon_sym_Vector3] = ACTIONS(471),
    [anon_sym_VectorN] = ACTIONS(471),
    [anon_sym_String] = ACTIONS(471),
    [anon_sym_Pattern] = ACTIONS(471),
    [anon_sym_Array] = ACTIONS(471),
    [anon_sym_Map] = ACTIONS(471),
    [anon_sym_Maybe] = ACTIONS(471),
    [anon_sym_Result] = ACTIONS(471),
    [anon_sym_Id] = ACTIONS(471),
    [anon_sym_Ptr] = ACTIONS(471),
    [sym_identifier] = ACTIONS(518),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_Bool] = ACTIONS(522),
    [anon_sym_Char] = ACTIONS(522),
    [anon_sym_Int] = ACTIONS(522),
    [anon_sym_Long] = ACTIONS(522),
    [anon_sym_Float] = ACTIONS(522),
    [anon_sym_Double] = ACTIONS(522),
    [anon_sym_Vector2] = ACTIONS(522),
    [anon_sym_Vector3] = ACTIONS(522),
    [anon_sym_VectorN] = ACTIONS(522),
    [anon_sym_String] = ACTIONS(522),
    [anon_sym_Pattern] = ACTIONS(522),
    [anon_sym_Array] = ACTIONS(522),
    [anon_sym_Map] = ACTIONS(522),
    [anon_sym_Maybe] = ACTIONS(522),
    [anon_sym_Result] = ACTIONS(522),
    [anon_sym_Id] = ACTIONS(522),
    [anon_sym_Ptr] = ACTIONS(522),
    [anon_sym_RBRACK2] = ACTIONS(497),
    [sym_identifier] = ACTIONS(522),
  },
  [83] = {
    [aux_sym_complex_type_repeat1] = STATE(80),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_Bool] = ACTIONS(471),
    [anon_sym_Char] = ACTIONS(471),
    [anon_sym_Int] = ACTIONS(471),
    [anon_sym_Long] = ACTIONS(471),
    [anon_sym_Float] = ACTIONS(471),
    [anon_sym_Double] = ACTIONS(471),
    [anon_sym_Vector2] = ACTIONS(471),
    [anon_sym_Vector3] = ACTIONS(471),
    [anon_sym_VectorN] = ACTIONS(471),
    [anon_sym_String] = ACTIONS(471),
    [anon_sym_Pattern] = ACTIONS(471),
    [anon_sym_Array] = ACTIONS(471),
    [anon_sym_Map] = ACTIONS(471),
    [anon_sym_Maybe] = ACTIONS(471),
    [anon_sym_Result] = ACTIONS(471),
    [anon_sym_Id] = ACTIONS(471),
    [anon_sym_Ptr] = ACTIONS(471),
    [sym_identifier] = ACTIONS(526),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(528),
    [anon_sym_Bool] = ACTIONS(530),
    [anon_sym_Char] = ACTIONS(530),
    [anon_sym_Int] = ACTIONS(530),
    [anon_sym_Long] = ACTIONS(530),
    [anon_sym_Float] = ACTIONS(530),
    [anon_sym_Double] = ACTIONS(530),
    [anon_sym_Vector2] = ACTIONS(530),
    [anon_sym_Vector3] = ACTIONS(530),
    [anon_sym_VectorN] = ACTIONS(530),
    [anon_sym_String] = ACTIONS(530),
    [anon_sym_Pattern] = ACTIONS(530),
    [anon_sym_Array] = ACTIONS(530),
    [anon_sym_Map] = ACTIONS(530),
    [anon_sym_Maybe] = ACTIONS(530),
    [anon_sym_Result] = ACTIONS(530),
    [anon_sym_Id] = ACTIONS(530),
    [anon_sym_Ptr] = ACTIONS(530),
    [anon_sym_RBRACK2] = ACTIONS(528),
    [sym_identifier] = ACTIONS(530),
  },
  [85] = {
    [aux_sym_complex_type_repeat1] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(532),
    [anon_sym_Bool] = ACTIONS(534),
    [anon_sym_Char] = ACTIONS(534),
    [anon_sym_Int] = ACTIONS(534),
    [anon_sym_Long] = ACTIONS(534),
    [anon_sym_Float] = ACTIONS(534),
    [anon_sym_Double] = ACTIONS(534),
    [anon_sym_Vector2] = ACTIONS(534),
    [anon_sym_Vector3] = ACTIONS(534),
    [anon_sym_VectorN] = ACTIONS(534),
    [anon_sym_String] = ACTIONS(534),
    [anon_sym_Pattern] = ACTIONS(534),
    [anon_sym_Array] = ACTIONS(534),
    [anon_sym_Map] = ACTIONS(534),
    [anon_sym_Maybe] = ACTIONS(534),
    [anon_sym_Result] = ACTIONS(534),
    [anon_sym_Id] = ACTIONS(534),
    [anon_sym_Ptr] = ACTIONS(534),
    [sym_identifier] = ACTIONS(537),
  },
  [86] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_array_expression_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(540),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(542),
  },
  [87] = {
    [sym__literals] = STATE(123),
    [sym_bool_literal] = STATE(123),
    [sym_str_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_pattern_literal] = STATE(123),
    [sym_array_expression] = STATE(123),
    [sym_map_expression] = STATE(123),
    [aux_sym_map_expression_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(544),
    [sym_integer_literal] = ACTIONS(547),
    [sym_float_literal] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(550),
    [anon_sym_false] = ACTIONS(550),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_BSLASH] = ACTIONS(556),
    [anon_sym_POUND_DQUOTE] = ACTIONS(559),
    [anon_sym_LBRACE] = ACTIONS(562),
    [anon_sym_RBRACE] = ACTIONS(565),
    [sym_identifier] = ACTIONS(547),
  },
  [88] = {
    [sym__literals] = STATE(123),
    [sym_bool_literal] = STATE(123),
    [sym_str_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_pattern_literal] = STATE(123),
    [sym_array_expression] = STATE(123),
    [sym_map_expression] = STATE(123),
    [aux_sym_map_expression_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(567),
    [sym_float_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(569),
    [sym_identifier] = ACTIONS(567),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [sym_integer_literal] = ACTIONS(443),
    [sym_float_literal] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_POUND_DQUOTE] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [sym_identifier] = ACTIONS(443),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK2] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [sym_integer_literal] = ACTIONS(403),
    [sym_float_literal] = ACTIONS(403),
    [anon_sym_true] = ACTIONS(403),
    [anon_sym_false] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
  },
  [91] = {
    [sym__literals] = STATE(123),
    [sym_bool_literal] = STATE(123),
    [sym_str_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_pattern_literal] = STATE(123),
    [sym_array_expression] = STATE(123),
    [sym_map_expression] = STATE(123),
    [aux_sym_map_expression_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(567),
    [sym_float_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(571),
    [sym_identifier] = ACTIONS(567),
  },
  [92] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_array_expression_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(573),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(542),
  },
  [93] = {
    [sym__literals] = STATE(123),
    [sym_bool_literal] = STATE(123),
    [sym_str_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_pattern_literal] = STATE(123),
    [sym_array_expression] = STATE(123),
    [sym_map_expression] = STATE(123),
    [aux_sym_map_expression_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(567),
    [sym_float_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(575),
    [sym_identifier] = ACTIONS(567),
  },
  [94] = {
    [sym__literals] = STATE(123),
    [sym_bool_literal] = STATE(123),
    [sym_str_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_pattern_literal] = STATE(123),
    [sym_array_expression] = STATE(123),
    [sym_map_expression] = STATE(123),
    [aux_sym_map_expression_repeat1] = STATE(104),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(567),
    [sym_float_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(577),
    [sym_identifier] = ACTIONS(567),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK2] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [sym_integer_literal] = ACTIONS(419),
    [sym_float_literal] = ACTIONS(419),
    [anon_sym_true] = ACTIONS(419),
    [anon_sym_false] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_BSLASH] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [sym_identifier] = ACTIONS(419),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK2] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(425),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [sym_integer_literal] = ACTIONS(427),
    [sym_float_literal] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(427),
    [anon_sym_false] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_BSLASH] = ACTIONS(425),
    [anon_sym_POUND_DQUOTE] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(425),
    [sym_identifier] = ACTIONS(427),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK2] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(445),
    [anon_sym_POUND_DQUOTE] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [sym_identifier] = ACTIONS(447),
  },
  [98] = {
    [sym__literals] = STATE(86),
    [sym_bool_literal] = STATE(86),
    [sym_str_literal] = STATE(86),
    [sym_char_literal] = STATE(86),
    [sym_pattern_literal] = STATE(86),
    [sym_array_expression] = STATE(86),
    [sym_map_expression] = STATE(86),
    [aux_sym_array_expression_repeat1] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(579),
    [sym_integer_literal] = ACTIONS(581),
    [sym_float_literal] = ACTIONS(581),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(581),
  },
  [99] = {
    [sym__literals] = STATE(123),
    [sym_bool_literal] = STATE(123),
    [sym_str_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_pattern_literal] = STATE(123),
    [sym_array_expression] = STATE(123),
    [sym_map_expression] = STATE(123),
    [aux_sym_map_expression_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(567),
    [sym_float_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(583),
    [sym_identifier] = ACTIONS(567),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK2] = ACTIONS(437),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [sym_integer_literal] = ACTIONS(439),
    [sym_float_literal] = ACTIONS(439),
    [anon_sym_true] = ACTIONS(439),
    [anon_sym_false] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_BSLASH] = ACTIONS(437),
    [anon_sym_POUND_DQUOTE] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(437),
    [sym_identifier] = ACTIONS(439),
  },
  [101] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_array_expression_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_RBRACK2] = ACTIONS(588),
    [sym_integer_literal] = ACTIONS(590),
    [sym_float_literal] = ACTIONS(590),
    [anon_sym_true] = ACTIONS(593),
    [anon_sym_false] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(596),
    [anon_sym_BSLASH] = ACTIONS(599),
    [anon_sym_POUND_DQUOTE] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(605),
    [sym_identifier] = ACTIONS(590),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK2] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [sym_integer_literal] = ACTIONS(431),
    [sym_float_literal] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(431),
    [anon_sym_false] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [sym_identifier] = ACTIONS(431),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK2] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [sym_integer_literal] = ACTIONS(455),
    [sym_float_literal] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_false] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_BSLASH] = ACTIONS(453),
    [anon_sym_POUND_DQUOTE] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_identifier] = ACTIONS(455),
  },
  [104] = {
    [sym__literals] = STATE(123),
    [sym_bool_literal] = STATE(123),
    [sym_str_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_pattern_literal] = STATE(123),
    [sym_array_expression] = STATE(123),
    [sym_map_expression] = STATE(123),
    [aux_sym_map_expression_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(567),
    [sym_float_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(608),
    [sym_identifier] = ACTIONS(567),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK2] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [sym_integer_literal] = ACTIONS(395),
    [sym_float_literal] = ACTIONS(395),
    [anon_sym_true] = ACTIONS(395),
    [anon_sym_false] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_BSLASH] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [sym_identifier] = ACTIONS(395),
  },
  [106] = {
    [sym__literals] = STATE(110),
    [sym_bool_literal] = STATE(110),
    [sym_str_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_pattern_literal] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_map_expression] = STATE(110),
    [aux_sym_array_expression_repeat1] = STATE(110),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(610),
    [sym_integer_literal] = ACTIONS(612),
    [sym_float_literal] = ACTIONS(612),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(612),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_Bool] = ACTIONS(616),
    [anon_sym_Char] = ACTIONS(616),
    [anon_sym_Int] = ACTIONS(616),
    [anon_sym_Long] = ACTIONS(616),
    [anon_sym_Float] = ACTIONS(616),
    [anon_sym_Double] = ACTIONS(616),
    [anon_sym_Vector2] = ACTIONS(616),
    [anon_sym_Vector3] = ACTIONS(616),
    [anon_sym_VectorN] = ACTIONS(616),
    [anon_sym_String] = ACTIONS(616),
    [anon_sym_Pattern] = ACTIONS(616),
    [anon_sym_Array] = ACTIONS(616),
    [anon_sym_Map] = ACTIONS(616),
    [anon_sym_Maybe] = ACTIONS(616),
    [anon_sym_Result] = ACTIONS(616),
    [anon_sym_Id] = ACTIONS(616),
    [anon_sym_Ptr] = ACTIONS(616),
    [sym_identifier] = ACTIONS(616),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK2] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [sym_integer_literal] = ACTIONS(459),
    [sym_float_literal] = ACTIONS(459),
    [anon_sym_true] = ACTIONS(459),
    [anon_sym_false] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_BSLASH] = ACTIONS(457),
    [anon_sym_POUND_DQUOTE] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(457),
    [sym_identifier] = ACTIONS(459),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK2] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [sym_integer_literal] = ACTIONS(463),
    [sym_float_literal] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_false] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [sym_identifier] = ACTIONS(463),
  },
  [110] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_array_expression_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(618),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(542),
  },
  [111] = {
    [sym__literals] = STATE(92),
    [sym_bool_literal] = STATE(92),
    [sym_str_literal] = STATE(92),
    [sym_char_literal] = STATE(92),
    [sym_pattern_literal] = STATE(92),
    [sym_array_expression] = STATE(92),
    [sym_map_expression] = STATE(92),
    [aux_sym_array_expression_repeat1] = STATE(92),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(620),
    [sym_integer_literal] = ACTIONS(622),
    [sym_float_literal] = ACTIONS(622),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(622),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_LBRACK] = ACTIONS(624),
    [anon_sym_AMP] = ACTIONS(624),
    [anon_sym_AT] = ACTIONS(624),
    [anon_sym_TILDE] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(624),
    [sym_integer_literal] = ACTIONS(626),
    [sym_float_literal] = ACTIONS(626),
    [anon_sym_true] = ACTIONS(626),
    [anon_sym_false] = ACTIONS(626),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_BSLASH] = ACTIONS(624),
    [anon_sym_POUND_DQUOTE] = ACTIONS(624),
    [anon_sym_LBRACE] = ACTIONS(624),
    [anon_sym_COLON] = ACTIONS(624),
    [sym_identifier] = ACTIONS(626),
  },
  [113] = {
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym_integer_literal] = ACTIONS(387),
    [sym_float_literal] = ACTIONS(387),
    [anon_sym_true] = ACTIONS(387),
    [anon_sym_false] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_BSLASH] = ACTIONS(385),
    [anon_sym_POUND_DQUOTE] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [sym_integer_literal] = ACTIONS(435),
    [sym_float_literal] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(435),
    [anon_sym_false] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_BSLASH] = ACTIONS(433),
    [anon_sym_POUND_DQUOTE] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(628),
    [anon_sym_AMP] = ACTIONS(628),
    [anon_sym_AT] = ACTIONS(628),
    [anon_sym_TILDE] = ACTIONS(628),
    [anon_sym_SQUOTE] = ACTIONS(628),
    [sym_integer_literal] = ACTIONS(630),
    [sym_float_literal] = ACTIONS(630),
    [anon_sym_true] = ACTIONS(630),
    [anon_sym_false] = ACTIONS(630),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [anon_sym_BSLASH] = ACTIONS(628),
    [anon_sym_POUND_DQUOTE] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_COLON] = ACTIONS(628),
    [sym_identifier] = ACTIONS(630),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [sym_integer_literal] = ACTIONS(451),
    [sym_float_literal] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_false] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(449),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [sym_integer_literal] = ACTIONS(407),
    [sym_float_literal] = ACTIONS(407),
    [anon_sym_true] = ACTIONS(407),
    [anon_sym_false] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [sym_identifier] = ACTIONS(407),
  },
  [118] = {
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(409),
    [anon_sym_SQUOTE] = ACTIONS(409),
    [sym_integer_literal] = ACTIONS(411),
    [sym_float_literal] = ACTIONS(411),
    [anon_sym_true] = ACTIONS(411),
    [anon_sym_false] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_BSLASH] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [sym_integer_literal] = ACTIONS(423),
    [sym_float_literal] = ACTIONS(423),
    [anon_sym_true] = ACTIONS(423),
    [anon_sym_false] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_BSLASH] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [sym_identifier] = ACTIONS(423),
  },
  [120] = {
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [sym_integer_literal] = ACTIONS(399),
    [sym_float_literal] = ACTIONS(399),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(397),
    [sym_identifier] = ACTIONS(399),
  },
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [sym_integer_literal] = ACTIONS(391),
    [sym_float_literal] = ACTIONS(391),
    [anon_sym_true] = ACTIONS(391),
    [anon_sym_false] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(389),
    [sym_identifier] = ACTIONS(391),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [sym_integer_literal] = ACTIONS(415),
    [sym_float_literal] = ACTIONS(415),
    [anon_sym_true] = ACTIONS(415),
    [anon_sym_false] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_BSLASH] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(413),
    [sym_identifier] = ACTIONS(415),
  },
  [123] = {
    [sym__literals] = STATE(131),
    [sym_bool_literal] = STATE(131),
    [sym_str_literal] = STATE(131),
    [sym_char_literal] = STATE(131),
    [sym_pattern_literal] = STATE(131),
    [sym_array_expression] = STATE(131),
    [sym_map_expression] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(632),
    [sym_float_literal] = ACTIONS(632),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(632),
  },
  [124] = {
    [anon_sym_LPAREN] = ACTIONS(634),
    [anon_sym_RPAREN] = ACTIONS(634),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_AMP] = ACTIONS(634),
    [anon_sym_AT] = ACTIONS(634),
    [anon_sym_TILDE] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [sym_integer_literal] = ACTIONS(636),
    [sym_float_literal] = ACTIONS(636),
    [anon_sym_true] = ACTIONS(636),
    [anon_sym_false] = ACTIONS(636),
    [anon_sym_DQUOTE] = ACTIONS(634),
    [anon_sym_BSLASH] = ACTIONS(634),
    [anon_sym_POUND_DQUOTE] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(634),
    [anon_sym_COLON] = ACTIONS(634),
    [sym_identifier] = ACTIONS(636),
  },
  [125] = {
    [anon_sym_LPAREN] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_AMP] = ACTIONS(638),
    [anon_sym_AT] = ACTIONS(638),
    [anon_sym_TILDE] = ACTIONS(638),
    [anon_sym_SQUOTE] = ACTIONS(638),
    [sym_integer_literal] = ACTIONS(640),
    [sym_float_literal] = ACTIONS(640),
    [anon_sym_true] = ACTIONS(640),
    [anon_sym_false] = ACTIONS(640),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [anon_sym_BSLASH] = ACTIONS(638),
    [anon_sym_POUND_DQUOTE] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_COLON] = ACTIONS(638),
    [sym_identifier] = ACTIONS(640),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_AMP] = ACTIONS(642),
    [anon_sym_AT] = ACTIONS(642),
    [anon_sym_TILDE] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [sym_integer_literal] = ACTIONS(644),
    [sym_float_literal] = ACTIONS(644),
    [anon_sym_true] = ACTIONS(644),
    [anon_sym_false] = ACTIONS(644),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_BSLASH] = ACTIONS(642),
    [anon_sym_POUND_DQUOTE] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [sym_identifier] = ACTIONS(644),
  },
  [127] = {
    [anon_sym_LPAREN] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_LBRACK] = ACTIONS(646),
    [anon_sym_AMP] = ACTIONS(646),
    [anon_sym_AT] = ACTIONS(646),
    [anon_sym_TILDE] = ACTIONS(646),
    [anon_sym_SQUOTE] = ACTIONS(646),
    [sym_integer_literal] = ACTIONS(648),
    [sym_float_literal] = ACTIONS(648),
    [anon_sym_true] = ACTIONS(648),
    [anon_sym_false] = ACTIONS(648),
    [anon_sym_DQUOTE] = ACTIONS(646),
    [anon_sym_BSLASH] = ACTIONS(646),
    [anon_sym_POUND_DQUOTE] = ACTIONS(646),
    [anon_sym_LBRACE] = ACTIONS(646),
    [anon_sym_COLON] = ACTIONS(646),
    [sym_identifier] = ACTIONS(648),
  },
  [128] = {
    [anon_sym_LPAREN] = ACTIONS(650),
    [anon_sym_RPAREN] = ACTIONS(650),
    [anon_sym_LBRACK] = ACTIONS(650),
    [anon_sym_AMP] = ACTIONS(650),
    [anon_sym_AT] = ACTIONS(650),
    [anon_sym_TILDE] = ACTIONS(650),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [sym_integer_literal] = ACTIONS(652),
    [sym_float_literal] = ACTIONS(652),
    [anon_sym_true] = ACTIONS(652),
    [anon_sym_false] = ACTIONS(652),
    [anon_sym_DQUOTE] = ACTIONS(650),
    [anon_sym_BSLASH] = ACTIONS(650),
    [anon_sym_POUND_DQUOTE] = ACTIONS(650),
    [anon_sym_LBRACE] = ACTIONS(650),
    [anon_sym_COLON] = ACTIONS(650),
    [sym_identifier] = ACTIONS(652),
  },
  [129] = {
    [anon_sym_LPAREN] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_AMP] = ACTIONS(654),
    [anon_sym_AT] = ACTIONS(654),
    [anon_sym_TILDE] = ACTIONS(654),
    [anon_sym_SQUOTE] = ACTIONS(654),
    [sym_integer_literal] = ACTIONS(656),
    [sym_float_literal] = ACTIONS(656),
    [anon_sym_true] = ACTIONS(656),
    [anon_sym_false] = ACTIONS(656),
    [anon_sym_DQUOTE] = ACTIONS(654),
    [anon_sym_BSLASH] = ACTIONS(654),
    [anon_sym_POUND_DQUOTE] = ACTIONS(654),
    [anon_sym_LBRACE] = ACTIONS(654),
    [anon_sym_COLON] = ACTIONS(654),
    [sym_identifier] = ACTIONS(656),
  },
  [130] = {
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_RPAREN] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_AMP] = ACTIONS(658),
    [anon_sym_AT] = ACTIONS(658),
    [anon_sym_TILDE] = ACTIONS(658),
    [anon_sym_SQUOTE] = ACTIONS(658),
    [sym_integer_literal] = ACTIONS(660),
    [sym_float_literal] = ACTIONS(660),
    [anon_sym_true] = ACTIONS(660),
    [anon_sym_false] = ACTIONS(660),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [anon_sym_BSLASH] = ACTIONS(658),
    [anon_sym_POUND_DQUOTE] = ACTIONS(658),
    [anon_sym_LBRACE] = ACTIONS(658),
    [anon_sym_COLON] = ACTIONS(658),
    [sym_identifier] = ACTIONS(660),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(662),
    [sym_integer_literal] = ACTIONS(664),
    [sym_float_literal] = ACTIONS(664),
    [anon_sym_true] = ACTIONS(664),
    [anon_sym_false] = ACTIONS(664),
    [anon_sym_DQUOTE] = ACTIONS(662),
    [anon_sym_BSLASH] = ACTIONS(662),
    [anon_sym_POUND_DQUOTE] = ACTIONS(662),
    [anon_sym_LBRACE] = ACTIONS(662),
    [anon_sym_RBRACE] = ACTIONS(662),
    [sym_identifier] = ACTIONS(664),
  },
  [132] = {
    [sym_line_comment] = STATE(133),
    [sym__s_expr] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(666),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [133] = {
    [sym_line_comment] = STATE(133),
    [sym__s_expr] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(670),
    [anon_sym_LPAREN] = ACTIONS(673),
  },
  [134] = {
    [sym_symbol] = STATE(135),
    [aux_sym_parameters_repeat1] = STATE(135),
    [anon_sym_RBRACK2] = ACTIONS(676),
    [anon_sym_COLON] = ACTIONS(678),
    [sym_identifier] = ACTIONS(680),
  },
  [135] = {
    [sym_symbol] = STATE(135),
    [aux_sym_parameters_repeat1] = STATE(135),
    [anon_sym_RBRACK2] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(684),
    [sym_identifier] = ACTIONS(687),
  },
  [136] = {
    [sym_fields] = STATE(207),
    [aux_sym__deftype2_repeat1] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(690),
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(694),
  },
  [137] = {
    [sym_symbol] = STATE(134),
    [aux_sym_parameters_repeat1] = STATE(134),
    [anon_sym_RBRACK2] = ACTIONS(696),
    [anon_sym_COLON] = ACTIONS(678),
    [sym_identifier] = ACTIONS(698),
  },
  [138] = {
    [sym__deftype1] = STATE(199),
    [sym__deftype2] = STATE(199),
    [sym__name_deftypes] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(700),
    [sym_identifier] = ACTIONS(702),
  },
  [139] = {
    [aux_sym_str_literal_repeat1] = STATE(139),
    [aux_sym_str_literal_token1] = ACTIONS(704),
    [anon_sym_DQUOTE2] = ACTIONS(707),
    [sym_escape_sequence] = ACTIONS(709),
  },
  [140] = {
    [aux_sym_str_literal_repeat1] = STATE(139),
    [aux_sym_str_literal_token1] = ACTIONS(712),
    [anon_sym_DQUOTE2] = ACTIONS(714),
    [sym_escape_sequence] = ACTIONS(716),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(718),
    [anon_sym_LPAREN] = ACTIONS(718),
    [anon_sym_RPAREN] = ACTIONS(718),
  },
  [142] = {
    [aux_sym_str_literal_repeat1] = STATE(139),
    [aux_sym_str_literal_token1] = ACTIONS(712),
    [anon_sym_DQUOTE2] = ACTIONS(720),
    [sym_escape_sequence] = ACTIONS(716),
  },
  [143] = {
    [aux_sym_str_literal_repeat1] = STATE(139),
    [aux_sym_str_literal_token1] = ACTIONS(712),
    [anon_sym_DQUOTE2] = ACTIONS(722),
    [sym_escape_sequence] = ACTIONS(716),
  },
  [144] = {
    [aux_sym_str_literal_repeat1] = STATE(142),
    [aux_sym_str_literal_token1] = ACTIONS(724),
    [anon_sym_DQUOTE2] = ACTIONS(726),
    [sym_escape_sequence] = ACTIONS(728),
  },
  [145] = {
    [aux_sym_str_literal_repeat1] = STATE(143),
    [aux_sym_str_literal_token1] = ACTIONS(730),
    [anon_sym_DQUOTE2] = ACTIONS(732),
    [sym_escape_sequence] = ACTIONS(734),
  },
  [146] = {
    [aux_sym_str_literal_repeat1] = STATE(139),
    [aux_sym_str_literal_token1] = ACTIONS(712),
    [anon_sym_DQUOTE2] = ACTIONS(736),
    [sym_escape_sequence] = ACTIONS(716),
  },
  [147] = {
    [aux_sym_str_literal_repeat1] = STATE(139),
    [aux_sym_str_literal_token1] = ACTIONS(712),
    [anon_sym_DQUOTE2] = ACTIONS(738),
    [sym_escape_sequence] = ACTIONS(716),
  },
  [148] = {
    [aux_sym_str_literal_repeat1] = STATE(152),
    [aux_sym_str_literal_token1] = ACTIONS(740),
    [anon_sym_DQUOTE2] = ACTIONS(742),
    [sym_escape_sequence] = ACTIONS(744),
  },
  [149] = {
    [aux_sym_str_literal_repeat1] = STATE(140),
    [aux_sym_str_literal_token1] = ACTIONS(746),
    [anon_sym_DQUOTE2] = ACTIONS(748),
    [sym_escape_sequence] = ACTIONS(750),
  },
  [150] = {
    [aux_sym_str_literal_repeat1] = STATE(146),
    [aux_sym_str_literal_token1] = ACTIONS(752),
    [anon_sym_DQUOTE2] = ACTIONS(754),
    [sym_escape_sequence] = ACTIONS(756),
  },
  [151] = {
    [aux_sym_str_literal_repeat1] = STATE(147),
    [aux_sym_str_literal_token1] = ACTIONS(758),
    [anon_sym_DQUOTE2] = ACTIONS(760),
    [sym_escape_sequence] = ACTIONS(762),
  },
  [152] = {
    [aux_sym_str_literal_repeat1] = STATE(139),
    [aux_sym_str_literal_token1] = ACTIONS(712),
    [anon_sym_DQUOTE2] = ACTIONS(764),
    [sym_escape_sequence] = ACTIONS(716),
  },
  [153] = {
    [sym_interface_fn] = STATE(245),
    [anon_sym_Fn] = ACTIONS(766),
    [anon_sym_] = ACTIONS(766),
  },
  [154] = {
    [aux_sym_let_pairs_repeat1] = STATE(155),
    [anon_sym_RBRACK] = ACTIONS(768),
    [sym_identifier] = ACTIONS(770),
  },
  [155] = {
    [aux_sym_let_pairs_repeat1] = STATE(155),
    [anon_sym_RBRACK] = ACTIONS(772),
    [sym_identifier] = ACTIONS(774),
  },
  [156] = {
    [anon_sym_LPAREN] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(777),
  },
  [157] = {
    [aux_sym__name_deftypes_repeat1] = STATE(159),
    [anon_sym_RPAREN2] = ACTIONS(779),
    [sym_identifier] = ACTIONS(781),
  },
  [158] = {
    [anon_sym_LPAREN] = ACTIONS(783),
    [anon_sym_RPAREN] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(783),
  },
  [159] = {
    [aux_sym__name_deftypes_repeat1] = STATE(159),
    [anon_sym_RPAREN2] = ACTIONS(785),
    [sym_identifier] = ACTIONS(787),
  },
  [160] = {
    [aux_sym_let_pairs_repeat1] = STATE(154),
    [anon_sym_RBRACK] = ACTIONS(790),
    [sym_identifier] = ACTIONS(770),
  },
  [161] = {
    [aux_sym__deftype2_repeat1] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(690),
    [anon_sym_RPAREN] = ACTIONS(792),
  },
  [162] = {
    [anon_sym_LPAREN] = ACTIONS(794),
    [anon_sym_RPAREN] = ACTIONS(794),
    [anon_sym_LBRACK] = ACTIONS(794),
  },
  [163] = {
    [aux_sym__deftype2_repeat1] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(796),
    [anon_sym_RPAREN] = ACTIONS(799),
  },
  [164] = {
    [anon_sym_RBRACK2] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(413),
    [sym_identifier] = ACTIONS(413),
  },
  [165] = {
    [aux_sym__name_deftypes_repeat1] = STATE(157),
    [anon_sym_RPAREN2] = ACTIONS(801),
    [sym_identifier] = ACTIONS(803),
  },
  [166] = {
    [sym_parameters] = STATE(19),
    [anon_sym_LBRACK] = ACTIONS(805),
  },
  [167] = {
    [sym_typed_parameters] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(807),
  },
  [168] = {
    [aux_sym_str_literal_token1] = ACTIONS(809),
    [sym_escape_sequence] = ACTIONS(811),
  },
  [169] = {
    [sym_parameters] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(805),
  },
  [170] = {
    [anon_sym_LPAREN] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(813),
  },
  [171] = {
    [sym_let_pairs] = STATE(17),
    [anon_sym_LBRACK] = ACTIONS(815),
  },
  [172] = {
    [sym_fields] = STATE(224),
    [anon_sym_LBRACK] = ACTIONS(817),
  },
  [173] = {
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym_identifier] = ACTIONS(445),
  },
  [174] = {
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_identifier] = ACTIONS(401),
  },
  [175] = {
    [aux_sym_str_literal_token1] = ACTIONS(819),
    [sym_escape_sequence] = ACTIONS(821),
  },
  [176] = {
    [anon_sym_RBRACK] = ACTIONS(823),
    [sym_identifier] = ACTIONS(823),
  },
  [177] = {
    [anon_sym_RBRACK] = ACTIONS(421),
    [sym_identifier] = ACTIONS(421),
  },
  [178] = {
    [anon_sym_RBRACK] = ACTIONS(433),
    [sym_identifier] = ACTIONS(433),
  },
  [179] = {
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym_identifier] = ACTIONS(449),
  },
  [180] = {
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_identifier] = ACTIONS(397),
  },
  [181] = {
    [anon_sym_RBRACK] = ACTIONS(461),
    [sym_identifier] = ACTIONS(461),
  },
  [182] = {
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_identifier] = ACTIONS(457),
  },
  [183] = {
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym_identifier] = ACTIONS(393),
  },
  [184] = {
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_identifier] = ACTIONS(453),
  },
  [185] = {
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_identifier] = ACTIONS(441),
  },
  [186] = {
    [anon_sym_RBRACK] = ACTIONS(437),
    [sym_identifier] = ACTIONS(437),
  },
  [187] = {
    [anon_sym_RBRACK] = ACTIONS(429),
    [sym_identifier] = ACTIONS(429),
  },
  [188] = {
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_identifier] = ACTIONS(425),
  },
  [189] = {
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_identifier] = ACTIONS(417),
  },
  [190] = {
    [aux_sym_str_literal_token1] = ACTIONS(825),
    [sym_escape_sequence] = ACTIONS(827),
  },
  [191] = {
    [sym_str_literal] = STATE(203),
    [anon_sym_DQUOTE] = ACTIONS(61),
  },
  [192] = {
    [sym_parameters] = STATE(18),
    [anon_sym_LBRACK] = ACTIONS(805),
  },
  [193] = {
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_identifier] = ACTIONS(413),
  },
  [194] = {
    [sym_parameters] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(805),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(829),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(831),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(833),
  },
  [198] = {
    [aux_sym_line_comment_token1] = ACTIONS(835),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(837),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(839),
  },
  [201] = {
    [sym_identifier] = ACTIONS(841),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(843),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(845),
  },
  [204] = {
    [anon_sym_LPAREN] = ACTIONS(847),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(849),
  },
  [206] = {
    [sym_identifier] = ACTIONS(851),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(853),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(855),
  },
  [209] = {
    [anon_sym_RPAREN2] = ACTIONS(839),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(857),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(859),
  },
  [212] = {
    [anon_sym_DOT] = ACTIONS(861),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(863),
  },
  [214] = {
    [sym_identifier] = ACTIONS(865),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(867),
  },
  [216] = {
    [anon_sym_RPAREN2] = ACTIONS(869),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(871),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(869),
  },
  [219] = {
    [sym_identifier] = ACTIONS(873),
  },
  [220] = {
    [sym_identifier] = ACTIONS(875),
  },
  [221] = {
    [anon_sym_RPAREN] = ACTIONS(877),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(879),
  },
  [223] = {
    [anon_sym_RPAREN] = ACTIONS(881),
  },
  [224] = {
    [anon_sym_RPAREN2] = ACTIONS(883),
  },
  [225] = {
    [sym_identifier] = ACTIONS(885),
  },
  [226] = {
    [sym_identifier] = ACTIONS(887),
  },
  [227] = {
    [sym_identifier] = ACTIONS(889),
  },
  [228] = {
    [sym_identifier] = ACTIONS(891),
  },
  [229] = {
    [sym_identifier] = ACTIONS(893),
  },
  [230] = {
    [sym_identifier] = ACTIONS(895),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(897),
  },
  [232] = {
    [sym_identifier] = ACTIONS(899),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(901),
  },
  [234] = {
    [anon_sym_RPAREN] = ACTIONS(903),
  },
  [235] = {
    [anon_sym_RPAREN] = ACTIONS(905),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(907),
  },
  [237] = {
    [sym_identifier] = ACTIONS(909),
  },
  [238] = {
    [sym_identifier] = ACTIONS(911),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(913),
  },
  [240] = {
    [sym_identifier] = ACTIONS(915),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(917),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(919),
  },
  [243] = {
    [sym_upper_identifier] = ACTIONS(921),
  },
  [244] = {
    [sym_identifier] = ACTIONS(923),
  },
  [245] = {
    [anon_sym_RPAREN] = ACTIONS(925),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(927),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(198),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(243),
  [11] = {.count = 1, .reusable = false}, SHIFT(240),
  [13] = {.count = 1, .reusable = false}, SHIFT(237),
  [15] = {.count = 1, .reusable = false}, SHIFT(169),
  [17] = {.count = 1, .reusable = false}, SHIFT(232),
  [19] = {.count = 1, .reusable = false}, SHIFT(171),
  [21] = {.count = 1, .reusable = true}, SHIFT(106),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = false}, SHIFT(25),
  [27] = {.count = 1, .reusable = false}, SHIFT(41),
  [29] = {.count = 1, .reusable = false}, SHIFT(38),
  [31] = {.count = 1, .reusable = false}, SHIFT(35),
  [33] = {.count = 1, .reusable = false}, SHIFT(230),
  [35] = {.count = 1, .reusable = false}, SHIFT(76),
  [37] = {.count = 1, .reusable = false}, SHIFT(229),
  [39] = {.count = 1, .reusable = false}, SHIFT(228),
  [41] = {.count = 1, .reusable = false}, SHIFT(227),
  [43] = {.count = 1, .reusable = false}, SHIFT(226),
  [45] = {.count = 1, .reusable = false}, SHIFT(225),
  [47] = {.count = 1, .reusable = false}, SHIFT(138),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, SHIFT(28),
  [53] = {.count = 1, .reusable = true}, SHIFT(29),
  [55] = {.count = 1, .reusable = true}, SHIFT(30),
  [57] = {.count = 1, .reusable = false}, SHIFT(239),
  [59] = {.count = 1, .reusable = false}, SHIFT(97),
  [61] = {.count = 1, .reusable = true}, SHIFT(148),
  [63] = {.count = 1, .reusable = true}, SHIFT(175),
  [65] = {.count = 1, .reusable = true}, SHIFT(149),
  [67] = {.count = 1, .reusable = true}, SHIFT(91),
  [69] = {.count = 1, .reusable = true}, SHIFT(214),
  [71] = {.count = 1, .reusable = false}, SHIFT(213),
  [73] = {.count = 1, .reusable = false}, SHIFT(124),
  [75] = {.count = 1, .reusable = false}, SHIFT(212),
  [77] = {.count = 1, .reusable = false}, SHIFT(211),
  [79] = {.count = 1, .reusable = false}, SHIFT(196),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 11),
  [83] = {.count = 1, .reusable = false}, SHIFT(115),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [88] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(106),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(27),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(28),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(29),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(30),
  [105] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(6),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(97),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(148),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(175),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(149),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(91),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(214),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(3),
  [129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(106),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(27),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(28),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(29),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(30),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(115),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(97),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(148),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(175),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(149),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(91),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(214),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 7),
  [169] = {.count = 1, .reusable = false}, SHIFT(125),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(3),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(106),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(27),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(28),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(29),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(30),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(125),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(97),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(148),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(175),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(149),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(91),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(214),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 26),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [218] = {.count = 1, .reusable = false}, SHIFT(13),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [222] = {.count = 1, .reusable = false}, SHIFT(6),
  [224] = {.count = 1, .reusable = true}, SHIFT(83),
  [226] = {.count = 1, .reusable = false}, SHIFT(54),
  [228] = {.count = 1, .reusable = true}, SHIFT(70),
  [230] = {.count = 1, .reusable = true}, SHIFT(44),
  [232] = {.count = 1, .reusable = true}, SHIFT(24),
  [234] = {.count = 1, .reusable = true}, SHIFT(32),
  [236] = {.count = 1, .reusable = true}, SHIFT(31),
  [238] = {.count = 1, .reusable = false}, SHIFT(53),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 4),
  [242] = {.count = 1, .reusable = false}, SHIFT(217),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 8),
  [246] = {.count = 1, .reusable = false}, SHIFT(223),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 5),
  [250] = {.count = 1, .reusable = false}, SHIFT(221),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 18),
  [254] = {.count = 1, .reusable = false}, SHIFT(215),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 18),
  [258] = {.count = 1, .reusable = false}, SHIFT(241),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 18),
  [262] = {.count = 1, .reusable = false}, SHIFT(242),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_register, 3, .production_id = 24),
  [266] = {.count = 1, .reusable = false}, SHIFT(197),
  [268] = {.count = 1, .reusable = true}, SHIFT(68),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(83),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(54),
  [276] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(24),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(32),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [290] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(53),
  [293] = {.count = 1, .reusable = true}, SHIFT(2),
  [295] = {.count = 1, .reusable = true}, SHIFT(111),
  [297] = {.count = 1, .reusable = false}, SHIFT(60),
  [299] = {.count = 1, .reusable = false}, SHIFT(63),
  [301] = {.count = 1, .reusable = true}, SHIFT(145),
  [303] = {.count = 1, .reusable = true}, SHIFT(168),
  [305] = {.count = 1, .reusable = true}, SHIFT(144),
  [307] = {.count = 1, .reusable = true}, SHIFT(99),
  [309] = {.count = 1, .reusable = true}, SHIFT(244),
  [311] = {.count = 1, .reusable = false}, SHIFT(45),
  [313] = {.count = 1, .reusable = true}, SHIFT(4),
  [315] = {.count = 1, .reusable = true}, SHIFT(98),
  [317] = {.count = 1, .reusable = true}, SHIFT(39),
  [319] = {.count = 1, .reusable = true}, SHIFT(37),
  [321] = {.count = 1, .reusable = true}, SHIFT(36),
  [323] = {.count = 1, .reusable = true}, SHIFT(34),
  [325] = {.count = 1, .reusable = false}, SHIFT(176),
  [327] = {.count = 1, .reusable = false}, SHIFT(173),
  [329] = {.count = 1, .reusable = true}, SHIFT(151),
  [331] = {.count = 1, .reusable = true}, SHIFT(190),
  [333] = {.count = 1, .reusable = true}, SHIFT(150),
  [335] = {.count = 1, .reusable = true}, SHIFT(94),
  [337] = {.count = 1, .reusable = true}, SHIFT(238),
  [339] = {.count = 1, .reusable = false}, SHIFT(119),
  [341] = {.count = 1, .reusable = false}, SHIFT(114),
  [343] = {.count = 1, .reusable = false}, SHIFT(116),
  [345] = {.count = 1, .reusable = false}, SHIFT(120),
  [347] = {.count = 1, .reusable = false}, SHIFT(51),
  [349] = {.count = 1, .reusable = false}, SHIFT(64),
  [351] = {.count = 1, .reusable = false}, SHIFT(233),
  [353] = {.count = 1, .reusable = false}, SHIFT(180),
  [355] = {.count = 1, .reusable = false}, SHIFT(205),
  [357] = {.count = 1, .reusable = false}, SHIFT(179),
  [359] = {.count = 1, .reusable = false}, SHIFT(178),
  [361] = {.count = 1, .reusable = false}, SHIFT(195),
  [363] = {.count = 1, .reusable = false}, SHIFT(177),
  [365] = {.count = 1, .reusable = false}, SHIFT(231),
  [367] = {.count = 1, .reusable = false}, SHIFT(16),
  [369] = {.count = 1, .reusable = false}, SHIFT(208),
  [371] = {.count = 1, .reusable = false}, SHIFT(222),
  [373] = {.count = 1, .reusable = false}, SHIFT(57),
  [375] = {.count = 1, .reusable = false}, SHIFT(43),
  [377] = {.count = 1, .reusable = true}, SHIFT(69),
  [379] = {.count = 1, .reusable = false}, SHIFT(118),
  [381] = {.count = 1, .reusable = false}, SHIFT(117),
  [383] = {.count = 1, .reusable = true}, SHIFT(79),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 10),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 10),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [469] = {.count = 1, .reusable = true}, SHIFT(121),
  [471] = {.count = 1, .reusable = false}, SHIFT(107),
  [473] = {.count = 1, .reusable = false}, SHIFT(167),
  [475] = {.count = 1, .reusable = false}, SHIFT(81),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [481] = {.count = 1, .reusable = false}, SHIFT(77),
  [483] = {.count = 1, .reusable = true}, SHIFT(216),
  [485] = {.count = 1, .reusable = false}, SHIFT(78),
  [487] = {.count = 1, .reusable = true}, SHIFT(200),
  [489] = {.count = 1, .reusable = true}, SHIFT(209),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(83),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(77),
  [497] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [499] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(78),
  [502] = {.count = 1, .reusable = true}, SHIFT(218),
  [504] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 40),
  [506] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 40),
  [508] = {.count = 1, .reusable = true}, SHIFT(84),
  [510] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1),
  [512] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1),
  [514] = {.count = 1, .reusable = true}, SHIFT(82),
  [516] = {.count = 1, .reusable = true}, SHIFT(48),
  [518] = {.count = 1, .reusable = false}, SHIFT(85),
  [520] = {.count = 1, .reusable = true}, SHIFT(113),
  [522] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2),
  [524] = {.count = 1, .reusable = true}, SHIFT(49),
  [526] = {.count = 1, .reusable = false}, SHIFT(80),
  [528] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 40),
  [530] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 40),
  [532] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [534] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(107),
  [537] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(85),
  [540] = {.count = 1, .reusable = true}, SHIFT(186),
  [542] = {.count = 1, .reusable = false}, SHIFT(101),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(106),
  [547] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(123),
  [550] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(97),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(148),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(175),
  [559] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(149),
  [562] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(91),
  [565] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31),
  [567] = {.count = 1, .reusable = false}, SHIFT(123),
  [569] = {.count = 1, .reusable = true}, SHIFT(56),
  [571] = {.count = 1, .reusable = true}, SHIFT(103),
  [573] = {.count = 1, .reusable = true}, SHIFT(61),
  [575] = {.count = 1, .reusable = true}, SHIFT(95),
  [577] = {.count = 1, .reusable = true}, SHIFT(184),
  [579] = {.count = 1, .reusable = true}, SHIFT(174),
  [581] = {.count = 1, .reusable = false}, SHIFT(86),
  [583] = {.count = 1, .reusable = true}, SHIFT(65),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(106),
  [588] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [590] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(101),
  [593] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(97),
  [596] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(148),
  [599] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(175),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(149),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(91),
  [608] = {.count = 1, .reusable = true}, SHIFT(189),
  [610] = {.count = 1, .reusable = true}, SHIFT(90),
  [612] = {.count = 1, .reusable = false}, SHIFT(110),
  [614] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [616] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [618] = {.count = 1, .reusable = true}, SHIFT(100),
  [620] = {.count = 1, .reusable = true}, SHIFT(52),
  [622] = {.count = 1, .reusable = false}, SHIFT(92),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [630] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [632] = {.count = 1, .reusable = false}, SHIFT(131),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [638] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [640] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [644] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 32),
  [648] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 32),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [652] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [656] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [660] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [662] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [664] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [668] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [676] = {.count = 1, .reusable = true}, SHIFT(129),
  [678] = {.count = 1, .reusable = true}, SHIFT(219),
  [680] = {.count = 1, .reusable = true}, SHIFT(135),
  [682] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(219),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(135),
  [690] = {.count = 1, .reusable = true}, SHIFT(206),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 13),
  [694] = {.count = 1, .reusable = true}, SHIFT(75),
  [696] = {.count = 1, .reusable = true}, SHIFT(128),
  [698] = {.count = 1, .reusable = true}, SHIFT(134),
  [700] = {.count = 1, .reusable = true}, SHIFT(201),
  [702] = {.count = 1, .reusable = true}, SHIFT(162),
  [704] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(139),
  [707] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(139),
  [712] = {.count = 1, .reusable = false}, SHIFT(139),
  [714] = {.count = 1, .reusable = true}, SHIFT(96),
  [716] = {.count = 1, .reusable = true}, SHIFT(139),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [720] = {.count = 1, .reusable = true}, SHIFT(58),
  [722] = {.count = 1, .reusable = true}, SHIFT(59),
  [724] = {.count = 1, .reusable = false}, SHIFT(142),
  [726] = {.count = 1, .reusable = true}, SHIFT(50),
  [728] = {.count = 1, .reusable = true}, SHIFT(142),
  [730] = {.count = 1, .reusable = false}, SHIFT(143),
  [732] = {.count = 1, .reusable = true}, SHIFT(67),
  [734] = {.count = 1, .reusable = true}, SHIFT(143),
  [736] = {.count = 1, .reusable = true}, SHIFT(188),
  [738] = {.count = 1, .reusable = true}, SHIFT(187),
  [740] = {.count = 1, .reusable = false}, SHIFT(152),
  [742] = {.count = 1, .reusable = true}, SHIFT(109),
  [744] = {.count = 1, .reusable = true}, SHIFT(152),
  [746] = {.count = 1, .reusable = false}, SHIFT(140),
  [748] = {.count = 1, .reusable = true}, SHIFT(105),
  [750] = {.count = 1, .reusable = true}, SHIFT(140),
  [752] = {.count = 1, .reusable = false}, SHIFT(146),
  [754] = {.count = 1, .reusable = true}, SHIFT(183),
  [756] = {.count = 1, .reusable = true}, SHIFT(146),
  [758] = {.count = 1, .reusable = false}, SHIFT(147),
  [760] = {.count = 1, .reusable = true}, SHIFT(181),
  [762] = {.count = 1, .reusable = true}, SHIFT(147),
  [764] = {.count = 1, .reusable = true}, SHIFT(102),
  [766] = {.count = 1, .reusable = true}, SHIFT(167),
  [768] = {.count = 1, .reusable = true}, SHIFT(130),
  [770] = {.count = 1, .reusable = true}, SHIFT(26),
  [772] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36),
  [774] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36), SHIFT_REPEAT(26),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 11),
  [779] = {.count = 1, .reusable = true}, SHIFT(158),
  [781] = {.count = 1, .reusable = true}, SHIFT(159),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 43),
  [785] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [787] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(159),
  [790] = {.count = 1, .reusable = true}, SHIFT(112),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 28),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [796] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 41), SHIFT_REPEAT(206),
  [799] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 41),
  [801] = {.count = 1, .reusable = true}, SHIFT(156),
  [803] = {.count = 1, .reusable = true}, SHIFT(157),
  [805] = {.count = 1, .reusable = true}, SHIFT(137),
  [807] = {.count = 1, .reusable = true}, SHIFT(14),
  [809] = {.count = 1, .reusable = false}, SHIFT(66),
  [811] = {.count = 1, .reusable = true}, SHIFT(66),
  [813] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 45),
  [815] = {.count = 1, .reusable = true}, SHIFT(160),
  [817] = {.count = 1, .reusable = true}, SHIFT(71),
  [819] = {.count = 1, .reusable = false}, SHIFT(108),
  [821] = {.count = 1, .reusable = true}, SHIFT(108),
  [823] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [825] = {.count = 1, .reusable = false}, SHIFT(182),
  [827] = {.count = 1, .reusable = true}, SHIFT(182),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 9),
  [831] = {.count = 1, .reusable = true}, SHIFT(185),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 38),
  [835] = {.count = 1, .reusable = true}, SHIFT(141),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 12),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [841] = {.count = 1, .reusable = true}, SHIFT(165),
  [843] = {.count = 1, .reusable = true}, SHIFT(236),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_doc, 3, .production_id = 15),
  [847] = {.count = 1, .reusable = true}, SHIFT(153),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 9),
  [851] = {.count = 1, .reusable = true}, SHIFT(172),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 27),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 16),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_use, 2, .production_id = 3),
  [859] = {.count = 1, .reusable = true}, SHIFT(89),
  [861] = {.count = 1, .reusable = true}, SHIFT(220),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym_operators, 1),
  [865] = {.count = 1, .reusable = true}, SHIFT(122),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 33),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 17),
  [873] = {.count = 1, .reusable = true}, SHIFT(164),
  [875] = {.count = 1, .reusable = true}, SHIFT(127),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 19),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 37),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 21),
  [883] = {.count = 1, .reusable = true}, SHIFT(170),
  [885] = {.count = 1, .reusable = true}, SHIFT(5),
  [887] = {.count = 1, .reusable = true}, SHIFT(166),
  [889] = {.count = 1, .reusable = true}, SHIFT(194),
  [891] = {.count = 1, .reusable = true}, SHIFT(204),
  [893] = {.count = 1, .reusable = true}, SHIFT(46),
  [895] = {.count = 1, .reusable = true}, SHIFT(40),
  [897] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 22),
  [899] = {.count = 1, .reusable = true}, SHIFT(192),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 23),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 42),
  [905] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 44),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 42),
  [909] = {.count = 1, .reusable = true}, SHIFT(42),
  [911] = {.count = 1, .reusable = true}, SHIFT(193),
  [913] = {.count = 1, .reusable = true}, SHIFT(62),
  [915] = {.count = 1, .reusable = true}, SHIFT(191),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 33),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 33),
  [921] = {.count = 1, .reusable = true}, SHIFT(210),
  [923] = {.count = 1, .reusable = true}, SHIFT(55),
  [925] = {.count = 1, .reusable = true}, SHIFT(234),
  [927] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
