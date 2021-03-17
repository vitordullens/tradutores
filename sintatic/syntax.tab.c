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
#line 5 "syntax.y"


  #include <stdio.h>
  #include <stdlib.h>

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;

#line 83 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_BASIC_TYPE = 4,                 /* BASIC_TYPE  */
  YYSYMBOL_SET_TYPE = 5,                   /* SET_TYPE  */
  YYSYMBOL_ELEM_TYPE = 6,                  /* ELEM_TYPE  */
  YYSYMBOL_ARITMETIC_OP1 = 7,              /* ARITMETIC_OP1  */
  YYSYMBOL_ARITMETIC_OP2 = 8,              /* ARITMETIC_OP2  */
  YYSYMBOL_RELATIONAL_OP = 9,              /* RELATIONAL_OP  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_OR = 11,                        /* OR  */
  YYSYMBOL_SET_OP1 = 12,                   /* SET_OP1  */
  YYSYMBOL_INPUT = 13,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 14,                    /* OUTPUT  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_INTEGER = 16,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_EMPTY = 18,                     /* EMPTY  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_INFIX_OP = 23,                  /* INFIX_OP  */
  YYSYMBOL_FORALL = 24,                    /* FORALL  */
  YYSYMBOL_ISSET = 25,                     /* ISSET  */
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* ','  */
  YYSYMBOL_28_ = 28,                       /* '{'  */
  YYSYMBOL_29_ = 29,                       /* '}'  */
  YYSYMBOL_30_ = 30,                       /* '('  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* '='  */
  YYSYMBOL_33_ = 33,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_program = 35,                   /* program  */
  YYSYMBOL_declaration_list = 36,          /* declaration_list  */
  YYSYMBOL_declaration = 37,               /* declaration  */
  YYSYMBOL_var_declaration = 38,           /* var_declaration  */
  YYSYMBOL_function_declaration = 39,      /* function_declaration  */
  YYSYMBOL_params_list = 40,               /* params_list  */
  YYSYMBOL_brackets_stmt = 41,             /* brackets_stmt  */
  YYSYMBOL_stmts = 42,                     /* stmts  */
  YYSYMBOL_stmt = 43,                      /* stmt  */
  YYSYMBOL_io_stmt = 44,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 45,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 46,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 47,               /* return_stmt  */
  YYSYMBOL_set_stmt = 48,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 49,                  /* exp_stmt  */
  YYSYMBOL_assignment = 50,                /* assignment  */
  YYSYMBOL_exp = 51,                       /* exp  */
  YYSYMBOL_set_exp = 52,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 53,                /* set_in_exp  */
  YYSYMBOL_or_exp = 54,                    /* or_exp  */
  YYSYMBOL_and_exp = 55,                   /* and_exp  */
  YYSYMBOL_relational_exp = 56,            /* relational_exp  */
  YYSYMBOL_sum_exp = 57,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 58,                   /* mul_exp  */
  YYSYMBOL_unary_exp = 59,                 /* unary_exp  */
  YYSYMBOL_primal_exp = 60,                /* primal_exp  */
  YYSYMBOL_arg_list = 61,                  /* arg_list  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_const = 63                      /* const  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2029

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  268

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,    33,     2,     2,     2,     2,     2,     2,
      30,    31,     2,     2,    27,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
       2,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    95,    95,    96,    99,   100,   101,   104,   105,   106,
     109,   112,   113,   116,   117,   120,   123,   124,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   138,   139,   140,
     143,   146,   147,   150,   151,   154,   155,   156,   159,   162,
     165,   166,   169,   172,   173,   176,   177,   180,   181,   184,
     185,   188,   189,   192,   193,   196,   197,   198,   199,   200,
     204,   205,   206,   209,   210,   213,   214,   215,   218,   219,
     220
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "BASIC_TYPE",
  "SET_TYPE", "ELEM_TYPE", "ARITMETIC_OP1", "ARITMETIC_OP2",
  "RELATIONAL_OP", "AND", "OR", "SET_OP1", "INPUT", "OUTPUT", "STRING",
  "INTEGER", "FLOAT", "EMPTY", "IF", "ELSE", "FOR", "RETURN", "INFIX_OP",
  "FORALL", "ISSET", "';'", "','", "'{'", "'}'", "'('", "')'", "'='",
  "'!'", "$accept", "program", "declaration_list", "declaration",
  "var_declaration", "function_declaration", "params_list",
  "brackets_stmt", "stmts", "stmt", "io_stmt", "for_stmt", "if_else_stmt",
  "return_stmt", "set_stmt", "exp_stmt", "assignment", "exp", "set_exp",
  "set_in_exp", "or_exp", "and_exp", "relational_exp", "sum_exp",
  "mul_exp", "unary_exp", "primal_exp", "arg_list", "type", "const", YY_NULLPTR
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
     275,   276,   277,   278,   279,   280,    59,    44,   123,   125,
      40,    41,    61,    33
};
#endif

#define YYPACT_NINF (-195)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1742,  1532,     5,    12,    22,    36,  1542,  1572,  1582,  1612,
      57,  -195,  1622,  1651,    47,  1661,    18,    11,    19,    84,
     302,  1691,    11,   122,  1467,     3,    66,    75,    86,  1775,
    1786,  1795,    89,    98,    45,   100,   101,   611,     3,   699,
     730,   107,   761,   792,   823,   854,   885,   916,   947,   978,
     112,   143,    32,   318,   197,  1878,  1800,  1806,  1820,   159,
    1826,  1701,   398,    52,  1432,  1831,  1840,   494,   175,   212,
     611,   185,  1762,  1009,   163,   193,    53,   186,  1851,  1818,
     191,  1040,   570,   570,   570,   570,   570,   205,   215,  1860,
     183,   218,   217,   226,    56,   234,   244,   264,   272,   222,
     278,  1071,   288,   286,   291,  1865,   365,   267,  1896,  1871,
    1885,  1440,  1891,  1102,   299,    78,   311,   313,   321,   330,
    1432,   354,   341,   344,   347,   349,   350,  1133,  1164,  1195,
     527,   346,   361,  1226,  1257,   302,   370,   302,  1288,   364,
    1319,   302,  1350,   302,   407,   195,   375,   352,   506,  1628,
     611,   195,   382,     6,    43,   136,    20,  1633,  1638,  1663,
    1668,  1473,   223,   389,    91,  1478,  1503,   611,   223,   260,
     257,   438,   130,   102,  1508,  1513,  1518,  1543,   653,   283,
    1905,  1916,  1922,   611,   283,   323,  1444,   342,  1927,  1933,
    1944,  1950,  1381,   494,  1432,   302,   390,   397,    77,  1673,
    1678,   494,   396,  1703,   617,   617,   617,   617,   617,   338,
    1548,  1553,   494,   399,  1558,   692,   692,   692,   692,   692,
     551,  1955,  1961,   404,  1972,   494,   494,   494,   494,   401,
     395,   412,  1432,  1412,  1708,   415,   419,  1713,   124,   141,
     225,  1718,  1743,  1583,   420,   426,  1588,   453,  1750,  1731,
    1593,  1598,  1978,   427,  1983,  1485,   555,  1989,  2000,   434,
     668,   441,  1756,   437,  1623,   271,  2006,   442
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,  -195,  -195,   464,   164,  -195,   410,   -13,   -39,   148,
    -195,  -195,  -195,  -195,  -195,  -195,   -70,   -23,   459,  -194,
     -35,   439,   392,   273,   227,   181,   -25,  -106,    10,    54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    39,     9,    18,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    93,
      52,    53,    54,    55,    56,    57,    58,    91,    59,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,   100,   153,    80,    21,   124,    65,   236,   -65,    61,
      10,    74,   159,    78,    77,   -66,    10,   204,   245,    29,
      30,    31,     2,     3,     4,   -67,    19,   207,   170,   -50,
     -50,   -50,    94,    37,   153,   153,    11,   -40,   176,    20,
      90,    92,   190,    82,   159,   159,    97,    98,    72,    17,
      22,   -50,    25,   205,   -46,   161,   103,    26,   -40,   162,
      14,    29,    30,    31,   163,   146,   139,   193,   164,   165,
     166,    73,    19,    15,   -46,    37,   170,    16,    38,   115,
     161,   125,   167,    89,   162,   168,   176,    23,    90,   163,
     146,   160,   235,   164,   165,   166,    67,   131,   -68,   -68,
     -68,   -68,   -68,   244,   197,    68,   130,   167,   234,   218,
     168,   -50,   -50,   -50,   253,   153,    69,   177,   -68,    70,
     200,   191,   -68,   160,   160,   159,   203,   202,    71,   -50,
      75,    76,   153,   -50,   205,   -45,    79,   211,    81,   217,
     -48,   -48,   159,   214,   213,   206,   -48,   -48,   153,    62,
     206,   -47,   -47,   -14,   222,   -45,   231,   -48,   159,   224,
     223,   -48,    87,   170,     8,   177,    94,   -48,   190,   -41,
       8,   230,   -47,   176,   170,    90,   190,    94,    95,   159,
     159,   159,   159,   159,   176,   170,    90,   190,    99,   101,
     176,   176,   176,   176,   176,   176,   102,    90,   199,   160,
     190,   190,   190,   190,   160,   160,    84,   -48,   -48,   261,
     111,   147,   148,   149,   -64,   144,   177,   105,   158,   145,
     -16,   160,   177,   -48,   146,   150,   210,    96,   147,   148,
     149,   192,   207,   191,   -49,   -49,   -49,   160,   191,   164,
     165,   166,   150,   113,   175,   151,   -13,   191,   189,   112,
     158,   158,   177,   167,   194,   191,   -49,   114,   160,   160,
     160,   160,   160,   177,   157,   116,   191,   110,   215,   177,
     177,   177,   177,   177,   177,   117,    84,   -47,   -47,   191,
     191,   191,   191,   138,   -40,   140,   221,   -41,   -40,   142,
     174,   -41,   175,   -47,   188,   118,   157,   157,   -42,   180,
     181,   182,   -42,   119,   120,    24,     2,     3,     4,    25,
     156,   121,   109,   183,    26,    27,    28,   122,    29,    30,
      31,    32,   123,    33,    34,   -42,    35,    36,    83,   -46,
     143,   158,    37,   225,   -46,    38,   173,   127,   174,   128,
     187,   161,   156,   156,   -46,   162,   -46,   129,   158,   227,
     163,   -50,   -50,   -50,   164,   165,   166,   108,   195,   -68,
     -68,   -68,   -68,   -68,   158,   -50,   146,   133,   167,   243,
     134,   168,   136,   196,   189,    83,   -45,   157,   -63,   175,
     -44,   -43,   189,   -68,   173,   158,   158,   158,   158,   242,
     175,   -45,   137,   189,   157,   141,   175,   175,   175,   175,
     251,   175,     2,     3,     4,   201,   189,   189,   189,   258,
     157,   225,   -45,   -41,   -60,   -60,   -60,   -60,   -60,   212,
     188,   259,   232,   156,   -45,   174,   233,   237,   188,   155,
     246,   157,   157,   157,   241,   254,   174,   198,   -60,   188,
     156,   260,   174,   174,   174,   250,   262,   174,   216,   -46,
     263,   264,   188,   188,   257,   172,   156,   265,   266,   186,
     -39,   155,   155,   216,   -45,   -46,   187,   267,   -42,   -46,
      13,   173,    88,   -39,   187,   107,   154,   156,   156,   240,
     -45,     0,   173,     0,   -45,   187,     0,     0,   173,   173,
     249,     0,     0,   173,     0,     0,   152,   178,   187,   256,
       0,   179,   171,   172,     0,     0,   185,     0,   154,   154,
     180,   181,   182,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,   106,   169,     0,   183,     0,     0,   184,   152,   152,
     -31,   -31,   -31,   -31,   -31,   104,     0,   -69,     0,   -31,
     -31,   -31,   155,   -31,   -31,   -31,   -31,   135,   -31,   -31,
     171,   -31,   -31,     0,   161,   -31,   -31,   -31,   162,   155,
     -31,     0,   227,   163,   -49,   -49,   -49,   164,   165,   166,
     169,     0,     0,    72,   126,   155,     0,    25,   -49,     0,
     132,   167,   252,     0,   168,   186,    29,    30,    31,   154,
     172,     0,     0,   186,     0,     0,   155,   239,     0,     0,
      37,   172,     0,    38,   186,     0,   154,   172,   248,   152,
       0,     0,   172,     0,   144,     0,     0,   255,   145,     0,
     144,     0,   154,   146,   145,     0,   152,   147,   148,   149,
       0,     0,   229,   147,   148,   149,     0,   171,     0,     0,
     185,   150,   152,   238,   151,     0,     0,   150,   171,     0,
     151,   185,     0,     0,   247,     0,     0,   169,     0,   171,
     -60,   -60,   -60,   -60,   -60,     0,     0,     0,   169,     0,
       0,   -15,   -15,   -15,   -15,   -15,   -60,     0,     0,   169,
     -15,   -15,   -15,   220,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,     0,   -15,   -15,     0,   161,   -15,   -15,   -15,   162,
       0,   -15,   -24,   -24,   -24,   -24,   -24,     0,   164,   165,
     166,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   167,   -24,   -24,   168,     0,   -24,   -24,   -24,
       0,     0,   -24,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
       0,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,
     -26,     0,     0,   -26,    24,     2,     3,     4,    25,     0,
       0,     0,     0,    26,    27,    28,     0,    29,    30,    31,
      32,     0,    33,    34,     0,    35,    36,     0,     0,   143,
     -17,    37,     0,     0,    38,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,     0,   -21,   -21,     0,   -21,   -21,     0,     0,
     -21,   -21,   -21,     0,     0,   -21,   -18,   -18,   -18,   -18,
     -18,     0,     0,     0,     0,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,     0,   -18,   -18,     0,   -18,   -18,     0,
       0,   -18,   -18,   -18,     0,     0,   -18,   -19,   -19,   -19,
     -19,   -19,     0,     0,     0,     0,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,     0,   -19,   -19,     0,   -19,   -19,
       0,     0,   -19,   -19,   -19,     0,     0,   -19,   -20,   -20,
     -20,   -20,   -20,     0,     0,     0,     0,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -20,     0,   -20,   -20,     0,   -20,
     -20,     0,     0,   -20,   -20,   -20,     0,     0,   -20,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,     0,   -23,   -23,
     -23,     0,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,
     -23,   -23,     0,     0,   -23,   -23,   -23,     0,     0,   -23,
     -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,     0,   -22,   -22,
       0,   -22,   -22,     0,     0,   -22,   -22,   -22,     0,     0,
     -22,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,     0,   -25,
     -25,     0,   -25,   -25,     0,     0,   -25,   -25,   -25,     0,
       0,   -25,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,     0,
     -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,   -33,
       0,     0,   -33,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
       0,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,   -38,
     -38,     0,     0,   -38,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,     0,   -34,   -34,     0,   -34,   -34,     0,     0,   -34,
     -34,   -34,     0,     0,   -34,   -39,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,     0,   -39,   -39,     0,   -39,   -39,     0,     0,
     -39,   -39,   -39,     0,     0,   -39,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,
       0,   -27,   -27,   -27,     0,     0,   -27,   -28,   -28,   -28,
     -28,   -28,     0,     0,     0,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,
       0,     0,   -28,   -28,   -28,     0,     0,   -28,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,     0,   -29,   -29,     0,   -29,
     -29,     0,     0,   -29,   -29,   -29,     0,     0,   -29,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,
     -36,   -36,     0,     0,   -36,   -36,   -36,     0,     0,   -36,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,
       0,   -37,   -37,     0,     0,   -37,   -37,   -37,     0,     0,
     -37,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,     0,   -32,
     -32,     0,   -32,   -32,     0,     0,   -32,   -32,   -32,     0,
       0,   -32,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,     0,
     -35,   -35,     0,   -35,   -35,     0,     0,   -35,   -35,   -35,
       0,     0,   -35,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,   -30,   -30,     0,   -30,   -30,     0,     0,   -30,   -30,
     -30,     0,     0,   -30,   -10,   -10,   -10,   -10,   -10,     0,
       0,     0,     0,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,     0,   -10,   -10,     0,   -10,   -10,     0,     0,   -10,
     -10,   -10,     0,     0,   -10,   -15,   -15,   -15,   -15,   -15,
       0,     0,     0,     0,   -15,   -15,   -15,     0,   -15,   -15,
     -15,   -15,     0,   -15,   -15,    72,   -15,   -15,     0,    25,
     -15,   -15,   -15,   161,    26,   -15,     0,   162,    29,    30,
      31,     0,   163,   226,   -48,   -48,   164,   165,   166,     0,
       0,     0,    37,     0,     0,    38,     0,   -48,     0,     0,
     167,     0,     0,   168,   -60,   -60,   -60,   -60,   -60,     0,
     -60,   -60,   -60,   -60,   -60,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,   -60,   226,   -47,   -47,    63,     0,    64,
     -60,     0,     0,   209,   -60,   -69,     0,     0,   -47,   -69,
     -70,   -70,   -70,   -70,   -70,   -52,   219,   -52,   -52,   -52,
     -54,   -54,   -54,   -54,   -54,   -55,   -55,   -55,   -55,   -55,
     -70,     0,    -3,    -6,   -70,   -52,    -6,    -6,    -6,   -52,
     -54,     0,    -2,    12,   -54,   -55,     2,     3,     4,   -55,
     -61,   -61,   -61,   -61,   -61,   -60,   -60,   -60,   -60,   -60,
     -57,   -57,   -57,   -57,   -57,   -56,   -56,   -56,   -56,   -56,
     -61,     0,    -5,    -5,   -61,   -60,    -5,    -5,    -5,   -60,
     -57,     0,    -8,    -8,   -57,   -56,    -8,    -8,    -8,   -56,
     -59,   -59,   -59,   -59,   -59,   -62,   -62,   -62,   -62,   -62,
     -51,   219,   -51,   -51,   -51,   -53,   -53,   -53,   -53,   -53,
     -59,     0,    -7,    -7,   -59,   -62,    -7,    -7,    -7,   -62,
     -51,     0,    -9,    -9,   -51,   -53,    -9,    -9,    -9,   -53,
     -58,   -58,   -58,   -58,   -58,   -70,   -70,   -70,   -70,   -70,
     -52,   208,   -52,   -52,   -52,   -54,   -54,   -54,   -54,   -54,
     -58,    -4,    -4,     0,   -58,    -4,    -4,    -4,     0,   -70,
       0,   -10,   -10,     0,   -52,   -10,   -10,   -10,     0,   -54,
     -55,   -55,   -55,   -55,   -55,   -61,   -61,   -61,   -61,   -61,
     -60,   -60,   -60,   -60,   -60,   -57,   -57,   -57,   -57,   -57,
       0,   -12,   -12,     0,   -55,   -12,   -12,   -12,     0,   -61,
       0,   -11,   -11,     0,   -60,   -11,   -11,   -11,     0,   -57,
     -56,   -56,   -56,   -56,   -56,   -59,   -59,   -59,   -59,   -59,
     -62,   -62,   -62,   -62,   -62,   -51,   208,   -51,   -51,   -51,
       0,     0,     0,     0,   -56,     0,     0,     0,   218,   -59,
     -49,   -49,   -49,     1,   -62,     0,     2,     3,     4,   -51,
     -53,   -53,   -53,   -53,   -53,     0,     0,     0,   -49,   217,
     -47,   -47,   -49,   -58,   -58,   -58,   -58,   -58,     0,   -60,
     -60,   -60,   -60,   -60,   -53,     0,     0,   -47,     0,     0,
       0,   -47,   -68,   -68,   -68,   -68,   -68,   -58,   -60,     0,
       0,     0,    63,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,   -68,   -70,   -70,   -70,   -70,   -70,   -52,    86,   -52,
     -52,   -52,   -69,   -54,   -54,   -54,   -54,   -54,   -15,   -15,
       0,   -70,   -15,   -15,   -15,     0,   -52,   -55,   -55,   -55,
     -55,   -55,   -54,   -61,   -61,   -61,   -61,   -61,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,   -55,   -57,   -57,   -57,
     -57,   -57,   -61,     0,     0,     0,     0,   -60,   -56,   -56,
     -56,   -56,   -56,     0,     0,     0,   -57,   -59,   -59,   -59,
     -59,   -59,   -62,   -62,   -62,   -62,   -62,   -56,   -51,    86,
     -51,   -51,   -51,     0,     0,    85,   -59,   -50,   -50,   -50,
       0,   -62,   -53,   -53,   -53,   -53,   -53,   -51,   -58,   -58,
     -58,   -58,   -58,    85,   -50,   -49,   -49,   -49,     0,     0,
       0,   -53,   -68,   -68,   -68,   -68,   -68,   -58,     0,     0,
       0,     0,   -49,   -69,   -69,   -69,   -69,   -69,   -68,   -70,
     -70,   -70,   -70,   -70,   -52,   228,   -52,   -52,   -52,   -69,
     -54,   -54,   -54,   -54,   -54,   -70,     0,     0,     0,     0,
     -52,   -55,   -55,   -55,   -55,   -55,   -54,   -61,   -61,   -61,
     -61,   -61,   -60,   -60,   -60,   -60,   -60,   -55,   -57,   -57,
     -57,   -57,   -57,   -61,     0,     0,     0,     0,   -60,   -56,
     -56,   -56,   -56,   -56,   -57,   -59,   -59,   -59,   -59,   -59,
     -62,   -62,   -62,   -62,   -62,   -56,   -51,   228,   -51,   -51,
     -51,   -59,     0,     0,     0,     0,   -62,   -53,   -53,   -53,
     -53,   -53,   -51,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,     0,     0,   -53,     0,     0,     0,     0,     0,   -58
};

static const yytype_int16 yycheck[] =
{
      25,    71,    37,    42,    17,   111,     3,   201,     3,    22,
       0,    34,    37,    38,    37,     3,     6,    11,   212,    16,
      17,    18,     4,     5,     6,     3,    16,     7,    63,     9,
      10,    11,    67,    30,    69,    70,     0,    31,    63,    28,
      63,    64,    67,    11,    69,    70,    69,    70,     3,    31,
      31,    31,     7,    10,    11,     3,     3,    12,    26,     7,
       3,    16,    17,    18,    12,    12,   136,    11,    16,    17,
      18,    26,    62,    26,    31,    30,   111,    30,    33,    23,
       3,     3,    30,    31,     7,    33,   111,     3,   111,    12,
      12,    37,   198,    16,    17,    18,    30,   120,     7,     8,
       9,    10,    11,   209,   143,    30,   119,    30,    31,     7,
      33,     9,    10,    11,   220,   150,    30,    63,    27,    30,
     145,    67,    31,    69,    70,   150,   151,   150,    30,    27,
      30,    30,   167,    31,    10,    11,    29,   162,    26,     9,
      10,    11,   167,   168,   167,     9,    10,    11,   183,    27,
       9,    10,    11,    31,   179,    31,   195,    27,   183,   184,
     183,    31,     3,   198,     0,   111,   201,    31,   193,    26,
       6,   194,    31,   198,   209,   198,   201,   212,     3,   204,
     205,   206,   207,   208,   209,   220,   209,   212,     3,    26,
     215,   216,   217,   218,   219,   220,     3,   220,     3,   145,
     225,   226,   227,   228,   150,   151,     9,    10,    11,   232,
      27,    16,    17,    18,    31,     3,   162,    31,    37,     7,
      29,   167,   168,    26,    12,    30,     3,    15,    16,    17,
      18,    26,     7,   179,     9,    10,    11,   183,   184,    16,
      17,    18,    30,    26,    63,    33,    31,   193,    67,    31,
      69,    70,   198,    30,    32,   201,    31,    31,   204,   205,
     206,   207,   208,   209,    37,    31,   212,    86,    11,   215,
     216,   217,   218,   219,   220,    31,     9,    10,    11,   225,
     226,   227,   228,   135,    27,   137,     3,    27,    31,   141,
      63,    31,   111,    26,    67,    31,    69,    70,    27,    16,
      17,    18,    31,    31,    26,     3,     4,     5,     6,     7,
      37,    23,    85,    30,    12,    13,    14,    31,    16,    17,
      18,    19,    31,    21,    22,    26,    24,    25,    10,    11,
      28,   150,    30,    10,    11,    33,    63,    26,   111,    26,
      67,     3,    69,    70,    26,     7,    23,    26,   167,     7,
      12,     9,    10,    11,    16,    17,    18,    84,    28,     7,
       8,     9,    10,    11,   183,    23,    12,    26,    30,    31,
      26,    33,    26,     3,   193,    10,    11,   150,    31,   198,
      31,    31,   201,    31,   111,   204,   205,   206,   207,   208,
     209,    26,    31,   212,   167,    31,   215,   216,   217,   218,
     219,   220,     4,     5,     6,    30,   225,   226,   227,   228,
     183,    10,    11,    31,     7,     8,     9,    10,    11,    30,
     193,    26,    32,   150,    23,   198,    29,    31,   201,    37,
      31,   204,   205,   206,   207,    31,   209,    30,    31,   212,
     167,    29,   215,   216,   217,   218,    31,   220,    10,    11,
      31,    31,   225,   226,   227,    63,   183,    31,    31,    67,
      26,    69,    70,    10,    11,    27,   193,    26,    31,    31,
       6,   198,    62,    31,   201,    83,    37,   204,   205,   206,
      27,    -1,   209,    -1,    31,   212,    -1,    -1,   215,   216,
     217,    -1,    -1,   220,    -1,    -1,    37,     3,   225,   226,
      -1,     7,    63,   111,    -1,    -1,    67,    -1,    69,    70,
      16,    17,    18,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    82,    63,    -1,    30,    -1,    -1,    33,    69,    70,
       3,     4,     5,     6,     7,    76,    -1,    31,    -1,    12,
      13,    14,   150,    16,    17,    18,    19,    20,    21,    22,
     111,    24,    25,    -1,     3,    28,    29,    30,     7,   167,
      33,    -1,     7,    12,     9,    10,    11,    16,    17,    18,
     111,    -1,    -1,     3,   115,   183,    -1,     7,    23,    -1,
     121,    30,    31,    -1,    33,   193,    16,    17,    18,   150,
     198,    -1,    -1,   201,    -1,    -1,   204,   205,    -1,    -1,
      30,   209,    -1,    33,   212,    -1,   167,   215,   216,   150,
      -1,    -1,   220,    -1,     3,    -1,    -1,   225,     7,    -1,
       3,    -1,   183,    12,     7,    -1,   167,    16,    17,    18,
      -1,    -1,   193,    16,    17,    18,    -1,   198,    -1,    -1,
     201,    30,   183,   204,    33,    -1,    -1,    30,   209,    -1,
      33,   212,    -1,    -1,   215,    -1,    -1,   198,    -1,   220,
       7,     8,     9,    10,    11,    -1,    -1,    -1,   209,    -1,
      -1,     3,     4,     5,     6,     7,    23,    -1,    -1,   220,
      12,    13,    14,    30,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    25,    -1,     3,    28,    29,    30,     7,
      -1,    33,     3,     4,     5,     6,     7,    -1,    16,    17,
      18,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      21,    22,    30,    24,    25,    33,    -1,    28,    29,    30,
      -1,    -1,    33,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    -1,    -1,    28,    29,
      30,    -1,    -1,    33,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    -1,    33,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    -1,    33,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,    -1,
      -1,    28,    29,    30,    -1,    -1,    33,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    -1,    33,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    -1,    -1,    28,    29,    30,    -1,    -1,    33,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    -1,    -1,    28,    29,    30,    -1,    -1,    33,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    -1,    -1,    28,    29,    30,    -1,    -1,
      33,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    -1,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    -1,    -1,    28,    29,    30,    -1,
      -1,    33,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    -1,    -1,    28,    29,    30,
      -1,    -1,    33,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    -1,    -1,    28,    29,
      30,    -1,    -1,    33,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    -1,    33,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    -1,    33,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,    -1,
      -1,    28,    29,    30,    -1,    -1,    33,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    -1,    33,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    -1,    -1,    28,    29,    30,    -1,    -1,    33,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    -1,    -1,    28,    29,    30,    -1,    -1,    33,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    -1,    -1,    28,    29,    30,    -1,    -1,
      33,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    -1,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    -1,    -1,    28,    29,    30,    -1,
      -1,    33,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    -1,    -1,    28,    29,    30,
      -1,    -1,    33,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    -1,    -1,    28,    29,
      30,    -1,    -1,    33,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    -1,    33,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    21,    22,     3,    24,    25,    -1,     7,
      28,    29,    30,     3,    12,    33,    -1,     7,    16,    17,
      18,    -1,    12,     9,    10,    11,    16,    17,    18,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    23,    -1,    -1,
      30,    -1,    -1,    33,     7,     8,     9,    10,    11,    -1,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    26,     9,    10,    11,    30,    -1,    32,
      27,    -1,    -1,    30,    31,    27,    -1,    -1,    23,    31,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      27,    -1,     0,     1,    31,    27,     4,     5,     6,    31,
      27,    -1,     0,     1,    31,    27,     4,     5,     6,    31,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      27,    -1,     0,     1,    31,    27,     4,     5,     6,    31,
      27,    -1,     0,     1,    31,    27,     4,     5,     6,    31,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      27,    -1,     0,     1,    31,    27,     4,     5,     6,    31,
      27,    -1,     0,     1,    31,    27,     4,     5,     6,    31,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      27,     0,     1,    -1,    31,     4,     5,     6,    -1,    31,
      -1,     0,     1,    -1,    31,     4,     5,     6,    -1,    31,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      -1,     0,     1,    -1,    31,     4,     5,     6,    -1,    31,
      -1,     0,     1,    -1,    31,     4,     5,     6,    -1,    31,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,     7,    31,
       9,    10,    11,     1,    31,    -1,     4,     5,     6,    31,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    27,     9,
      10,    11,    31,     7,     8,     9,    10,    11,    -1,     7,
       8,     9,    10,    11,    31,    -1,    -1,    27,    -1,    -1,
      -1,    31,     7,     8,     9,    10,    11,    31,    26,    -1,
      -1,    -1,    30,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    26,     7,     8,     9,    10,    11,     7,     8,     9,
      10,    11,    26,     7,     8,     9,    10,    11,     0,     1,
      -1,    26,     4,     5,     6,    -1,    26,     7,     8,     9,
      10,    11,    26,     7,     8,     9,    10,    11,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    26,     7,     8,     9,
      10,    11,    26,    -1,    -1,    -1,    -1,    26,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    26,     7,     8,     9,
      10,    11,     7,     8,     9,    10,    11,    26,     7,     8,
       9,    10,    11,    -1,    -1,     7,    26,     9,    10,    11,
      -1,    26,     7,     8,     9,    10,    11,    26,     7,     8,
       9,    10,    11,     7,    26,     9,    10,    11,    -1,    -1,
      -1,    26,     7,     8,     9,    10,    11,    26,    -1,    -1,
      -1,    -1,    26,     7,     8,     9,    10,    11,    23,     7,
       8,     9,    10,    11,     7,     8,     9,    10,    11,    23,
       7,     8,     9,    10,    11,    23,    -1,    -1,    -1,    -1,
      23,     7,     8,     9,    10,    11,    23,     7,     8,     9,
      10,    11,     7,     8,     9,    10,    11,    23,     7,     8,
       9,    10,    11,    23,    -1,    -1,    -1,    -1,    23,     7,
       8,     9,    10,    11,    23,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,    23,     7,     8,     9,    10,
      11,    23,    -1,    -1,    -1,    -1,    23,     7,     8,     9,
      10,    11,    23,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,    35,    36,    37,    38,    39,
      62,     0,     1,    37,     3,    26,    30,    31,    40,    62,
      28,    41,    31,     3,     3,     7,    12,    13,    14,    16,
      17,    18,    19,    21,    22,    24,    25,    30,    33,    38,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    54,    55,    56,    57,    58,    59,    60,    62,
      63,    41,    27,    30,    32,     3,    60,    30,    30,    30,
      30,    30,     3,    26,    51,    30,    30,    51,    60,    29,
      42,    26,    11,    10,     9,     7,     8,     3,    40,    31,
      51,    61,    51,    53,    54,     3,    15,    51,    51,     3,
      50,    26,     3,     3,    52,    31,    55,    56,    57,    58,
      59,    27,    31,    26,    31,    23,    31,    31,    31,    31,
      26,    23,    31,    31,    61,     3,    52,    26,    26,    26,
      41,    51,    52,    26,    26,    20,    26,    31,    43,    50,
      43,    31,    43,    28,     3,     7,    12,    16,    17,    18,
      30,    33,    52,    54,    55,    56,    57,    58,    59,    60,
      63,     3,     7,    12,    16,    17,    18,    30,    33,    52,
      54,    55,    56,    57,    58,    59,    60,    63,     3,     7,
      16,    17,    18,    30,    33,    55,    56,    57,    58,    59,
      60,    63,    26,    11,    32,    28,     3,    42,    30,     3,
      60,    30,    51,    60,    11,    10,     9,     7,     8,    30,
       3,    60,    30,    51,    60,    11,    10,     9,     7,     8,
      30,     3,    60,    51,    60,    10,     9,     7,     8,    55,
      51,    42,    32,    29,    31,    61,    53,    31,    55,    56,
      57,    58,    59,    31,    61,    53,    31,    55,    56,    57,
      58,    59,    31,    61,    31,    56,    57,    58,    59,    26,
      29,    51,    31,    31,    31,    31,    31,    26
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    35,    36,    36,    36,    37,    37,    37,
      38,    39,    39,    40,    40,    41,    42,    42,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    44,    44,    44,
      45,    46,    46,    47,    47,    48,    48,    48,    49,    50,
      51,    51,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      60,    60,    60,    61,    61,    62,    62,    62,    63,    63,
      63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       3,     6,     5,     4,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     5,
       9,     5,     7,     2,     3,     7,     5,     5,     2,     4,
       1,     1,     4,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     2,     4,     3,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
#line 95 "syntax.y"
                   {printf("SINTATICO -------- program -> declaration_list\n");}
#line 1918 "syntax.tab.c"
    break;

  case 3: /* program: error  */
