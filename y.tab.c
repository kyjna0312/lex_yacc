/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "kim.y"

	#include "type.h"

	extern int line_no, syntax_err;
	extern A_NODE *root;
	extern A_ID *current_id;
	extern int current_level;
	extern A_TYPE *int_type;

#line 80 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    TYPE_IDENTIFIER = 259,
    FLOAT_CONSTANT = 260,
    INTEGER_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    STRING_LITERAL = 263,
    PLUS = 264,
    MINUS = 265,
    PLUSPLUS = 266,
    MINUSMINUS = 267,
    BAR = 268,
    AMP = 269,
    BARBAR = 270,
    AMPAMP = 271,
    ARROW = 272,
    SEMICOLON = 273,
    LSS = 274,
    GTR = 275,
    LEQ = 276,
    GEQ = 277,
    EQL = 278,
    NEQ = 279,
    DOTDOTDOT = 280,
    LP = 281,
    RP = 282,
    LB = 283,
    RB = 284,
    LR = 285,
    RR = 286,
    PERIOD = 287,
    COMMA = 288,
    EXCL = 289,
    STAR = 290,
    SLASH = 291,
    PERCENT = 292,
    ASSIGN = 293,
    COLON = 294,
    AUTO_SYM = 295,
    STATIC_SYM = 296,
    TYPEDEF_SYM = 297,
    STRUCT_SYM = 298,
    ENUM_SYM = 299,
    SIZEOF_SYM = 300,
    UNION_SYM = 301,
    IF_SYM = 302,
    ELSE_SYM = 303,
    WHILE_SYM = 304,
    DO_SYM = 305,
    FOR_SYM = 306,
    CONTINUE_SYM = 307,
    BREAK_SYM = 308,
    RETURN_SYM = 309,
    SWITCH_SYM = 310,
    CASE_SYM = 311,
    DEFAULT_SYM = 312
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define BAR 268
#define AMP 269
#define BARBAR 270
#define AMPAMP 271
#define ARROW 272
#define SEMICOLON 273
#define LSS 274
#define GTR 275
#define LEQ 276
#define GEQ 277
#define EQL 278
#define NEQ 279
#define DOTDOTDOT 280
#define LP 281
#define RP 282
#define LB 283
#define RB 284
#define LR 285
#define RR 286
#define PERIOD 287
#define COMMA 288
#define EXCL 289
#define STAR 290
#define SLASH 291
#define PERCENT 292
#define ASSIGN 293
#define COLON 294
#define AUTO_SYM 295
#define STATIC_SYM 296
#define TYPEDEF_SYM 297
#define STRUCT_SYM 298
#define ENUM_SYM 299
#define SIZEOF_SYM 300
#define UNION_SYM 301
#define IF_SYM 302
#define ELSE_SYM 303
#define WHILE_SYM 304
#define DO_SYM 305
#define FOR_SYM 306
#define CONTINUE_SYM 307
#define BREAK_SYM 308
#define RETURN_SYM 309
#define SWITCH_SYM 310
#define CASE_SYM 311
#define DEFAULT_SYM 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  296

