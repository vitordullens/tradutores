/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "sintatic.y"


  #include <stdio.h>
  #include <stdlib.h>

  typedef struct Token Token;

  struct Token {
    int column, line;
    char *lex;
  };

  extern int yylex();


#line 87 "sintatic.tab.c"

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

#include "sintatic.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_CONST = 4,                      /* CONST  */
  YYSYMBOL_BASIC_TYPE = 5,                 /* BASIC_TYPE  */
  YYSYMBOL_SET_TYPE = 6,                   /* SET_TYPE  */
  YYSYMBOL_ELEM_TYPE = 7,                  /* ELEM_TYPE  */
  YYSYMBOL_ARITMETIC_OP1 = 8,              /* ARITMETIC_OP1  */
  YYSYMBOL_ARITMETIC_OP2 = 9,              /* ARITMETIC_OP2  */
  YYSYMBOL_RELATIONAL_OP = 10,             /* RELATIONAL_OP  */
  YYSYMBOL_LOGIC_OP = 11,                  /* LOGIC_OP  */
  YYSYMBOL_SET_OP1 = 12,                   /* SET_OP1  */
  YYSYMBOL_INPUT = 13,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 14,                    /* OUTPUT  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_INTEGER = 16,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_EMPTY = 18,                     /* EMPTY  */
  YYSYMBOL_19_ = 19,                       /* ";"  */
  YYSYMBOL_20_ = 20,                       /* "("  */
  YYSYMBOL_21_ = 21,                       /* ")"  */
  YYSYMBOL_22_ = 22,                       /* ","  */
  YYSYMBOL_23_ = 23,                       /* "{"  */
  YYSYMBOL_24_ = 24,                       /* "}"  */
  YYSYMBOL_25_for_ = 25,                   /* "for"  */
  YYSYMBOL_26_if_ = 26,                    /* "if"  */
  YYSYMBOL_27_else_ = 27,                  /* "else"  */
  YYSYMBOL_28_return_ = 28,                /* "return"  */
  YYSYMBOL_29_forall_ = 29,                /* "forall"  */
  YYSYMBOL_30_in_ = 30,                    /* "in"  */
  YYSYMBOL_31_is_set_ = 31,                /* "is_set"  */
  YYSYMBOL_32_ = 32,                       /* "="  */
  YYSYMBOL_33_ = 33,                       /* "||"  */
  YYSYMBOL_34_ = 34,                       /* "&&"  */
  YYSYMBOL_35_ = 35,                       /* "-"  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_program = 37,                   /* program  */
  YYSYMBOL_declaration_list = 38,          /* declaration_list  */
  YYSYMBOL_declaration = 39,               /* declaration  */
  YYSYMBOL_var_declaration = 40,           /* var_declaration  */
  YYSYMBOL_function_declaration = 41,      /* function_declaration  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_params_list = 43,               /* params_list  */
  YYSYMBOL_stmt = 44,                      /* stmt  */
  YYSYMBOL_brackets_stmt = 45,             /* brackets_stmt  */
  YYSYMBOL_io_stmt = 46,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 47,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 48,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 49,               /* return_stmt  */
  YYSYMBOL_set_stmt = 50,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 51,                  /* exp_stmt  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_exp = 53,                       /* exp  */
  YYSYMBOL_or_exp = 54,                    /* or_exp  */
  YYSYMBOL_and_exp = 55,                   /* and_exp  */
  YYSYMBOL_relational_exp = 56,            /* relational_exp  */
  YYSYMBOL_sum_exp = 57,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 58,                   /* mul_exp  */
  YYSYMBOL_primal_exp = 59,                /* primal_exp  */
  YYSYMBOL_arg_list = 60,                  /* arg_list  */
  YYSYMBOL_type = 61                       /* type  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   858

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    75,    76,    79,    80,    83,    86,    86,
      90,    91,    94,    95,    96,    97,    98,    99,   100,   101,
     104,   107,   108,   109,   112,   115,   116,   119,   120,   124,
     128,   128,   132,   133,   135,   144,   145,   148,   149,   152,
     153,   156,   157,   160,   161,   162,   165,   166,   167,   168,
     169,   172,   173,   176,   177,   178
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "CONST",
  "BASIC_TYPE", "SET_TYPE", "ELEM_TYPE", "ARITMETIC_OP1", "ARITMETIC_OP2",
  "RELATIONAL_OP", "LOGIC_OP", "SET_OP1", "INPUT", "OUTPUT", "STRING",
  "INTEGER", "FLOAT", "EMPTY", "\";\"", "\"(\"", "\")\"", "\",\"", "\"{\"",
  "\"}\"", "\"for\"", "\"if\"", "\"else\"", "\"return\"", "\"forall\"",
  "\"in\"", "\"is_set\"", "\"=\"", "\"||\"", "\"&&\"", "\"-\"", "$accept",
  "program", "declaration_list", "declaration", "var_declaration",
  "function_declaration", "$@1", "params_list", "stmt", "brackets_stmt",
  "io_stmt", "for_stmt", "if_else_stmt", "return_stmt", "set_stmt",
  "exp_stmt", "$@2", "exp", "or_exp", "and_exp", "relational_exp",
  "sum_exp", "mul_exp", "primal_exp", "arg_list", "type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     156,    31,    36,    59,    82,   100,   475,   537,   738,   114,
    -104,   127,   128,   830,   156,   134,   180,   189,   176,   210,
     483,   156,   385,   507,   188,   190,    26,   214,   242,    13,
     245,   117,   227,   230,   246,   260,   276,   286,   290,   292,
     296,   257,    40,    -7,   185,   234,   519,   526,   277,   156,
     302,    20,   103,   334,    50,   305,   103,    26,   312,   346,
     366,   323,   538,   544,   348,    16,    16,    16,    16,   117,
     352,   372,   546,   284,   355,   380,   379,   382,   386,   554,
     396,   401,   408,   415,    75,   256,   773,   558,   566,   407,
     217,   574,   416,   425,   426,   103,   428,   433,   434,   441,
     448,   450,   461,   471,   482,    25,   479,    26,   488,   839,
     484,   494,   210,   496,   210,   404,   588,    26,   252,   -15,
     345,    46,   240,   593,   596,   422,   364,    26,   343,    86,
     253,   148,   793,   610,   615,   439,   623,    26,   406,   -12,
     -20,   261,   800,   628,   632,   498,   503,   210,   210,   506,
      54,    26,   491,   458,   643,   153,   153,   153,   153,   252,
      83,   187,   510,   490,   650,   223,   223,   223,   223,   343,
      93,   217,   518,   499,   659,   243,   243,   243,   243,   406,
     217,   534,   545,   557,   670,   540,   549,   677,   387,   294,
     431,   680,   686,   707,   565,   570,   713,   327,   168,   808,
     718,   724,   745,   568,   556,   751,   172,   331,   821,   754,
     760,  -104,    45,   851,   781,   787,   790
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,   584,  -104,    84,  -104,  -104,   589,  -103,   -13,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,   333,   326,   231,
     174,   142,     9,   -26,   -82,     1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    32,     8,    49,    15,    33,    34,
      35,    36,    37,    38,    39,    40,    83,    41,    42,    43,
      44,    45,    46,    47,    74,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     124,     9,   -36,   134,    20,    62,   -33,     9,   100,   113,
     -33,   149,   -36,   -36,   176,    16,   125,   126,   155,    61,
      23,   175,    16,   135,   136,   144,   -36,    66,   124,   115,
     116,   124,    58,   127,   -53,   123,    26,   -34,   133,   -54,
     137,    72,   -34,    88,   181,   182,   117,   -34,   128,   -25,
      71,    31,   108,   115,   116,   138,   157,   135,   136,   -33,
     143,   118,   -55,   123,   144,    77,   123,   -38,   185,   -20,
     117,   -34,   -20,    65,   137,   184,   -34,    87,   194,   -38,
     -38,   124,    10,   105,     7,   118,   135,   136,   203,   138,
       7,   124,   154,   109,   -35,   111,   135,   136,   211,   143,
      -2,   124,   164,   137,   193,   -34,    22,    23,   -35,    66,
     -33,   124,   174,   137,   202,   -34,   123,    12,   138,   165,
      61,    23,   -34,    26,   144,   124,   123,    -3,   138,   124,
     124,   124,   124,   192,   144,   134,   123,    26,    31,   134,
     134,   134,   134,   201,   144,   144,   123,    13,    14,   144,
     144,   144,   144,   210,   144,    17,   153,   116,   167,   143,
     123,     1,     2,     3,   123,   123,   123,   191,   122,   143,
     133,   132,   -38,   117,   133,   133,   133,   200,   167,   143,
     143,   -38,   -38,    18,   143,   143,   143,   209,   118,   143,
     125,   126,   -37,   142,   -35,    67,   122,   -11,    21,   122,
     121,   -37,   -37,   131,   -38,   -35,   176,   127,    53,    86,
      54,   -34,    19,    22,    23,     1,     2,     3,   -38,   -38,
     135,   136,   128,    24,    25,   141,   163,   126,   121,   -34,
      26,   121,   142,   114,    56,    27,    28,   137,    29,   -34,
      85,    30,    68,   127,   -40,    31,   173,   136,   158,   122,
     -40,   -19,   138,   -40,    63,   153,   116,   120,   128,   122,
     130,   -40,    57,   137,   141,    60,    67,   -40,   -40,   122,
     -12,   177,   117,   -40,   -40,   -37,    64,   -36,   138,   122,
      70,   121,   140,   -38,   -16,   120,   -36,   166,   120,   -37,
     -37,   121,   142,   122,   -38,   -38,    84,   122,   122,   190,
     -13,   121,   142,   132,   157,   -52,    90,   132,   132,   199,
     -14,   121,   142,   142,   -15,   -37,   -18,   142,   142,   208,
     -17,   140,   142,   -10,   141,   121,    79,   -37,   -37,   121,
     189,   -46,   -46,   -46,   141,   131,   -27,    76,   120,   131,
     198,   177,   -46,    51,   141,   141,   163,   126,   120,   141,
     207,   -35,   119,   -37,   141,   129,   -46,   -46,   120,    55,
     -35,   166,    59,   127,   -37,   -37,   -36,   -30,   120,    82,
     -28,   145,   -47,   -47,   -47,    89,    91,   139,   -36,   156,
     119,   140,   120,   119,    73,    75,   188,    78,   -47,    80,
      81,   140,   130,   -46,   -46,   -46,   197,   -47,   -47,   -32,
      92,   140,   140,    93,   -46,    51,   206,    94,   -35,   173,
     136,   140,   -46,   -46,   -46,    95,   139,    52,   -46,   -46,
     -35,   156,    96,   146,   150,   -46,   137,    99,   104,    97,
     -46,   -46,   -46,   119,    98,   101,   151,   -46,   -46,   158,
     110,   -39,   160,   119,   102,   103,   -46,   -46,   -46,   -46,
     152,   147,   -39,   119,   161,   -46,   -46,   -29,   -31,   170,
     162,   -46,   106,   119,   -39,   -39,   -46,   -46,   -46,   -51,
     172,   171,   -46,   -46,   -21,    -4,   139,   119,   150,   -46,
       1,     2,     3,    73,   186,   -22,   139,   129,    -8,    -8,
      -8,   -46,   -46,    73,   195,   -23,   139,   139,   -46,   -46,
     -46,   107,   148,    73,   204,   112,   139,   -46,   -46,   -46,
     160,   114,   187,   146,   -46,   -47,   -47,   -47,   -26,   170,
     -24,   -46,    -7,   -46,   -46,   180,   -47,   -42,    69,   -42,
     183,   196,   -46,   -46,   -45,   -45,   -45,    -6,   -42,   205,
     -47,   -47,    -6,    -6,    -6,   -45,   -44,   -44,   -44,   -20,
     -20,   -20,   -42,   -42,   -50,   -50,   -50,   -44,   212,   -45,
     -45,   214,   -48,   -48,   -48,   -50,   -41,    69,   -41,   213,
     -32,   -44,   -44,   -48,   -43,   -43,   -43,   -41,   -32,   -50,
     -50,   -20,   -49,   -49,   -49,   -43,   215,   -48,   -48,   216,
      11,   -41,   -41,   -49,   -32,     0,   -47,   -47,   -47,   -43,
     -43,   -42,   159,   -42,   -45,   -45,   -45,   -49,   -49,   -47,
      50,     0,     0,     0,   -42,     0,     0,   -45,   -42,   169,
     -42,   -47,   -47,   -45,   -45,   -45,   -42,   -42,     0,   -45,
     -45,   -47,   -47,   -47,   -42,     0,   -42,   179,   -42,   -45,
     -45,   -45,   -45,   -42,   -42,   -47,     0,     0,   -45,   -45,
     -42,   -44,   -44,   -44,   -45,     0,   -47,   -47,   -44,   -44,
     -44,   -42,   -42,     0,   -44,   -45,   -45,   -44,   -44,   -44,
       0,     0,     0,     0,   -44,     0,   -44,   -44,   -50,   -50,
     -50,   -44,     0,   -44,   -44,   -48,   -48,   -48,   -41,   159,
     -41,   -50,   -44,   -44,   -43,   -43,   -43,     0,   -48,     0,
       0,   -41,     0,   -50,   -50,     0,     0,   -43,     0,     0,
     -48,   -48,     0,   -41,   -41,   -50,   -50,   -50,     0,   -43,
     -43,   -48,   -48,   -48,     0,     0,   -41,   169,   -41,     0,
       0,   -50,   -43,   -43,   -43,     0,     0,   -48,    -5,     0,
     -50,   -50,   -41,    -5,    -5,    -5,   -48,   -48,   -43,     0,
       0,   -41,   -41,   -50,   -50,   -50,     0,   -43,   -43,   -48,
     -48,   -48,   -41,   179,   -41,     0,     0,   -50,   -43,   -43,
     -43,     0,     0,   -48,     0,     0,   -41,     0,   -50,   -50,
       0,    68,   -43,   -39,   -48,   -48,     0,   -41,   -41,   -49,
     -49,   -49,   -39,   -43,   -43,   -49,   -49,   -49,   -49,   -49,
     -49,   168,   -49,   -40,     0,     0,   -39,   -39,   178,     0,
     -40,   -49,   -49,     0,   -49,   -49,   168,   -40,   -39,     0,
     -49,   -49,   -40,   -49,   -49,     0,   -40,   -40,     0,   178,
      -7,   -39,   -39,   -40,   -40,    -7,    -7,    -7,     0,    -9,
       0,   -39,   -39,   -39,    -9,    -9,    -9,     0,     0,     0,
       0,   -20,     0,     0,   -39,   -39,   -20,   -20,   -20
};

static const yytype_int16 yycheck[] =
{
      26,     0,    22,    29,    17,    31,    21,     6,    90,   112,
      22,   114,    19,    33,    34,    14,     3,     4,    33,     3,
       4,    33,    21,     3,     4,    51,    33,    34,    54,     3,
       4,    57,    19,    20,     3,    26,    20,    24,    29,     3,
      20,    21,    22,    69,   147,   148,    20,    21,    35,    24,
      49,    35,    27,     3,     4,    35,    10,     3,     4,    19,
      51,    35,     3,    54,    90,    15,    57,    21,   150,    24,
      20,    21,    27,    33,    20,    21,    22,    68,   160,    33,
      34,   107,     0,    96,     0,    35,     3,     4,   170,    35,
       6,   117,   118,   106,    19,   108,     3,     4,   180,    90,
       0,   127,   128,    20,    21,    22,     3,     4,    33,    34,
      24,   137,   138,    20,    21,    22,   107,     3,    35,    33,
       3,     4,    19,    20,   150,   151,   117,     0,    35,   155,
     156,   157,   158,   159,   160,   161,   127,    20,    35,   165,
     166,   167,   168,   169,   170,   171,   137,    19,    20,   175,
     176,   177,   178,   179,   180,    21,     3,     4,    10,   150,
     151,     5,     6,     7,   155,   156,   157,   158,    26,   160,
     161,    29,    24,    20,   165,   166,   167,   168,    10,   170,
     171,    33,    34,     3,   175,   176,   177,   178,    35,   180,
       3,     4,    24,    51,    22,    10,    54,    21,    22,    57,
      26,    33,    34,    29,    19,    33,    34,    20,    20,    67,
      20,    24,    23,     3,     4,     5,     6,     7,    33,    34,
       3,     4,    35,    13,    14,    51,     3,     4,    54,    19,
      20,    57,    90,    23,    20,    25,    26,    20,    28,    22,
      66,    31,     8,    20,    10,    35,     3,     4,     8,   107,
      10,    24,    35,    19,    24,     3,     4,    26,    35,   117,
      29,    21,    20,    20,    90,    20,    10,    33,    34,   127,
      24,    10,    20,    33,    34,    19,    19,    24,    35,   137,
       3,   107,    51,    22,    24,    54,    33,    34,    57,    33,
      34,   117,   150,   151,    33,    34,    65,   155,   156,   157,
      24,   127,   160,   161,    10,    21,    22,   165,   166,   167,
      24,   137,   170,   171,    24,    21,    24,   175,   176,   177,
      24,    90,   180,    21,   150,   151,    21,    33,    34,   155,
     156,     8,     9,    10,   160,   161,    24,     3,   107,   165,
     166,    10,    19,    20,   170,   171,     3,     4,   117,   175,
     176,    24,    26,    22,   180,    29,    33,    34,   127,    26,
      33,    34,    29,    20,    33,    34,    21,    19,   137,     3,
      24,    19,     8,     9,    10,     3,    21,    51,    33,    34,
      54,   150,   151,    57,    51,    52,   155,    54,    24,    56,
      57,   160,   161,     8,     9,    10,   165,    33,    34,    19,
      21,   170,   171,    21,    19,    20,   175,    21,    21,     3,
       4,   180,     8,     9,    10,    19,    90,    32,    33,    34,
      33,    34,    21,    90,    20,    21,    20,    20,    95,    21,
       8,     9,    10,   107,    19,    19,    32,    33,    34,     8,
     107,    10,    20,   117,    19,    19,    24,     8,     9,    10,
     117,    23,    21,   127,    32,    33,    34,    24,    24,    20,
     127,    22,    21,   137,    33,    34,     8,     9,    10,    21,
     137,    32,    33,    34,    24,     0,   150,   151,    20,    21,
       5,     6,     7,   150,   151,    24,   160,   161,     5,     6,
       7,    33,    34,   160,   161,    24,   170,   171,     8,     9,
      10,    19,    23,   170,   171,    21,   180,     8,     9,    10,
      20,    23,    21,   180,    24,     8,     9,    10,    24,    20,
      24,    22,    24,    33,    34,    22,    19,     8,     9,    10,
      24,    21,    33,    34,     8,     9,    10,     0,    19,    21,
      33,    34,     5,     6,     7,    19,     8,     9,    10,     5,
       6,     7,    33,    34,     8,     9,    10,    19,    24,    33,
      34,    21,     8,     9,    10,    19,     8,     9,    10,    24,
      21,    33,    34,    19,     8,     9,    10,    19,    22,    33,
      34,    24,     8,     9,    10,    19,    21,    33,    34,    21,
       6,    33,    34,    19,    24,    -1,     8,     9,    10,    33,
      34,     8,     9,    10,     8,     9,    10,    33,    34,    21,
      21,    -1,    -1,    -1,    21,    -1,    -1,    21,     8,     9,
      10,    33,    34,     8,     9,    10,    33,    34,    -1,    33,
      34,     8,     9,    10,    24,    -1,     8,     9,    10,    24,
       8,     9,    10,    33,    34,    22,    -1,    -1,    33,    34,
      22,     8,     9,    10,    22,    -1,    33,    34,     8,     9,
      10,    33,    34,    -1,    21,    33,    34,     8,     9,    10,
      -1,    -1,    -1,    -1,    24,    -1,    33,    34,     8,     9,
      10,    22,    -1,    33,    34,     8,     9,    10,     8,     9,
      10,    21,    33,    34,     8,     9,    10,    -1,    21,    -1,
      -1,    21,    -1,    33,    34,    -1,    -1,    21,    -1,    -1,
      33,    34,    -1,    33,    34,     8,     9,    10,    -1,    33,
      34,     8,     9,    10,    -1,    -1,     8,     9,    10,    -1,
      -1,    24,     8,     9,    10,    -1,    -1,    24,     0,    -1,
      33,    34,    24,     5,     6,     7,    33,    34,    24,    -1,
      -1,    33,    34,     8,     9,    10,    -1,    33,    34,     8,
       9,    10,     8,     9,    10,    -1,    -1,    22,     8,     9,
      10,    -1,    -1,    22,    -1,    -1,    22,    -1,    33,    34,
      -1,     8,    22,    10,    33,    34,    -1,    33,    34,     8,
       9,    10,    19,    33,    34,     8,     9,    10,     8,     9,
      10,     8,    21,    10,    -1,    -1,    33,    34,     8,    -1,
      10,    24,    22,    -1,    33,    34,     8,    24,    10,    -1,
      33,    34,    22,    33,    34,    -1,    33,    34,    -1,     8,
       0,    10,    24,    33,    34,     5,     6,     7,    -1,     0,
      -1,    33,    34,    22,     5,     6,     7,    -1,    -1,    -1,
      -1,     0,    -1,    -1,    33,    34,     5,     6,     7
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,    37,    38,    39,    40,    41,    61,
       0,    38,     3,    19,    20,    43,    61,    21,     3,    23,
      45,    22,     3,     4,    13,    14,    20,    25,    26,    28,
      31,    35,    40,    44,    45,    46,    47,    48,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    61,    42,
      43,    20,    32,    20,    20,    53,    20,    20,    19,    53,
      20,     3,    59,    24,    19,    33,    34,    10,     8,     9,
       3,    61,    21,    53,    60,    53,     3,    15,    53,    21,
      53,    53,     3,    52,    55,    56,    57,    58,    59,     3,
      22,    21,    21,    21,    21,    19,    21,    21,    19,    20,
      60,    19,    19,    19,    53,    45,    21,    19,    27,    45,
      53,    45,    21,    44,    23,     3,     4,    20,    35,    54,
      55,    56,    57,    58,    59,     3,     4,    20,    35,    54,
      55,    56,    57,    58,    59,     3,     4,    20,    35,    54,
      55,    56,    57,    58,    59,    19,    53,    23,    23,    44,
      20,    32,    53,     3,    59,    33,    34,    10,     8,     9,
      20,    32,    53,     3,    59,    33,    34,    10,     8,     9,
      20,    32,    53,     3,    59,    33,    34,    10,     8,     9,
      22,    44,    44,    24,    21,    60,    53,    21,    55,    56,
      57,    58,    59,    21,    60,    53,    21,    55,    56,    57,
      58,    59,    21,    60,    53,    21,    55,    56,    57,    58,
      59,    60,    24,    24,    21,    21,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    42,    41,
      43,    43,    44,    44,    44,    44,    44,    44,    44,    44,
      45,    46,    46,    46,    47,    48,    48,    49,    49,    50,
      52,    51,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    58,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     0,    12,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     5,     5,     9,     5,     7,     2,     2,     4,
       0,     4,     3,     1,     0,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     2,     1,     1,     1,     3,     4,
       3,     3,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: declaration_list  */