#line 96 "syntax.y"
          {printf("ERROR: program -> declaration_list");}
#line 1924 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration_list declaration  */
#line 99 "syntax.y"
                                {printf("SINTATICO -------- declaration_list -> declaration declaration_list\n");}
#line 1930 "syntax.tab.c"
    break;

  case 5: /* declaration_list: declaration  */
#line 100 "syntax.y"
                {printf("SINTATICO -------- declaration_list -> declaration\n");}
#line 1936 "syntax.tab.c"
    break;

  case 6: /* declaration_list: error  */
#line 101 "syntax.y"
          {printf("ERROR: program -> declaration_list");}
#line 1942 "syntax.tab.c"
    break;

  case 7: /* declaration: function_declaration  */
#line 104 "syntax.y"
                       {printf("SINTATICO -------- declaration -> function_declaration\n");}
#line 1948 "syntax.tab.c"
    break;

  case 8: /* declaration: var_declaration  */
#line 105 "syntax.y"
                    {printf("SINTATICO -------- declaration -> var_declaration\n");}
#line 1954 "syntax.tab.c"
    break;

  case 9: /* declaration: error  */
#line 106 "syntax.y"
          {printf("ERROR: program -> declaration_list");}
#line 1960 "syntax.tab.c"
    break;

  case 10: /* var_declaration: type ID ';'  */