#define YYUNDEFTOK  2
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    16,    16,    20,    21,    25,    26,    30,    30,    31,
      31,    35,    36,    40,    41,    45,    49,    50,    51,    52,
      56,    57,    58,    62,    63,    67,    68,    72,    73,    77,
      78,    82,    83,    87,    88,    89,    93,    93,    93,    94,
      94,    94,    95,    99,   100,   104,   105,   109,   113,   114,
     118,   122,   122,   123,   123,   124,   128,   129,   133,   134,
     134,   138,   139,   143,   144,   148,   149,   150,   151,   151,
     155,   156,   160,   161,   165,   166,   170,   171,   175,   176,
     180,   181,   182,   186,   187,   188,   189,   190,   194,   195,
     199,   200,   204,   205,   206,   207,   208,   209,   213,   214,
     218,   218,   222,   223,   227,   228,   229,   233,   234,   235,
     239,   243,   244,   248,   249,   250,   254,   255,   259,   260,
     264,   265,   269,   273,   277,   281,   282,   286,   290,   291,
     295,   296,   300,   304,   308,   312,   313,   314,   318,   319,
     320,   321,   322,   326,   330,   331,   332,   336,   337,   338,
     339,   343,   344,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   361,   362,   363,   364,   365,   366,   367,
     371,   372,   373,   374,   375,   376,   380
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS", "MINUSMINUS", "BAR",
  "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON", "LSS", "GTR", "LEQ",
  "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR",
  "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "ASSIGN", "COLON",
  "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM", "ENUM_SYM",
  "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM", "DO_SYM",
  "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM",
  "CASE_SYM", "DEFAULT_SYM", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF (-231)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     176,  -231,  -231,    26,    54,  -231,  -231,  -231,  -231,    46,
    -231,    98,   176,  -231,  -231,  -231,    26,    81,    81,  -231,
     105,  -231,  -231,    27,    88,    84,  -231,    71,   100,  -231,
    -231,   122,    85,  -231,    57,  -231,  -231,   121,   132,   141,
      88,  -231,   332,  -231,   158,   165,  -231,    26,    30,   141,
     159,  -231,  -231,  -231,    81,  -231,  -231,  -231,  -231,  -231,
     332,   332,   373,   373,   332,   319,   332,   332,   386,   167,
    -231,  -231,  -231,  -231,  -231,   172,   184,  -231,  -231,  -231,
      22,   155,  -231,    61,   129,  -231,   163,   269,  -231,   165,
     169,   106,  -231,   175,  -231,   171,    30,  -231,  -231,  -231,
    -231,    89,    81,    31,   185,  -231,   181,  -231,  -231,  -231,
    -231,   332,  -231,  -231,  -231,    74,   188,   194,  -231,  -231,
     319,  -231,  -231,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,  -231,  -231,   220,
     332,   332,   221,   117,   192,  -231,   165,    26,  -231,   128,
      89,    26,   138,  -231,   264,    81,  -231,    26,   103,   332,
    -231,    60,  -231,  -231,   108,  -231,   384,   201,   157,  -231,
    -231,   332,   208,   184,  -231,   155,   155,  -231,  -231,  -231,
    -231,   129,   129,  -231,  -231,  -231,  -231,  -231,   211,   207,
    -231,   219,  -231,  -231,   332,  -231,  -231,  -231,    30,   182,
      14,  -231,  -231,  -231,  -231,  -231,   223,   225,   264,   226,
     235,   250,   332,   251,   332,   240,   252,   264,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,   266,  -231,   258,   260,   259,
     108,    81,   332,  -231,  -231,  -231,  -231,  -231,   332,  -231,
    -231,  -231,  -231,  -231,    26,   332,   332,   242,   332,  -231,
    -231,   271,   332,   253,   264,  -231,  -231,  -231,  -231,  -231,
    -231,   273,   267,  -231,  -231,   276,   277,   279,   280,   275,
    -231,  -231,   281,   264,  -231,  -231,  -231,   264,   264,   332,
     264,   332,   264,  -231,   262,  -231,   285,  -231,   288,  -231,
     264,   314,   332,  -231,  -231,  -231
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,     0,    25,     7,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    24,    25,    27,     0,    28,    29,     8,
      37,     0,    11,    78,     0,    71,    72,    74,   160,   151,
     159,     0,   154,   155,   156,    78,     0,     0,   158,   157,
       0,   161,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,     0,
     116,     0,     0,     0,     0,    54,     0,     0,    31,     0,
       0,     0,     0,    45,    88,    12,    13,    23,    70,   120,
      76,    81,    77,    79,    80,    69,     0,    70,    81,   176,
     175,     0,     0,   129,   131,   136,   137,   139,   140,   141,
     142,   145,   146,   148,   149,   150,   126,   167,     0,   117,
     118,     0,   166,    52,     0,    57,    26,    30,     0,     0,
       0,    48,    50,    41,    46,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    92,
      93,    94,    95,    96,    97,     0,    14,     0,     0,     0,
      82,    70,   120,    73,    75,   152,   162,   165,     0,   164,
      60,    32,    38,    47,     0,     0,     0,     0,   111,   114,
     115,     0,     0,     0,     0,   101,    91,   103,    86,    83,
      84,     0,     0,   119,    49,     0,     0,     0,     0,     0,
     112,   113,     0,     0,    99,    87,    85,     0,     0,     0,
       0,   111,     0,    98,   104,   107,     0,   109,     0,   106,
       0,     0,   111,   105,   108,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,  -231,   322,  -231,  -231,  -231,  -231,  -231,   -83,
       8,  -231,  -231,   289,   -35,   -85,  -231,   -73,  -231,  -231,
    -231,  -231,  -231,  -231,   197,  -125,  -231,   107,  -231,  -231,
    -231,   261,   202,  -231,     2,     0,   -20,  -231,   -53,  -231,
    -231,   183,   237,   -91,  -118,  -231,  -231,  -186,  -231,     9,
    -231,  -231,  -231,  -231,  -231,  -230,  -231,  -231,  -231,  -135,
     -41,   -42,  -231,  -119,  -231,  -231,   232,   233,  -231,  -231,
    -231,   -45,   104,  -231,    23,   -51,   131,  -231,  -231,   236
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   154,   155,    15,
     103,    17,    31,    32,    33,    97,   149,    18,    19,    50,
     150,    38,   101,    20,   152,   153,   200,   201,    21,    44,
      28,    91,    92,   144,    95,    23,    24,    54,   227,   105,
     106,   107,   162,   163,   164,   216,   217,   218,   219,   220,
     102,   221,   222,   223,   268,   269,   224,   188,   189,    69,
      70,   225,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   104,    22,    40,    26,    25,    71,    98,    16,   108,
     110,   148,    94,   114,    22,   118,   119,   186,    34,   156,
      16,   190,   247,   116,   229,    35,    36,   204,   151,     1,
       1,   256,   243,    55,     1,    56,    57,    58,    59,    60,
      61,    62,    63,   230,    64,   125,   126,   244,    53,    27,
     230,   288,     3,     3,    71,    98,    65,   158,    99,   159,
      96,     4,   295,     1,    66,    67,     4,   228,   274,   116,
     131,   132,   226,   115,   204,    68,   228,   151,   116,   151,
     175,   176,   183,   184,   185,     2,   158,   283,   159,     4,
     -27,   284,   285,     2,   287,    48,   289,   262,    29,   191,
     167,   -51,   159,   161,   293,   160,     1,     2,    37,     4,
     157,    43,   196,   241,    41,   168,    42,    71,    47,   263,
     235,     5,     6,     7,     8,     9,   151,    10,   115,   158,
      45,   159,     8,     9,   231,    10,   232,   145,     4,   146,
      46,    40,     2,     5,     6,     7,     8,     9,   193,    10,
     146,   -36,   240,   202,   181,   182,    71,    98,   161,   197,
      25,   198,    51,   157,   133,   134,   135,   168,    90,   203,
     251,    52,    71,   253,   127,   128,   129,   130,   261,     1,
       2,     8,     9,   167,    10,   159,     2,   123,    89,   100,
      71,   109,   109,   112,   113,   109,   122,   109,   109,   121,
     124,   136,     3,   265,   266,     2,   270,   -59,   147,    48,
     272,     4,   165,   242,   166,   170,     5,     6,     7,     8,
       9,   171,    10,   187,   192,     8,     9,   167,    10,   159,
     194,   177,   178,   179,   180,   236,     4,   286,   237,   270,
     238,     5,     6,     7,     8,     9,   202,    10,   239,   245,
     270,   246,   248,   249,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,    55,   250,    56,
      57,    58,    59,    60,    61,    62,    63,   252,    64,   254,
     137,   138,   205,   255,   257,   258,   139,   259,   260,   271,
      65,   267,   273,   281,    52,   140,   276,   141,    66,    67,
     275,   142,   109,   277,   278,   279,   292,   280,   282,    68,
     290,   206,   291,   207,   208,   209,   210,   211,   212,   213,
     214,   215,    55,     2,    56,    57,    58,    59,    60,    61,
      62,    63,   294,    64,    30,    55,    93,    56,    57,    58,
      59,    60,    61,    62,    63,    65,    64,   199,   195,   234,
     143,   264,   169,    66,    67,   173,   172,   174,    65,     5,
       6,     7,     8,     9,    68,    10,    66,    67,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    68,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,     2,    55,
       0,    56,    57,    58,    59,    60,    61,    62,    63,   111,
      64,     0,     0,     0,     0,     0,     0,    66,    67,   233,
       0,     0,   120,     0,     0,     0,     0,     0,    68,     0,
      66,    67,     0,     0,     5,     6,     7,     8,     9,     0,
      10,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     0,    23,     4,     3,    48,    48,     0,    60,
      61,    96,    47,    64,    12,    66,    67,   136,    16,   102,
      12,   140,   208,    65,   159,    17,    18,   152,   101,     3,
       3,   217,    18,     3,     3,     5,     6,     7,     8,     9,
      10,    11,    12,   161,    14,    23,    24,    33,    39,     3,
     168,   281,    26,    26,    96,    96,    26,    26,    49,    28,
      30,    35,   292,     3,    34,    35,    35,   158,   254,   111,
       9,    10,   155,    65,   199,    45,   167,   150,   120,   152,
     125,   126,   133,   134,   135,     4,    26,   273,    28,    35,
      33,   277,   278,     4,   280,    38,   282,   232,     0,   141,
      26,    30,    28,   103,   290,   103,     3,     4,     3,    35,
     102,    27,   147,   198,    26,   115,    28,   159,    33,   238,
     171,    40,    41,    42,    43,    44,   199,    46,   120,    26,
      30,    28,    43,    44,    26,    46,    28,    31,    35,    33,
      18,   161,     4,    40,    41,    42,    43,    44,    31,    46,
      33,    30,   194,   151,   131,   132,   198,   198,   158,    31,
     158,    33,    30,   155,    35,    36,    37,   167,     3,    31,
     212,    30,   214,   214,    19,    20,    21,    22,   231,     3,
       4,    43,    44,    26,    46,    28,     4,    15,    30,    30,
     232,    60,    61,    62,    63,    64,    29,    66,    67,    68,
      16,    38,    26,   245,   246,     4,   248,    38,    33,    38,
     252,    35,    27,    31,    33,    27,    40,    41,    42,    43,
      44,    27,    46,     3,     3,    43,    44,    26,    46,    28,
      38,   127,   128,   129,   130,    27,    35,   279,    27,   281,
      33,    40,    41,    42,    43,    44,   244,    46,    29,    26,
     292,    26,    26,    18,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     3,    18,     5,
       6,     7,     8,     9,    10,    11,    12,    26,    14,    39,
      11,    12,    18,    31,    18,    27,    17,    27,    29,    18,
      26,    49,    39,    18,    30,    26,    29,    28,    34,    35,
      27,    32,   171,    27,    27,    26,    18,    27,    27,    45,
      48,    47,    27,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    18,    14,    12,     3,    47,     5,     6,     7,
       8,     9,    10,    11,    12,    26,    14,   150,   146,   166,
      89,   244,   115,    34,    35,   123,   120,   124,    26,    40,
      41,    42,    43,    44,    45,    46,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    45,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,     4,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    26,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    25,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      34,    35,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    26,    35,    40,    41,    42,    43,    44,
      46,    59,    60,    61,    62,    67,    68,    69,    75,    76,
      81,    86,    92,    93,    94,    92,    93,     3,    88,     0,
      61,    70,    71,    72,    92,    68,    68,     3,    79,    64,
      94,    26,    28,    27,    87,    30,    18,    33,    38,    63,
      77,    30,    30,   107,    95,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    14,    26,    34,    35,    45,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    30,
       3,    89,    90,    71,    72,    92,    30,    73,   118,   107,
      30,    80,   108,    68,    96,    97,    98,    99,   133,   134,
     133,    26,   134,   134,   133,    68,   119,   137,   133,   133,
      26,   134,    29,    15,    16,    23,    24,    19,    20,    21,
      22,     9,    10,    35,    36,    37,    38,    11,    12,    17,
      26,    28,    32,    89,    91,    31,    33,    33,    73,    74,
      78,    75,    82,    83,    65,    66,    67,    68,    26,    28,
      92,    93,   100,   101,   102,    27,    33,    26,    93,   100,
      27,    27,   137,   124,   125,   129,   129,   130,   130,   130,
     130,   132,   132,   133,   133,   133,   121,     3,   115,   116,
     121,   119,     3,    31,    38,    90,    72,    31,    33,    82,
      84,    85,    92,    31,    83,    18,    47,    49,    50,    51,
      52,    53,    54,    55,    56,    57,   103,   104,   105,   106,
     107,   109,   110,   111,   114,   119,    67,    96,   101,   117,
     102,    26,    28,    25,    99,   133,    27,    27,    33,    29,
     119,    73,    31,    18,    33,    26,    26,   105,    26,    18,
      18,   119,    26,   118,    39,    31,   105,    18,    27,    27,
      29,    96,   117,   121,    85,   119,   119,    49,   112,   113,
     119,    18,   119,    39,   105,    27,    29,    27,    27,    26,
      27,    18,    27,   105,   105,   105,   119,   105,   113,   105,
      48,    27,    18,   105,    18,   113
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      62,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    77,    78,    76,    79,
      80,    76,    76,    81,    81,    82,    82,    83,    84,    84,
      85,    87,    86,    88,    86,    86,    89,    89,    90,    91,
      90,    92,    92,    93,    93,    94,    94,    94,    95,    94,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     108,   107,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   126,   127,   128,   128,   128,   129,   129,
     129,   129,   129,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   137
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 16 "kim.y"
                 {root=makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1682 "y.tab.c"
    break;

  case 3:
#line 20 "kim.y"
                     {yyval=yyvsp[0];}
#line 1688 "y.tab.c"
    break;

  case 4:
#line 21 "kim.y"
                                       {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1694 "y.tab.c"
    break;

  case 5:
#line 25 "kim.y"
                    {yyval=yyvsp[0];}
#line 1700 "y.tab.c"
    break;

  case 6:
#line 26 "kim.y"
             {yyval=yyvsp[0];}
#line 1706 "y.tab.c"
    break;

  case 7:
#line 30 "kim.y"
                                 {yyval=setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1712 "y.tab.c"
    break;

  case 8:
#line 30 "kim.y"
                                                                                                {yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1718 "y.tab.c"
    break;

  case 9:
#line 31 "kim.y"
           {yyval=setFunctionDeclaratorSpecifire(yyvsp[0], makeSpecifier(int_type, 0));}
#line 1724 "y.tab.c"
    break;

  case 10:
#line 31 "kim.y"
                                                                                                  {yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1730 "y.tab.c"
    break;

  case 11:
#line 35 "kim.y"
{yyval=NIL;}
#line 1736 "y.tab.c"
    break;

  case 12:
#line 36 "kim.y"
                  {yyval=yyvsp[0];}
#line 1742 "y.tab.c"
    break;

  case 13:
#line 40 "kim.y"
            {yyval=yyvsp[0];}
#line 1748 "y.tab.c"
    break;

  case 14:
#line 41 "kim.y"
                              {yyval=linkDeclaratorLisr(yyvsp[-1], yyvsp[0]);}
#line 1754 "y.tab.c"
    break;

  case 15:
#line 45 "kim.y"
                                                          {yyval=setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1760 "y.tab.c"
    break;

  case 16:
#line 49 "kim.y"
               {yyval=makeSpecifier(yyvsp[0], 0);}
#line 1766 "y.tab.c"
    break;

  case 17:
#line 50 "kim.y"
                         {yyval=makeSpecifier(0, yyvsp[0]);}
#line 1772 "y.tab.c"
    break;

  case 18:
#line 51 "kim.y"
                                       {yyval=updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1778 "y.tab.c"
    break;

  case 19:
#line 52 "kim.y"
                                                {yyval=updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1784 "y.tab.c"
    break;

  case 20:
#line 56 "kim.y"
         {yyval=S_AUTO;}
#line 1790 "y.tab.c"
    break;

  case 21:
#line 57 "kim.y"
            {yyval=S_STATIC;}
#line 1796 "y.tab.c"
    break;

  case 22:
#line 58 "kim.y"
             {yyval=S_TYPEDEF;}
#line 1802 "y.tab.c"
    break;

  case 23:
#line 62 "kim.y"
{yyval=makeDummyIdentifier();}
#line 1808 "y.tab.c"
    break;

  case 24:
#line 63 "kim.y"
                                                 {yyval=yyvsp[-2];}
#line 1814 "y.tab.c"
    break;

  case 25:
#line 67 "kim.y"
                {yyval=yyvsp[0];}
#line 1820 "y.tab.c"
    break;

  case 26:
#line 68 "kim.y"
                                            {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1826 "y.tab.c"
    break;

  case 27:
#line 72 "kim.y"
           {yyval=yyvsp[0];}
#line 1832 "y.tab.c"
    break;

  case 28:
#line 73 "kim.y"
                               {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1838 "y.tab.c"
    break;

  case 29:
#line 77 "kim.y"
                    {yyval=makeNode(N_INIT_LIST_ONE, NEL, yyvsp[0], NIL);}
#line 1844 "y.tab.c"
    break;

  case 30:
#line 78 "kim.y"
                        {yyval=yyvsp[-1];}
#line 1850 "y.tab.c"
    break;

  case 31:
#line 82 "kim.y"
            {yyval=makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 1856 "y.tab.c"
    break;

  case 32:
#line 83 "kim.y"
                                    {yyval-makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1862 "y.tab.c"
    break;

  case 33:
#line 87 "kim.y"
                      {yyval=yyvsp[0];}
#line 1868 "y.tab.c"
    break;

  case 34:
#line 88 "kim.y"
                     {yyval=yyvsp[0];}
#line 1874 "y.tab.c"
    break;

  case 35:
#line 89 "kim.y"
                 {yyval=yyvsp[0];}
#line 1880 "y.tab.c"
    break;

  case 36:
#line 93 "kim.y"
                           {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1886 "y.tab.c"
    break;

  case 37:
#line 93 "kim.y"
                                                                                     {yyval=current_id; current_level++;}
#line 1892 "y.tab.c"
    break;

  case 38:
#line 93 "kim.y"
                                                                                                                                                  {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1898 "y.tab.c"
    break;

  case 39:
#line 94 "kim.y"
                 {yyval=maketype(yyvsp[0]);}
#line 1904 "y.tab.c"
    break;

  case 40:
#line 94 "kim.y"
                                      {yyval=current_id;current_level++;}
#line 1910 "y.tab.c"
    break;

  case 41:
#line 94 "kim.y"
                                                                                                  {checkForwardReference(); yyval=setTypeField(yyvsp[-4],yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1916 "y.tab.c"
    break;

  case 42:
#line 95 "kim.y"
                            {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1922 "y.tab.c"
    break;

  case 43:
#line 99 "kim.y"
           {yyval=T_STRUCT;}
#line 1928 "y.tab.c"
    break;

  case 44:
#line 100 "kim.y"
           {yyval=Y_UNION;}
#line 1934 "y.tab.c"
    break;

  case 45:
#line 104 "kim.y"
                   {yyval=yyvsp[0];}
#line 1940 "y.tab.c"
    break;

  case 46:
#line 105 "kim.y"
                                            {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1946 "y.tab.c"
    break;

  case 47:
#line 109 "kim.y"
                                                {yyval=setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1952 "y.tab.c"
    break;

  case 48:
#line 113 "kim.y"
                  {yyval=yyvsp[0];}
#line 1958 "y.tab.c"
    break;

  case 49:
#line 114 "kim.y"
                                                {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1964 "y.tab.c"
    break;

  case 50:
#line 118 "kim.y"
           {yyval=yyvsp[0];}
#line 1970 "y.tab.c"
    break;

  case 51:
#line 122 "kim.y"
                    {yyval=setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1976 "y.tab.c"
    break;

  case 52:
#line 122 "kim.y"
                                                                                                   {yyval=setTypeField(yyvsp[-3], yyvsp[-2]);}
#line 1982 "y.tab.c"
    break;

  case 53:
#line 123 "kim.y"
          {yyval=makeType(T_ENUM);}
#line 1988 "y.tab.c"
    break;

  case 54:
#line 123 "kim.y"
                                                       {yyval=setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1994 "y.tab.c"
    break;

  case 55:
#line 124 "kim.y"
                     {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 2000 "y.tab.c"
    break;

  case 56:
#line 128 "kim.y"
           {yyval=yyvsp[0];}
#line 2006 "y.tab.c"
    break;

  case 57:
#line 129 "kim.y"
                                  {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2012 "y.tab.c"
    break;

  case 58:
#line 133 "kim.y"
           {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 2018 "y.tab.c"
    break;

  case 59:
#line 134 "kim.y"
            {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 2024 "y.tab.c"
    break;

  case 60:
#line 134 "kim.y"
                                                                                           {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 2030 "y.tab.c"
    break;

  case 61:
#line 138 "kim.y"
                          {yyval=setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 2036 "y.tab.c"
    break;

  case 62:
#line 139 "kim.y"
                   {yyval=yyvsp[0];}
#line 2042 "y.tab.c"
    break;

  case 63:
#line 143 "kim.y"
     {yyval=makeType(T_POINTER);}
#line 2048 "y.tab.c"
    break;

  case 64:
#line 144 "kim.y"
              {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2054 "y.tab.c"
    break;

  case 65:
#line 148 "kim.y"
           {yyval=makeIdentifier(yyvsp[0]);}
#line 2060 "y.tab.c"
    break;

  case 66:
#line 149 "kim.y"
                  {yyval=yyvsp[-1];}
#line 2066 "y.tab.c"
    break;

  case 67:
#line 150 "kim.y"
                                                 {yyval=setDeclaratorElementType(yyvsp[-3], setTypeExpr(mkaeType(T_ARRAY), yyvsp[-1]));}
#line 2072 "y.tab.c"
    break;

  case 68:
#line 151 "kim.y"
                      {yyval=current_id; current_level++;}
#line 2078 "y.tab.c"
    break;

  case 69:
#line 151 "kim.y"
                                                                                   {checkFoewardReference(); current_id=yyvsp[-2]; current_level--; yyval=setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 2084 "y.tab.c"
    break;

  case 70:
#line 155 "kim.y"
{yyval=NIL;}
#line 2090 "y.tab.c"
    break;

  case 71:
#line 156 "kim.y"
                     {yyval=yyvsp[0];}
#line 2096 "y.tab.c"
    break;

  case 72:
#line 160 "kim.y"
               {yyval=yyvsp[0];}
#line 2102 "y.tab.c"
    break;

  case 73:
#line 161 "kim.y"
                                {yyval=linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2108 "y.tab.c"
    break;

  case 74:
#line 165 "kim.y"
                      {yyval=yyvsp[0];}
#line 2114 "y.tab.c"
    break;

  case 75:
#line 166 "kim.y"
                                            {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2120 "y.tab.c"
    break;

  case 76:
#line 170 "kim.y"
                                  {yyval=setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2126 "y.tab.c"
    break;

  case 77:
#line 171 "kim.y"
                                                {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2132 "y.tab.c"
    break;

  case 78:
#line 175 "kim.y"
{yyval=NIL;}
#line 2138 "y.tab.c"
    break;

  case 79:
#line 176 "kim.y"
                     {yyval=yyvsp[0];}
#line 2144 "y.tab.c"
    break;

  case 80:
#line 180 "kim.y"
                           {yyval=yyvsp[0];}
#line 2150 "y.tab.c"
    break;

  case 81:
#line 181 "kim.y"
         {yyval=makeType(T_POINTER_;}
#line 2156 "y.tab.c"
    break;

  case 82:
#line 182 "kim.y"
                                    {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2162 "y.tab.c"
    break;

  case 83:
#line 186 "kim.y"
                          {yyval=yyvsp[-1];}
#line 2168 "y.tab.c"
    break;

  case 84:
#line 187 "kim.y"
                               {yyval=setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2174 "y.tab.c"
    break;

  case 85:
#line 188 "kim.y"
                                                          {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2180 "y.tab.c"
    break;

  case 86:
#line 189 "kim.y"
                               {yyval=setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2186 "y.tab.c"
    break;

  case 87:
#line 190 "kim.y"
                                                          {yyval=setTypeElementtype(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 2192 "y.tab.c"
    break;

  case 88:
#line 194 "kim.y"
{yyval=makeNode(N_STMT_LIST_NIL, NIL, NIL, NUIL);}
#line 2198 "y.tab.c"
    break;

  case 89:
#line 195 "kim.y"
                {yyval=yyvsp[0];}
#line 2204 "y.tab.c"
    break;

  case 90:
#line 199 "kim.y"
          {yyval=makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_DTMT_LIST_NIL, NIL, NIL, NIL));}
#line 2210 "y.tab.c"
    break;

  case 91:
#line 200 "kim.y"
                          {yyval=makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2216 "y.tab.c"
    break;

  case 92:
#line 204 "kim.y"
                  {yyval=yyvsp[0];}
#line 2222 "y.tab.c"
    break;

  case 93:
#line 205 "kim.y"
                    {yyval=yyvsp[0];}
#line 2228 "y.tab.c"
    break;

  case 94:
#line 206 "kim.y"
                      {yyval=yyvsp[0];}
#line 2234 "y.tab.c"
    break;

  case 95:
#line 207 "kim.y"
                     {yyval=yyvsp[0];}
#line 2240 "y.tab.c"
    break;

  case 96:
#line 208 "kim.y"
                     {yyval=yyvsp[0];}
#line 2246 "y.tab.c"
    break;

  case 97:
#line 209 "kim.y"
                {yyval=yyvsp[0];}
#line 2252 "y.tab.c"
    break;

  case 98:
#line 213 "kim.y"
                                             {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2258 "y.tab.c"
    break;

  case 99:
#line 214 "kim.y"
                             {yyval=makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2264 "y.tab.c"
    break;

  case 100:
#line 218 "kim.y"
   {yyval=current_id; current_level++;}
#line 2270 "y.tab.c"
    break;

  case 101:
#line 218 "kim.y"
                                                                                {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND, yyvsp[-2], NUI, yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2276 "y.tab.c"
    break;

  case 102:
#line 222 "kim.y"
          {yyval=makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2282 "y.tab.c"
    break;

  case 103:
#line 223 "kim.y"
                      {yyval=makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2288 "y.tab.c"
    break;

  case 104:
#line 227 "kim.y"
                                  {yyval=makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2294 "y.tab.c"
    break;

  case 105:
#line 228 "kim.y"
                                                      {yyval=makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2300 "y.tab.c"
    break;

  case 106:
#line 229 "kim.y"
                                       {yyval=makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2306 "y.tab.c"
    break;

  case 107:
#line 233 "kim.y"
                                     {yyval=makeNode(N_STMT_WHILE, yyvsp[-2], NIL yyvsp[0]);}
#line 2312 "y.tab.c"
    break;

  case 108:
#line 234 "kim.y"
                                                       {yyval=makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2318 "y.tab.c"
    break;

  case 109:
#line 235 "kim.y"
                                        {yyval=makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2324 "y.tab.c"
    break;

  case 110:
#line 239 "kim.y"
                                                                 {yyval=makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2330 "y.tab.c"
    break;

  case 111:
#line 243 "kim.y"
            {yyval=NIL;}
#line 2336 "y.tab.c"
    break;

  case 112:
#line 244 "kim.y"
            {yyval=yyvsp[0];}
#line 2342 "y.tab.c"
    break;

  case 113:
#line 248 "kim.y"
                                {yyval=makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2348 "y.tab.c"
    break;

  case 114:
#line 249 "kim.y"
                        {yyval=makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2354 "y.tab.c"
    break;

  case 115:
#line 250 "kim.y"
                     {yyval=makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2360 "y.tab.c"
    break;

  case 116:
#line 254 "kim.y"
{yyval=makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2366 "y.tab.c"
    break;

  case 117:
#line 255 "kim.y"
                     {yyval=yyvsp[0];}
#line 2372 "y.tab.c"
    break;

  case 118:
#line 259 "kim.y"
                      {yyval=makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2378 "y.tab.c"
    break;

  case 119:
#line 260 "kim.y"
                                                 {yyval=makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2384 "y.tab.c"
    break;

  case 120:
#line 264 "kim.y"
{yyval=NIL;}
#line 2390 "y.tab.c"
    break;

  case 121:
#line 265 "kim.y"
                     {yyval=yyvsp[0];}
#line 2396 "y.tab.c"
    break;

  case 122:
#line 269 "kim.y"
           {yyval=yyvsp[0];}
#line 2402 "y.tab.c"
    break;

  case 123:
#line 273 "kim.y"
                 {yyval=yyvsp[0];}
#line 2408 "y.tab.c"
    break;

  case 124:
#line 277 "kim.y"
                      {yyval=yyvsp[0];}
#line 2414 "y.tab.c"
    break;

  case 125:
#line 281 "kim.y"
                       {yyval=yyvsp[0];}
#line 2420 "y.tab.c"
    break;

  case 126:
#line 282 "kim.y"
                                               {yyval=makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2426 "y.tab.c"
    break;

  case 127:
#line 286 "kim.y"
                      {yyval=yyvsp[0];}
#line 2432 "y.tab.c"
    break;

  case 128:
#line 290 "kim.y"
                       {yyval=yyvsp[0];}
#line 2438 "y.tab.c"
    break;

  case 129:
#line 291 "kim.y"
                                                     {yyval=makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2444 "y.tab.c"
    break;

  case 130:
#line 295 "kim.y"
                      {yyval=yyvsp[0];}
#line 2450 "y.tab.c"
    break;

  case 131:
#line 296 "kim.y"
                                                     {yyval=makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2456 "y.tab.c"
    break;

  case 132:
#line 300 "kim.y"
                       {yyval=yyvsp[0];}
#line 2462 "y.tab.c"
    break;

  case 133:
#line 304 "kim.y"
                       {yyval=yyvsp[0];}
#line 2468 "y.tab.c"
    break;

  case 134:
#line 308 "kim.y"
                    {yyval=yyvsp[0];}
#line 2474 "y.tab.c"
    break;

  case 135:
#line 312 "kim.y"
                      {yyval=yyvsp[0];}
#line 2480 "y.tab.c"
    break;

  case 136:
#line 313 "kim.y"
                                               {yyval=makeNdoe(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2486 "y.tab.c"
    break;

  case 137:
#line 314 "kim.y"
                                               {yyval=makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2492 "y.tab.c"
    break;

  case 138:
#line 318 "kim.y"
                 {yyval=yyvsp[0];}
#line 2498 "y.tab.c"
    break;

  case 139:
#line 319 "kim.y"
                                            {yyval=makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2504 "y.tab.c"
    break;

  case 140:
#line 320 "kim.y"
                                            {yyval=makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2510 "y.tab.c"
    break;

  case 141:
#line 321 "kim.y"
                                            {yyval=makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2516 "y.tab.c"
    break;

  case 142:
#line 322 "kim.y"
                                            {yyval=makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2522 "y.tab.c"
    break;

  case 143:
#line 326 "kim.y"
                    {yyval=yyvsp[0];}
#line 2528 "y.tab.c"
    break;

  case 144:
#line 330 "kim.y"
                          {yyval=yyvsp[0];}
#line 2534 "y.tab.c"
    break;

  case 145:
#line 331 "kim.y"
                                                    {yyval=makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2540 "y.tab.c"
    break;

  case 146:
#line 332 "kim.y"
                                                     {yyval=makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2546 "y.tab.c"
    break;

  case 147:
#line 336 "kim.y"
                {yyval=yyvsp[0];}
#line 2552 "y.tab.c"
    break;

  case 148:
#line 337 "kim.y"
                                                {yyval=makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2558 "y.tab.c"
    break;

  case 149:
#line 338 "kim.y"
                                                 {yyval=makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2564 "y.tab.c"
    break;

  case 150:
#line 339 "kim.y"
                                                   {yyval=makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2570 "y.tab.c"
    break;

  case 151:
#line 343 "kim.y"
                 {yyval=yyvsp[0];}
#line 2576 "y.tab.c"
    break;

  case 152:
#line 344 "kim.y"
                                 {yyval=makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2582 "y.tab.c"
    break;

  case 153:
#line 348 "kim.y"
                   {yyval=yyvsp[0];}
#line 2588 "y.tab.c"
    break;

  case 154:
#line 349 "kim.y"
                           {yyval=makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2594 "y.tab.c"
    break;

  case 155:
#line 350 "kim.y"
                             {yyval=makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2600 "y.tab.c"
    break;

  case 156:
#line 351 "kim.y"
                     {yyval=makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2606 "y.tab.c"
    break;

  case 157:
#line 352 "kim.y"
                      {yyval=makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2612 "y.tab.c"
    break;

  case 158:
#line 353 "kim.y"
                      {yyval=makeNode(N_EXP_NOR, NIL, yyvsp[0], NIL);}
#line 2618 "y.tab.c"
    break;

  case 159:
#line 354 "kim.y"
                       {yyval=makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2624 "y.tab.c"
    break;

  case 160:
#line 355 "kim.y"
                      {yyval=makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2630 "y.tab.c"
    break;

  case 161:
#line 356 "kim.y"
                             {yyval=makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2636 "y.tab.c"
    break;

  case 162:
#line 357 "kim.y"
                            {yyval=makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2642 "y.tab.c"
    break;

  case 163:
#line 361 "kim.y"
                   {yyval=yyvsp[0];}
#line 2648 "y.tab.c"
    break;

  case 164:
#line 362 "kim.y"
                                     {yyval=makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2654 "y.tab.c"
    break;

  case 165:
#line 363 "kim.y"
                                                  {yyval=makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2660 "y.tab.c"
    break;

  case 166:
#line 364 "kim.y"
                                      {yyval=makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2666 "y.tab.c"
    break;

  case 167:
#line 365 "kim.y"
                                     {yyval=makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2672 "y.tab.c"
    break;

  case 168:
#line 366 "kim.y"
                             {yyval=makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2678 "y.tab.c"
    break;

  case 169:
#line 367 "kim.y"
                               {yyval=makeNode(N_EXP_POSR_DEC, NIL, yyvsp[-1], NIL);}
#line 2684 "y.tab.c"
    break;

  case 170:
#line 371 "kim.y"
           {yyval=makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2690 "y.tab.c"
    break;

  case 171:
#line 372 "kim.y"
                  {yyval+makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2696 "y.tab.c"
    break;

  case 172:
#line 373 "kim.y"
                {yyval=makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2702 "y.tab.c"
    break;

  case 173:
#line 374 "kim.y"
                    {yyval=makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2708 "y.tab.c"
    break;

  case 174:
#line 375 "kim.y"
                {yyval=makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2714 "y.tab.c"
    break;

  case 175:
#line 376 "kim.y"
                  {yyval=yyvsp[-1];}
#line 2720 "y.tab.c"
    break;

  case 176:
#line 380 "kim.y"
                                               {yyval=setTypeNameSpecifier(yyvsp[0], yyvsp[0]);}
#line 2726 "y.tab.c"
    break;


#line 2730 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 383 "kim.y"


extern char *yytext;
yyerror(char *s){
	syntax_err++;
	printf("line %d : %s near %s \n", line_no, s, yytext);
}