#line 72 "sintatic.y"
                   {}
#line 1396 "sintatic.tab.c"
    break;

  case 3: /* declaration_list: declaration declaration_list  */
#line 75 "sintatic.y"
                               {}
#line 1402 "sintatic.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 76 "sintatic.y"
                {}
#line 1408 "sintatic.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 79 "sintatic.y"
                       {}
#line 1414 "sintatic.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 80 "sintatic.y"
                    {}
#line 1420 "sintatic.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 86 "sintatic.y"
                                            {}
#line 1426 "sintatic.tab.c"
    break;

  case 9: /* function_declaration: type ID "(" params_list ")" brackets_stmt $@1 type ID "(" ")" brackets_stmt  */
#line 87 "sintatic.y"
                                {}
#line 1432 "sintatic.tab.c"
    break;

  case 10: /* params_list: type ID "," params_list  */
#line 90 "sintatic.y"
                         {}
#line 1438 "sintatic.tab.c"
    break;

  case 11: /* params_list: type ID  */
#line 91 "sintatic.y"
           {}
#line 1444 "sintatic.tab.c"
    break;

  case 12: /* stmt: brackets_stmt  */
#line 94 "sintatic.y"
                {}
#line 1450 "sintatic.tab.c"
    break;

  case 13: /* stmt: for_stmt  */