#line 109 "syntax.y"
              {printf("SINTATICO -------- var_declaration -> type %s\n", (yyvsp[-1].token).body);}
#line 1966 "syntax.tab.c"
    break;

  case 11: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 112 "syntax.y"
                                            {printf("SINTATICO -------- function_declaration -> type ID ( params_list ) brackets_stmt\n");}
#line 1972 "syntax.tab.c"
    break;

  case 12: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 113 "syntax.y"
                                  {printf("SINTATICO -------- function_declaration -> type ID ( ) brackets_stmt\n");}
#line 1978 "syntax.tab.c"
    break;

  case 13: /* params_list: type ID ',' params_list  */
#line 116 "syntax.y"
                         {}
#line 1984 "syntax.tab.c"
    break;

  case 14: /* params_list: type ID  */
#line 117 "syntax.y"
           {}
#line 1990 "syntax.tab.c"
    break;

  case 15: /* brackets_stmt: '{' stmts '}'  */
#line 120 "syntax.y"
                {printf("SINTATICO -------- brackets_stmt -> stmt\n");}
#line 1996 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt stmts  */
#line 123 "syntax.y"
             {}
#line 2002 "syntax.tab.c"
    break;

  case 17: /* stmts: stmt  */
#line 124 "syntax.y"
         {}
