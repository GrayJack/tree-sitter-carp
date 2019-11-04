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
      if (lookahead == '(') ADVANCE(197);
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
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 1},
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
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 14},
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
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
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
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 13},
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
    [sym_line_comment] = STATE(23),
    [sym__s_expr] = STATE(23),
    [sym_other_str] = STATE(23),
    [sym_operators] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
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
    [sym__call_name] = STATE(26),
    [sym_call_no_module] = STATE(26),
    [sym_call_with_module] = STATE(26),
    [sym_definterface] = STATE(308),
    [sym_defmacro] = STATE(308),
    [sym_defndynamic] = STATE(308),
    [sym_defmodule] = STATE(308),
    [sym_deftype] = STATE(308),
    [sym_short_ref] = STATE(308),
    [sym_short_copy] = STATE(308),
    [sym_short_fn_ref] = STATE(26),
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
    [sym__call_name] = STATE(26),
    [sym_call_no_module] = STATE(26),
    [sym_call_with_module] = STATE(26),
    [sym_definterface] = STATE(311),
    [sym_defmacro] = STATE(311),
    [sym_defndynamic] = STATE(311),
    [sym_defmodule] = STATE(311),
    [sym_deftype] = STATE(311),
    [sym_short_ref] = STATE(311),
    [sym_short_copy] = STATE(311),
    [sym_short_fn_ref] = STATE(26),
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
    [sym__call_name] = STATE(26),
    [sym_call_no_module] = STATE(26),
    [sym_call_with_module] = STATE(26),
    [sym_definterface] = STATE(271),
    [sym_defmacro] = STATE(271),
    [sym_defndynamic] = STATE(271),
    [sym_defmodule] = STATE(271),
    [sym_deftype] = STATE(271),
    [sym_short_ref] = STATE(271),
    [sym_short_copy] = STATE(271),
    [sym_short_fn_ref] = STATE(26),
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
    [sym__call_name] = STATE(26),
    [sym_call_no_module] = STATE(26),
    [sym_call_with_module] = STATE(26),
    [sym_definterface] = STATE(277),
    [sym_defmacro] = STATE(277),
    [sym_defndynamic] = STATE(277),
    [sym_defmodule] = STATE(277),
    [sym_deftype] = STATE(277),
    [sym_short_ref] = STATE(277),
    [sym_short_copy] = STATE(277),
    [sym_short_fn_ref] = STATE(26),
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
    [sym__call_name] = STATE(26),
    [sym_call_no_module] = STATE(26),
    [sym_call_with_module] = STATE(26),
    [sym_definterface] = STATE(289),
    [sym_defmacro] = STATE(289),
    [sym_defndynamic] = STATE(289),
    [sym_defmodule] = STATE(289),
    [sym_deftype] = STATE(289),
    [sym_short_ref] = STATE(289),
    [sym_short_copy] = STATE(289),
    [sym_short_fn_ref] = STATE(26),
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
    [sym_line_comment] = STATE(119),
    [sym__s_expr] = STATE(119),
    [sym__expr] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__short_helper] = STATE(119),
    [sym_doc] = STATE(53),
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
    [sym_line_comment] = STATE(119),
    [sym__s_expr] = STATE(119),
    [sym__expr] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__short_helper] = STATE(119),
    [sym_doc] = STATE(53),
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
    [aux_sym_defmodule_repeat1] = STATE(7),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(127),
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
  [9] = {
    [sym_line_comment] = STATE(119),
    [sym__s_expr] = STATE(119),
    [sym__expr] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__short_helper] = STATE(119),
    [sym_doc] = STATE(53),
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
    [aux_sym_defmodule_repeat1] = STATE(9),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_doc] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [sym_integer_literal] = ACTIONS(155),
    [sym_float_literal] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(158),
    [anon_sym_false] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_BSLASH] = ACTIONS(164),
    [anon_sym_POUND_DQUOTE] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(173),
    [sym_upper_identifier] = ACTIONS(176),
    [sym_identifier] = ACTIONS(155),
  },
  [10] = {
    [sym_line_comment] = STATE(63),
    [sym__s_expr] = STATE(63),
    [sym__expr] = STATE(63),
    [sym__literals] = STATE(63),
    [sym__short_helper] = STATE(63),
    [sym_match_case] = STATE(11),
    [sym_short_ref] = STATE(63),
    [sym_short_copy] = STATE(63),
    [sym_short_fn_ref] = STATE(63),
    [sym_short_quote] = STATE(63),
    [sym_bool_literal] = STATE(63),
    [sym_str_literal] = STATE(63),
    [sym_char_literal] = STATE(63),
    [sym_pattern_literal] = STATE(63),
    [sym_array_expression] = STATE(63),
    [sym_map_expression] = STATE(63),
    [sym_symbol] = STATE(63),
    [aux_sym_match_repeat1] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(193),
    [sym_float_literal] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(205),
    [sym_identifier] = ACTIONS(193),
  },
  [11] = {
    [sym_line_comment] = STATE(63),
    [sym__s_expr] = STATE(63),
    [sym__expr] = STATE(63),
    [sym__literals] = STATE(63),
    [sym__short_helper] = STATE(63),
    [sym_match_case] = STATE(12),
    [sym_short_ref] = STATE(63),
    [sym_short_copy] = STATE(63),
    [sym_short_fn_ref] = STATE(63),
    [sym_short_quote] = STATE(63),
    [sym_bool_literal] = STATE(63),
    [sym_str_literal] = STATE(63),
    [sym_char_literal] = STATE(63),
    [sym_pattern_literal] = STATE(63),
    [sym_array_expression] = STATE(63),
    [sym_map_expression] = STATE(63),
    [sym_symbol] = STATE(63),
    [aux_sym_match_repeat1] = STATE(12),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(193),
    [sym_float_literal] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(205),
    [sym_identifier] = ACTIONS(193),
  },
  [12] = {
    [sym_line_comment] = STATE(63),
    [sym__s_expr] = STATE(63),
    [sym__expr] = STATE(63),
    [sym__literals] = STATE(63),
    [sym__short_helper] = STATE(63),
    [sym_match_case] = STATE(12),
    [sym_short_ref] = STATE(63),
    [sym_short_copy] = STATE(63),
    [sym_short_fn_ref] = STATE(63),
    [sym_short_quote] = STATE(63),
    [sym_bool_literal] = STATE(63),
    [sym_str_literal] = STATE(63),
    [sym_char_literal] = STATE(63),
    [sym_pattern_literal] = STATE(63),
    [sym_array_expression] = STATE(63),
    [sym_map_expression] = STATE(63),
    [sym_symbol] = STATE(63),
    [aux_sym_match_repeat1] = STATE(12),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [sym_integer_literal] = ACTIONS(232),
    [sym_float_literal] = ACTIONS(232),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_POUND_DQUOTE] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(250),
    [sym_upper_identifier] = ACTIONS(253),
    [sym_identifier] = ACTIONS(232),
  },
  [13] = {
    [sym_line_comment] = STATE(142),
    [sym__s_expr] = STATE(142),
    [sym__expr] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__short_helper] = STATE(142),
    [sym_short_ref] = STATE(142),
    [sym_short_copy] = STATE(142),
    [sym_short_fn_ref] = STATE(142),
    [sym_short_quote] = STATE(142),
    [sym_bool_literal] = STATE(142),
    [sym_str_literal] = STATE(142),
    [sym_char_literal] = STATE(142),
    [sym_pattern_literal] = STATE(142),
    [sym_array_expression] = STATE(142),
    [sym_map_expression] = STATE(142),
    [sym_symbol] = STATE(142),
    [aux_sym_do_repeat1] = STATE(24),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(258),
    [sym_float_literal] = ACTIONS(258),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(260),
    [sym_identifier] = ACTIONS(258),
  },
  [14] = {
    [sym_line_comment] = STATE(18),
    [sym__s_expr] = STATE(18),
    [sym__expr] = STATE(18),
    [sym__literals] = STATE(18),
    [sym__short_helper] = STATE(18),
    [sym_short_ref] = STATE(18),
    [sym_short_copy] = STATE(18),
    [sym_short_fn_ref] = STATE(18),
    [sym_short_quote] = STATE(18),
    [sym_bool_literal] = STATE(18),
    [sym_str_literal] = STATE(18),
    [sym_char_literal] = STATE(18),
    [sym_pattern_literal] = STATE(18),
    [sym_array_expression] = STATE(18),
    [sym_map_expression] = STATE(18),
    [sym_symbol] = STATE(18),
    [aux_sym_fn_repeat1] = STATE(18),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(264),
    [sym_float_literal] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(266),
    [sym_identifier] = ACTIONS(264),
  },
  [15] = {
    [sym_line_comment] = STATE(28),
    [sym__s_expr] = STATE(28),
    [sym__expr] = STATE(28),
    [sym__literals] = STATE(28),
    [sym__short_helper] = STATE(28),
    [sym_short_ref] = STATE(28),
    [sym_short_copy] = STATE(28),
    [sym_short_fn_ref] = STATE(28),
    [sym_short_quote] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [sym_symbol] = STATE(28),
    [aux_sym_fn_repeat1] = STATE(28),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(272),
    [sym_identifier] = ACTIONS(270),
  },
  [16] = {
    [sym_line_comment] = STATE(28),
    [sym__s_expr] = STATE(28),
    [sym__expr] = STATE(28),
    [sym__literals] = STATE(28),
    [sym__short_helper] = STATE(28),
    [sym_short_ref] = STATE(28),
    [sym_short_copy] = STATE(28),
    [sym_short_fn_ref] = STATE(28),
    [sym_short_quote] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [sym_symbol] = STATE(28),
    [aux_sym_fn_repeat1] = STATE(28),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(272),
    [sym_identifier] = ACTIONS(270),
  },
  [17] = {
    [sym_line_comment] = STATE(142),
    [sym__s_expr] = STATE(142),
    [sym__expr] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__short_helper] = STATE(142),
    [sym_short_ref] = STATE(142),
    [sym_short_copy] = STATE(142),
    [sym_short_fn_ref] = STATE(142),
    [sym_short_quote] = STATE(142),
    [sym_bool_literal] = STATE(142),
    [sym_str_literal] = STATE(142),
    [sym_char_literal] = STATE(142),
    [sym_pattern_literal] = STATE(142),
    [sym_array_expression] = STATE(142),
    [sym_map_expression] = STATE(142),
    [sym_symbol] = STATE(142),
    [aux_sym_do_repeat1] = STATE(17),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [sym_integer_literal] = ACTIONS(299),
    [sym_float_literal] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(302),
    [anon_sym_false] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(308),
    [anon_sym_POUND_DQUOTE] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(317),
    [sym_upper_identifier] = ACTIONS(320),
    [sym_identifier] = ACTIONS(299),
  },
  [18] = {
    [sym_line_comment] = STATE(28),
    [sym__s_expr] = STATE(28),
    [sym__expr] = STATE(28),
    [sym__literals] = STATE(28),
    [sym__short_helper] = STATE(28),
    [sym_short_ref] = STATE(28),
    [sym_short_copy] = STATE(28),
    [sym_short_fn_ref] = STATE(28),
    [sym_short_quote] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [sym_symbol] = STATE(28),
    [aux_sym_fn_repeat1] = STATE(28),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(272),
    [sym_identifier] = ACTIONS(270),
  },
  [19] = {
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
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(327),
    [sym_float_literal] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(329),
    [sym_identifier] = ACTIONS(327),
  },
  [20] = {
    [sym_line_comment] = STATE(28),
    [sym__s_expr] = STATE(28),
    [sym__expr] = STATE(28),
    [sym__literals] = STATE(28),
    [sym__short_helper] = STATE(28),
    [sym_short_ref] = STATE(28),
    [sym_short_copy] = STATE(28),
    [sym_short_fn_ref] = STATE(28),
    [sym_short_quote] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [sym_symbol] = STATE(28),
    [aux_sym_fn_repeat1] = STATE(28),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(272),
    [sym_identifier] = ACTIONS(270),
  },
  [21] = {
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
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(335),
    [sym_float_literal] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(337),
    [sym_identifier] = ACTIONS(335),
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
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(350),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_integer_literal] = ACTIONS(362),
    [sym_float_literal] = ACTIONS(362),
    [anon_sym_true] = ACTIONS(365),
    [anon_sym_false] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(371),
    [anon_sym_POUND_DQUOTE] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(380),
    [sym_upper_identifier] = ACTIONS(383),
    [sym_identifier] = ACTIONS(362),
  },
  [23] = {
    [sym_line_comment] = STATE(27),
    [sym__s_expr] = STATE(27),
    [sym_other_str] = STATE(27),
    [sym_operators] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(386),
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
  [24] = {
    [sym_line_comment] = STATE(142),
    [sym__s_expr] = STATE(142),
    [sym__expr] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__short_helper] = STATE(142),
    [sym_short_ref] = STATE(142),
    [sym_short_copy] = STATE(142),
    [sym_short_fn_ref] = STATE(142),
    [sym_short_quote] = STATE(142),
    [sym_bool_literal] = STATE(142),
    [sym_str_literal] = STATE(142),
    [sym_char_literal] = STATE(142),
    [sym_pattern_literal] = STATE(142),
    [sym_array_expression] = STATE(142),
    [sym_map_expression] = STATE(142),
    [sym_symbol] = STATE(142),
    [aux_sym_do_repeat1] = STATE(17),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(258),
    [sym_float_literal] = ACTIONS(258),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(260),
    [sym_identifier] = ACTIONS(258),
  },
  [25] = {
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
    [aux_sym_fn_repeat1] = STATE(20),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(392),
    [sym_float_literal] = ACTIONS(392),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(394),
    [sym_identifier] = ACTIONS(392),
  },
  [26] = {
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
    [aux_sym_call_expression_repeat1] = STATE(21),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(398),
    [sym_float_literal] = ACTIONS(398),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(400),
    [sym_identifier] = ACTIONS(398),
  },
  [27] = {
    [sym_line_comment] = STATE(27),
    [sym__s_expr] = STATE(27),
    [sym_other_str] = STATE(27),
    [sym_operators] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(402),
    [anon_sym_SEMI] = ACTIONS(404),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_let_DASHdo] = ACTIONS(410),
    [anon_sym_while_DASHdo] = ACTIONS(410),
    [anon_sym_defn_DASHdo] = ACTIONS(410),
    [anon_sym_break] = ACTIONS(410),
    [anon_sym_for] = ACTIONS(413),
    [anon_sym_when] = ACTIONS(410),
    [anon_sym_cond] = ACTIONS(410),
    [anon_sym_unless] = ACTIONS(410),
    [anon_sym_case] = ACTIONS(410),
    [anon_sym_foreach] = ACTIONS(410),
    [anon_sym_defdynamic] = ACTIONS(410),
    [anon_sym_load] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_STAR] = ACTIONS(416),
    [anon_sym_PERCENT] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_EQ] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(416),
    [anon_sym_SLASH_EQ] = ACTIONS(416),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_or] = ACTIONS(419),
    [anon_sym_not] = ACTIONS(416),
    [anon_sym_and_STAR] = ACTIONS(416),
    [anon_sym_or_STAR] = ACTIONS(416),
  },
  [28] = {
    [sym_line_comment] = STATE(28),
    [sym__s_expr] = STATE(28),
    [sym__expr] = STATE(28),
    [sym__literals] = STATE(28),
    [sym__short_helper] = STATE(28),
    [sym_short_ref] = STATE(28),
    [sym_short_copy] = STATE(28),
    [sym_short_fn_ref] = STATE(28),
    [sym_short_quote] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [sym_symbol] = STATE(28),
    [aux_sym_fn_repeat1] = STATE(28),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(436),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [sym_integer_literal] = ACTIONS(445),
    [sym_float_literal] = ACTIONS(445),
    [anon_sym_true] = ACTIONS(448),
    [anon_sym_false] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [anon_sym_BSLASH] = ACTIONS(454),
    [anon_sym_POUND_DQUOTE] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(463),
    [sym_upper_identifier] = ACTIONS(466),
    [sym_identifier] = ACTIONS(445),
  },
  [29] = {
    [sym_line_comment] = STATE(16),
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
    [aux_sym_fn_repeat1] = STATE(16),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(471),
    [sym_float_literal] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
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
    [sym_integer_literal] = ACTIONS(499),
    [sym_float_literal] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(501),
    [sym_identifier] = ACTIONS(499),
  },
  [35] = {
    [sym_line_comment] = STATE(125),
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
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(503),
    [sym_float_literal] = ACTIONS(503),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(505),
    [sym_identifier] = ACTIONS(503),
  },
  [36] = {
    [sym_line_comment] = STATE(126),
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
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(507),
    [sym_float_literal] = ACTIONS(507),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(509),
    [sym_identifier] = ACTIONS(507),
  },
  [37] = {
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
    [sym_integer_literal] = ACTIONS(511),
    [sym_float_literal] = ACTIONS(511),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(513),
    [sym_identifier] = ACTIONS(511),
  },
  [38] = {
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
    [sym_integer_literal] = ACTIONS(515),
    [sym_float_literal] = ACTIONS(515),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(517),
    [sym_identifier] = ACTIONS(515),
  },
  [39] = {
    [sym_line_comment] = STATE(134),
    [sym__s_expr] = STATE(134),
    [sym__expr] = STATE(134),
    [sym__literals] = STATE(134),
    [sym__short_helper] = STATE(134),
    [sym_short_ref] = STATE(134),
    [sym_short_copy] = STATE(134),
    [sym_short_fn_ref] = STATE(134),
    [sym_short_quote] = STATE(134),
    [sym_bool_literal] = STATE(134),
    [sym_str_literal] = STATE(134),
    [sym_char_literal] = STATE(134),
    [sym_pattern_literal] = STATE(134),
    [sym_array_expression] = STATE(134),
    [sym_map_expression] = STATE(134),
    [sym_symbol] = STATE(134),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(519),
    [sym_float_literal] = ACTIONS(519),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(521),
    [sym_identifier] = ACTIONS(519),
  },
  [40] = {
    [sym_line_comment] = STATE(133),
    [sym__s_expr] = STATE(133),
    [sym__expr] = STATE(133),
    [sym__literals] = STATE(133),
    [sym__short_helper] = STATE(133),
    [sym_short_ref] = STATE(133),
    [sym_short_copy] = STATE(133),
    [sym_short_fn_ref] = STATE(133),
    [sym_short_quote] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [sym_symbol] = STATE(133),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(523),
    [sym_float_literal] = ACTIONS(523),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(525),
    [sym_identifier] = ACTIONS(523),
  },
  [41] = {
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
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(533),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [sym_integer_literal] = ACTIONS(541),
    [sym_float_literal] = ACTIONS(541),
    [anon_sym_true] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [anon_sym_BSLASH] = ACTIONS(547),
    [anon_sym_POUND_DQUOTE] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(553),
    [sym_upper_identifier] = ACTIONS(555),
    [sym_identifier] = ACTIONS(541),
  },
  [42] = {
    [sym_line_comment] = STATE(10),
    [sym__s_expr] = STATE(10),
    [sym__expr] = STATE(10),
    [sym__literals] = STATE(10),
    [sym__short_helper] = STATE(10),
    [sym_short_ref] = STATE(10),
    [sym_short_copy] = STATE(10),
    [sym_short_fn_ref] = STATE(10),
    [sym_short_quote] = STATE(10),
    [sym_bool_literal] = STATE(10),
    [sym_str_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_pattern_literal] = STATE(10),
    [sym_array_expression] = STATE(10),
    [sym_map_expression] = STATE(10),
    [sym_symbol] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(557),
    [sym_float_literal] = ACTIONS(557),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(559),
    [sym_identifier] = ACTIONS(557),
  },
  [43] = {
    [sym_line_comment] = STATE(133),
    [sym__s_expr] = STATE(133),
    [sym__expr] = STATE(133),
    [sym__literals] = STATE(133),
    [sym__short_helper] = STATE(133),
    [sym_short_ref] = STATE(133),
    [sym_short_copy] = STATE(133),
    [sym_short_fn_ref] = STATE(133),
    [sym_short_quote] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [sym_symbol] = STATE(133),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(523),
    [sym_float_literal] = ACTIONS(523),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(525),
    [sym_identifier] = ACTIONS(523),
  },
  [44] = {
    [sym_line_comment] = STATE(134),
    [sym__s_expr] = STATE(134),
    [sym__expr] = STATE(134),
    [sym__literals] = STATE(134),
    [sym__short_helper] = STATE(134),
    [sym_short_ref] = STATE(134),
    [sym_short_copy] = STATE(134),
    [sym_short_fn_ref] = STATE(134),
    [sym_short_quote] = STATE(134),
    [sym_bool_literal] = STATE(134),
    [sym_str_literal] = STATE(134),
    [sym_char_literal] = STATE(134),
    [sym_pattern_literal] = STATE(134),
    [sym_array_expression] = STATE(134),
    [sym_map_expression] = STATE(134),
    [sym_symbol] = STATE(134),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(519),
    [sym_float_literal] = ACTIONS(519),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(521),
    [sym_identifier] = ACTIONS(519),
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
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(515),
    [sym_float_literal] = ACTIONS(515),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(517),
    [sym_identifier] = ACTIONS(515),
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
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(511),
    [sym_float_literal] = ACTIONS(511),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(513),
    [sym_identifier] = ACTIONS(511),
  },
  [47] = {
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
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [sym_integer_literal] = ACTIONS(575),
    [sym_float_literal] = ACTIONS(575),
    [anon_sym_true] = ACTIONS(577),
    [anon_sym_false] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_BSLASH] = ACTIONS(581),
    [anon_sym_POUND_DQUOTE] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [sym_upper_identifier] = ACTIONS(589),
    [sym_identifier] = ACTIONS(575),
  },
  [48] = {
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
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [sym_integer_literal] = ACTIONS(591),
    [sym_float_literal] = ACTIONS(591),
    [anon_sym_true] = ACTIONS(577),
    [anon_sym_false] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_BSLASH] = ACTIONS(581),
    [anon_sym_POUND_DQUOTE] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [sym_upper_identifier] = ACTIONS(593),
    [sym_identifier] = ACTIONS(591),
  },
  [49] = {
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
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [sym_integer_literal] = ACTIONS(595),
    [sym_float_literal] = ACTIONS(595),
    [anon_sym_true] = ACTIONS(577),
    [anon_sym_false] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_BSLASH] = ACTIONS(581),
    [anon_sym_POUND_DQUOTE] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [sym_upper_identifier] = ACTIONS(597),
    [sym_identifier] = ACTIONS(595),
  },
  [50] = {
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
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(533),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [sym_integer_literal] = ACTIONS(599),
    [sym_float_literal] = ACTIONS(599),
    [anon_sym_true] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [anon_sym_BSLASH] = ACTIONS(547),
    [anon_sym_POUND_DQUOTE] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(553),
    [sym_upper_identifier] = ACTIONS(601),
    [sym_identifier] = ACTIONS(599),
  },
  [51] = {
    [sym_line_comment] = STATE(96),
    [sym__s_expr] = STATE(96),
    [sym__expr] = STATE(96),
    [sym__literals] = STATE(96),
    [sym__short_helper] = STATE(96),
    [sym_short_ref] = STATE(96),
    [sym_short_copy] = STATE(96),
    [sym_short_fn_ref] = STATE(96),
    [sym_short_quote] = STATE(96),
    [sym_bool_literal] = STATE(96),
    [sym_str_literal] = STATE(96),
    [sym_char_literal] = STATE(96),
    [sym_pattern_literal] = STATE(96),
    [sym_array_expression] = STATE(96),
    [sym_map_expression] = STATE(96),
    [sym_symbol] = STATE(96),
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [sym_integer_literal] = ACTIONS(603),
    [sym_float_literal] = ACTIONS(603),
    [anon_sym_true] = ACTIONS(577),
    [anon_sym_false] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_BSLASH] = ACTIONS(581),
    [anon_sym_POUND_DQUOTE] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [sym_upper_identifier] = ACTIONS(605),
    [sym_identifier] = ACTIONS(603),
  },
  [52] = {
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
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(533),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [sym_integer_literal] = ACTIONS(607),
    [sym_float_literal] = ACTIONS(607),
    [anon_sym_true] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [anon_sym_BSLASH] = ACTIONS(547),
    [anon_sym_POUND_DQUOTE] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(553),
    [sym_upper_identifier] = ACTIONS(609),
    [sym_identifier] = ACTIONS(607),
  },
  [53] = {
    [sym_line_comment] = STATE(128),
    [sym__s_expr] = STATE(128),
    [sym__expr] = STATE(128),
    [sym__literals] = STATE(128),
    [sym__short_helper] = STATE(128),
    [sym_short_ref] = STATE(128),
    [sym_short_copy] = STATE(128),
    [sym_short_fn_ref] = STATE(128),
    [sym_short_quote] = STATE(128),
    [sym_bool_literal] = STATE(128),
    [sym_str_literal] = STATE(128),
    [sym_char_literal] = STATE(128),
    [sym_pattern_literal] = STATE(128),
    [sym_array_expression] = STATE(128),
    [sym_map_expression] = STATE(128),
    [sym_symbol] = STATE(128),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(611),
    [sym_float_literal] = ACTIONS(611),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(613),
    [sym_identifier] = ACTIONS(611),
  },
  [54] = {
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
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(533),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [sym_integer_literal] = ACTIONS(615),
    [sym_float_literal] = ACTIONS(615),
    [anon_sym_true] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [anon_sym_BSLASH] = ACTIONS(547),
    [anon_sym_POUND_DQUOTE] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(553),
    [sym_upper_identifier] = ACTIONS(617),
    [sym_identifier] = ACTIONS(615),
  },
  [55] = {
    [sym_line_comment] = STATE(59),
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
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
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(619),
    [sym_float_literal] = ACTIONS(619),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(621),
    [sym_identifier] = ACTIONS(619),
  },
  [56] = {
    [sym_line_comment] = STATE(115),
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
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(623),
    [sym_float_literal] = ACTIONS(623),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(625),
    [sym_identifier] = ACTIONS(623),
  },
  [57] = {
    [sym_line_comment] = STATE(114),
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
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_integer_literal] = ACTIONS(627),
    [sym_float_literal] = ACTIONS(627),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_upper_identifier] = ACTIONS(629),
    [sym_identifier] = ACTIONS(627),
  },
  [58] = {
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
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(631),
    [sym_float_literal] = ACTIONS(631),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(633),
    [sym_identifier] = ACTIONS(631),
  },
  [59] = {
    [sym_line_comment] = STATE(65),
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
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(635),
    [sym_float_literal] = ACTIONS(635),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(637),
    [sym_identifier] = ACTIONS(635),
  },
  [60] = {
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
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(533),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [sym_integer_literal] = ACTIONS(639),
    [sym_float_literal] = ACTIONS(639),
    [anon_sym_true] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [anon_sym_BSLASH] = ACTIONS(547),
    [anon_sym_POUND_DQUOTE] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(553),
    [sym_upper_identifier] = ACTIONS(641),
    [sym_identifier] = ACTIONS(639),
  },
  [61] = {
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
    [sym_integer_literal] = ACTIONS(643),
    [sym_float_literal] = ACTIONS(643),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(645),
    [sym_identifier] = ACTIONS(643),
  },
  [62] = {
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
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(651),
    [sym_float_literal] = ACTIONS(651),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(653),
    [sym_identifier] = ACTIONS(651),
  },
  [64] = {
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
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_let_DASHdo] = ACTIONS(663),
    [anon_sym_while_DASHdo] = ACTIONS(663),
    [anon_sym_defn_DASHdo] = ACTIONS(663),
    [anon_sym_break] = ACTIONS(663),
    [anon_sym_for] = ACTIONS(665),
    [anon_sym_when] = ACTIONS(663),
    [anon_sym_cond] = ACTIONS(663),
    [anon_sym_unless] = ACTIONS(663),
    [anon_sym_case] = ACTIONS(663),
    [anon_sym_foreach] = ACTIONS(663),
    [anon_sym_defdynamic] = ACTIONS(663),
    [anon_sym_load] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(663),
    [anon_sym_DASH] = ACTIONS(663),
    [anon_sym_SLASH] = ACTIONS(665),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_PERCENT] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(665),
    [anon_sym_GT] = ACTIONS(665),
    [anon_sym_EQ] = ACTIONS(663),
    [anon_sym_LT_EQ] = ACTIONS(663),
    [anon_sym_GT_EQ] = ACTIONS(663),
    [anon_sym_SLASH_EQ] = ACTIONS(663),
    [anon_sym_and] = ACTIONS(665),
    [anon_sym_or] = ACTIONS(665),
    [anon_sym_not] = ACTIONS(663),
    [anon_sym_and_STAR] = ACTIONS(663),
    [anon_sym_or_STAR] = ACTIONS(663),
  },
  [67] = {
    [sym__short_helper] = STATE(69),
    [sym_type] = STATE(69),
    [sym_complex_type] = STATE(94),
    [sym_short_ref] = STATE(69),
    [sym_short_copy] = STATE(69),
    [sym_short_fn_ref] = STATE(69),
    [sym_short_quote] = STATE(69),
    [aux_sym_typed_parameters_repeat1] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(669),
    [anon_sym_Bool] = ACTIONS(671),
    [anon_sym_Char] = ACTIONS(671),
    [anon_sym_Int] = ACTIONS(671),
    [anon_sym_Long] = ACTIONS(671),
    [anon_sym_Float] = ACTIONS(671),
    [anon_sym_Double] = ACTIONS(671),
    [anon_sym_Vector2] = ACTIONS(671),
    [anon_sym_Vector3] = ACTIONS(671),
    [anon_sym_VectorN] = ACTIONS(671),
    [anon_sym_String] = ACTIONS(671),
    [anon_sym_Pattern] = ACTIONS(671),
    [anon_sym_Array] = ACTIONS(671),
    [anon_sym_Map] = ACTIONS(671),
    [anon_sym_Maybe] = ACTIONS(671),
    [anon_sym_Result] = ACTIONS(671),
    [anon_sym_Id] = ACTIONS(671),
    [anon_sym_Ptr] = ACTIONS(671),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [sym_identifier] = ACTIONS(673),
  },
  [68] = {
    [sym__short_helper] = STATE(67),
    [sym_type] = STATE(67),
    [sym_complex_type] = STATE(94),
    [sym_short_ref] = STATE(67),
    [sym_short_copy] = STATE(67),
    [sym_short_fn_ref] = STATE(67),
    [sym_short_quote] = STATE(67),
    [aux_sym_typed_parameters_repeat1] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_Bool] = ACTIONS(671),
    [anon_sym_Char] = ACTIONS(671),
    [anon_sym_Int] = ACTIONS(671),
    [anon_sym_Long] = ACTIONS(671),
    [anon_sym_Float] = ACTIONS(671),
    [anon_sym_Double] = ACTIONS(671),
    [anon_sym_Vector2] = ACTIONS(671),
    [anon_sym_Vector3] = ACTIONS(671),
    [anon_sym_VectorN] = ACTIONS(671),
    [anon_sym_String] = ACTIONS(671),
    [anon_sym_Pattern] = ACTIONS(671),
    [anon_sym_Array] = ACTIONS(671),
    [anon_sym_Map] = ACTIONS(671),
    [anon_sym_Maybe] = ACTIONS(671),
    [anon_sym_Result] = ACTIONS(671),
    [anon_sym_Id] = ACTIONS(671),
    [anon_sym_Ptr] = ACTIONS(671),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [sym_identifier] = ACTIONS(673),
  },
  [69] = {
    [sym__short_helper] = STATE(69),
    [sym_type] = STATE(69),
    [sym_complex_type] = STATE(94),
    [sym_short_ref] = STATE(69),
    [sym_short_copy] = STATE(69),
    [sym_short_fn_ref] = STATE(69),
    [sym_short_quote] = STATE(69),
    [aux_sym_typed_parameters_repeat1] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(680),
    [anon_sym_Bool] = ACTIONS(682),
    [anon_sym_Char] = ACTIONS(682),
    [anon_sym_Int] = ACTIONS(682),
    [anon_sym_Long] = ACTIONS(682),
    [anon_sym_Float] = ACTIONS(682),
    [anon_sym_Double] = ACTIONS(682),
    [anon_sym_Vector2] = ACTIONS(682),
    [anon_sym_Vector3] = ACTIONS(682),
    [anon_sym_VectorN] = ACTIONS(682),
    [anon_sym_String] = ACTIONS(682),
    [anon_sym_Pattern] = ACTIONS(682),
    [anon_sym_Array] = ACTIONS(682),
    [anon_sym_Map] = ACTIONS(682),
    [anon_sym_Maybe] = ACTIONS(682),
    [anon_sym_Result] = ACTIONS(682),
    [anon_sym_Id] = ACTIONS(682),
    [anon_sym_Ptr] = ACTIONS(682),
    [anon_sym_AMP] = ACTIONS(685),
    [anon_sym_AT] = ACTIONS(688),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_SQUOTE] = ACTIONS(694),
    [sym_identifier] = ACTIONS(697),
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
    [sym__short_helper] = STATE(281),
    [sym_type] = STATE(281),
    [sym_complex_type] = STATE(150),
    [sym_short_ref] = STATE(281),
    [sym_short_copy] = STATE(281),
    [sym_short_fn_ref] = STATE(281),
    [sym_short_quote] = STATE(281),
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
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(716),
  },
  [74] = {
    [sym__short_helper] = STATE(32),
    [sym_type] = STATE(32),
    [sym_complex_type] = STATE(150),
    [sym_short_ref] = STATE(32),
    [sym_short_copy] = STATE(32),
    [sym_short_fn_ref] = STATE(32),
    [sym_short_quote] = STATE(32),
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
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [sym_identifier] = ACTIONS(716),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(720),
    [anon_sym_RPAREN] = ACTIONS(720),
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
    [anon_sym_RPAREN] = ACTIONS(724),
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
    [sym_complex_type] = STATE(99),
    [sym_interface_fn] = STATE(310),
    [aux_sym_complex_type_repeat1] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(728),
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
    [anon_sym_Fn] = ACTIONS(732),
    [anon_sym_] = ACTIONS(732),
    [sym_identifier] = ACTIONS(734),
  },
  [78] = {
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
  [79] = {
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
  [80] = {
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
  [81] = {
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
  [82] = {
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
  [83] = {
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
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [anon_sym_Bool] = ACTIONS(665),
    [anon_sym_Char] = ACTIONS(665),
    [anon_sym_Int] = ACTIONS(665),
    [anon_sym_Long] = ACTIONS(665),
    [anon_sym_Float] = ACTIONS(665),
    [anon_sym_Double] = ACTIONS(665),
    [anon_sym_Vector2] = ACTIONS(665),
    [anon_sym_Vector3] = ACTIONS(665),
    [anon_sym_VectorN] = ACTIONS(665),
    [anon_sym_String] = ACTIONS(665),
    [anon_sym_Pattern] = ACTIONS(665),
    [anon_sym_Array] = ACTIONS(665),
    [anon_sym_Map] = ACTIONS(665),
    [anon_sym_Maybe] = ACTIONS(665),
    [anon_sym_Result] = ACTIONS(665),
    [anon_sym_Id] = ACTIONS(665),
    [anon_sym_Ptr] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(663),
    [anon_sym_AT] = ACTIONS(663),
    [anon_sym_TILDE] = ACTIONS(663),
    [anon_sym_SQUOTE] = ACTIONS(663),
    [sym_identifier] = ACTIONS(665),
  },
  [85] = {
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
  [86] = {
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
  [87] = {
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
  [88] = {
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
  [89] = {
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
  [90] = {
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
  [91] = {
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
  [92] = {
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
  [93] = {
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
  [94] = {
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
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(796),
    [anon_sym_RBRACK] = ACTIONS(796),
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
    [anon_sym_AMP] = ACTIONS(796),
    [anon_sym_AT] = ACTIONS(796),
    [anon_sym_TILDE] = ACTIONS(796),
    [anon_sym_SQUOTE] = ACTIONS(796),
    [sym_identifier] = ACTIONS(798),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(800),
    [anon_sym_RBRACK] = ACTIONS(800),
    [anon_sym_Bool] = ACTIONS(802),
    [anon_sym_Char] = ACTIONS(802),
    [anon_sym_Int] = ACTIONS(802),
    [anon_sym_Long] = ACTIONS(802),
    [anon_sym_Float] = ACTIONS(802),
    [anon_sym_Double] = ACTIONS(802),
    [anon_sym_Vector2] = ACTIONS(802),
    [anon_sym_Vector3] = ACTIONS(802),
    [anon_sym_VectorN] = ACTIONS(802),
    [anon_sym_String] = ACTIONS(802),
    [anon_sym_Pattern] = ACTIONS(802),
    [anon_sym_Array] = ACTIONS(802),
    [anon_sym_Map] = ACTIONS(802),
    [anon_sym_Maybe] = ACTIONS(802),
    [anon_sym_Result] = ACTIONS(802),
    [anon_sym_Id] = ACTIONS(802),
    [anon_sym_Ptr] = ACTIONS(802),
    [anon_sym_AMP] = ACTIONS(800),
    [anon_sym_AT] = ACTIONS(800),
    [anon_sym_TILDE] = ACTIONS(800),
    [anon_sym_SQUOTE] = ACTIONS(800),
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
    [aux_sym_complex_type_repeat1] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(812),
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
    [sym_identifier] = ACTIONS(814),
  },
  [100] = {
    [sym_complex_type] = STATE(105),
    [aux_sym_complex_type_repeat1] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(816),
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
    [sym_identifier] = ACTIONS(818),
  },
  [101] = {
    [sym_complex_type] = STATE(109),
    [aux_sym_fields_repeat1] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(820),
    [anon_sym_Bool] = ACTIONS(822),
    [anon_sym_Char] = ACTIONS(822),
    [anon_sym_Int] = ACTIONS(822),
    [anon_sym_Long] = ACTIONS(822),
    [anon_sym_Float] = ACTIONS(822),
    [anon_sym_Double] = ACTIONS(822),
    [anon_sym_Vector2] = ACTIONS(822),
    [anon_sym_Vector3] = ACTIONS(822),
    [anon_sym_VectorN] = ACTIONS(822),
    [anon_sym_String] = ACTIONS(822),
    [anon_sym_Pattern] = ACTIONS(822),
    [anon_sym_Array] = ACTIONS(822),
    [anon_sym_Map] = ACTIONS(822),
    [anon_sym_Maybe] = ACTIONS(822),
    [anon_sym_Result] = ACTIONS(822),
    [anon_sym_Id] = ACTIONS(822),
    [anon_sym_Ptr] = ACTIONS(822),
    [sym_identifier] = ACTIONS(824),
  },
  [102] = {
    [sym_complex_type] = STATE(102),
    [aux_sym_complex_type_repeat1] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_Bool] = ACTIONS(831),
    [anon_sym_Char] = ACTIONS(831),
    [anon_sym_Int] = ACTIONS(831),
    [anon_sym_Long] = ACTIONS(831),
    [anon_sym_Float] = ACTIONS(831),
    [anon_sym_Double] = ACTIONS(831),
    [anon_sym_Vector2] = ACTIONS(831),
    [anon_sym_Vector3] = ACTIONS(831),
    [anon_sym_VectorN] = ACTIONS(831),
    [anon_sym_String] = ACTIONS(831),
    [anon_sym_Pattern] = ACTIONS(831),
    [anon_sym_Array] = ACTIONS(831),
    [anon_sym_Map] = ACTIONS(831),
    [anon_sym_Maybe] = ACTIONS(831),
    [anon_sym_Result] = ACTIONS(831),
    [anon_sym_Id] = ACTIONS(831),
    [anon_sym_Ptr] = ACTIONS(831),
    [sym_identifier] = ACTIONS(834),
  },
  [103] = {
    [sym_complex_type] = STATE(109),
    [aux_sym_fields_repeat1] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(837),
    [anon_sym_Bool] = ACTIONS(822),
    [anon_sym_Char] = ACTIONS(822),
    [anon_sym_Int] = ACTIONS(822),
    [anon_sym_Long] = ACTIONS(822),
    [anon_sym_Float] = ACTIONS(822),
    [anon_sym_Double] = ACTIONS(822),
    [anon_sym_Vector2] = ACTIONS(822),
    [anon_sym_Vector3] = ACTIONS(822),
    [anon_sym_VectorN] = ACTIONS(822),
    [anon_sym_String] = ACTIONS(822),
    [anon_sym_Pattern] = ACTIONS(822),
    [anon_sym_Array] = ACTIONS(822),
    [anon_sym_Map] = ACTIONS(822),
    [anon_sym_Maybe] = ACTIONS(822),
    [anon_sym_Result] = ACTIONS(822),
    [anon_sym_Id] = ACTIONS(822),
    [anon_sym_Ptr] = ACTIONS(822),
    [sym_identifier] = ACTIONS(824),
  },
  [104] = {
    [sym_complex_type] = STATE(109),
    [aux_sym_fields_repeat1] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(839),
    [anon_sym_RBRACK] = ACTIONS(842),
    [anon_sym_Bool] = ACTIONS(844),
    [anon_sym_Char] = ACTIONS(844),
    [anon_sym_Int] = ACTIONS(844),
    [anon_sym_Long] = ACTIONS(844),
    [anon_sym_Float] = ACTIONS(844),
    [anon_sym_Double] = ACTIONS(844),
    [anon_sym_Vector2] = ACTIONS(844),
    [anon_sym_Vector3] = ACTIONS(844),
    [anon_sym_VectorN] = ACTIONS(844),
    [anon_sym_String] = ACTIONS(844),
    [anon_sym_Pattern] = ACTIONS(844),
    [anon_sym_Array] = ACTIONS(844),
    [anon_sym_Map] = ACTIONS(844),
    [anon_sym_Maybe] = ACTIONS(844),
    [anon_sym_Result] = ACTIONS(844),
    [anon_sym_Id] = ACTIONS(844),
    [anon_sym_Ptr] = ACTIONS(844),
    [sym_identifier] = ACTIONS(847),
  },
  [105] = {
    [sym_complex_type] = STATE(102),
    [aux_sym_complex_type_repeat1] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(850),
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
    [sym_identifier] = ACTIONS(814),
  },
  [106] = {
    [sym_complex_type] = STATE(99),
    [aux_sym_complex_type_repeat1] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(728),
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
    [sym_identifier] = ACTIONS(734),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_RBRACK] = ACTIONS(852),
    [anon_sym_Bool] = ACTIONS(854),
    [anon_sym_Char] = ACTIONS(854),
    [anon_sym_Int] = ACTIONS(854),
    [anon_sym_Long] = ACTIONS(854),
    [anon_sym_Float] = ACTIONS(854),
    [anon_sym_Double] = ACTIONS(854),
    [anon_sym_Vector2] = ACTIONS(854),
    [anon_sym_Vector3] = ACTIONS(854),
    [anon_sym_VectorN] = ACTIONS(854),
    [anon_sym_String] = ACTIONS(854),
    [anon_sym_Pattern] = ACTIONS(854),
    [anon_sym_Array] = ACTIONS(854),
    [anon_sym_Map] = ACTIONS(854),
    [anon_sym_Maybe] = ACTIONS(854),
    [anon_sym_Result] = ACTIONS(854),
    [anon_sym_Id] = ACTIONS(854),
    [anon_sym_Ptr] = ACTIONS(854),
    [anon_sym_COMMA] = ACTIONS(856),
    [sym_identifier] = ACTIONS(854),
  },
  [108] = {
    [sym_type] = STATE(33),
    [sym_complex_type] = STATE(150),
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
    [sym_identifier] = ACTIONS(716),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(858),
    [anon_sym_RBRACK] = ACTIONS(858),
    [anon_sym_Bool] = ACTIONS(860),
    [anon_sym_Char] = ACTIONS(860),
    [anon_sym_Int] = ACTIONS(860),
    [anon_sym_Long] = ACTIONS(860),
    [anon_sym_Float] = ACTIONS(860),
    [anon_sym_Double] = ACTIONS(860),
    [anon_sym_Vector2] = ACTIONS(860),
    [anon_sym_Vector3] = ACTIONS(860),
    [anon_sym_VectorN] = ACTIONS(860),
    [anon_sym_String] = ACTIONS(860),
    [anon_sym_Pattern] = ACTIONS(860),
    [anon_sym_Array] = ACTIONS(860),
    [anon_sym_Map] = ACTIONS(860),
    [anon_sym_Maybe] = ACTIONS(860),
    [anon_sym_Result] = ACTIONS(860),
    [anon_sym_Id] = ACTIONS(860),
    [anon_sym_Ptr] = ACTIONS(860),
    [anon_sym_COMMA] = ACTIONS(862),
    [sym_identifier] = ACTIONS(860),
  },
  [110] = {
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
  [111] = {
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
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(864),
    [anon_sym_RBRACK] = ACTIONS(864),
    [anon_sym_Bool] = ACTIONS(866),
    [anon_sym_Char] = ACTIONS(866),
    [anon_sym_Int] = ACTIONS(866),
    [anon_sym_Long] = ACTIONS(866),
    [anon_sym_Float] = ACTIONS(866),
    [anon_sym_Double] = ACTIONS(866),
    [anon_sym_Vector2] = ACTIONS(866),
    [anon_sym_Vector3] = ACTIONS(866),
    [anon_sym_VectorN] = ACTIONS(866),
    [anon_sym_String] = ACTIONS(866),
    [anon_sym_Pattern] = ACTIONS(866),
    [anon_sym_Array] = ACTIONS(866),
    [anon_sym_Map] = ACTIONS(866),
    [anon_sym_Maybe] = ACTIONS(866),
    [anon_sym_Result] = ACTIONS(866),
    [anon_sym_Id] = ACTIONS(866),
    [anon_sym_Ptr] = ACTIONS(866),
    [sym_identifier] = ACTIONS(866),
  },
  [113] = {
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_doc] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
    [anon_sym_AT] = ACTIONS(663),
    [anon_sym_TILDE] = ACTIONS(663),
    [anon_sym_SQUOTE] = ACTIONS(663),
    [sym_integer_literal] = ACTIONS(665),
    [sym_float_literal] = ACTIONS(665),
    [anon_sym_true] = ACTIONS(665),
    [anon_sym_false] = ACTIONS(665),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [anon_sym_BSLASH] = ACTIONS(663),
    [anon_sym_POUND_DQUOTE] = ACTIONS(663),
    [anon_sym_LBRACE] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(663),
    [sym_upper_identifier] = ACTIONS(663),
    [sym_identifier] = ACTIONS(665),
  },
  [114] = {
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
  [115] = {
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
  [116] = {
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
  [117] = {
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
  [118] = {
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
  [119] = {
    [anon_sym_SEMI] = ACTIONS(868),
    [anon_sym_LPAREN] = ACTIONS(868),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_doc] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(868),
    [anon_sym_AT] = ACTIONS(868),
    [anon_sym_TILDE] = ACTIONS(868),
    [anon_sym_SQUOTE] = ACTIONS(868),
    [sym_integer_literal] = ACTIONS(870),
    [sym_float_literal] = ACTIONS(870),
    [anon_sym_true] = ACTIONS(870),
    [anon_sym_false] = ACTIONS(870),
    [anon_sym_DQUOTE] = ACTIONS(868),
    [anon_sym_BSLASH] = ACTIONS(868),
    [anon_sym_POUND_DQUOTE] = ACTIONS(868),
    [anon_sym_LBRACE] = ACTIONS(868),
    [anon_sym_COLON] = ACTIONS(868),
    [sym_upper_identifier] = ACTIONS(868),
    [sym_identifier] = ACTIONS(870),
  },
  [120] = {
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
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(872),
    [anon_sym_RPAREN] = ACTIONS(872),
    [anon_sym_Bool] = ACTIONS(874),
    [anon_sym_Char] = ACTIONS(874),
    [anon_sym_Int] = ACTIONS(874),
    [anon_sym_Long] = ACTIONS(874),
    [anon_sym_Float] = ACTIONS(874),
    [anon_sym_Double] = ACTIONS(874),
    [anon_sym_Vector2] = ACTIONS(874),
    [anon_sym_Vector3] = ACTIONS(874),
    [anon_sym_VectorN] = ACTIONS(874),
    [anon_sym_String] = ACTIONS(874),
    [anon_sym_Pattern] = ACTIONS(874),
    [anon_sym_Array] = ACTIONS(874),
    [anon_sym_Map] = ACTIONS(874),
    [anon_sym_Maybe] = ACTIONS(874),
    [anon_sym_Result] = ACTIONS(874),
    [anon_sym_Id] = ACTIONS(874),
    [anon_sym_Ptr] = ACTIONS(874),
    [sym_identifier] = ACTIONS(874),
  },
  [122] = {
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
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(842),
    [anon_sym_Bool] = ACTIONS(876),
    [anon_sym_Char] = ACTIONS(876),
    [anon_sym_Int] = ACTIONS(876),
    [anon_sym_Long] = ACTIONS(876),
    [anon_sym_Float] = ACTIONS(876),
    [anon_sym_Double] = ACTIONS(876),
    [anon_sym_Vector2] = ACTIONS(876),
    [anon_sym_Vector3] = ACTIONS(876),
    [anon_sym_VectorN] = ACTIONS(876),
    [anon_sym_String] = ACTIONS(876),
    [anon_sym_Pattern] = ACTIONS(876),
    [anon_sym_Array] = ACTIONS(876),
    [anon_sym_Map] = ACTIONS(876),
    [anon_sym_Maybe] = ACTIONS(876),
    [anon_sym_Result] = ACTIONS(876),
    [anon_sym_Id] = ACTIONS(876),
    [anon_sym_Ptr] = ACTIONS(876),
    [sym_identifier] = ACTIONS(876),
  },
  [124] = {
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
  [125] = {
    [anon_sym_SEMI] = ACTIONS(788),
    [anon_sym_LPAREN] = ACTIONS(788),
    [anon_sym_RPAREN] = ACTIONS(788),
    [anon_sym_doc] = ACTIONS(790),
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
  [126] = {
    [anon_sym_SEMI] = ACTIONS(800),
    [anon_sym_LPAREN] = ACTIONS(800),
    [anon_sym_RPAREN] = ACTIONS(800),
    [anon_sym_doc] = ACTIONS(802),
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_AMP] = ACTIONS(800),
    [anon_sym_AT] = ACTIONS(800),
    [anon_sym_TILDE] = ACTIONS(800),
    [anon_sym_SQUOTE] = ACTIONS(800),
    [sym_integer_literal] = ACTIONS(802),
    [sym_float_literal] = ACTIONS(802),
    [anon_sym_true] = ACTIONS(802),
    [anon_sym_false] = ACTIONS(802),
    [anon_sym_DQUOTE] = ACTIONS(800),
    [anon_sym_BSLASH] = ACTIONS(800),
    [anon_sym_POUND_DQUOTE] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(800),
    [anon_sym_COLON] = ACTIONS(800),
    [sym_upper_identifier] = ACTIONS(800),
    [sym_identifier] = ACTIONS(802),
  },
  [127] = {
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
  [128] = {
    [anon_sym_SEMI] = ACTIONS(878),
    [anon_sym_LPAREN] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [anon_sym_doc] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(878),
    [anon_sym_AMP] = ACTIONS(878),
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_TILDE] = ACTIONS(878),
    [anon_sym_SQUOTE] = ACTIONS(878),
    [sym_integer_literal] = ACTIONS(880),
    [sym_float_literal] = ACTIONS(880),
    [anon_sym_true] = ACTIONS(880),
    [anon_sym_false] = ACTIONS(880),
    [anon_sym_DQUOTE] = ACTIONS(878),
    [anon_sym_BSLASH] = ACTIONS(878),
    [anon_sym_POUND_DQUOTE] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_COLON] = ACTIONS(878),
    [sym_upper_identifier] = ACTIONS(878),
    [sym_identifier] = ACTIONS(880),
  },
  [129] = {
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
  [130] = {
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
  [131] = {
    [anon_sym_SEMI] = ACTIONS(882),
    [anon_sym_LPAREN] = ACTIONS(882),
    [anon_sym_RPAREN] = ACTIONS(882),
    [anon_sym_LBRACK] = ACTIONS(882),
    [anon_sym_DOT] = ACTIONS(884),
    [anon_sym_AMP] = ACTIONS(882),
    [anon_sym_AT] = ACTIONS(882),
    [anon_sym_TILDE] = ACTIONS(882),
    [anon_sym_SQUOTE] = ACTIONS(882),
    [sym_integer_literal] = ACTIONS(886),
    [sym_float_literal] = ACTIONS(886),
    [anon_sym_true] = ACTIONS(886),
    [anon_sym_false] = ACTIONS(886),
    [anon_sym_DQUOTE] = ACTIONS(882),
    [anon_sym_BSLASH] = ACTIONS(882),
    [anon_sym_POUND_DQUOTE] = ACTIONS(882),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_COLON] = ACTIONS(882),
    [sym_upper_identifier] = ACTIONS(882),
    [sym_identifier] = ACTIONS(886),
  },
  [132] = {
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
  [133] = {
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
  [134] = {
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
  [135] = {
    [anon_sym_SEMI] = ACTIONS(888),
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_RPAREN] = ACTIONS(888),
    [anon_sym_LBRACK] = ACTIONS(888),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AT] = ACTIONS(888),
    [anon_sym_TILDE] = ACTIONS(888),
    [anon_sym_SQUOTE] = ACTIONS(888),
    [sym_integer_literal] = ACTIONS(890),
    [sym_float_literal] = ACTIONS(890),
    [anon_sym_true] = ACTIONS(890),
    [anon_sym_false] = ACTIONS(890),
    [anon_sym_DQUOTE] = ACTIONS(888),
    [anon_sym_BSLASH] = ACTIONS(888),
    [anon_sym_POUND_DQUOTE] = ACTIONS(888),
    [anon_sym_LBRACE] = ACTIONS(888),
    [anon_sym_COLON] = ACTIONS(888),
    [sym_upper_identifier] = ACTIONS(888),
    [sym_identifier] = ACTIONS(890),
  },
  [136] = {
    [anon_sym_SEMI] = ACTIONS(882),
    [anon_sym_LPAREN] = ACTIONS(882),
    [anon_sym_RPAREN] = ACTIONS(882),
    [anon_sym_LBRACK] = ACTIONS(882),
    [anon_sym_AMP] = ACTIONS(882),
    [anon_sym_AT] = ACTIONS(882),
    [anon_sym_TILDE] = ACTIONS(882),
    [anon_sym_SQUOTE] = ACTIONS(882),
    [sym_integer_literal] = ACTIONS(886),
    [sym_float_literal] = ACTIONS(886),
    [anon_sym_true] = ACTIONS(886),
    [anon_sym_false] = ACTIONS(886),
    [anon_sym_DQUOTE] = ACTIONS(882),
    [anon_sym_BSLASH] = ACTIONS(882),
    [anon_sym_POUND_DQUOTE] = ACTIONS(882),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_COLON] = ACTIONS(882),
    [sym_upper_identifier] = ACTIONS(882),
    [sym_identifier] = ACTIONS(886),
  },
  [137] = {
    [sym__literals] = STATE(153),
    [sym_bool_literal] = STATE(153),
    [sym_str_literal] = STATE(153),
    [sym_char_literal] = STATE(153),
    [sym_pattern_literal] = STATE(153),
    [sym_array_expression] = STATE(153),
    [sym_map_expression] = STATE(153),
    [aux_sym_array_expression_repeat1] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(892),
    [sym_integer_literal] = ACTIONS(894),
    [sym_float_literal] = ACTIONS(894),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(894),
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
    [anon_sym_LBRACK] = ACTIONS(896),
    [sym_integer_literal] = ACTIONS(899),
    [sym_float_literal] = ACTIONS(899),
    [anon_sym_true] = ACTIONS(902),
    [anon_sym_false] = ACTIONS(902),
    [anon_sym_DQUOTE] = ACTIONS(905),
    [anon_sym_BSLASH] = ACTIONS(908),
    [anon_sym_POUND_DQUOTE] = ACTIONS(911),
    [anon_sym_LBRACE] = ACTIONS(914),
    [anon_sym_RBRACE] = ACTIONS(917),
    [sym_identifier] = ACTIONS(899),
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
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(921),
    [sym_identifier] = ACTIONS(919),
  },
  [140] = {
    [anon_sym_SEMI] = ACTIONS(923),
    [anon_sym_LPAREN] = ACTIONS(923),
    [anon_sym_RPAREN] = ACTIONS(923),
    [anon_sym_LBRACK] = ACTIONS(923),
    [anon_sym_AMP] = ACTIONS(923),
    [anon_sym_AT] = ACTIONS(923),
    [anon_sym_TILDE] = ACTIONS(923),
    [anon_sym_SQUOTE] = ACTIONS(923),
    [sym_integer_literal] = ACTIONS(925),
    [sym_float_literal] = ACTIONS(925),
    [anon_sym_true] = ACTIONS(925),
    [anon_sym_false] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(923),
    [anon_sym_BSLASH] = ACTIONS(923),
    [anon_sym_POUND_DQUOTE] = ACTIONS(923),
    [anon_sym_LBRACE] = ACTIONS(923),
    [anon_sym_COLON] = ACTIONS(923),
    [sym_upper_identifier] = ACTIONS(923),
    [sym_identifier] = ACTIONS(925),
  },
  [141] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(927),
    [sym_integer_literal] = ACTIONS(929),
    [sym_float_literal] = ACTIONS(929),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(929),
  },
  [142] = {
    [anon_sym_SEMI] = ACTIONS(931),
    [anon_sym_LPAREN] = ACTIONS(931),
    [anon_sym_RPAREN] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(931),
    [anon_sym_AMP] = ACTIONS(931),
    [anon_sym_AT] = ACTIONS(931),
    [anon_sym_TILDE] = ACTIONS(931),
    [anon_sym_SQUOTE] = ACTIONS(931),
    [sym_integer_literal] = ACTIONS(933),
    [sym_float_literal] = ACTIONS(933),
    [anon_sym_true] = ACTIONS(933),
    [anon_sym_false] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(931),
    [anon_sym_BSLASH] = ACTIONS(931),
    [anon_sym_POUND_DQUOTE] = ACTIONS(931),
    [anon_sym_LBRACE] = ACTIONS(931),
    [anon_sym_COLON] = ACTIONS(931),
    [sym_upper_identifier] = ACTIONS(931),
    [sym_identifier] = ACTIONS(933),
  },
  [143] = {
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
  [144] = {
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LPAREN] = ACTIONS(935),
    [anon_sym_RPAREN] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
    [anon_sym_AT] = ACTIONS(935),
    [anon_sym_TILDE] = ACTIONS(935),
    [anon_sym_SQUOTE] = ACTIONS(935),
    [sym_integer_literal] = ACTIONS(937),
    [sym_float_literal] = ACTIONS(937),
    [anon_sym_true] = ACTIONS(937),
    [anon_sym_false] = ACTIONS(937),
    [anon_sym_DQUOTE] = ACTIONS(935),
    [anon_sym_BSLASH] = ACTIONS(935),
    [anon_sym_POUND_DQUOTE] = ACTIONS(935),
    [anon_sym_LBRACE] = ACTIONS(935),
    [anon_sym_COLON] = ACTIONS(935),
    [sym_upper_identifier] = ACTIONS(935),
    [sym_identifier] = ACTIONS(937),
  },
  [145] = {
    [anon_sym_SEMI] = ACTIONS(939),
    [anon_sym_LPAREN] = ACTIONS(939),
    [anon_sym_RPAREN] = ACTIONS(939),
    [anon_sym_LBRACK] = ACTIONS(939),
    [anon_sym_AMP] = ACTIONS(939),
    [anon_sym_AT] = ACTIONS(939),
    [anon_sym_TILDE] = ACTIONS(939),
    [anon_sym_SQUOTE] = ACTIONS(939),
    [sym_integer_literal] = ACTIONS(941),
    [sym_float_literal] = ACTIONS(941),
    [anon_sym_true] = ACTIONS(941),
    [anon_sym_false] = ACTIONS(941),
    [anon_sym_DQUOTE] = ACTIONS(939),
    [anon_sym_BSLASH] = ACTIONS(939),
    [anon_sym_POUND_DQUOTE] = ACTIONS(939),
    [anon_sym_LBRACE] = ACTIONS(939),
    [anon_sym_COLON] = ACTIONS(939),
    [sym_upper_identifier] = ACTIONS(939),
    [sym_identifier] = ACTIONS(941),
  },
  [146] = {
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
  [147] = {
    [anon_sym_SEMI] = ACTIONS(796),
    [anon_sym_LPAREN] = ACTIONS(796),
    [anon_sym_RPAREN] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(796),
    [anon_sym_AMP] = ACTIONS(796),
    [anon_sym_AT] = ACTIONS(796),
    [anon_sym_TILDE] = ACTIONS(796),
    [anon_sym_SQUOTE] = ACTIONS(796),
    [sym_integer_literal] = ACTIONS(798),
    [sym_float_literal] = ACTIONS(798),
    [anon_sym_true] = ACTIONS(798),
    [anon_sym_false] = ACTIONS(798),
    [anon_sym_DQUOTE] = ACTIONS(796),
    [anon_sym_BSLASH] = ACTIONS(796),
    [anon_sym_POUND_DQUOTE] = ACTIONS(796),
    [anon_sym_LBRACE] = ACTIONS(796),
    [anon_sym_COLON] = ACTIONS(796),
    [sym_upper_identifier] = ACTIONS(796),
    [sym_identifier] = ACTIONS(798),
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
    [anon_sym_RBRACK] = ACTIONS(943),
    [sym_integer_literal] = ACTIONS(929),
    [sym_float_literal] = ACTIONS(929),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(929),
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
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(945),
    [sym_identifier] = ACTIONS(919),
  },
  [150] = {
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
  [151] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(947),
    [sym_identifier] = ACTIONS(919),
  },
  [152] = {
    [sym__literals] = STATE(141),
    [sym_bool_literal] = STATE(141),
    [sym_str_literal] = STATE(141),
    [sym_char_literal] = STATE(141),
    [sym_pattern_literal] = STATE(141),
    [sym_array_expression] = STATE(141),
    [sym_map_expression] = STATE(141),
    [aux_sym_array_expression_repeat1] = STATE(141),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(949),
    [sym_integer_literal] = ACTIONS(951),
    [sym_float_literal] = ACTIONS(951),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(951),
  },
  [153] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(953),
    [sym_integer_literal] = ACTIONS(929),
    [sym_float_literal] = ACTIONS(929),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(929),
  },
  [154] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(955),
    [sym_identifier] = ACTIONS(919),
  },
  [155] = {
    [anon_sym_SEMI] = ACTIONS(800),
    [anon_sym_LPAREN] = ACTIONS(800),
    [anon_sym_RPAREN] = ACTIONS(800),
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_AMP] = ACTIONS(800),
    [anon_sym_AT] = ACTIONS(800),
    [anon_sym_TILDE] = ACTIONS(800),
    [anon_sym_SQUOTE] = ACTIONS(800),
    [sym_integer_literal] = ACTIONS(802),
    [sym_float_literal] = ACTIONS(802),
    [anon_sym_true] = ACTIONS(802),
    [anon_sym_false] = ACTIONS(802),
    [anon_sym_DQUOTE] = ACTIONS(800),
    [anon_sym_BSLASH] = ACTIONS(800),
    [anon_sym_POUND_DQUOTE] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(800),
    [anon_sym_COLON] = ACTIONS(800),
    [sym_upper_identifier] = ACTIONS(800),
    [sym_identifier] = ACTIONS(802),
  },
  [156] = {
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
    [anon_sym_RBRACK] = ACTIONS(957),
    [sym_integer_literal] = ACTIONS(959),
    [sym_float_literal] = ACTIONS(959),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(959),
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
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(961),
    [sym_identifier] = ACTIONS(919),
  },
  [159] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(963),
    [sym_identifier] = ACTIONS(919),
  },
  [160] = {
    [sym__literals] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [aux_sym_array_expression_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(965),
    [sym_integer_literal] = ACTIONS(929),
    [sym_float_literal] = ACTIONS(929),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(929),
  },
  [161] = {
    [sym__literals] = STATE(160),
    [sym_bool_literal] = STATE(160),
    [sym_str_literal] = STATE(160),
    [sym_char_literal] = STATE(160),
    [sym_pattern_literal] = STATE(160),
    [sym_array_expression] = STATE(160),
    [sym_map_expression] = STATE(160),
    [aux_sym_array_expression_repeat1] = STATE(160),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(967),
    [sym_integer_literal] = ACTIONS(969),
    [sym_float_literal] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(969),
  },
  [162] = {
    [anon_sym_SEMI] = ACTIONS(971),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_RPAREN] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(971),
    [anon_sym_AMP] = ACTIONS(971),
    [anon_sym_AT] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_SQUOTE] = ACTIONS(971),
    [sym_integer_literal] = ACTIONS(973),
    [sym_float_literal] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_false] = ACTIONS(973),
    [anon_sym_DQUOTE] = ACTIONS(971),
    [anon_sym_BSLASH] = ACTIONS(971),
    [anon_sym_POUND_DQUOTE] = ACTIONS(971),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [sym_upper_identifier] = ACTIONS(971),
    [sym_identifier] = ACTIONS(973),
  },
  [163] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(975),
    [sym_identifier] = ACTIONS(919),
  },
  [164] = {
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
    [anon_sym_RBRACK] = ACTIONS(977),
    [sym_integer_literal] = ACTIONS(929),
    [sym_float_literal] = ACTIONS(929),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(929),
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
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(979),
    [sym_identifier] = ACTIONS(919),
  },
  [167] = {
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
  [168] = {
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
  [169] = {
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
  [170] = {
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
    [anon_sym_AT] = ACTIONS(663),
    [anon_sym_TILDE] = ACTIONS(663),
    [anon_sym_SQUOTE] = ACTIONS(663),
    [sym_integer_literal] = ACTIONS(665),
    [sym_float_literal] = ACTIONS(665),
    [anon_sym_true] = ACTIONS(665),
    [anon_sym_false] = ACTIONS(665),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [anon_sym_BSLASH] = ACTIONS(663),
    [anon_sym_POUND_DQUOTE] = ACTIONS(663),
    [anon_sym_LBRACE] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(663),
    [sym_upper_identifier] = ACTIONS(663),
    [sym_identifier] = ACTIONS(665),
  },
  [171] = {
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
    [anon_sym_RBRACK] = ACTIONS(981),
    [sym_integer_literal] = ACTIONS(983),
    [sym_float_literal] = ACTIONS(983),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(983),
  },
  [173] = {
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
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(985),
    [sym_identifier] = ACTIONS(919),
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
    [anon_sym_LBRACK] = ACTIONS(987),
    [anon_sym_RBRACK] = ACTIONS(990),
    [sym_integer_literal] = ACTIONS(992),
    [sym_float_literal] = ACTIONS(992),
    [anon_sym_true] = ACTIONS(995),
    [anon_sym_false] = ACTIONS(995),
    [anon_sym_DQUOTE] = ACTIONS(998),
    [anon_sym_BSLASH] = ACTIONS(1001),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1004),
    [anon_sym_LBRACE] = ACTIONS(1007),
    [sym_identifier] = ACTIONS(992),
  },
  [176] = {
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
  [177] = {
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
  [178] = {
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
  [179] = {
    [sym__literals] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [aux_sym_map_expression_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(919),
    [sym_float_literal] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(1010),
    [sym_identifier] = ACTIONS(919),
  },
  [180] = {
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
  [181] = {
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
  [182] = {
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
  [183] = {
    [anon_sym_SEMI] = ACTIONS(1012),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1012),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_AMP] = ACTIONS(1012),
    [anon_sym_AT] = ACTIONS(1012),
    [anon_sym_TILDE] = ACTIONS(1012),
    [anon_sym_SQUOTE] = ACTIONS(1012),
    [sym_integer_literal] = ACTIONS(1014),
    [sym_float_literal] = ACTIONS(1014),
    [anon_sym_true] = ACTIONS(1014),
    [anon_sym_false] = ACTIONS(1014),
    [anon_sym_DQUOTE] = ACTIONS(1012),
    [anon_sym_BSLASH] = ACTIONS(1012),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [anon_sym_COLON] = ACTIONS(1012),
    [sym_upper_identifier] = ACTIONS(1012),
    [sym_identifier] = ACTIONS(1014),
  },
  [184] = {
    [anon_sym_SEMI] = ACTIONS(1016),
    [anon_sym_LPAREN] = ACTIONS(1016),
    [anon_sym_RPAREN] = ACTIONS(1016),
    [anon_sym_LBRACK] = ACTIONS(1016),
    [anon_sym_AMP] = ACTIONS(1016),
    [anon_sym_AT] = ACTIONS(1016),
    [anon_sym_TILDE] = ACTIONS(1016),
    [anon_sym_SQUOTE] = ACTIONS(1016),
    [sym_integer_literal] = ACTIONS(1018),
    [sym_float_literal] = ACTIONS(1018),
    [anon_sym_true] = ACTIONS(1018),
    [anon_sym_false] = ACTIONS(1018),
    [anon_sym_DQUOTE] = ACTIONS(1016),
    [anon_sym_BSLASH] = ACTIONS(1016),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1016),
    [anon_sym_LBRACE] = ACTIONS(1016),
    [anon_sym_COLON] = ACTIONS(1016),
    [sym_upper_identifier] = ACTIONS(1016),
    [sym_identifier] = ACTIONS(1018),
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
    [sym_integer_literal] = ACTIONS(1020),
    [sym_float_literal] = ACTIONS(1020),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(1020),
  },
  [186] = {
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
  [187] = {
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
  [188] = {
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
  [189] = {
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
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(768),
    [anon_sym_LBRACK] = ACTIONS(768),
    [anon_sym_RBRACK] = ACTIONS(768),
    [sym_integer_literal] = ACTIONS(770),
    [sym_float_literal] = ACTIONS(770),
    [anon_sym_true] = ACTIONS(770),
    [anon_sym_false] = ACTIONS(770),
    [anon_sym_DQUOTE] = ACTIONS(768),
    [anon_sym_BSLASH] = ACTIONS(768),
    [anon_sym_POUND_DQUOTE] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [sym_identifier] = ACTIONS(770),
  },
  [191] = {
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
  [192] = {
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
  [193] = {
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
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_LBRACK] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(772),
    [sym_integer_literal] = ACTIONS(774),
    [sym_float_literal] = ACTIONS(774),
    [anon_sym_true] = ACTIONS(774),
    [anon_sym_false] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(772),
    [anon_sym_BSLASH] = ACTIONS(772),
    [anon_sym_POUND_DQUOTE] = ACTIONS(772),
    [anon_sym_LBRACE] = ACTIONS(772),
    [anon_sym_RBRACE] = ACTIONS(772),
    [sym_identifier] = ACTIONS(774),
  },
  [195] = {
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
  [196] = {
    [anon_sym_LBRACK] = ACTIONS(1022),
    [sym_integer_literal] = ACTIONS(1024),
    [sym_float_literal] = ACTIONS(1024),
    [anon_sym_true] = ACTIONS(1024),
    [anon_sym_false] = ACTIONS(1024),
    [anon_sym_DQUOTE] = ACTIONS(1022),
    [anon_sym_BSLASH] = ACTIONS(1022),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1022),
    [anon_sym_LBRACE] = ACTIONS(1022),
    [anon_sym_RBRACE] = ACTIONS(1022),
    [sym_identifier] = ACTIONS(1024),
  },
  [197] = {
    [sym_symbol] = STATE(199),
    [aux_sym_parameters_repeat1] = STATE(199),
    [anon_sym_RBRACK] = ACTIONS(1026),
    [anon_sym_COLON] = ACTIONS(553),
    [sym_identifier] = ACTIONS(1028),
  },
  [198] = {
    [sym_symbol] = STATE(197),
    [aux_sym_parameters_repeat1] = STATE(197),
    [anon_sym_RBRACK] = ACTIONS(1030),
    [anon_sym_COLON] = ACTIONS(553),
    [sym_identifier] = ACTIONS(1032),
  },
  [199] = {
    [sym_symbol] = STATE(199),
    [aux_sym_parameters_repeat1] = STATE(199),
    [anon_sym_RBRACK] = ACTIONS(1034),
    [anon_sym_COLON] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1039),
  },
  [200] = {
    [sym_fields] = STATE(297),
    [aux_sym__deftype2_repeat1] = STATE(228),
    [anon_sym_LPAREN] = ACTIONS(1042),
    [anon_sym_RPAREN] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1046),
  },
  [201] = {
    [sym__deftype1] = STATE(272),
    [sym__deftype2] = STATE(272),
    [sym__name_deftypes] = STATE(200),
    [anon_sym_LPAREN] = ACTIONS(1048),
    [sym_identifier] = ACTIONS(1050),
  },
  [202] = {
    [aux_sym_str_literal_repeat1] = STATE(203),
    [anon_sym_DQUOTE] = ACTIONS(1052),
    [aux_sym_str_literal_token1] = ACTIONS(1054),
    [sym_escape_sequence] = ACTIONS(1056),
  },
  [203] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1058),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [204] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1064),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [205] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1066),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [206] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1068),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [207] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1070),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [208] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1072),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [209] = {
    [aux_sym_str_literal_repeat1] = STATE(204),
    [anon_sym_DQUOTE] = ACTIONS(1074),
    [aux_sym_str_literal_token1] = ACTIONS(1076),
    [sym_escape_sequence] = ACTIONS(1078),
  },
  [210] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1080),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [211] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1082),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [212] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1084),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [213] = {
    [aux_sym_str_literal_repeat1] = STATE(206),
    [anon_sym_DQUOTE] = ACTIONS(1086),
    [aux_sym_str_literal_token1] = ACTIONS(1088),
    [sym_escape_sequence] = ACTIONS(1090),
  },
  [214] = {
    [aux_sym_str_literal_repeat1] = STATE(210),
    [anon_sym_DQUOTE] = ACTIONS(1092),
    [aux_sym_str_literal_token1] = ACTIONS(1094),
    [sym_escape_sequence] = ACTIONS(1096),
  },
  [215] = {
    [aux_sym_str_literal_repeat1] = STATE(207),
    [anon_sym_DQUOTE] = ACTIONS(1098),
    [aux_sym_str_literal_token1] = ACTIONS(1100),
    [sym_escape_sequence] = ACTIONS(1102),
  },
  [216] = {
    [aux_sym_str_literal_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(1104),
    [aux_sym_str_literal_token1] = ACTIONS(1106),
    [sym_escape_sequence] = ACTIONS(1108),
  },
  [217] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(1110),
    [aux_sym_str_literal_token1] = ACTIONS(1112),
    [sym_escape_sequence] = ACTIONS(1114),
  },
  [218] = {
    [aux_sym_str_literal_repeat1] = STATE(220),
    [anon_sym_DQUOTE] = ACTIONS(1116),
    [aux_sym_str_literal_token1] = ACTIONS(1118),
    [sym_escape_sequence] = ACTIONS(1120),
  },
  [219] = {
    [aux_sym_str_literal_repeat1] = STATE(212),
    [anon_sym_DQUOTE] = ACTIONS(1122),
    [aux_sym_str_literal_token1] = ACTIONS(1124),
    [sym_escape_sequence] = ACTIONS(1126),
  },
  [220] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1128),
    [aux_sym_str_literal_token1] = ACTIONS(1060),
    [sym_escape_sequence] = ACTIONS(1062),
  },
  [221] = {
    [aux_sym_str_literal_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(1130),
    [aux_sym_str_literal_token1] = ACTIONS(1132),
    [sym_escape_sequence] = ACTIONS(1135),
  },
  [222] = {
    [aux_sym_str_literal_repeat1] = STATE(205),
    [anon_sym_DQUOTE] = ACTIONS(1138),
    [aux_sym_str_literal_token1] = ACTIONS(1140),
    [sym_escape_sequence] = ACTIONS(1142),
  },
  [223] = {
    [sym_interface_fn] = STATE(307),
    [anon_sym_Fn] = ACTIONS(1144),
    [anon_sym_] = ACTIONS(1144),
  },
  [224] = {
    [anon_sym_LPAREN] = ACTIONS(1146),
    [anon_sym_RPAREN] = ACTIONS(1146),
    [anon_sym_LBRACK] = ACTIONS(1146),
  },
  [225] = {
    [anon_sym_LPAREN] = ACTIONS(1148),
    [anon_sym_RPAREN] = ACTIONS(1148),
    [anon_sym_LBRACK] = ACTIONS(1148),
  },
  [226] = {
    [aux_sym_let_pairs_repeat1] = STATE(234),
    [anon_sym_RBRACK] = ACTIONS(1150),
    [sym_identifier] = ACTIONS(1152),
  },
  [227] = {
    [aux_sym__name_deftypes_repeat1] = STATE(235),
    [anon_sym_RPAREN] = ACTIONS(1154),
    [sym_identifier] = ACTIONS(1156),
  },
  [228] = {
    [aux_sym__deftype2_repeat1] = STATE(229),
    [anon_sym_LPAREN] = ACTIONS(1042),
    [anon_sym_RPAREN] = ACTIONS(1158),
  },
  [229] = {
    [aux_sym__deftype2_repeat1] = STATE(229),
    [anon_sym_LPAREN] = ACTIONS(1160),
    [anon_sym_RPAREN] = ACTIONS(1163),
  },
  [230] = {
    [aux_sym__name_deftypes_repeat1] = STATE(227),
    [anon_sym_RPAREN] = ACTIONS(1165),
    [sym_identifier] = ACTIONS(1167),
  },
  [231] = {
    [anon_sym_RBRACK] = ACTIONS(776),
    [anon_sym_COLON] = ACTIONS(776),
    [sym_identifier] = ACTIONS(776),
  },
  [232] = {
    [aux_sym_let_pairs_repeat1] = STATE(226),
    [anon_sym_RBRACK] = ACTIONS(1169),
    [sym_identifier] = ACTIONS(1152),
  },
  [233] = {
    [anon_sym_LPAREN] = ACTIONS(1171),
    [anon_sym_RPAREN] = ACTIONS(1171),
    [anon_sym_LBRACK] = ACTIONS(1171),
  },
  [234] = {
    [aux_sym_let_pairs_repeat1] = STATE(234),
    [anon_sym_RBRACK] = ACTIONS(1173),
    [sym_identifier] = ACTIONS(1175),
  },
  [235] = {
    [aux_sym__name_deftypes_repeat1] = STATE(235),
    [anon_sym_RPAREN] = ACTIONS(1178),
    [sym_identifier] = ACTIONS(1180),
  },
  [236] = {
    [anon_sym_RBRACK] = ACTIONS(764),
    [sym_identifier] = ACTIONS(764),
  },
  [237] = {
    [aux_sym_str_literal_token1] = ACTIONS(1183),
    [sym_escape_sequence] = ACTIONS(1185),
  },
  [238] = {
    [anon_sym_RBRACK] = ACTIONS(740),
    [sym_identifier] = ACTIONS(740),
  },
  [239] = {
    [anon_sym_RBRACK] = ACTIONS(663),
    [sym_identifier] = ACTIONS(663),
  },
  [240] = {
    [anon_sym_RBRACK] = ACTIONS(756),
    [sym_identifier] = ACTIONS(756),
  },
  [241] = {
    [anon_sym_RBRACK] = ACTIONS(752),
    [sym_identifier] = ACTIONS(752),
  },
  [242] = {
    [sym_parameters] = STATE(19),
    [anon_sym_LBRACK] = ACTIONS(1187),
  },
  [243] = {
    [anon_sym_RBRACK] = ACTIONS(748),
    [sym_identifier] = ACTIONS(748),
  },
  [244] = {
    [sym_str_literal] = STATE(184),
    [anon_sym_DQUOTE] = ACTIONS(71),
  },
  [245] = {
    [sym_typed_parameters] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(1189),
  },
  [246] = {
    [aux_sym_str_literal_token1] = ACTIONS(1191),
    [sym_escape_sequence] = ACTIONS(1193),
  },
  [247] = {
    [sym_parameters] = STATE(25),
    [anon_sym_LBRACK] = ACTIONS(1187),
  },
  [248] = {
    [anon_sym_RBRACK] = ACTIONS(744),
    [sym_identifier] = ACTIONS(744),
  },
  [249] = {
    [anon_sym_RBRACK] = ACTIONS(760),
    [sym_identifier] = ACTIONS(760),
  },
  [250] = {
    [sym_let_pairs] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(1195),
  },
  [251] = {
    [sym_fields] = STATE(291),
    [anon_sym_LBRACK] = ACTIONS(1046),
  },
  [252] = {
    [anon_sym_RBRACK] = ACTIONS(1197),
    [sym_identifier] = ACTIONS(1197),
  },
  [253] = {
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym_identifier] = ACTIONS(736),
  },
  [254] = {
    [aux_sym_str_literal_token1] = ACTIONS(1199),
    [sym_escape_sequence] = ACTIONS(1201),
  },
  [255] = {
    [sym_upper_identifier] = ACTIONS(1203),
    [sym_identifier] = ACTIONS(1205),
  },
  [256] = {
    [sym_parameters] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1187),
  },
  [257] = {
    [aux_sym_str_literal_token1] = ACTIONS(1207),
    [sym_escape_sequence] = ACTIONS(1209),
  },
  [258] = {
    [anon_sym_LPAREN] = ACTIONS(1211),
    [anon_sym_RPAREN] = ACTIONS(1211),
  },
  [259] = {
    [sym_str_literal] = STATE(184),
    [anon_sym_DQUOTE] = ACTIONS(197),
  },
  [260] = {
    [sym_parameters] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(1187),
  },
  [261] = {
    [aux_sym_str_literal_token1] = ACTIONS(1213),
    [sym_escape_sequence] = ACTIONS(1215),
  },
  [262] = {
    [sym_upper_identifier] = ACTIONS(1217),
    [sym_identifier] = ACTIONS(1219),
  },
  [263] = {
    [anon_sym_RBRACK] = ACTIONS(768),
    [sym_identifier] = ACTIONS(768),
  },
  [264] = {
    [anon_sym_RBRACK] = ACTIONS(772),
    [sym_identifier] = ACTIONS(772),
  },
  [265] = {
    [anon_sym_RBRACK] = ACTIONS(700),
    [sym_identifier] = ACTIONS(700),
  },
  [266] = {
    [anon_sym_RBRACK] = ACTIONS(800),
    [sym_identifier] = ACTIONS(800),
  },
  [267] = {
    [anon_sym_RBRACK] = ACTIONS(788),
    [sym_identifier] = ACTIONS(788),
  },
  [268] = {
    [anon_sym_RBRACK] = ACTIONS(780),
    [sym_identifier] = ACTIONS(780),
  },
  [269] = {
    [anon_sym_RBRACK] = ACTIONS(784),
    [sym_identifier] = ACTIONS(784),
  },
  [270] = {
    [sym_identifier] = ACTIONS(1221),
  },
  [271] = {
    [anon_sym_RPAREN] = ACTIONS(1223),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(1225),
  },
  [273] = {
    [sym_identifier] = ACTIONS(1227),
  },
  [274] = {
    [sym_identifier] = ACTIONS(1229),
  },
  [275] = {
    [aux_sym_line_comment_token1] = ACTIONS(1231),
  },
  [276] = {
    [anon_sym_RPAREN] = ACTIONS(1233),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(1235),
  },
  [278] = {
    [anon_sym_RPAREN] = ACTIONS(1237),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(1239),
  },
  [280] = {
    [sym_identifier] = ACTIONS(1241),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(1243),
  },
  [282] = {
    [aux_sym_line_comment_token1] = ACTIONS(1245),
  },
  [283] = {
    [anon_sym_RPAREN] = ACTIONS(1247),
  },
  [284] = {
    [sym_identifier] = ACTIONS(1249),
  },
  [285] = {
    [sym_identifier] = ACTIONS(1251),
  },
  [286] = {
    [sym_identifier] = ACTIONS(1253),
  },
  [287] = {
    [sym_identifier] = ACTIONS(1255),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(1257),
  },
  [289] = {
    [anon_sym_RPAREN] = ACTIONS(1259),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(1261),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(1263),
  },
  [292] = {
    [sym_identifier] = ACTIONS(1265),
  },
  [293] = {
    [aux_sym_line_comment_token1] = ACTIONS(1267),
  },
  [294] = {
    [anon_sym_RPAREN] = ACTIONS(1269),
  },
  [295] = {
    [anon_sym_RPAREN] = ACTIONS(1271),
  },
  [296] = {
    [sym_identifier] = ACTIONS(1273),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(1275),
  },
  [298] = {
    [aux_sym_line_comment_token1] = ACTIONS(1277),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(1279),
  },
  [300] = {
    [anon_sym_LPAREN] = ACTIONS(1281),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(1283),
  },
  [302] = {
    [sym_identifier] = ACTIONS(1285),
  },
  [303] = {
    [sym_identifier] = ACTIONS(1287),
  },
  [304] = {
    [anon_sym_RPAREN] = ACTIONS(1289),
  },
  [305] = {
    [aux_sym_line_comment_token1] = ACTIONS(1291),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(1293),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(1295),
  },
  [308] = {
    [anon_sym_RPAREN] = ACTIONS(1297),
  },
  [309] = {
    [anon_sym_RPAREN] = ACTIONS(1299),
  },
  [310] = {
    [anon_sym_RPAREN] = ACTIONS(1301),
  },
  [311] = {
    [anon_sym_RPAREN] = ACTIONS(1303),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(1305),
  },
  [313] = {
    [sym_identifier] = ACTIONS(1307),
  },
  [314] = {
    [sym_identifier] = ACTIONS(1309),
  },
  [315] = {
    [sym_identifier] = ACTIONS(1311),
  },
  [316] = {
    [sym_upper_identifier] = ACTIONS(1313),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(1315),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(275),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
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
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(55),
  [35] = {.count = 1, .reusable = false}, SHIFT(58),
  [37] = {.count = 1, .reusable = false}, SHIFT(61),
  [39] = {.count = 1, .reusable = false}, SHIFT(64),
  [41] = {.count = 1, .reusable = false}, SHIFT(287),
  [43] = {.count = 1, .reusable = false}, SHIFT(108),
  [45] = {.count = 1, .reusable = false}, SHIFT(42),
  [47] = {.count = 1, .reusable = false}, SHIFT(286),
  [49] = {.count = 1, .reusable = false}, SHIFT(285),
  [51] = {.count = 1, .reusable = false}, SHIFT(284),
  [53] = {.count = 1, .reusable = false}, SHIFT(274),
  [55] = {.count = 1, .reusable = false}, SHIFT(273),
  [57] = {.count = 1, .reusable = false}, SHIFT(201),
  [59] = {.count = 1, .reusable = true}, SHIFT(37),
  [61] = {.count = 1, .reusable = true}, SHIFT(38),
  [63] = {.count = 1, .reusable = true}, SHIFT(39),
  [65] = {.count = 1, .reusable = true}, SHIFT(40),
  [67] = {.count = 1, .reusable = false}, SHIFT(308),
  [69] = {.count = 1, .reusable = false}, SHIFT(194),
  [71] = {.count = 1, .reusable = true}, SHIFT(216),
  [73] = {.count = 1, .reusable = true}, SHIFT(261),
  [75] = {.count = 1, .reusable = true}, SHIFT(217),
  [77] = {.count = 1, .reusable = true}, SHIFT(159),
  [79] = {.count = 1, .reusable = true}, SHIFT(303),
  [81] = {.count = 1, .reusable = true}, SHIFT(131),
  [83] = {.count = 1, .reusable = false}, SHIFT(136),
  [85] = {.count = 1, .reusable = false}, SHIFT(311),
  [87] = {.count = 1, .reusable = false}, SHIFT(271),
  [89] = {.count = 1, .reusable = false}, SHIFT(277),
  [91] = {.count = 1, .reusable = false}, SHIFT(289),
  [93] = {.count = 1, .reusable = true}, SHIFT(293),
  [95] = {.count = 1, .reusable = true}, SHIFT(5),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 26),
  [99] = {.count = 1, .reusable = false}, SHIFT(314),
  [101] = {.count = 1, .reusable = true}, SHIFT(161),
  [103] = {.count = 1, .reusable = true}, SHIFT(36),
  [105] = {.count = 1, .reusable = true}, SHIFT(35),
  [107] = {.count = 1, .reusable = true}, SHIFT(57),
  [109] = {.count = 1, .reusable = true}, SHIFT(56),
  [111] = {.count = 1, .reusable = false}, SHIFT(119),
  [113] = {.count = 1, .reusable = false}, SHIFT(120),
  [115] = {.count = 1, .reusable = true}, SHIFT(209),
  [117] = {.count = 1, .reusable = true}, SHIFT(237),
  [119] = {.count = 1, .reusable = true}, SHIFT(222),
  [121] = {.count = 1, .reusable = true}, SHIFT(179),
  [123] = {.count = 1, .reusable = true}, SHIFT(270),
  [125] = {.count = 1, .reusable = true}, SHIFT(119),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 11),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(293),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(5),
  [135] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(314),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(161),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(36),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(35),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(57),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(56),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(119),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(120),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(209),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(237),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(222),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(179),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(270),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(119),
  [179] = {.count = 1, .reusable = true}, SHIFT(305),
  [181] = {.count = 1, .reusable = true}, SHIFT(6),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_match, 2, .production_id = 9),
  [185] = {.count = 1, .reusable = true}, SHIFT(137),
  [187] = {.count = 1, .reusable = true}, SHIFT(46),
  [189] = {.count = 1, .reusable = true}, SHIFT(45),
  [191] = {.count = 1, .reusable = true}, SHIFT(43),
  [193] = {.count = 1, .reusable = false}, SHIFT(63),
  [195] = {.count = 1, .reusable = false}, SHIFT(181),
  [197] = {.count = 1, .reusable = true}, SHIFT(218),
  [199] = {.count = 1, .reusable = true}, SHIFT(254),
  [201] = {.count = 1, .reusable = true}, SHIFT(202),
  [203] = {.count = 1, .reusable = true}, SHIFT(151),
  [205] = {.count = 1, .reusable = true}, SHIFT(63),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_match, 3, .production_id = 9),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(305),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(6),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(137),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(46),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(45),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(39),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(43),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(63),
  [235] = {.count = 2, .reusable = false}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(181),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(218),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(254),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(202),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(151),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(303),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(63),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [258] = {.count = 1, .reusable = false}, SHIFT(142),
  [260] = {.count = 1, .reusable = true}, SHIFT(142),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 5),
  [264] = {.count = 1, .reusable = false}, SHIFT(18),
  [266] = {.count = 1, .reusable = true}, SHIFT(18),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 33),
  [270] = {.count = 1, .reusable = false}, SHIFT(28),
  [272] = {.count = 1, .reusable = true}, SHIFT(28),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 21),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(305),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(6),
  [282] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(137),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(46),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(45),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(39),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(43),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(142),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(181),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(218),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(254),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(202),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(151),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(303),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(142),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 19),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 18),
  [327] = {.count = 1, .reusable = false}, SHIFT(15),
  [329] = {.count = 1, .reusable = true}, SHIFT(15),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 17),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [335] = {.count = 1, .reusable = false}, SHIFT(22),
  [337] = {.count = 1, .reusable = true}, SHIFT(22),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(305),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(6),
  [345] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(137),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(46),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(45),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(39),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(43),
  [362] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(22),
  [365] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(181),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(218),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(254),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(202),
  [377] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(151),
  [380] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(303),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(22),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 7),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 4),
  [392] = {.count = 1, .reusable = false}, SHIFT(20),
  [394] = {.count = 1, .reusable = true}, SHIFT(20),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [398] = {.count = 1, .reusable = false}, SHIFT(21),
  [400] = {.count = 1, .reusable = true}, SHIFT(21),
  [402] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [413] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(305),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(6),
  [428] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2),
  [430] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(137),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(46),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(45),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(39),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(43),
  [445] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(28),
  [448] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(181),
  [451] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(218),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(254),
  [457] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(202),
  [460] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(151),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(303),
  [466] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(28),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 8),
  [471] = {.count = 1, .reusable = false}, SHIFT(16),
  [473] = {.count = 1, .reusable = true}, SHIFT(16),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 18),
  [477] = {.count = 1, .reusable = true}, SHIFT(44),
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
  [499] = {.count = 1, .reusable = false}, SHIFT(279),
  [501] = {.count = 1, .reusable = true}, SHIFT(279),
  [503] = {.count = 1, .reusable = false}, SHIFT(125),
  [505] = {.count = 1, .reusable = true}, SHIFT(125),
  [507] = {.count = 1, .reusable = false}, SHIFT(126),
  [509] = {.count = 1, .reusable = true}, SHIFT(126),
  [511] = {.count = 1, .reusable = false}, SHIFT(155),
  [513] = {.count = 1, .reusable = true}, SHIFT(155),
  [515] = {.count = 1, .reusable = false}, SHIFT(156),
  [517] = {.count = 1, .reusable = true}, SHIFT(156),
  [519] = {.count = 1, .reusable = false}, SHIFT(134),
  [521] = {.count = 1, .reusable = true}, SHIFT(134),
  [523] = {.count = 1, .reusable = false}, SHIFT(133),
  [525] = {.count = 1, .reusable = true}, SHIFT(133),
  [527] = {.count = 1, .reusable = true}, SHIFT(282),
  [529] = {.count = 1, .reusable = true}, SHIFT(4),
  [531] = {.count = 1, .reusable = true}, SHIFT(172),
  [533] = {.count = 1, .reusable = true}, SHIFT(52),
  [535] = {.count = 1, .reusable = true}, SHIFT(41),
  [537] = {.count = 1, .reusable = true}, SHIFT(60),
  [539] = {.count = 1, .reusable = true}, SHIFT(54),
  [541] = {.count = 1, .reusable = false}, SHIFT(267),
  [543] = {.count = 1, .reusable = false}, SHIFT(264),
  [545] = {.count = 1, .reusable = true}, SHIFT(215),
  [547] = {.count = 1, .reusable = true}, SHIFT(257),
  [549] = {.count = 1, .reusable = true}, SHIFT(219),
  [551] = {.count = 1, .reusable = true}, SHIFT(166),
  [553] = {.count = 1, .reusable = true}, SHIFT(296),
  [555] = {.count = 1, .reusable = true}, SHIFT(267),
  [557] = {.count = 1, .reusable = false}, SHIFT(10),
  [559] = {.count = 1, .reusable = true}, SHIFT(10),
  [561] = {.count = 1, .reusable = true}, SHIFT(298),
  [563] = {.count = 1, .reusable = true}, SHIFT(2),
  [565] = {.count = 1, .reusable = true}, SHIFT(157),
  [567] = {.count = 1, .reusable = true}, SHIFT(51),
  [569] = {.count = 1, .reusable = true}, SHIFT(49),
  [571] = {.count = 1, .reusable = true}, SHIFT(48),
  [573] = {.count = 1, .reusable = true}, SHIFT(47),
  [575] = {.count = 1, .reusable = false}, SHIFT(91),
  [577] = {.count = 1, .reusable = false}, SHIFT(88),
  [579] = {.count = 1, .reusable = true}, SHIFT(214),
  [581] = {.count = 1, .reusable = true}, SHIFT(246),
  [583] = {.count = 1, .reusable = true}, SHIFT(213),
  [585] = {.count = 1, .reusable = true}, SHIFT(149),
  [587] = {.count = 1, .reusable = true}, SHIFT(292),
  [589] = {.count = 1, .reusable = true}, SHIFT(91),
  [591] = {.count = 1, .reusable = false}, SHIFT(92),
  [593] = {.count = 1, .reusable = true}, SHIFT(92),
  [595] = {.count = 1, .reusable = false}, SHIFT(93),
  [597] = {.count = 1, .reusable = true}, SHIFT(93),
  [599] = {.count = 1, .reusable = false}, SHIFT(252),
  [601] = {.count = 1, .reusable = true}, SHIFT(252),
  [603] = {.count = 1, .reusable = false}, SHIFT(96),
  [605] = {.count = 1, .reusable = true}, SHIFT(96),
  [607] = {.count = 1, .reusable = false}, SHIFT(266),
  [609] = {.count = 1, .reusable = true}, SHIFT(266),
  [611] = {.count = 1, .reusable = false}, SHIFT(128),
  [613] = {.count = 1, .reusable = true}, SHIFT(128),
  [615] = {.count = 1, .reusable = false}, SHIFT(268),
  [617] = {.count = 1, .reusable = true}, SHIFT(268),
  [619] = {.count = 1, .reusable = false}, SHIFT(59),
  [621] = {.count = 1, .reusable = true}, SHIFT(59),
  [623] = {.count = 1, .reusable = false}, SHIFT(115),
  [625] = {.count = 1, .reusable = true}, SHIFT(115),
  [627] = {.count = 1, .reusable = false}, SHIFT(114),
  [629] = {.count = 1, .reusable = true}, SHIFT(114),
  [631] = {.count = 1, .reusable = false}, SHIFT(29),
  [633] = {.count = 1, .reusable = true}, SHIFT(29),
  [635] = {.count = 1, .reusable = false}, SHIFT(65),
  [637] = {.count = 1, .reusable = true}, SHIFT(65),
  [639] = {.count = 1, .reusable = false}, SHIFT(269),
  [641] = {.count = 1, .reusable = true}, SHIFT(269),
  [643] = {.count = 1, .reusable = false}, SHIFT(276),
  [645] = {.count = 1, .reusable = true}, SHIFT(276),
  [647] = {.count = 1, .reusable = false}, SHIFT(283),
  [649] = {.count = 1, .reusable = true}, SHIFT(283),
  [651] = {.count = 1, .reusable = false}, SHIFT(145),
  [653] = {.count = 1, .reusable = true}, SHIFT(145),
  [655] = {.count = 1, .reusable = false}, SHIFT(301),
  [657] = {.count = 1, .reusable = true}, SHIFT(301),
  [659] = {.count = 1, .reusable = false}, SHIFT(312),
  [661] = {.count = 1, .reusable = true}, SHIFT(312),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [665] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [667] = {.count = 1, .reusable = true}, SHIFT(100),
  [669] = {.count = 1, .reusable = true}, SHIFT(97),
  [671] = {.count = 1, .reusable = false}, SHIFT(95),
  [673] = {.count = 1, .reusable = false}, SHIFT(94),
  [675] = {.count = 1, .reusable = true}, SHIFT(98),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(100),
  [680] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [682] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(95),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(51),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(49),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(48),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(47),
  [697] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(94),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [702] = {.count = 1, .reusable = false}, REDUCE(sym_line_comment, 2),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_other_str, 1),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_other_str, 1),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_operators, 1),
  [710] = {.count = 1, .reusable = false}, REDUCE(sym_operators, 1),
  [712] = {.count = 1, .reusable = true}, SHIFT(106),
  [714] = {.count = 1, .reusable = false}, SHIFT(147),
  [716] = {.count = 1, .reusable = false}, SHIFT(150),
  [718] = {.count = 1, .reusable = true}, SHIFT(77),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [726] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [728] = {.count = 1, .reusable = true}, SHIFT(173),
  [730] = {.count = 1, .reusable = false}, SHIFT(121),
  [732] = {.count = 1, .reusable = false}, SHIFT(245),
  [734] = {.count = 1, .reusable = false}, SHIFT(99),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [738] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [742] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [754] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [756] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [758] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [762] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [764] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [766] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [774] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [778] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [782] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [786] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [790] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [794] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 10),
  [798] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 10),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [802] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [806] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [810] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [812] = {.count = 1, .reusable = true}, SHIFT(143),
  [814] = {.count = 1, .reusable = false}, SHIFT(102),
  [816] = {.count = 1, .reusable = true}, SHIFT(76),
  [818] = {.count = 1, .reusable = false}, SHIFT(105),
  [820] = {.count = 1, .reusable = true}, SHIFT(299),
  [822] = {.count = 1, .reusable = false}, SHIFT(107),
  [824] = {.count = 1, .reusable = false}, SHIFT(109),
  [826] = {.count = 2, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(100),
  [829] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [831] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(121),
  [834] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(102),
  [837] = {.count = 1, .reusable = true}, SHIFT(288),
  [839] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(100),
  [842] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [844] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(107),
  [847] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(109),
  [850] = {.count = 1, .reusable = true}, SHIFT(75),
  [852] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 42),
  [854] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 42),
  [856] = {.count = 1, .reusable = true}, SHIFT(112),
  [858] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1),
  [860] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1),
  [862] = {.count = 1, .reusable = true}, SHIFT(123),
  [864] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 42),
  [866] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 42),
  [868] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [870] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [872] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [874] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [876] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2),
  [878] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40),
  [880] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [884] = {.count = 1, .reusable = true}, SHIFT(262),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [890] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [892] = {.count = 1, .reusable = true}, SHIFT(182),
  [894] = {.count = 1, .reusable = false}, SHIFT(153),
  [896] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(152),
  [899] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(185),
  [902] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(194),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(216),
  [908] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(261),
  [911] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(217),
  [914] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(159),
  [917] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31),
  [919] = {.count = 1, .reusable = false}, SHIFT(185),
  [921] = {.count = 1, .reusable = true}, SHIFT(80),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [925] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [927] = {.count = 1, .reusable = true}, SHIFT(189),
  [929] = {.count = 1, .reusable = false}, SHIFT(175),
  [931] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [933] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_call_with_module, 3, .production_id = 32),
  [937] = {.count = 1, .reusable = false}, REDUCE(sym_call_with_module, 3, .production_id = 32),
  [939] = {.count = 1, .reusable = true}, REDUCE(sym_match_case, 2, .production_id = 38),
  [941] = {.count = 1, .reusable = false}, REDUCE(sym_match_case, 2, .production_id = 38),
  [943] = {.count = 1, .reusable = true}, SHIFT(83),
  [945] = {.count = 1, .reusable = true}, SHIFT(85),
  [947] = {.count = 1, .reusable = true}, SHIFT(171),
  [949] = {.count = 1, .reusable = true}, SHIFT(190),
  [951] = {.count = 1, .reusable = false}, SHIFT(141),
  [953] = {.count = 1, .reusable = true}, SHIFT(169),
  [955] = {.count = 1, .reusable = true}, SHIFT(164),
  [957] = {.count = 1, .reusable = true}, SHIFT(87),
  [959] = {.count = 1, .reusable = false}, SHIFT(148),
  [961] = {.count = 1, .reusable = true}, SHIFT(248),
  [963] = {.count = 1, .reusable = true}, SHIFT(187),
  [965] = {.count = 1, .reusable = true}, SHIFT(110),
  [967] = {.count = 1, .reusable = true}, SHIFT(111),
  [969] = {.count = 1, .reusable = false}, SHIFT(160),
  [971] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [973] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [975] = {.count = 1, .reusable = true}, SHIFT(188),
  [977] = {.count = 1, .reusable = true}, SHIFT(240),
  [979] = {.count = 1, .reusable = true}, SHIFT(249),
  [981] = {.count = 1, .reusable = true}, SHIFT(263),
  [983] = {.count = 1, .reusable = false}, SHIFT(165),
  [985] = {.count = 1, .reusable = true}, SHIFT(116),
  [987] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(152),
  [990] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [992] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(175),
  [995] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(194),
  [998] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(216),
  [1001] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(261),
  [1004] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(217),
  [1007] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(159),
  [1010] = {.count = 1, .reusable = true}, SHIFT(130),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [1014] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [1016] = {.count = 1, .reusable = true}, REDUCE(sym_doc, 3, .production_id = 15),
  [1018] = {.count = 1, .reusable = false}, REDUCE(sym_doc, 3, .production_id = 15),
  [1020] = {.count = 1, .reusable = false}, SHIFT(196),
  [1022] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [1024] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [1026] = {.count = 1, .reusable = true}, SHIFT(135),
  [1028] = {.count = 1, .reusable = true}, SHIFT(199),
  [1030] = {.count = 1, .reusable = true}, SHIFT(162),
  [1032] = {.count = 1, .reusable = true}, SHIFT(197),
  [1034] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1036] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(296),
  [1039] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(199),
  [1042] = {.count = 1, .reusable = true}, SHIFT(255),
  [1044] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 13),
  [1046] = {.count = 1, .reusable = true}, SHIFT(101),
  [1048] = {.count = 1, .reusable = true}, SHIFT(280),
  [1050] = {.count = 1, .reusable = true}, SHIFT(225),
  [1052] = {.count = 1, .reusable = false}, SHIFT(176),
  [1054] = {.count = 1, .reusable = false}, SHIFT(203),
  [1056] = {.count = 1, .reusable = true}, SHIFT(203),
  [1058] = {.count = 1, .reusable = false}, SHIFT(167),
  [1060] = {.count = 1, .reusable = false}, SHIFT(221),
  [1062] = {.count = 1, .reusable = true}, SHIFT(221),
  [1064] = {.count = 1, .reusable = false}, SHIFT(132),
  [1066] = {.count = 1, .reusable = false}, SHIFT(124),
  [1068] = {.count = 1, .reusable = false}, SHIFT(81),
  [1070] = {.count = 1, .reusable = false}, SHIFT(241),
  [1072] = {.count = 1, .reusable = false}, SHIFT(191),
  [1074] = {.count = 1, .reusable = false}, SHIFT(122),
  [1076] = {.count = 1, .reusable = false}, SHIFT(204),
  [1078] = {.count = 1, .reusable = true}, SHIFT(204),
  [1080] = {.count = 1, .reusable = false}, SHIFT(82),
  [1082] = {.count = 1, .reusable = false}, SHIFT(186),
  [1084] = {.count = 1, .reusable = false}, SHIFT(243),
  [1086] = {.count = 1, .reusable = false}, SHIFT(79),
  [1088] = {.count = 1, .reusable = false}, SHIFT(206),
  [1090] = {.count = 1, .reusable = true}, SHIFT(206),
  [1092] = {.count = 1, .reusable = false}, SHIFT(78),
  [1094] = {.count = 1, .reusable = false}, SHIFT(210),
  [1096] = {.count = 1, .reusable = true}, SHIFT(210),
  [1098] = {.count = 1, .reusable = false}, SHIFT(253),
  [1100] = {.count = 1, .reusable = false}, SHIFT(207),
  [1102] = {.count = 1, .reusable = true}, SHIFT(207),
  [1104] = {.count = 1, .reusable = false}, SHIFT(195),
  [1106] = {.count = 1, .reusable = false}, SHIFT(211),
  [1108] = {.count = 1, .reusable = true}, SHIFT(211),
  [1110] = {.count = 1, .reusable = false}, SHIFT(192),
  [1112] = {.count = 1, .reusable = false}, SHIFT(208),
  [1114] = {.count = 1, .reusable = true}, SHIFT(208),
  [1116] = {.count = 1, .reusable = false}, SHIFT(178),
  [1118] = {.count = 1, .reusable = false}, SHIFT(220),
  [1120] = {.count = 1, .reusable = true}, SHIFT(220),
  [1122] = {.count = 1, .reusable = false}, SHIFT(238),
  [1124] = {.count = 1, .reusable = false}, SHIFT(212),
  [1126] = {.count = 1, .reusable = true}, SHIFT(212),
  [1128] = {.count = 1, .reusable = false}, SHIFT(168),
  [1130] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [1132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(221),
  [1135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(221),
  [1138] = {.count = 1, .reusable = false}, SHIFT(129),
  [1140] = {.count = 1, .reusable = false}, SHIFT(205),
  [1142] = {.count = 1, .reusable = true}, SHIFT(205),
  [1144] = {.count = 1, .reusable = true}, SHIFT(245),
  [1146] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 11),
  [1148] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [1150] = {.count = 1, .reusable = true}, SHIFT(140),
  [1152] = {.count = 1, .reusable = true}, SHIFT(50),
  [1154] = {.count = 1, .reusable = true}, SHIFT(233),
  [1156] = {.count = 1, .reusable = true}, SHIFT(235),
  [1158] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 28),
  [1160] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 43), SHIFT_REPEAT(255),
  [1163] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 43),
  [1165] = {.count = 1, .reusable = true}, SHIFT(224),
  [1167] = {.count = 1, .reusable = true}, SHIFT(227),
  [1169] = {.count = 1, .reusable = true}, SHIFT(183),
  [1171] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 45),
  [1173] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36),
  [1175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36), SHIFT_REPEAT(50),
  [1178] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [1180] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(235),
  [1183] = {.count = 1, .reusable = false}, SHIFT(127),
  [1185] = {.count = 1, .reusable = true}, SHIFT(127),
  [1187] = {.count = 1, .reusable = true}, SHIFT(198),
  [1189] = {.count = 1, .reusable = true}, SHIFT(68),
  [1191] = {.count = 1, .reusable = false}, SHIFT(86),
  [1193] = {.count = 1, .reusable = true}, SHIFT(86),
  [1195] = {.count = 1, .reusable = true}, SHIFT(232),
  [1197] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [1199] = {.count = 1, .reusable = false}, SHIFT(177),
  [1201] = {.count = 1, .reusable = true}, SHIFT(177),
  [1203] = {.count = 1, .reusable = true}, SHIFT(251),
  [1205] = {.count = 1, .reusable = false}, SHIFT(251),
  [1207] = {.count = 1, .reusable = false}, SHIFT(236),
  [1209] = {.count = 1, .reusable = true}, SHIFT(236),
  [1211] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 47),
  [1213] = {.count = 1, .reusable = false}, SHIFT(193),
  [1215] = {.count = 1, .reusable = true}, SHIFT(193),
  [1217] = {.count = 1, .reusable = true}, SHIFT(144),
  [1219] = {.count = 1, .reusable = false}, SHIFT(144),
  [1221] = {.count = 1, .reusable = true}, SHIFT(118),
  [1223] = {.count = 1, .reusable = true}, SHIFT(239),
  [1225] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 12),
  [1227] = {.count = 1, .reusable = true}, SHIFT(8),
  [1229] = {.count = 1, .reusable = true}, SHIFT(260),
  [1231] = {.count = 1, .reusable = true}, SHIFT(70),
  [1233] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 9),
  [1235] = {.count = 1, .reusable = true}, SHIFT(113),
  [1237] = {.count = 1, .reusable = true}, REDUCE(sym_use, 2, .production_id = 3),
  [1239] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 16),
  [1241] = {.count = 1, .reusable = true}, SHIFT(230),
  [1243] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 46),
  [1245] = {.count = 1, .reusable = true}, SHIFT(265),
  [1247] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 22),
  [1249] = {.count = 1, .reusable = true}, SHIFT(256),
  [1251] = {.count = 1, .reusable = true}, SHIFT(300),
  [1253] = {.count = 1, .reusable = true}, SHIFT(74),
  [1255] = {.count = 1, .reusable = true}, SHIFT(62),
  [1257] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [1259] = {.count = 1, .reusable = true}, SHIFT(170),
  [1261] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 23),
  [1263] = {.count = 1, .reusable = true}, SHIFT(258),
  [1265] = {.count = 1, .reusable = true}, SHIFT(90),
  [1267] = {.count = 1, .reusable = true}, SHIFT(117),
  [1269] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 44),
  [1271] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 44),
  [1273] = {.count = 1, .reusable = true}, SHIFT(231),
  [1275] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 27),
  [1277] = {.count = 1, .reusable = true}, SHIFT(89),
  [1279] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [1281] = {.count = 1, .reusable = true}, SHIFT(223),
  [1283] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 9),
  [1285] = {.count = 1, .reusable = true}, SHIFT(242),
  [1287] = {.count = 1, .reusable = true}, SHIFT(146),
  [1289] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 33),
  [1291] = {.count = 1, .reusable = true}, SHIFT(180),
  [1293] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 33),
  [1295] = {.count = 1, .reusable = true}, SHIFT(294),
  [1297] = {.count = 1, .reusable = true}, SHIFT(84),
  [1299] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 39),
  [1301] = {.count = 1, .reusable = true}, SHIFT(295),
  [1303] = {.count = 1, .reusable = true}, SHIFT(66),
  [1305] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 37),
  [1307] = {.count = 1, .reusable = true}, SHIFT(34),
  [1309] = {.count = 1, .reusable = true}, SHIFT(259),
  [1311] = {.count = 1, .reusable = true}, SHIFT(244),
  [1313] = {.count = 1, .reusable = true}, SHIFT(278),
  [1315] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