#line 95 "sintatic.y"
             {}
#line 1456 "sintatic.tab.c"
    break;

  case 14: /* stmt: if_else_stmt  */
#line 96 "sintatic.y"
                 {}
#line 1462 "sintatic.tab.c"
    break;

  case 15: /* stmt: return_stmt  */
#line 97 "sintatic.y"
                {}
#line 1468 "sintatic.tab.c"
    break;

  case 16: /* stmt: io_stmt  */
#line 98 "sintatic.y"
            {}
#line 1474 "sintatic.tab.c"
    break;

  case 17: /* stmt: exp_stmt  */
#line 99 "sintatic.y"
             {}
#line 1480 "sintatic.tab.c"
    break;

  case 18: /* stmt: set_stmt  */
#line 100 "sintatic.y"
             {}
#line 1486 "sintatic.tab.c"
    break;

  case 19: /* stmt: var_declaration  */
#line 101 "sintatic.y"
                    {}
#line 1492 "sintatic.tab.c"
    break;

  case 20: /* brackets_stmt: "{" stmt "}"  */
#line 104 "sintatic.y"
               {}
#line 1498 "sintatic.tab.c"
    break;

  case 21: /* io_stmt: INPUT "(" ID ")" ";"  */
#line 107 "sintatic.y"
                       {}