#line 2008 "syntax.tab.c"
    break;

  case 18: /* stmt: for_stmt  */
#line 127 "syntax.y"
           {}
#line 2014 "syntax.tab.c"
    break;

  case 19: /* stmt: if_else_stmt  */
#line 128 "syntax.y"
                 {}
#line 2020 "syntax.tab.c"
    break;

  case 20: /* stmt: return_stmt  */
#line 129 "syntax.y"
                {}
#line 2026 "syntax.tab.c"
    break;

  case 21: /* stmt: io_stmt  */
#line 130 "syntax.y"
            {}
#line 2032 "syntax.tab.c"
    break;

  case 22: /* stmt: exp_stmt  */
#line 131 "syntax.y"
             {}
#line 2038 "syntax.tab.c"
    break;

  case 23: /* stmt: set_stmt  */
#line 132 "syntax.y"
             {}
#line 2044 "syntax.tab.c"
    break;

  case 24: /* stmt: var_declaration  */
#line 133 "syntax.y"
                    {}
#line 2050 "syntax.tab.c"
    break;

  case 25: /* stmt: assignment  */
#line 134 "syntax.y"
               {}
#line 2056 "syntax.tab.c"
    break;

  case 26: /* stmt: brackets_stmt  */
#line 135 "syntax.y"
                  {}
