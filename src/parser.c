#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 246
#define SYMBOL_COUNT 158
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
  aux_sym_source_file_repeat1 = 144,
  aux_sym_let_pairs_repeat1 = 145,
  aux_sym_do_repeat1 = 146,
  aux_sym_complex_type_repeat1 = 147,
  aux_sym_call_expression_repeat1 = 148,
  aux_sym_defmodule_repeat1 = 149,
  aux_sym__deftype2_repeat1 = 150,
  aux_sym__name_deftypes_repeat1 = 151,
  aux_sym_fields_repeat1 = 152,
  aux_sym_parameters_repeat1 = 153,
  aux_sym_typed_parameters_repeat1 = 154,
  aux_sym_str_literal_repeat1 = 155,
  aux_sym_array_expression_repeat1 = 156,
  aux_sym_map_expression_repeat1 = 157,
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
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'B') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(190);
      if (lookahead == 'D') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(200);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(157);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(188);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'B') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(190);
      if (lookahead == 'D') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(200);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(157);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(188);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(236);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(274);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(236);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'B') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(190);
      if (lookahead == 'D') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(201);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(157);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'B') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(190);
      if (lookahead == 'D') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(201);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(157);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'B') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(190);
      if (lookahead == 'D') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(200);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(157);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (913 <= lookahead && lookahead <= 937)) ADVANCE(275);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(271);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(272);
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
    case 34:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(152);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(231);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(207);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 128:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(270);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(198);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(208);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(215);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(155);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 't') ADVANCE(230);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(232);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(257);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(163);
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
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(204);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(189);
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
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(261);
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
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(242);
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
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(169);
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
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(253);
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
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(153);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 148:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 149:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 150:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(154);
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
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(220);
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
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(243);
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
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(175);
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
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(269);
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
    case 156:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 157:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
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
    case 159:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 160:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 161:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 162:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 163:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 164:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 165:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 166:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 167:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 168:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 169:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(203);
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
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(254);
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
    case 173:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 174:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
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
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(256);
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
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
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
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
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
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
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
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
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
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
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
    case 182:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 183:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(193);
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
    case 185:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 186:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 187:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(171);
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
    case 189:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 190:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(195);
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
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(268);
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
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
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
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(151);
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
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(203);
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
    case 196:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(214);
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
    case 198:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 199:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(223);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(223);
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
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(258);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(166);
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
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
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
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
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
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(251);
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
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(196);
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
    case 209:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 210:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 211:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 212:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(206);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(187);
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
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(150);
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
    case 216:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(264);
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
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(266);
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
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(209);
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
    case 220:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 221:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(199);
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
    case 223:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(222);
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
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(255);
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
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(233);
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
    case 227:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(167);
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
    case 229:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 230:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 231:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 232:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 233:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 234:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
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
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(268);
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
    case 237:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(185);
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
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(237);
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
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
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
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(212);
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
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(221);
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
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
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
    case 244:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 245:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(267);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(245);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(161);
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
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(164);
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
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(265);
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
    case 253:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 254:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 255:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 256:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 257:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 258:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 259:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(235);
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
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
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
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
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
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
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
    case 266:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(202);
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
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(162);
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
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(205);
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
    case 270:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(228);
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
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(216);
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
    case 273:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 274:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(274);
      END_STATE();
    case 275:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(275);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
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
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
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
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 13},
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
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 3},
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
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 11},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 11},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 11},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 25},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 0},
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
    [sym_source_file] = STATE(245),
    [sym_line_comment] = STATE(133),
    [sym__s_expr] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(238),
    [sym__s_expr] = STATE(238),
    [sym__anything] = STATE(238),
    [sym__s_forms] = STATE(238),
    [sym__defs] = STATE(238),
    [sym__literals] = STATE(238),
    [sym__short_helper] = STATE(238),
    [sym_use] = STATE(238),
    [sym_doc] = STATE(238),
    [sym_def] = STATE(238),
    [sym_fn] = STATE(238),
    [sym_defn] = STATE(238),
    [sym_let] = STATE(238),
    [sym_do] = STATE(238),
    [sym_if] = STATE(238),
    [sym_while] = STATE(238),
    [sym_ref] = STATE(238),
    [sym_address] = STATE(238),
    [sym_set] = STATE(238),
    [sym_the] = STATE(238),
    [sym_register] = STATE(238),
    [sym_call_expression] = STATE(238),
    [sym_call_name] = STATE(12),
    [sym_definterface] = STATE(238),
    [sym_defmacro] = STATE(238),
    [sym_defndynamic] = STATE(238),
    [sym_defmodule] = STATE(238),
    [sym_deftype] = STATE(238),
    [sym_short_ref] = STATE(238),
    [sym_short_copy] = STATE(238),
    [sym_short_fn_ref] = STATE(114),
    [sym_short_quote] = STATE(238),
    [sym_bool_literal] = STATE(238),
    [sym_str_literal] = STATE(238),
    [sym_char_literal] = STATE(238),
    [sym_pattern_literal] = STATE(238),
    [sym_array_expression] = STATE(238),
    [sym_map_expression] = STATE(238),
    [sym_symbol] = STATE(238),
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
    [sym_identifier] = ACTIONS(71),
    [sym_upper_identifier] = ACTIONS(73),
  },
  [3] = {
    [sym_line_comment] = STATE(221),
    [sym__s_expr] = STATE(221),
    [sym__anything] = STATE(221),
    [sym__s_forms] = STATE(221),
    [sym__defs] = STATE(221),
    [sym__literals] = STATE(221),
    [sym__short_helper] = STATE(221),
    [sym_use] = STATE(221),
    [sym_doc] = STATE(221),
    [sym_def] = STATE(221),
    [sym_fn] = STATE(221),
    [sym_defn] = STATE(221),
    [sym_let] = STATE(221),
    [sym_do] = STATE(221),
    [sym_if] = STATE(221),
    [sym_while] = STATE(221),
    [sym_ref] = STATE(221),
    [sym_address] = STATE(221),
    [sym_set] = STATE(221),
    [sym_the] = STATE(221),
    [sym_register] = STATE(221),
    [sym_call_expression] = STATE(221),
    [sym_call_name] = STATE(12),
    [sym_definterface] = STATE(221),
    [sym_defmacro] = STATE(221),
    [sym_defndynamic] = STATE(221),
    [sym_defmodule] = STATE(221),
    [sym_deftype] = STATE(221),
    [sym_short_ref] = STATE(221),
    [sym_short_copy] = STATE(221),
    [sym_short_fn_ref] = STATE(114),
    [sym_short_quote] = STATE(221),
    [sym_bool_literal] = STATE(221),
    [sym_str_literal] = STATE(221),
    [sym_char_literal] = STATE(221),
    [sym_pattern_literal] = STATE(221),
    [sym_array_expression] = STATE(221),
    [sym_map_expression] = STATE(221),
    [sym_symbol] = STATE(221),
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
    [sym_integer_literal] = ACTIONS(75),
    [sym_float_literal] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym_upper_identifier] = ACTIONS(73),
  },
  [4] = {
    [sym_line_comment] = STATE(195),
    [sym__s_expr] = STATE(195),
    [sym__anything] = STATE(195),
    [sym__s_forms] = STATE(195),
    [sym__defs] = STATE(195),
    [sym__literals] = STATE(195),
    [sym__short_helper] = STATE(195),
    [sym_use] = STATE(195),
    [sym_doc] = STATE(195),
    [sym_def] = STATE(195),
    [sym_fn] = STATE(195),
    [sym_defn] = STATE(195),
    [sym_let] = STATE(195),
    [sym_do] = STATE(195),
    [sym_if] = STATE(195),
    [sym_while] = STATE(195),
    [sym_ref] = STATE(195),
    [sym_address] = STATE(195),
    [sym_set] = STATE(195),
    [sym_the] = STATE(195),
    [sym_register] = STATE(195),
    [sym_call_expression] = STATE(195),
    [sym_call_name] = STATE(12),
    [sym_definterface] = STATE(195),
    [sym_defmacro] = STATE(195),
    [sym_defndynamic] = STATE(195),
    [sym_defmodule] = STATE(195),
    [sym_deftype] = STATE(195),
    [sym_short_ref] = STATE(195),
    [sym_short_copy] = STATE(195),
    [sym_short_fn_ref] = STATE(114),
    [sym_short_quote] = STATE(195),
    [sym_bool_literal] = STATE(195),
    [sym_str_literal] = STATE(195),
    [sym_char_literal] = STATE(195),
    [sym_pattern_literal] = STATE(195),
    [sym_array_expression] = STATE(195),
    [sym_map_expression] = STATE(195),
    [sym_symbol] = STATE(195),
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
    [sym_identifier] = ACTIONS(71),
    [sym_upper_identifier] = ACTIONS(73),
  },
  [5] = {
    [sym__s_expr] = STATE(118),
    [sym__expr] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__short_helper] = STATE(118),
    [sym_short_ref] = STATE(118),
    [sym_short_copy] = STATE(118),
    [sym_short_fn_ref] = STATE(118),
    [sym_short_quote] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [sym_symbol] = STATE(118),
    [aux_sym_defmodule_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(81),
    [sym_float_literal] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(81),
  },
  [6] = {
    [sym__s_expr] = STATE(126),
    [sym__expr] = STATE(126),
    [sym__literals] = STATE(126),
    [sym__short_helper] = STATE(126),
    [sym_short_ref] = STATE(126),
    [sym_short_copy] = STATE(126),
    [sym_short_fn_ref] = STATE(126),
    [sym_short_quote] = STATE(126),
    [sym_bool_literal] = STATE(126),
    [sym_str_literal] = STATE(126),
    [sym_char_literal] = STATE(126),
    [sym_pattern_literal] = STATE(126),
    [sym_array_expression] = STATE(126),
    [sym_map_expression] = STATE(126),
    [sym_symbol] = STATE(126),
    [aux_sym_do_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [sym_integer_literal] = ACTIONS(103),
    [sym_float_literal] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_false] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(112),
    [anon_sym_POUND_DQUOTE] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(121),
    [sym_identifier] = ACTIONS(103),
  },
  [7] = {
    [sym__s_expr] = STATE(7),
    [sym__expr] = STATE(7),
    [sym__literals] = STATE(7),
    [sym__short_helper] = STATE(7),
    [sym_short_ref] = STATE(7),
    [sym_short_copy] = STATE(7),
    [sym_short_fn_ref] = STATE(7),
    [sym_short_quote] = STATE(7),
    [sym_bool_literal] = STATE(7),
    [sym_str_literal] = STATE(7),
    [sym_char_literal] = STATE(7),
    [sym_pattern_literal] = STATE(7),
    [sym_array_expression] = STATE(7),
    [sym_map_expression] = STATE(7),
    [sym_symbol] = STATE(7),
    [aux_sym_call_expression_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [sym_integer_literal] = ACTIONS(144),
    [sym_float_literal] = ACTIONS(144),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_BSLASH] = ACTIONS(153),
    [anon_sym_POUND_DQUOTE] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(162),
    [sym_identifier] = ACTIONS(144),
  },
  [8] = {
    [sym__s_expr] = STATE(118),
    [sym__expr] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__short_helper] = STATE(118),
    [sym_short_ref] = STATE(118),
    [sym_short_copy] = STATE(118),
    [sym_short_fn_ref] = STATE(118),
    [sym_short_quote] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [sym_symbol] = STATE(118),
    [aux_sym_defmodule_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [sym_integer_literal] = ACTIONS(185),
    [sym_float_literal] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_BSLASH] = ACTIONS(194),
    [anon_sym_POUND_DQUOTE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_COLON] = ACTIONS(203),
    [sym_identifier] = ACTIONS(185),
  },
  [9] = {
    [sym__s_expr] = STATE(7),
    [sym__expr] = STATE(7),
    [sym__literals] = STATE(7),
    [sym__short_helper] = STATE(7),
    [sym_short_ref] = STATE(7),
    [sym_short_copy] = STATE(7),
    [sym_short_fn_ref] = STATE(7),
    [sym_short_quote] = STATE(7),
    [sym_bool_literal] = STATE(7),
    [sym_str_literal] = STATE(7),
    [sym_char_literal] = STATE(7),
    [sym_pattern_literal] = STATE(7),
    [sym_array_expression] = STATE(7),
    [sym_map_expression] = STATE(7),
    [sym_symbol] = STATE(7),
    [aux_sym_call_expression_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(208),
    [sym_float_literal] = ACTIONS(208),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(208),
  },
  [10] = {
    [sym__s_expr] = STATE(126),
    [sym__expr] = STATE(126),
    [sym__literals] = STATE(126),
    [sym__short_helper] = STATE(126),
    [sym_short_ref] = STATE(126),
    [sym_short_copy] = STATE(126),
    [sym_short_fn_ref] = STATE(126),
    [sym_short_quote] = STATE(126),
    [sym_bool_literal] = STATE(126),
    [sym_str_literal] = STATE(126),
    [sym_char_literal] = STATE(126),
    [sym_pattern_literal] = STATE(126),
    [sym_array_expression] = STATE(126),
    [sym_map_expression] = STATE(126),
    [sym_symbol] = STATE(126),
    [aux_sym_do_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(212),
    [sym_float_literal] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(212),
  },
  [11] = {
    [sym__s_expr] = STATE(118),
    [sym__expr] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__short_helper] = STATE(118),
    [sym_short_ref] = STATE(118),
    [sym_short_copy] = STATE(118),
    [sym_short_fn_ref] = STATE(118),
    [sym_short_quote] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [sym_symbol] = STATE(118),
    [aux_sym_defmodule_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(81),
    [sym_float_literal] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(81),
  },
  [12] = {
    [sym__s_expr] = STATE(9),
    [sym__expr] = STATE(9),
    [sym__literals] = STATE(9),
    [sym__short_helper] = STATE(9),
    [sym_short_ref] = STATE(9),
    [sym_short_copy] = STATE(9),
    [sym_short_fn_ref] = STATE(9),
    [sym_short_quote] = STATE(9),
    [sym_bool_literal] = STATE(9),
    [sym_str_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_pattern_literal] = STATE(9),
    [sym_array_expression] = STATE(9),
    [sym_map_expression] = STATE(9),
    [sym_symbol] = STATE(9),
    [aux_sym_call_expression_repeat1] = STATE(9),
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
    [sym__s_expr] = STATE(126),
    [sym__expr] = STATE(126),
    [sym__literals] = STATE(126),
    [sym__short_helper] = STATE(126),
    [sym_short_ref] = STATE(126),
    [sym_short_copy] = STATE(126),
    [sym_short_fn_ref] = STATE(126),
    [sym_short_quote] = STATE(126),
    [sym_bool_literal] = STATE(126),
    [sym_str_literal] = STATE(126),
    [sym_char_literal] = STATE(126),
    [sym_pattern_literal] = STATE(126),
    [sym_array_expression] = STATE(126),
    [sym_map_expression] = STATE(126),
    [sym_symbol] = STATE(126),
    [aux_sym_do_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(212),
    [sym_float_literal] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(212),
  },
  [14] = {
    [sym__s_expr] = STATE(207),
    [sym__expr] = STATE(207),
    [sym__literals] = STATE(207),
    [sym__short_helper] = STATE(207),
    [sym_short_ref] = STATE(207),
    [sym_short_copy] = STATE(207),
    [sym_short_fn_ref] = STATE(207),
    [sym_short_quote] = STATE(207),
    [sym_bool_literal] = STATE(207),
    [sym_str_literal] = STATE(207),
    [sym_char_literal] = STATE(207),
    [sym_pattern_literal] = STATE(207),
    [sym_array_expression] = STATE(207),
    [sym_map_expression] = STATE(207),
    [sym_symbol] = STATE(207),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(224),
    [sym_float_literal] = ACTIONS(224),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(224),
  },
  [15] = {
    [sym__s_expr] = STATE(210),
    [sym__expr] = STATE(210),
    [sym__literals] = STATE(210),
    [sym__short_helper] = STATE(210),
    [sym_short_ref] = STATE(210),
    [sym_short_copy] = STATE(210),
    [sym_short_fn_ref] = STATE(210),
    [sym_short_quote] = STATE(210),
    [sym_bool_literal] = STATE(210),
    [sym_str_literal] = STATE(210),
    [sym_char_literal] = STATE(210),
    [sym_pattern_literal] = STATE(210),
    [sym_array_expression] = STATE(210),
    [sym_map_expression] = STATE(210),
    [sym_symbol] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(228),
    [sym_float_literal] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(228),
  },
  [16] = {
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
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(232),
    [sym_float_literal] = ACTIONS(232),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(232),
  },
  [17] = {
    [sym__short_helper] = STATE(18),
    [sym_type] = STATE(18),
    [sym_complex_type] = STATE(63),
    [sym_short_ref] = STATE(18),
    [sym_short_copy] = STATE(18),
    [sym_short_fn_ref] = STATE(18),
    [sym_short_quote] = STATE(18),
    [aux_sym_typed_parameters_repeat1] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_Bool] = ACTIONS(236),
    [anon_sym_Char] = ACTIONS(236),
    [anon_sym_Int] = ACTIONS(236),
    [anon_sym_Long] = ACTIONS(236),
    [anon_sym_Float] = ACTIONS(236),
    [anon_sym_Double] = ACTIONS(236),
    [anon_sym_Vector2] = ACTIONS(236),
    [anon_sym_Vector3] = ACTIONS(236),
    [anon_sym_VectorN] = ACTIONS(236),
    [anon_sym_String] = ACTIONS(236),
    [anon_sym_Pattern] = ACTIONS(236),
    [anon_sym_Array] = ACTIONS(236),
    [anon_sym_Map] = ACTIONS(236),
    [anon_sym_Maybe] = ACTIONS(236),
    [anon_sym_Result] = ACTIONS(236),
    [anon_sym_Id] = ACTIONS(236),
    [anon_sym_Ptr] = ACTIONS(236),
    [anon_sym_RBRACK2] = ACTIONS(238),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [sym_identifier] = ACTIONS(248),
  },
  [18] = {
    [sym__short_helper] = STATE(19),
    [sym_type] = STATE(19),
    [sym_complex_type] = STATE(63),
    [sym_short_ref] = STATE(19),
    [sym_short_copy] = STATE(19),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(19),
    [aux_sym_typed_parameters_repeat1] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_Bool] = ACTIONS(236),
    [anon_sym_Char] = ACTIONS(236),
    [anon_sym_Int] = ACTIONS(236),
    [anon_sym_Long] = ACTIONS(236),
    [anon_sym_Float] = ACTIONS(236),
    [anon_sym_Double] = ACTIONS(236),
    [anon_sym_Vector2] = ACTIONS(236),
    [anon_sym_Vector3] = ACTIONS(236),
    [anon_sym_VectorN] = ACTIONS(236),
    [anon_sym_String] = ACTIONS(236),
    [anon_sym_Pattern] = ACTIONS(236),
    [anon_sym_Array] = ACTIONS(236),
    [anon_sym_Map] = ACTIONS(236),
    [anon_sym_Maybe] = ACTIONS(236),
    [anon_sym_Result] = ACTIONS(236),
    [anon_sym_Id] = ACTIONS(236),
    [anon_sym_Ptr] = ACTIONS(236),
    [anon_sym_RBRACK2] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [sym_identifier] = ACTIONS(248),
  },
  [19] = {
    [sym__short_helper] = STATE(19),
    [sym_type] = STATE(19),
    [sym_complex_type] = STATE(63),
    [sym_short_ref] = STATE(19),
    [sym_short_copy] = STATE(19),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(19),
    [aux_sym_typed_parameters_repeat1] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_Bool] = ACTIONS(255),
    [anon_sym_Char] = ACTIONS(255),
    [anon_sym_Int] = ACTIONS(255),
    [anon_sym_Long] = ACTIONS(255),
    [anon_sym_Float] = ACTIONS(255),
    [anon_sym_Double] = ACTIONS(255),
    [anon_sym_Vector2] = ACTIONS(255),
    [anon_sym_Vector3] = ACTIONS(255),
    [anon_sym_VectorN] = ACTIONS(255),
    [anon_sym_String] = ACTIONS(255),
    [anon_sym_Pattern] = ACTIONS(255),
    [anon_sym_Array] = ACTIONS(255),
    [anon_sym_Map] = ACTIONS(255),
    [anon_sym_Maybe] = ACTIONS(255),
    [anon_sym_Result] = ACTIONS(255),
    [anon_sym_Id] = ACTIONS(255),
    [anon_sym_Ptr] = ACTIONS(255),
    [anon_sym_RBRACK2] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(260),
    [anon_sym_AT] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [sym_identifier] = ACTIONS(272),
  },
  [20] = {
    [sym__s_expr] = STATE(216),
    [sym__expr] = STATE(216),
    [sym__literals] = STATE(216),
    [sym__short_helper] = STATE(216),
    [sym_short_ref] = STATE(216),
    [sym_short_copy] = STATE(216),
    [sym_short_fn_ref] = STATE(216),
    [sym_short_quote] = STATE(216),
    [sym_bool_literal] = STATE(216),
    [sym_str_literal] = STATE(216),
    [sym_char_literal] = STATE(216),
    [sym_pattern_literal] = STATE(216),
    [sym_array_expression] = STATE(216),
    [sym_map_expression] = STATE(216),
    [sym_symbol] = STATE(216),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(277),
    [sym_float_literal] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(277),
  },
  [21] = {
    [sym__s_expr] = STATE(212),
    [sym__expr] = STATE(212),
    [sym__literals] = STATE(212),
    [sym__short_helper] = STATE(212),
    [sym_short_ref] = STATE(212),
    [sym_short_copy] = STATE(212),
    [sym_short_fn_ref] = STATE(212),
    [sym_short_quote] = STATE(212),
    [sym_bool_literal] = STATE(212),
    [sym_str_literal] = STATE(212),
    [sym_char_literal] = STATE(212),
    [sym_pattern_literal] = STATE(212),
    [sym_array_expression] = STATE(212),
    [sym_map_expression] = STATE(212),
    [sym_symbol] = STATE(212),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(281),
    [sym_float_literal] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(281),
  },
  [22] = {
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
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(285),
  },
  [23] = {
    [sym__s_expr] = STATE(235),
    [sym__expr] = STATE(235),
    [sym__literals] = STATE(235),
    [sym__short_helper] = STATE(235),
    [sym_short_ref] = STATE(235),
    [sym_short_copy] = STATE(235),
    [sym_short_fn_ref] = STATE(235),
    [sym_short_quote] = STATE(235),
    [sym_bool_literal] = STATE(235),
    [sym_str_literal] = STATE(235),
    [sym_char_literal] = STATE(235),
    [sym_pattern_literal] = STATE(235),
    [sym_array_expression] = STATE(235),
    [sym_map_expression] = STATE(235),
    [sym_symbol] = STATE(235),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(289),
  },
  [24] = {
    [sym__s_expr] = STATE(27),
    [sym__expr] = STATE(27),
    [sym__literals] = STATE(27),
    [sym__short_helper] = STATE(27),
    [sym_short_ref] = STATE(27),
    [sym_short_copy] = STATE(27),
    [sym_short_fn_ref] = STATE(27),
    [sym_short_quote] = STATE(27),
    [sym_bool_literal] = STATE(27),
    [sym_str_literal] = STATE(27),
    [sym_char_literal] = STATE(27),
    [sym_pattern_literal] = STATE(27),
    [sym_array_expression] = STATE(27),
    [sym_map_expression] = STATE(27),
    [sym_symbol] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(291),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(291),
  },
  [25] = {
    [sym__s_expr] = STATE(198),
    [sym__expr] = STATE(198),
    [sym__literals] = STATE(198),
    [sym__short_helper] = STATE(198),
    [sym_short_ref] = STATE(198),
    [sym_short_copy] = STATE(198),
    [sym_short_fn_ref] = STATE(198),
    [sym_short_quote] = STATE(198),
    [sym_bool_literal] = STATE(198),
    [sym_str_literal] = STATE(198),
    [sym_char_literal] = STATE(198),
    [sym_pattern_literal] = STATE(198),
    [sym_array_expression] = STATE(198),
    [sym_map_expression] = STATE(198),
    [sym_symbol] = STATE(198),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(293),
    [sym_float_literal] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(293),
  },
  [26] = {
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
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [sym_integer_literal] = ACTIONS(299),
    [sym_float_literal] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [sym_identifier] = ACTIONS(299),
  },
  [27] = {
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
    [sym_integer_literal] = ACTIONS(313),
    [sym_float_literal] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(313),
  },
  [28] = {
    [sym__s_expr] = STATE(61),
    [sym__expr] = STATE(61),
    [sym__literals] = STATE(61),
    [sym__short_helper] = STATE(61),
    [sym_short_ref] = STATE(61),
    [sym_short_copy] = STATE(61),
    [sym_short_fn_ref] = STATE(61),
    [sym_short_quote] = STATE(61),
    [sym_bool_literal] = STATE(61),
    [sym_str_literal] = STATE(61),
    [sym_char_literal] = STATE(61),
    [sym_pattern_literal] = STATE(61),
    [sym_array_expression] = STATE(61),
    [sym_map_expression] = STATE(61),
    [sym_symbol] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [sym_integer_literal] = ACTIONS(315),
    [sym_float_literal] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [sym_identifier] = ACTIONS(315),
  },
  [29] = {
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
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [sym_integer_literal] = ACTIONS(329),
    [sym_float_literal] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [sym_identifier] = ACTIONS(329),
  },
  [30] = {
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
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [sym_integer_literal] = ACTIONS(343),
    [sym_float_literal] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [sym_identifier] = ACTIONS(343),
  },
  [31] = {
    [sym__s_expr] = STATE(65),
    [sym__expr] = STATE(65),
    [sym__literals] = STATE(65),
    [sym__short_helper] = STATE(65),
    [sym_short_ref] = STATE(65),
    [sym_short_copy] = STATE(65),
    [sym_short_fn_ref] = STATE(65),
    [sym_short_quote] = STATE(65),
    [sym_bool_literal] = STATE(65),
    [sym_str_literal] = STATE(65),
    [sym_char_literal] = STATE(65),
    [sym_pattern_literal] = STATE(65),
    [sym_array_expression] = STATE(65),
    [sym_map_expression] = STATE(65),
    [sym_symbol] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [sym_integer_literal] = ACTIONS(345),
    [sym_float_literal] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [sym_identifier] = ACTIONS(345),
  },
  [32] = {
    [sym__s_expr] = STATE(24),
    [sym__expr] = STATE(24),
    [sym__literals] = STATE(24),
    [sym__short_helper] = STATE(24),
    [sym_short_ref] = STATE(24),
    [sym_short_copy] = STATE(24),
    [sym_short_fn_ref] = STATE(24),
    [sym_short_quote] = STATE(24),
    [sym_bool_literal] = STATE(24),
    [sym_str_literal] = STATE(24),
    [sym_char_literal] = STATE(24),
    [sym_pattern_literal] = STATE(24),
    [sym_array_expression] = STATE(24),
    [sym_map_expression] = STATE(24),
    [sym_symbol] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(347),
    [sym_float_literal] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(347),
  },
  [33] = {
    [sym__s_expr] = STATE(113),
    [sym__expr] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__short_helper] = STATE(113),
    [sym_short_ref] = STATE(113),
    [sym_short_copy] = STATE(113),
    [sym_short_fn_ref] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_char_literal] = STATE(113),
    [sym_pattern_literal] = STATE(113),
    [sym_array_expression] = STATE(113),
    [sym_map_expression] = STATE(113),
    [sym_symbol] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(349),
    [sym_float_literal] = ACTIONS(349),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(349),
  },
  [34] = {
    [sym__s_expr] = STATE(117),
    [sym__expr] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__short_helper] = STATE(117),
    [sym_short_ref] = STATE(117),
    [sym_short_copy] = STATE(117),
    [sym_short_fn_ref] = STATE(117),
    [sym_short_quote] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [sym_symbol] = STATE(117),
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
  [35] = {
    [sym__s_expr] = STATE(121),
    [sym__expr] = STATE(121),
    [sym__literals] = STATE(121),
    [sym__short_helper] = STATE(121),
    [sym_short_ref] = STATE(121),
    [sym_short_copy] = STATE(121),
    [sym_short_fn_ref] = STATE(121),
    [sym_short_quote] = STATE(121),
    [sym_bool_literal] = STATE(121),
    [sym_str_literal] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_pattern_literal] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_map_expression] = STATE(121),
    [sym_symbol] = STATE(121),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(353),
    [sym_float_literal] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(353),
  },
  [36] = {
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
  [37] = {
    [sym__s_expr] = STATE(228),
    [sym__expr] = STATE(228),
    [sym__literals] = STATE(228),
    [sym__short_helper] = STATE(228),
    [sym_short_ref] = STATE(228),
    [sym_short_copy] = STATE(228),
    [sym_short_fn_ref] = STATE(228),
    [sym_short_quote] = STATE(228),
    [sym_bool_literal] = STATE(228),
    [sym_str_literal] = STATE(228),
    [sym_char_literal] = STATE(228),
    [sym_pattern_literal] = STATE(228),
    [sym_array_expression] = STATE(228),
    [sym_map_expression] = STATE(228),
    [sym_symbol] = STATE(228),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(357),
    [sym_float_literal] = ACTIONS(357),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(357),
  },
  [38] = {
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
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [sym_integer_literal] = ACTIONS(359),
    [sym_float_literal] = ACTIONS(359),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [sym_identifier] = ACTIONS(359),
  },
  [39] = {
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
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [sym_integer_literal] = ACTIONS(361),
    [sym_float_literal] = ACTIONS(361),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [sym_identifier] = ACTIONS(361),
  },
  [40] = {
    [sym__s_expr] = STATE(175),
    [sym__expr] = STATE(175),
    [sym__literals] = STATE(175),
    [sym__short_helper] = STATE(175),
    [sym_short_ref] = STATE(175),
    [sym_short_copy] = STATE(175),
    [sym_short_fn_ref] = STATE(175),
    [sym_short_quote] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [sym_symbol] = STATE(175),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [sym_integer_literal] = ACTIONS(363),
    [sym_float_literal] = ACTIONS(363),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [sym_identifier] = ACTIONS(363),
  },
  [41] = {
    [sym__s_expr] = STATE(22),
    [sym__expr] = STATE(22),
    [sym__literals] = STATE(22),
    [sym__short_helper] = STATE(22),
    [sym_short_ref] = STATE(22),
    [sym_short_copy] = STATE(22),
    [sym_short_fn_ref] = STATE(22),
    [sym_short_quote] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [sym_symbol] = STATE(22),
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
  [42] = {
    [sym__s_expr] = STATE(174),
    [sym__expr] = STATE(174),
    [sym__literals] = STATE(174),
    [sym__short_helper] = STATE(174),
    [sym_short_ref] = STATE(174),
    [sym_short_copy] = STATE(174),
    [sym_short_fn_ref] = STATE(174),
    [sym_short_quote] = STATE(174),
    [sym_bool_literal] = STATE(174),
    [sym_str_literal] = STATE(174),
    [sym_char_literal] = STATE(174),
    [sym_pattern_literal] = STATE(174),
    [sym_array_expression] = STATE(174),
    [sym_map_expression] = STATE(174),
    [sym_symbol] = STATE(174),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [sym_integer_literal] = ACTIONS(367),
    [sym_float_literal] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(335),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [sym_identifier] = ACTIONS(367),
  },
  [43] = {
    [sym__s_expr] = STATE(200),
    [sym__expr] = STATE(200),
    [sym__literals] = STATE(200),
    [sym__short_helper] = STATE(200),
    [sym_short_ref] = STATE(200),
    [sym_short_copy] = STATE(200),
    [sym_short_fn_ref] = STATE(200),
    [sym_short_quote] = STATE(200),
    [sym_bool_literal] = STATE(200),
    [sym_str_literal] = STATE(200),
    [sym_char_literal] = STATE(200),
    [sym_pattern_literal] = STATE(200),
    [sym_array_expression] = STATE(200),
    [sym_map_expression] = STATE(200),
    [sym_symbol] = STATE(200),
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
  [44] = {
    [sym__s_expr] = STATE(244),
    [sym__expr] = STATE(244),
    [sym__literals] = STATE(244),
    [sym__short_helper] = STATE(244),
    [sym_short_ref] = STATE(244),
    [sym_short_copy] = STATE(244),
    [sym_short_fn_ref] = STATE(244),
    [sym_short_quote] = STATE(244),
    [sym_bool_literal] = STATE(244),
    [sym_str_literal] = STATE(244),
    [sym_char_literal] = STATE(244),
    [sym_pattern_literal] = STATE(244),
    [sym_array_expression] = STATE(244),
    [sym_map_expression] = STATE(244),
    [sym_symbol] = STATE(244),
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
  [45] = {
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
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(373),
    [sym_float_literal] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [sym_identifier] = ACTIONS(373),
  },
  [46] = {
    [sym__short_helper] = STATE(20),
    [sym_type] = STATE(20),
    [sym_complex_type] = STATE(123),
    [sym_short_ref] = STATE(20),
    [sym_short_copy] = STATE(20),
    [sym_short_fn_ref] = STATE(20),
    [sym_short_quote] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_Bool] = ACTIONS(377),
    [anon_sym_Char] = ACTIONS(377),
    [anon_sym_Int] = ACTIONS(377),
    [anon_sym_Long] = ACTIONS(377),
    [anon_sym_Float] = ACTIONS(377),
    [anon_sym_Double] = ACTIONS(377),
    [anon_sym_Vector2] = ACTIONS(377),
    [anon_sym_Vector3] = ACTIONS(377),
    [anon_sym_VectorN] = ACTIONS(377),
    [anon_sym_String] = ACTIONS(377),
    [anon_sym_Pattern] = ACTIONS(377),
    [anon_sym_Array] = ACTIONS(377),
    [anon_sym_Map] = ACTIONS(377),
    [anon_sym_Maybe] = ACTIONS(377),
    [anon_sym_Result] = ACTIONS(377),
    [anon_sym_Id] = ACTIONS(377),
    [anon_sym_Ptr] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(379),
  },
  [47] = {
    [sym__short_helper] = STATE(229),
    [sym_type] = STATE(229),
    [sym_complex_type] = STATE(123),
    [sym_short_ref] = STATE(229),
    [sym_short_copy] = STATE(229),
    [sym_short_fn_ref] = STATE(229),
    [sym_short_quote] = STATE(229),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_Bool] = ACTIONS(377),
    [anon_sym_Char] = ACTIONS(377),
    [anon_sym_Int] = ACTIONS(377),
    [anon_sym_Long] = ACTIONS(377),
    [anon_sym_Float] = ACTIONS(377),
    [anon_sym_Double] = ACTIONS(377),
    [anon_sym_Vector2] = ACTIONS(377),
    [anon_sym_Vector3] = ACTIONS(377),
    [anon_sym_VectorN] = ACTIONS(377),
    [anon_sym_String] = ACTIONS(377),
    [anon_sym_Pattern] = ACTIONS(377),
    [anon_sym_Array] = ACTIONS(377),
    [anon_sym_Map] = ACTIONS(377),
    [anon_sym_Maybe] = ACTIONS(377),
    [anon_sym_Result] = ACTIONS(377),
    [anon_sym_Id] = ACTIONS(377),
    [anon_sym_Ptr] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(379),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_Bool] = ACTIONS(385),
    [anon_sym_Char] = ACTIONS(385),
    [anon_sym_Int] = ACTIONS(385),
    [anon_sym_Long] = ACTIONS(385),
    [anon_sym_Float] = ACTIONS(385),
    [anon_sym_Double] = ACTIONS(385),
    [anon_sym_Vector2] = ACTIONS(385),
    [anon_sym_Vector3] = ACTIONS(385),
    [anon_sym_VectorN] = ACTIONS(385),
    [anon_sym_String] = ACTIONS(385),
    [anon_sym_Pattern] = ACTIONS(385),
    [anon_sym_Array] = ACTIONS(385),
    [anon_sym_Map] = ACTIONS(385),
    [anon_sym_Maybe] = ACTIONS(385),
    [anon_sym_Result] = ACTIONS(385),
    [anon_sym_Id] = ACTIONS(385),
    [anon_sym_Ptr] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RBRACK2] = ACTIONS(383),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(383),
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(383),
    [sym_identifier] = ACTIONS(385),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_Bool] = ACTIONS(389),
    [anon_sym_Char] = ACTIONS(389),
    [anon_sym_Int] = ACTIONS(389),
    [anon_sym_Long] = ACTIONS(389),
    [anon_sym_Float] = ACTIONS(389),
    [anon_sym_Double] = ACTIONS(389),
    [anon_sym_Vector2] = ACTIONS(389),
    [anon_sym_Vector3] = ACTIONS(389),
    [anon_sym_VectorN] = ACTIONS(389),
    [anon_sym_String] = ACTIONS(389),
    [anon_sym_Pattern] = ACTIONS(389),
    [anon_sym_Array] = ACTIONS(389),
    [anon_sym_Map] = ACTIONS(389),
    [anon_sym_Maybe] = ACTIONS(389),
    [anon_sym_Result] = ACTIONS(389),
    [anon_sym_Id] = ACTIONS(389),
    [anon_sym_Ptr] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_RBRACK2] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [sym_identifier] = ACTIONS(389),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_Bool] = ACTIONS(393),
    [anon_sym_Char] = ACTIONS(393),
    [anon_sym_Int] = ACTIONS(393),
    [anon_sym_Long] = ACTIONS(393),
    [anon_sym_Float] = ACTIONS(393),
    [anon_sym_Double] = ACTIONS(393),
    [anon_sym_Vector2] = ACTIONS(393),
    [anon_sym_Vector3] = ACTIONS(393),
    [anon_sym_VectorN] = ACTIONS(393),
    [anon_sym_String] = ACTIONS(393),
    [anon_sym_Pattern] = ACTIONS(393),
    [anon_sym_Array] = ACTIONS(393),
    [anon_sym_Map] = ACTIONS(393),
    [anon_sym_Maybe] = ACTIONS(393),
    [anon_sym_Result] = ACTIONS(393),
    [anon_sym_Id] = ACTIONS(393),
    [anon_sym_Ptr] = ACTIONS(393),
    [anon_sym_RBRACK2] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [sym_identifier] = ACTIONS(393),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_Bool] = ACTIONS(397),
    [anon_sym_Char] = ACTIONS(397),
    [anon_sym_Int] = ACTIONS(397),
    [anon_sym_Long] = ACTIONS(397),
    [anon_sym_Float] = ACTIONS(397),
    [anon_sym_Double] = ACTIONS(397),
    [anon_sym_Vector2] = ACTIONS(397),
    [anon_sym_Vector3] = ACTIONS(397),
    [anon_sym_VectorN] = ACTIONS(397),
    [anon_sym_String] = ACTIONS(397),
    [anon_sym_Pattern] = ACTIONS(397),
    [anon_sym_Array] = ACTIONS(397),
    [anon_sym_Map] = ACTIONS(397),
    [anon_sym_Maybe] = ACTIONS(397),
    [anon_sym_Result] = ACTIONS(397),
    [anon_sym_Id] = ACTIONS(397),
    [anon_sym_Ptr] = ACTIONS(397),
    [anon_sym_RBRACK2] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [sym_identifier] = ACTIONS(397),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_Bool] = ACTIONS(401),
    [anon_sym_Char] = ACTIONS(401),
    [anon_sym_Int] = ACTIONS(401),
    [anon_sym_Long] = ACTIONS(401),
    [anon_sym_Float] = ACTIONS(401),
    [anon_sym_Double] = ACTIONS(401),
    [anon_sym_Vector2] = ACTIONS(401),
    [anon_sym_Vector3] = ACTIONS(401),
    [anon_sym_VectorN] = ACTIONS(401),
    [anon_sym_String] = ACTIONS(401),
    [anon_sym_Pattern] = ACTIONS(401),
    [anon_sym_Array] = ACTIONS(401),
    [anon_sym_Map] = ACTIONS(401),
    [anon_sym_Maybe] = ACTIONS(401),
    [anon_sym_Result] = ACTIONS(401),
    [anon_sym_Id] = ACTIONS(401),
    [anon_sym_Ptr] = ACTIONS(401),
    [anon_sym_RBRACK2] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(399),
    [sym_identifier] = ACTIONS(401),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_Bool] = ACTIONS(405),
    [anon_sym_Char] = ACTIONS(405),
    [anon_sym_Int] = ACTIONS(405),
    [anon_sym_Long] = ACTIONS(405),
    [anon_sym_Float] = ACTIONS(405),
    [anon_sym_Double] = ACTIONS(405),
    [anon_sym_Vector2] = ACTIONS(405),
    [anon_sym_Vector3] = ACTIONS(405),
    [anon_sym_VectorN] = ACTIONS(405),
    [anon_sym_String] = ACTIONS(405),
    [anon_sym_Pattern] = ACTIONS(405),
    [anon_sym_Array] = ACTIONS(405),
    [anon_sym_Map] = ACTIONS(405),
    [anon_sym_Maybe] = ACTIONS(405),
    [anon_sym_Result] = ACTIONS(405),
    [anon_sym_Id] = ACTIONS(405),
    [anon_sym_Ptr] = ACTIONS(405),
    [anon_sym_RBRACK2] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
    [anon_sym_AT] = ACTIONS(403),
    [anon_sym_TILDE] = ACTIONS(403),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [sym_identifier] = ACTIONS(405),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_Bool] = ACTIONS(409),
    [anon_sym_Char] = ACTIONS(409),
    [anon_sym_Int] = ACTIONS(409),
    [anon_sym_Long] = ACTIONS(409),
    [anon_sym_Float] = ACTIONS(409),
    [anon_sym_Double] = ACTIONS(409),
    [anon_sym_Vector2] = ACTIONS(409),
    [anon_sym_Vector3] = ACTIONS(409),
    [anon_sym_VectorN] = ACTIONS(409),
    [anon_sym_String] = ACTIONS(409),
    [anon_sym_Pattern] = ACTIONS(409),
    [anon_sym_Array] = ACTIONS(409),
    [anon_sym_Map] = ACTIONS(409),
    [anon_sym_Maybe] = ACTIONS(409),
    [anon_sym_Result] = ACTIONS(409),
    [anon_sym_Id] = ACTIONS(409),
    [anon_sym_Ptr] = ACTIONS(409),
    [anon_sym_RBRACK2] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(407),
    [sym_identifier] = ACTIONS(409),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_Bool] = ACTIONS(413),
    [anon_sym_Char] = ACTIONS(413),
    [anon_sym_Int] = ACTIONS(413),
    [anon_sym_Long] = ACTIONS(413),
    [anon_sym_Float] = ACTIONS(413),
    [anon_sym_Double] = ACTIONS(413),
    [anon_sym_Vector2] = ACTIONS(413),
    [anon_sym_Vector3] = ACTIONS(413),
    [anon_sym_VectorN] = ACTIONS(413),
    [anon_sym_String] = ACTIONS(413),
    [anon_sym_Pattern] = ACTIONS(413),
    [anon_sym_Array] = ACTIONS(413),
    [anon_sym_Map] = ACTIONS(413),
    [anon_sym_Maybe] = ACTIONS(413),
    [anon_sym_Result] = ACTIONS(413),
    [anon_sym_Id] = ACTIONS(413),
    [anon_sym_Ptr] = ACTIONS(413),
    [anon_sym_RBRACK2] = ACTIONS(411),
    [anon_sym_AMP] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_TILDE] = ACTIONS(411),
    [anon_sym_SQUOTE] = ACTIONS(411),
    [sym_identifier] = ACTIONS(413),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_Bool] = ACTIONS(417),
    [anon_sym_Char] = ACTIONS(417),
    [anon_sym_Int] = ACTIONS(417),
    [anon_sym_Long] = ACTIONS(417),
    [anon_sym_Float] = ACTIONS(417),
    [anon_sym_Double] = ACTIONS(417),
    [anon_sym_Vector2] = ACTIONS(417),
    [anon_sym_Vector3] = ACTIONS(417),
    [anon_sym_VectorN] = ACTIONS(417),
    [anon_sym_String] = ACTIONS(417),
    [anon_sym_Pattern] = ACTIONS(417),
    [anon_sym_Array] = ACTIONS(417),
    [anon_sym_Map] = ACTIONS(417),
    [anon_sym_Maybe] = ACTIONS(417),
    [anon_sym_Result] = ACTIONS(417),
    [anon_sym_Id] = ACTIONS(417),
    [anon_sym_Ptr] = ACTIONS(417),
    [anon_sym_RBRACK2] = ACTIONS(415),
    [anon_sym_AMP] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_TILDE] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(415),
    [sym_identifier] = ACTIONS(417),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_Bool] = ACTIONS(421),
    [anon_sym_Char] = ACTIONS(421),
    [anon_sym_Int] = ACTIONS(421),
    [anon_sym_Long] = ACTIONS(421),
    [anon_sym_Float] = ACTIONS(421),
    [anon_sym_Double] = ACTIONS(421),
    [anon_sym_Vector2] = ACTIONS(421),
    [anon_sym_Vector3] = ACTIONS(421),
    [anon_sym_VectorN] = ACTIONS(421),
    [anon_sym_String] = ACTIONS(421),
    [anon_sym_Pattern] = ACTIONS(421),
    [anon_sym_Array] = ACTIONS(421),
    [anon_sym_Map] = ACTIONS(421),
    [anon_sym_Maybe] = ACTIONS(421),
    [anon_sym_Result] = ACTIONS(421),
    [anon_sym_Id] = ACTIONS(421),
    [anon_sym_Ptr] = ACTIONS(421),
    [anon_sym_RBRACK2] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [sym_identifier] = ACTIONS(421),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_Bool] = ACTIONS(425),
    [anon_sym_Char] = ACTIONS(425),
    [anon_sym_Int] = ACTIONS(425),
    [anon_sym_Long] = ACTIONS(425),
    [anon_sym_Float] = ACTIONS(425),
    [anon_sym_Double] = ACTIONS(425),
    [anon_sym_Vector2] = ACTIONS(425),
    [anon_sym_Vector3] = ACTIONS(425),
    [anon_sym_VectorN] = ACTIONS(425),
    [anon_sym_String] = ACTIONS(425),
    [anon_sym_Pattern] = ACTIONS(425),
    [anon_sym_Array] = ACTIONS(425),
    [anon_sym_Map] = ACTIONS(425),
    [anon_sym_Maybe] = ACTIONS(425),
    [anon_sym_Result] = ACTIONS(425),
    [anon_sym_Id] = ACTIONS(425),
    [anon_sym_Ptr] = ACTIONS(425),
    [anon_sym_RBRACK2] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_TILDE] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(423),
    [sym_identifier] = ACTIONS(425),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_Bool] = ACTIONS(429),
    [anon_sym_Char] = ACTIONS(429),
    [anon_sym_Int] = ACTIONS(429),
    [anon_sym_Long] = ACTIONS(429),
    [anon_sym_Float] = ACTIONS(429),
    [anon_sym_Double] = ACTIONS(429),
    [anon_sym_Vector2] = ACTIONS(429),
    [anon_sym_Vector3] = ACTIONS(429),
    [anon_sym_VectorN] = ACTIONS(429),
    [anon_sym_String] = ACTIONS(429),
    [anon_sym_Pattern] = ACTIONS(429),
    [anon_sym_Array] = ACTIONS(429),
    [anon_sym_Map] = ACTIONS(429),
    [anon_sym_Maybe] = ACTIONS(429),
    [anon_sym_Result] = ACTIONS(429),
    [anon_sym_Id] = ACTIONS(429),
    [anon_sym_Ptr] = ACTIONS(429),
    [anon_sym_RBRACK2] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [sym_identifier] = ACTIONS(429),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_Bool] = ACTIONS(433),
    [anon_sym_Char] = ACTIONS(433),
    [anon_sym_Int] = ACTIONS(433),
    [anon_sym_Long] = ACTIONS(433),
    [anon_sym_Float] = ACTIONS(433),
    [anon_sym_Double] = ACTIONS(433),
    [anon_sym_Vector2] = ACTIONS(433),
    [anon_sym_Vector3] = ACTIONS(433),
    [anon_sym_VectorN] = ACTIONS(433),
    [anon_sym_String] = ACTIONS(433),
    [anon_sym_Pattern] = ACTIONS(433),
    [anon_sym_Array] = ACTIONS(433),
    [anon_sym_Map] = ACTIONS(433),
    [anon_sym_Maybe] = ACTIONS(433),
    [anon_sym_Result] = ACTIONS(433),
    [anon_sym_Id] = ACTIONS(433),
    [anon_sym_Ptr] = ACTIONS(433),
    [anon_sym_RBRACK2] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(431),
    [anon_sym_SQUOTE] = ACTIONS(431),
    [sym_identifier] = ACTIONS(433),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_Bool] = ACTIONS(437),
    [anon_sym_Char] = ACTIONS(437),
    [anon_sym_Int] = ACTIONS(437),
    [anon_sym_Long] = ACTIONS(437),
    [anon_sym_Float] = ACTIONS(437),
    [anon_sym_Double] = ACTIONS(437),
    [anon_sym_Vector2] = ACTIONS(437),
    [anon_sym_Vector3] = ACTIONS(437),
    [anon_sym_VectorN] = ACTIONS(437),
    [anon_sym_String] = ACTIONS(437),
    [anon_sym_Pattern] = ACTIONS(437),
    [anon_sym_Array] = ACTIONS(437),
    [anon_sym_Map] = ACTIONS(437),
    [anon_sym_Maybe] = ACTIONS(437),
    [anon_sym_Result] = ACTIONS(437),
    [anon_sym_Id] = ACTIONS(437),
    [anon_sym_Ptr] = ACTIONS(437),
    [anon_sym_RBRACK2] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [sym_identifier] = ACTIONS(437),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_Bool] = ACTIONS(441),
    [anon_sym_Char] = ACTIONS(441),
    [anon_sym_Int] = ACTIONS(441),
    [anon_sym_Long] = ACTIONS(441),
    [anon_sym_Float] = ACTIONS(441),
    [anon_sym_Double] = ACTIONS(441),
    [anon_sym_Vector2] = ACTIONS(441),
    [anon_sym_Vector3] = ACTIONS(441),
    [anon_sym_VectorN] = ACTIONS(441),
    [anon_sym_String] = ACTIONS(441),
    [anon_sym_Pattern] = ACTIONS(441),
    [anon_sym_Array] = ACTIONS(441),
    [anon_sym_Map] = ACTIONS(441),
    [anon_sym_Maybe] = ACTIONS(441),
    [anon_sym_Result] = ACTIONS(441),
    [anon_sym_Id] = ACTIONS(441),
    [anon_sym_Ptr] = ACTIONS(441),
    [anon_sym_RBRACK2] = ACTIONS(439),
    [anon_sym_AMP] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_Bool] = ACTIONS(445),
    [anon_sym_Char] = ACTIONS(445),
    [anon_sym_Int] = ACTIONS(445),
    [anon_sym_Long] = ACTIONS(445),
    [anon_sym_Float] = ACTIONS(445),
    [anon_sym_Double] = ACTIONS(445),
    [anon_sym_Vector2] = ACTIONS(445),
    [anon_sym_Vector3] = ACTIONS(445),
    [anon_sym_VectorN] = ACTIONS(445),
    [anon_sym_String] = ACTIONS(445),
    [anon_sym_Pattern] = ACTIONS(445),
    [anon_sym_Array] = ACTIONS(445),
    [anon_sym_Map] = ACTIONS(445),
    [anon_sym_Maybe] = ACTIONS(445),
    [anon_sym_Result] = ACTIONS(445),
    [anon_sym_Id] = ACTIONS(445),
    [anon_sym_Ptr] = ACTIONS(445),
    [anon_sym_RBRACK2] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [sym_identifier] = ACTIONS(445),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_Bool] = ACTIONS(449),
    [anon_sym_Char] = ACTIONS(449),
    [anon_sym_Int] = ACTIONS(449),
    [anon_sym_Long] = ACTIONS(449),
    [anon_sym_Float] = ACTIONS(449),
    [anon_sym_Double] = ACTIONS(449),
    [anon_sym_Vector2] = ACTIONS(449),
    [anon_sym_Vector3] = ACTIONS(449),
    [anon_sym_VectorN] = ACTIONS(449),
    [anon_sym_String] = ACTIONS(449),
    [anon_sym_Pattern] = ACTIONS(449),
    [anon_sym_Array] = ACTIONS(449),
    [anon_sym_Map] = ACTIONS(449),
    [anon_sym_Maybe] = ACTIONS(449),
    [anon_sym_Result] = ACTIONS(449),
    [anon_sym_Id] = ACTIONS(449),
    [anon_sym_Ptr] = ACTIONS(449),
    [anon_sym_RBRACK2] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [sym_identifier] = ACTIONS(449),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_Bool] = ACTIONS(453),
    [anon_sym_Char] = ACTIONS(453),
    [anon_sym_Int] = ACTIONS(453),
    [anon_sym_Long] = ACTIONS(453),
    [anon_sym_Float] = ACTIONS(453),
    [anon_sym_Double] = ACTIONS(453),
    [anon_sym_Vector2] = ACTIONS(453),
    [anon_sym_Vector3] = ACTIONS(453),
    [anon_sym_VectorN] = ACTIONS(453),
    [anon_sym_String] = ACTIONS(453),
    [anon_sym_Pattern] = ACTIONS(453),
    [anon_sym_Array] = ACTIONS(453),
    [anon_sym_Map] = ACTIONS(453),
    [anon_sym_Maybe] = ACTIONS(453),
    [anon_sym_Result] = ACTIONS(453),
    [anon_sym_Id] = ACTIONS(453),
    [anon_sym_Ptr] = ACTIONS(453),
    [anon_sym_RBRACK2] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(451),
    [anon_sym_AT] = ACTIONS(451),
    [anon_sym_TILDE] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(451),
    [sym_identifier] = ACTIONS(453),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_Bool] = ACTIONS(457),
    [anon_sym_Char] = ACTIONS(457),
    [anon_sym_Int] = ACTIONS(457),
    [anon_sym_Long] = ACTIONS(457),
    [anon_sym_Float] = ACTIONS(457),
    [anon_sym_Double] = ACTIONS(457),
    [anon_sym_Vector2] = ACTIONS(457),
    [anon_sym_Vector3] = ACTIONS(457),
    [anon_sym_VectorN] = ACTIONS(457),
    [anon_sym_String] = ACTIONS(457),
    [anon_sym_Pattern] = ACTIONS(457),
    [anon_sym_Array] = ACTIONS(457),
    [anon_sym_Map] = ACTIONS(457),
    [anon_sym_Maybe] = ACTIONS(457),
    [anon_sym_Result] = ACTIONS(457),
    [anon_sym_Id] = ACTIONS(457),
    [anon_sym_Ptr] = ACTIONS(457),
    [anon_sym_RBRACK2] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(455),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(455),
    [sym_identifier] = ACTIONS(457),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_Bool] = ACTIONS(461),
    [anon_sym_Char] = ACTIONS(461),
    [anon_sym_Int] = ACTIONS(461),
    [anon_sym_Long] = ACTIONS(461),
    [anon_sym_Float] = ACTIONS(461),
    [anon_sym_Double] = ACTIONS(461),
    [anon_sym_Vector2] = ACTIONS(461),
    [anon_sym_Vector3] = ACTIONS(461),
    [anon_sym_VectorN] = ACTIONS(461),
    [anon_sym_String] = ACTIONS(461),
    [anon_sym_Pattern] = ACTIONS(461),
    [anon_sym_Array] = ACTIONS(461),
    [anon_sym_Map] = ACTIONS(461),
    [anon_sym_Maybe] = ACTIONS(461),
    [anon_sym_Result] = ACTIONS(461),
    [anon_sym_Id] = ACTIONS(461),
    [anon_sym_Ptr] = ACTIONS(461),
    [anon_sym_RBRACK2] = ACTIONS(459),
    [anon_sym_AMP] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(459),
    [anon_sym_SQUOTE] = ACTIONS(459),
    [sym_identifier] = ACTIONS(461),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_Bool] = ACTIONS(465),
    [anon_sym_Char] = ACTIONS(465),
    [anon_sym_Int] = ACTIONS(465),
    [anon_sym_Long] = ACTIONS(465),
    [anon_sym_Float] = ACTIONS(465),
    [anon_sym_Double] = ACTIONS(465),
    [anon_sym_Vector2] = ACTIONS(465),
    [anon_sym_Vector3] = ACTIONS(465),
    [anon_sym_VectorN] = ACTIONS(465),
    [anon_sym_String] = ACTIONS(465),
    [anon_sym_Pattern] = ACTIONS(465),
    [anon_sym_Array] = ACTIONS(465),
    [anon_sym_Map] = ACTIONS(465),
    [anon_sym_Maybe] = ACTIONS(465),
    [anon_sym_Result] = ACTIONS(465),
    [anon_sym_Id] = ACTIONS(465),
    [anon_sym_Ptr] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(463),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_TILDE] = ACTIONS(463),
    [anon_sym_SQUOTE] = ACTIONS(463),
    [sym_identifier] = ACTIONS(465),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_Bool] = ACTIONS(469),
    [anon_sym_Char] = ACTIONS(469),
    [anon_sym_Int] = ACTIONS(469),
    [anon_sym_Long] = ACTIONS(469),
    [anon_sym_Float] = ACTIONS(469),
    [anon_sym_Double] = ACTIONS(469),
    [anon_sym_Vector2] = ACTIONS(469),
    [anon_sym_Vector3] = ACTIONS(469),
    [anon_sym_VectorN] = ACTIONS(469),
    [anon_sym_String] = ACTIONS(469),
    [anon_sym_Pattern] = ACTIONS(469),
    [anon_sym_Array] = ACTIONS(469),
    [anon_sym_Map] = ACTIONS(469),
    [anon_sym_Maybe] = ACTIONS(469),
    [anon_sym_Result] = ACTIONS(469),
    [anon_sym_Id] = ACTIONS(469),
    [anon_sym_Ptr] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(467),
    [anon_sym_TILDE] = ACTIONS(467),
    [anon_sym_SQUOTE] = ACTIONS(467),
    [sym_identifier] = ACTIONS(469),
  },
  [70] = {
    [sym_interface_fn] = STATE(217),
    [aux_sym_complex_type_repeat1] = STATE(80),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [anon_sym_Fn] = ACTIONS(475),
    [anon_sym_] = ACTIONS(475),
    [sym_identifier] = ACTIONS(477),
  },
  [71] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(234),
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
    [anon_sym_RBRACK2] = ACTIONS(481),
    [sym_identifier] = ACTIONS(483),
  },
  [72] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(234),
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
    [anon_sym_RBRACK2] = ACTIONS(485),
    [sym_identifier] = ACTIONS(483),
  },
  [73] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(234),
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
    [anon_sym_RBRACK2] = ACTIONS(487),
    [sym_identifier] = ACTIONS(483),
  },
  [74] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_Bool] = ACTIONS(492),
    [anon_sym_Char] = ACTIONS(492),
    [anon_sym_Int] = ACTIONS(492),
    [anon_sym_Long] = ACTIONS(492),
    [anon_sym_Float] = ACTIONS(492),
    [anon_sym_Double] = ACTIONS(492),
    [anon_sym_Vector2] = ACTIONS(492),
    [anon_sym_Vector3] = ACTIONS(492),
    [anon_sym_VectorN] = ACTIONS(492),
    [anon_sym_String] = ACTIONS(492),
    [anon_sym_Pattern] = ACTIONS(492),
    [anon_sym_Array] = ACTIONS(492),
    [anon_sym_Map] = ACTIONS(492),
    [anon_sym_Maybe] = ACTIONS(492),
    [anon_sym_Result] = ACTIONS(492),
    [anon_sym_Id] = ACTIONS(492),
    [anon_sym_Ptr] = ACTIONS(492),
    [anon_sym_RBRACK2] = ACTIONS(495),
    [sym_identifier] = ACTIONS(497),
  },
  [75] = {
    [sym_complex_type] = STATE(78),
    [aux_sym_fields_repeat1] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(234),
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
    [anon_sym_RBRACK2] = ACTIONS(500),
    [sym_identifier] = ACTIONS(483),
  },
  [76] = {
    [sym_type] = STATE(44),
    [sym_complex_type] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_Bool] = ACTIONS(377),
    [anon_sym_Char] = ACTIONS(377),
    [anon_sym_Int] = ACTIONS(377),
    [anon_sym_Long] = ACTIONS(377),
    [anon_sym_Float] = ACTIONS(377),
    [anon_sym_Double] = ACTIONS(377),
    [anon_sym_Vector2] = ACTIONS(377),
    [anon_sym_Vector3] = ACTIONS(377),
    [anon_sym_VectorN] = ACTIONS(377),
    [anon_sym_String] = ACTIONS(377),
    [anon_sym_Pattern] = ACTIONS(377),
    [anon_sym_Array] = ACTIONS(377),
    [anon_sym_Map] = ACTIONS(377),
    [anon_sym_Maybe] = ACTIONS(377),
    [anon_sym_Result] = ACTIONS(377),
    [anon_sym_Id] = ACTIONS(377),
    [anon_sym_Ptr] = ACTIONS(377),
    [sym_identifier] = ACTIONS(379),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_Bool] = ACTIONS(504),
    [anon_sym_Char] = ACTIONS(504),
    [anon_sym_Int] = ACTIONS(504),
    [anon_sym_Long] = ACTIONS(504),
    [anon_sym_Float] = ACTIONS(504),
    [anon_sym_Double] = ACTIONS(504),
    [anon_sym_Vector2] = ACTIONS(504),
    [anon_sym_Vector3] = ACTIONS(504),
    [anon_sym_VectorN] = ACTIONS(504),
    [anon_sym_String] = ACTIONS(504),
    [anon_sym_Pattern] = ACTIONS(504),
    [anon_sym_Array] = ACTIONS(504),
    [anon_sym_Map] = ACTIONS(504),
    [anon_sym_Maybe] = ACTIONS(504),
    [anon_sym_Result] = ACTIONS(504),
    [anon_sym_Id] = ACTIONS(504),
    [anon_sym_Ptr] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RBRACK2] = ACTIONS(502),
    [sym_identifier] = ACTIONS(504),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(508),
    [anon_sym_Bool] = ACTIONS(510),
    [anon_sym_Char] = ACTIONS(510),
    [anon_sym_Int] = ACTIONS(510),
    [anon_sym_Long] = ACTIONS(510),
    [anon_sym_Float] = ACTIONS(510),
    [anon_sym_Double] = ACTIONS(510),
    [anon_sym_Vector2] = ACTIONS(510),
    [anon_sym_Vector3] = ACTIONS(510),
    [anon_sym_VectorN] = ACTIONS(510),
    [anon_sym_String] = ACTIONS(510),
    [anon_sym_Pattern] = ACTIONS(510),
    [anon_sym_Array] = ACTIONS(510),
    [anon_sym_Map] = ACTIONS(510),
    [anon_sym_Maybe] = ACTIONS(510),
    [anon_sym_Result] = ACTIONS(510),
    [anon_sym_Id] = ACTIONS(510),
    [anon_sym_Ptr] = ACTIONS(510),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RBRACK2] = ACTIONS(508),
    [sym_identifier] = ACTIONS(510),
  },
  [79] = {
    [aux_sym_complex_type_repeat1] = STATE(80),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [sym_identifier] = ACTIONS(477),
  },
  [80] = {
    [aux_sym_complex_type_repeat1] = STATE(84),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [sym_identifier] = ACTIONS(516),
  },
  [81] = {
    [aux_sym_complex_type_repeat1] = STATE(84),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [sym_identifier] = ACTIONS(516),
  },
  [82] = {
    [aux_sym_complex_type_repeat1] = STATE(81),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [sym_identifier] = ACTIONS(522),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_Bool] = ACTIONS(524),
    [anon_sym_Char] = ACTIONS(524),
    [anon_sym_Int] = ACTIONS(524),
    [anon_sym_Long] = ACTIONS(524),
    [anon_sym_Float] = ACTIONS(524),
    [anon_sym_Double] = ACTIONS(524),
    [anon_sym_Vector2] = ACTIONS(524),
    [anon_sym_Vector3] = ACTIONS(524),
    [anon_sym_VectorN] = ACTIONS(524),
    [anon_sym_String] = ACTIONS(524),
    [anon_sym_Pattern] = ACTIONS(524),
    [anon_sym_Array] = ACTIONS(524),
    [anon_sym_Map] = ACTIONS(524),
    [anon_sym_Maybe] = ACTIONS(524),
    [anon_sym_Result] = ACTIONS(524),
    [anon_sym_Id] = ACTIONS(524),
    [anon_sym_Ptr] = ACTIONS(524),
    [anon_sym_RBRACK2] = ACTIONS(495),
    [sym_identifier] = ACTIONS(524),
  },
  [84] = {
    [aux_sym_complex_type_repeat1] = STATE(84),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_Bool] = ACTIONS(528),
    [anon_sym_Char] = ACTIONS(528),
    [anon_sym_Int] = ACTIONS(528),
    [anon_sym_Long] = ACTIONS(528),
    [anon_sym_Float] = ACTIONS(528),
    [anon_sym_Double] = ACTIONS(528),
    [anon_sym_Vector2] = ACTIONS(528),
    [anon_sym_Vector3] = ACTIONS(528),
    [anon_sym_VectorN] = ACTIONS(528),
    [anon_sym_String] = ACTIONS(528),
    [anon_sym_Pattern] = ACTIONS(528),
    [anon_sym_Array] = ACTIONS(528),
    [anon_sym_Map] = ACTIONS(528),
    [anon_sym_Maybe] = ACTIONS(528),
    [anon_sym_Result] = ACTIONS(528),
    [anon_sym_Id] = ACTIONS(528),
    [anon_sym_Ptr] = ACTIONS(528),
    [sym_identifier] = ACTIONS(531),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(534),
    [anon_sym_Bool] = ACTIONS(536),
    [anon_sym_Char] = ACTIONS(536),
    [anon_sym_Int] = ACTIONS(536),
    [anon_sym_Long] = ACTIONS(536),
    [anon_sym_Float] = ACTIONS(536),
    [anon_sym_Double] = ACTIONS(536),
    [anon_sym_Vector2] = ACTIONS(536),
    [anon_sym_Vector3] = ACTIONS(536),
    [anon_sym_VectorN] = ACTIONS(536),
    [anon_sym_String] = ACTIONS(536),
    [anon_sym_Pattern] = ACTIONS(536),
    [anon_sym_Array] = ACTIONS(536),
    [anon_sym_Map] = ACTIONS(536),
    [anon_sym_Maybe] = ACTIONS(536),
    [anon_sym_Result] = ACTIONS(536),
    [anon_sym_Id] = ACTIONS(536),
    [anon_sym_Ptr] = ACTIONS(536),
    [anon_sym_RBRACK2] = ACTIONS(534),
    [sym_identifier] = ACTIONS(536),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK2] = ACTIONS(411),
    [anon_sym_AMP] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_TILDE] = ACTIONS(411),
    [anon_sym_SQUOTE] = ACTIONS(411),
    [sym_integer_literal] = ACTIONS(413),
    [sym_float_literal] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(413),
    [anon_sym_false] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_BSLASH] = ACTIONS(411),
    [anon_sym_POUND_DQUOTE] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [sym_identifier] = ACTIONS(413),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
    [anon_sym_AT] = ACTIONS(403),
    [anon_sym_TILDE] = ACTIONS(403),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [sym_integer_literal] = ACTIONS(405),
    [sym_float_literal] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(405),
    [anon_sym_false] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_POUND_DQUOTE] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(403),
    [sym_identifier] = ACTIONS(405),
  },
  [88] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(538),
    [sym_integer_literal] = ACTIONS(540),
    [sym_float_literal] = ACTIONS(540),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(540),
  },
  [89] = {
    [sym__literals] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(544),
    [sym_identifier] = ACTIONS(542),
  },
  [90] = {
    [sym__literals] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(546),
    [sym_identifier] = ACTIONS(542),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK2] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [sym_integer_literal] = ACTIONS(397),
    [sym_float_literal] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_false] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_BSLASH] = ACTIONS(395),
    [anon_sym_POUND_DQUOTE] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [sym_identifier] = ACTIONS(397),
  },
  [92] = {
    [sym__literals] = STATE(110),
    [sym_bool_literal] = STATE(110),
    [sym_str_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_pattern_literal] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_map_expression] = STATE(110),
    [aux_sym_array_expression_repeat1] = STATE(110),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(548),
    [sym_integer_literal] = ACTIONS(550),
    [sym_float_literal] = ACTIONS(550),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(550),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK2] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [sym_integer_literal] = ACTIONS(393),
    [sym_float_literal] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_false] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [anon_sym_BSLASH] = ACTIONS(391),
    [anon_sym_POUND_DQUOTE] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(391),
    [sym_identifier] = ACTIONS(393),
  },
  [94] = {
    [sym__literals] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [aux_sym_map_expression_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(552),
    [sym_identifier] = ACTIONS(542),
  },
  [95] = {
    [sym__literals] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [aux_sym_array_expression_repeat1] = STATE(100),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(554),
    [sym_integer_literal] = ACTIONS(556),
    [sym_float_literal] = ACTIONS(556),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(556),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK2] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(407),
    [sym_integer_literal] = ACTIONS(409),
    [sym_float_literal] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(409),
    [anon_sym_false] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_BSLASH] = ACTIONS(407),
    [anon_sym_POUND_DQUOTE] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [sym_identifier] = ACTIONS(409),
  },
  [97] = {
    [sym__literals] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(558),
    [sym_integer_literal] = ACTIONS(561),
    [sym_float_literal] = ACTIONS(561),
    [anon_sym_true] = ACTIONS(564),
    [anon_sym_false] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [anon_sym_BSLASH] = ACTIONS(570),
    [anon_sym_POUND_DQUOTE] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(576),
    [anon_sym_RBRACE] = ACTIONS(579),
    [sym_identifier] = ACTIONS(561),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(455),
    [anon_sym_RBRACK2] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(455),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(455),
    [sym_integer_literal] = ACTIONS(457),
    [sym_float_literal] = ACTIONS(457),
    [anon_sym_true] = ACTIONS(457),
    [anon_sym_false] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [anon_sym_BSLASH] = ACTIONS(455),
    [anon_sym_POUND_DQUOTE] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [sym_identifier] = ACTIONS(457),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_RBRACK2] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(399),
    [sym_integer_literal] = ACTIONS(401),
    [sym_float_literal] = ACTIONS(401),
    [anon_sym_true] = ACTIONS(401),
    [anon_sym_false] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_BSLASH] = ACTIONS(399),
    [anon_sym_POUND_DQUOTE] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(399),
    [sym_identifier] = ACTIONS(401),
  },
  [100] = {
    [sym__literals] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [aux_sym_array_expression_repeat1] = STATE(100),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK2] = ACTIONS(584),
    [sym_integer_literal] = ACTIONS(586),
    [sym_float_literal] = ACTIONS(586),
    [anon_sym_true] = ACTIONS(589),
    [anon_sym_false] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [anon_sym_BSLASH] = ACTIONS(595),
    [anon_sym_POUND_DQUOTE] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(601),
    [sym_identifier] = ACTIONS(586),
  },
  [101] = {
    [sym__literals] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(604),
    [sym_identifier] = ACTIONS(542),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_RBRACK2] = ACTIONS(415),
    [anon_sym_AMP] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_TILDE] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(415),
    [sym_integer_literal] = ACTIONS(417),
    [sym_float_literal] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(417),
    [anon_sym_false] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [anon_sym_BSLASH] = ACTIONS(415),
    [anon_sym_POUND_DQUOTE] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(415),
    [anon_sym_COLON] = ACTIONS(415),
    [sym_identifier] = ACTIONS(417),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK2] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [sym_integer_literal] = ACTIONS(429),
    [sym_float_literal] = ACTIONS(429),
    [anon_sym_true] = ACTIONS(429),
    [anon_sym_false] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_BSLASH] = ACTIONS(427),
    [anon_sym_POUND_DQUOTE] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(427),
    [sym_identifier] = ACTIONS(429),
  },
  [104] = {
    [sym__literals] = STATE(95),
    [sym_bool_literal] = STATE(95),
    [sym_str_literal] = STATE(95),
    [sym_char_literal] = STATE(95),
    [sym_pattern_literal] = STATE(95),
    [sym_array_expression] = STATE(95),
    [sym_map_expression] = STATE(95),
    [aux_sym_array_expression_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(606),
    [sym_integer_literal] = ACTIONS(608),
    [sym_float_literal] = ACTIONS(608),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(608),
  },
  [105] = {
    [sym__literals] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [aux_sym_map_expression_repeat1] = STATE(107),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(610),
    [sym_identifier] = ACTIONS(542),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(612),
    [anon_sym_Bool] = ACTIONS(614),
    [anon_sym_Char] = ACTIONS(614),
    [anon_sym_Int] = ACTIONS(614),
    [anon_sym_Long] = ACTIONS(614),
    [anon_sym_Float] = ACTIONS(614),
    [anon_sym_Double] = ACTIONS(614),
    [anon_sym_Vector2] = ACTIONS(614),
    [anon_sym_Vector3] = ACTIONS(614),
    [anon_sym_VectorN] = ACTIONS(614),
    [anon_sym_String] = ACTIONS(614),
    [anon_sym_Pattern] = ACTIONS(614),
    [anon_sym_Array] = ACTIONS(614),
    [anon_sym_Map] = ACTIONS(614),
    [anon_sym_Maybe] = ACTIONS(614),
    [anon_sym_Result] = ACTIONS(614),
    [anon_sym_Id] = ACTIONS(614),
    [anon_sym_Ptr] = ACTIONS(614),
    [sym_identifier] = ACTIONS(614),
  },
  [107] = {
    [sym__literals] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(542),
    [sym_float_literal] = ACTIONS(542),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(616),
    [sym_identifier] = ACTIONS(542),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK2] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [sym_integer_literal] = ACTIONS(421),
    [sym_float_literal] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(421),
    [anon_sym_false] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_BSLASH] = ACTIONS(419),
    [anon_sym_POUND_DQUOTE] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [sym_identifier] = ACTIONS(421),
  },
  [109] = {
    [sym__literals] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [aux_sym_array_expression_repeat1] = STATE(100),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(618),
    [sym_integer_literal] = ACTIONS(556),
    [sym_float_literal] = ACTIONS(556),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(556),
  },
  [110] = {
    [sym__literals] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [aux_sym_array_expression_repeat1] = STATE(100),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK2] = ACTIONS(620),
    [sym_integer_literal] = ACTIONS(556),
    [sym_float_literal] = ACTIONS(556),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(556),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_RBRACK2] = ACTIONS(459),
    [anon_sym_AMP] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(459),
    [anon_sym_SQUOTE] = ACTIONS(459),
    [sym_integer_literal] = ACTIONS(461),
    [sym_float_literal] = ACTIONS(461),
    [anon_sym_true] = ACTIONS(461),
    [anon_sym_false] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [anon_sym_BSLASH] = ACTIONS(459),
    [anon_sym_POUND_DQUOTE] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(459),
    [sym_identifier] = ACTIONS(461),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_AMP] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_integer_literal] = ACTIONS(441),
    [sym_float_literal] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(441),
    [anon_sym_false] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [anon_sym_BSLASH] = ACTIONS(439),
    [anon_sym_POUND_DQUOTE] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(439),
    [anon_sym_COLON] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
  },
  [113] = {
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(451),
    [anon_sym_AT] = ACTIONS(451),
    [anon_sym_TILDE] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(451),
    [sym_integer_literal] = ACTIONS(453),
    [sym_float_literal] = ACTIONS(453),
    [anon_sym_true] = ACTIONS(453),
    [anon_sym_false] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [anon_sym_BSLASH] = ACTIONS(451),
    [anon_sym_POUND_DQUOTE] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(451),
    [sym_identifier] = ACTIONS(453),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(622),
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_AMP] = ACTIONS(622),
    [anon_sym_AT] = ACTIONS(622),
    [anon_sym_TILDE] = ACTIONS(622),
    [anon_sym_SQUOTE] = ACTIONS(622),
    [sym_integer_literal] = ACTIONS(624),
    [sym_float_literal] = ACTIONS(624),
    [anon_sym_true] = ACTIONS(624),
    [anon_sym_false] = ACTIONS(624),
    [anon_sym_DQUOTE] = ACTIONS(622),
    [anon_sym_BSLASH] = ACTIONS(622),
    [anon_sym_POUND_DQUOTE] = ACTIONS(622),
    [anon_sym_LBRACE] = ACTIONS(622),
    [anon_sym_COLON] = ACTIONS(622),
    [sym_identifier] = ACTIONS(624),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [sym_integer_literal] = ACTIONS(389),
    [sym_float_literal] = ACTIONS(389),
    [anon_sym_true] = ACTIONS(389),
    [anon_sym_false] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_POUND_DQUOTE] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [sym_identifier] = ACTIONS(389),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(431),
    [anon_sym_SQUOTE] = ACTIONS(431),
    [sym_integer_literal] = ACTIONS(433),
    [sym_float_literal] = ACTIONS(433),
    [anon_sym_true] = ACTIONS(433),
    [anon_sym_false] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_BSLASH] = ACTIONS(431),
    [anon_sym_POUND_DQUOTE] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_COLON] = ACTIONS(431),
    [sym_identifier] = ACTIONS(433),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [sym_integer_literal] = ACTIONS(449),
    [sym_float_literal] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_POUND_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
    [anon_sym_COLON] = ACTIONS(447),
    [sym_identifier] = ACTIONS(449),
  },
  [118] = {
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(626),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_AMP] = ACTIONS(626),
    [anon_sym_AT] = ACTIONS(626),
    [anon_sym_TILDE] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [sym_integer_literal] = ACTIONS(628),
    [sym_float_literal] = ACTIONS(628),
    [anon_sym_true] = ACTIONS(628),
    [anon_sym_false] = ACTIONS(628),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [anon_sym_BSLASH] = ACTIONS(626),
    [anon_sym_POUND_DQUOTE] = ACTIONS(626),
    [anon_sym_LBRACE] = ACTIONS(626),
    [anon_sym_COLON] = ACTIONS(626),
    [sym_identifier] = ACTIONS(628),
  },
  [119] = {
    [sym__literals] = STATE(131),
    [sym_bool_literal] = STATE(131),
    [sym_str_literal] = STATE(131),
    [sym_char_literal] = STATE(131),
    [sym_pattern_literal] = STATE(131),
    [sym_array_expression] = STATE(131),
    [sym_map_expression] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(630),
    [sym_float_literal] = ACTIONS(630),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_identifier] = ACTIONS(630),
  },
  [120] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_TILDE] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(423),
    [sym_integer_literal] = ACTIONS(425),
    [sym_float_literal] = ACTIONS(425),
    [anon_sym_true] = ACTIONS(425),
    [anon_sym_false] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_BSLASH] = ACTIONS(423),
    [anon_sym_POUND_DQUOTE] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(423),
    [sym_identifier] = ACTIONS(425),
  },
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [sym_integer_literal] = ACTIONS(437),
    [sym_float_literal] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_false] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [sym_identifier] = ACTIONS(437),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_AMP] = ACTIONS(632),
    [anon_sym_AT] = ACTIONS(632),
    [anon_sym_TILDE] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [sym_integer_literal] = ACTIONS(634),
    [sym_float_literal] = ACTIONS(634),
    [anon_sym_true] = ACTIONS(634),
    [anon_sym_false] = ACTIONS(634),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [anon_sym_BSLASH] = ACTIONS(632),
    [anon_sym_POUND_DQUOTE] = ACTIONS(632),
    [anon_sym_LBRACE] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(632),
    [sym_identifier] = ACTIONS(634),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [sym_integer_literal] = ACTIONS(445),
    [sym_float_literal] = ACTIONS(445),
    [anon_sym_true] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_BSLASH] = ACTIONS(443),
    [anon_sym_POUND_DQUOTE] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(443),
    [sym_identifier] = ACTIONS(445),
  },
  [124] = {
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(383),
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(383),
    [sym_integer_literal] = ACTIONS(385),
    [sym_float_literal] = ACTIONS(385),
    [anon_sym_true] = ACTIONS(385),
    [anon_sym_false] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_BSLASH] = ACTIONS(383),
    [anon_sym_POUND_DQUOTE] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
    [sym_identifier] = ACTIONS(385),
  },
  [125] = {
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_AMP] = ACTIONS(636),
    [anon_sym_AT] = ACTIONS(636),
    [anon_sym_TILDE] = ACTIONS(636),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [sym_integer_literal] = ACTIONS(638),
    [sym_float_literal] = ACTIONS(638),
    [anon_sym_true] = ACTIONS(638),
    [anon_sym_false] = ACTIONS(638),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [anon_sym_BSLASH] = ACTIONS(636),
    [anon_sym_POUND_DQUOTE] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(636),
    [anon_sym_COLON] = ACTIONS(636),
    [sym_identifier] = ACTIONS(638),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_AMP] = ACTIONS(640),
    [anon_sym_AT] = ACTIONS(640),
    [anon_sym_TILDE] = ACTIONS(640),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [sym_integer_literal] = ACTIONS(642),
    [sym_float_literal] = ACTIONS(642),
    [anon_sym_true] = ACTIONS(642),
    [anon_sym_false] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [anon_sym_BSLASH] = ACTIONS(640),
    [anon_sym_POUND_DQUOTE] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_COLON] = ACTIONS(640),
    [sym_identifier] = ACTIONS(642),
  },
  [127] = {
    [anon_sym_LPAREN] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_AMP] = ACTIONS(644),
    [anon_sym_AT] = ACTIONS(644),
    [anon_sym_TILDE] = ACTIONS(644),
    [anon_sym_SQUOTE] = ACTIONS(644),
    [sym_integer_literal] = ACTIONS(646),
    [sym_float_literal] = ACTIONS(646),
    [anon_sym_true] = ACTIONS(646),
    [anon_sym_false] = ACTIONS(646),
    [anon_sym_DQUOTE] = ACTIONS(644),
    [anon_sym_BSLASH] = ACTIONS(644),
    [anon_sym_POUND_DQUOTE] = ACTIONS(644),
    [anon_sym_LBRACE] = ACTIONS(644),
    [anon_sym_COLON] = ACTIONS(644),
    [sym_identifier] = ACTIONS(646),
  },
  [128] = {
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_RPAREN] = ACTIONS(648),
    [anon_sym_LBRACK] = ACTIONS(648),
    [anon_sym_AMP] = ACTIONS(648),
    [anon_sym_AT] = ACTIONS(648),
    [anon_sym_TILDE] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(648),
    [sym_integer_literal] = ACTIONS(650),
    [sym_float_literal] = ACTIONS(650),
    [anon_sym_true] = ACTIONS(650),
    [anon_sym_false] = ACTIONS(650),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [anon_sym_BSLASH] = ACTIONS(648),
    [anon_sym_POUND_DQUOTE] = ACTIONS(648),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_COLON] = ACTIONS(648),
    [sym_identifier] = ACTIONS(650),
  },
  [129] = {
    [anon_sym_LPAREN] = ACTIONS(652),
    [anon_sym_RPAREN] = ACTIONS(652),
    [anon_sym_LBRACK] = ACTIONS(652),
    [anon_sym_AMP] = ACTIONS(652),
    [anon_sym_AT] = ACTIONS(652),
    [anon_sym_TILDE] = ACTIONS(652),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [sym_integer_literal] = ACTIONS(654),
    [sym_float_literal] = ACTIONS(654),
    [anon_sym_true] = ACTIONS(654),
    [anon_sym_false] = ACTIONS(654),
    [anon_sym_DQUOTE] = ACTIONS(652),
    [anon_sym_BSLASH] = ACTIONS(652),
    [anon_sym_POUND_DQUOTE] = ACTIONS(652),
    [anon_sym_LBRACE] = ACTIONS(652),
    [anon_sym_COLON] = ACTIONS(652),
    [sym_identifier] = ACTIONS(654),
  },
  [130] = {
    [anon_sym_LPAREN] = ACTIONS(656),
    [anon_sym_RPAREN] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(656),
    [anon_sym_AMP] = ACTIONS(656),
    [anon_sym_AT] = ACTIONS(656),
    [anon_sym_TILDE] = ACTIONS(656),
    [anon_sym_SQUOTE] = ACTIONS(656),
    [sym_integer_literal] = ACTIONS(658),
    [sym_float_literal] = ACTIONS(658),
    [anon_sym_true] = ACTIONS(658),
    [anon_sym_false] = ACTIONS(658),
    [anon_sym_DQUOTE] = ACTIONS(656),
    [anon_sym_BSLASH] = ACTIONS(656),
    [anon_sym_POUND_DQUOTE] = ACTIONS(656),
    [anon_sym_LBRACE] = ACTIONS(656),
    [anon_sym_COLON] = ACTIONS(656),
    [sym_identifier] = ACTIONS(658),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(660),
    [sym_integer_literal] = ACTIONS(662),
    [sym_float_literal] = ACTIONS(662),
    [anon_sym_true] = ACTIONS(662),
    [anon_sym_false] = ACTIONS(662),
    [anon_sym_DQUOTE] = ACTIONS(660),
    [anon_sym_BSLASH] = ACTIONS(660),
    [anon_sym_POUND_DQUOTE] = ACTIONS(660),
    [anon_sym_LBRACE] = ACTIONS(660),
    [anon_sym_RBRACE] = ACTIONS(660),
    [sym_identifier] = ACTIONS(662),
  },
  [132] = {
    [sym_line_comment] = STATE(132),
    [sym__s_expr] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(664),
    [anon_sym_SEMI] = ACTIONS(666),
    [anon_sym_LPAREN] = ACTIONS(669),
  },
  [133] = {
    [sym_line_comment] = STATE(132),
    [sym__s_expr] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [134] = {
    [sym_symbol] = STATE(136),
    [aux_sym_parameters_repeat1] = STATE(136),
    [anon_sym_RBRACK2] = ACTIONS(674),
    [anon_sym_COLON] = ACTIONS(676),
    [sym_identifier] = ACTIONS(678),
  },
  [135] = {
    [sym_symbol] = STATE(134),
    [aux_sym_parameters_repeat1] = STATE(134),
    [anon_sym_RBRACK2] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(676),
    [sym_identifier] = ACTIONS(682),
  },
  [136] = {
    [sym_symbol] = STATE(136),
    [aux_sym_parameters_repeat1] = STATE(136),
    [anon_sym_RBRACK2] = ACTIONS(684),
    [anon_sym_COLON] = ACTIONS(686),
    [sym_identifier] = ACTIONS(689),
  },
  [137] = {
    [sym__deftype1] = STATE(215),
    [sym__deftype2] = STATE(215),
    [sym__name_deftypes] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(692),
    [sym_identifier] = ACTIONS(694),
  },
  [138] = {
    [sym_fields] = STATE(241),
    [aux_sym__deftype2_repeat1] = STATE(159),
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(700),
  },
  [139] = {
    [aux_sym_str_literal_repeat1] = STATE(147),
    [aux_sym_str_literal_token1] = ACTIONS(702),
    [anon_sym_DQUOTE2] = ACTIONS(704),
    [sym_escape_sequence] = ACTIONS(706),
  },
  [140] = {
    [aux_sym_str_literal_repeat1] = STATE(149),
    [aux_sym_str_literal_token1] = ACTIONS(708),
    [anon_sym_DQUOTE2] = ACTIONS(710),
    [sym_escape_sequence] = ACTIONS(712),
  },
  [141] = {
    [aux_sym_str_literal_repeat1] = STATE(146),
    [aux_sym_str_literal_token1] = ACTIONS(714),
    [anon_sym_DQUOTE2] = ACTIONS(716),
    [sym_escape_sequence] = ACTIONS(718),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(720),
    [anon_sym_SEMI] = ACTIONS(720),
    [anon_sym_LPAREN] = ACTIONS(720),
    [anon_sym_RPAREN] = ACTIONS(720),
  },
  [143] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(722),
    [anon_sym_DQUOTE2] = ACTIONS(724),
    [sym_escape_sequence] = ACTIONS(726),
  },
  [144] = {
    [aux_sym_str_literal_repeat1] = STATE(145),
    [aux_sym_str_literal_token1] = ACTIONS(728),
    [anon_sym_DQUOTE2] = ACTIONS(730),
    [sym_escape_sequence] = ACTIONS(732),
  },
  [145] = {
    [aux_sym_str_literal_repeat1] = STATE(151),
    [aux_sym_str_literal_token1] = ACTIONS(734),
    [anon_sym_DQUOTE2] = ACTIONS(736),
    [sym_escape_sequence] = ACTIONS(738),
  },
  [146] = {
    [aux_sym_str_literal_repeat1] = STATE(151),
    [aux_sym_str_literal_token1] = ACTIONS(734),
    [anon_sym_DQUOTE2] = ACTIONS(740),
    [sym_escape_sequence] = ACTIONS(738),
  },
  [147] = {
    [aux_sym_str_literal_repeat1] = STATE(151),
    [aux_sym_str_literal_token1] = ACTIONS(734),
    [anon_sym_DQUOTE2] = ACTIONS(742),
    [sym_escape_sequence] = ACTIONS(738),
  },
  [148] = {
    [aux_sym_str_literal_repeat1] = STATE(151),
    [aux_sym_str_literal_token1] = ACTIONS(734),
    [anon_sym_DQUOTE2] = ACTIONS(744),
    [sym_escape_sequence] = ACTIONS(738),
  },
  [149] = {
    [aux_sym_str_literal_repeat1] = STATE(151),
    [aux_sym_str_literal_token1] = ACTIONS(734),
    [anon_sym_DQUOTE2] = ACTIONS(746),
    [sym_escape_sequence] = ACTIONS(738),
  },
  [150] = {
    [aux_sym_str_literal_repeat1] = STATE(151),
    [aux_sym_str_literal_token1] = ACTIONS(734),
    [anon_sym_DQUOTE2] = ACTIONS(748),
    [sym_escape_sequence] = ACTIONS(738),
  },
  [151] = {
    [aux_sym_str_literal_repeat1] = STATE(151),
    [aux_sym_str_literal_token1] = ACTIONS(750),
    [anon_sym_DQUOTE2] = ACTIONS(753),
    [sym_escape_sequence] = ACTIONS(755),
  },
  [152] = {
    [aux_sym_str_literal_repeat1] = STATE(148),
    [aux_sym_str_literal_token1] = ACTIONS(758),
    [anon_sym_DQUOTE2] = ACTIONS(760),
    [sym_escape_sequence] = ACTIONS(762),
  },
  [153] = {
    [aux_sym__deftype2_repeat1] = STATE(153),
    [anon_sym_LPAREN] = ACTIONS(764),
    [anon_sym_RPAREN] = ACTIONS(767),
  },
  [154] = {
    [anon_sym_LPAREN] = ACTIONS(769),
    [anon_sym_RPAREN] = ACTIONS(769),
    [anon_sym_LBRACK] = ACTIONS(769),
  },
  [155] = {
    [anon_sym_RBRACK2] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(423),
    [sym_identifier] = ACTIONS(423),
  },
  [156] = {
    [anon_sym_LPAREN] = ACTIONS(771),
    [anon_sym_RPAREN] = ACTIONS(771),
    [anon_sym_LBRACK] = ACTIONS(771),
  },
  [157] = {
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym_RPAREN] = ACTIONS(773),
    [anon_sym_LBRACK] = ACTIONS(773),
  },
  [158] = {
    [aux_sym__name_deftypes_repeat1] = STATE(158),
    [anon_sym_RPAREN2] = ACTIONS(775),
    [sym_identifier] = ACTIONS(777),
  },
  [159] = {
    [aux_sym__deftype2_repeat1] = STATE(153),
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(780),
  },
  [160] = {
    [aux_sym_let_pairs_repeat1] = STATE(163),
    [anon_sym_RBRACK] = ACTIONS(782),
    [sym_identifier] = ACTIONS(784),
  },
  [161] = {
    [aux_sym_let_pairs_repeat1] = STATE(160),
    [anon_sym_RBRACK] = ACTIONS(786),
    [sym_identifier] = ACTIONS(784),
  },
  [162] = {
    [aux_sym__name_deftypes_repeat1] = STATE(164),
    [anon_sym_RPAREN2] = ACTIONS(788),
    [sym_identifier] = ACTIONS(790),
  },
  [163] = {
    [aux_sym_let_pairs_repeat1] = STATE(163),
    [anon_sym_RBRACK] = ACTIONS(792),
    [sym_identifier] = ACTIONS(794),
  },
  [164] = {
    [aux_sym__name_deftypes_repeat1] = STATE(158),
    [anon_sym_RPAREN2] = ACTIONS(797),
    [sym_identifier] = ACTIONS(799),
  },
  [165] = {
    [sym_interface_fn] = STATE(214),
    [anon_sym_Fn] = ACTIONS(801),
    [anon_sym_] = ACTIONS(801),
  },
  [166] = {
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym_identifier] = ACTIONS(415),
  },
  [167] = {
    [sym_fields] = STATE(234),
    [anon_sym_LBRACK] = ACTIONS(803),
  },
  [168] = {
    [aux_sym_str_literal_token1] = ACTIONS(805),
    [sym_escape_sequence] = ACTIONS(807),
  },
  [169] = {
    [sym_parameters] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(809),
  },
  [170] = {
    [sym_let_pairs] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(811),
  },
  [171] = {
    [anon_sym_LPAREN] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(813),
  },
  [172] = {
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym_identifier] = ACTIONS(395),
  },
  [173] = {
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_identifier] = ACTIONS(391),
  },
  [174] = {
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_identifier] = ACTIONS(451),
  },
  [175] = {
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_identifier] = ACTIONS(447),
  },
  [176] = {
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym_identifier] = ACTIONS(435),
  },
  [177] = {
    [anon_sym_RBRACK] = ACTIONS(431),
    [sym_identifier] = ACTIONS(431),
  },
  [178] = {
    [anon_sym_RBRACK] = ACTIONS(427),
    [sym_identifier] = ACTIONS(427),
  },
  [179] = {
    [anon_sym_RBRACK] = ACTIONS(815),
    [sym_identifier] = ACTIONS(815),
  },
  [180] = {
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_identifier] = ACTIONS(411),
  },
  [181] = {
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
  },
  [182] = {
    [sym_typed_parameters] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(817),
  },
  [183] = {
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_identifier] = ACTIONS(403),
  },
  [184] = {
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_identifier] = ACTIONS(399),
  },
  [185] = {
    [aux_sym_str_literal_token1] = ACTIONS(819),
    [sym_escape_sequence] = ACTIONS(821),
  },
  [186] = {
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_identifier] = ACTIONS(419),
  },
  [187] = {
    [anon_sym_RBRACK] = ACTIONS(459),
    [sym_identifier] = ACTIONS(459),
  },
  [188] = {
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_identifier] = ACTIONS(455),
  },
  [189] = {
    [aux_sym_str_literal_token1] = ACTIONS(823),
    [sym_escape_sequence] = ACTIONS(825),
  },
  [190] = {
    [sym_str_literal] = STATE(199),
    [anon_sym_DQUOTE] = ACTIONS(61),
  },
  [191] = {
    [anon_sym_RBRACK] = ACTIONS(423),
    [sym_identifier] = ACTIONS(423),
  },
  [192] = {
    [sym_parameters] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(809),
  },
  [193] = {
    [sym_parameters] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(809),
  },
  [194] = {
    [sym_parameters] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(809),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(827),
  },
  [196] = {
    [sym_identifier] = ACTIONS(829),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(831),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(833),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(835),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(837),
  },
  [201] = {
    [anon_sym_LPAREN] = ACTIONS(839),
  },
  [202] = {
    [anon_sym_RPAREN2] = ACTIONS(841),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(843),
  },
  [204] = {
    [anon_sym_RPAREN2] = ACTIONS(843),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(845),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(847),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(849),
  },
  [208] = {
    [sym_identifier] = ACTIONS(851),
  },
  [209] = {
    [anon_sym_DOT] = ACTIONS(853),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(855),
  },
  [211] = {
    [sym_identifier] = ACTIONS(857),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(859),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(861),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(863),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(865),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(867),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(869),
  },
  [218] = {
    [sym_identifier] = ACTIONS(871),
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
    [sym_identifier] = ACTIONS(883),
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
    [anon_sym_RPAREN] = ACTIONS(891),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(893),
  },
  [230] = {
    [sym_identifier] = ACTIONS(895),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(841),
  },
  [232] = {
    [sym_identifier] = ACTIONS(897),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(899),
  },
  [234] = {
    [anon_sym_RPAREN2] = ACTIONS(901),
  },
  [235] = {
    [anon_sym_RPAREN] = ACTIONS(903),
  },
  [236] = {
    [sym_identifier] = ACTIONS(905),
  },
  [237] = {
    [sym_identifier] = ACTIONS(907),
  },
  [238] = {
    [anon_sym_RPAREN] = ACTIONS(909),
  },
  [239] = {
    [sym_upper_identifier] = ACTIONS(911),
  },
  [240] = {
    [aux_sym_line_comment_token1] = ACTIONS(913),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(915),
  },
  [242] = {
    [sym_identifier] = ACTIONS(917),
  },
  [243] = {
    [sym_identifier] = ACTIONS(919),
  },
  [244] = {
    [anon_sym_RPAREN] = ACTIONS(921),
  },
  [245] = {
    [ts_builtin_sym_end] = ACTIONS(923),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(240),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(239),
  [11] = {.count = 1, .reusable = false}, SHIFT(236),
  [13] = {.count = 1, .reusable = false}, SHIFT(232),
  [15] = {.count = 1, .reusable = false}, SHIFT(169),
  [17] = {.count = 1, .reusable = false}, SHIFT(230),
  [19] = {.count = 1, .reusable = false}, SHIFT(170),
  [21] = {.count = 1, .reusable = true}, SHIFT(88),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(32),
  [27] = {.count = 1, .reusable = false}, SHIFT(41),
  [29] = {.count = 1, .reusable = false}, SHIFT(25),
  [31] = {.count = 1, .reusable = false}, SHIFT(45),
  [33] = {.count = 1, .reusable = false}, SHIFT(196),
  [35] = {.count = 1, .reusable = false}, SHIFT(76),
  [37] = {.count = 1, .reusable = false}, SHIFT(227),
  [39] = {.count = 1, .reusable = false}, SHIFT(226),
  [41] = {.count = 1, .reusable = false}, SHIFT(225),
  [43] = {.count = 1, .reusable = false}, SHIFT(224),
  [45] = {.count = 1, .reusable = false}, SHIFT(208),
  [47] = {.count = 1, .reusable = false}, SHIFT(137),
  [49] = {.count = 1, .reusable = true}, SHIFT(33),
  [51] = {.count = 1, .reusable = true}, SHIFT(34),
  [53] = {.count = 1, .reusable = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = true}, SHIFT(36),
  [57] = {.count = 1, .reusable = false}, SHIFT(238),
  [59] = {.count = 1, .reusable = false}, SHIFT(91),
  [61] = {.count = 1, .reusable = true}, SHIFT(144),
  [63] = {.count = 1, .reusable = true}, SHIFT(189),
  [65] = {.count = 1, .reusable = true}, SHIFT(141),
  [67] = {.count = 1, .reusable = true}, SHIFT(90),
  [69] = {.count = 1, .reusable = true}, SHIFT(211),
  [71] = {.count = 1, .reusable = false}, SHIFT(125),
  [73] = {.count = 1, .reusable = false}, SHIFT(209),
  [75] = {.count = 1, .reusable = false}, SHIFT(221),
  [77] = {.count = 1, .reusable = false}, SHIFT(195),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 26),
  [81] = {.count = 1, .reusable = false}, SHIFT(118),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(3),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(88),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(33),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(34),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(35),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(36),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(126),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(91),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(144),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(189),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(141),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(90),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(211),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(88),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(33),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(34),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(35),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(36),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(7),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(91),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(144),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(189),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(141),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(90),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(211),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(3),
  [168] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(88),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(33),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(34),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(35),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(36),
  [185] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(118),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(91),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(144),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(189),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(141),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(90),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(211),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [208] = {.count = 1, .reusable = false}, SHIFT(7),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [212] = {.count = 1, .reusable = false}, SHIFT(126),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 11),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [218] = {.count = 1, .reusable = false}, SHIFT(9),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 7),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 4),
  [224] = {.count = 1, .reusable = false}, SHIFT(207),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 18),
  [228] = {.count = 1, .reusable = false}, SHIFT(210),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 18),
  [232] = {.count = 1, .reusable = false}, SHIFT(233),
  [234] = {.count = 1, .reusable = true}, SHIFT(82),
  [236] = {.count = 1, .reusable = false}, SHIFT(62),
  [238] = {.count = 1, .reusable = true}, SHIFT(69),
  [240] = {.count = 1, .reusable = true}, SHIFT(31),
  [242] = {.count = 1, .reusable = true}, SHIFT(30),
  [244] = {.count = 1, .reusable = true}, SHIFT(28),
  [246] = {.count = 1, .reusable = true}, SHIFT(26),
  [248] = {.count = 1, .reusable = false}, SHIFT(63),
  [250] = {.count = 1, .reusable = true}, SHIFT(68),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(82),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(62),
  [258] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(30),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(28),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(26),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(63),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_register, 3, .production_id = 24),
  [277] = {.count = 1, .reusable = false}, SHIFT(216),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 18),
  [281] = {.count = 1, .reusable = false}, SHIFT(212),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 8),
  [285] = {.count = 1, .reusable = false}, SHIFT(223),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 5),
  [289] = {.count = 1, .reusable = false}, SHIFT(235),
  [291] = {.count = 1, .reusable = false}, SHIFT(27),
  [293] = {.count = 1, .reusable = false}, SHIFT(198),
  [295] = {.count = 1, .reusable = true}, SHIFT(2),
  [297] = {.count = 1, .reusable = true}, SHIFT(92),
  [299] = {.count = 1, .reusable = false}, SHIFT(60),
  [301] = {.count = 1, .reusable = false}, SHIFT(51),
  [303] = {.count = 1, .reusable = true}, SHIFT(140),
  [305] = {.count = 1, .reusable = true}, SHIFT(168),
  [307] = {.count = 1, .reusable = true}, SHIFT(139),
  [309] = {.count = 1, .reusable = true}, SHIFT(105),
  [311] = {.count = 1, .reusable = true}, SHIFT(243),
  [313] = {.count = 1, .reusable = false}, SHIFT(222),
  [315] = {.count = 1, .reusable = false}, SHIFT(61),
  [317] = {.count = 1, .reusable = true}, SHIFT(4),
  [319] = {.count = 1, .reusable = true}, SHIFT(104),
  [321] = {.count = 1, .reusable = true}, SHIFT(42),
  [323] = {.count = 1, .reusable = true}, SHIFT(40),
  [325] = {.count = 1, .reusable = true}, SHIFT(39),
  [327] = {.count = 1, .reusable = true}, SHIFT(38),
  [329] = {.count = 1, .reusable = false}, SHIFT(179),
  [331] = {.count = 1, .reusable = false}, SHIFT(172),
  [333] = {.count = 1, .reusable = true}, SHIFT(152),
  [335] = {.count = 1, .reusable = true}, SHIFT(185),
  [337] = {.count = 1, .reusable = true}, SHIFT(143),
  [339] = {.count = 1, .reusable = true}, SHIFT(94),
  [341] = {.count = 1, .reusable = true}, SHIFT(237),
  [343] = {.count = 1, .reusable = false}, SHIFT(64),
  [345] = {.count = 1, .reusable = false}, SHIFT(65),
  [347] = {.count = 1, .reusable = false}, SHIFT(24),
  [349] = {.count = 1, .reusable = false}, SHIFT(113),
  [351] = {.count = 1, .reusable = false}, SHIFT(117),
  [353] = {.count = 1, .reusable = false}, SHIFT(121),
  [355] = {.count = 1, .reusable = false}, SHIFT(116),
  [357] = {.count = 1, .reusable = false}, SHIFT(228),
  [359] = {.count = 1, .reusable = false}, SHIFT(177),
  [361] = {.count = 1, .reusable = false}, SHIFT(176),
  [363] = {.count = 1, .reusable = false}, SHIFT(175),
  [365] = {.count = 1, .reusable = false}, SHIFT(22),
  [367] = {.count = 1, .reusable = false}, SHIFT(174),
  [369] = {.count = 1, .reusable = false}, SHIFT(200),
  [371] = {.count = 1, .reusable = false}, SHIFT(244),
  [373] = {.count = 1, .reusable = false}, SHIFT(197),
  [375] = {.count = 1, .reusable = true}, SHIFT(70),
  [377] = {.count = 1, .reusable = false}, SHIFT(112),
  [379] = {.count = 1, .reusable = false}, SHIFT(123),
  [381] = {.count = 1, .reusable = true}, SHIFT(79),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 10),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 10),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [471] = {.count = 1, .reusable = true}, SHIFT(115),
  [473] = {.count = 1, .reusable = false}, SHIFT(106),
  [475] = {.count = 1, .reusable = false}, SHIFT(182),
  [477] = {.count = 1, .reusable = false}, SHIFT(80),
  [479] = {.count = 1, .reusable = false}, SHIFT(77),
  [481] = {.count = 1, .reusable = true}, SHIFT(202),
  [483] = {.count = 1, .reusable = false}, SHIFT(78),
  [485] = {.count = 1, .reusable = true}, SHIFT(203),
  [487] = {.count = 1, .reusable = true}, SHIFT(204),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(82),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(77),
  [495] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [497] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(78),
  [500] = {.count = 1, .reusable = true}, SHIFT(231),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 40),
  [504] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 40),
  [506] = {.count = 1, .reusable = true}, SHIFT(85),
  [508] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1),
  [510] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1),
  [512] = {.count = 1, .reusable = true}, SHIFT(83),
  [514] = {.count = 1, .reusable = true}, SHIFT(124),
  [516] = {.count = 1, .reusable = false}, SHIFT(84),
  [518] = {.count = 1, .reusable = true}, SHIFT(48),
  [520] = {.count = 1, .reusable = true}, SHIFT(49),
  [522] = {.count = 1, .reusable = false}, SHIFT(81),
  [524] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2),
  [526] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [528] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(106),
  [531] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(84),
  [534] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 40),
  [536] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 40),
  [538] = {.count = 1, .reusable = true}, SHIFT(93),
  [540] = {.count = 1, .reusable = false}, SHIFT(109),
  [542] = {.count = 1, .reusable = false}, SHIFT(119),
  [544] = {.count = 1, .reusable = true}, SHIFT(98),
  [546] = {.count = 1, .reusable = true}, SHIFT(96),
  [548] = {.count = 1, .reusable = true}, SHIFT(50),
  [550] = {.count = 1, .reusable = false}, SHIFT(110),
  [552] = {.count = 1, .reusable = true}, SHIFT(181),
  [554] = {.count = 1, .reusable = true}, SHIFT(184),
  [556] = {.count = 1, .reusable = false}, SHIFT(100),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(88),
  [561] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(119),
  [564] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(91),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(144),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(189),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(141),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(90),
  [579] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(88),
  [584] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [586] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(100),
  [589] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(91),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(144),
  [595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(189),
  [598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(141),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(90),
  [604] = {.count = 1, .reusable = true}, SHIFT(188),
  [606] = {.count = 1, .reusable = true}, SHIFT(173),
  [608] = {.count = 1, .reusable = false}, SHIFT(95),
  [610] = {.count = 1, .reusable = true}, SHIFT(54),
  [612] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [614] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [616] = {.count = 1, .reusable = true}, SHIFT(66),
  [618] = {.count = 1, .reusable = true}, SHIFT(99),
  [620] = {.count = 1, .reusable = true}, SHIFT(52),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [626] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [628] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [630] = {.count = 1, .reusable = false}, SHIFT(131),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [640] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [642] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 32),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 32),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [660] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [662] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [664] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [666] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [674] = {.count = 1, .reusable = true}, SHIFT(129),
  [676] = {.count = 1, .reusable = true}, SHIFT(218),
  [678] = {.count = 1, .reusable = true}, SHIFT(136),
  [680] = {.count = 1, .reusable = true}, SHIFT(128),
  [682] = {.count = 1, .reusable = true}, SHIFT(134),
  [684] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(218),
  [689] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(136),
  [692] = {.count = 1, .reusable = true}, SHIFT(219),
  [694] = {.count = 1, .reusable = true}, SHIFT(154),
  [696] = {.count = 1, .reusable = true}, SHIFT(242),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 13),
  [700] = {.count = 1, .reusable = true}, SHIFT(72),
  [702] = {.count = 1, .reusable = false}, SHIFT(147),
  [704] = {.count = 1, .reusable = true}, SHIFT(55),
  [706] = {.count = 1, .reusable = true}, SHIFT(147),
  [708] = {.count = 1, .reusable = false}, SHIFT(149),
  [710] = {.count = 1, .reusable = true}, SHIFT(59),
  [712] = {.count = 1, .reusable = true}, SHIFT(149),
  [714] = {.count = 1, .reusable = false}, SHIFT(146),
  [716] = {.count = 1, .reusable = true}, SHIFT(86),
  [718] = {.count = 1, .reusable = true}, SHIFT(146),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [722] = {.count = 1, .reusable = false}, SHIFT(150),
  [724] = {.count = 1, .reusable = true}, SHIFT(180),
  [726] = {.count = 1, .reusable = true}, SHIFT(150),
  [728] = {.count = 1, .reusable = false}, SHIFT(145),
  [730] = {.count = 1, .reusable = true}, SHIFT(103),
  [732] = {.count = 1, .reusable = true}, SHIFT(145),
  [734] = {.count = 1, .reusable = false}, SHIFT(151),
  [736] = {.count = 1, .reusable = true}, SHIFT(108),
  [738] = {.count = 1, .reusable = true}, SHIFT(151),
  [740] = {.count = 1, .reusable = true}, SHIFT(111),
  [742] = {.count = 1, .reusable = true}, SHIFT(67),
  [744] = {.count = 1, .reusable = true}, SHIFT(186),
  [746] = {.count = 1, .reusable = true}, SHIFT(57),
  [748] = {.count = 1, .reusable = true}, SHIFT(187),
  [750] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(151),
  [753] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(151),
  [758] = {.count = 1, .reusable = false}, SHIFT(148),
  [760] = {.count = 1, .reusable = true}, SHIFT(178),
  [762] = {.count = 1, .reusable = true}, SHIFT(148),
  [764] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 41), SHIFT_REPEAT(242),
  [767] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 41),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 11),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 43),
  [775] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(158),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 28),
  [782] = {.count = 1, .reusable = true}, SHIFT(130),
  [784] = {.count = 1, .reusable = true}, SHIFT(29),
  [786] = {.count = 1, .reusable = true}, SHIFT(122),
  [788] = {.count = 1, .reusable = true}, SHIFT(156),
  [790] = {.count = 1, .reusable = true}, SHIFT(164),
  [792] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36),
  [794] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36), SHIFT_REPEAT(29),
  [797] = {.count = 1, .reusable = true}, SHIFT(157),
  [799] = {.count = 1, .reusable = true}, SHIFT(158),
  [801] = {.count = 1, .reusable = true}, SHIFT(182),
  [803] = {.count = 1, .reusable = true}, SHIFT(73),
  [805] = {.count = 1, .reusable = false}, SHIFT(56),
  [807] = {.count = 1, .reusable = true}, SHIFT(56),
  [809] = {.count = 1, .reusable = true}, SHIFT(135),
  [811] = {.count = 1, .reusable = true}, SHIFT(161),
  [813] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 45),
  [815] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [817] = {.count = 1, .reusable = true}, SHIFT(17),
  [819] = {.count = 1, .reusable = false}, SHIFT(166),
  [821] = {.count = 1, .reusable = true}, SHIFT(166),
  [823] = {.count = 1, .reusable = false}, SHIFT(102),
  [825] = {.count = 1, .reusable = true}, SHIFT(102),
  [827] = {.count = 1, .reusable = true}, SHIFT(183),
  [829] = {.count = 1, .reusable = true}, SHIFT(37),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 9),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 9),
  [835] = {.count = 1, .reusable = true}, REDUCE(sym_doc, 3, .production_id = 15),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 16),
  [839] = {.count = 1, .reusable = true}, SHIFT(165),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_use, 2, .production_id = 3),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 42),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 17),
  [851] = {.count = 1, .reusable = true}, SHIFT(11),
  [853] = {.count = 1, .reusable = true}, SHIFT(220),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 33),
  [857] = {.count = 1, .reusable = true}, SHIFT(120),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 33),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 42),
  [863] = {.count = 1, .reusable = true}, SHIFT(206),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 12),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 38),
  [869] = {.count = 1, .reusable = true}, SHIFT(213),
  [871] = {.count = 1, .reusable = true}, SHIFT(155),
  [873] = {.count = 1, .reusable = true}, SHIFT(162),
  [875] = {.count = 1, .reusable = true}, SHIFT(127),
  [877] = {.count = 1, .reusable = true}, SHIFT(87),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 37),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 21),
  [883] = {.count = 1, .reusable = true}, SHIFT(193),
  [885] = {.count = 1, .reusable = true}, SHIFT(194),
  [887] = {.count = 1, .reusable = true}, SHIFT(201),
  [889] = {.count = 1, .reusable = true}, SHIFT(46),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 22),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 44),
  [895] = {.count = 1, .reusable = true}, SHIFT(192),
  [897] = {.count = 1, .reusable = true}, SHIFT(43),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 33),
  [901] = {.count = 1, .reusable = true}, SHIFT(171),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 19),
  [905] = {.count = 1, .reusable = true}, SHIFT(190),
  [907] = {.count = 1, .reusable = true}, SHIFT(191),
  [909] = {.count = 1, .reusable = true}, SHIFT(53),
  [911] = {.count = 1, .reusable = true}, SHIFT(205),
  [913] = {.count = 1, .reusable = true}, SHIFT(142),
  [915] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 27),
  [917] = {.count = 1, .reusable = true}, SHIFT(167),
  [919] = {.count = 1, .reusable = true}, SHIFT(58),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 23),
  [923] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