#line 1504 "sintatic.tab.c"
    break;

  case 22: /* io_stmt: OUTPUT "(" STRING ")" ";"  */
#line 108 "sintatic.y"
                              {}
#line 1510 "sintatic.tab.c"
    break;

  case 23: /* io_stmt: OUTPUT "(" exp ")" ";"  */
#line 109 "sintatic.y"
                           {}
#line 1516 "sintatic.tab.c"
    break;

  case 24: /* for_stmt: "for" "(" exp ";" exp ";" exp ")" stmt  */
#line 112 "sintatic.y"
                                         {}
#line 1522 "sintatic.tab.c"
    break;

  case 25: /* if_else_stmt: "if" "(" exp ")" brackets_stmt  */
#line 115 "sintatic.y"
                                 {}
#line 1528 "sintatic.tab.c"
    break;

  case 26: /* if_else_stmt: "if" "(" exp ")" brackets_stmt "else" brackets_stmt  */
#line 116 "sintatic.y"
                                                        {}
#line 1534 "sintatic.tab.c"
    break;

  case 27: /* return_stmt: "return" ";"  */
#line 119 "sintatic.y"
               {}
#line 1540 "sintatic.tab.c"
    break;

  case 28: /* return_stmt: "return" exp  */
#line 120 "sintatic.y"
                 {}