#line 2062 "syntax.tab.c"
    break;

  case 27: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 138 "syntax.y"
                       {printf("SINTATICO -------- io_stmt -> %s ( %s )\n", (yyvsp[-4].token).body, (yyvsp[-2].token).body);}
#line 2068 "syntax.tab.c"
    break;

  case 28: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 139 "syntax.y"
                              {printf("SINTATICO -------- io_stmt -> %s ( %s )\n", (yyvsp[-4].token).body, (yyvsp[-2].token).body);}
#line 2074 "syntax.tab.c"
    break;

  case 29: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 140 "syntax.y"
                           {printf("SINTATICO -------- io_stmt -> %s ( exp )\n", (yyvsp[-4].token).body);}
#line 2080 "syntax.tab.c"
    break;

  case 30: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 143 "syntax.y"
                                                     {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}
#line 2086 "syntax.tab.c"
    break;

  case 31: /* if_else_stmt: IF '(' exp ')' brackets_stmt  */
#line 146 "syntax.y"
                               {printf("SINTATICO -------- if_else_stmt -> IF ( exp ) brackets_stmt\n");}
#line 2092 "syntax.tab.c"
    break;

  case 32: /* if_else_stmt: IF '(' exp ')' brackets_stmt ELSE stmt  */
#line 147 "syntax.y"
                                           {printf("SINTATICO -------- if_else_stmt -> IF ( exp ) brackets_stmt ELSE stmt\n");}
