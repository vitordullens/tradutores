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

  extern FILE *yyin;
  extern int yylex();
  extern int yylex_destroy();
  void yyerror(const char* msg) {
    fprintf (stderr, "%s\n", msg);
  }



#line 93 "sintatic.tab.c"

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
  YYSYMBOL_set_exp = 54,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 55,                /* set_in_exp  */
  YYSYMBOL_or_exp = 56,                    /* or_exp  */
  YYSYMBOL_and_exp = 57,                   /* and_exp  */
  YYSYMBOL_relational_exp = 58,            /* relational_exp  */
  YYSYMBOL_sum_exp = 59,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 60,                   /* mul_exp  */
  YYSYMBOL_primal_exp = 61,                /* primal_exp  */
  YYSYMBOL_arg_list = 62,                  /* arg_list  */
  YYSYMBOL_type = 63                       /* type  */
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
#define YYLAST   1110

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  275

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
       0,    78,    78,    81,    82,    85,    86,    89,    92,    92,
      96,    97,   100,   101,   102,   103,   104,   105,   106,   107,
     110,   113,   114,   115,   118,   121,   122,   125,   126,   129,
     130,   131,   134,   134,   138,   139,   140,   143,   146,   147,
     150,   151,   154,   155,   158,   159,   162,   163,   166,   167,
     168,   171,   172,   173,   174,   175,   178,   179,   182,   183,
     184
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
  "exp_stmt", "$@2", "exp", "set_exp", "set_in_exp", "or_exp", "and_exp",
  "relational_exp", "sum_exp", "mul_exp", "primal_exp", "arg_list", "type", YY_NULLPTR
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

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     517,     5,     7,    34,    44,    48,   690,  1081,  1084,    58,
    -124,    63,   247,  1092,   517,    62,    86,    77,   425,   208,
     637,   517,   118,   483,    98,   100,   121,    72,   135,   154,
      16,   163,   172,   268,   125,   175,   181,   200,   237,   254,
     257,   260,   283,   228,   250,    23,   -18,    61,    96,   561,
     598,   273,   517,   299,    18,   105,    99,   286,    42,   304,
     105,    72,   303,   314,   329,    40,   285,   604,   727,   323,
     128,   128,   128,   128,   268,   324,   337,   640,   431,   340,
     347,   360,    35,   367,   380,   400,   767,   372,   406,   402,
     415,   421,   397,   223,   183,  1038,   770,   783,   438,   206,
     788,   443,   110,   479,   482,   485,   105,   445,   463,   487,
     490,   470,   506,   510,   512,   516,   502,   518,   522,   539,
      69,   560,   558,   565,   562,    72,   574,   208,  1095,   577,
     579,   580,   208,   581,   208,   282,   802,   521,    72,   297,
     594,   -16,   451,   316,  1041,   805,   822,   321,   836,   599,
      72,   308,   601,   129,   379,   447,   526,   849,   857,   265,
     396,   608,    72,   319,   461,    -8,   386,   123,   867,   401,
     478,   505,   693,    72,   395,   109,   225,   775,   876,   884,
     609,    99,   208,   208,   615,    20,    72,    99,   597,   362,
     887,   203,   203,   203,   203,   297,    46,   242,    99,   631,
     520,   895,   245,   245,   245,   245,   308,    66,   206,    99,
     633,   326,   660,   248,   248,   248,   248,   319,    70,   634,
     903,    99,    99,    99,   395,   170,   636,   639,   642,   914,
     650,   654,   658,   917,   542,   430,  1045,   922,   931,   936,
     659,   661,   663,   949,   568,   576,  1072,   953,   966,   697,
     671,   475,   687,   703,   456,   151,   958,   732,   735,   985,
     694,   993,   230,   817,   998,  1003,   226,  1103,   988,   699,
    1030,   698,   738,   543,  1035
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,   655,  -124,    79,  -124,  -124,   708,  -123,   -10,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,   566,   656,    21,
     491,   449,   370,   252,   171,   -27,   -97,    12
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    34,     8,    52,    15,    35,    36,
      37,    38,    39,    40,    41,    42,    92,    43,    44,    81,
      45,    46,    47,    48,    49,    50,    79,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     146,   -41,   113,   158,   131,   -35,    67,    20,   -58,   133,
     -59,   184,     9,   -35,   -35,   -41,    71,   191,     9,   147,
     148,   159,   160,   159,   160,   213,    16,   170,   149,   179,
     161,   146,   161,    16,   146,    62,   150,   -60,   162,    77,
     162,   229,   -35,    90,    10,   135,   136,    97,    -2,   159,
     160,   151,   137,   163,   137,   163,    70,    84,   161,   226,
     227,    12,   138,    -3,    76,   102,   162,   239,   181,   159,
     160,    72,   170,   159,   160,   135,   136,   139,   161,     7,
     -43,   163,   161,    17,   137,     7,   162,   249,   230,    18,
     162,   259,   138,   -25,   -43,   -43,   126,   120,   146,   240,
      19,   163,   171,   172,    73,   163,   -45,   139,    22,    23,
     250,   146,   190,   114,   128,   -45,   130,    24,    56,   173,
      57,   260,   137,   146,   201,    27,   -51,   -51,   -51,   -45,
     -45,    66,    23,   215,   174,   146,   212,   -51,    54,   -41,
      33,    58,   -41,   221,   -43,   -43,   146,   220,    27,   -19,
      55,   -51,   -51,   -35,   179,    60,   -43,   -43,   170,   146,
     179,   215,   202,    33,   146,   146,   146,   146,   238,   170,
     158,   179,   -42,   -42,    61,   158,   158,   158,   158,   248,
     170,   170,   179,    64,   -42,   -42,   170,   170,   170,   170,
     258,   170,    65,    72,   179,   179,   179,   265,   145,    68,
     -40,   157,   -42,   -40,   221,   -12,   189,   136,   232,   159,
     160,    22,    23,     1,     2,     3,   -42,   -42,   161,   242,
      24,    25,    26,   138,   -16,   169,   162,   178,    27,   145,
     252,   134,   145,    28,    29,   222,    30,    31,   139,    32,
     222,   163,   -40,    33,    96,   147,   148,    69,   200,   148,
     -20,   211,   160,   -20,   149,   -43,   -40,    71,   -43,   -43,
     -42,   -13,   150,   -42,   -42,   150,    13,    14,   162,   -36,
     169,    66,    23,   -51,   -51,   -51,    75,   151,   -14,   144,
     151,   -15,   156,   163,   -18,   207,   -51,   -51,    27,    83,
     -51,   -51,   -51,   -51,   -51,   -51,   145,   208,   -51,   -51,
     189,   136,   185,   -51,   -51,    54,   168,   -17,   177,   145,
     144,   200,   148,   144,   186,   -51,   -51,   138,   -51,   -51,
     -10,   145,   211,   160,    95,    86,   193,   -27,   150,   -51,
     -51,   -51,    89,   145,   -51,   -51,   -51,   -43,   -28,   162,
      98,   196,   -32,   180,   145,   -51,   207,   -51,   -51,   -43,
     -43,   168,   178,   197,   -51,   -51,   169,   145,   178,   -51,
     -51,   100,   145,   145,   145,   237,   -34,   169,   157,   178,
     -51,   -51,   -51,   157,   157,   157,   247,   144,   169,   169,
     178,   101,   185,   -51,   169,   169,   169,   257,   103,   169,
     144,   106,   178,   178,   264,   -51,   -51,   143,   171,   172,
     155,   104,   144,   -41,   -52,   -52,   -52,   -41,   -41,   -47,
     217,   -47,   -41,   203,   144,   173,   111,   -52,   -52,   -41,
     214,   105,   -47,   -47,   167,   144,   176,   107,   143,   -52,
     -52,   143,   108,   177,   -47,   -47,   109,   168,   144,   177,
     193,    94,   110,   144,   144,   236,   -11,    21,   168,   156,
     177,   -42,   -57,    99,   156,   156,   246,   204,   112,   168,
     168,   177,   -37,   -42,   -42,   168,   168,   256,   182,   167,
     168,   -43,   -41,   177,   263,   137,   142,   -40,   -40,   154,
     -43,   -43,   -36,   -36,   -41,   192,   -50,   -50,   -50,   -40,
     214,   -52,   -52,   -52,   -33,   143,   -34,   -34,   116,   -50,
     -50,   117,   -52,   166,   118,   175,   122,   142,   143,   123,
     142,   -50,   -50,   -51,   -51,   -51,   -52,   -52,   141,    93,
     143,   153,     1,     2,     3,   218,   -21,   124,   -51,   -51,
     -51,   -56,   143,   -39,   205,   -51,   -45,   -38,   -51,   -51,
     196,   187,   -22,   143,   -51,   165,   -23,    82,   166,   141,
     -45,   176,   141,   -51,   -51,   167,   143,   176,   125,   -45,
     -45,   143,   235,   -40,   -37,   -37,   167,   155,   176,   -47,
      74,   -47,   155,   245,   142,   -40,   192,   167,   167,   176,
     -47,   127,   -30,   167,   255,   183,   204,   142,   167,   -31,
     165,   262,   -40,    59,   -47,   -47,    63,   134,   132,   142,
     -42,   -40,   203,   -26,   -29,   -24,   -50,   -50,   -50,   -42,
     -42,   142,   -49,   -49,   -49,   -36,   141,   -50,   233,   198,
      78,    80,   142,   -49,    85,   -36,    87,    88,   209,   141,
     225,   -50,   -50,    -7,   166,   142,   175,   -49,   -49,   228,
     234,   141,    -8,    -8,    -8,   166,   154,   175,   -55,   -55,
     -55,   244,   243,   141,   253,   261,   166,   166,   175,   -55,
     266,    11,   254,   267,   141,    78,   -20,   166,   -49,   -49,
     -49,   268,   119,   -55,   -55,   -34,   165,   141,    82,   269,
     270,   -49,   -49,   140,   271,   -34,   152,   165,   153,    82,
      -4,   129,   272,   -49,   -49,     1,     2,     3,   165,   165,
      82,   -52,   -52,   -52,   188,   -55,   -55,   -55,   273,   165,
     164,   -53,   -53,   -53,   140,   274,   199,   140,   -55,   -55,
     -37,    91,   -37,   -52,   -53,   -53,   -52,   -52,   210,    53,
     -55,   -55,   -20,   -20,   -20,     0,   -53,   -53,     0,   219,
     -46,   217,   -46,   -48,   -48,   -48,   -54,   -54,   -54,     0,
       0,    78,   231,   -46,   -46,   164,   -48,   -48,   115,   -54,
     -54,     0,    78,   241,   121,   -46,   -46,     0,   -48,   -48,
       0,   -54,   -54,    78,   251,   -53,   -53,   -53,   -46,    74,
     -46,   140,     0,   223,    78,   -45,   -53,     0,     0,   -46,
       0,   -48,   -48,   -48,   140,     0,   -54,   -54,   -54,     0,
     -53,   -53,   -48,   -46,   -46,   -45,   140,   -54,   -45,   -45,
     -52,   -52,   -52,   -47,   195,   -47,   -48,   -48,   140,     0,
       0,   -54,   -54,   -52,     0,   223,   -47,   -44,     0,   140,
     -50,   -50,   -50,     0,     0,   -52,   -52,     0,   -47,   -47,
       0,   164,   140,   -50,   -52,   -52,   -52,   -44,     0,     0,
     -44,   -44,   164,   152,     0,   -50,   -50,   -47,   206,   -47,
     -52,     0,     0,   164,   164,   -50,   -50,   -50,     0,   -52,
     -52,     0,     0,   -47,   164,   216,     0,   -45,     0,     0,
       0,   -50,   -47,   -47,   -47,   224,   -47,     0,   -45,   -45,
     -50,   -50,   -50,   -50,   -50,   -49,   -49,   -49,     0,     0,
     -45,   -45,     0,   -49,   -49,   -49,   -47,     0,   -49,   -47,
     -47,   -49,   -49,   -49,   -50,     0,     0,   -50,   -50,   -49,
     -49,   -49,   -55,   -55,   -55,   -53,   -53,   -53,   -49,   -49,
     -46,   195,   -46,   -49,     0,   -55,   -49,   -49,   -53,   -48,
     -48,   -48,     0,   -46,   -55,   -55,   -55,   -55,   -55,     0,
     -53,   -53,   -48,     0,     0,   -46,   -46,   -53,   -53,   -53,
     -55,   -46,   206,   -46,   -48,   -48,   216,     0,   -44,   -55,
     -55,     0,     0,   -53,   -48,   -48,   -48,   -46,     0,   -44,
     -44,     0,   -53,   -53,     0,     0,   -46,   -46,     0,     0,
     -48,   -44,   -44,   -55,   -55,   -55,   -54,   -54,   -54,   -48,
     -48,   -53,   -53,   -53,     0,     0,   -46,   224,   -46,   -54,
       0,   -48,   -48,   -48,     0,   -55,     0,     0,   -55,   -55,
       0,   -54,   -54,   -53,     0,     0,   -53,   -53,   -46,     0,
       0,   -46,   -46,   -48,     0,     0,   -48,   -48,   -54,   -54,
     -54,     0,     0,   -54,   -54,   -54,    73,     0,   -44,   194,
       0,   -45,     0,   194,   -54,   -44,     0,   -44,     0,     0,
       0,     0,   -45,   -54,   -54,   -54,   -44,     0,   -54,   -54,
       0,   -44,   -44,     0,   -45,   -45,     0,     0,   -44,   -44,
     205,    -6,   -44,     0,    -5,     0,    -6,    -6,    -6,    -5,
      -5,    -5,    -7,     0,     0,    -9,   -44,    -7,    -7,    -7,
      -9,    -9,    -9,   -20,     0,   -44,   -44,     0,   -20,   -20,
     -20
};