#line 1546 "sintatic.tab.c"
    break;

  case 29: /* set_stmt: "is_set" "(" ID ")"  */
#line 124 "sintatic.y"
                        {}
#line 1552 "sintatic.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 128 "sintatic.y"
          {}
#line 1558 "sintatic.tab.c"
    break;

  case 31: /* exp_stmt: exp ";" $@2 ";"  */
#line 129 "sintatic.y"
      {}
#line 1564 "sintatic.tab.c"
    break;

  case 32: /* exp: ID "=" exp  */
#line 132 "sintatic.y"
             {}
#line 1570 "sintatic.tab.c"
    break;

  case 33: /* exp: or_exp  */
#line 133 "sintatic.y"
           {}
#line 1576 "sintatic.tab.c"
    break;

  case 34: /* exp: %empty  */
#line 135 "sintatic.y"
           {}
#line 1582 "sintatic.tab.c"
    break;

  case 35: /* or_exp: or_exp "||" and_exp  */
#line 144 "sintatic.y"
                      {}
#line 1588 "sintatic.tab.c"
    break;

  case 36: /* or_exp: and_exp  */
#line 145 "sintatic.y"
            {}
#line 1594 "sintatic.tab.c"
    break;

  case 37: /* and_exp: and_exp "&&" relational_exp  */