#line 2098 "syntax.tab.c"
    break;

  case 33: /* return_stmt: RETURN ';'  */
#line 150 "syntax.y"
             {printf("SINTATICO -------- return_stmt -> RETURN ;\n");}
#line 2104 "syntax.tab.c"
    break;

  case 34: /* return_stmt: RETURN exp ';'  */
#line 151 "syntax.y"
                   {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}
#line 2110 "syntax.tab.c"
    break;

  case 35: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 154 "syntax.y"
                                          {printf("SINTATICO -------- set_stmt -> RETURN exp\n");}
#line 2116 "syntax.tab.c"
    break;

  case 36: /* set_stmt: ISSET '(' ID ')' ';'  */
#line 155 "syntax.y"
                         {printf("SINTATICO -------- set_stmt -> RETURN exp\n");}
#line 2122 "syntax.tab.c"
    break;

  case 37: /* set_stmt: ISSET '(' set_exp ')' ';'  */
#line 156 "syntax.y"
                              {printf("SINTATICO -------- set_stmt -> RETURN exp\n");}
#line 2128 "syntax.tab.c"
    break;

  case 38: /* exp_stmt: exp ';'  */
#line 159 "syntax.y"
          {}
#line 2134 "syntax.tab.c"
    break;

  case 39: /* assignment: ID '=' exp ';'  */