static const yytype_int16 yycheck[] =
{
      27,    19,    99,    30,   127,    21,    33,    17,     3,   132,
       3,   134,     0,    21,    22,    33,    34,    33,     6,     3,
       4,     3,     4,     3,     4,    33,    14,    54,    12,    56,
      12,    58,    12,    21,    61,    19,    20,     3,    20,    21,
      20,    21,    19,     3,     0,     3,     4,    74,     0,     3,
       4,    35,    12,    35,    12,    35,    33,    15,    12,   182,
     183,     3,    20,     0,    52,    30,    20,    21,    33,     3,
       4,    10,    99,     3,     4,     3,     4,    35,    12,     0,
      19,    35,    12,    21,    12,     6,    20,    21,   185,     3,
      20,    21,    20,    24,    33,    34,    27,   107,   125,   196,
      23,    35,     3,     4,     8,    35,    10,    35,     3,     4,
     207,   138,   139,     3,   124,    19,   126,    12,    20,    20,
      20,   218,    12,   150,   151,    20,     8,     9,    10,    33,
      34,     3,     4,    10,    35,   162,   163,    19,    20,    30,
      35,    20,    33,    34,    21,    22,   173,   174,    20,    24,
      32,    33,    34,    24,   181,    20,    33,    34,   185,   186,
     187,    10,    33,    35,   191,   192,   193,   194,   195,   196,
     197,   198,    21,    22,    20,   202,   203,   204,   205,   206,
     207,   208,   209,    20,    33,    34,   213,   214,   215,   216,
     217,   218,    20,    10,   221,   222,   223,   224,    27,    24,
      30,    30,    19,    33,    34,    24,     3,     4,   187,     3,
       4,     3,     4,     5,     6,     7,    33,    34,    12,   198,
      12,    13,    14,    20,    24,    54,    20,    56,    20,    58,
     209,    23,    61,    25,    26,    10,    28,    29,    35,    31,
      10,    35,    19,    35,    73,     3,     4,    19,     3,     4,
      24,     3,     4,    27,    12,    30,    33,    34,    33,    34,
      30,    24,    20,    33,    34,    20,    19,    20,    20,    19,
      99,     3,     4,     8,     9,    10,     3,    35,    24,    27,
      35,    24,    30,    35,    24,    20,    21,    22,    20,     3,
       8,     9,    10,     8,     9,    10,   125,    32,    33,    34,
       3,     4,    20,    21,    19,    20,    54,    24,    56,   138,
      58,     3,     4,    61,    32,    33,    34,    20,    33,    34,
      21,   150,     3,     4,    72,    21,    10,    24,    20,     8,
       9,    10,     3,   162,     8,     9,    10,    21,    24,    20,
       3,    20,    19,    19,   173,    24,    20,    21,    22,    33,
      34,    99,   181,    32,    33,    34,   185,   186,   187,    33,
      34,    21,   191,   192,   193,   194,    19,   196,   197,   198,
       8,     9,    10,   202,   203,   204,   205,   125,   207,   208,
     209,    21,    20,    21,   213,   214,   215,   216,    21,   218,
     138,    19,   221,   222,   223,    33,    34,    27,     3,     4,
      30,    21,   150,    24,     8,     9,    10,    21,    22,     8,
       9,    10,    33,    34,   162,    20,    19,    21,    22,    33,
      34,    21,    21,    22,    54,   173,    56,    21,    58,    33,
      34,    61,    30,   181,    33,    34,    21,   185,   186,   187,
      10,    71,    21,   191,   192,   193,    21,    22,   196,   197,
     198,    21,    21,    22,   202,   203,   204,    10,    20,   207,
     208,   209,    19,    33,    34,   213,   214,   215,    23,    99,
     218,    24,    21,   221,   222,    12,    27,    21,    22,    30,
      33,    34,    21,    22,    33,    34,     8,     9,    10,    33,
      34,     8,     9,    10,    24,   125,    21,    22,    19,    21,
      22,    19,    19,    54,    19,    56,    19,    58,   138,    19,
      61,    33,    34,     8,     9,    10,    33,    34,    27,    70,
     150,    30,     5,     6,     7,    20,    24,    21,     8,     9,
      10,    21,   162,    21,     8,    30,    10,    21,    33,    34,
      20,    20,    24,   173,    24,    54,    24,    56,    99,    58,
      24,   181,    61,    33,    34,   185,   186,   187,    19,    33,
      34,   191,   192,    21,    21,    22,   196,   197,   198,     8,
       9,    10,   202,   203,   125,    33,    34,   207,   208,   209,
      19,    21,    24,   213,   214,    23,    10,   138,   218,    24,
      99,   221,    24,    27,    33,    34,    30,    23,    21,   150,
      24,    33,    34,    24,    24,    24,     8,     9,    10,    33,
      34,   162,     8,     9,    10,    21,   125,    19,    21,    20,
      54,    55,   173,    19,    58,    24,    60,    61,    20,   138,
     181,    33,    34,    24,   185,   186,   187,    33,    34,    24,
     191,   150,     5,     6,     7,   196,   197,   198,     8,     9,
      10,   202,    21,   162,    21,    21,   207,   208,   209,    19,
      24,     6,   213,    24,   173,    99,    24,   218,     8,     9,
      10,    21,   106,    33,    34,    21,   185,   186,   187,    21,
      21,    21,    22,    27,    21,    24,    30,   196,   197,   198,
       0,   125,    21,    33,    34,     5,     6,     7,   207,   208,
     209,     8,     9,    10,   138,     8,     9,    10,    21,   218,
      54,     8,     9,    10,    58,    21,   150,    61,    21,    22,
      21,    65,    24,    30,    21,    22,    33,    34,   162,    21,
      33,    34,     5,     6,     7,    -1,    33,    34,    -1,   173,
       8,     9,    10,     8,     9,    10,     8,     9,    10,    -1,
      -1,   185,   186,    21,    22,    99,    21,    22,   102,    21,
      22,    -1,   196,   197,   108,    33,    34,    -1,    33,    34,
      -1,    33,    34,   207,   208,     8,     9,    10,     8,     9,
      10,   125,    -1,     8,   218,    10,    19,    -1,    -1,    19,
      -1,     8,     9,    10,   138,    -1,     8,     9,    10,    -1,
      33,    34,    19,    33,    34,    30,   150,    19,    33,    34,
       8,     9,    10,     8,     9,    10,    33,    34,   162,    -1,
      -1,    33,    34,    21,    -1,     8,    21,    10,    -1,   173,
       8,     9,    10,    -1,    -1,    33,    34,    -1,    33,    34,
      -1,   185,   186,    21,     8,     9,    10,    30,    -1,    -1,
      33,    34,   196,   197,    -1,    33,    34,     8,     9,    10,
      24,    -1,    -1,   207,   208,     8,     9,    10,    -1,    33,
      34,    -1,    -1,    24,   218,     8,    -1,    10,    -1,    -1,
      -1,    24,    33,    34,     8,     9,    10,    -1,    21,    22,
      33,    34,     8,     9,    10,     8,     9,    10,    -1,    -1,
      33,    34,    -1,     8,     9,    10,    30,    -1,    21,    33,
      34,     8,     9,    10,    30,    -1,    -1,    33,    34,    24,
      33,    34,     8,     9,    10,     8,     9,    10,    33,    34,
       8,     9,    10,    30,    -1,    21,    33,    34,    21,     8,
       9,    10,    -1,    21,     8,     9,    10,    33,    34,    -1,
      33,    34,    21,    -1,    -1,    33,    34,     8,     9,    10,
      24,     8,     9,    10,    33,    34,     8,    -1,    10,    33,
      34,    -1,    -1,    24,     8,     9,    10,    24,    -1,    21,
      22,    -1,    33,    34,    -1,    -1,    33,    34,    -1,    -1,
      24,    33,    34,     8,     9,    10,     8,     9,    10,    33,
      34,     8,     9,    10,    -1,    -1,     8,     9,    10,    21,
      -1,     8,     9,    10,    -1,    30,    -1,    -1,    33,    34,
      -1,    33,    34,    30,    -1,    -1,    33,    34,    30,    -1,
      -1,    33,    34,    30,    -1,    -1,    33,    34,     8,     9,
      10,    -1,    -1,     8,     9,    10,     8,    -1,    10,     8,
      -1,    10,    -1,     8,    24,    10,    -1,    19,    -1,    -1,
      -1,    -1,    21,    33,    34,    30,    21,    -1,    33,    34,
      -1,    33,    34,    -1,    33,    34,    -1,    -1,    33,    34,
       8,     0,    10,    -1,     0,    -1,     5,     6,     7,     5,
       6,     7,     0,    -1,    -1,     0,    24,     5,     6,     7,
       5,     6,     7,     0,    -1,    33,    34,    -1,     5,     6,
       7
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,    37,    38,    39,    40,    41,    63,
       0,    38,     3,    19,    20,    43,    63,    21,     3,    23,
      45,    22,     3,     4,    12,    13,    14,    20,    25,    26,
      28,    29,    31,    35,    40,    44,    45,    46,    47,    48,
      49,    50,    51,    53,    54,    56,    57,    58,    59,    60,
      61,    63,    42,    43,    20,    32,    20,    20,    20,    53,
      20,    20,    19,    53,    20,    20,     3,    61,    24,    19,
      33,    34,    10,     8,     9,     3,    63,    21,    53,    62,
      53,    55,    56,     3,    15,    53,    21,    53,    53,     3,
       3,    54,    52,    57,    58,    59,    60,    61,     3,    22,
      21,    21,    30,    21,    21,    21,    19,    21,    30,    21,
      21,    19,    20,    62,     3,    54,    19,    19,    19,    53,
      45,    54,    19,    19,    21,    19,    27,    21,    45,    53,
      45,    44,    21,    44,    23,     3,     4,    12,    20,    35,
      54,    56,    57,    58,    59,    60,    61,     3,     4,    12,
      20,    35,    54,    56,    57,    58,    59,    60,    61,     3,
       4,    12,    20,    35,    54,    56,    57,    58,    59,    60,
      61,     3,     4,    20,    35,    57,    58,    59,    60,    61,
      19,    33,    23,    23,    44,    20,    32,    20,    53,     3,
      61,    33,    34,    10,     8,     9,    20,    32,    20,    53,
       3,    61,    33,    34,    10,     8,     9,    20,    32,    20,
      53,     3,    61,    33,    34,    10,     8,     9,    20,    53,
      61,    34,    10,     8,     9,    57,    44,    44,    24,    21,
      62,    53,    55,    21,    57,    58,    59,    60,    61,    21,
      62,    53,    55,    21,    57,    58,    59,    60,    61,    21,
      62,    53,    55,    21,    57,    58,    59,    60,    61,    21,
      62,    21,    58,    59,    60,    61,    24,    24,    21,    21,
      21,    21,    21,    21,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    42,    41,
      43,    43,    44,    44,    44,    44,    44,    44,    44,    44,
      45,    46,    46,    46,    47,    48,    48,    49,    49,    50,
      50,    50,    52,    51,    53,    53,    53,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    61,    61,    61,    61,    61,    62,    62,    63,    63,
      63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     0,    12,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     5,     5,     9,     5,     7,     2,     2,     7,
       5,     5,     0,     4,     3,     1,     1,     4,     3,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     2,
       1,     1,     1,     3,     4,     3,     3,     1,     1,     1,
       1
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
#line 78 "sintatic.y"
                   {}
#line 1477 "sintatic.tab.c"
    break;

  case 3: /* declaration_list: declaration declaration_list  */
#line 81 "sintatic.y"
                               {}
#line 1483 "sintatic.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 82 "sintatic.y"
                {}
#line 1489 "sintatic.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 85 "sintatic.y"
                       {}
#line 1495 "sintatic.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 86 "sintatic.y"
                    {}
#line 1501 "sintatic.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 92 "sintatic.y"
                                            {}
#line 1507 "sintatic.tab.c"
    break;

  case 9: /* function_declaration: type ID "(" params_list ")" brackets_stmt $@1 type ID "(" ")" brackets_stmt  */
#line 93 "sintatic.y"
                                {}
#line 1513 "sintatic.tab.c"
    break;

  case 10: /* params_list: type ID "," params_list  */
#line 96 "sintatic.y"
                         {}
#line 1519 "sintatic.tab.c"
    break;

  case 11: /* params_list: type ID  */
#line 97 "sintatic.y"
           {}
#line 1525 "sintatic.tab.c"
    break;

  case 12: /* stmt: brackets_stmt  */
#line 100 "sintatic.y"
                {}
#line 1531 "sintatic.tab.c"
    break;

  case 13: /* stmt: for_stmt  */
#line 101 "sintatic.y"
             {}
#line 1537 "sintatic.tab.c"
    break;

  case 14: /* stmt: if_else_stmt  */
#line 102 "sintatic.y"
                 {}
#line 1543 "sintatic.tab.c"
    break;

  case 15: /* stmt: return_stmt  */
#line 103 "sintatic.y"
                {}
#line 1549 "sintatic.tab.c"
    break;

  case 16: /* stmt: io_stmt  */
#line 104 "sintatic.y"
            {}
#line 1555 "sintatic.tab.c"
    break;

  case 17: /* stmt: exp_stmt  */
#line 105 "sintatic.y"
             {}
#line 1561 "sintatic.tab.c"
    break;

  case 18: /* stmt: set_stmt  */
#line 106 "sintatic.y"
             {}
#line 1567 "sintatic.tab.c"
    break;

  case 19: /* stmt: var_declaration  */
#line 107 "sintatic.y"
                    {}
#line 1573 "sintatic.tab.c"
    break;

  case 20: /* brackets_stmt: "{" stmt "}"  */
#line 110 "sintatic.y"
               {}
#line 1579 "sintatic.tab.c"
    break;

  case 21: /* io_stmt: INPUT "(" ID ")" ";"  */
#line 113 "sintatic.y"
                       {}
#line 1585 "sintatic.tab.c"
    break;

  case 22: /* io_stmt: OUTPUT "(" STRING ")" ";"  */
#line 114 "sintatic.y"
                              {}
#line 1591 "sintatic.tab.c"
    break;

  case 23: /* io_stmt: OUTPUT "(" exp ")" ";"  */
#line 115 "sintatic.y"
                           {}
#line 1597 "sintatic.tab.c"
    break;

  case 24: /* for_stmt: "for" "(" exp ";" exp ";" exp ")" stmt  */
#line 118 "sintatic.y"
                                         {}
#line 1603 "sintatic.tab.c"
    break;

  case 25: /* if_else_stmt: "if" "(" exp ")" brackets_stmt  */
#line 121 "sintatic.y"
                                 {}
#line 1609 "sintatic.tab.c"
    break;

  case 26: /* if_else_stmt: "if" "(" exp ")" brackets_stmt "else" brackets_stmt  */
#line 122 "sintatic.y"
                                                        {}
#line 1615 "sintatic.tab.c"
    break;

  case 27: /* return_stmt: "return" ";"  */
#line 125 "sintatic.y"
               {}
#line 1621 "sintatic.tab.c"
    break;

  case 28: /* return_stmt: "return" exp  */
#line 126 "sintatic.y"
                 {}
#line 1627 "sintatic.tab.c"
    break;

  case 29: /* set_stmt: "forall" "(" ID "in" set_exp ")" stmt  */
#line 129 "sintatic.y"
                                        {}
#line 1633 "sintatic.tab.c"
    break;

  case 30: /* set_stmt: "is_set" "(" ID ")" ";"  */
#line 130 "sintatic.y"
                            {}
#line 1639 "sintatic.tab.c"
    break;

  case 31: /* set_stmt: "is_set" "(" set_exp ")" ";"  */
#line 131 "sintatic.y"
                                 {}
#line 1645 "sintatic.tab.c"
    break;

  case 32: /* $@2: %empty  */
#line 134 "sintatic.y"
          {}
#line 1651 "sintatic.tab.c"
    break;

  case 33: /* exp_stmt: exp ";" $@2 ";"  */
#line 135 "sintatic.y"
      {}
#line 1657 "sintatic.tab.c"
    break;

  case 34: /* exp: ID "=" exp  */
#line 138 "sintatic.y"
             {}
#line 1663 "sintatic.tab.c"
    break;

  case 35: /* exp: or_exp  */
#line 139 "sintatic.y"
           {}
#line 1669 "sintatic.tab.c"
    break;

  case 36: /* exp: set_exp  */
#line 140 "sintatic.y"
            {}
#line 1675 "sintatic.tab.c"
    break;

  case 37: /* set_exp: SET_OP1 "(" set_in_exp ")"  */
#line 143 "sintatic.y"
                             {}
#line 1681 "sintatic.tab.c"
    break;

  case 38: /* set_in_exp: or_exp "in" set_exp  */
#line 146 "sintatic.y"
                      {}
#line 1687 "sintatic.tab.c"
    break;

  case 39: /* set_in_exp: or_exp "in" ID  */
#line 147 "sintatic.y"
                   {}
#line 1693 "sintatic.tab.c"
    break;

  case 40: /* or_exp: or_exp "||" and_exp  */
#line 150 "sintatic.y"
                      {}
#line 1699 "sintatic.tab.c"
    break;

  case 41: /* or_exp: and_exp  */
#line 151 "sintatic.y"
            {}
#line 1705 "sintatic.tab.c"
    break;

  case 42: /* and_exp: and_exp "&&" relational_exp  */
#line 154 "sintatic.y"
                              {}
#line 1711 "sintatic.tab.c"
    break;

  case 43: /* and_exp: relational_exp  */
#line 155 "sintatic.y"
                   {}
#line 1717 "sintatic.tab.c"
    break;

  case 44: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 158 "sintatic.y"
                                       {}
#line 1723 "sintatic.tab.c"
    break;

  case 45: /* relational_exp: sum_exp  */
#line 159 "sintatic.y"
            {}
#line 1729 "sintatic.tab.c"
    break;

  case 46: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 162 "sintatic.y"
                                {}
#line 1735 "sintatic.tab.c"
    break;

  case 47: /* sum_exp: mul_exp  */
#line 163 "sintatic.y"
            {}
#line 1741 "sintatic.tab.c"
    break;

  case 48: /* mul_exp: mul_exp ARITMETIC_OP2 primal_exp  */
#line 166 "sintatic.y"
                                   {}
#line 1747 "sintatic.tab.c"
    break;

  case 49: /* mul_exp: "-" primal_exp  */
#line 167 "sintatic.y"
                   {}
#line 1753 "sintatic.tab.c"
    break;

  case 50: /* mul_exp: primal_exp  */
#line 168 "sintatic.y"
               {}
#line 1759 "sintatic.tab.c"
    break;

  case 51: /* primal_exp: ID  */
#line 171 "sintatic.y"
     {}
#line 1765 "sintatic.tab.c"
    break;

  case 52: /* primal_exp: CONST  */
#line 172 "sintatic.y"
          {}
#line 1771 "sintatic.tab.c"
    break;

  case 53: /* primal_exp: "(" exp ")"  */
#line 173 "sintatic.y"
                {}
#line 1777 "sintatic.tab.c"
    break;

  case 54: /* primal_exp: ID "(" arg_list ")"  */
#line 174 "sintatic.y"
                        {}
#line 1783 "sintatic.tab.c"
    break;

  case 55: /* primal_exp: ID "(" ")"  */
#line 175 "sintatic.y"
               {}
#line 1789 "sintatic.tab.c"
    break;

  case 56: /* arg_list: exp "," arg_list  */
#line 178 "sintatic.y"
                   {}
#line 1795 "sintatic.tab.c"
    break;

  case 57: /* arg_list: exp  */
#line 179 "sintatic.y"
        {}
#line 1801 "sintatic.tab.c"
    break;

  case 58: /* type: BASIC_TYPE  */
#line 182 "sintatic.y"
             {}
#line 1807 "sintatic.tab.c"
    break;

  case 59: /* type: SET_TYPE  */
#line 183 "sintatic.y"
             {}
#line 1813 "sintatic.tab.c"
    break;

  case 60: /* type: ELEM_TYPE  */
#line 184 "sintatic.y"
              {}
#line 1819 "sintatic.tab.c"
    break;


#line 1823 "sintatic.tab.c"

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

#line 186 "sintatic.y"



int main(int argc, char ** argv) {
    ++argv, --argc;
    if(argc > 0) {
        yyin = fopen(argv[0], "r");
    }
    else {
        yyin = stdin;
    }
    yyparse();
    fclose(yyin);
    yylex_destroy();
    return 0;
}