#line 148 "sintatic.y"
                              {}
#line 1600 "sintatic.tab.c"
    break;

  case 38: /* and_exp: relational_exp  */
#line 149 "sintatic.y"
                   {}
#line 1606 "sintatic.tab.c"
    break;

  case 39: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 152 "sintatic.y"
                                       {}
#line 1612 "sintatic.tab.c"
    break;

  case 40: /* relational_exp: sum_exp  */
#line 153 "sintatic.y"
            {}
#line 1618 "sintatic.tab.c"
    break;

  case 41: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 156 "sintatic.y"
                                {}
#line 1624 "sintatic.tab.c"
    break;

  case 42: /* sum_exp: mul_exp  */
#line 157 "sintatic.y"
            {}
#line 1630 "sintatic.tab.c"
    break;

  case 43: /* mul_exp: mul_exp ARITMETIC_OP2 primal_exp  */
#line 160 "sintatic.y"
                                   {}
#line 1636 "sintatic.tab.c"
    break;

  case 44: /* mul_exp: "-" primal_exp  */
#line 161 "sintatic.y"
                   {}
#line 1642 "sintatic.tab.c"
    break;

  case 45: /* mul_exp: primal_exp  */
#line 162 "sintatic.y"
               {}
#line 1648 "sintatic.tab.c"
    break;

  case 46: /* primal_exp: ID  */