#line 162 "syntax.y"
                 {printf("SINTATICO -------- assignment -> %s = exp\n", (yyvsp[-3].token).body);}
#line 2140 "syntax.tab.c"
    break;

  case 40: /* exp: or_exp  */
#line 165 "syntax.y"
         {printf("SINTATICO -------- exp -> or_exp\n");}
#line 2146 "syntax.tab.c"
    break;

  case 41: /* exp: set_exp  */
#line 166 "syntax.y"
            {}
#line 2152 "syntax.tab.c"
    break;

  case 42: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 169 "syntax.y"
                             {printf("SINTATICO -------- set_exp -> %s ( set_in_exp )\n", (yyvsp[-3].token).body);}
#line 2158 "syntax.tab.c"
    break;

  case 43: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 172 "syntax.y"
                          {printf("SINTATICO -------- set_in_exp -> or_exp %s set_exp ( set_in_exp )\n", (yyvsp[-1].token).body);}
#line 2164 "syntax.tab.c"
    break;

  case 44: /* set_in_exp: or_exp INFIX_OP ID  */
#line 173 "syntax.y"
                       {printf("SINTATICO -------- set_in_exp -> or_exp %s %s( set_in_exp )\n", (yyvsp[-1].token).body, (yyvsp[0].token).body);}
