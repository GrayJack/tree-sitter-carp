#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 318
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
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
  anon_sym_match = 20,
  anon_sym_register = 21,
  anon_sym_Bool = 22,
  anon_sym_Char = 23,
  anon_sym_Int = 24,
  anon_sym_Long = 25,
  anon_sym_Float = 26,
  anon_sym_Double = 27,
  anon_sym_Vector2 = 28,
  anon_sym_Vector3 = 29,
  anon_sym_VectorN = 30,
  anon_sym_String = 31,
  anon_sym_Pattern = 32,
  anon_sym_Array = 33,
  anon_sym_Map = 34,
  anon_sym_Maybe = 35,
  anon_sym_Result = 36,
  anon_sym_Id = 37,
  anon_sym_Ptr = 38,
  anon_sym_DOT = 39,
  anon_sym_definterface = 40,
  anon_sym_defmacro = 41,
  anon_sym_defndynamic = 42,
  anon_sym_defmodule = 43,
  anon_sym_deftype = 44,
  anon_sym_COMMA = 45,
  anon_sym_Fn = 46,
  anon_sym_ = 47,
  anon_sym_AMP = 48,
  anon_sym_AT = 49,
  anon_sym_TILDE = 50,
  anon_sym_SQUOTE = 51,
  sym_integer_literal = 52,
  sym_float_literal = 53,
  anon_sym_true = 54,
  anon_sym_false = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_str_literal_token1 = 57,
  anon_sym_BSLASH = 58,
  anon_sym_POUND_DQUOTE = 59,
  sym_escape_sequence = 60,
  anon_sym_LBRACE = 61,
  anon_sym_RBRACE = 62,
  anon_sym_COLON = 63,
  sym_hidden = 64,
  anon_sym_let_DASHdo = 65,
  anon_sym_while_DASHdo = 66,
  anon_sym_defn_DASHdo = 67,
  anon_sym_break = 68,
  anon_sym_for = 69,
  anon_sym_when = 70,
  anon_sym_cond = 71,
  anon_sym_unless = 72,
  anon_sym_case = 73,
  anon_sym_foreach = 74,
  anon_sym_defdynamic = 75,
  anon_sym_load = 76,
  anon_sym_PLUS = 77,
  anon_sym_DASH = 78,
  anon_sym_SLASH = 79,
  anon_sym_STAR = 80,
  anon_sym_PERCENT = 81,
  anon_sym_LT = 82,
  anon_sym_GT = 83,
  anon_sym_EQ = 84,
  anon_sym_LT_EQ = 85,
  anon_sym_GT_EQ = 86,
  anon_sym_SLASH_EQ = 87,
  anon_sym_and = 88,
  anon_sym_or = 89,
  anon_sym_not = 90,
  anon_sym_and_STAR = 91,
  anon_sym_or_STAR = 92,
  sym_upper_identifier = 93,
  sym_identifier = 94,
  sym_source_file = 95,
  sym_line_comment = 96,
  sym__s_expr = 97,
  sym__expr = 98,
  sym__anything = 99,
  sym__s_forms = 100,
  sym__defs = 101,
  sym__literals = 102,
  sym__short_helper = 103,
  sym_use = 104,
  sym_doc = 105,
  sym_def = 106,
  sym_fn = 107,
  sym_defn = 108,
  sym_let = 109,
  sym_let_pairs = 110,
  sym_do = 111,
  sym_if = 112,
  sym_while = 113,
  sym_ref = 114,
  sym_address = 115,
  sym_set = 116,
  sym_the = 117,
  sym_match = 118,
  sym_match_case = 119,
  sym_register = 120,
  sym_type = 121,
  sym_complex_type = 122,
  sym_call_expression = 123,
  sym__call_name = 124,
  sym_call_no_module = 125,
  sym_call_with_module = 126,
  sym_definterface = 127,
  sym_defmacro = 128,
  sym_defndynamic = 129,
  sym_defmodule = 130,
  sym_deftype = 131,
  sym__deftype1 = 132,
  sym__deftype2 = 133,
  sym__name_deftypes = 134,
  sym_fields = 135,
  sym_interface_fn = 136,
  sym_short_ref = 137,
  sym_short_copy = 138,
  sym_short_fn_ref = 139,
  sym_short_quote = 140,
  sym_parameters = 141,
  sym_typed_parameters = 142,
  sym_bool_literal = 143,
  sym_str_literal = 144,
  sym_char_literal = 145,
  sym_pattern_literal = 146,
  sym_array_expression = 147,
  sym_map_expression = 148,
  sym_symbol = 149,
  sym_other_str = 150,
  sym_operators = 151,
  aux_sym_source_file_repeat1 = 152,
  aux_sym_fn_repeat1 = 153,
  aux_sym_let_pairs_repeat1 = 154,
  aux_sym_do_repeat1 = 155,
  aux_sym_match_repeat1 = 156,
  aux_sym_complex_type_repeat1 = 157,
  aux_sym_call_expression_repeat1 = 158,
  aux_sym_defmodule_repeat1 = 159,
  aux_sym__deftype2_repeat1 = 160,
  aux_sym__name_deftypes_repeat1 = 161,
  aux_sym_fields_repeat1 = 162,
  aux_sym_parameters_repeat1 = 163,
  aux_sym_typed_parameters_repeat1 = 164,
  aux_sym_str_literal_repeat1 = 165,
  aux_sym_array_expression_repeat1 = 166,
  aux_sym_map_expression_repeat1 = 167,
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
  [anon_sym_match] = "match",
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
  [anon_sym_COMMA] = ",",
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
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_hidden] = "hidden",
  [anon_sym_let_DASHdo] = "let-do",
  [anon_sym_while_DASHdo] = "while-do",
  [anon_sym_defn_DASHdo] = "defn-do",
  [anon_sym_break] = "break",
  [anon_sym_for] = "for",
  [anon_sym_when] = "when",
  [anon_sym_cond] = "cond",
  [anon_sym_unless] = "unless",
  [anon_sym_case] = "case",
  [anon_sym_foreach] = "foreach",
  [anon_sym_defdynamic] = "defdynamic",
  [anon_sym_load] = "load",
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
  [sym_upper_identifier] = "upper_identifier",
  [sym_identifier] = "identifier",
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
  [sym_match] = "match",
  [sym_match_case] = "match_case",
  [sym_register] = "register",
  [sym_type] = "type",
  [sym_complex_type] = "complex_type",
  [sym_call_expression] = "call_expression",
  [sym__call_name] = "_call_name",
  [sym_call_no_module] = "call_no_module",
  [sym_call_with_module] = "call_with_module",
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
  [sym_other_str] = "other_str",
  [sym_operators] = "operators",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_fn_repeat1] = "fn_repeat1",
  [aux_sym_let_pairs_repeat1] = "let_pairs_repeat1",
  [aux_sym_do_repeat1] = "do_repeat1",
  [aux_sym_match_repeat1] = "match_repeat1",
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
  [anon_sym_match] = {
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
  [anon_sym_COMMA] = {
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
  [anon_sym_while_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn_DASHdo] = {
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
  [anon_sym_defdynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
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
  [sym_upper_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_match_case] = {
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
  [sym__call_name] = {
    .visible = false,
    .named = true,
  },
  [sym_call_no_module] = {
    .visible = true,
    .named = true,
  },
  [sym_call_with_module] = {
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
  [sym_other_str] = {
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
  [aux_sym_fn_repeat1] = {
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
  [aux_sym_match_repeat1] = {
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
  field_case = 4,
  field_condition = 5,
  field_definition = 6,
  field_doc_str = 7,
  field_else = 8,
  field_expr = 9,
  field_fields = 10,
  field_fn = 11,
  field_generic_type = 12,
  field_key = 13,
  field_module = 14,
  field_name = 15,
  field_pairs = 16,
  field_parameters = 17,
  field_return_type = 18,
  field_then = 19,
  field_type = 20,
  field_typed_params = 21,
  field_value = 22,
  field_value_name = 23,
  field_var = 24,
  field_variable = 25,
  field_variant = 26,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_case] = "case",
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
  [38] = {.index = 71, .length = 2},
  [39] = {.index = 73, .length = 3},
  [40] = {.index = 76, .length = 1},
  [41] = {.index = 77, .length = 2},
  [43] = {.index = 79, .length = 4},
  [44] = {.index = 83, .length = 2},
  [45] = {.index = 85, .length = 2},
  [46] = {.index = 87, .length = 2},
  [47] = {.index = 89, .length = 2},
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
    {field_body, 1},
    {field_case, 0},
  [73] =
    {field_name, 1},
    {field_type, 2},
    {field_value_name, 3},
  [76] =
    {field_definition, 1},
  [77] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [79] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [83] =
    {field_fn, 3},
    {field_name, 1},
  [85] =
    {field_generic_type, 2},
    {field_name, 1},
  [87] =
    {field_return_type, 2},
    {field_typed_params, 1},
  [89] =
    {field_fields, 2},
    {field_variant, 1},
};

static TSSymbol ts_alias_sequences[48][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [0] = sym_identifier,
  },
  [42] = {
    [0] = sym_type,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(193);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '%') ADVANCE(325);
      if (lookahead == '&') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '+') ADVANCE(320);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '>') ADVANCE(327);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(25);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(171);
      if (lookahead == 'V') ADVANCE(57);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == 955) ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(193);
      if (lookahead == '%') ADVANCE(325);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '+') ADVANCE(320);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '>') ADVANCE(327);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(337);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(223);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '&') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(337);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '&') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(337);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '&') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(434);
      if (lookahead == 'w') ADVANCE(389);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(337);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(302);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A') ADVANCE(432);
      if (lookahead == 'B') ADVANCE(416);
      if (lookahead == 'C') ADVANCE(392);
      if (lookahead == 'D') ADVANCE(412);
      if (lookahead == 'F') ADVANCE(399);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(343);
      if (lookahead == 'P') ADVANCE(348);
      if (lookahead == 'R') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'V') ADVANCE(381);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == ']') ADVANCE(212);
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(432);
      if (lookahead == 'B') ADVANCE(416);
      if (lookahead == 'C') ADVANCE(392);
      if (lookahead == 'D') ADVANCE(412);
      if (lookahead == 'F') ADVANCE(398);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(343);
      if (lookahead == 'P') ADVANCE(348);
      if (lookahead == 'R') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'V') ADVANCE(381);
      if (lookahead == 955) ADVANCE(280);
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
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(243);
      if (lookahead == '3') ADVANCE(245);
      if (lookahead == 'N') ADVANCE(247);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(311);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 182:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 185:
      if (lookahead == '{') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == '}') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 187:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(337);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 200:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_doc);
      END_STATE();
    case 202:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 206:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 210:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 216:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 218:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 220:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 222:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      END_STATE();
    case 224:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 226:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 230:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 232:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 234:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 236:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Long);
      END_STATE();
    case 238:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 240:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 242:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 244:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 246:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_VectorN);
      END_STATE();
    case 248:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 250:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Pattern);
      END_STATE();
    case 252:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 254:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 256:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Maybe);
      END_STATE();
    case 258:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Result);
      END_STATE();
    case 260:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 262:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Ptr);
      END_STATE();
    case 264:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_definterface);
      END_STATE();
    case 267:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_defmacro);
      END_STATE();
    case 269:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_defndynamic);
      END_STATE();
    case 271:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 273:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_deftype);
      END_STATE();
    case 275:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Fn);
      END_STATE();
    case 278:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 280:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 288:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 293:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 295:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_hidden);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_let_DASHdo);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_while_DASHdo);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_defn_DASHdo);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_cond);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_defdynamic);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '*') ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '*') ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_and_STAR);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_or_STAR);
      END_STATE();
    case 337:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(224);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(244);
      if (lookahead == '3') ADVANCE(246);
      if (lookahead == 'N') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(373);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 373:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
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
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 'g') ADVANCE(393);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(394);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(228);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(350);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'y') ADVANCE(351);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(352);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(402);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(420);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(408);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    case 459:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(459);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 13},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 13},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 13},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 187},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 187},
  [263] = {.lex_state = 13},
  [264] = {.lex_state = 13},
  [265] = {.lex_state = 13},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 13},
  [269] = {.lex_state = 13},
  [270] = {.lex_state = 13},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 13},
  [275] = {.lex_state = 195},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 13},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 195},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 13},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 13},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 13},
  [293] = {.lex_state = 195},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 13},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 195},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 13},
  [303] = {.lex_state = 13},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 195},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 13},
  [314] = {.lex_state = 13},
  [315] = {.lex_state = 13},
  [316] = {.lex_state = 1},
  [317] = {.lex_state = 0},
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
    [anon_sym_match] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_load] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(317),
    [sym_line_comment] = STATE(18),
    [sym__s_expr] = STATE(18),
    [sym_other_str] = STATE(18),
    [sym_operators] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_let_DASHdo] = ACTIONS(9),
    [anon_sym_while_DASHdo] = ACTIONS(9),
    [anon_sym_defn_DASHdo] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(9),
    [anon_sym_cond] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_case] = ACTIONS(9),
    [anon_sym_foreach] = ACTIONS(9),
    [anon_sym_defdynamic] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_SLASH_EQ] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_and_STAR] = ACTIONS(13),
    [anon_sym_or_STAR] = ACTIONS(13),
  },
  [2] = {
    [sym_line_comment] = STATE(289),
    [sym__s_expr] = STATE(289),
    [sym__anything] = STATE(289),
    [sym__s_forms] = STATE(289),
    [sym__defs] = STATE(289),
    [sym__literals] = STATE(289),
    [sym__short_helper] = STATE(289),
    [sym_use] = STATE(289),
    [sym_doc] = STATE(289),
    [sym_def] = STATE(289),
    [sym_fn] = STATE(289),
    [sym_defn] = STATE(289),
    [sym_let] = STATE(289),
    [sym_do] = STATE(289),
    [sym_if] = STATE(289),
    [sym_while] = STATE(289),
    [sym_ref] = STATE(289),
    [sym_address] = STATE(289),
    [sym_set] = STATE(289),
    [sym_the] = STATE(289),
    [sym_match] = STATE(289),
    [sym_register] = STATE(289),
    [sym_call_expression] = STATE(289),
    [sym__call_name] = STATE(24),
    [sym_call_no_module] = STATE(24),
    [sym_call_with_module] = STATE(24),
    [sym_definterface] = STATE(289),
    [sym_defmacro] = STATE(289),
    [sym_defndynamic] = STATE(289),
    [sym_defmodule] = STATE(289),
    [sym_deftype] = STATE(289),
    [sym_short_ref] = STATE(289),
    [sym_short_copy] = STATE(289),
    [sym_short_fn_ref] = STATE(24),
    [sym_short_quote] = STATE(289),
    [sym_bool_literal] = STATE(289),
    [sym_str_literal] = STATE(289),
    [sym_char_literal] = STATE(289),
    [sym_pattern_literal] = STATE(289),
    [sym_array_expression] = STATE(289),
    [sym_map_expression] = STATE(289),
    [sym_symbol] = STATE(289),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(67),
    [sym_float_literal] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [3] = {
    [sym_line_comment] = STATE(308),
    [sym__s_expr] = STATE(308),
    [sym__anything] = STATE(308),
    [sym__s_forms] = STATE(308),
    [sym__defs] = STATE(308),
    [sym__literals] = STATE(308),
    [sym__short_helper] = STATE(308),
    [sym_use] = STATE(308),
    [sym_doc] = STATE(308),
    [sym_def] = STATE(308),
    [sym_fn] = STATE(308),
    [sym_defn] = STATE(308),
    [sym_let] = STATE(308),
    [sym_do] = STATE(308),
    [sym_if] = STATE(308),
    [sym_while] = STATE(308),
    [sym_ref] = STATE(308),
    [sym_address] = STATE(308),
    [sym_set] = STATE(308),
    [sym_the] = STATE(308),
    [sym_match] = STATE(308),
    [sym_register] = STATE(308),
    [sym_call_expression] = STATE(308),
    [sym__call_name] = STATE(24),
    [sym_call_no_module] = STATE(24),
    [sym_call_with_module] = STATE(24),
    [sym_definterface] = STATE(308),
    [sym_defmacro] = STATE(308),
    [sym_defndynamic] = STATE(308),
    [sym_defmodule] = STATE(308),
    [sym_deftype] = STATE(308),
    [sym_short_ref] = STATE(308),
    [sym_short_copy] = STATE(308),
    [sym_short_fn_ref] = STATE(24),
    [sym_short_quote] = STATE(308),
    [sym_bool_literal] = STATE(308),
    [sym_str_literal] = STATE(308),
    [sym_char_literal] = STATE(308),
    [sym_pattern_literal] = STATE(308),
    [sym_array_expression] = STATE(308),
    [sym_map_expression] = STATE(308),
    [sym_symbol] = STATE(308),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(85),
    [sym_float_literal] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [4] = {
    [sym_line_comment] = STATE(311),
    [sym__s_expr] = STATE(311),
    [sym__anything] = STATE(311),
    [sym__s_forms] = STATE(311),
    [sym__defs] = STATE(311),
    [sym__literals] = STATE(311),
    [sym__short_helper] = STATE(311),
    [sym_use] = STATE(311),
    [sym_doc] = STATE(311),
    [sym_def] = STATE(311),
    [sym_fn] = STATE(311),
    [sym_defn] = STATE(311),
    [sym_let] = STATE(311),
    [sym_do] = STATE(311),
    [sym_if] = STATE(311),
    [sym_while] = STATE(311),
    [sym_ref] = STATE(311),
    [sym_address] = STATE(311),
    [sym_set] = STATE(311),
    [sym_the] = STATE(311),
    [sym_match] = STATE(311),
    [sym_register] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym__call_name] = STATE(24),
    [sym_call_no_module] = STATE(24),
    [sym_call_with_module] = STATE(24),
    [sym_definterface] = STATE(311),
    [sym_defmacro] = STATE(311),
    [sym_defndynamic] = STATE(311),
    [sym_defmodule] = STATE(311),
    [sym_deftype] = STATE(311),
    [sym_short_ref] = STATE(311),
    [sym_short_copy] = STATE(311),
    [sym_short_fn_ref] = STATE(24),
    [sym_short_quote] = STATE(311),
    [sym_bool_literal] = STATE(311),
    [sym_str_literal] = STATE(311),
    [sym_char_literal] = STATE(311),
    [sym_pattern_literal] = STATE(311),
    [sym_array_expression] = STATE(311),
    [sym_map_expression] = STATE(311),
    [sym_symbol] = STATE(311),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(87),
    [sym_float_literal] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [5] = {
    [sym_line_comment] = STATE(271),
    [sym__s_expr] = STATE(271),
    [sym__anything] = STATE(271),
    [sym__s_forms] = STATE(271),
    [sym__defs] = STATE(271),
    [sym__literals] = STATE(271),
    [sym__short_helper] = STATE(271),
    [sym_use] = STATE(271),
    [sym_doc] = STATE(271),
    [sym_def] = STATE(271),
    [sym_fn] = STATE(271),
    [sym_defn] = STATE(271),
    [sym_let] = STATE(271),
    [sym_do] = STATE(271),
    [sym_if] = STATE(271),
    [sym_while] = STATE(271),
    [sym_ref] = STATE(271),
    [sym_address] = STATE(271),
    [sym_set] = STATE(271),
    [sym_the] = STATE(271),
    [sym_match] = STATE(271),
    [sym_register] = STATE(271),
    [sym_call_expression] = STATE(271),
    [sym__call_name] = STATE(24),
    [sym_call_no_module] = STATE(24),
    [sym_call_with_module] = STATE(24),
    [sym_definterface] = STATE(271),
    [sym_defmacro] = STATE(271),
    [sym_defndynamic] = STATE(271),
    [sym_defmodule] = STATE(271),
    [sym_deftype] = STATE(271),
    [sym_short_ref] = STATE(271),
    [sym_short_copy] = STATE(271),
    [sym_short_fn_ref] = STATE(24),
    [sym_short_quote] = STATE(271),
    [sym_bool_literal] = STATE(271),
    [sym_str_literal] = STATE(271),
    [sym_char_literal] = STATE(271),
    [sym_pattern_literal] = STATE(271),
    [sym_array_expression] = STATE(271),
    [sym_map_expression] = STATE(271),
    [sym_symbol] = STATE(271),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(89),
    [sym_float_literal] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [6] = {
    [sym_line_comment] = STATE(277),
    [sym__s_expr] = STATE(277),
    [sym__anything] = STATE(277),
    [sym__s_forms] = STATE(277),
    [sym__defs] = STATE(277),
    [sym__literals] = STATE(277),
    [sym__short_helper] = STATE(277),
    [sym_use] = STATE(277),
    [sym_doc] = STATE(277),
    [sym_def] = STATE(277),
    [sym_fn] = STATE(277),
    [sym_defn] = STATE(277),
    [sym_let] = STATE(277),
    [sym_do] = STATE(277),
    [sym_if] = STATE(277),
    [sym_while] = STATE(277),
    [sym_ref] = STATE(277),
    [sym_address] = STATE(277),
    [sym_set] = STATE(277),
    [sym_the] = STATE(277),
    [sym_match] = STATE(277),
    [sym_register] = STATE(277),
    [sym_call_expression] = STATE(277),
    [sym__call_name] = STATE(24),
    [sym_call_no_module] = STATE(24),
    [sym_call_with_module] = STATE(24),
    [sym_definterface] = STATE(277),
    [sym_defmacro] = STATE(277),
    [sym_defndynamic] = STATE(277),
    [sym_defmodule] = STATE(277),
    [sym_deftype] = STATE(277),
    [sym_short_ref] = STATE(277),
    [sym_short_copy] = STATE(277),
    [sym_short_fn_ref] = STATE(24),
    [sym_short_quote] = STATE(277),
    [sym_bool_literal] = STATE(277),
    [sym_str_literal] = STATE(277),
    [sym_char_literal] = STATE(277),
    [sym_pattern_literal] = STATE(277),
    [sym_array_expression] = STATE(277),
    [sym_map_expression] = STATE(277),
    [sym_symbol] = STATE(277),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(91),
    [sym_float_literal] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [7] = {
    [sym_line_comment] = STATE(117),
    [sym__s_expr] = STATE(117),
    [sym__expr] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__short_helper] = STATE(117),
    [sym_doc] = STATE(51),
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
    [aux_sym_defmodule_repeat1] = STATE(9),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_doc] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(111),
    [sym_float_literal] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(125),
    [sym_identifier] = ACTIONS(111),
  },
  [8] = {
    [sym_line_comment] = STATE(117),
    [sym__s_expr] = STATE(117),
    [sym__expr] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__short_helper] = STATE(117),
    [sym_doc] = STATE(51),
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
    [aux_sym_defmodule_repeat1] = STATE(8),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_doc] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [sym_integer_literal] = ACTIONS(153),
    [sym_float_literal] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(156),
    [anon_sym_false] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_BSLASH] = ACTIONS(162),
    [anon_sym_POUND_DQUOTE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(171),
    [sym_upper_identifier] = ACTIONS(174),
    [sym_identifier] = ACTIONS(153),
  },
  [9] = {
    [sym_line_comment] = STATE(117),
    [sym__s_expr] = STATE(117),
    [sym__expr] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__short_helper] = STATE(117),
    [sym_doc] = STATE(51),
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
    [aux_sym_defmodule_repeat1] = STATE(8),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_doc] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(111),
    [sym_float_literal] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(125),
    [sym_identifier] = ACTIONS(111),
  },
  [10] = {
    [sym_line_comment] = STATE(59),
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
    [sym_match_case] = STATE(10),
    [sym_short_ref] = STATE(59),
    [sym_short_copy] = STATE(59),
    [sym_short_fn_ref] = STATE(59),
    [sym_short_quote] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_pattern_literal] = STATE(59),
    [sym_array_expression] = STATE(59),
    [sym_map_expression] = STATE(59),
    [sym_symbol] = STATE(59),
    [aux_sym_match_repeat1] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [sym_integer_literal] = ACTIONS(202),
    [sym_float_literal] = ACTIONS(202),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(211),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_upper_identifier] = ACTIONS(223),
    [sym_identifier] = ACTIONS(202),
  },
  [11] = {
    [sym_line_comment] = STATE(59),
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
    [sym_match_case] = STATE(10),
    [sym_short_ref] = STATE(59),
    [sym_short_copy] = STATE(59),
    [sym_short_fn_ref] = STATE(59),
    [sym_short_quote] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_pattern_literal] = STATE(59),
    [sym_array_expression] = STATE(59),
    [sym_map_expression] = STATE(59),
    [sym_symbol] = STATE(59),
    [aux_sym_match_repeat1] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(240),
    [sym_float_literal] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(252),
    [sym_identifier] = ACTIONS(240),
  },
  [12] = {
    [sym_line_comment] = STATE(59),
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
    [sym_match_case] = STATE(11),
    [sym_short_ref] = STATE(59),
    [sym_short_copy] = STATE(59),
    [sym_short_fn_ref] = STATE(59),
    [sym_short_quote] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_pattern_literal] = STATE(59),
    [sym_array_expression] = STATE(59),
    [sym_map_expression] = STATE(59),
    [sym_symbol] = STATE(59),
    [aux_sym_match_repeat1] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(240),
    [sym_float_literal] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(252),
    [sym_identifier] = ACTIONS(240),
  },
  [13] = {
    [sym_line_comment] = STATE(23),
    [sym__s_expr] = STATE(23),
    [sym__expr] = STATE(23),
    [sym__literals] = STATE(23),
    [sym__short_helper] = STATE(23),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_short_quote] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym_str_literal] = STATE(23),
    [sym_char_literal] = STATE(23),
    [sym_pattern_literal] = STATE(23),
    [sym_array_expression] = STATE(23),
    [sym_map_expression] = STATE(23),
    [sym_symbol] = STATE(23),
    [aux_sym_fn_repeat1] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(258),
    [sym_float_literal] = ACTIONS(258),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(260),
    [sym_identifier] = ACTIONS(258),
  },
  [14] = {
    [sym_line_comment] = STATE(141),
    [sym__s_expr] = STATE(141),
    [sym__expr] = STATE(141),
    [sym__literals] = STATE(141),
    [sym__short_helper] = STATE(141),
    [sym_short_ref] = STATE(141),
    [sym_short_copy] = STATE(141),
    [sym_short_fn_ref] = STATE(141),
    [sym_short_quote] = STATE(141),
    [sym_bool_literal] = STATE(141),
    [sym_str_literal] = STATE(141),
    [sym_char_literal] = STATE(141),
    [sym_pattern_literal] = STATE(141),
    [sym_array_expression] = STATE(141),
    [sym_map_expression] = STATE(141),
    [sym_symbol] = STATE(141),
    [aux_sym_do_repeat1] = STATE(26),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(264),
    [sym_float_literal] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(266),
    [sym_identifier] = ACTIONS(264),
  },
  [15] = {
    [sym_line_comment] = STATE(21),
    [sym__s_expr] = STATE(21),
    [sym__expr] = STATE(21),
    [sym__literals] = STATE(21),
    [sym__short_helper] = STATE(21),
    [sym_short_ref] = STATE(21),
    [sym_short_copy] = STATE(21),
    [sym_short_fn_ref] = STATE(21),
    [sym_short_quote] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [sym_symbol] = STATE(21),
    [aux_sym_fn_repeat1] = STATE(21),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(272),
    [sym_identifier] = ACTIONS(270),
  },
  [16] = {
    [sym_line_comment] = STATE(141),
    [sym__s_expr] = STATE(141),
    [sym__expr] = STATE(141),
    [sym__literals] = STATE(141),
    [sym__short_helper] = STATE(141),
    [sym_short_ref] = STATE(141),
    [sym_short_copy] = STATE(141),
    [sym_short_fn_ref] = STATE(141),
    [sym_short_quote] = STATE(141),
    [sym_bool_literal] = STATE(141),
    [sym_str_literal] = STATE(141),
    [sym_char_literal] = STATE(141),
    [sym_pattern_literal] = STATE(141),
    [sym_array_expression] = STATE(141),
    [sym_map_expression] = STATE(141),
    [sym_symbol] = STATE(141),
    [aux_sym_do_repeat1] = STATE(16),
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [sym_integer_literal] = ACTIONS(297),
    [sym_float_literal] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(300),
    [anon_sym_false] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(306),
    [anon_sym_POUND_DQUOTE] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(315),
    [sym_upper_identifier] = ACTIONS(318),
    [sym_identifier] = ACTIONS(297),
  },
  [17] = {
    [sym_line_comment] = STATE(21),
    [sym__s_expr] = STATE(21),
    [sym__expr] = STATE(21),
    [sym__literals] = STATE(21),
    [sym__short_helper] = STATE(21),
    [sym_short_ref] = STATE(21),
    [sym_short_copy] = STATE(21),
    [sym_short_fn_ref] = STATE(21),
    [sym_short_quote] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [sym_symbol] = STATE(21),
    [aux_sym_fn_repeat1] = STATE(21),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(272),
    [sym_identifier] = ACTIONS(270),
  },
  [18] = {
    [sym_line_comment] = STATE(25),
    [sym__s_expr] = STATE(25),
    [sym_other_str] = STATE(25),
    [sym_operators] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_let_DASHdo] = ACTIONS(9),
    [anon_sym_while_DASHdo] = ACTIONS(9),
    [anon_sym_defn_DASHdo] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(9),
    [anon_sym_cond] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_case] = ACTIONS(9),
    [anon_sym_foreach] = ACTIONS(9),
    [anon_sym_defdynamic] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_SLASH_EQ] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_and_STAR] = ACTIONS(13),
    [anon_sym_or_STAR] = ACTIONS(13),
  },
  [19] = {
    [sym_line_comment] = STATE(21),
    [sym__s_expr] = STATE(21),
    [sym__expr] = STATE(21),
    [sym__literals] = STATE(21),
    [sym__short_helper] = STATE(21),
    [sym_short_ref] = STATE(21),
    [sym_short_copy] = STATE(21),
    [sym_short_fn_ref] = STATE(21),
    [sym_short_quote] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [sym_symbol] = STATE(21),
    [aux_sym_fn_repeat1] = STATE(21),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(272),
    [sym_identifier] = ACTIONS(270),
  },
  [20] = {
    [sym_line_comment] = STATE(22),
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
    [aux_sym_call_expression_repeat1] = STATE(22),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(329),
    [sym_float_literal] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(331),
    [sym_identifier] = ACTIONS(329),
  },
  [21] = {
    [sym_line_comment] = STATE(21),
    [sym__s_expr] = STATE(21),
    [sym__expr] = STATE(21),
    [sym__literals] = STATE(21),
    [sym__short_helper] = STATE(21),
    [sym_short_ref] = STATE(21),
    [sym_short_copy] = STATE(21),
    [sym_short_fn_ref] = STATE(21),
    [sym_short_quote] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [sym_symbol] = STATE(21),
    [aux_sym_fn_repeat1] = STATE(21),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_AMP] = ACTIONS(344),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [sym_integer_literal] = ACTIONS(356),
    [sym_float_literal] = ACTIONS(356),
    [anon_sym_true] = ACTIONS(359),
    [anon_sym_false] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(365),
    [anon_sym_POUND_DQUOTE] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(374),
    [sym_upper_identifier] = ACTIONS(377),
    [sym_identifier] = ACTIONS(356),
  },
  [22] = {
    [sym_line_comment] = STATE(22),
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
    [aux_sym_call_expression_repeat1] = STATE(22),
    [anon_sym_SEMI] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_AT] = ACTIONS(394),
    [anon_sym_TILDE] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [sym_integer_literal] = ACTIONS(403),
    [sym_float_literal] = ACTIONS(403),
    [anon_sym_true] = ACTIONS(406),
    [anon_sym_false] = ACTIONS(406),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_BSLASH] = ACTIONS(412),
    [anon_sym_POUND_DQUOTE] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(421),
    [sym_upper_identifier] = ACTIONS(424),
    [sym_identifier] = ACTIONS(403),
  },
  [23] = {
    [sym_line_comment] = STATE(21),
    [sym__s_expr] = STATE(21),
    [sym__expr] = STATE(21),
    [sym__literals] = STATE(21),
    [sym__short_helper] = STATE(21),
    [sym_short_ref] = STATE(21),
    [sym_short_copy] = STATE(21),
    [sym_short_fn_ref] = STATE(21),
    [sym_short_quote] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [sym_symbol] = STATE(21),
    [aux_sym_fn_repeat1] = STATE(21),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(272),
    [sym_identifier] = ACTIONS(270),
  },
  [24] = {
    [sym_line_comment] = STATE(20),
    [sym__s_expr] = STATE(20),
    [sym__expr] = STATE(20),
    [sym__literals] = STATE(20),
    [sym__short_helper] = STATE(20),
    [sym_short_ref] = STATE(20),
    [sym_short_copy] = STATE(20),
    [sym_short_fn_ref] = STATE(20),
    [sym_short_quote] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_char_literal] = STATE(20),
    [sym_pattern_literal] = STATE(20),
    [sym_array_expression] = STATE(20),
    [sym_map_expression] = STATE(20),
    [sym_symbol] = STATE(20),
    [aux_sym_call_expression_repeat1] = STATE(20),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(431),
    [sym_float_literal] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(433),
    [sym_identifier] = ACTIONS(431),
  },
  [25] = {
    [sym_line_comment] = STATE(25),
    [sym__s_expr] = STATE(25),
    [sym_other_str] = STATE(25),
    [sym_operators] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_let_DASHdo] = ACTIONS(443),
    [anon_sym_while_DASHdo] = ACTIONS(443),
    [anon_sym_defn_DASHdo] = ACTIONS(443),
    [anon_sym_break] = ACTIONS(443),
    [anon_sym_for] = ACTIONS(446),
    [anon_sym_when] = ACTIONS(443),
    [anon_sym_cond] = ACTIONS(443),
    [anon_sym_unless] = ACTIONS(443),
    [anon_sym_case] = ACTIONS(443),
    [anon_sym_foreach] = ACTIONS(443),
    [anon_sym_defdynamic] = ACTIONS(443),
    [anon_sym_load] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LT_EQ] = ACTIONS(449),
    [anon_sym_GT_EQ] = ACTIONS(449),
    [anon_sym_SLASH_EQ] = ACTIONS(449),
    [anon_sym_and] = ACTIONS(452),
    [anon_sym_or] = ACTIONS(452),
    [anon_sym_not] = ACTIONS(449),
    [anon_sym_and_STAR] = ACTIONS(449),
    [anon_sym_or_STAR] = ACTIONS(449),
  },
  [26] = {
    [sym_line_comment] = STATE(141),
    [sym__s_expr] = STATE(141),
    [sym__expr] = STATE(141),
    [sym__literals] = STATE(141),
    [sym__short_helper] = STATE(141),
    [sym_short_ref] = STATE(141),
    [sym_short_copy] = STATE(141),
    [sym_short_fn_ref] = STATE(141),
    [sym_short_quote] = STATE(141),
    [sym_bool_literal] = STATE(141),
    [sym_str_literal] = STATE(141),
    [sym_char_literal] = STATE(141),
    [sym_pattern_literal] = STATE(141),
    [sym_array_expression] = STATE(141),
    [sym_map_expression] = STATE(141),
    [sym_symbol] = STATE(141),
    [aux_sym_do_repeat1] = STATE(16),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(264),
    [sym_float_literal] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(266),
    [sym_identifier] = ACTIONS(264),
  },
  [27] = {
    [sym_line_comment] = STATE(17),
    [sym__s_expr] = STATE(17),
    [sym__expr] = STATE(17),
    [sym__literals] = STATE(17),
    [sym__short_helper] = STATE(17),
    [sym_short_ref] = STATE(17),
    [sym_short_copy] = STATE(17),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(17),
    [sym_bool_literal] = STATE(17),
    [sym_str_literal] = STATE(17),
    [sym_char_literal] = STATE(17),
    [sym_pattern_literal] = STATE(17),
    [sym_array_expression] = STATE(17),
    [sym_map_expression] = STATE(17),
    [sym_symbol] = STATE(17),
    [aux_sym_fn_repeat1] = STATE(17),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(459),
    [sym_float_literal] = ACTIONS(459),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(461),
    [sym_identifier] = ACTIONS(459),
  },
  [28] = {
    [sym_line_comment] = STATE(19),
    [sym__s_expr] = STATE(19),
    [sym__expr] = STATE(19),
    [sym__literals] = STATE(19),
    [sym__short_helper] = STATE(19),
    [sym_short_ref] = STATE(19),
    [sym_short_copy] = STATE(19),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(19),
    [sym_bool_literal] = STATE(19),
    [sym_str_literal] = STATE(19),
    [sym_char_literal] = STATE(19),
    [sym_pattern_literal] = STATE(19),
    [sym_array_expression] = STATE(19),
    [sym_map_expression] = STATE(19),
    [sym_symbol] = STATE(19),
    [aux_sym_fn_repeat1] = STATE(19),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(465),
    [sym_float_literal] = ACTIONS(465),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(467),
    [sym_identifier] = ACTIONS(465),
  },
  [29] = {
    [sym_line_comment] = STATE(15),
    [sym__s_expr] = STATE(15),
    [sym__expr] = STATE(15),
    [sym__literals] = STATE(15),
    [sym__short_helper] = STATE(15),
    [sym_short_ref] = STATE(15),
    [sym_short_copy] = STATE(15),
    [sym_short_fn_ref] = STATE(15),
    [sym_short_quote] = STATE(15),
    [sym_bool_literal] = STATE(15),
    [sym_str_literal] = STATE(15),
    [sym_char_literal] = STATE(15),
    [sym_pattern_literal] = STATE(15),
    [sym_array_expression] = STATE(15),
    [sym_map_expression] = STATE(15),
    [sym_symbol] = STATE(15),
    [aux_sym_fn_repeat1] = STATE(15),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(471),
    [sym_float_literal] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(473),
    [sym_identifier] = ACTIONS(471),
  },
  [30] = {
    [sym_line_comment] = STATE(304),
    [sym__s_expr] = STATE(304),
    [sym__expr] = STATE(304),
    [sym__literals] = STATE(304),
    [sym__short_helper] = STATE(304),
    [sym_short_ref] = STATE(304),
    [sym_short_copy] = STATE(304),
    [sym_short_fn_ref] = STATE(304),
    [sym_short_quote] = STATE(304),
    [sym_bool_literal] = STATE(304),
    [sym_str_literal] = STATE(304),
    [sym_char_literal] = STATE(304),
    [sym_pattern_literal] = STATE(304),
    [sym_array_expression] = STATE(304),
    [sym_map_expression] = STATE(304),
    [sym_symbol] = STATE(304),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(479),
    [sym_float_literal] = ACTIONS(479),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(481),
    [sym_identifier] = ACTIONS(479),
  },
  [31] = {
    [sym_line_comment] = STATE(306),
    [sym__s_expr] = STATE(306),
    [sym__expr] = STATE(306),
    [sym__literals] = STATE(306),
    [sym__short_helper] = STATE(306),
    [sym_short_ref] = STATE(306),
    [sym_short_copy] = STATE(306),
    [sym_short_fn_ref] = STATE(306),
    [sym_short_quote] = STATE(306),
    [sym_bool_literal] = STATE(306),
    [sym_str_literal] = STATE(306),
    [sym_char_literal] = STATE(306),
    [sym_pattern_literal] = STATE(306),
    [sym_array_expression] = STATE(306),
    [sym_map_expression] = STATE(306),
    [sym_symbol] = STATE(306),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(485),
    [sym_float_literal] = ACTIONS(485),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(487),
    [sym_identifier] = ACTIONS(485),
  },
  [32] = {
    [sym_line_comment] = STATE(309),
    [sym__s_expr] = STATE(309),
    [sym__expr] = STATE(309),
    [sym__literals] = STATE(309),
    [sym__short_helper] = STATE(309),
    [sym_short_ref] = STATE(309),
    [sym_short_copy] = STATE(309),
    [sym_short_fn_ref] = STATE(309),
    [sym_short_quote] = STATE(309),
    [sym_bool_literal] = STATE(309),
    [sym_str_literal] = STATE(309),
    [sym_char_literal] = STATE(309),
    [sym_pattern_literal] = STATE(309),
    [sym_array_expression] = STATE(309),
    [sym_map_expression] = STATE(309),
    [sym_symbol] = STATE(309),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(491),
    [sym_float_literal] = ACTIONS(491),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(493),
    [sym_identifier] = ACTIONS(491),
  },
  [33] = {
    [sym_line_comment] = STATE(290),
    [sym__s_expr] = STATE(290),
    [sym__expr] = STATE(290),
    [sym__literals] = STATE(290),
    [sym__short_helper] = STATE(290),
    [sym_short_ref] = STATE(290),
    [sym_short_copy] = STATE(290),
    [sym_short_fn_ref] = STATE(290),
    [sym_short_quote] = STATE(290),
    [sym_bool_literal] = STATE(290),
    [sym_str_literal] = STATE(290),
    [sym_char_literal] = STATE(290),
    [sym_pattern_literal] = STATE(290),
    [sym_array_expression] = STATE(290),
    [sym_map_expression] = STATE(290),
    [sym_symbol] = STATE(290),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(495),
    [sym_float_literal] = ACTIONS(495),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(497),
    [sym_identifier] = ACTIONS(495),
  },
  [34] = {
    [sym_line_comment] = STATE(268),
    [sym__s_expr] = STATE(268),
    [sym__expr] = STATE(268),
    [sym__literals] = STATE(268),
    [sym__short_helper] = STATE(268),
    [sym_short_ref] = STATE(268),
    [sym_short_copy] = STATE(268),
    [sym_short_fn_ref] = STATE(268),
    [sym_short_quote] = STATE(268),
    [sym_bool_literal] = STATE(268),
    [sym_str_literal] = STATE(268),
    [sym_char_literal] = STATE(268),
    [sym_pattern_literal] = STATE(268),
    [sym_array_expression] = STATE(268),
    [sym_map_expression] = STATE(268),
    [sym_symbol] = STATE(268),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [sym_integer_literal] = ACTIONS(513),
    [sym_float_literal] = ACTIONS(513),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_POUND_DQUOTE] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(525),
    [sym_upper_identifier] = ACTIONS(527),
    [sym_identifier] = ACTIONS(513),
  },
  [35] = {
    [sym_line_comment] = STATE(107),
    [sym__s_expr] = STATE(107),
    [sym__expr] = STATE(107),
    [sym__literals] = STATE(107),
    [sym__short_helper] = STATE(107),
    [sym_short_ref] = STATE(107),
    [sym_short_copy] = STATE(107),
    [sym_short_fn_ref] = STATE(107),
    [sym_short_quote] = STATE(107),
    [sym_bool_literal] = STATE(107),
    [sym_str_literal] = STATE(107),
    [sym_char_literal] = STATE(107),
    [sym_pattern_literal] = STATE(107),
    [sym_array_expression] = STATE(107),
    [sym_map_expression] = STATE(107),
    [sym_symbol] = STATE(107),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(529),
    [sym_float_literal] = ACTIONS(529),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(531),
    [sym_identifier] = ACTIONS(529),
  },
  [36] = {
    [sym_line_comment] = STATE(131),
    [sym__s_expr] = STATE(131),
    [sym__expr] = STATE(131),
    [sym__literals] = STATE(131),
    [sym__short_helper] = STATE(131),
    [sym_short_ref] = STATE(131),
    [sym_short_copy] = STATE(131),
    [sym_short_fn_ref] = STATE(131),
    [sym_short_quote] = STATE(131),
    [sym_bool_literal] = STATE(131),
    [sym_str_literal] = STATE(131),
    [sym_char_literal] = STATE(131),
    [sym_pattern_literal] = STATE(131),
    [sym_array_expression] = STATE(131),
    [sym_map_expression] = STATE(131),
    [sym_symbol] = STATE(131),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(533),
    [sym_float_literal] = ACTIONS(533),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(535),
    [sym_identifier] = ACTIONS(533),
  },
  [37] = {
    [sym_line_comment] = STATE(122),
    [sym__s_expr] = STATE(122),
    [sym__expr] = STATE(122),
    [sym__literals] = STATE(122),
    [sym__short_helper] = STATE(122),
    [sym_short_ref] = STATE(122),
    [sym_short_copy] = STATE(122),
    [sym_short_fn_ref] = STATE(122),
    [sym_short_quote] = STATE(122),
    [sym_bool_literal] = STATE(122),
    [sym_str_literal] = STATE(122),
    [sym_char_literal] = STATE(122),
    [sym_pattern_literal] = STATE(122),
    [sym_array_expression] = STATE(122),
    [sym_map_expression] = STATE(122),
    [sym_symbol] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(537),
    [sym_float_literal] = ACTIONS(537),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(539),
    [sym_identifier] = ACTIONS(537),
  },
  [38] = {
    [sym_line_comment] = STATE(154),
    [sym__s_expr] = STATE(154),
    [sym__expr] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__short_helper] = STATE(154),
    [sym_short_ref] = STATE(154),
    [sym_short_copy] = STATE(154),
    [sym_short_fn_ref] = STATE(154),
    [sym_short_quote] = STATE(154),
    [sym_bool_literal] = STATE(154),
    [sym_str_literal] = STATE(154),
    [sym_char_literal] = STATE(154),
    [sym_pattern_literal] = STATE(154),
    [sym_array_expression] = STATE(154),
    [sym_map_expression] = STATE(154),
    [sym_symbol] = STATE(154),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(541),
    [sym_float_literal] = ACTIONS(541),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(543),
    [sym_identifier] = ACTIONS(541),
  },
  [39] = {
    [sym_line_comment] = STATE(155),
    [sym__s_expr] = STATE(155),
    [sym__expr] = STATE(155),
    [sym__literals] = STATE(155),
    [sym__short_helper] = STATE(155),
    [sym_short_ref] = STATE(155),
    [sym_short_copy] = STATE(155),
    [sym_short_fn_ref] = STATE(155),
    [sym_short_quote] = STATE(155),
    [sym_bool_literal] = STATE(155),
    [sym_str_literal] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_pattern_literal] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_map_expression] = STATE(155),
    [sym_symbol] = STATE(155),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(545),
    [sym_float_literal] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(547),
    [sym_identifier] = ACTIONS(545),
  },
  [40] = {
    [sym_line_comment] = STATE(156),
    [sym__s_expr] = STATE(156),
    [sym__expr] = STATE(156),
    [sym__literals] = STATE(156),
    [sym__short_helper] = STATE(156),
    [sym_short_ref] = STATE(156),
    [sym_short_copy] = STATE(156),
    [sym_short_fn_ref] = STATE(156),
    [sym_short_quote] = STATE(156),
    [sym_bool_literal] = STATE(156),
    [sym_str_literal] = STATE(156),
    [sym_char_literal] = STATE(156),
    [sym_pattern_literal] = STATE(156),
    [sym_array_expression] = STATE(156),
    [sym_map_expression] = STATE(156),
    [sym_symbol] = STATE(156),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(549),
    [sym_float_literal] = ACTIONS(549),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(551),
    [sym_identifier] = ACTIONS(549),
  },
  [41] = {
    [sym_line_comment] = STATE(132),
    [sym__s_expr] = STATE(132),
    [sym__expr] = STATE(132),
    [sym__literals] = STATE(132),
    [sym__short_helper] = STATE(132),
    [sym_short_ref] = STATE(132),
    [sym_short_copy] = STATE(132),
    [sym_short_fn_ref] = STATE(132),
    [sym_short_quote] = STATE(132),
    [sym_bool_literal] = STATE(132),
    [sym_str_literal] = STATE(132),
    [sym_char_literal] = STATE(132),
    [sym_pattern_literal] = STATE(132),
    [sym_array_expression] = STATE(132),
    [sym_map_expression] = STATE(132),
    [sym_symbol] = STATE(132),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(553),
    [sym_float_literal] = ACTIONS(553),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(555),
    [sym_identifier] = ACTIONS(553),
  },
  [42] = {
    [sym_line_comment] = STATE(267),
    [sym__s_expr] = STATE(267),
    [sym__expr] = STATE(267),
    [sym__literals] = STATE(267),
    [sym__short_helper] = STATE(267),
    [sym_short_ref] = STATE(267),
    [sym_short_copy] = STATE(267),
    [sym_short_fn_ref] = STATE(267),
    [sym_short_quote] = STATE(267),
    [sym_bool_literal] = STATE(267),
    [sym_str_literal] = STATE(267),
    [sym_char_literal] = STATE(267),
    [sym_pattern_literal] = STATE(267),
    [sym_array_expression] = STATE(267),
    [sym_map_expression] = STATE(267),
    [sym_symbol] = STATE(267),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [sym_integer_literal] = ACTIONS(557),
    [sym_float_literal] = ACTIONS(557),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_POUND_DQUOTE] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(525),
    [sym_upper_identifier] = ACTIONS(559),
    [sym_identifier] = ACTIONS(557),
  },
  [43] = {
    [sym_line_comment] = STATE(12),
    [sym__s_expr] = STATE(12),
    [sym__expr] = STATE(12),
    [sym__literals] = STATE(12),
    [sym__short_helper] = STATE(12),
    [sym_short_ref] = STATE(12),
    [sym_short_copy] = STATE(12),
    [sym_short_fn_ref] = STATE(12),
    [sym_short_quote] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_pattern_literal] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym_map_expression] = STATE(12),
    [sym_symbol] = STATE(12),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(561),
    [sym_float_literal] = ACTIONS(561),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(563),
    [sym_identifier] = ACTIONS(561),
  },
  [44] = {
    [sym_line_comment] = STATE(132),
    [sym__s_expr] = STATE(132),
    [sym__expr] = STATE(132),
    [sym__literals] = STATE(132),
    [sym__short_helper] = STATE(132),
    [sym_short_ref] = STATE(132),
    [sym_short_copy] = STATE(132),
    [sym_short_fn_ref] = STATE(132),
    [sym_short_quote] = STATE(132),
    [sym_bool_literal] = STATE(132),
    [sym_str_literal] = STATE(132),
    [sym_char_literal] = STATE(132),
    [sym_pattern_literal] = STATE(132),
    [sym_array_expression] = STATE(132),
    [sym_map_expression] = STATE(132),
    [sym_symbol] = STATE(132),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(553),
    [sym_float_literal] = ACTIONS(553),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(555),
    [sym_identifier] = ACTIONS(553),
  },
  [45] = {
    [sym_line_comment] = STATE(156),
    [sym__s_expr] = STATE(156),
    [sym__expr] = STATE(156),
    [sym__literals] = STATE(156),
    [sym__short_helper] = STATE(156),
    [sym_short_ref] = STATE(156),
    [sym_short_copy] = STATE(156),
    [sym_short_fn_ref] = STATE(156),
    [sym_short_quote] = STATE(156),
    [sym_bool_literal] = STATE(156),
    [sym_str_literal] = STATE(156),
    [sym_char_literal] = STATE(156),
    [sym_pattern_literal] = STATE(156),
    [sym_array_expression] = STATE(156),
    [sym_map_expression] = STATE(156),
    [sym_symbol] = STATE(156),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(549),
    [sym_float_literal] = ACTIONS(549),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(551),
    [sym_identifier] = ACTIONS(549),
  },
  [46] = {
    [sym_line_comment] = STATE(155),
    [sym__s_expr] = STATE(155),
    [sym__expr] = STATE(155),
    [sym__literals] = STATE(155),
    [sym__short_helper] = STATE(155),
    [sym_short_ref] = STATE(155),
    [sym_short_copy] = STATE(155),
    [sym_short_fn_ref] = STATE(155),
    [sym_short_quote] = STATE(155),
    [sym_bool_literal] = STATE(155),
    [sym_str_literal] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_pattern_literal] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_map_expression] = STATE(155),
    [sym_symbol] = STATE(155),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(545),
    [sym_float_literal] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(547),
    [sym_identifier] = ACTIONS(545),
  },
  [47] = {
    [sym_line_comment] = STATE(154),
    [sym__s_expr] = STATE(154),
    [sym__expr] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__short_helper] = STATE(154),
    [sym_short_ref] = STATE(154),
    [sym_short_copy] = STATE(154),
    [sym_short_fn_ref] = STATE(154),
    [sym_short_quote] = STATE(154),
    [sym_bool_literal] = STATE(154),
    [sym_str_literal] = STATE(154),
    [sym_char_literal] = STATE(154),
    [sym_pattern_literal] = STATE(154),
    [sym_array_expression] = STATE(154),
    [sym_map_expression] = STATE(154),
    [sym_symbol] = STATE(154),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(541),
    [sym_float_literal] = ACTIONS(541),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(543),
    [sym_identifier] = ACTIONS(541),
  },
  [48] = {
    [sym_line_comment] = STATE(90),
    [sym__s_expr] = STATE(90),
    [sym__expr] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__short_helper] = STATE(90),
    [sym_short_ref] = STATE(90),
    [sym_short_copy] = STATE(90),
    [sym_short_fn_ref] = STATE(90),
    [sym_short_quote] = STATE(90),
    [sym_bool_literal] = STATE(90),
    [sym_str_literal] = STATE(90),
    [sym_char_literal] = STATE(90),
    [sym_pattern_literal] = STATE(90),
    [sym_array_expression] = STATE(90),
    [sym_map_expression] = STATE(90),
    [sym_symbol] = STATE(90),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_integer_literal] = ACTIONS(579),
    [sym_float_literal] = ACTIONS(579),
    [anon_sym_true] = ACTIONS(581),
    [anon_sym_false] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_BSLASH] = ACTIONS(585),
    [anon_sym_POUND_DQUOTE] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_COLON] = ACTIONS(591),
    [sym_upper_identifier] = ACTIONS(593),
    [sym_identifier] = ACTIONS(579),
  },
  [49] = {
    [sym_line_comment] = STATE(91),
    [sym__s_expr] = STATE(91),
    [sym__expr] = STATE(91),
    [sym__literals] = STATE(91),
    [sym__short_helper] = STATE(91),
    [sym_short_ref] = STATE(91),
    [sym_short_copy] = STATE(91),
    [sym_short_fn_ref] = STATE(91),
    [sym_short_quote] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [sym_symbol] = STATE(91),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_integer_literal] = ACTIONS(595),
    [sym_float_literal] = ACTIONS(595),
    [anon_sym_true] = ACTIONS(581),
    [anon_sym_false] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_BSLASH] = ACTIONS(585),
    [anon_sym_POUND_DQUOTE] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_COLON] = ACTIONS(591),
    [sym_upper_identifier] = ACTIONS(597),
    [sym_identifier] = ACTIONS(595),
  },
  [50] = {
    [sym_line_comment] = STATE(92),
    [sym__s_expr] = STATE(92),
    [sym__expr] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__short_helper] = STATE(92),
    [sym_short_ref] = STATE(92),
    [sym_short_copy] = STATE(92),
    [sym_short_fn_ref] = STATE(92),
    [sym_short_quote] = STATE(92),
    [sym_bool_literal] = STATE(92),
    [sym_str_literal] = STATE(92),
    [sym_char_literal] = STATE(92),
    [sym_pattern_literal] = STATE(92),
    [sym_array_expression] = STATE(92),
    [sym_map_expression] = STATE(92),
    [sym_symbol] = STATE(92),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_integer_literal] = ACTIONS(599),
    [sym_float_literal] = ACTIONS(599),
    [anon_sym_true] = ACTIONS(581),
    [anon_sym_false] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_BSLASH] = ACTIONS(585),
    [anon_sym_POUND_DQUOTE] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_COLON] = ACTIONS(591),
    [sym_upper_identifier] = ACTIONS(601),
    [sym_identifier] = ACTIONS(599),
  },
  [51] = {
    [sym_line_comment] = STATE(127),
    [sym__s_expr] = STATE(127),
    [sym__expr] = STATE(127),
    [sym__literals] = STATE(127),
    [sym__short_helper] = STATE(127),
    [sym_short_ref] = STATE(127),
    [sym_short_copy] = STATE(127),
    [sym_short_fn_ref] = STATE(127),
    [sym_short_quote] = STATE(127),
    [sym_bool_literal] = STATE(127),
    [sym_str_literal] = STATE(127),
    [sym_char_literal] = STATE(127),
    [sym_pattern_literal] = STATE(127),
    [sym_array_expression] = STATE(127),
    [sym_map_expression] = STATE(127),
    [sym_symbol] = STATE(127),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(603),
    [sym_float_literal] = ACTIONS(603),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(605),
    [sym_identifier] = ACTIONS(603),
  },
  [52] = {
    [sym_line_comment] = STATE(93),
    [sym__s_expr] = STATE(93),
    [sym__expr] = STATE(93),
    [sym__literals] = STATE(93),
    [sym__short_helper] = STATE(93),
    [sym_short_ref] = STATE(93),
    [sym_short_copy] = STATE(93),
    [sym_short_fn_ref] = STATE(93),
    [sym_short_quote] = STATE(93),
    [sym_bool_literal] = STATE(93),
    [sym_str_literal] = STATE(93),
    [sym_char_literal] = STATE(93),
    [sym_pattern_literal] = STATE(93),
    [sym_array_expression] = STATE(93),
    [sym_map_expression] = STATE(93),
    [sym_symbol] = STATE(93),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_integer_literal] = ACTIONS(607),
    [sym_float_literal] = ACTIONS(607),
    [anon_sym_true] = ACTIONS(581),
    [anon_sym_false] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_BSLASH] = ACTIONS(585),
    [anon_sym_POUND_DQUOTE] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_COLON] = ACTIONS(591),
    [sym_upper_identifier] = ACTIONS(609),
    [sym_identifier] = ACTIONS(607),
  },
  [53] = {
    [sym_line_comment] = STATE(279),
    [sym__s_expr] = STATE(279),
    [sym__expr] = STATE(279),
    [sym__literals] = STATE(279),
    [sym__short_helper] = STATE(279),
    [sym_short_ref] = STATE(279),
    [sym_short_copy] = STATE(279),
    [sym_short_fn_ref] = STATE(279),
    [sym_short_quote] = STATE(279),
    [sym_bool_literal] = STATE(279),
    [sym_str_literal] = STATE(279),
    [sym_char_literal] = STATE(279),
    [sym_pattern_literal] = STATE(279),
    [sym_array_expression] = STATE(279),
    [sym_map_expression] = STATE(279),
    [sym_symbol] = STATE(279),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(611),
    [sym_float_literal] = ACTIONS(611),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(613),
    [sym_identifier] = ACTIONS(611),
  },
  [54] = {
    [sym_line_comment] = STATE(266),
    [sym__s_expr] = STATE(266),
    [sym__expr] = STATE(266),
    [sym__literals] = STATE(266),
    [sym__short_helper] = STATE(266),
    [sym_short_ref] = STATE(266),
    [sym_short_copy] = STATE(266),
    [sym_short_fn_ref] = STATE(266),
    [sym_short_quote] = STATE(266),
    [sym_bool_literal] = STATE(266),
    [sym_str_literal] = STATE(266),
    [sym_char_literal] = STATE(266),
    [sym_pattern_literal] = STATE(266),
    [sym_array_expression] = STATE(266),
    [sym_map_expression] = STATE(266),
    [sym_symbol] = STATE(266),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [sym_integer_literal] = ACTIONS(615),
    [sym_float_literal] = ACTIONS(615),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_POUND_DQUOTE] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(525),
    [sym_upper_identifier] = ACTIONS(617),
    [sym_identifier] = ACTIONS(615),
  },
  [55] = {
    [sym_line_comment] = STATE(252),
    [sym__s_expr] = STATE(252),
    [sym__expr] = STATE(252),
    [sym__literals] = STATE(252),
    [sym__short_helper] = STATE(252),
    [sym_short_ref] = STATE(252),
    [sym_short_copy] = STATE(252),
    [sym_short_fn_ref] = STATE(252),
    [sym_short_quote] = STATE(252),
    [sym_bool_literal] = STATE(252),
    [sym_str_literal] = STATE(252),
    [sym_char_literal] = STATE(252),
    [sym_pattern_literal] = STATE(252),
    [sym_array_expression] = STATE(252),
    [sym_map_expression] = STATE(252),
    [sym_symbol] = STATE(252),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [sym_integer_literal] = ACTIONS(619),
    [sym_float_literal] = ACTIONS(619),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_POUND_DQUOTE] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(525),
    [sym_upper_identifier] = ACTIONS(621),
    [sym_identifier] = ACTIONS(619),
  },
  [56] = {
    [sym_line_comment] = STATE(60),
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
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(623),
    [sym_float_literal] = ACTIONS(623),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(625),
    [sym_identifier] = ACTIONS(623),
  },
  [57] = {
    [sym_line_comment] = STATE(29),
    [sym__s_expr] = STATE(29),
    [sym__expr] = STATE(29),
    [sym__literals] = STATE(29),
    [sym__short_helper] = STATE(29),
    [sym_short_ref] = STATE(29),
    [sym_short_copy] = STATE(29),
    [sym_short_fn_ref] = STATE(29),
    [sym_short_quote] = STATE(29),
    [sym_bool_literal] = STATE(29),
    [sym_str_literal] = STATE(29),
    [sym_char_literal] = STATE(29),
    [sym_pattern_literal] = STATE(29),
    [sym_array_expression] = STATE(29),
    [sym_map_expression] = STATE(29),
    [sym_symbol] = STATE(29),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(627),
    [sym_float_literal] = ACTIONS(627),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(629),
    [sym_identifier] = ACTIONS(627),
  },
  [58] = {
    [sym_line_comment] = STATE(106),
    [sym__s_expr] = STATE(106),
    [sym__expr] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__short_helper] = STATE(106),
    [sym_short_ref] = STATE(106),
    [sym_short_copy] = STATE(106),
    [sym_short_fn_ref] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_char_literal] = STATE(106),
    [sym_pattern_literal] = STATE(106),
    [sym_array_expression] = STATE(106),
    [sym_map_expression] = STATE(106),
    [sym_symbol] = STATE(106),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(631),
    [sym_float_literal] = ACTIONS(631),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(633),
    [sym_identifier] = ACTIONS(631),
  },
  [59] = {
    [sym_line_comment] = STATE(145),
    [sym__s_expr] = STATE(145),
    [sym__expr] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__short_helper] = STATE(145),
    [sym_short_ref] = STATE(145),
    [sym_short_copy] = STATE(145),
    [sym_short_fn_ref] = STATE(145),
    [sym_short_quote] = STATE(145),
    [sym_bool_literal] = STATE(145),
    [sym_str_literal] = STATE(145),
    [sym_char_literal] = STATE(145),
    [sym_pattern_literal] = STATE(145),
    [sym_array_expression] = STATE(145),
    [sym_map_expression] = STATE(145),
    [sym_symbol] = STATE(145),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(635),
    [sym_float_literal] = ACTIONS(635),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(637),
    [sym_identifier] = ACTIONS(635),
  },
  [60] = {
    [sym_line_comment] = STATE(64),
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
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(639),
    [sym_float_literal] = ACTIONS(639),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(641),
    [sym_identifier] = ACTIONS(639),
  },
  [61] = {
    [sym_line_comment] = STATE(269),
    [sym__s_expr] = STATE(269),
    [sym__expr] = STATE(269),
    [sym__literals] = STATE(269),
    [sym__short_helper] = STATE(269),
    [sym_short_ref] = STATE(269),
    [sym_short_copy] = STATE(269),
    [sym_short_fn_ref] = STATE(269),
    [sym_short_quote] = STATE(269),
    [sym_bool_literal] = STATE(269),
    [sym_str_literal] = STATE(269),
    [sym_char_literal] = STATE(269),
    [sym_pattern_literal] = STATE(269),
    [sym_array_expression] = STATE(269),
    [sym_map_expression] = STATE(269),
    [sym_symbol] = STATE(269),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [sym_integer_literal] = ACTIONS(643),
    [sym_float_literal] = ACTIONS(643),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_POUND_DQUOTE] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(525),
    [sym_upper_identifier] = ACTIONS(645),
    [sym_identifier] = ACTIONS(643),
  },
  [62] = {
    [sym_line_comment] = STATE(276),
    [sym__s_expr] = STATE(276),
    [sym__expr] = STATE(276),
    [sym__literals] = STATE(276),
    [sym__short_helper] = STATE(276),
    [sym_short_ref] = STATE(276),
    [sym_short_copy] = STATE(276),
    [sym_short_fn_ref] = STATE(276),
    [sym_short_quote] = STATE(276),
    [sym_bool_literal] = STATE(276),
    [sym_str_literal] = STATE(276),
    [sym_char_literal] = STATE(276),
    [sym_pattern_literal] = STATE(276),
    [sym_array_expression] = STATE(276),
    [sym_map_expression] = STATE(276),
    [sym_symbol] = STATE(276),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(647),
    [sym_float_literal] = ACTIONS(647),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(649),
    [sym_identifier] = ACTIONS(647),
  },
  [63] = {
    [sym_line_comment] = STATE(283),
    [sym__s_expr] = STATE(283),
    [sym__expr] = STATE(283),
    [sym__literals] = STATE(283),
    [sym__short_helper] = STATE(283),
    [sym_short_ref] = STATE(283),
    [sym_short_copy] = STATE(283),
    [sym_short_fn_ref] = STATE(283),
    [sym_short_quote] = STATE(283),
    [sym_bool_literal] = STATE(283),
    [sym_str_literal] = STATE(283),
    [sym_char_literal] = STATE(283),
    [sym_pattern_literal] = STATE(283),
    [sym_array_expression] = STATE(283),
    [sym_map_expression] = STATE(283),
    [sym_symbol] = STATE(283),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(651),
    [sym_float_literal] = ACTIONS(651),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(653),
    [sym_identifier] = ACTIONS(651),
  },
  [64] = {
    [sym_line_comment] = STATE(312),
    [sym__s_expr] = STATE(312),
    [sym__expr] = STATE(312),
    [sym__literals] = STATE(312),
    [sym__short_helper] = STATE(312),
    [sym_short_ref] = STATE(312),
    [sym_short_copy] = STATE(312),
    [sym_short_fn_ref] = STATE(312),
    [sym_short_quote] = STATE(312),
    [sym_bool_literal] = STATE(312),
    [sym_str_literal] = STATE(312),
    [sym_char_literal] = STATE(312),
    [sym_pattern_literal] = STATE(312),
    [sym_array_expression] = STATE(312),
    [sym_map_expression] = STATE(312),
    [sym_symbol] = STATE(312),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(655),
    [sym_float_literal] = ACTIONS(655),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(657),
    [sym_identifier] = ACTIONS(655),
  },
  [65] = {
    [sym_line_comment] = STATE(301),
    [sym__s_expr] = STATE(301),
    [sym__expr] = STATE(301),
    [sym__literals] = STATE(301),
    [sym__short_helper] = STATE(301),
    [sym_short_ref] = STATE(301),
    [sym_short_copy] = STATE(301),
    [sym_short_fn_ref] = STATE(301),
    [sym_short_quote] = STATE(301),
    [sym_bool_literal] = STATE(301),
    [sym_str_literal] = STATE(301),
    [sym_char_literal] = STATE(301),
    [sym_pattern_literal] = STATE(301),
    [sym_array_expression] = STATE(301),
    [sym_map_expression] = STATE(301),
    [sym_symbol] = STATE(301),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(659),
    [sym_float_literal] = ACTIONS(659),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(661),
    [sym_identifier] = ACTIONS(659),
  },
  [66] = {
    [sym__short_helper] = STATE(68),
    [sym_type] = STATE(68),
    [sym_complex_type] = STATE(94),
    [sym_short_ref] = STATE(68),
    [sym_short_copy] = STATE(68),
    [sym_short_fn_ref] = STATE(68),
    [sym_short_quote] = STATE(68),
    [aux_sym_typed_parameters_repeat1] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(665),
    [anon_sym_Bool] = ACTIONS(667),
    [anon_sym_Char] = ACTIONS(667),
    [anon_sym_Int] = ACTIONS(667),
    [anon_sym_Long] = ACTIONS(667),
    [anon_sym_Float] = ACTIONS(667),
    [anon_sym_Double] = ACTIONS(667),
    [anon_sym_Vector2] = ACTIONS(667),
    [anon_sym_Vector3] = ACTIONS(667),
    [anon_sym_VectorN] = ACTIONS(667),
    [anon_sym_String] = ACTIONS(667),
    [anon_sym_Pattern] = ACTIONS(667),
    [anon_sym_Array] = ACTIONS(667),
    [anon_sym_Map] = ACTIONS(667),
    [anon_sym_Maybe] = ACTIONS(667),
    [anon_sym_Result] = ACTIONS(667),
    [anon_sym_Id] = ACTIONS(667),
    [anon_sym_Ptr] = ACTIONS(667),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_identifier] = ACTIONS(669),
  },
  [67] = {
    [sym__short_helper] = STATE(66),
    [sym_type] = STATE(66),
    [sym_complex_type] = STATE(94),
    [sym_short_ref] = STATE(66),
    [sym_short_copy] = STATE(66),
    [sym_short_fn_ref] = STATE(66),
    [sym_short_quote] = STATE(66),
    [aux_sym_typed_parameters_repeat1] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(671),
    [anon_sym_Bool] = ACTIONS(667),
    [anon_sym_Char] = ACTIONS(667),
    [anon_sym_Int] = ACTIONS(667),
    [anon_sym_Long] = ACTIONS(667),
    [anon_sym_Float] = ACTIONS(667),
    [anon_sym_Double] = ACTIONS(667),
    [anon_sym_Vector2] = ACTIONS(667),
    [anon_sym_Vector3] = ACTIONS(667),
    [anon_sym_VectorN] = ACTIONS(667),
    [anon_sym_String] = ACTIONS(667),
    [anon_sym_Pattern] = ACTIONS(667),
    [anon_sym_Array] = ACTIONS(667),
    [anon_sym_Map] = ACTIONS(667),
    [anon_sym_Maybe] = ACTIONS(667),
    [anon_sym_Result] = ACTIONS(667),
    [anon_sym_Id] = ACTIONS(667),
    [anon_sym_Ptr] = ACTIONS(667),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_identifier] = ACTIONS(669),
  },
  [68] = {
    [sym__short_helper] = STATE(68),
    [sym_type] = STATE(68),
    [sym_complex_type] = STATE(94),
    [sym_short_ref] = STATE(68),
    [sym_short_copy] = STATE(68),
    [sym_short_fn_ref] = STATE(68),
    [sym_short_quote] = STATE(68),
    [aux_sym_typed_parameters_repeat1] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(676),
    [anon_sym_Bool] = ACTIONS(678),
    [anon_sym_Char] = ACTIONS(678),
    [anon_sym_Int] = ACTIONS(678),
    [anon_sym_Long] = ACTIONS(678),
    [anon_sym_Float] = ACTIONS(678),
    [anon_sym_Double] = ACTIONS(678),
    [anon_sym_Vector2] = ACTIONS(678),
    [anon_sym_Vector3] = ACTIONS(678),
    [anon_sym_VectorN] = ACTIONS(678),
    [anon_sym_String] = ACTIONS(678),
    [anon_sym_Pattern] = ACTIONS(678),
    [anon_sym_Array] = ACTIONS(678),
    [anon_sym_Map] = ACTIONS(678),
    [anon_sym_Maybe] = ACTIONS(678),
    [anon_sym_Result] = ACTIONS(678),
    [anon_sym_Id] = ACTIONS(678),
    [anon_sym_Ptr] = ACTIONS(678),
    [anon_sym_AMP] = ACTIONS(681),
    [anon_sym_AT] = ACTIONS(684),
    [anon_sym_TILDE] = ACTIONS(687),
    [anon_sym_SQUOTE] = ACTIONS(690),
    [sym_identifier] = ACTIONS(693),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(696),
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_let_DASHdo] = ACTIONS(696),
    [anon_sym_while_DASHdo] = ACTIONS(696),
    [anon_sym_defn_DASHdo] = ACTIONS(696),
    [anon_sym_break] = ACTIONS(696),
    [anon_sym_for] = ACTIONS(698),
    [anon_sym_when] = ACTIONS(696),
    [anon_sym_cond] = ACTIONS(696),
    [anon_sym_unless] = ACTIONS(696),
    [anon_sym_case] = ACTIONS(696),
    [anon_sym_foreach] = ACTIONS(696),
    [anon_sym_defdynamic] = ACTIONS(696),
    [anon_sym_load] = ACTIONS(696),
    [anon_sym_PLUS] = ACTIONS(696),
    [anon_sym_DASH] = ACTIONS(696),
    [anon_sym_SLASH] = ACTIONS(698),
    [anon_sym_STAR] = ACTIONS(696),
    [anon_sym_PERCENT] = ACTIONS(696),
    [anon_sym_LT] = ACTIONS(698),
    [anon_sym_GT] = ACTIONS(698),
    [anon_sym_EQ] = ACTIONS(696),
    [anon_sym_LT_EQ] = ACTIONS(696),
    [anon_sym_GT_EQ] = ACTIONS(696),
    [anon_sym_SLASH_EQ] = ACTIONS(696),
    [anon_sym_and] = ACTIONS(698),
    [anon_sym_or] = ACTIONS(698),
    [anon_sym_not] = ACTIONS(696),
    [anon_sym_and_STAR] = ACTIONS(696),
    [anon_sym_or_STAR] = ACTIONS(696),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(700),
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(700),
    [anon_sym_let_DASHdo] = ACTIONS(700),
    [anon_sym_while_DASHdo] = ACTIONS(700),
    [anon_sym_defn_DASHdo] = ACTIONS(700),
    [anon_sym_break] = ACTIONS(700),
    [anon_sym_for] = ACTIONS(702),
    [anon_sym_when] = ACTIONS(700),
    [anon_sym_cond] = ACTIONS(700),
    [anon_sym_unless] = ACTIONS(700),
    [anon_sym_case] = ACTIONS(700),
    [anon_sym_foreach] = ACTIONS(700),
    [anon_sym_defdynamic] = ACTIONS(700),
    [anon_sym_load] = ACTIONS(700),
    [anon_sym_PLUS] = ACTIONS(700),
    [anon_sym_DASH] = ACTIONS(700),
    [anon_sym_SLASH] = ACTIONS(702),
    [anon_sym_STAR] = ACTIONS(700),
    [anon_sym_PERCENT] = ACTIONS(700),
    [anon_sym_LT] = ACTIONS(702),
    [anon_sym_GT] = ACTIONS(702),
    [anon_sym_EQ] = ACTIONS(700),
    [anon_sym_LT_EQ] = ACTIONS(700),
    [anon_sym_GT_EQ] = ACTIONS(700),
    [anon_sym_SLASH_EQ] = ACTIONS(700),
    [anon_sym_and] = ACTIONS(702),
    [anon_sym_or] = ACTIONS(702),
    [anon_sym_not] = ACTIONS(700),
    [anon_sym_and_STAR] = ACTIONS(700),
    [anon_sym_or_STAR] = ACTIONS(700),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(704),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_let_DASHdo] = ACTIONS(704),
    [anon_sym_while_DASHdo] = ACTIONS(704),
    [anon_sym_defn_DASHdo] = ACTIONS(704),
    [anon_sym_break] = ACTIONS(704),
    [anon_sym_for] = ACTIONS(706),
    [anon_sym_when] = ACTIONS(704),
    [anon_sym_cond] = ACTIONS(704),
    [anon_sym_unless] = ACTIONS(704),
    [anon_sym_case] = ACTIONS(704),
    [anon_sym_foreach] = ACTIONS(704),
    [anon_sym_defdynamic] = ACTIONS(704),
    [anon_sym_load] = ACTIONS(704),
    [anon_sym_PLUS] = ACTIONS(704),
    [anon_sym_DASH] = ACTIONS(704),
    [anon_sym_SLASH] = ACTIONS(706),
    [anon_sym_STAR] = ACTIONS(704),
    [anon_sym_PERCENT] = ACTIONS(704),
    [anon_sym_LT] = ACTIONS(706),
    [anon_sym_GT] = ACTIONS(706),
    [anon_sym_EQ] = ACTIONS(704),
    [anon_sym_LT_EQ] = ACTIONS(704),
    [anon_sym_GT_EQ] = ACTIONS(704),
    [anon_sym_SLASH_EQ] = ACTIONS(704),
    [anon_sym_and] = ACTIONS(706),
    [anon_sym_or] = ACTIONS(706),
    [anon_sym_not] = ACTIONS(704),
    [anon_sym_and_STAR] = ACTIONS(704),
    [anon_sym_or_STAR] = ACTIONS(704),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(708),
    [anon_sym_LPAREN] = ACTIONS(708),
    [anon_sym_let_DASHdo] = ACTIONS(708),
    [anon_sym_while_DASHdo] = ACTIONS(708),
    [anon_sym_defn_DASHdo] = ACTIONS(708),
    [anon_sym_break] = ACTIONS(708),
    [anon_sym_for] = ACTIONS(710),
    [anon_sym_when] = ACTIONS(708),
    [anon_sym_cond] = ACTIONS(708),
    [anon_sym_unless] = ACTIONS(708),
    [anon_sym_case] = ACTIONS(708),
    [anon_sym_foreach] = ACTIONS(708),
    [anon_sym_defdynamic] = ACTIONS(708),
    [anon_sym_load] = ACTIONS(708),
    [anon_sym_PLUS] = ACTIONS(708),
    [anon_sym_DASH] = ACTIONS(708),
    [anon_sym_SLASH] = ACTIONS(710),
    [anon_sym_STAR] = ACTIONS(708),
    [anon_sym_PERCENT] = ACTIONS(708),
    [anon_sym_LT] = ACTIONS(710),
    [anon_sym_GT] = ACTIONS(710),
    [anon_sym_EQ] = ACTIONS(708),
    [anon_sym_LT_EQ] = ACTIONS(708),
    [anon_sym_GT_EQ] = ACTIONS(708),
    [anon_sym_SLASH_EQ] = ACTIONS(708),
    [anon_sym_and] = ACTIONS(710),
    [anon_sym_or] = ACTIONS(710),
    [anon_sym_not] = ACTIONS(708),
    [anon_sym_and_STAR] = ACTIONS(708),
    [anon_sym_or_STAR] = ACTIONS(708),
  },
  [73] = {
    [sym__short_helper] = STATE(32),
    [sym_type] = STATE(32),
    [sym_complex_type] = STATE(146),
    [sym_short_ref] = STATE(32),
    [sym_short_copy] = STATE(32),
    [sym_short_fn_ref] = STATE(32),
    [sym_short_quote] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_Bool] = ACTIONS(714),
    [anon_sym_Char] = ACTIONS(714),
    [anon_sym_Int] = ACTIONS(714),
    [anon_sym_Long] = ACTIONS(714),
    [anon_sym_Float] = ACTIONS(714),
    [anon_sym_Double] = ACTIONS(714),
    [anon_sym_Vector2] = ACTIONS(714),
    [anon_sym_Vector3] = ACTIONS(714),
    [anon_sym_VectorN] = ACTIONS(714),
    [anon_sym_String] = ACTIONS(714),
    [anon_sym_Pattern] = ACTIONS(714),
    [anon_sym_Array] = ACTIONS(714),
    [anon_sym_Map] = ACTIONS(714),
    [anon_sym_Maybe] = ACTIONS(714),
    [anon_sym_Result] = ACTIONS(714),
    [anon_sym_Id] = ACTIONS(714),
    [anon_sym_Ptr] = ACTIONS(714),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_identifier] = ACTIONS(716),
  },
  [74] = {
    [sym__short_helper] = STATE(281),
    [sym_type] = STATE(281),
    [sym_complex_type] = STATE(146),
    [sym_short_ref] = STATE(281),
    [sym_short_copy] = STATE(281),
    [sym_short_fn_ref] = STATE(281),
    [sym_short_quote] = STATE(281),
    [anon_sym_LPAREN] = ACTIONS(718),
    [anon_sym_Bool] = ACTIONS(714),
    [anon_sym_Char] = ACTIONS(714),
    [anon_sym_Int] = ACTIONS(714),
    [anon_sym_Long] = ACTIONS(714),
    [anon_sym_Float] = ACTIONS(714),
    [anon_sym_Double] = ACTIONS(714),
    [anon_sym_Vector2] = ACTIONS(714),
    [anon_sym_Vector3] = ACTIONS(714),
    [anon_sym_VectorN] = ACTIONS(714),
    [anon_sym_String] = ACTIONS(714),
    [anon_sym_Pattern] = ACTIONS(714),
    [anon_sym_Array] = ACTIONS(714),
    [anon_sym_Map] = ACTIONS(714),
    [anon_sym_Maybe] = ACTIONS(714),
    [anon_sym_Result] = ACTIONS(714),
    [anon_sym_Id] = ACTIONS(714),
    [anon_sym_Ptr] = ACTIONS(714),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(716),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(720),
    [anon_sym_RBRACK] = ACTIONS(720),
    [anon_sym_Bool] = ACTIONS(722),
    [anon_sym_Char] = ACTIONS(722),
    [anon_sym_Int] = ACTIONS(722),
    [anon_sym_Long] = ACTIONS(722),
    [anon_sym_Float] = ACTIONS(722),
    [anon_sym_Double] = ACTIONS(722),
    [anon_sym_Vector2] = ACTIONS(722),
    [anon_sym_Vector3] = ACTIONS(722),
    [anon_sym_VectorN] = ACTIONS(722),
    [anon_sym_String] = ACTIONS(722),
    [anon_sym_Pattern] = ACTIONS(722),
    [anon_sym_Array] = ACTIONS(722),
    [anon_sym_Map] = ACTIONS(722),
    [anon_sym_Maybe] = ACTIONS(722),
    [anon_sym_Result] = ACTIONS(722),
    [anon_sym_Id] = ACTIONS(722),
    [anon_sym_Ptr] = ACTIONS(722),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_AMP] = ACTIONS(720),
    [anon_sym_AT] = ACTIONS(720),
    [anon_sym_TILDE] = ACTIONS(720),
    [anon_sym_SQUOTE] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [anon_sym_Bool] = ACTIONS(726),
    [anon_sym_Char] = ACTIONS(726),
    [anon_sym_Int] = ACTIONS(726),
    [anon_sym_Long] = ACTIONS(726),
    [anon_sym_Float] = ACTIONS(726),
    [anon_sym_Double] = ACTIONS(726),
    [anon_sym_Vector2] = ACTIONS(726),
    [anon_sym_Vector3] = ACTIONS(726),
    [anon_sym_VectorN] = ACTIONS(726),
    [anon_sym_String] = ACTIONS(726),
    [anon_sym_Pattern] = ACTIONS(726),
    [anon_sym_Array] = ACTIONS(726),
    [anon_sym_Map] = ACTIONS(726),
    [anon_sym_Maybe] = ACTIONS(726),
    [anon_sym_Result] = ACTIONS(726),
    [anon_sym_Id] = ACTIONS(726),
    [anon_sym_Ptr] = ACTIONS(726),
    [anon_sym_COMMA] = ACTIONS(724),
    [anon_sym_AMP] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_TILDE] = ACTIONS(724),
    [anon_sym_SQUOTE] = ACTIONS(724),
    [sym_identifier] = ACTIONS(726),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(728),
    [anon_sym_RBRACK] = ACTIONS(728),
    [anon_sym_Bool] = ACTIONS(730),
    [anon_sym_Char] = ACTIONS(730),
    [anon_sym_Int] = ACTIONS(730),
    [anon_sym_Long] = ACTIONS(730),
    [anon_sym_Float] = ACTIONS(730),
    [anon_sym_Double] = ACTIONS(730),
    [anon_sym_Vector2] = ACTIONS(730),
    [anon_sym_Vector3] = ACTIONS(730),
    [anon_sym_VectorN] = ACTIONS(730),
    [anon_sym_String] = ACTIONS(730),
    [anon_sym_Pattern] = ACTIONS(730),
    [anon_sym_Array] = ACTIONS(730),
    [anon_sym_Map] = ACTIONS(730),
    [anon_sym_Maybe] = ACTIONS(730),
    [anon_sym_Result] = ACTIONS(730),
    [anon_sym_Id] = ACTIONS(730),
    [anon_sym_Ptr] = ACTIONS(730),
    [anon_sym_AMP] = ACTIONS(728),
    [anon_sym_AT] = ACTIONS(728),
    [anon_sym_TILDE] = ACTIONS(728),
    [anon_sym_SQUOTE] = ACTIONS(728),
    [sym_identifier] = ACTIONS(730),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(732),
    [anon_sym_RBRACK] = ACTIONS(732),
    [anon_sym_Bool] = ACTIONS(734),
    [anon_sym_Char] = ACTIONS(734),
    [anon_sym_Int] = ACTIONS(734),
    [anon_sym_Long] = ACTIONS(734),
    [anon_sym_Float] = ACTIONS(734),
    [anon_sym_Double] = ACTIONS(734),
    [anon_sym_Vector2] = ACTIONS(734),
    [anon_sym_Vector3] = ACTIONS(734),
    [anon_sym_VectorN] = ACTIONS(734),
    [anon_sym_String] = ACTIONS(734),
    [anon_sym_Pattern] = ACTIONS(734),
    [anon_sym_Array] = ACTIONS(734),
    [anon_sym_Map] = ACTIONS(734),
    [anon_sym_Maybe] = ACTIONS(734),
    [anon_sym_Result] = ACTIONS(734),
    [anon_sym_Id] = ACTIONS(734),
    [anon_sym_Ptr] = ACTIONS(734),
    [anon_sym_AMP] = ACTIONS(732),
    [anon_sym_AT] = ACTIONS(732),
    [anon_sym_TILDE] = ACTIONS(732),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [sym_identifier] = ACTIONS(734),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [anon_sym_Bool] = ACTIONS(738),
    [anon_sym_Char] = ACTIONS(738),
    [anon_sym_Int] = ACTIONS(738),
    [anon_sym_Long] = ACTIONS(738),
    [anon_sym_Float] = ACTIONS(738),
    [anon_sym_Double] = ACTIONS(738),
    [anon_sym_Vector2] = ACTIONS(738),
    [anon_sym_Vector3] = ACTIONS(738),
    [anon_sym_VectorN] = ACTIONS(738),
    [anon_sym_String] = ACTIONS(738),
    [anon_sym_Pattern] = ACTIONS(738),
    [anon_sym_Array] = ACTIONS(738),
    [anon_sym_Map] = ACTIONS(738),
    [anon_sym_Maybe] = ACTIONS(738),
    [anon_sym_Result] = ACTIONS(738),
    [anon_sym_Id] = ACTIONS(738),
    [anon_sym_Ptr] = ACTIONS(738),
    [anon_sym_AMP] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_TILDE] = ACTIONS(736),
    [anon_sym_SQUOTE] = ACTIONS(736),
    [sym_identifier] = ACTIONS(738),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_RBRACK] = ACTIONS(740),
    [anon_sym_Bool] = ACTIONS(742),
    [anon_sym_Char] = ACTIONS(742),
    [anon_sym_Int] = ACTIONS(742),
    [anon_sym_Long] = ACTIONS(742),
    [anon_sym_Float] = ACTIONS(742),
    [anon_sym_Double] = ACTIONS(742),
    [anon_sym_Vector2] = ACTIONS(742),
    [anon_sym_Vector3] = ACTIONS(742),
    [anon_sym_VectorN] = ACTIONS(742),
    [anon_sym_String] = ACTIONS(742),
    [anon_sym_Pattern] = ACTIONS(742),
    [anon_sym_Array] = ACTIONS(742),
    [anon_sym_Map] = ACTIONS(742),
    [anon_sym_Maybe] = ACTIONS(742),
    [anon_sym_Result] = ACTIONS(742),
    [anon_sym_Id] = ACTIONS(742),
    [anon_sym_Ptr] = ACTIONS(742),
    [anon_sym_AMP] = ACTIONS(740),
    [anon_sym_AT] = ACTIONS(740),
    [anon_sym_TILDE] = ACTIONS(740),
    [anon_sym_SQUOTE] = ACTIONS(740),
    [sym_identifier] = ACTIONS(742),
  },
  [81] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_RBRACK] = ACTIONS(744),
    [anon_sym_Bool] = ACTIONS(746),
    [anon_sym_Char] = ACTIONS(746),
    [anon_sym_Int] = ACTIONS(746),
    [anon_sym_Long] = ACTIONS(746),
    [anon_sym_Float] = ACTIONS(746),
    [anon_sym_Double] = ACTIONS(746),
    [anon_sym_Vector2] = ACTIONS(746),
    [anon_sym_Vector3] = ACTIONS(746),
    [anon_sym_VectorN] = ACTIONS(746),
    [anon_sym_String] = ACTIONS(746),
    [anon_sym_Pattern] = ACTIONS(746),
    [anon_sym_Array] = ACTIONS(746),
    [anon_sym_Map] = ACTIONS(746),
    [anon_sym_Maybe] = ACTIONS(746),
    [anon_sym_Result] = ACTIONS(746),
    [anon_sym_Id] = ACTIONS(746),
    [anon_sym_Ptr] = ACTIONS(746),
    [anon_sym_AMP] = ACTIONS(744),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_TILDE] = ACTIONS(744),
    [anon_sym_SQUOTE] = ACTIONS(744),
    [sym_identifier] = ACTIONS(746),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_RBRACK] = ACTIONS(748),
    [anon_sym_Bool] = ACTIONS(750),
    [anon_sym_Char] = ACTIONS(750),
    [anon_sym_Int] = ACTIONS(750),
    [anon_sym_Long] = ACTIONS(750),
    [anon_sym_Float] = ACTIONS(750),
    [anon_sym_Double] = ACTIONS(750),
    [anon_sym_Vector2] = ACTIONS(750),
    [anon_sym_Vector3] = ACTIONS(750),
    [anon_sym_VectorN] = ACTIONS(750),
    [anon_sym_String] = ACTIONS(750),
    [anon_sym_Pattern] = ACTIONS(750),
    [anon_sym_Array] = ACTIONS(750),
    [anon_sym_Map] = ACTIONS(750),
    [anon_sym_Maybe] = ACTIONS(750),
    [anon_sym_Result] = ACTIONS(750),
    [anon_sym_Id] = ACTIONS(750),
    [anon_sym_Ptr] = ACTIONS(750),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_TILDE] = ACTIONS(748),
    [anon_sym_SQUOTE] = ACTIONS(748),
    [sym_identifier] = ACTIONS(750),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_RBRACK] = ACTIONS(700),
    [anon_sym_Bool] = ACTIONS(702),
    [anon_sym_Char] = ACTIONS(702),
    [anon_sym_Int] = ACTIONS(702),
    [anon_sym_Long] = ACTIONS(702),
    [anon_sym_Float] = ACTIONS(702),
    [anon_sym_Double] = ACTIONS(702),
    [anon_sym_Vector2] = ACTIONS(702),
    [anon_sym_Vector3] = ACTIONS(702),
    [anon_sym_VectorN] = ACTIONS(702),
    [anon_sym_String] = ACTIONS(702),
    [anon_sym_Pattern] = ACTIONS(702),
    [anon_sym_Array] = ACTIONS(702),
    [anon_sym_Map] = ACTIONS(702),
    [anon_sym_Maybe] = ACTIONS(702),
    [anon_sym_Result] = ACTIONS(702),
    [anon_sym_Id] = ACTIONS(702),
    [anon_sym_Ptr] = ACTIONS(702),
    [anon_sym_AMP] = ACTIONS(700),
    [anon_sym_AT] = ACTIONS(700),
    [anon_sym_TILDE] = ACTIONS(700),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [sym_identifier] = ACTIONS(702),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(752),
    [anon_sym_Bool] = ACTIONS(754),
    [anon_sym_Char] = ACTIONS(754),
    [anon_sym_Int] = ACTIONS(754),
    [anon_sym_Long] = ACTIONS(754),
    [anon_sym_Float] = ACTIONS(754),
    [anon_sym_Double] = ACTIONS(754),
    [anon_sym_Vector2] = ACTIONS(754),
    [anon_sym_Vector3] = ACTIONS(754),
    [anon_sym_VectorN] = ACTIONS(754),
    [anon_sym_String] = ACTIONS(754),
    [anon_sym_Pattern] = ACTIONS(754),
    [anon_sym_Array] = ACTIONS(754),
    [anon_sym_Map] = ACTIONS(754),
    [anon_sym_Maybe] = ACTIONS(754),
    [anon_sym_Result] = ACTIONS(754),
    [anon_sym_Id] = ACTIONS(754),
    [anon_sym_Ptr] = ACTIONS(754),
    [anon_sym_AMP] = ACTIONS(752),
    [anon_sym_AT] = ACTIONS(752),
    [anon_sym_TILDE] = ACTIONS(752),
    [anon_sym_SQUOTE] = ACTIONS(752),
    [sym_identifier] = ACTIONS(754),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_RBRACK] = ACTIONS(756),
    [anon_sym_Bool] = ACTIONS(758),
    [anon_sym_Char] = ACTIONS(758),
    [anon_sym_Int] = ACTIONS(758),
    [anon_sym_Long] = ACTIONS(758),
    [anon_sym_Float] = ACTIONS(758),
    [anon_sym_Double] = ACTIONS(758),
    [anon_sym_Vector2] = ACTIONS(758),
    [anon_sym_Vector3] = ACTIONS(758),
    [anon_sym_VectorN] = ACTIONS(758),
    [anon_sym_String] = ACTIONS(758),
    [anon_sym_Pattern] = ACTIONS(758),
    [anon_sym_Array] = ACTIONS(758),
    [anon_sym_Map] = ACTIONS(758),
    [anon_sym_Maybe] = ACTIONS(758),
    [anon_sym_Result] = ACTIONS(758),
    [anon_sym_Id] = ACTIONS(758),
    [anon_sym_Ptr] = ACTIONS(758),
    [anon_sym_AMP] = ACTIONS(756),
    [anon_sym_AT] = ACTIONS(756),
    [anon_sym_TILDE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [sym_identifier] = ACTIONS(758),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_RBRACK] = ACTIONS(760),
    [anon_sym_Bool] = ACTIONS(762),
    [anon_sym_Char] = ACTIONS(762),
    [anon_sym_Int] = ACTIONS(762),
    [anon_sym_Long] = ACTIONS(762),
    [anon_sym_Float] = ACTIONS(762),
    [anon_sym_Double] = ACTIONS(762),
    [anon_sym_Vector2] = ACTIONS(762),
    [anon_sym_Vector3] = ACTIONS(762),
    [anon_sym_VectorN] = ACTIONS(762),
    [anon_sym_String] = ACTIONS(762),
    [anon_sym_Pattern] = ACTIONS(762),
    [anon_sym_Array] = ACTIONS(762),
    [anon_sym_Map] = ACTIONS(762),
    [anon_sym_Maybe] = ACTIONS(762),
    [anon_sym_Result] = ACTIONS(762),
    [anon_sym_Id] = ACTIONS(762),
    [anon_sym_Ptr] = ACTIONS(762),
    [anon_sym_AMP] = ACTIONS(760),
    [anon_sym_AT] = ACTIONS(760),
    [anon_sym_TILDE] = ACTIONS(760),
    [anon_sym_SQUOTE] = ACTIONS(760),
    [sym_identifier] = ACTIONS(762),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(764),
    [anon_sym_RBRACK] = ACTIONS(764),
    [anon_sym_Bool] = ACTIONS(766),
    [anon_sym_Char] = ACTIONS(766),
    [anon_sym_Int] = ACTIONS(766),
    [anon_sym_Long] = ACTIONS(766),
    [anon_sym_Float] = ACTIONS(766),
    [anon_sym_Double] = ACTIONS(766),
    [anon_sym_Vector2] = ACTIONS(766),
    [anon_sym_Vector3] = ACTIONS(766),
    [anon_sym_VectorN] = ACTIONS(766),
    [anon_sym_String] = ACTIONS(766),
    [anon_sym_Pattern] = ACTIONS(766),
    [anon_sym_Array] = ACTIONS(766),
    [anon_sym_Map] = ACTIONS(766),
    [anon_sym_Maybe] = ACTIONS(766),
    [anon_sym_Result] = ACTIONS(766),
    [anon_sym_Id] = ACTIONS(766),
    [anon_sym_Ptr] = ACTIONS(766),
    [anon_sym_AMP] = ACTIONS(764),
    [anon_sym_AT] = ACTIONS(764),
    [anon_sym_TILDE] = ACTIONS(764),
    [anon_sym_SQUOTE] = ACTIONS(764),
    [sym_identifier] = ACTIONS(766),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_RBRACK] = ACTIONS(696),
    [anon_sym_Bool] = ACTIONS(698),
    [anon_sym_Char] = ACTIONS(698),
    [anon_sym_Int] = ACTIONS(698),
    [anon_sym_Long] = ACTIONS(698),
    [anon_sym_Float] = ACTIONS(698),
    [anon_sym_Double] = ACTIONS(698),
    [anon_sym_Vector2] = ACTIONS(698),
    [anon_sym_Vector3] = ACTIONS(698),
    [anon_sym_VectorN] = ACTIONS(698),
    [anon_sym_String] = ACTIONS(698),
    [anon_sym_Pattern] = ACTIONS(698),
    [anon_sym_Array] = ACTIONS(698),
    [anon_sym_Map] = ACTIONS(698),
    [anon_sym_Maybe] = ACTIONS(698),
    [anon_sym_Result] = ACTIONS(698),
    [anon_sym_Id] = ACTIONS(698),
    [anon_sym_Ptr] = ACTIONS(698),
    [anon_sym_AMP] = ACTIONS(696),
    [anon_sym_AT] = ACTIONS(696),
    [anon_sym_TILDE] = ACTIONS(696),
    [anon_sym_SQUOTE] = ACTIONS(696),
    [sym_identifier] = ACTIONS(698),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(768),
    [anon_sym_RBRACK] = ACTIONS(768),
    [anon_sym_Bool] = ACTIONS(770),
    [anon_sym_Char] = ACTIONS(770),
    [anon_sym_Int] = ACTIONS(770),
    [anon_sym_Long] = ACTIONS(770),
    [anon_sym_Float] = ACTIONS(770),
    [anon_sym_Double] = ACTIONS(770),
    [anon_sym_Vector2] = ACTIONS(770),
    [anon_sym_Vector3] = ACTIONS(770),
    [anon_sym_VectorN] = ACTIONS(770),
    [anon_sym_String] = ACTIONS(770),
    [anon_sym_Pattern] = ACTIONS(770),
    [anon_sym_Array] = ACTIONS(770),
    [anon_sym_Map] = ACTIONS(770),
    [anon_sym_Maybe] = ACTIONS(770),
    [anon_sym_Result] = ACTIONS(770),
    [anon_sym_Id] = ACTIONS(770),
    [anon_sym_Ptr] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(768),
    [anon_sym_AT] = ACTIONS(768),
    [anon_sym_TILDE] = ACTIONS(768),
    [anon_sym_SQUOTE] = ACTIONS(768),
    [sym_identifier] = ACTIONS(770),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(772),
    [anon_sym_Bool] = ACTIONS(774),
    [anon_sym_Char] = ACTIONS(774),
    [anon_sym_Int] = ACTIONS(774),
    [anon_sym_Long] = ACTIONS(774),
    [anon_sym_Float] = ACTIONS(774),
    [anon_sym_Double] = ACTIONS(774),
    [anon_sym_Vector2] = ACTIONS(774),
    [anon_sym_Vector3] = ACTIONS(774),
    [anon_sym_VectorN] = ACTIONS(774),
    [anon_sym_String] = ACTIONS(774),
    [anon_sym_Pattern] = ACTIONS(774),
    [anon_sym_Array] = ACTIONS(774),
    [anon_sym_Map] = ACTIONS(774),
    [anon_sym_Maybe] = ACTIONS(774),
    [anon_sym_Result] = ACTIONS(774),
    [anon_sym_Id] = ACTIONS(774),
    [anon_sym_Ptr] = ACTIONS(774),
    [anon_sym_AMP] = ACTIONS(772),
    [anon_sym_AT] = ACTIONS(772),
    [anon_sym_TILDE] = ACTIONS(772),
    [anon_sym_SQUOTE] = ACTIONS(772),
    [sym_identifier] = ACTIONS(774),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(776),
    [anon_sym_RBRACK] = ACTIONS(776),
    [anon_sym_Bool] = ACTIONS(778),
    [anon_sym_Char] = ACTIONS(778),
    [anon_sym_Int] = ACTIONS(778),
    [anon_sym_Long] = ACTIONS(778),
    [anon_sym_Float] = ACTIONS(778),
    [anon_sym_Double] = ACTIONS(778),
    [anon_sym_Vector2] = ACTIONS(778),
    [anon_sym_Vector3] = ACTIONS(778),
    [anon_sym_VectorN] = ACTIONS(778),
    [anon_sym_String] = ACTIONS(778),
    [anon_sym_Pattern] = ACTIONS(778),
    [anon_sym_Array] = ACTIONS(778),
    [anon_sym_Map] = ACTIONS(778),
    [anon_sym_Maybe] = ACTIONS(778),
    [anon_sym_Result] = ACTIONS(778),
    [anon_sym_Id] = ACTIONS(778),
    [anon_sym_Ptr] = ACTIONS(778),
    [anon_sym_AMP] = ACTIONS(776),
    [anon_sym_AT] = ACTIONS(776),
    [anon_sym_TILDE] = ACTIONS(776),
    [anon_sym_SQUOTE] = ACTIONS(776),
    [sym_identifier] = ACTIONS(778),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_RBRACK] = ACTIONS(780),
    [anon_sym_Bool] = ACTIONS(782),
    [anon_sym_Char] = ACTIONS(782),
    [anon_sym_Int] = ACTIONS(782),
    [anon_sym_Long] = ACTIONS(782),
    [anon_sym_Float] = ACTIONS(782),
    [anon_sym_Double] = ACTIONS(782),
    [anon_sym_Vector2] = ACTIONS(782),
    [anon_sym_Vector3] = ACTIONS(782),
    [anon_sym_VectorN] = ACTIONS(782),
    [anon_sym_String] = ACTIONS(782),
    [anon_sym_Pattern] = ACTIONS(782),
    [anon_sym_Array] = ACTIONS(782),
    [anon_sym_Map] = ACTIONS(782),
    [anon_sym_Maybe] = ACTIONS(782),
    [anon_sym_Result] = ACTIONS(782),
    [anon_sym_Id] = ACTIONS(782),
    [anon_sym_Ptr] = ACTIONS(782),
    [anon_sym_AMP] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
    [anon_sym_TILDE] = ACTIONS(780),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [sym_identifier] = ACTIONS(782),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [anon_sym_Bool] = ACTIONS(786),
    [anon_sym_Char] = ACTIONS(786),
    [anon_sym_Int] = ACTIONS(786),
    [anon_sym_Long] = ACTIONS(786),
    [anon_sym_Float] = ACTIONS(786),
    [anon_sym_Double] = ACTIONS(786),
    [anon_sym_Vector2] = ACTIONS(786),
    [anon_sym_Vector3] = ACTIONS(786),
    [anon_sym_VectorN] = ACTIONS(786),
    [anon_sym_String] = ACTIONS(786),
    [anon_sym_Pattern] = ACTIONS(786),
    [anon_sym_Array] = ACTIONS(786),
    [anon_sym_Map] = ACTIONS(786),
    [anon_sym_Maybe] = ACTIONS(786),
    [anon_sym_Result] = ACTIONS(786),
    [anon_sym_Id] = ACTIONS(786),
    [anon_sym_Ptr] = ACTIONS(786),
    [anon_sym_AMP] = ACTIONS(784),
    [anon_sym_AT] = ACTIONS(784),
    [anon_sym_TILDE] = ACTIONS(784),
    [anon_sym_SQUOTE] = ACTIONS(784),
    [sym_identifier] = ACTIONS(786),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(788),
    [anon_sym_RBRACK] = ACTIONS(788),
    [anon_sym_Bool] = ACTIONS(790),
    [anon_sym_Char] = ACTIONS(790),
    [anon_sym_Int] = ACTIONS(790),
    [anon_sym_Long] = ACTIONS(790),
    [anon_sym_Float] = ACTIONS(790),
    [anon_sym_Double] = ACTIONS(790),
    [anon_sym_Vector2] = ACTIONS(790),
    [anon_sym_Vector3] = ACTIONS(790),
    [anon_sym_VectorN] = ACTIONS(790),
    [anon_sym_String] = ACTIONS(790),
    [anon_sym_Pattern] = ACTIONS(790),
    [anon_sym_Array] = ACTIONS(790),
    [anon_sym_Map] = ACTIONS(790),
    [anon_sym_Maybe] = ACTIONS(790),
    [anon_sym_Result] = ACTIONS(790),
    [anon_sym_Id] = ACTIONS(790),
    [anon_sym_Ptr] = ACTIONS(790),
    [anon_sym_AMP] = ACTIONS(788),
    [anon_sym_AT] = ACTIONS(788),
    [anon_sym_TILDE] = ACTIONS(788),
    [anon_sym_SQUOTE] = ACTIONS(788),
    [sym_identifier] = ACTIONS(790),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(792),
    [anon_sym_RBRACK] = ACTIONS(792),
    [anon_sym_Bool] = ACTIONS(794),
    [anon_sym_Char] = ACTIONS(794),
    [anon_sym_Int] = ACTIONS(794),
    [anon_sym_Long] = ACTIONS(794),
    [anon_sym_Float] = ACTIONS(794),
    [anon_sym_Double] = ACTIONS(794),
    [anon_sym_Vector2] = ACTIONS(794),
    [anon_sym_Vector3] = ACTIONS(794),
    [anon_sym_VectorN] = ACTIONS(794),
    [anon_sym_String] = ACTIONS(794),
    [anon_sym_Pattern] = ACTIONS(794),
    [anon_sym_Array] = ACTIONS(794),
    [anon_sym_Map] = ACTIONS(794),
    [anon_sym_Maybe] = ACTIONS(794),
    [anon_sym_Result] = ACTIONS(794),
    [anon_sym_Id] = ACTIONS(794),
    [anon_sym_Ptr] = ACTIONS(794),
    [anon_sym_AMP] = ACTIONS(792),
    [anon_sym_AT] = ACTIONS(792),
    [anon_sym_TILDE] = ACTIONS(792),
    [anon_sym_SQUOTE] = ACTIONS(792),
    [sym_identifier] = ACTIONS(794),
  },
  [96] = {
    [sym_interface_fn] = STATE(310),
    [aux_sym_complex_type_repeat1] = STATE(111),
    [anon_sym_RPAREN] = ACTIONS(796),
    [anon_sym_Bool] = ACTIONS(798),
    [anon_sym_Char] = ACTIONS(798),
    [anon_sym_Int] = ACTIONS(798),
    [anon_sym_Long] = ACTIONS(798),
    [anon_sym_Float] = ACTIONS(798),
    [anon_sym_Double] = ACTIONS(798),
    [anon_sym_Vector2] = ACTIONS(798),
    [anon_sym_Vector3] = ACTIONS(798),
    [anon_sym_VectorN] = ACTIONS(798),
    [anon_sym_String] = ACTIONS(798),
    [anon_sym_Pattern] = ACTIONS(798),
    [anon_sym_Array] = ACTIONS(798),
    [anon_sym_Map] = ACTIONS(798),
    [anon_sym_Maybe] = ACTIONS(798),
    [anon_sym_Result] = ACTIONS(798),
    [anon_sym_Id] = ACTIONS(798),
    [anon_sym_Ptr] = ACTIONS(798),
    [anon_sym_Fn] = ACTIONS(800),
    [anon_sym_] = ACTIONS(800),
    [sym_identifier] = ACTIONS(802),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(804),
    [anon_sym_Bool] = ACTIONS(806),
    [anon_sym_Char] = ACTIONS(806),
    [anon_sym_Int] = ACTIONS(806),
    [anon_sym_Long] = ACTIONS(806),
    [anon_sym_Float] = ACTIONS(806),
    [anon_sym_Double] = ACTIONS(806),
    [anon_sym_Vector2] = ACTIONS(806),
    [anon_sym_Vector3] = ACTIONS(806),
    [anon_sym_VectorN] = ACTIONS(806),
    [anon_sym_String] = ACTIONS(806),
    [anon_sym_Pattern] = ACTIONS(806),
    [anon_sym_Array] = ACTIONS(806),
    [anon_sym_Map] = ACTIONS(806),
    [anon_sym_Maybe] = ACTIONS(806),
    [anon_sym_Result] = ACTIONS(806),
    [anon_sym_Id] = ACTIONS(806),
    [anon_sym_Ptr] = ACTIONS(806),
    [anon_sym_AMP] = ACTIONS(804),
    [anon_sym_AT] = ACTIONS(804),
    [anon_sym_TILDE] = ACTIONS(804),
    [anon_sym_SQUOTE] = ACTIONS(804),
    [sym_identifier] = ACTIONS(806),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(808),
    [anon_sym_Bool] = ACTIONS(810),
    [anon_sym_Char] = ACTIONS(810),
    [anon_sym_Int] = ACTIONS(810),
    [anon_sym_Long] = ACTIONS(810),
    [anon_sym_Float] = ACTIONS(810),
    [anon_sym_Double] = ACTIONS(810),
    [anon_sym_Vector2] = ACTIONS(810),
    [anon_sym_Vector3] = ACTIONS(810),
    [anon_sym_VectorN] = ACTIONS(810),
    [anon_sym_String] = ACTIONS(810),
    [anon_sym_Pattern] = ACTIONS(810),
    [anon_sym_Array] = ACTIONS(810),
    [anon_sym_Map] = ACTIONS(810),
    [anon_sym_Maybe] = ACTIONS(810),
    [anon_sym_Result] = ACTIONS(810),
    [anon_sym_Id] = ACTIONS(810),
    [anon_sym_Ptr] = ACTIONS(810),
    [anon_sym_AMP] = ACTIONS(808),
    [anon_sym_AT] = ACTIONS(808),
    [anon_sym_TILDE] = ACTIONS(808),
    [anon_sym_SQUOTE] = ACTIONS(808),
    [sym_identifier] = ACTIONS(810),
  },
  [99] = {
    [sym_complex_type] = STATE(102),
    [aux_sym_fields_repeat1] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(812),
    [anon_sym_RBRACK] = ACTIONS(815),
    [anon_sym_Bool] = ACTIONS(817),
    [anon_sym_Char] = ACTIONS(817),
    [anon_sym_Int] = ACTIONS(817),
    [anon_sym_Long] = ACTIONS(817),
    [anon_sym_Float] = ACTIONS(817),
    [anon_sym_Double] = ACTIONS(817),
    [anon_sym_Vector2] = ACTIONS(817),
    [anon_sym_Vector3] = ACTIONS(817),
    [anon_sym_VectorN] = ACTIONS(817),
    [anon_sym_String] = ACTIONS(817),
    [anon_sym_Pattern] = ACTIONS(817),
    [anon_sym_Array] = ACTIONS(817),
    [anon_sym_Map] = ACTIONS(817),
    [anon_sym_Maybe] = ACTIONS(817),
    [anon_sym_Result] = ACTIONS(817),
    [anon_sym_Id] = ACTIONS(817),
    [anon_sym_Ptr] = ACTIONS(817),
    [sym_identifier] = ACTIONS(820),
  },
  [100] = {
    [sym_complex_type] = STATE(102),
    [aux_sym_fields_repeat1] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(823),
    [anon_sym_Bool] = ACTIONS(825),
    [anon_sym_Char] = ACTIONS(825),
    [anon_sym_Int] = ACTIONS(825),
    [anon_sym_Long] = ACTIONS(825),
    [anon_sym_Float] = ACTIONS(825),
    [anon_sym_Double] = ACTIONS(825),
    [anon_sym_Vector2] = ACTIONS(825),
    [anon_sym_Vector3] = ACTIONS(825),
    [anon_sym_VectorN] = ACTIONS(825),
    [anon_sym_String] = ACTIONS(825),
    [anon_sym_Pattern] = ACTIONS(825),
    [anon_sym_Array] = ACTIONS(825),
    [anon_sym_Map] = ACTIONS(825),
    [anon_sym_Maybe] = ACTIONS(825),
    [anon_sym_Result] = ACTIONS(825),
    [anon_sym_Id] = ACTIONS(825),
    [anon_sym_Ptr] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
  },
  [101] = {
    [sym_complex_type] = STATE(102),
    [aux_sym_fields_repeat1] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(829),
    [anon_sym_Bool] = ACTIONS(825),
    [anon_sym_Char] = ACTIONS(825),
    [anon_sym_Int] = ACTIONS(825),
    [anon_sym_Long] = ACTIONS(825),
    [anon_sym_Float] = ACTIONS(825),
    [anon_sym_Double] = ACTIONS(825),
    [anon_sym_Vector2] = ACTIONS(825),
    [anon_sym_Vector3] = ACTIONS(825),
    [anon_sym_VectorN] = ACTIONS(825),
    [anon_sym_String] = ACTIONS(825),
    [anon_sym_Pattern] = ACTIONS(825),
    [anon_sym_Array] = ACTIONS(825),
    [anon_sym_Map] = ACTIONS(825),
    [anon_sym_Maybe] = ACTIONS(825),
    [anon_sym_Result] = ACTIONS(825),
    [anon_sym_Id] = ACTIONS(825),
    [anon_sym_Ptr] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(831),
    [anon_sym_RBRACK] = ACTIONS(831),
    [anon_sym_Bool] = ACTIONS(833),
    [anon_sym_Char] = ACTIONS(833),
    [anon_sym_Int] = ACTIONS(833),
    [anon_sym_Long] = ACTIONS(833),
    [anon_sym_Float] = ACTIONS(833),
    [anon_sym_Double] = ACTIONS(833),
    [anon_sym_Vector2] = ACTIONS(833),
    [anon_sym_Vector3] = ACTIONS(833),
    [anon_sym_VectorN] = ACTIONS(833),
    [anon_sym_String] = ACTIONS(833),
    [anon_sym_Pattern] = ACTIONS(833),
    [anon_sym_Array] = ACTIONS(833),
    [anon_sym_Map] = ACTIONS(833),
    [anon_sym_Maybe] = ACTIONS(833),
    [anon_sym_Result] = ACTIONS(833),
    [anon_sym_Id] = ACTIONS(833),
    [anon_sym_Ptr] = ACTIONS(833),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym_identifier] = ACTIONS(833),
  },
  [103] = {
    [sym_type] = STATE(33),
    [sym_complex_type] = STATE(146),
    [anon_sym_LPAREN] = ACTIONS(718),
    [anon_sym_Bool] = ACTIONS(714),
    [anon_sym_Char] = ACTIONS(714),
    [anon_sym_Int] = ACTIONS(714),
    [anon_sym_Long] = ACTIONS(714),
    [anon_sym_Float] = ACTIONS(714),
    [anon_sym_Double] = ACTIONS(714),
    [anon_sym_Vector2] = ACTIONS(714),
    [anon_sym_Vector3] = ACTIONS(714),
    [anon_sym_VectorN] = ACTIONS(714),
    [anon_sym_String] = ACTIONS(714),
    [anon_sym_Pattern] = ACTIONS(714),
    [anon_sym_Array] = ACTIONS(714),
    [anon_sym_Map] = ACTIONS(714),
    [anon_sym_Maybe] = ACTIONS(714),
    [anon_sym_Result] = ACTIONS(714),
    [anon_sym_Id] = ACTIONS(714),
    [anon_sym_Ptr] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
  },
  [104] = {
    [anon_sym_LPAREN] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [anon_sym_Bool] = ACTIONS(839),
    [anon_sym_Char] = ACTIONS(839),
    [anon_sym_Int] = ACTIONS(839),
    [anon_sym_Long] = ACTIONS(839),
    [anon_sym_Float] = ACTIONS(839),
    [anon_sym_Double] = ACTIONS(839),
    [anon_sym_Vector2] = ACTIONS(839),
    [anon_sym_Vector3] = ACTIONS(839),
    [anon_sym_VectorN] = ACTIONS(839),
    [anon_sym_String] = ACTIONS(839),
    [anon_sym_Pattern] = ACTIONS(839),
    [anon_sym_Array] = ACTIONS(839),
    [anon_sym_Map] = ACTIONS(839),
    [anon_sym_Maybe] = ACTIONS(839),
    [anon_sym_Result] = ACTIONS(839),
    [anon_sym_Id] = ACTIONS(839),
    [anon_sym_Ptr] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(841),
    [sym_identifier] = ACTIONS(839),
  },
  [105] = {
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(700),
    [anon_sym_doc] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_AMP] = ACTIONS(700),
    [anon_sym_AT] = ACTIONS(700),
    [anon_sym_TILDE] = ACTIONS(700),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [sym_integer_literal] = ACTIONS(702),
    [sym_float_literal] = ACTIONS(702),
    [anon_sym_true] = ACTIONS(702),
    [anon_sym_false] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(700),
    [anon_sym_BSLASH] = ACTIONS(700),
    [anon_sym_POUND_DQUOTE] = ACTIONS(700),
    [anon_sym_LBRACE] = ACTIONS(700),
    [anon_sym_COLON] = ACTIONS(700),
    [sym_upper_identifier] = ACTIONS(700),
    [sym_identifier] = ACTIONS(702),
  },
  [106] = {
    [anon_sym_SEMI] = ACTIONS(772),
    [anon_sym_LPAREN] = ACTIONS(772),
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_doc] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(772),
    [anon_sym_AMP] = ACTIONS(772),
    [anon_sym_AT] = ACTIONS(772),
    [anon_sym_TILDE] = ACTIONS(772),
    [anon_sym_SQUOTE] = ACTIONS(772),
    [sym_integer_literal] = ACTIONS(774),
    [sym_float_literal] = ACTIONS(774),
    [anon_sym_true] = ACTIONS(774),
    [anon_sym_false] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(772),
    [anon_sym_BSLASH] = ACTIONS(772),
    [anon_sym_POUND_DQUOTE] = ACTIONS(772),
    [anon_sym_LBRACE] = ACTIONS(772),
    [anon_sym_COLON] = ACTIONS(772),
    [sym_upper_identifier] = ACTIONS(772),
    [sym_identifier] = ACTIONS(774),
  },
  [107] = {
    [anon_sym_SEMI] = ACTIONS(776),
    [anon_sym_LPAREN] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(776),
    [anon_sym_doc] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(776),
    [anon_sym_AMP] = ACTIONS(776),
    [anon_sym_AT] = ACTIONS(776),
    [anon_sym_TILDE] = ACTIONS(776),
    [anon_sym_SQUOTE] = ACTIONS(776),
    [sym_integer_literal] = ACTIONS(778),
    [sym_float_literal] = ACTIONS(778),
    [anon_sym_true] = ACTIONS(778),
    [anon_sym_false] = ACTIONS(778),
    [anon_sym_DQUOTE] = ACTIONS(776),
    [anon_sym_BSLASH] = ACTIONS(776),
    [anon_sym_POUND_DQUOTE] = ACTIONS(776),
    [anon_sym_LBRACE] = ACTIONS(776),
    [anon_sym_COLON] = ACTIONS(776),
    [sym_upper_identifier] = ACTIONS(776),
    [sym_identifier] = ACTIONS(778),
  },
  [108] = {
    [aux_sym_complex_type_repeat1] = STATE(111),
    [anon_sym_RPAREN] = ACTIONS(796),
    [anon_sym_Bool] = ACTIONS(798),
    [anon_sym_Char] = ACTIONS(798),
    [anon_sym_Int] = ACTIONS(798),
    [anon_sym_Long] = ACTIONS(798),
    [anon_sym_Float] = ACTIONS(798),
    [anon_sym_Double] = ACTIONS(798),
    [anon_sym_Vector2] = ACTIONS(798),
    [anon_sym_Vector3] = ACTIONS(798),
    [anon_sym_VectorN] = ACTIONS(798),
    [anon_sym_String] = ACTIONS(798),
    [anon_sym_Pattern] = ACTIONS(798),
    [anon_sym_Array] = ACTIONS(798),
    [anon_sym_Map] = ACTIONS(798),
    [anon_sym_Maybe] = ACTIONS(798),
    [anon_sym_Result] = ACTIONS(798),
    [anon_sym_Id] = ACTIONS(798),
    [anon_sym_Ptr] = ACTIONS(798),
    [sym_identifier] = ACTIONS(802),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(815),
    [anon_sym_RBRACK] = ACTIONS(815),
    [anon_sym_Bool] = ACTIONS(843),
    [anon_sym_Char] = ACTIONS(843),
    [anon_sym_Int] = ACTIONS(843),
    [anon_sym_Long] = ACTIONS(843),
    [anon_sym_Float] = ACTIONS(843),
    [anon_sym_Double] = ACTIONS(843),
    [anon_sym_Vector2] = ACTIONS(843),
    [anon_sym_Vector3] = ACTIONS(843),
    [anon_sym_VectorN] = ACTIONS(843),
    [anon_sym_String] = ACTIONS(843),
    [anon_sym_Pattern] = ACTIONS(843),
    [anon_sym_Array] = ACTIONS(843),
    [anon_sym_Map] = ACTIONS(843),
    [anon_sym_Maybe] = ACTIONS(843),
    [anon_sym_Result] = ACTIONS(843),
    [anon_sym_Id] = ACTIONS(843),
    [anon_sym_Ptr] = ACTIONS(843),
    [sym_identifier] = ACTIONS(843),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(845),
    [anon_sym_RBRACK] = ACTIONS(845),
    [anon_sym_Bool] = ACTIONS(847),
    [anon_sym_Char] = ACTIONS(847),
    [anon_sym_Int] = ACTIONS(847),
    [anon_sym_Long] = ACTIONS(847),
    [anon_sym_Float] = ACTIONS(847),
    [anon_sym_Double] = ACTIONS(847),
    [anon_sym_Vector2] = ACTIONS(847),
    [anon_sym_Vector3] = ACTIONS(847),
    [anon_sym_VectorN] = ACTIONS(847),
    [anon_sym_String] = ACTIONS(847),
    [anon_sym_Pattern] = ACTIONS(847),
    [anon_sym_Array] = ACTIONS(847),
    [anon_sym_Map] = ACTIONS(847),
    [anon_sym_Maybe] = ACTIONS(847),
    [anon_sym_Result] = ACTIONS(847),
    [anon_sym_Id] = ACTIONS(847),
    [anon_sym_Ptr] = ACTIONS(847),
    [sym_identifier] = ACTIONS(847),
  },
  [111] = {
    [aux_sym_complex_type_repeat1] = STATE(129),
    [anon_sym_RPAREN] = ACTIONS(849),
    [anon_sym_Bool] = ACTIONS(798),
    [anon_sym_Char] = ACTIONS(798),
    [anon_sym_Int] = ACTIONS(798),
    [anon_sym_Long] = ACTIONS(798),
    [anon_sym_Float] = ACTIONS(798),
    [anon_sym_Double] = ACTIONS(798),
    [anon_sym_Vector2] = ACTIONS(798),
    [anon_sym_Vector3] = ACTIONS(798),
    [anon_sym_VectorN] = ACTIONS(798),
    [anon_sym_String] = ACTIONS(798),
    [anon_sym_Pattern] = ACTIONS(798),
    [anon_sym_Array] = ACTIONS(798),
    [anon_sym_Map] = ACTIONS(798),
    [anon_sym_Maybe] = ACTIONS(798),
    [anon_sym_Result] = ACTIONS(798),
    [anon_sym_Id] = ACTIONS(798),
    [anon_sym_Ptr] = ACTIONS(798),
    [sym_identifier] = ACTIONS(851),
  },
  [112] = {
    [anon_sym_SEMI] = ACTIONS(728),
    [anon_sym_LPAREN] = ACTIONS(728),
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_doc] = ACTIONS(730),
    [anon_sym_LBRACK] = ACTIONS(728),
    [anon_sym_AMP] = ACTIONS(728),
    [anon_sym_AT] = ACTIONS(728),
    [anon_sym_TILDE] = ACTIONS(728),
    [anon_sym_SQUOTE] = ACTIONS(728),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(730),
    [anon_sym_false] = ACTIONS(730),
    [anon_sym_DQUOTE] = ACTIONS(728),
    [anon_sym_BSLASH] = ACTIONS(728),
    [anon_sym_POUND_DQUOTE] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(728),
    [anon_sym_COLON] = ACTIONS(728),
    [sym_upper_identifier] = ACTIONS(728),
    [sym_identifier] = ACTIONS(730),
  },
  [113] = {
    [aux_sym_complex_type_repeat1] = STATE(129),
    [anon_sym_RPAREN] = ACTIONS(853),
    [anon_sym_Bool] = ACTIONS(798),
    [anon_sym_Char] = ACTIONS(798),
    [anon_sym_Int] = ACTIONS(798),
    [anon_sym_Long] = ACTIONS(798),
    [anon_sym_Float] = ACTIONS(798),
    [anon_sym_Double] = ACTIONS(798),
    [anon_sym_Vector2] = ACTIONS(798),
    [anon_sym_Vector3] = ACTIONS(798),
    [anon_sym_VectorN] = ACTIONS(798),
    [anon_sym_String] = ACTIONS(798),
    [anon_sym_Pattern] = ACTIONS(798),
    [anon_sym_Array] = ACTIONS(798),
    [anon_sym_Map] = ACTIONS(798),
    [anon_sym_Maybe] = ACTIONS(798),
    [anon_sym_Result] = ACTIONS(798),
    [anon_sym_Id] = ACTIONS(798),
    [anon_sym_Ptr] = ACTIONS(798),
    [sym_identifier] = ACTIONS(851),
  },
  [114] = {
    [anon_sym_SEMI] = ACTIONS(696),
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_doc] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(696),
    [anon_sym_AMP] = ACTIONS(696),
    [anon_sym_AT] = ACTIONS(696),
    [anon_sym_TILDE] = ACTIONS(696),
    [anon_sym_SQUOTE] = ACTIONS(696),
    [sym_integer_literal] = ACTIONS(698),
    [sym_float_literal] = ACTIONS(698),
    [anon_sym_true] = ACTIONS(698),
    [anon_sym_false] = ACTIONS(698),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [anon_sym_BSLASH] = ACTIONS(696),
    [anon_sym_POUND_DQUOTE] = ACTIONS(696),
    [anon_sym_LBRACE] = ACTIONS(696),
    [anon_sym_COLON] = ACTIONS(696),
    [sym_upper_identifier] = ACTIONS(696),
    [sym_identifier] = ACTIONS(698),
  },
  [115] = {
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_LPAREN] = ACTIONS(764),
    [anon_sym_RPAREN] = ACTIONS(764),
    [anon_sym_doc] = ACTIONS(766),
    [anon_sym_LBRACK] = ACTIONS(764),
    [anon_sym_AMP] = ACTIONS(764),
    [anon_sym_AT] = ACTIONS(764),
    [anon_sym_TILDE] = ACTIONS(764),
    [anon_sym_SQUOTE] = ACTIONS(764),
    [sym_integer_literal] = ACTIONS(766),
    [sym_float_literal] = ACTIONS(766),
    [anon_sym_true] = ACTIONS(766),
    [anon_sym_false] = ACTIONS(766),
    [anon_sym_DQUOTE] = ACTIONS(764),
    [anon_sym_BSLASH] = ACTIONS(764),
    [anon_sym_POUND_DQUOTE] = ACTIONS(764),
    [anon_sym_LBRACE] = ACTIONS(764),
    [anon_sym_COLON] = ACTIONS(764),
    [sym_upper_identifier] = ACTIONS(764),
    [sym_identifier] = ACTIONS(766),
  },
  [116] = {
    [anon_sym_SEMI] = ACTIONS(760),
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_RPAREN] = ACTIONS(760),
    [anon_sym_doc] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_AMP] = ACTIONS(760),
    [anon_sym_AT] = ACTIONS(760),
    [anon_sym_TILDE] = ACTIONS(760),
    [anon_sym_SQUOTE] = ACTIONS(760),
    [sym_integer_literal] = ACTIONS(762),
    [sym_float_literal] = ACTIONS(762),
    [anon_sym_true] = ACTIONS(762),
    [anon_sym_false] = ACTIONS(762),
    [anon_sym_DQUOTE] = ACTIONS(760),
    [anon_sym_BSLASH] = ACTIONS(760),
    [anon_sym_POUND_DQUOTE] = ACTIONS(760),
    [anon_sym_LBRACE] = ACTIONS(760),
    [anon_sym_COLON] = ACTIONS(760),
    [sym_upper_identifier] = ACTIONS(760),
    [sym_identifier] = ACTIONS(762),
  },
  [117] = {
    [anon_sym_SEMI] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(855),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_doc] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_AMP] = ACTIONS(855),
    [anon_sym_AT] = ACTIONS(855),
    [anon_sym_TILDE] = ACTIONS(855),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [sym_integer_literal] = ACTIONS(857),
    [sym_float_literal] = ACTIONS(857),
    [anon_sym_true] = ACTIONS(857),
    [anon_sym_false] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [anon_sym_BSLASH] = ACTIONS(855),
    [anon_sym_POUND_DQUOTE] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(855),
    [sym_upper_identifier] = ACTIONS(855),
    [sym_identifier] = ACTIONS(857),
  },
  [118] = {
    [anon_sym_SEMI] = ACTIONS(748),
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_RPAREN] = ACTIONS(748),
    [anon_sym_doc] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_TILDE] = ACTIONS(748),
    [anon_sym_SQUOTE] = ACTIONS(748),
    [sym_integer_literal] = ACTIONS(750),
    [sym_float_literal] = ACTIONS(750),
    [anon_sym_true] = ACTIONS(750),
    [anon_sym_false] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(748),
    [anon_sym_BSLASH] = ACTIONS(748),
    [anon_sym_POUND_DQUOTE] = ACTIONS(748),
    [anon_sym_LBRACE] = ACTIONS(748),
    [anon_sym_COLON] = ACTIONS(748),
    [sym_upper_identifier] = ACTIONS(748),
    [sym_identifier] = ACTIONS(750),
  },
  [119] = {
    [aux_sym_complex_type_repeat1] = STATE(113),
    [anon_sym_RPAREN] = ACTIONS(859),
    [anon_sym_Bool] = ACTIONS(798),
    [anon_sym_Char] = ACTIONS(798),
    [anon_sym_Int] = ACTIONS(798),
    [anon_sym_Long] = ACTIONS(798),
    [anon_sym_Float] = ACTIONS(798),
    [anon_sym_Double] = ACTIONS(798),
    [anon_sym_Vector2] = ACTIONS(798),
    [anon_sym_Vector3] = ACTIONS(798),
    [anon_sym_VectorN] = ACTIONS(798),
    [anon_sym_String] = ACTIONS(798),
    [anon_sym_Pattern] = ACTIONS(798),
    [anon_sym_Array] = ACTIONS(798),
    [anon_sym_Map] = ACTIONS(798),
    [anon_sym_Maybe] = ACTIONS(798),
    [anon_sym_Result] = ACTIONS(798),
    [anon_sym_Id] = ACTIONS(798),
    [anon_sym_Ptr] = ACTIONS(798),
    [sym_identifier] = ACTIONS(861),
  },
  [120] = {
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_doc] = ACTIONS(758),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_AMP] = ACTIONS(756),
    [anon_sym_AT] = ACTIONS(756),
    [anon_sym_TILDE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [sym_integer_literal] = ACTIONS(758),
    [sym_float_literal] = ACTIONS(758),
    [anon_sym_true] = ACTIONS(758),
    [anon_sym_false] = ACTIONS(758),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [sym_upper_identifier] = ACTIONS(756),
    [sym_identifier] = ACTIONS(758),
  },
  [121] = {
    [anon_sym_SEMI] = ACTIONS(752),
    [anon_sym_LPAREN] = ACTIONS(752),
    [anon_sym_RPAREN] = ACTIONS(752),
    [anon_sym_doc] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(752),
    [anon_sym_AMP] = ACTIONS(752),
    [anon_sym_AT] = ACTIONS(752),
    [anon_sym_TILDE] = ACTIONS(752),
    [anon_sym_SQUOTE] = ACTIONS(752),
    [sym_integer_literal] = ACTIONS(754),
    [sym_float_literal] = ACTIONS(754),
    [anon_sym_true] = ACTIONS(754),
    [anon_sym_false] = ACTIONS(754),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [anon_sym_BSLASH] = ACTIONS(752),
    [anon_sym_POUND_DQUOTE] = ACTIONS(752),
    [anon_sym_LBRACE] = ACTIONS(752),
    [anon_sym_COLON] = ACTIONS(752),
    [sym_upper_identifier] = ACTIONS(752),
    [sym_identifier] = ACTIONS(754),
  },
  [122] = {
    [anon_sym_SEMI] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_doc] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_AMP] = ACTIONS(784),
    [anon_sym_AT] = ACTIONS(784),
    [anon_sym_TILDE] = ACTIONS(784),
    [anon_sym_SQUOTE] = ACTIONS(784),
    [sym_integer_literal] = ACTIONS(786),
    [sym_float_literal] = ACTIONS(786),
    [anon_sym_true] = ACTIONS(786),
    [anon_sym_false] = ACTIONS(786),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [anon_sym_BSLASH] = ACTIONS(784),
    [anon_sym_POUND_DQUOTE] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [sym_upper_identifier] = ACTIONS(784),
    [sym_identifier] = ACTIONS(786),
  },
  [123] = {
    [anon_sym_SEMI] = ACTIONS(740),
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [anon_sym_doc] = ACTIONS(742),
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_AMP] = ACTIONS(740),
    [anon_sym_AT] = ACTIONS(740),
    [anon_sym_TILDE] = ACTIONS(740),
    [anon_sym_SQUOTE] = ACTIONS(740),
    [sym_integer_literal] = ACTIONS(742),
    [sym_float_literal] = ACTIONS(742),
    [anon_sym_true] = ACTIONS(742),
    [anon_sym_false] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_BSLASH] = ACTIONS(740),
    [anon_sym_POUND_DQUOTE] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [anon_sym_COLON] = ACTIONS(740),
    [sym_upper_identifier] = ACTIONS(740),
    [sym_identifier] = ACTIONS(742),
  },
  [124] = {
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_RPAREN] = ACTIONS(736),
    [anon_sym_doc] = ACTIONS(738),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_AMP] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_TILDE] = ACTIONS(736),
    [anon_sym_SQUOTE] = ACTIONS(736),
    [sym_integer_literal] = ACTIONS(738),
    [sym_float_literal] = ACTIONS(738),
    [anon_sym_true] = ACTIONS(738),
    [anon_sym_false] = ACTIONS(738),
    [anon_sym_DQUOTE] = ACTIONS(736),
    [anon_sym_BSLASH] = ACTIONS(736),
    [anon_sym_POUND_DQUOTE] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [anon_sym_COLON] = ACTIONS(736),
    [sym_upper_identifier] = ACTIONS(736),
    [sym_identifier] = ACTIONS(738),
  },
  [125] = {
    [anon_sym_SEMI] = ACTIONS(744),
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(744),
    [anon_sym_doc] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(744),
    [anon_sym_AMP] = ACTIONS(744),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_TILDE] = ACTIONS(744),
    [anon_sym_SQUOTE] = ACTIONS(744),
    [sym_integer_literal] = ACTIONS(746),
    [sym_float_literal] = ACTIONS(746),
    [anon_sym_true] = ACTIONS(746),
    [anon_sym_false] = ACTIONS(746),
    [anon_sym_DQUOTE] = ACTIONS(744),
    [anon_sym_BSLASH] = ACTIONS(744),
    [anon_sym_POUND_DQUOTE] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(744),
    [anon_sym_COLON] = ACTIONS(744),
    [sym_upper_identifier] = ACTIONS(744),
    [sym_identifier] = ACTIONS(746),
  },
  [126] = {
    [anon_sym_SEMI] = ACTIONS(732),
    [anon_sym_LPAREN] = ACTIONS(732),
    [anon_sym_RPAREN] = ACTIONS(732),
    [anon_sym_doc] = ACTIONS(734),
    [anon_sym_LBRACK] = ACTIONS(732),
    [anon_sym_AMP] = ACTIONS(732),
    [anon_sym_AT] = ACTIONS(732),
    [anon_sym_TILDE] = ACTIONS(732),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [sym_integer_literal] = ACTIONS(734),
    [sym_float_literal] = ACTIONS(734),
    [anon_sym_true] = ACTIONS(734),
    [anon_sym_false] = ACTIONS(734),
    [anon_sym_DQUOTE] = ACTIONS(732),
    [anon_sym_BSLASH] = ACTIONS(732),
    [anon_sym_POUND_DQUOTE] = ACTIONS(732),
    [anon_sym_LBRACE] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(732),
    [sym_upper_identifier] = ACTIONS(732),
    [sym_identifier] = ACTIONS(734),
  },
  [127] = {
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(863),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_doc] = ACTIONS(865),
    [anon_sym_LBRACK] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
    [anon_sym_AT] = ACTIONS(863),
    [anon_sym_TILDE] = ACTIONS(863),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [sym_integer_literal] = ACTIONS(865),
    [sym_float_literal] = ACTIONS(865),
    [anon_sym_true] = ACTIONS(865),
    [anon_sym_false] = ACTIONS(865),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [anon_sym_BSLASH] = ACTIONS(863),
    [anon_sym_POUND_DQUOTE] = ACTIONS(863),
    [anon_sym_LBRACE] = ACTIONS(863),
    [anon_sym_COLON] = ACTIONS(863),
    [sym_upper_identifier] = ACTIONS(863),
    [sym_identifier] = ACTIONS(865),
  },
  [128] = {
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_LPAREN] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(768),
    [anon_sym_doc] = ACTIONS(770),
    [anon_sym_LBRACK] = ACTIONS(768),
    [anon_sym_AMP] = ACTIONS(768),
    [anon_sym_AT] = ACTIONS(768),
    [anon_sym_TILDE] = ACTIONS(768),
    [anon_sym_SQUOTE] = ACTIONS(768),
    [sym_integer_literal] = ACTIONS(770),
    [sym_float_literal] = ACTIONS(770),
    [anon_sym_true] = ACTIONS(770),
    [anon_sym_false] = ACTIONS(770),
    [anon_sym_DQUOTE] = ACTIONS(768),
    [anon_sym_BSLASH] = ACTIONS(768),
    [anon_sym_POUND_DQUOTE] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(768),
    [sym_upper_identifier] = ACTIONS(768),
    [sym_identifier] = ACTIONS(770),
  },
  [129] = {
    [aux_sym_complex_type_repeat1] = STATE(129),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_Bool] = ACTIONS(869),
    [anon_sym_Char] = ACTIONS(869),
    [anon_sym_Int] = ACTIONS(869),
    [anon_sym_Long] = ACTIONS(869),
    [anon_sym_Float] = ACTIONS(869),
    [anon_sym_Double] = ACTIONS(869),
    [anon_sym_Vector2] = ACTIONS(869),
    [anon_sym_Vector3] = ACTIONS(869),
    [anon_sym_VectorN] = ACTIONS(869),
    [anon_sym_String] = ACTIONS(869),
    [anon_sym_Pattern] = ACTIONS(869),
    [anon_sym_Array] = ACTIONS(869),
    [anon_sym_Map] = ACTIONS(869),
    [anon_sym_Maybe] = ACTIONS(869),
    [anon_sym_Result] = ACTIONS(869),
    [anon_sym_Id] = ACTIONS(869),
    [anon_sym_Ptr] = ACTIONS(869),
    [sym_identifier] = ACTIONS(872),
  },
  [130] = {
    [anon_sym_SEMI] = ACTIONS(875),
    [anon_sym_LPAREN] = ACTIONS(875),
    [anon_sym_RPAREN] = ACTIONS(875),
    [anon_sym_LBRACK] = ACTIONS(875),
    [anon_sym_DOT] = ACTIONS(877),
    [anon_sym_AMP] = ACTIONS(875),
    [anon_sym_AT] = ACTIONS(875),
    [anon_sym_TILDE] = ACTIONS(875),
    [anon_sym_SQUOTE] = ACTIONS(875),
    [sym_integer_literal] = ACTIONS(879),
    [sym_float_literal] = ACTIONS(879),
    [anon_sym_true] = ACTIONS(879),
    [anon_sym_false] = ACTIONS(879),
    [anon_sym_DQUOTE] = ACTIONS(875),
    [anon_sym_BSLASH] = ACTIONS(875),
    [anon_sym_POUND_DQUOTE] = ACTIONS(875),
    [anon_sym_LBRACE] = ACTIONS(875),
    [anon_sym_COLON] = ACTIONS(875),
    [sym_upper_identifier] = ACTIONS(875),
    [sym_identifier] = ACTIONS(879),
  },
  [131] = {
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_doc] = ACTIONS(782),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_AMP] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
    [anon_sym_TILDE] = ACTIONS(780),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [sym_integer_literal] = ACTIONS(782),
    [sym_float_literal] = ACTIONS(782),
    [anon_sym_true] = ACTIONS(782),
    [anon_sym_false] = ACTIONS(782),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [anon_sym_BSLASH] = ACTIONS(780),
    [anon_sym_POUND_DQUOTE] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [sym_upper_identifier] = ACTIONS(780),
    [sym_identifier] = ACTIONS(782),
  },
  [132] = {
    [anon_sym_SEMI] = ACTIONS(772),
    [anon_sym_LPAREN] = ACTIONS(772),
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_LBRACK] = ACTIONS(772),
    [anon_sym_AMP] = ACTIONS(772),
    [anon_sym_AT] = ACTIONS(772),
    [anon_sym_TILDE] = ACTIONS(772),
    [anon_sym_SQUOTE] = ACTIONS(772),
    [sym_integer_literal] = ACTIONS(774),
    [sym_float_literal] = ACTIONS(774),
    [anon_sym_true] = ACTIONS(774),
    [anon_sym_false] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(772),
    [anon_sym_BSLASH] = ACTIONS(772),
    [anon_sym_POUND_DQUOTE] = ACTIONS(772),
    [anon_sym_LBRACE] = ACTIONS(772),
    [anon_sym_COLON] = ACTIONS(772),
    [sym_upper_identifier] = ACTIONS(772),
    [sym_identifier] = ACTIONS(774),
  },
  [133] = {
    [anon_sym_SEMI] = ACTIONS(881),
    [anon_sym_LPAREN] = ACTIONS(881),
    [anon_sym_RPAREN] = ACTIONS(881),
    [anon_sym_LBRACK] = ACTIONS(881),
    [anon_sym_AMP] = ACTIONS(881),
    [anon_sym_AT] = ACTIONS(881),
    [anon_sym_TILDE] = ACTIONS(881),
    [anon_sym_SQUOTE] = ACTIONS(881),
    [sym_integer_literal] = ACTIONS(883),
    [sym_float_literal] = ACTIONS(883),
    [anon_sym_true] = ACTIONS(883),
    [anon_sym_false] = ACTIONS(883),
    [anon_sym_DQUOTE] = ACTIONS(881),
    [anon_sym_BSLASH] = ACTIONS(881),
    [anon_sym_POUND_DQUOTE] = ACTIONS(881),
    [anon_sym_LBRACE] = ACTIONS(881),
    [anon_sym_COLON] = ACTIONS(881),
    [sym_upper_identifier] = ACTIONS(881),
    [sym_identifier] = ACTIONS(883),
  },
  [134] = {
    [anon_sym_SEMI] = ACTIONS(875),
    [anon_sym_LPAREN] = ACTIONS(875),
    [anon_sym_RPAREN] = ACTIONS(875),
    [anon_sym_LBRACK] = ACTIONS(875),
    [anon_sym_AMP] = ACTIONS(875),
    [anon_sym_AT] = ACTIONS(875),
    [anon_sym_TILDE] = ACTIONS(875),
    [anon_sym_SQUOTE] = ACTIONS(875),
    [sym_integer_literal] = ACTIONS(879),
    [sym_float_literal] = ACTIONS(879),
    [anon_sym_true] = ACTIONS(879),
    [anon_sym_false] = ACTIONS(879),
    [anon_sym_DQUOTE] = ACTIONS(875),
    [anon_sym_BSLASH] = ACTIONS(875),
    [anon_sym_POUND_DQUOTE] = ACTIONS(875),
    [anon_sym_LBRACE] = ACTIONS(875),
    [anon_sym_COLON] = ACTIONS(875),
    [sym_upper_identifier] = ACTIONS(875),
    [sym_identifier] = ACTIONS(879),
  },
  [135] = {
    [anon_sym_SEMI] = ACTIONS(885),
    [anon_sym_LPAREN] = ACTIONS(885),
    [anon_sym_RPAREN] = ACTIONS(885),
    [anon_sym_LBRACK] = ACTIONS(885),
    [anon_sym_AMP] = ACTIONS(885),
    [anon_sym_AT] = ACTIONS(885),
    [anon_sym_TILDE] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(885),
    [sym_integer_literal] = ACTIONS(887),
    [sym_float_literal] = ACTIONS(887),
    [anon_sym_true] = ACTIONS(887),
    [anon_sym_false] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(885),
    [anon_sym_BSLASH] = ACTIONS(885),
    [anon_sym_POUND_DQUOTE] = ACTIONS(885),
    [anon_sym_LBRACE] = ACTIONS(885),
    [anon_sym_COLON] = ACTIONS(885),
    [sym_upper_identifier] = ACTIONS(885),
    [sym_identifier] = ACTIONS(887),
  },
  [136] = {
    [sym__literals] = STATE(151),
    [sym_bool_literal] = STATE(151),
    [sym_str_literal] = STATE(151),
    [sym_char_literal] = STATE(151),
    [sym_pattern_literal] = STATE(151),
    [sym_array_expression] = STATE(151),
    [sym_map_expression] = STATE(151),
    [aux_sym_array_expression_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(889),
    [sym_integer_literal] = ACTIONS(891),
    [sym_float_literal] = ACTIONS(891),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(891),
  },
  [137] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(893),
    [sym_integer_literal] = ACTIONS(895),
    [sym_float_literal] = ACTIONS(895),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(895),
  },
  [138] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(897),
    [sym_integer_literal] = ACTIONS(900),
    [sym_float_literal] = ACTIONS(900),
    [anon_sym_true] = ACTIONS(903),
    [anon_sym_false] = ACTIONS(903),
    [anon_sym_DQUOTE] = ACTIONS(906),
    [anon_sym_BSLASH] = ACTIONS(909),
    [anon_sym_POUND_DQUOTE] = ACTIONS(912),
    [anon_sym_LBRACE] = ACTIONS(915),
    [anon_sym_RBRACE] = ACTIONS(918),
    [sym_identifier] = ACTIONS(900),
  },
  [139] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(922),
    [sym_identifier] = ACTIONS(920),
  },
  [140] = {
    [anon_sym_SEMI] = ACTIONS(924),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_RPAREN] = ACTIONS(924),
    [anon_sym_LBRACK] = ACTIONS(924),
    [anon_sym_AMP] = ACTIONS(924),
    [anon_sym_AT] = ACTIONS(924),
    [anon_sym_TILDE] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(924),
    [sym_integer_literal] = ACTIONS(926),
    [sym_float_literal] = ACTIONS(926),
    [anon_sym_true] = ACTIONS(926),
    [anon_sym_false] = ACTIONS(926),
    [anon_sym_DQUOTE] = ACTIONS(924),
    [anon_sym_BSLASH] = ACTIONS(924),
    [anon_sym_POUND_DQUOTE] = ACTIONS(924),
    [anon_sym_LBRACE] = ACTIONS(924),
    [anon_sym_COLON] = ACTIONS(924),
    [sym_upper_identifier] = ACTIONS(924),
    [sym_identifier] = ACTIONS(926),
  },
  [141] = {
    [anon_sym_SEMI] = ACTIONS(928),
    [anon_sym_LPAREN] = ACTIONS(928),
    [anon_sym_RPAREN] = ACTIONS(928),
    [anon_sym_LBRACK] = ACTIONS(928),
    [anon_sym_AMP] = ACTIONS(928),
    [anon_sym_AT] = ACTIONS(928),
    [anon_sym_TILDE] = ACTIONS(928),
    [anon_sym_SQUOTE] = ACTIONS(928),
    [sym_integer_literal] = ACTIONS(930),
    [sym_float_literal] = ACTIONS(930),
    [anon_sym_true] = ACTIONS(930),
    [anon_sym_false] = ACTIONS(930),
    [anon_sym_DQUOTE] = ACTIONS(928),
    [anon_sym_BSLASH] = ACTIONS(928),
    [anon_sym_POUND_DQUOTE] = ACTIONS(928),
    [anon_sym_LBRACE] = ACTIONS(928),
    [anon_sym_COLON] = ACTIONS(928),
    [sym_upper_identifier] = ACTIONS(928),
    [sym_identifier] = ACTIONS(930),
  },
  [142] = {
    [anon_sym_SEMI] = ACTIONS(792),
    [anon_sym_LPAREN] = ACTIONS(792),
    [anon_sym_RPAREN] = ACTIONS(792),
    [anon_sym_LBRACK] = ACTIONS(792),
    [anon_sym_AMP] = ACTIONS(792),
    [anon_sym_AT] = ACTIONS(792),
    [anon_sym_TILDE] = ACTIONS(792),
    [anon_sym_SQUOTE] = ACTIONS(792),
    [sym_integer_literal] = ACTIONS(794),
    [sym_float_literal] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(794),
    [anon_sym_false] = ACTIONS(794),
    [anon_sym_DQUOTE] = ACTIONS(792),
    [anon_sym_BSLASH] = ACTIONS(792),
    [anon_sym_POUND_DQUOTE] = ACTIONS(792),
    [anon_sym_LBRACE] = ACTIONS(792),
    [anon_sym_COLON] = ACTIONS(792),
    [sym_upper_identifier] = ACTIONS(792),
    [sym_identifier] = ACTIONS(794),
  },
  [143] = {
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_LPAREN] = ACTIONS(724),
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_AMP] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_TILDE] = ACTIONS(724),
    [anon_sym_SQUOTE] = ACTIONS(724),
    [sym_integer_literal] = ACTIONS(726),
    [sym_float_literal] = ACTIONS(726),
    [anon_sym_true] = ACTIONS(726),
    [anon_sym_false] = ACTIONS(726),
    [anon_sym_DQUOTE] = ACTIONS(724),
    [anon_sym_BSLASH] = ACTIONS(724),
    [anon_sym_POUND_DQUOTE] = ACTIONS(724),
    [anon_sym_LBRACE] = ACTIONS(724),
    [anon_sym_COLON] = ACTIONS(724),
    [sym_upper_identifier] = ACTIONS(724),
    [sym_identifier] = ACTIONS(726),
  },
  [144] = {
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_LPAREN] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(768),
    [anon_sym_LBRACK] = ACTIONS(768),
    [anon_sym_AMP] = ACTIONS(768),
    [anon_sym_AT] = ACTIONS(768),
    [anon_sym_TILDE] = ACTIONS(768),
    [anon_sym_SQUOTE] = ACTIONS(768),
    [sym_integer_literal] = ACTIONS(770),
    [sym_float_literal] = ACTIONS(770),
    [anon_sym_true] = ACTIONS(770),
    [anon_sym_false] = ACTIONS(770),
    [anon_sym_DQUOTE] = ACTIONS(768),
    [anon_sym_BSLASH] = ACTIONS(768),
    [anon_sym_POUND_DQUOTE] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(768),
    [sym_upper_identifier] = ACTIONS(768),
    [sym_identifier] = ACTIONS(770),
  },
  [145] = {
    [anon_sym_SEMI] = ACTIONS(932),
    [anon_sym_LPAREN] = ACTIONS(932),
    [anon_sym_RPAREN] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(932),
    [anon_sym_AMP] = ACTIONS(932),
    [anon_sym_AT] = ACTIONS(932),
    [anon_sym_TILDE] = ACTIONS(932),
    [anon_sym_SQUOTE] = ACTIONS(932),
    [sym_integer_literal] = ACTIONS(934),
    [sym_float_literal] = ACTIONS(934),
    [anon_sym_true] = ACTIONS(934),
    [anon_sym_false] = ACTIONS(934),
    [anon_sym_DQUOTE] = ACTIONS(932),
    [anon_sym_BSLASH] = ACTIONS(932),
    [anon_sym_POUND_DQUOTE] = ACTIONS(932),
    [anon_sym_LBRACE] = ACTIONS(932),
    [anon_sym_COLON] = ACTIONS(932),
    [sym_upper_identifier] = ACTIONS(932),
    [sym_identifier] = ACTIONS(934),
  },
  [146] = {
    [anon_sym_SEMI] = ACTIONS(788),
    [anon_sym_LPAREN] = ACTIONS(788),
    [anon_sym_RPAREN] = ACTIONS(788),
    [anon_sym_LBRACK] = ACTIONS(788),
    [anon_sym_AMP] = ACTIONS(788),
    [anon_sym_AT] = ACTIONS(788),
    [anon_sym_TILDE] = ACTIONS(788),
    [anon_sym_SQUOTE] = ACTIONS(788),
    [sym_integer_literal] = ACTIONS(790),
    [sym_float_literal] = ACTIONS(790),
    [anon_sym_true] = ACTIONS(790),
    [anon_sym_false] = ACTIONS(790),
    [anon_sym_DQUOTE] = ACTIONS(788),
    [anon_sym_BSLASH] = ACTIONS(788),
    [anon_sym_POUND_DQUOTE] = ACTIONS(788),
    [anon_sym_LBRACE] = ACTIONS(788),
    [anon_sym_COLON] = ACTIONS(788),
    [sym_upper_identifier] = ACTIONS(788),
    [sym_identifier] = ACTIONS(790),
  },
  [147] = {
    [anon_sym_SEMI] = ACTIONS(936),
    [anon_sym_LPAREN] = ACTIONS(936),
    [anon_sym_RPAREN] = ACTIONS(936),
    [anon_sym_LBRACK] = ACTIONS(936),
    [anon_sym_AMP] = ACTIONS(936),
    [anon_sym_AT] = ACTIONS(936),
    [anon_sym_TILDE] = ACTIONS(936),
    [anon_sym_SQUOTE] = ACTIONS(936),
    [sym_integer_literal] = ACTIONS(938),
    [sym_float_literal] = ACTIONS(938),
    [anon_sym_true] = ACTIONS(938),
    [anon_sym_false] = ACTIONS(938),
    [anon_sym_DQUOTE] = ACTIONS(936),
    [anon_sym_BSLASH] = ACTIONS(936),
    [anon_sym_POUND_DQUOTE] = ACTIONS(936),
    [anon_sym_LBRACE] = ACTIONS(936),
    [anon_sym_COLON] = ACTIONS(936),
    [sym_upper_identifier] = ACTIONS(936),
    [sym_identifier] = ACTIONS(938),
  },
  [148] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(940),
    [sym_integer_literal] = ACTIONS(895),
    [sym_float_literal] = ACTIONS(895),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(895),
  },
  [149] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(942),
    [sym_identifier] = ACTIONS(920),
  },
  [150] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(944),
    [sym_identifier] = ACTIONS(920),
  },
  [151] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(946),
    [sym_integer_literal] = ACTIONS(895),
    [sym_float_literal] = ACTIONS(895),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(895),
  },
  [152] = {
    [sym__literals] = STATE(137),
    [sym_bool_literal] = STATE(137),
    [sym_str_literal] = STATE(137),
    [sym_char_literal] = STATE(137),
    [sym_pattern_literal] = STATE(137),
    [sym_array_expression] = STATE(137),
    [sym_map_expression] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(137),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(948),
    [sym_integer_literal] = ACTIONS(950),
    [sym_float_literal] = ACTIONS(950),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(950),
  },
  [153] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(952),
    [sym_identifier] = ACTIONS(920),
  },
  [154] = {
    [anon_sym_SEMI] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_AMP] = ACTIONS(784),
    [anon_sym_AT] = ACTIONS(784),
    [anon_sym_TILDE] = ACTIONS(784),
    [anon_sym_SQUOTE] = ACTIONS(784),
    [sym_integer_literal] = ACTIONS(786),
    [sym_float_literal] = ACTIONS(786),
    [anon_sym_true] = ACTIONS(786),
    [anon_sym_false] = ACTIONS(786),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [anon_sym_BSLASH] = ACTIONS(784),
    [anon_sym_POUND_DQUOTE] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [sym_upper_identifier] = ACTIONS(784),
    [sym_identifier] = ACTIONS(786),
  },
  [155] = {
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_AMP] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
    [anon_sym_TILDE] = ACTIONS(780),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [sym_integer_literal] = ACTIONS(782),
    [sym_float_literal] = ACTIONS(782),
    [anon_sym_true] = ACTIONS(782),
    [anon_sym_false] = ACTIONS(782),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [anon_sym_BSLASH] = ACTIONS(780),
    [anon_sym_POUND_DQUOTE] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [sym_upper_identifier] = ACTIONS(780),
    [sym_identifier] = ACTIONS(782),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(776),
    [anon_sym_LPAREN] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(776),
    [anon_sym_LBRACK] = ACTIONS(776),
    [anon_sym_AMP] = ACTIONS(776),
    [anon_sym_AT] = ACTIONS(776),
    [anon_sym_TILDE] = ACTIONS(776),
    [anon_sym_SQUOTE] = ACTIONS(776),
    [sym_integer_literal] = ACTIONS(778),
    [sym_float_literal] = ACTIONS(778),
    [anon_sym_true] = ACTIONS(778),
    [anon_sym_false] = ACTIONS(778),
    [anon_sym_DQUOTE] = ACTIONS(776),
    [anon_sym_BSLASH] = ACTIONS(776),
    [anon_sym_POUND_DQUOTE] = ACTIONS(776),
    [anon_sym_LBRACE] = ACTIONS(776),
    [anon_sym_COLON] = ACTIONS(776),
    [sym_upper_identifier] = ACTIONS(776),
    [sym_identifier] = ACTIONS(778),
  },
  [157] = {
    [sym__literals] = STATE(148),
    [sym_bool_literal] = STATE(148),
    [sym_str_literal] = STATE(148),
    [sym_char_literal] = STATE(148),
    [sym_pattern_literal] = STATE(148),
    [sym_array_expression] = STATE(148),
    [sym_map_expression] = STATE(148),
    [aux_sym_array_expression_repeat1] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(954),
    [sym_integer_literal] = ACTIONS(956),
    [sym_float_literal] = ACTIONS(956),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(956),
  },
  [158] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(958),
    [sym_identifier] = ACTIONS(920),
  },
  [159] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_array_expression_repeat1] = STATE(179),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(960),
    [sym_integer_literal] = ACTIONS(962),
    [sym_float_literal] = ACTIONS(962),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(962),
  },
  [160] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(964),
    [sym_identifier] = ACTIONS(920),
  },
  [161] = {
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_RPAREN] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_AMP] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_TILDE] = ACTIONS(736),
    [anon_sym_SQUOTE] = ACTIONS(736),
    [sym_integer_literal] = ACTIONS(738),
    [sym_float_literal] = ACTIONS(738),
    [anon_sym_true] = ACTIONS(738),
    [anon_sym_false] = ACTIONS(738),
    [anon_sym_DQUOTE] = ACTIONS(736),
    [anon_sym_BSLASH] = ACTIONS(736),
    [anon_sym_POUND_DQUOTE] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [anon_sym_COLON] = ACTIONS(736),
    [sym_upper_identifier] = ACTIONS(736),
    [sym_identifier] = ACTIONS(738),
  },
  [162] = {
    [anon_sym_SEMI] = ACTIONS(740),
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_AMP] = ACTIONS(740),
    [anon_sym_AT] = ACTIONS(740),
    [anon_sym_TILDE] = ACTIONS(740),
    [anon_sym_SQUOTE] = ACTIONS(740),
    [sym_integer_literal] = ACTIONS(742),
    [sym_float_literal] = ACTIONS(742),
    [anon_sym_true] = ACTIONS(742),
    [anon_sym_false] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_BSLASH] = ACTIONS(740),
    [anon_sym_POUND_DQUOTE] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [anon_sym_COLON] = ACTIONS(740),
    [sym_upper_identifier] = ACTIONS(740),
    [sym_identifier] = ACTIONS(742),
  },
  [163] = {
    [anon_sym_SEMI] = ACTIONS(744),
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(744),
    [anon_sym_AMP] = ACTIONS(744),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_TILDE] = ACTIONS(744),
    [anon_sym_SQUOTE] = ACTIONS(744),
    [sym_integer_literal] = ACTIONS(746),
    [sym_float_literal] = ACTIONS(746),
    [anon_sym_true] = ACTIONS(746),
    [anon_sym_false] = ACTIONS(746),
    [anon_sym_DQUOTE] = ACTIONS(744),
    [anon_sym_BSLASH] = ACTIONS(744),
    [anon_sym_POUND_DQUOTE] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(744),
    [anon_sym_COLON] = ACTIONS(744),
    [sym_upper_identifier] = ACTIONS(744),
    [sym_identifier] = ACTIONS(746),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(748),
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_RPAREN] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_TILDE] = ACTIONS(748),
    [anon_sym_SQUOTE] = ACTIONS(748),
    [sym_integer_literal] = ACTIONS(750),
    [sym_float_literal] = ACTIONS(750),
    [anon_sym_true] = ACTIONS(750),
    [anon_sym_false] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(748),
    [anon_sym_BSLASH] = ACTIONS(748),
    [anon_sym_POUND_DQUOTE] = ACTIONS(748),
    [anon_sym_LBRACE] = ACTIONS(748),
    [anon_sym_COLON] = ACTIONS(748),
    [sym_upper_identifier] = ACTIONS(748),
    [sym_identifier] = ACTIONS(750),
  },
  [165] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(966),
    [sym_integer_literal] = ACTIONS(895),
    [sym_float_literal] = ACTIONS(895),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(895),
  },
  [166] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(158),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(968),
    [sym_identifier] = ACTIONS(920),
  },
  [167] = {
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(700),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_AMP] = ACTIONS(700),
    [anon_sym_AT] = ACTIONS(700),
    [anon_sym_TILDE] = ACTIONS(700),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [sym_integer_literal] = ACTIONS(702),
    [sym_float_literal] = ACTIONS(702),
    [anon_sym_true] = ACTIONS(702),
    [anon_sym_false] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(700),
    [anon_sym_BSLASH] = ACTIONS(700),
    [anon_sym_POUND_DQUOTE] = ACTIONS(700),
    [anon_sym_LBRACE] = ACTIONS(700),
    [anon_sym_COLON] = ACTIONS(700),
    [sym_upper_identifier] = ACTIONS(700),
    [sym_identifier] = ACTIONS(702),
  },
  [168] = {
    [anon_sym_SEMI] = ACTIONS(732),
    [anon_sym_LPAREN] = ACTIONS(732),
    [anon_sym_RPAREN] = ACTIONS(732),
    [anon_sym_LBRACK] = ACTIONS(732),
    [anon_sym_AMP] = ACTIONS(732),
    [anon_sym_AT] = ACTIONS(732),
    [anon_sym_TILDE] = ACTIONS(732),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [sym_integer_literal] = ACTIONS(734),
    [sym_float_literal] = ACTIONS(734),
    [anon_sym_true] = ACTIONS(734),
    [anon_sym_false] = ACTIONS(734),
    [anon_sym_DQUOTE] = ACTIONS(732),
    [anon_sym_BSLASH] = ACTIONS(732),
    [anon_sym_POUND_DQUOTE] = ACTIONS(732),
    [anon_sym_LBRACE] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(732),
    [sym_upper_identifier] = ACTIONS(732),
    [sym_identifier] = ACTIONS(734),
  },
  [169] = {
    [anon_sym_SEMI] = ACTIONS(752),
    [anon_sym_LPAREN] = ACTIONS(752),
    [anon_sym_RPAREN] = ACTIONS(752),
    [anon_sym_LBRACK] = ACTIONS(752),
    [anon_sym_AMP] = ACTIONS(752),
    [anon_sym_AT] = ACTIONS(752),
    [anon_sym_TILDE] = ACTIONS(752),
    [anon_sym_SQUOTE] = ACTIONS(752),
    [sym_integer_literal] = ACTIONS(754),
    [sym_float_literal] = ACTIONS(754),
    [anon_sym_true] = ACTIONS(754),
    [anon_sym_false] = ACTIONS(754),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [anon_sym_BSLASH] = ACTIONS(752),
    [anon_sym_POUND_DQUOTE] = ACTIONS(752),
    [anon_sym_LBRACE] = ACTIONS(752),
    [anon_sym_COLON] = ACTIONS(752),
    [sym_upper_identifier] = ACTIONS(752),
    [sym_identifier] = ACTIONS(754),
  },
  [170] = {
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_AMP] = ACTIONS(756),
    [anon_sym_AT] = ACTIONS(756),
    [anon_sym_TILDE] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [sym_integer_literal] = ACTIONS(758),
    [sym_float_literal] = ACTIONS(758),
    [anon_sym_true] = ACTIONS(758),
    [anon_sym_false] = ACTIONS(758),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [sym_upper_identifier] = ACTIONS(756),
    [sym_identifier] = ACTIONS(758),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(970),
    [anon_sym_Bool] = ACTIONS(972),
    [anon_sym_Char] = ACTIONS(972),
    [anon_sym_Int] = ACTIONS(972),
    [anon_sym_Long] = ACTIONS(972),
    [anon_sym_Float] = ACTIONS(972),
    [anon_sym_Double] = ACTIONS(972),
    [anon_sym_Vector2] = ACTIONS(972),
    [anon_sym_Vector3] = ACTIONS(972),
    [anon_sym_VectorN] = ACTIONS(972),
    [anon_sym_String] = ACTIONS(972),
    [anon_sym_Pattern] = ACTIONS(972),
    [anon_sym_Array] = ACTIONS(972),
    [anon_sym_Map] = ACTIONS(972),
    [anon_sym_Maybe] = ACTIONS(972),
    [anon_sym_Result] = ACTIONS(972),
    [anon_sym_Id] = ACTIONS(972),
    [anon_sym_Ptr] = ACTIONS(972),
    [sym_identifier] = ACTIONS(972),
  },
  [172] = {
    [sym__literals] = STATE(165),
    [sym_bool_literal] = STATE(165),
    [sym_str_literal] = STATE(165),
    [sym_char_literal] = STATE(165),
    [sym_pattern_literal] = STATE(165),
    [sym_array_expression] = STATE(165),
    [sym_map_expression] = STATE(165),
    [aux_sym_array_expression_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(974),
    [sym_integer_literal] = ACTIONS(976),
    [sym_float_literal] = ACTIONS(976),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(976),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(720),
    [anon_sym_LPAREN] = ACTIONS(720),
    [anon_sym_RPAREN] = ACTIONS(720),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_AMP] = ACTIONS(720),
    [anon_sym_AT] = ACTIONS(720),
    [anon_sym_TILDE] = ACTIONS(720),
    [anon_sym_SQUOTE] = ACTIONS(720),
    [sym_integer_literal] = ACTIONS(722),
    [sym_float_literal] = ACTIONS(722),
    [anon_sym_true] = ACTIONS(722),
    [anon_sym_false] = ACTIONS(722),
    [anon_sym_DQUOTE] = ACTIONS(720),
    [anon_sym_BSLASH] = ACTIONS(720),
    [anon_sym_POUND_DQUOTE] = ACTIONS(720),
    [anon_sym_LBRACE] = ACTIONS(720),
    [anon_sym_COLON] = ACTIONS(720),
    [sym_upper_identifier] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
  },
  [174] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(978),
    [sym_identifier] = ACTIONS(920),
  },
  [175] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(980),
    [anon_sym_RBRACK] = ACTIONS(983),
    [sym_integer_literal] = ACTIONS(985),
    [sym_float_literal] = ACTIONS(985),
    [anon_sym_true] = ACTIONS(988),
    [anon_sym_false] = ACTIONS(988),
    [anon_sym_DQUOTE] = ACTIONS(991),
    [anon_sym_BSLASH] = ACTIONS(994),
    [anon_sym_POUND_DQUOTE] = ACTIONS(997),
    [anon_sym_LBRACE] = ACTIONS(1000),
    [sym_identifier] = ACTIONS(985),
  },
  [176] = {
    [anon_sym_SEMI] = ACTIONS(728),
    [anon_sym_LPAREN] = ACTIONS(728),
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(728),
    [anon_sym_AMP] = ACTIONS(728),
    [anon_sym_AT] = ACTIONS(728),
    [anon_sym_TILDE] = ACTIONS(728),
    [anon_sym_SQUOTE] = ACTIONS(728),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(730),
    [anon_sym_false] = ACTIONS(730),
    [anon_sym_DQUOTE] = ACTIONS(728),
    [anon_sym_BSLASH] = ACTIONS(728),
    [anon_sym_POUND_DQUOTE] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(728),
    [anon_sym_COLON] = ACTIONS(728),
    [sym_upper_identifier] = ACTIONS(728),
    [sym_identifier] = ACTIONS(730),
  },
  [177] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(1003),
    [sym_identifier] = ACTIONS(920),
  },
  [178] = {
    [anon_sym_SEMI] = ACTIONS(1005),
    [anon_sym_LPAREN] = ACTIONS(1005),
    [anon_sym_RPAREN] = ACTIONS(1005),
    [anon_sym_LBRACK] = ACTIONS(1005),
    [anon_sym_AMP] = ACTIONS(1005),
    [anon_sym_AT] = ACTIONS(1005),
    [anon_sym_TILDE] = ACTIONS(1005),
    [anon_sym_SQUOTE] = ACTIONS(1005),
    [sym_integer_literal] = ACTIONS(1007),
    [sym_float_literal] = ACTIONS(1007),
    [anon_sym_true] = ACTIONS(1007),
    [anon_sym_false] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1005),
    [anon_sym_BSLASH] = ACTIONS(1005),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1005),
    [anon_sym_COLON] = ACTIONS(1005),
    [sym_upper_identifier] = ACTIONS(1005),
    [sym_identifier] = ACTIONS(1007),
  },
  [179] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(1009),
    [sym_integer_literal] = ACTIONS(895),
    [sym_float_literal] = ACTIONS(895),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(895),
  },
  [180] = {
    [anon_sym_SEMI] = ACTIONS(696),
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_LBRACK] = ACTIONS(696),
    [anon_sym_AMP] = ACTIONS(696),
    [anon_sym_AT] = ACTIONS(696),
    [anon_sym_TILDE] = ACTIONS(696),
    [anon_sym_SQUOTE] = ACTIONS(696),
    [sym_integer_literal] = ACTIONS(698),
    [sym_float_literal] = ACTIONS(698),
    [anon_sym_true] = ACTIONS(698),
    [anon_sym_false] = ACTIONS(698),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [anon_sym_BSLASH] = ACTIONS(696),
    [anon_sym_POUND_DQUOTE] = ACTIONS(696),
    [anon_sym_LBRACE] = ACTIONS(696),
    [anon_sym_COLON] = ACTIONS(696),
    [sym_upper_identifier] = ACTIONS(696),
    [sym_identifier] = ACTIONS(698),
  },
  [181] = {
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_LPAREN] = ACTIONS(764),
    [anon_sym_RPAREN] = ACTIONS(764),
    [anon_sym_LBRACK] = ACTIONS(764),
    [anon_sym_AMP] = ACTIONS(764),
    [anon_sym_AT] = ACTIONS(764),
    [anon_sym_TILDE] = ACTIONS(764),
    [anon_sym_SQUOTE] = ACTIONS(764),
    [sym_integer_literal] = ACTIONS(766),
    [sym_float_literal] = ACTIONS(766),
    [anon_sym_true] = ACTIONS(766),
    [anon_sym_false] = ACTIONS(766),
    [anon_sym_DQUOTE] = ACTIONS(764),
    [anon_sym_BSLASH] = ACTIONS(764),
    [anon_sym_POUND_DQUOTE] = ACTIONS(764),
    [anon_sym_LBRACE] = ACTIONS(764),
    [anon_sym_COLON] = ACTIONS(764),
    [sym_upper_identifier] = ACTIONS(764),
    [sym_identifier] = ACTIONS(766),
  },
  [182] = {
    [anon_sym_SEMI] = ACTIONS(760),
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_RPAREN] = ACTIONS(760),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_AMP] = ACTIONS(760),
    [anon_sym_AT] = ACTIONS(760),
    [anon_sym_TILDE] = ACTIONS(760),
    [anon_sym_SQUOTE] = ACTIONS(760),
    [sym_integer_literal] = ACTIONS(762),
    [sym_float_literal] = ACTIONS(762),
    [anon_sym_true] = ACTIONS(762),
    [anon_sym_false] = ACTIONS(762),
    [anon_sym_DQUOTE] = ACTIONS(760),
    [anon_sym_BSLASH] = ACTIONS(760),
    [anon_sym_POUND_DQUOTE] = ACTIONS(760),
    [anon_sym_LBRACE] = ACTIONS(760),
    [anon_sym_COLON] = ACTIONS(760),
    [sym_upper_identifier] = ACTIONS(760),
    [sym_identifier] = ACTIONS(762),
  },
  [183] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(160),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(1011),
    [sym_identifier] = ACTIONS(920),
  },
  [184] = {
    [anon_sym_SEMI] = ACTIONS(1013),
    [anon_sym_LPAREN] = ACTIONS(1013),
    [anon_sym_RPAREN] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1013),
    [anon_sym_AT] = ACTIONS(1013),
    [anon_sym_TILDE] = ACTIONS(1013),
    [anon_sym_SQUOTE] = ACTIONS(1013),
    [sym_integer_literal] = ACTIONS(1015),
    [sym_float_literal] = ACTIONS(1015),
    [anon_sym_true] = ACTIONS(1015),
    [anon_sym_false] = ACTIONS(1015),
    [anon_sym_DQUOTE] = ACTIONS(1013),
    [anon_sym_BSLASH] = ACTIONS(1013),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1013),
    [anon_sym_LBRACE] = ACTIONS(1013),
    [anon_sym_COLON] = ACTIONS(1013),
    [sym_upper_identifier] = ACTIONS(1013),
    [sym_identifier] = ACTIONS(1015),
  },
  [185] = {
    [sym__literals] = STATE(196),
    [sym_bool_literal] = STATE(196),
    [sym_str_literal] = STATE(196),
    [sym_char_literal] = STATE(196),
    [sym_pattern_literal] = STATE(196),
    [sym_array_expression] = STATE(196),
    [sym_map_expression] = STATE(196),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(1017),
    [sym_float_literal] = ACTIONS(1017),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(1017),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(732),
    [anon_sym_LBRACK] = ACTIONS(732),
    [anon_sym_RBRACK] = ACTIONS(732),
    [sym_integer_literal] = ACTIONS(734),
    [sym_float_literal] = ACTIONS(734),
    [anon_sym_true] = ACTIONS(734),
    [anon_sym_false] = ACTIONS(734),
    [anon_sym_DQUOTE] = ACTIONS(732),
    [anon_sym_BSLASH] = ACTIONS(732),
    [anon_sym_POUND_DQUOTE] = ACTIONS(732),
    [anon_sym_LBRACE] = ACTIONS(732),
    [anon_sym_RBRACE] = ACTIONS(732),
    [sym_identifier] = ACTIONS(734),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_RBRACK] = ACTIONS(748),
    [sym_integer_literal] = ACTIONS(750),
    [sym_float_literal] = ACTIONS(750),
    [anon_sym_true] = ACTIONS(750),
    [anon_sym_false] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(748),
    [anon_sym_BSLASH] = ACTIONS(748),
    [anon_sym_POUND_DQUOTE] = ACTIONS(748),
    [anon_sym_LBRACE] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(748),
    [sym_identifier] = ACTIONS(750),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(760),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_RBRACK] = ACTIONS(760),
    [sym_integer_literal] = ACTIONS(762),
    [sym_float_literal] = ACTIONS(762),
    [anon_sym_true] = ACTIONS(762),
    [anon_sym_false] = ACTIONS(762),
    [anon_sym_DQUOTE] = ACTIONS(760),
    [anon_sym_BSLASH] = ACTIONS(760),
    [anon_sym_POUND_DQUOTE] = ACTIONS(760),
    [anon_sym_LBRACE] = ACTIONS(760),
    [anon_sym_RBRACE] = ACTIONS(760),
    [sym_identifier] = ACTIONS(762),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym_integer_literal] = ACTIONS(738),
    [sym_float_literal] = ACTIONS(738),
    [anon_sym_true] = ACTIONS(738),
    [anon_sym_false] = ACTIONS(738),
    [anon_sym_DQUOTE] = ACTIONS(736),
    [anon_sym_BSLASH] = ACTIONS(736),
    [anon_sym_POUND_DQUOTE] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [sym_identifier] = ACTIONS(738),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_RBRACK] = ACTIONS(740),
    [sym_integer_literal] = ACTIONS(742),
    [sym_float_literal] = ACTIONS(742),
    [anon_sym_true] = ACTIONS(742),
    [anon_sym_false] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_BSLASH] = ACTIONS(740),
    [anon_sym_POUND_DQUOTE] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [anon_sym_RBRACE] = ACTIONS(740),
    [sym_identifier] = ACTIONS(742),
  },
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(744),
    [anon_sym_RBRACK] = ACTIONS(744),
    [sym_integer_literal] = ACTIONS(746),
    [sym_float_literal] = ACTIONS(746),
    [anon_sym_true] = ACTIONS(746),
    [anon_sym_false] = ACTIONS(746),
    [anon_sym_DQUOTE] = ACTIONS(744),
    [anon_sym_BSLASH] = ACTIONS(744),
    [anon_sym_POUND_DQUOTE] = ACTIONS(744),
    [anon_sym_LBRACE] = ACTIONS(744),
    [anon_sym_RBRACE] = ACTIONS(744),
    [sym_identifier] = ACTIONS(746),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(728),
    [anon_sym_RBRACK] = ACTIONS(728),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(730),
    [anon_sym_false] = ACTIONS(730),
    [anon_sym_DQUOTE] = ACTIONS(728),
    [anon_sym_BSLASH] = ACTIONS(728),
    [anon_sym_POUND_DQUOTE] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(728),
    [anon_sym_RBRACE] = ACTIONS(728),
    [sym_identifier] = ACTIONS(730),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_RBRACK] = ACTIONS(756),
    [sym_integer_literal] = ACTIONS(758),
    [sym_float_literal] = ACTIONS(758),
    [anon_sym_true] = ACTIONS(758),
    [anon_sym_false] = ACTIONS(758),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_POUND_DQUOTE] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_RBRACE] = ACTIONS(756),
    [sym_identifier] = ACTIONS(758),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(752),
    [anon_sym_LBRACK] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(752),
    [sym_integer_literal] = ACTIONS(754),
    [sym_float_literal] = ACTIONS(754),
    [anon_sym_true] = ACTIONS(754),
    [anon_sym_false] = ACTIONS(754),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [anon_sym_BSLASH] = ACTIONS(752),
    [anon_sym_POUND_DQUOTE] = ACTIONS(752),
    [anon_sym_LBRACE] = ACTIONS(752),
    [anon_sym_RBRACE] = ACTIONS(752),
    [sym_identifier] = ACTIONS(754),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(764),
    [anon_sym_LBRACK] = ACTIONS(764),
    [anon_sym_RBRACK] = ACTIONS(764),
    [sym_integer_literal] = ACTIONS(766),
    [sym_float_literal] = ACTIONS(766),
    [anon_sym_true] = ACTIONS(766),
    [anon_sym_false] = ACTIONS(766),
    [anon_sym_DQUOTE] = ACTIONS(764),
    [anon_sym_BSLASH] = ACTIONS(764),
    [anon_sym_POUND_DQUOTE] = ACTIONS(764),
    [anon_sym_LBRACE] = ACTIONS(764),
    [anon_sym_RBRACE] = ACTIONS(764),
    [sym_identifier] = ACTIONS(766),
  },
  [196] = {
    [anon_sym_LBRACK] = ACTIONS(1019),
    [sym_integer_literal] = ACTIONS(1021),
    [sym_float_literal] = ACTIONS(1021),
    [anon_sym_true] = ACTIONS(1021),
    [anon_sym_false] = ACTIONS(1021),
    [anon_sym_DQUOTE] = ACTIONS(1019),
    [anon_sym_BSLASH] = ACTIONS(1019),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1019),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [anon_sym_RBRACE] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1021),
  },
  [197] = {
    [sym_symbol] = STATE(197),
    [aux_sym_parameters_repeat1] = STATE(197),
    [anon_sym_RBRACK] = ACTIONS(1023),
    [anon_sym_COLON] = ACTIONS(1025),
    [sym_identifier] = ACTIONS(1028),
  },
  [198] = {
    [sym_symbol] = STATE(199),
    [aux_sym_parameters_repeat1] = STATE(199),
    [anon_sym_RBRACK] = ACTIONS(1031),
    [anon_sym_COLON] = ACTIONS(525),
    [sym_identifier] = ACTIONS(1033),
  },
  [199] = {
    [sym_symbol] = STATE(197),
    [aux_sym_parameters_repeat1] = STATE(197),
    [anon_sym_RBRACK] = ACTIONS(1035),
    [anon_sym_COLON] = ACTIONS(525),
    [sym_identifier] = ACTIONS(1037),
  },
  [200] = {
    [sym_fields] = STATE(297),
    [aux_sym__deftype2_repeat1] = STATE(235),
    [anon_sym_LPAREN] = ACTIONS(1039),
    [anon_sym_RPAREN] = ACTIONS(1041),
    [anon_sym_LBRACK] = ACTIONS(1043),
  },
  [201] = {
    [sym__deftype1] = STATE(272),
    [sym__deftype2] = STATE(272),
    [sym__name_deftypes] = STATE(200),
    [anon_sym_LPAREN] = ACTIONS(1045),
    [sym_identifier] = ACTIONS(1047),
  },
  [202] = {
    [aux_sym_str_literal_repeat1] = STATE(215),
    [anon_sym_DQUOTE] = ACTIONS(1049),
    [aux_sym_str_literal_token1] = ACTIONS(1051),
    [sym_escape_sequence] = ACTIONS(1053),
  },
  [203] = {
    [aux_sym_str_literal_repeat1] = STATE(220),
    [anon_sym_DQUOTE] = ACTIONS(1055),
    [aux_sym_str_literal_token1] = ACTIONS(1057),
    [sym_escape_sequence] = ACTIONS(1059),
  },
  [204] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1061),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [205] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1067),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [206] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1069),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [207] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [208] = {
    [aux_sym_str_literal_repeat1] = STATE(204),
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [aux_sym_str_literal_token1] = ACTIONS(1075),
    [sym_escape_sequence] = ACTIONS(1077),
  },
  [209] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1079),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [210] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1081),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [211] = {
    [aux_sym_str_literal_repeat1] = STATE(205),
    [anon_sym_DQUOTE] = ACTIONS(1083),
    [aux_sym_str_literal_token1] = ACTIONS(1085),
    [sym_escape_sequence] = ACTIONS(1087),
  },
  [212] = {
    [aux_sym_str_literal_repeat1] = STATE(206),
    [anon_sym_DQUOTE] = ACTIONS(1089),
    [aux_sym_str_literal_token1] = ACTIONS(1091),
    [sym_escape_sequence] = ACTIONS(1093),
  },
  [213] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1095),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [214] = {
    [aux_sym_str_literal_repeat1] = STATE(209),
    [anon_sym_DQUOTE] = ACTIONS(1097),
    [aux_sym_str_literal_token1] = ACTIONS(1099),
    [sym_escape_sequence] = ACTIONS(1101),
  },
  [215] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1103),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [216] = {
    [aux_sym_str_literal_repeat1] = STATE(210),
    [anon_sym_DQUOTE] = ACTIONS(1105),
    [aux_sym_str_literal_token1] = ACTIONS(1107),
    [sym_escape_sequence] = ACTIONS(1109),
  },
  [217] = {
    [aux_sym_str_literal_repeat1] = STATE(207),
    [anon_sym_DQUOTE] = ACTIONS(1111),
    [aux_sym_str_literal_token1] = ACTIONS(1113),
    [sym_escape_sequence] = ACTIONS(1115),
  },
  [218] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1117),
    [aux_sym_str_literal_token1] = ACTIONS(1119),
    [sym_escape_sequence] = ACTIONS(1122),
  },
  [219] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1125),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [220] = {
    [aux_sym_str_literal_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1127),
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [221] = {
    [aux_sym_str_literal_repeat1] = STATE(213),
    [anon_sym_DQUOTE] = ACTIONS(1129),
    [aux_sym_str_literal_token1] = ACTIONS(1131),
    [sym_escape_sequence] = ACTIONS(1133),
  },
  [222] = {
    [aux_sym_str_literal_repeat1] = STATE(219),
    [anon_sym_DQUOTE] = ACTIONS(1135),
    [aux_sym_str_literal_token1] = ACTIONS(1137),
    [sym_escape_sequence] = ACTIONS(1139),
  },
  [223] = {
    [aux_sym_let_pairs_repeat1] = STATE(229),
    [anon_sym_RBRACK] = ACTIONS(1141),
    [sym_identifier] = ACTIONS(1143),
  },
  [224] = {
    [anon_sym_LPAREN] = ACTIONS(1145),
    [anon_sym_RPAREN] = ACTIONS(1145),
    [anon_sym_LBRACK] = ACTIONS(1145),
  },
  [225] = {
    [aux_sym__deftype2_repeat1] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(1147),
    [anon_sym_RPAREN] = ACTIONS(1150),
  },
  [226] = {
    [anon_sym_LPAREN] = ACTIONS(1152),
    [anon_sym_RPAREN] = ACTIONS(1152),
    [anon_sym_LBRACK] = ACTIONS(1152),
  },
  [227] = {
    [anon_sym_RBRACK] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(768),
    [sym_identifier] = ACTIONS(768),
  },
  [228] = {
    [sym_interface_fn] = STATE(307),
    [anon_sym_Fn] = ACTIONS(1154),
    [anon_sym_] = ACTIONS(1154),
  },
  [229] = {
    [aux_sym_let_pairs_repeat1] = STATE(229),
    [anon_sym_RBRACK] = ACTIONS(1156),
    [sym_identifier] = ACTIONS(1158),
  },
  [230] = {
    [aux_sym__name_deftypes_repeat1] = STATE(230),
    [anon_sym_RPAREN] = ACTIONS(1161),
    [sym_identifier] = ACTIONS(1163),
  },
  [231] = {
    [anon_sym_LPAREN] = ACTIONS(1166),
    [anon_sym_RPAREN] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1166),
  },
  [232] = {
    [aux_sym_let_pairs_repeat1] = STATE(223),
    [anon_sym_RBRACK] = ACTIONS(1168),
    [sym_identifier] = ACTIONS(1143),
  },
  [233] = {
    [aux_sym__name_deftypes_repeat1] = STATE(230),
    [anon_sym_RPAREN] = ACTIONS(1170),
    [sym_identifier] = ACTIONS(1172),
  },
  [234] = {
    [aux_sym__name_deftypes_repeat1] = STATE(233),
    [anon_sym_RPAREN] = ACTIONS(1174),
    [sym_identifier] = ACTIONS(1176),
  },
  [235] = {
    [aux_sym__deftype2_repeat1] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(1039),
    [anon_sym_RPAREN] = ACTIONS(1178),
  },
  [236] = {
    [anon_sym_RBRACK] = ACTIONS(756),
    [sym_identifier] = ACTIONS(756),
  },
  [237] = {
    [aux_sym_str_literal_token1] = ACTIONS(1180),
    [sym_escape_sequence] = ACTIONS(1182),
  },
  [238] = {
    [anon_sym_RBRACK] = ACTIONS(752),
    [sym_identifier] = ACTIONS(752),
  },
  [239] = {
    [anon_sym_RBRACK] = ACTIONS(700),
    [sym_identifier] = ACTIONS(700),
  },
  [240] = {
    [anon_sym_RBRACK] = ACTIONS(748),
    [sym_identifier] = ACTIONS(748),
  },
  [241] = {
    [anon_sym_RBRACK] = ACTIONS(744),
    [sym_identifier] = ACTIONS(744),
  },
  [242] = {
    [sym_parameters] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(1184),
  },
  [243] = {
    [anon_sym_RBRACK] = ACTIONS(740),
    [sym_identifier] = ACTIONS(740),
  },
  [244] = {
    [sym_str_literal] = STATE(178),
    [anon_sym_DQUOTE] = ACTIONS(71),
  },
  [245] = {
    [sym_typed_parameters] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(1186),
  },
  [246] = {
    [aux_sym_str_literal_token1] = ACTIONS(1188),
    [sym_escape_sequence] = ACTIONS(1190),
  },
  [247] = {
    [sym_parameters] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(1184),
  },
  [248] = {
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym_identifier] = ACTIONS(736),
  },
  [249] = {
    [anon_sym_RBRACK] = ACTIONS(732),
    [sym_identifier] = ACTIONS(732),
  },
  [250] = {
    [sym_let_pairs] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(1192),
  },
  [251] = {
    [sym_fields] = STATE(291),
    [anon_sym_LBRACK] = ACTIONS(1043),
  },
  [252] = {
    [anon_sym_RBRACK] = ACTIONS(1194),
    [sym_identifier] = ACTIONS(1194),
  },
  [253] = {
    [anon_sym_RBRACK] = ACTIONS(728),
    [sym_identifier] = ACTIONS(728),
  },
  [254] = {
    [aux_sym_str_literal_token1] = ACTIONS(1196),
    [sym_escape_sequence] = ACTIONS(1198),
  },
  [255] = {
    [sym_upper_identifier] = ACTIONS(1200),
    [sym_identifier] = ACTIONS(1202),
  },
  [256] = {
    [sym_parameters] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1184),
  },
  [257] = {
    [aux_sym_str_literal_token1] = ACTIONS(1204),
    [sym_escape_sequence] = ACTIONS(1206),
  },
  [258] = {
    [anon_sym_LPAREN] = ACTIONS(1208),
    [anon_sym_RPAREN] = ACTIONS(1208),
  },
  [259] = {
    [sym_str_literal] = STATE(178),
    [anon_sym_DQUOTE] = ACTIONS(244),
  },
  [260] = {
    [sym_parameters] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(1184),
  },
  [261] = {
    [aux_sym_str_literal_token1] = ACTIONS(1210),
    [sym_escape_sequence] = ACTIONS(1212),
  },
  [262] = {
    [sym_upper_identifier] = ACTIONS(1214),
    [sym_identifier] = ACTIONS(1216),
  },
  [263] = {
    [anon_sym_RBRACK] = ACTIONS(760),
    [sym_identifier] = ACTIONS(760),
  },
  [264] = {
    [anon_sym_RBRACK] = ACTIONS(764),
    [sym_identifier] = ACTIONS(764),
  },
  [265] = {
    [anon_sym_RBRACK] = ACTIONS(696),
    [sym_identifier] = ACTIONS(696),
  },
  [266] = {
    [anon_sym_RBRACK] = ACTIONS(784),
    [sym_identifier] = ACTIONS(784),
  },
  [267] = {
    [anon_sym_RBRACK] = ACTIONS(780),
    [sym_identifier] = ACTIONS(780),
  },
  [268] = {
    [anon_sym_RBRACK] = ACTIONS(772),
    [sym_identifier] = ACTIONS(772),
  },
  [269] = {
    [anon_sym_RBRACK] = ACTIONS(776),
    [sym_identifier] = ACTIONS(776),
  },
  [270] = {
    [sym_identifier] = ACTIONS(1218),
  },
  [271] = {
    [anon_sym_RPAREN] = ACTIONS(1220),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(1222),
  },
  [273] = {
    [sym_identifier] = ACTIONS(1224),
  },
  [274] = {
    [sym_identifier] = ACTIONS(1226),
  },
  [275] = {
    [aux_sym_line_comment_token1] = ACTIONS(1228),
  },
  [276] = {
    [anon_sym_RPAREN] = ACTIONS(1230),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(1232),
  },
  [278] = {
    [anon_sym_RPAREN] = ACTIONS(1234),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(1236),
  },
  [280] = {
    [sym_identifier] = ACTIONS(1238),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(1240),
  },
  [282] = {
    [aux_sym_line_comment_token1] = ACTIONS(1242),
  },
  [283] = {
    [anon_sym_RPAREN] = ACTIONS(1244),
  },
  [284] = {
    [sym_identifier] = ACTIONS(1246),
  },
  [285] = {
    [sym_identifier] = ACTIONS(1248),
  },
  [286] = {
    [sym_identifier] = ACTIONS(1250),
  },
  [287] = {
    [sym_identifier] = ACTIONS(1252),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(1254),
  },
  [289] = {
    [anon_sym_RPAREN] = ACTIONS(1256),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(1258),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(1260),
  },
  [292] = {
    [sym_identifier] = ACTIONS(1262),
  },
  [293] = {
    [aux_sym_line_comment_token1] = ACTIONS(1264),
  },
  [294] = {
    [anon_sym_RPAREN] = ACTIONS(1266),
  },
  [295] = {
    [anon_sym_RPAREN] = ACTIONS(1268),
  },
  [296] = {
    [sym_identifier] = ACTIONS(1270),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(1272),
  },
  [298] = {
    [aux_sym_line_comment_token1] = ACTIONS(1274),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(1276),
  },
  [300] = {
    [anon_sym_LPAREN] = ACTIONS(1278),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(1280),
  },
  [302] = {
    [sym_identifier] = ACTIONS(1282),
  },
  [303] = {
    [sym_identifier] = ACTIONS(1284),
  },
  [304] = {
    [anon_sym_RPAREN] = ACTIONS(1286),
  },
  [305] = {
    [aux_sym_line_comment_token1] = ACTIONS(1288),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(1290),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(1292),
  },
  [308] = {
    [anon_sym_RPAREN] = ACTIONS(1294),
  },
  [309] = {
    [anon_sym_RPAREN] = ACTIONS(1296),
  },
  [310] = {
    [anon_sym_RPAREN] = ACTIONS(1298),
  },
  [311] = {
    [anon_sym_RPAREN] = ACTIONS(1300),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(1302),
  },
  [313] = {
    [sym_identifier] = ACTIONS(1304),
  },
  [314] = {
    [sym_identifier] = ACTIONS(1306),
  },
  [315] = {
    [sym_identifier] = ACTIONS(1308),
  },
  [316] = {
    [sym_upper_identifier] = ACTIONS(1310),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(1312),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(275),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(71),
  [11] = {.count = 1, .reusable = false}, SHIFT(71),
  [13] = {.count = 1, .reusable = true}, SHIFT(72),
  [15] = {.count = 1, .reusable = false}, SHIFT(72),
  [17] = {.count = 1, .reusable = false}, SHIFT(316),
  [19] = {.count = 1, .reusable = false}, SHIFT(315),
  [21] = {.count = 1, .reusable = false}, SHIFT(313),
  [23] = {.count = 1, .reusable = false}, SHIFT(247),
  [25] = {.count = 1, .reusable = false}, SHIFT(302),
  [27] = {.count = 1, .reusable = false}, SHIFT(250),
  [29] = {.count = 1, .reusable = true}, SHIFT(152),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false}, SHIFT(56),
  [35] = {.count = 1, .reusable = false}, SHIFT(57),
  [37] = {.count = 1, .reusable = false}, SHIFT(62),
  [39] = {.count = 1, .reusable = false}, SHIFT(65),
  [41] = {.count = 1, .reusable = false}, SHIFT(287),
  [43] = {.count = 1, .reusable = false}, SHIFT(103),
  [45] = {.count = 1, .reusable = false}, SHIFT(43),
  [47] = {.count = 1, .reusable = false}, SHIFT(286),
  [49] = {.count = 1, .reusable = false}, SHIFT(285),
  [51] = {.count = 1, .reusable = false}, SHIFT(284),
  [53] = {.count = 1, .reusable = false}, SHIFT(274),
  [55] = {.count = 1, .reusable = false}, SHIFT(273),
  [57] = {.count = 1, .reusable = false}, SHIFT(201),
  [59] = {.count = 1, .reusable = true}, SHIFT(38),
  [61] = {.count = 1, .reusable = true}, SHIFT(39),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = true}, SHIFT(41),
  [67] = {.count = 1, .reusable = false}, SHIFT(289),
  [69] = {.count = 1, .reusable = false}, SHIFT(195),
  [71] = {.count = 1, .reusable = true}, SHIFT(216),
  [73] = {.count = 1, .reusable = true}, SHIFT(261),
  [75] = {.count = 1, .reusable = true}, SHIFT(217),
  [77] = {.count = 1, .reusable = true}, SHIFT(183),
  [79] = {.count = 1, .reusable = true}, SHIFT(303),
  [81] = {.count = 1, .reusable = true}, SHIFT(130),
  [83] = {.count = 1, .reusable = false}, SHIFT(134),
  [85] = {.count = 1, .reusable = false}, SHIFT(308),
  [87] = {.count = 1, .reusable = false}, SHIFT(311),
  [89] = {.count = 1, .reusable = false}, SHIFT(271),
  [91] = {.count = 1, .reusable = false}, SHIFT(277),
  [93] = {.count = 1, .reusable = true}, SHIFT(293),
  [95] = {.count = 1, .reusable = true}, SHIFT(6),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 11),
  [99] = {.count = 1, .reusable = false}, SHIFT(314),
  [101] = {.count = 1, .reusable = true}, SHIFT(159),
  [103] = {.count = 1, .reusable = true}, SHIFT(37),
  [105] = {.count = 1, .reusable = true}, SHIFT(36),
  [107] = {.count = 1, .reusable = true}, SHIFT(35),
  [109] = {.count = 1, .reusable = true}, SHIFT(58),
  [111] = {.count = 1, .reusable = false}, SHIFT(117),
  [113] = {.count = 1, .reusable = false}, SHIFT(115),
  [115] = {.count = 1, .reusable = true}, SHIFT(208),
  [117] = {.count = 1, .reusable = true}, SHIFT(237),
  [119] = {.count = 1, .reusable = true}, SHIFT(214),
  [121] = {.count = 1, .reusable = true}, SHIFT(177),
  [123] = {.count = 1, .reusable = true}, SHIFT(270),
  [125] = {.count = 1, .reusable = true}, SHIFT(117),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(293),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(6),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(314),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(159),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(37),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(36),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(35),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(58),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(117),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(115),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(208),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(237),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(214),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(177),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(270),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(117),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 26),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(305),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(2),
  [185] = {.count = 1, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(136),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(47),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(46),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(40),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(44),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(59),
  [205] = {.count = 2, .reusable = false}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(181),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(203),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(254),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(222),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(150),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(303),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(59),
  [226] = {.count = 1, .reusable = true}, SHIFT(305),
  [228] = {.count = 1, .reusable = true}, SHIFT(2),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_match, 3, .production_id = 9),
  [232] = {.count = 1, .reusable = true}, SHIFT(136),
  [234] = {.count = 1, .reusable = true}, SHIFT(47),
  [236] = {.count = 1, .reusable = true}, SHIFT(46),
  [238] = {.count = 1, .reusable = true}, SHIFT(44),
  [240] = {.count = 1, .reusable = false}, SHIFT(59),
  [242] = {.count = 1, .reusable = false}, SHIFT(181),
  [244] = {.count = 1, .reusable = true}, SHIFT(203),
  [246] = {.count = 1, .reusable = true}, SHIFT(254),
  [248] = {.count = 1, .reusable = true}, SHIFT(222),
  [250] = {.count = 1, .reusable = true}, SHIFT(150),
  [252] = {.count = 1, .reusable = true}, SHIFT(59),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_match, 2, .production_id = 9),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 18),
  [258] = {.count = 1, .reusable = false}, SHIFT(23),
  [260] = {.count = 1, .reusable = true}, SHIFT(23),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [264] = {.count = 1, .reusable = false}, SHIFT(141),
  [266] = {.count = 1, .reusable = true}, SHIFT(141),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 21),
  [270] = {.count = 1, .reusable = false}, SHIFT(21),
  [272] = {.count = 1, .reusable = true}, SHIFT(21),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(305),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(2),
  [280] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(136),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(47),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(46),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(40),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(44),
  [297] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(141),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(181),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(203),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(254),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(222),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(150),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(303),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(141),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 19),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 17),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [329] = {.count = 1, .reusable = false}, SHIFT(22),
  [331] = {.count = 1, .reusable = true}, SHIFT(22),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(305),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(2),
  [339] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(136),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(47),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(46),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(40),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(44),
  [356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(21),
  [359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(181),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(203),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(254),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(222),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(150),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(303),
  [377] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(21),
  [380] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(305),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(2),
  [386] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(136),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(47),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(46),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(40),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(44),
  [403] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(22),
  [406] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(181),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(203),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(254),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(222),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(150),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(303),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(22),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 33),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [431] = {.count = 1, .reusable = false}, SHIFT(20),
  [433] = {.count = 1, .reusable = true}, SHIFT(20),
  [435] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [446] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [449] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [452] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 7),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 5),
  [459] = {.count = 1, .reusable = false}, SHIFT(17),
  [461] = {.count = 1, .reusable = true}, SHIFT(17),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 4),
  [465] = {.count = 1, .reusable = false}, SHIFT(19),
  [467] = {.count = 1, .reusable = true}, SHIFT(19),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 8),
  [471] = {.count = 1, .reusable = false}, SHIFT(15),
  [473] = {.count = 1, .reusable = true}, SHIFT(15),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 18),
  [477] = {.count = 1, .reusable = true}, SHIFT(45),
  [479] = {.count = 1, .reusable = false}, SHIFT(304),
  [481] = {.count = 1, .reusable = true}, SHIFT(304),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 18),
  [485] = {.count = 1, .reusable = false}, SHIFT(306),
  [487] = {.count = 1, .reusable = true}, SHIFT(306),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_register, 3, .production_id = 24),
  [491] = {.count = 1, .reusable = false}, SHIFT(309),
  [493] = {.count = 1, .reusable = true}, SHIFT(309),
  [495] = {.count = 1, .reusable = false}, SHIFT(290),
  [497] = {.count = 1, .reusable = true}, SHIFT(290),
  [499] = {.count = 1, .reusable = true}, SHIFT(282),
  [501] = {.count = 1, .reusable = true}, SHIFT(5),
  [503] = {.count = 1, .reusable = true}, SHIFT(172),
  [505] = {.count = 1, .reusable = true}, SHIFT(54),
  [507] = {.count = 1, .reusable = true}, SHIFT(42),
  [509] = {.count = 1, .reusable = true}, SHIFT(61),
  [511] = {.count = 1, .reusable = true}, SHIFT(34),
  [513] = {.count = 1, .reusable = false}, SHIFT(268),
  [515] = {.count = 1, .reusable = false}, SHIFT(264),
  [517] = {.count = 1, .reusable = true}, SHIFT(211),
  [519] = {.count = 1, .reusable = true}, SHIFT(257),
  [521] = {.count = 1, .reusable = true}, SHIFT(212),
  [523] = {.count = 1, .reusable = true}, SHIFT(166),
  [525] = {.count = 1, .reusable = true}, SHIFT(296),
  [527] = {.count = 1, .reusable = true}, SHIFT(268),
  [529] = {.count = 1, .reusable = false}, SHIFT(107),
  [531] = {.count = 1, .reusable = true}, SHIFT(107),
  [533] = {.count = 1, .reusable = false}, SHIFT(131),
  [535] = {.count = 1, .reusable = true}, SHIFT(131),
  [537] = {.count = 1, .reusable = false}, SHIFT(122),
  [539] = {.count = 1, .reusable = true}, SHIFT(122),
  [541] = {.count = 1, .reusable = false}, SHIFT(154),
  [543] = {.count = 1, .reusable = true}, SHIFT(154),
  [545] = {.count = 1, .reusable = false}, SHIFT(155),
  [547] = {.count = 1, .reusable = true}, SHIFT(155),
  [549] = {.count = 1, .reusable = false}, SHIFT(156),
  [551] = {.count = 1, .reusable = true}, SHIFT(156),
  [553] = {.count = 1, .reusable = false}, SHIFT(132),
  [555] = {.count = 1, .reusable = true}, SHIFT(132),
  [557] = {.count = 1, .reusable = false}, SHIFT(267),
  [559] = {.count = 1, .reusable = true}, SHIFT(267),
  [561] = {.count = 1, .reusable = false}, SHIFT(12),
  [563] = {.count = 1, .reusable = true}, SHIFT(12),
  [565] = {.count = 1, .reusable = true}, SHIFT(298),
  [567] = {.count = 1, .reusable = true}, SHIFT(3),
  [569] = {.count = 1, .reusable = true}, SHIFT(157),
  [571] = {.count = 1, .reusable = true}, SHIFT(52),
  [573] = {.count = 1, .reusable = true}, SHIFT(50),
  [575] = {.count = 1, .reusable = true}, SHIFT(49),
  [577] = {.count = 1, .reusable = true}, SHIFT(48),
  [579] = {.count = 1, .reusable = false}, SHIFT(90),
  [581] = {.count = 1, .reusable = false}, SHIFT(87),
  [583] = {.count = 1, .reusable = true}, SHIFT(202),
  [585] = {.count = 1, .reusable = true}, SHIFT(246),
  [587] = {.count = 1, .reusable = true}, SHIFT(221),
  [589] = {.count = 1, .reusable = true}, SHIFT(149),
  [591] = {.count = 1, .reusable = true}, SHIFT(292),
  [593] = {.count = 1, .reusable = true}, SHIFT(90),
  [595] = {.count = 1, .reusable = false}, SHIFT(91),
  [597] = {.count = 1, .reusable = true}, SHIFT(91),
  [599] = {.count = 1, .reusable = false}, SHIFT(92),
  [601] = {.count = 1, .reusable = true}, SHIFT(92),
  [603] = {.count = 1, .reusable = false}, SHIFT(127),
  [605] = {.count = 1, .reusable = true}, SHIFT(127),
  [607] = {.count = 1, .reusable = false}, SHIFT(93),
  [609] = {.count = 1, .reusable = true}, SHIFT(93),
  [611] = {.count = 1, .reusable = false}, SHIFT(279),
  [613] = {.count = 1, .reusable = true}, SHIFT(279),
  [615] = {.count = 1, .reusable = false}, SHIFT(266),
  [617] = {.count = 1, .reusable = true}, SHIFT(266),
  [619] = {.count = 1, .reusable = false}, SHIFT(252),
  [621] = {.count = 1, .reusable = true}, SHIFT(252),
  [623] = {.count = 1, .reusable = false}, SHIFT(60),
  [625] = {.count = 1, .reusable = true}, SHIFT(60),
  [627] = {.count = 1, .reusable = false}, SHIFT(29),
  [629] = {.count = 1, .reusable = true}, SHIFT(29),
  [631] = {.count = 1, .reusable = false}, SHIFT(106),
  [633] = {.count = 1, .reusable = true}, SHIFT(106),
  [635] = {.count = 1, .reusable = false}, SHIFT(145),
  [637] = {.count = 1, .reusable = true}, SHIFT(145),
  [639] = {.count = 1, .reusable = false}, SHIFT(64),
  [641] = {.count = 1, .reusable = true}, SHIFT(64),
  [643] = {.count = 1, .reusable = false}, SHIFT(269),
  [645] = {.count = 1, .reusable = true}, SHIFT(269),
  [647] = {.count = 1, .reusable = false}, SHIFT(276),
  [649] = {.count = 1, .reusable = true}, SHIFT(276),
  [651] = {.count = 1, .reusable = false}, SHIFT(283),
  [653] = {.count = 1, .reusable = true}, SHIFT(283),
  [655] = {.count = 1, .reusable = false}, SHIFT(312),
  [657] = {.count = 1, .reusable = true}, SHIFT(312),
  [659] = {.count = 1, .reusable = false}, SHIFT(301),
  [661] = {.count = 1, .reusable = true}, SHIFT(301),
  [663] = {.count = 1, .reusable = true}, SHIFT(119),
  [665] = {.count = 1, .reusable = true}, SHIFT(97),
  [667] = {.count = 1, .reusable = false}, SHIFT(95),
  [669] = {.count = 1, .reusable = false}, SHIFT(94),
  [671] = {.count = 1, .reusable = true}, SHIFT(98),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(119),
  [676] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [678] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(95),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(52),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(50),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(49),
  [690] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(48),
  [693] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(94),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym_line_comment, 2),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [702] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_other_str, 1),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_other_str, 1),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_operators, 1),
  [710] = {.count = 1, .reusable = false}, REDUCE(sym_operators, 1),
  [712] = {.count = 1, .reusable = true}, SHIFT(96),
  [714] = {.count = 1, .reusable = false}, SHIFT(142),
  [716] = {.count = 1, .reusable = false}, SHIFT(146),
  [718] = {.count = 1, .reusable = true}, SHIFT(108),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [726] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [730] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [734] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [738] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [742] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [754] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [756] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [758] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [762] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [764] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [766] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [774] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [778] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [782] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [786] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [790] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 10),
  [794] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 10),
  [796] = {.count = 1, .reusable = true}, SHIFT(173),
  [798] = {.count = 1, .reusable = false}, SHIFT(171),
  [800] = {.count = 1, .reusable = false}, SHIFT(245),
  [802] = {.count = 1, .reusable = false}, SHIFT(111),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [806] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [810] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(119),
  [815] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [817] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(104),
  [820] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(102),
  [823] = {.count = 1, .reusable = true}, SHIFT(299),
  [825] = {.count = 1, .reusable = false}, SHIFT(104),
  [827] = {.count = 1, .reusable = false}, SHIFT(102),
  [829] = {.count = 1, .reusable = true}, SHIFT(288),
  [831] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1),
  [833] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1),
  [835] = {.count = 1, .reusable = true}, SHIFT(109),
  [837] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 42),
  [839] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 42),
  [841] = {.count = 1, .reusable = true}, SHIFT(110),
  [843] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2),
  [845] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 42),
  [847] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 42),
  [849] = {.count = 1, .reusable = true}, SHIFT(143),
  [851] = {.count = 1, .reusable = false}, SHIFT(129),
  [853] = {.count = 1, .reusable = true}, SHIFT(76),
  [855] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [857] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [859] = {.count = 1, .reusable = true}, SHIFT(75),
  [861] = {.count = 1, .reusable = false}, SHIFT(113),
  [863] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40),
  [865] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40),
  [867] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [869] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(171),
  [872] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(129),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [877] = {.count = 1, .reusable = true}, SHIFT(262),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [887] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [889] = {.count = 1, .reusable = true}, SHIFT(182),
  [891] = {.count = 1, .reusable = false}, SHIFT(151),
  [893] = {.count = 1, .reusable = true}, SHIFT(187),
  [895] = {.count = 1, .reusable = false}, SHIFT(175),
  [897] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(152),
  [900] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(185),
  [903] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(195),
  [906] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(216),
  [909] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(261),
  [912] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(217),
  [915] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(183),
  [918] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31),
  [920] = {.count = 1, .reusable = false}, SHIFT(185),
  [922] = {.count = 1, .reusable = true}, SHIFT(79),
  [924] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [926] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [928] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [930] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [932] = {.count = 1, .reusable = true}, REDUCE(sym_match_case, 2, .production_id = 38),
  [934] = {.count = 1, .reusable = false}, REDUCE(sym_match_case, 2, .production_id = 38),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym_call_with_module, 3, .production_id = 32),
  [938] = {.count = 1, .reusable = false}, REDUCE(sym_call_with_module, 3, .production_id = 32),
  [940] = {.count = 1, .reusable = true}, SHIFT(82),
  [942] = {.count = 1, .reusable = true}, SHIFT(78),
  [944] = {.count = 1, .reusable = true}, SHIFT(168),
  [946] = {.count = 1, .reusable = true}, SHIFT(164),
  [948] = {.count = 1, .reusable = true}, SHIFT(188),
  [950] = {.count = 1, .reusable = false}, SHIFT(137),
  [952] = {.count = 1, .reusable = true}, SHIFT(161),
  [954] = {.count = 1, .reusable = true}, SHIFT(86),
  [956] = {.count = 1, .reusable = false}, SHIFT(148),
  [958] = {.count = 1, .reusable = true}, SHIFT(248),
  [960] = {.count = 1, .reusable = true}, SHIFT(116),
  [962] = {.count = 1, .reusable = false}, SHIFT(179),
  [964] = {.count = 1, .reusable = true}, SHIFT(189),
  [966] = {.count = 1, .reusable = true}, SHIFT(240),
  [968] = {.count = 1, .reusable = true}, SHIFT(249),
  [970] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [972] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [974] = {.count = 1, .reusable = true}, SHIFT(263),
  [976] = {.count = 1, .reusable = false}, SHIFT(165),
  [978] = {.count = 1, .reusable = true}, SHIFT(124),
  [980] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(152),
  [983] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [985] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(175),
  [988] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(195),
  [991] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(216),
  [994] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(261),
  [997] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(217),
  [1000] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(183),
  [1003] = {.count = 1, .reusable = true}, SHIFT(126),
  [1005] = {.count = 1, .reusable = true}, REDUCE(sym_doc, 3, .production_id = 15),
  [1007] = {.count = 1, .reusable = false}, REDUCE(sym_doc, 3, .production_id = 15),
  [1009] = {.count = 1, .reusable = true}, SHIFT(118),
  [1011] = {.count = 1, .reusable = true}, SHIFT(186),
  [1013] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [1015] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [1017] = {.count = 1, .reusable = false}, SHIFT(196),
  [1019] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [1021] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [1023] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1025] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(296),
  [1028] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(197),
  [1031] = {.count = 1, .reusable = true}, SHIFT(184),
  [1033] = {.count = 1, .reusable = true}, SHIFT(199),
  [1035] = {.count = 1, .reusable = true}, SHIFT(135),
  [1037] = {.count = 1, .reusable = true}, SHIFT(197),
  [1039] = {.count = 1, .reusable = true}, SHIFT(255),
  [1041] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 13),
  [1043] = {.count = 1, .reusable = true}, SHIFT(100),
  [1045] = {.count = 1, .reusable = true}, SHIFT(280),
  [1047] = {.count = 1, .reusable = true}, SHIFT(226),
  [1049] = {.count = 1, .reusable = false}, SHIFT(77),
  [1051] = {.count = 1, .reusable = false}, SHIFT(215),
  [1053] = {.count = 1, .reusable = true}, SHIFT(215),
  [1055] = {.count = 1, .reusable = false}, SHIFT(176),
  [1057] = {.count = 1, .reusable = false}, SHIFT(220),
  [1059] = {.count = 1, .reusable = true}, SHIFT(220),
  [1061] = {.count = 1, .reusable = false}, SHIFT(125),
  [1063] = {.count = 1, .reusable = false}, SHIFT(218),
  [1065] = {.count = 1, .reusable = true}, SHIFT(218),
  [1067] = {.count = 1, .reusable = false}, SHIFT(241),
  [1069] = {.count = 1, .reusable = false}, SHIFT(243),
  [1071] = {.count = 1, .reusable = false}, SHIFT(190),
  [1073] = {.count = 1, .reusable = false}, SHIFT(112),
  [1075] = {.count = 1, .reusable = false}, SHIFT(204),
  [1077] = {.count = 1, .reusable = true}, SHIFT(204),
  [1079] = {.count = 1, .reusable = false}, SHIFT(123),
  [1081] = {.count = 1, .reusable = false}, SHIFT(191),
  [1083] = {.count = 1, .reusable = false}, SHIFT(253),
  [1085] = {.count = 1, .reusable = false}, SHIFT(205),
  [1087] = {.count = 1, .reusable = true}, SHIFT(205),
  [1089] = {.count = 1, .reusable = false}, SHIFT(238),
  [1091] = {.count = 1, .reusable = false}, SHIFT(206),
  [1093] = {.count = 1, .reusable = true}, SHIFT(206),
  [1095] = {.count = 1, .reusable = false}, SHIFT(80),
  [1097] = {.count = 1, .reusable = false}, SHIFT(121),
  [1099] = {.count = 1, .reusable = false}, SHIFT(209),
  [1101] = {.count = 1, .reusable = true}, SHIFT(209),
  [1103] = {.count = 1, .reusable = false}, SHIFT(81),
  [1105] = {.count = 1, .reusable = false}, SHIFT(192),
  [1107] = {.count = 1, .reusable = false}, SHIFT(210),
  [1109] = {.count = 1, .reusable = true}, SHIFT(210),
  [1111] = {.count = 1, .reusable = false}, SHIFT(194),
  [1113] = {.count = 1, .reusable = false}, SHIFT(207),
  [1115] = {.count = 1, .reusable = true}, SHIFT(207),
  [1117] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [1119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(218),
  [1122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(218),
  [1125] = {.count = 1, .reusable = false}, SHIFT(162),
  [1127] = {.count = 1, .reusable = false}, SHIFT(163),
  [1129] = {.count = 1, .reusable = false}, SHIFT(84),
  [1131] = {.count = 1, .reusable = false}, SHIFT(213),
  [1133] = {.count = 1, .reusable = true}, SHIFT(213),
  [1135] = {.count = 1, .reusable = false}, SHIFT(169),
  [1137] = {.count = 1, .reusable = false}, SHIFT(219),
  [1139] = {.count = 1, .reusable = true}, SHIFT(219),
  [1141] = {.count = 1, .reusable = true}, SHIFT(140),
  [1143] = {.count = 1, .reusable = true}, SHIFT(55),
  [1145] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 45),
  [1147] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 43), SHIFT_REPEAT(255),
  [1150] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 43),
  [1152] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [1154] = {.count = 1, .reusable = true}, SHIFT(245),
  [1156] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36),
  [1158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36), SHIFT_REPEAT(55),
  [1161] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [1163] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(230),
  [1166] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 11),
  [1168] = {.count = 1, .reusable = true}, SHIFT(133),
  [1170] = {.count = 1, .reusable = true}, SHIFT(224),
  [1172] = {.count = 1, .reusable = true}, SHIFT(230),
  [1174] = {.count = 1, .reusable = true}, SHIFT(231),
  [1176] = {.count = 1, .reusable = true}, SHIFT(233),
  [1178] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 28),
  [1180] = {.count = 1, .reusable = false}, SHIFT(120),
  [1182] = {.count = 1, .reusable = true}, SHIFT(120),
  [1184] = {.count = 1, .reusable = true}, SHIFT(198),
  [1186] = {.count = 1, .reusable = true}, SHIFT(67),
  [1188] = {.count = 1, .reusable = false}, SHIFT(85),
  [1190] = {.count = 1, .reusable = true}, SHIFT(85),
  [1192] = {.count = 1, .reusable = true}, SHIFT(232),
  [1194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [1196] = {.count = 1, .reusable = false}, SHIFT(170),
  [1198] = {.count = 1, .reusable = true}, SHIFT(170),
  [1200] = {.count = 1, .reusable = true}, SHIFT(251),
  [1202] = {.count = 1, .reusable = false}, SHIFT(251),
  [1204] = {.count = 1, .reusable = false}, SHIFT(236),
  [1206] = {.count = 1, .reusable = true}, SHIFT(236),
  [1208] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 47),
  [1210] = {.count = 1, .reusable = false}, SHIFT(193),
  [1212] = {.count = 1, .reusable = true}, SHIFT(193),
  [1214] = {.count = 1, .reusable = true}, SHIFT(147),
  [1216] = {.count = 1, .reusable = false}, SHIFT(147),
  [1218] = {.count = 1, .reusable = true}, SHIFT(128),
  [1220] = {.count = 1, .reusable = true}, SHIFT(239),
  [1222] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 12),
  [1224] = {.count = 1, .reusable = true}, SHIFT(7),
  [1226] = {.count = 1, .reusable = true}, SHIFT(260),
  [1228] = {.count = 1, .reusable = true}, SHIFT(69),
  [1230] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 9),
  [1232] = {.count = 1, .reusable = true}, SHIFT(105),
  [1234] = {.count = 1, .reusable = true}, REDUCE(sym_use, 2, .production_id = 3),
  [1236] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 16),
  [1238] = {.count = 1, .reusable = true}, SHIFT(234),
  [1240] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 46),
  [1242] = {.count = 1, .reusable = true}, SHIFT(265),
  [1244] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 22),
  [1246] = {.count = 1, .reusable = true}, SHIFT(256),
  [1248] = {.count = 1, .reusable = true}, SHIFT(300),
  [1250] = {.count = 1, .reusable = true}, SHIFT(73),
  [1252] = {.count = 1, .reusable = true}, SHIFT(63),
  [1254] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [1256] = {.count = 1, .reusable = true}, SHIFT(167),
  [1258] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 23),
  [1260] = {.count = 1, .reusable = true}, SHIFT(258),
  [1262] = {.count = 1, .reusable = true}, SHIFT(89),
  [1264] = {.count = 1, .reusable = true}, SHIFT(114),
  [1266] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 44),
  [1268] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 44),
  [1270] = {.count = 1, .reusable = true}, SHIFT(227),
  [1272] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 27),
  [1274] = {.count = 1, .reusable = true}, SHIFT(88),
  [1276] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [1278] = {.count = 1, .reusable = true}, SHIFT(228),
  [1280] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 9),
  [1282] = {.count = 1, .reusable = true}, SHIFT(242),
  [1284] = {.count = 1, .reusable = true}, SHIFT(144),
  [1286] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 33),
  [1288] = {.count = 1, .reusable = true}, SHIFT(180),
  [1290] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 33),
  [1292] = {.count = 1, .reusable = true}, SHIFT(294),
  [1294] = {.count = 1, .reusable = true}, SHIFT(83),
  [1296] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 39),
  [1298] = {.count = 1, .reusable = true}, SHIFT(295),
  [1300] = {.count = 1, .reusable = true}, SHIFT(70),
  [1302] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 37),
  [1304] = {.count = 1, .reusable = true}, SHIFT(53),
  [1306] = {.count = 1, .reusable = true}, SHIFT(259),
  [1308] = {.count = 1, .reusable = true}, SHIFT(244),
  [1310] = {.count = 1, .reusable = true}, SHIFT(278),
  [1312] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