#line 165 "sintatic.y"
     {}
#line 1654 "sintatic.tab.c"
    break;

  case 47: /* primal_exp: CONST  */
#line 166 "sintatic.y"
          {}
#line 1660 "sintatic.tab.c"
    break;

  case 48: /* primal_exp: "(" exp ")"  */
#line 167 "sintatic.y"
                {}
#line 1666 "sintatic.tab.c"
    break;

  case 49: /* primal_exp: ID "(" arg_list ")"  */
#line 168 "sintatic.y"
                        {}
#line 1672 "sintatic.tab.c"
    break;

  case 50: /* primal_exp: ID "(" ")"  */
#line 169 "sintatic.y"
               {}
#line 1678 "sintatic.tab.c"
    break;

  case 51: /* arg_list: exp "," arg_list  */
#line 172 "sintatic.y"
                   {}
#line 1684 "sintatic.tab.c"
    break;

  case 52: /* arg_list: exp  */
#line 173 "sintatic.y"
        {}
#line 1690 "sintatic.tab.c"
    break;

  case 53: /* type: BASIC_TYPE  */
#line 176 "sintatic.y"
             {}
#line 1696 "sintatic.tab.c"
    break;

  case 54: /* type: SET_TYPE  */
#line 177 "sintatic.y"
             {}
#line 1702 "sintatic.tab.c"
    break;

  case 55: /* type: ELEM_TYPE  */
#line 178 "sintatic.y"
              {}
#line 1708 "sintatic.tab.c"
    break;


#line 1712 "sintatic.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