#line 2170 "syntax.tab.c"
    break;

  case 45: /* or_exp: or_exp OR and_exp  */
#line 176 "syntax.y"
                    {printf("SINTATICO -------- or_exp -> or_exp %s and_exp\n", (yyvsp[-1].token).body);}
#line 2176 "syntax.tab.c"
    break;

  case 46: /* or_exp: and_exp  */
#line 177 "syntax.y"
            {}
#line 2182 "syntax.tab.c"
    break;

  case 47: /* and_exp: and_exp AND relational_exp  */
#line 180 "syntax.y"
                             {printf("SINTATICO -------- and_exp -> and_exp %s relational_exp\n", (yyvsp[-1].token).body);}
#line 2188 "syntax.tab.c"
    break;

  case 48: /* and_exp: relational_exp  */
#line 181 "syntax.y"
                   {}
#line 2194 "syntax.tab.c"
    break;

  case 49: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 184 "syntax.y"
                                       {printf("SINTATICO -------- relational_exp -> relational_exp %s sum_exp\n", (yyvsp[-1].token).body);}
#line 2200 "syntax.tab.c"
    break;

  case 50: /* relational_exp: sum_exp  */
#line 185 "syntax.y"
            {}
#line 2206 "syntax.tab.c"
    break;

  case 51: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 188 "syntax.y"
                                {printf("SINTATICO -------- sum_exp -> sum_exp %s mul_exp\n", (yyvsp[-1].token).body);}
#line 2212 "syntax.tab.c"
    break;

  case 52: /* sum_exp: mul_exp  */
#line 189 "syntax.y"
            {}
#line 2218 "syntax.tab.c"
    break;

  case 53: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 192 "syntax.y"
                                  {printf("SINTATICO -------- mul_exp -> mul_exp %s unary_exp\n", (yyvsp[-1].token).body);}
#line 2224 "syntax.tab.c"
    break;

  case 54: /* mul_exp: unary_exp  */
#line 193 "syntax.y"
              {}
#line 2230 "syntax.tab.c"
    break;

  case 55: /* unary_exp: primal_exp  */
#line 196 "syntax.y"
             {}
#line 2236 "syntax.tab.c"
    break;

  case 56: /* unary_exp: '!' primal_exp  */
#line 197 "syntax.y"
                   {}
#line 2242 "syntax.tab.c"
    break;

  case 57: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 198 "syntax.y"
                             {printf("SINTATICO -------- unary_exp -> %s primal_exp\n", (yyvsp[-1].token).body);}
#line 2248 "syntax.tab.c"
    break;

  case 58: /* unary_exp: ID '(' arg_list ')'  */
#line 199 "syntax.y"
                        {printf("SINTATICO %d:%d-------- primal_exp -> %s ( arg_list )\n", (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);}
#line 2254 "syntax.tab.c"
    break;

  case 59: /* unary_exp: ID '(' ')'  */
#line 200 "syntax.y"
               {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);}
#line 2260 "syntax.tab.c"
    break;

  case 60: /* primal_exp: ID  */
#line 204 "syntax.y"
     {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2266 "syntax.tab.c"
    break;

  case 61: /* primal_exp: const  */
#line 205 "syntax.y"
          {printf("SINTATICO -------- primal_exp -> const\n");}
#line 2272 "syntax.tab.c"
    break;

  case 62: /* primal_exp: '(' exp ')'  */
#line 206 "syntax.y"
                {}
#line 2278 "syntax.tab.c"
    break;

  case 63: /* arg_list: exp ',' arg_list  */
#line 209 "syntax.y"
                   {printf("SINTATICO -------- arg_list -> exp , arg_list\n");}
#line 2284 "syntax.tab.c"
    break;

  case 64: /* arg_list: exp  */
#line 210 "syntax.y"
        {printf("SINTATICO -------- arg_list -> exp\n");}
#line 2290 "syntax.tab.c"
    break;

  case 65: /* type: BASIC_TYPE  */
#line 213 "syntax.y"
             {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2296 "syntax.tab.c"
    break;

  case 66: /* type: SET_TYPE  */
#line 214 "syntax.y"
             {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2302 "syntax.tab.c"
    break;

  case 67: /* type: ELEM_TYPE  */
#line 215 "syntax.y"
              {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2308 "syntax.tab.c"
    break;

  case 68: /* const: INTEGER  */
#line 218 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2314 "syntax.tab.c"
    break;

  case 69: /* const: FLOAT  */
#line 219 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2320 "syntax.tab.c"
    break;

  case 70: /* const: EMPTY  */
#line 220 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2326 "syntax.tab.c"
    break;


#line 2330 "syntax.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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


#if 1
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 222 "syntax.y"


void yyerror(const char* msg) {
  fprintf (stderr, "ERROR %d:%d - %s\n", yylval.token.line, yylval.token.column, msg);
}

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

