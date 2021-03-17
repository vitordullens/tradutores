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
#define YYLAST   2398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

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
       0,    95,    95,    98,    99,   102,   103,   104,   107,   110,
     111,   114,   115,   118,   121,   122,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   136,   137,   138,   141,   144,
     145,   148,   149,   152,   153,   154,   155,   158,   161,   164,
     165,   168,   171,   172,   175,   176,   177,   180,   181,   184,
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

#define YYPACT_NINF (-113)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     340,   606,    14,    67,    81,    85,  1868,  1903,  1973,  2022,
     103,  -113,  2292,     8,  2319,    48,    76,   113,   143,  1671,
    2346,    76,    28,   715,    12,   117,   132,   134,  2067,  2072,
    2092,   137,   153,     7,   157,   164,   224,    12,   865,   896,
      87,   927,   958,   989,  1020,  1051,  1082,  1113,  1144,   151,
     172,   100,   158,   644,   837,  2217,  2097,  2102,  2122,   197,
    2127,  2373,   202,    79,   482,  2132,  2152,   336,   213,   138,
     224,   215,  2038,  1175,   193,   227,     4,   201,  2157,  2387,
     205,  1206,   406,    24,   406,   406,   406,   406,   209,   212,
    2162,    72,   217,   218,   129,    -2,   219,   222,   237,   238,
     226,   223,  1237,   247,   240,   243,  2182,   785,   338,   545,
    2240,  2222,  2187,  2192,   698,  2212,  1268,   261,   264,   271,
     272,  1702,   482,    75,   273,   286,   285,  1299,  1330,  1361,
      44,  1392,   294,   291,   295,  1423,  1454,  1671,   327,  1671,
    1671,  1485,   296,  1516,  1547,  1671,  1578,  1671,   298,    97,
     302,   111,   254,   494,   224,    97,   305,   186,   236,    70,
     214,   418,   842,  1879,  1904,  1909,   774,   121,   303,   593,
    1729,  1734,   224,   121,   101,    -5,   324,   723,   517,  1914,
    1739,  1764,  1769,  1774,  2062,   156,  2245,  2250,  2267,   224,
     156,    21,   757,  1744,  2272,  2277,  2294,  2299,   330,  1609,
     336,    80,   482,  1671,   331,   352,   307,  1939,  1944,   336,
     358,  1949,   741,   741,   741,   741,   741,   400,  1799,  1804,
     336,   359,  1809,   746,    86,   746,   746,   746,   746,   566,
    2304,  2321,   360,  2326,   336,   336,   336,   336,   336,    65,
     265,   337,   369,   357,   370,   482,  1640,  1974,   367,   433,
    1979,   147,   347,  2032,  1984,  2009,  1834,   374,   436,  1839,
     767,   508,   371,   661,   655,  2002,  1844,  1869,  2331,   375,
    2348,  1814,  1779,  2353,  2358,   485,   336,   388,   811,   389,
    2027,   390,  1874,   148,   336,  2375,   551,   549,   401,   625,
     638,  1911
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,   413,    35,  -113,   376,   -13,   -40,   313,
    -113,  -113,  -113,  -113,  -113,  -113,   -67,   473,   637,   523,
     583,   451,   409,   341,   248,   159,   -24,  -112,     5,    66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    38,     9,    17,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    92,    59,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    80,   126,    20,   101,    10,   -46,   104,    61,   200,
      72,    10,   164,    78,    24,    65,   150,   -65,   -46,    25,
      18,   201,   -46,    28,    29,    30,   -46,   108,    28,    29,
      30,   234,   -45,    73,    14,     8,   198,    36,    15,   182,
      37,     8,    36,   196,   -45,   164,   164,   -24,   -24,   -24,
     -24,   -24,     2,     3,     4,    62,   -24,   -24,   -24,   -12,
     -24,   -24,   -24,   -24,   137,   -24,   -24,    18,   -24,   -24,
     -66,   142,   -24,   -24,   -24,   234,   -44,   -24,   133,    16,
     213,   -45,   166,   240,   -67,    11,   167,   150,   -44,   261,
     182,   168,   241,   -45,   248,   169,   170,   171,   262,   114,
     207,   -45,   165,   -64,    19,   257,    13,   205,   130,   172,
      90,   -46,   173,   151,   152,   153,    79,   269,   -68,   -68,
     -68,   -68,   -68,   -46,   218,   208,   -46,   154,   -40,   183,
     164,   211,   -40,   197,   -68,   165,   165,   169,   170,   171,
     -46,   148,   -68,   219,    21,   149,    22,    67,   164,   222,
     150,   172,   -46,    97,   151,   152,   153,   213,   -44,   230,
     117,   231,    68,   244,    69,   164,   233,    70,   154,    82,
     -44,   155,   186,   187,   188,   -41,   196,    81,   -44,   -41,
     183,    83,   182,    71,   -39,   196,   189,    75,   164,   164,
     164,   164,   164,   182,    76,   163,   196,   -46,   -40,   182,
      88,   182,   182,   182,   182,   182,     2,     3,     4,   -46,
     196,   196,   196,   196,   196,   165,    96,   -46,   100,   102,
     165,   165,   181,   214,   -48,   -48,   195,   148,   163,   163,
     103,   149,   106,   183,   -14,   199,   150,   -48,   165,   183,
     151,   152,   153,   -11,   116,   -48,   113,   212,   115,   122,
     118,   197,   196,   119,   154,   165,   197,   155,   202,   201,
     196,   -69,   -69,   -69,   -69,   -69,   197,   -39,   120,   121,
     123,   124,   183,   181,   125,   197,   -42,   -69,   165,   165,
     165,   165,   165,   183,   162,   -69,   197,   -41,   -42,   183,
     127,   183,   183,   183,   183,   183,   -42,   128,   129,   135,
     197,   197,   197,   197,   197,   -60,   -60,   -60,   -60,   -60,
     166,   180,   136,   163,   167,   194,   -63,   162,   162,   168,
     138,   -60,   139,   169,   170,   171,   140,   145,   206,   -60,
     204,   163,   209,   220,   112,   223,   -40,   172,   247,   184,
     173,     1,   197,   185,     2,     3,     4,   224,   163,   -42,
     197,   -39,   186,   187,   188,   -39,   214,   -47,   -47,   195,
     238,   -42,   180,   245,   -42,   181,   189,   276,   195,   190,
     -47,   163,   163,   163,   163,   255,   181,   161,   -47,   195,
     -43,   246,   181,   277,   181,   181,   181,   267,   181,   250,
     259,   270,   -43,   195,   195,   195,   274,   195,   280,   278,
     -43,   284,   162,   166,   179,   282,   285,   167,   193,    72,
     161,   161,   168,    24,   -38,   288,   169,   170,   171,    12,
     162,   -41,    28,    29,    30,   215,   111,   -50,   -50,   -50,
     172,   256,   -38,   173,   131,   195,    36,   162,    89,    37,
       0,   -50,     0,   195,   -46,   160,     0,   -46,   194,   -50,
     141,     0,   143,   144,   180,   179,   -46,   194,   146,   -46,
     162,   162,   162,   254,   281,   180,     0,   283,   194,     0,
       0,   180,   178,   180,   180,   266,   192,   180,   160,   160,
       0,     0,   194,   194,   273,    72,   194,   159,     0,    24,
       0,     0,     0,   110,    25,   161,   -46,     0,    28,    29,
      30,   -70,   -70,   -70,   -70,   -70,    74,     0,   -46,    77,
       0,     0,    36,   161,   177,    37,   286,   -70,   191,   -42,
     159,   159,     0,   178,   194,   -70,   226,   -48,   -48,     0,
     161,   -42,   194,   107,     0,   -42,    91,    93,     0,   -42,
     -48,   193,    98,    99,   -48,     0,     0,   179,   -48,     0,
     193,     0,     0,   161,   161,   253,   -43,     0,   179,   157,
     -46,   193,   -41,   160,   179,   177,   179,   265,   -43,   166,
     179,   -43,   -46,   167,   -41,   193,   272,   -41,   168,   193,
     290,   160,   169,   170,   171,     0,   175,    91,     0,     0,
      94,     0,   157,   157,     0,   132,   172,   268,   160,   173,
     -68,   -68,   -68,   -68,   -68,   159,    -7,    -7,     0,   192,
      -7,    -7,    -7,     0,     0,   178,   -68,   193,   192,   158,
     -68,   160,   252,   159,   -68,   193,   178,   210,     0,   192,
       0,     0,   178,     0,   264,     0,   -46,   175,   178,     0,
     159,     0,     0,   271,     0,   221,   176,   192,   -46,   -41,
      95,   239,   158,   158,    84,   -45,   291,   177,     0,     0,
     191,   -41,   232,   251,   226,   -47,   -47,   -45,   177,   -41,
     -45,   191,   -43,   156,   260,   243,     0,   157,   -47,    91,
     177,     0,   -47,     0,   -43,   192,   -47,     0,   -43,   191,
      91,     0,   -43,   192,     0,   157,     0,   176,     0,     0,
     174,   166,    91,     0,     0,   167,   156,   156,     0,     0,
     168,     0,   157,   105,   169,   170,   171,     0,   279,     0,
     109,     0,   -60,   -60,   -60,   -60,   -60,   191,   172,   175,
       0,   173,   249,   225,   -45,   191,     0,   158,   -60,     0,
     175,   -60,     0,   258,   148,    63,   -45,    64,   149,   166,
     -45,   174,   175,   167,   -45,   158,     0,   151,   152,   153,
     134,   275,   169,   170,   171,     0,   235,   -48,   -48,     0,
       0,   154,   158,     0,   155,     0,   172,   225,   -44,   173,
     -48,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,   176,
     -44,   156,    95,     0,   -44,    84,   -44,   -60,   -44,   287,
     176,   -60,     0,    95,   217,   -60,     0,   289,   -44,   156,
       0,   -44,   176,     0,   -13,   -13,   -13,   -13,   -13,     0,
       0,    95,     0,   -13,   -13,   -13,   156,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,     0,   -13,   -13,     0,   242,   -13,
     -13,   -13,     0,   174,   -13,     0,    85,   -48,   -48,   -52,
     216,   -52,   -52,   -52,   174,     0,     0,     0,     0,    95,
     -48,   263,     0,   -48,     0,   -52,   174,    95,   -22,   -22,
     -22,   -22,   -22,   -52,     0,     0,     0,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,     0,     0,   -22,   -22,   -22,     0,     0,   -22,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,     0,   -24,   -24,     0,
     -24,   -24,     0,     0,   -24,   -24,   -24,     0,     0,   -24,
      23,     2,     3,     4,    24,     0,     0,     0,     0,    25,
      26,    27,     0,    28,    29,    30,    31,     0,    32,    33,
       0,    34,    35,     0,     0,   147,   -15,    36,     0,     0,
      37,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,   -19,
     -19,     0,   -19,   -19,     0,     0,   -19,   -19,   -19,     0,
       0,   -19,   -16,   -16,   -16,   -16,   -16,     0,     0,     0,
       0,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,     0,
     -16,   -16,     0,   -16,   -16,     0,     0,   -16,   -16,   -16,
       0,     0,   -16,   -17,   -17,   -17,   -17,   -17,     0,     0,
       0,     0,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,
       0,   -17,   -17,     0,   -17,   -17,     0,     0,   -17,   -17,
     -17,     0,     0,   -17,   -18,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,   -18,   -18,   -18,     0,   -18,   -18,   -18,
     -18,     0,   -18,   -18,     0,   -18,   -18,     0,     0,   -18,
     -18,   -18,     0,     0,   -18,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,     0,   -21,   -21,     0,   -21,   -21,     0,     0,
     -21,   -21,   -21,     0,     0,   -21,   -20,   -20,   -20,   -20,
     -20,     0,     0,     0,     0,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,     0,   -20,   -20,     0,   -20,   -20,     0,
       0,   -20,   -20,   -20,     0,     0,   -20,   -23,   -23,   -23,
     -23,   -23,     0,     0,     0,     0,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,     0,   -23,   -23,     0,   -23,   -23,
       0,     0,   -23,   -23,   -23,     0,     0,   -23,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,   -31,
     -31,     0,     0,   -31,   -31,   -31,     0,     0,   -31,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,     0,
     -37,   -37,     0,     0,   -37,   -37,   -37,     0,     0,   -37,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,     0,   -32,   -32,   -32,     0,     0,
     -32,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,     0,   -38,
     -38,     0,   -38,   -38,     0,     0,   -38,   -38,   -38,     0,
       0,   -38,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,     0,
     -25,   -25,     0,   -25,   -25,     0,     0,   -25,   -25,   -25,
       0,     0,   -25,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
       0,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,
     -26,     0,     0,   -26,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,     0,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,
     -27,   -27,     0,     0,   -27,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,     0,   -29,   -29,     0,   -29,   -29,     0,     0,
     -29,   -29,   -29,     0,     0,   -29,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,
       0,   -35,   -35,   -35,     0,     0,   -35,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,
       0,     0,   -36,   -36,   -36,     0,     0,   -36,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,   -30,
     -30,     0,     0,   -30,   -30,   -30,     0,     0,   -30,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,
     -34,   -34,     0,     0,   -34,   -34,   -34,     0,     0,   -34,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,
       0,   -33,   -33,     0,     0,   -33,   -33,   -33,     0,     0,
     -33,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,     0,   -28,
     -28,     0,   -28,   -28,     0,     0,   -28,   -28,   -28,     0,
       0,   -28,    -8,    -8,    -8,    -8,    -8,     0,     0,     0,
       0,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,     0,
      -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,    -8,
       0,     0,    -8,   -13,   -13,   -13,   -13,   -13,     0,     0,
       0,     0,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,
       0,   -13,   -13,     0,   -13,   -13,     0,     0,   -13,   -13,
     -13,     0,     0,   -13,    23,     2,     3,     4,    24,     0,
       0,     0,     0,    25,    26,    27,     0,    28,    29,    30,
      31,     0,    32,    33,     0,    34,    35,     0,     0,   147,
       0,    36,     0,     0,    37,    23,     2,     3,     4,    24,
       0,     0,     0,     0,    25,    26,    27,     0,    28,    29,
      30,    31,     0,    32,    33,     0,    34,    35,     0,     0,
     203,     0,    36,     0,     0,    37,   -69,   -69,   -69,   -69,
     -69,   -70,   -70,   -70,   -70,   -70,   -52,   228,   -52,   -52,
     -52,   236,   -69,   -50,   -50,   -50,   -69,   -70,     0,     0,
     -69,   -70,   -52,     0,     0,   -70,   -52,   -50,     0,     0,
     -52,   -54,   -54,   -54,   -54,   -54,   -55,   -55,   -55,   -55,
     -55,   -61,   -61,   -61,   -61,   -61,   236,   -54,   -49,   -49,
     -49,   -54,   -55,     0,     0,   -54,   -55,   -61,     0,     0,
     -55,   -61,   -49,     0,     0,   -61,   -60,   -60,   -60,   -60,
     -60,   -57,   -57,   -57,   -57,   -57,   -56,   -56,   -56,   -56,
     -56,     0,   -60,   235,   -47,   -47,   -60,   -57,     0,     0,
     -60,   -57,   -56,     0,     0,   -57,   -56,   -47,     0,     0,
     -56,   -59,   -59,   -59,   -59,   -59,   -62,   -62,   -62,   -62,
     -62,   -51,   228,   -51,   -51,   -51,     0,   -59,     0,     0,
       0,   -59,   -62,     0,     0,   -59,   -62,   -51,    -2,     1,
     -62,   -51,     2,     3,     4,   -51,   -53,   -53,   -53,   -53,
     -53,   -58,   -58,   -58,   -58,   -58,   -54,   -54,   -54,   -54,
     -54,     0,   -53,     0,     0,     0,   -53,   -58,     0,     0,
     -53,   -58,   -54,    -4,    -4,   -58,     0,    -4,    -4,    -4,
     -54,   -55,   -55,   -55,   -55,   -55,   -61,   -61,   -61,   -61,
     -61,   227,   -41,   -50,   -50,   -50,     0,   -55,     0,     0,
       0,     0,   -61,     0,   -41,   -55,     0,   -50,   -41,     0,
     -61,   -50,   -41,     0,     0,   -50,   -60,   -60,   -60,   -60,
     -60,   -57,   -57,   -57,   -57,   -57,   -56,   -56,   -56,   -56,
     -56,     0,   -60,     0,     0,     0,     0,   -57,     0,     0,
     -60,     0,   -56,    -6,    -6,   -57,     0,    -6,    -6,    -6,
     -56,   -59,   -59,   -59,   -59,   -59,   -62,   -62,   -62,   -62,
     -62,   -51,   216,   -51,   -51,   -51,     0,   -59,     0,     0,
       0,     0,   -62,     0,     0,   -59,     0,   -51,     0,   227,
     -62,   -49,   -49,   -49,     0,   -51,   -53,   -53,   -53,   -53,
     -53,     0,    -5,    -5,     0,   -49,    -5,    -5,    -5,   -49,
       0,     0,   -53,   -49,   -58,   -58,   -58,   -58,   -58,   215,
     -53,   -49,   -49,   -49,     0,   -60,   -60,   -60,   -60,   -60,
     -58,     0,     0,     0,     0,   -49,     0,     0,   -58,     0,
       0,   -60,     0,   -49,   -60,     0,     0,     0,    63,   -60,
     -60,   -60,   -60,   -60,   -68,   -68,   -68,   -68,   -68,   -69,
     -69,   -69,   -69,   -69,     0,   -60,     0,     0,     0,     0,
     -68,     0,   229,   -68,     0,   -69,     0,     0,   -69,   -70,
     -70,   -70,   -70,   -70,   -52,    87,   -52,   -52,   -52,   -54,
     -54,   -54,   -54,   -54,     0,   -70,     0,     0,   -70,     0,
     -52,     0,     0,   -52,     0,   -54,     0,     0,   -54,   -55,
     -55,   -55,   -55,   -55,   -61,   -61,   -61,   -61,   -61,   -60,
     -60,   -60,   -60,   -60,     0,   -55,     0,     0,   -55,     0,
     -61,     0,     0,   -61,     0,   -60,     0,     0,   -60,   -57,
     -57,   -57,   -57,   -57,   -56,   -56,   -56,   -56,   -56,   -59,
     -59,   -59,   -59,   -59,     0,   -57,     0,     0,   -57,     0,
     -56,     0,     0,   -56,     0,   -59,     0,     0,   -59,   -62,
     -62,   -62,   -62,   -62,   -51,    87,   -51,   -51,   -51,   -53,
     -53,   -53,   -53,   -53,     0,   -62,     0,     0,   -62,     0,
     -51,     0,     0,   -51,     0,   -53,     0,     0,   -53,   -58,
     -58,   -58,   -58,   -58,    86,     0,   -50,   -50,   -50,    86,
       0,   -49,   -49,   -49,     0,   -58,     0,     0,   -58,     0,
     -50,     0,     0,   -50,     0,   -49,     0,     0,   -49,    85,
     -47,   -47,   -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,
     -69,   -69,     0,   -47,     0,     0,   -47,     0,   -68,     0,
       0,     0,     0,   -69,   -70,   -70,   -70,   -70,   -70,   -52,
     237,   -52,   -52,   -52,   -54,   -54,   -54,   -54,   -54,     0,
     -70,     0,    -3,    -3,     0,   -52,    -3,    -3,    -3,     0,
     -54,   -55,   -55,   -55,   -55,   -55,   -61,   -61,   -61,   -61,
     -61,   -60,   -60,   -60,   -60,   -60,     0,   -55,     0,    -8,
      -8,     0,   -61,    -8,    -8,    -8,     0,   -60,   -57,   -57,
     -57,   -57,   -57,   -56,   -56,   -56,   -56,   -56,   -59,   -59,
     -59,   -59,   -59,     0,   -57,     0,   -10,   -10,     0,   -56,
     -10,   -10,   -10,     0,   -59,   -62,   -62,   -62,   -62,   -62,
     -51,   237,   -51,   -51,   -51,   -53,   -53,   -53,   -53,   -53,
       0,   -62,     0,    -9,    -9,     0,   -51,    -9,    -9,    -9,
       0,   -53,   -58,   -58,   -58,   -58,   -58,   -13,   -13,     0,
       0,   -13,   -13,   -13,     0,     0,     0,     0,   -58
};

static const yytype_int16 yycheck[] =
{
      24,    41,   114,    16,    71,     0,    11,     3,    21,    11,
       3,     6,    36,    37,     7,     3,    12,     3,    23,    12,
      15,    23,    27,    16,    17,    18,    31,     3,    16,    17,
      18,    10,    11,    26,    26,     0,    12,    30,    30,    63,
      33,     6,    30,    67,    23,    69,    70,     3,     4,     5,
       6,     7,     4,     5,     6,    27,    12,    13,    14,    31,
      16,    17,    18,    19,    20,    21,    22,    62,    24,    25,
       3,   138,    28,    29,    30,    10,    11,    33,     3,    31,
      10,    11,     3,     3,     3,     0,     7,    12,    23,     3,
     114,    12,    12,    23,   206,    16,    17,    18,    12,    27,
       3,    31,    36,    31,    28,   217,     3,   147,   121,    30,
      31,    11,    33,    16,    17,    18,    29,   229,     7,     8,
       9,    10,    11,    23,     3,   149,    26,    30,    27,    63,
     154,   155,    31,    67,    23,    69,    70,    16,    17,    18,
      11,     3,    31,   167,    31,     7,     3,    30,   172,   173,
      12,    30,    23,    15,    16,    17,    18,    10,    11,     3,
      31,   185,    30,   203,    30,   189,   190,    30,    30,    11,
      23,    33,    16,    17,    18,    27,   200,    26,    31,    31,
     114,    23,   206,    30,    26,   209,    30,    30,   212,   213,
     214,   215,   216,   217,    30,    36,   220,    11,    26,   223,
       3,   225,   226,   227,   228,   229,     4,     5,     6,    23,
     234,   235,   236,   237,   238,   149,     3,    31,     3,    26,
     154,   155,    63,     9,    10,    11,    67,     3,    69,    70,
       3,     7,    31,   167,    29,    26,    12,    23,   172,   173,
      16,    17,    18,    31,    26,    31,    87,    11,    31,    26,
      31,   185,   276,    31,    30,   189,   190,    33,    32,    23,
     284,     7,     8,     9,    10,    11,   200,    31,    31,    31,
      23,    31,   206,   114,    31,   209,    11,    23,   212,   213,
     214,   215,   216,   217,    36,    31,   220,    26,    23,   223,
      26,   225,   226,   227,   228,   229,    31,    26,    26,    26,
     234,   235,   236,   237,   238,     7,     8,     9,    10,    11,
       3,    63,    26,   154,     7,    67,    31,    69,    70,    12,
      26,    23,    31,    16,    17,    18,    31,    31,    30,    31,
       3,   172,    30,    30,    86,    11,    31,    30,    31,     3,
      33,     1,   276,     7,     4,     5,     6,    23,   189,    11,
     284,    27,    16,    17,    18,    31,     9,    10,    11,   200,
      30,    23,   114,    32,    26,   206,    30,    30,   209,    33,
      23,   212,   213,   214,   215,   216,   217,    36,    31,   220,
      11,    29,   223,    26,   225,   226,   227,   228,   229,    31,
      31,    31,    23,   234,   235,   236,   237,   238,    31,    29,
      31,    30,   154,     3,    63,    31,    31,     7,    67,     3,
      69,    70,    12,     7,    26,    26,    16,    17,    18,     6,
     172,    31,    16,    17,    18,     7,    85,     9,    10,    11,
      30,    31,    31,    33,   121,   276,    30,   189,    62,    33,
      -1,    23,    -1,   284,    11,    36,    -1,    11,   200,    31,
     137,    -1,   139,   140,   206,   114,    23,   209,   145,    23,
     212,   213,   214,   215,    31,   217,    -1,    31,   220,    -1,
      -1,   223,    63,   225,   226,   227,    67,   229,    69,    70,
      -1,    -1,   234,   235,   236,     3,   238,    36,    -1,     7,
      -1,    -1,    -1,    84,    12,   154,    11,    -1,    16,    17,
      18,     7,     8,     9,    10,    11,    33,    -1,    23,    36,
      -1,    -1,    30,   172,    63,    33,    31,    23,    67,    11,
      69,    70,    -1,   114,   276,    31,     9,    10,    11,    -1,
     189,    23,   284,    82,    -1,    27,    63,    64,    -1,    31,
      23,   200,    69,    70,    27,    -1,    -1,   206,    31,    -1,
     209,    -1,    -1,   212,   213,   214,    11,    -1,   217,    36,
      11,   220,    11,   154,   223,   114,   225,   226,    23,     3,
     229,    26,    23,     7,    23,   234,   235,    26,    12,   238,
      31,   172,    16,    17,    18,    -1,    63,   114,    -1,    -1,
      67,    -1,    69,    70,    -1,   122,    30,    31,   189,    33,
       7,     8,     9,    10,    11,   154,     0,     1,    -1,   200,
       4,     5,     6,    -1,    -1,   206,    23,   276,   209,    36,
      27,   212,   213,   172,    31,   284,   217,   154,    -1,   220,
      -1,    -1,   223,    -1,   225,    -1,    11,   114,   229,    -1,
     189,    -1,    -1,   234,    -1,   172,    63,   238,    23,    11,
      67,   200,    69,    70,    10,    11,    31,   206,    -1,    -1,
     209,    23,   189,   212,     9,    10,    11,    23,   217,    31,
      26,   220,    11,    36,   223,   202,    -1,   154,    23,   206,
     229,    -1,    27,    -1,    23,   276,    31,    -1,    27,   238,
     217,    -1,    31,   284,    -1,   172,    -1,   114,    -1,    -1,
      63,     3,   229,    -1,    -1,     7,    69,    70,    -1,    -1,
      12,    -1,   189,    76,    16,    17,    18,    -1,   245,    -1,
      83,    -1,     7,     8,     9,    10,    11,   276,    30,   206,
      -1,    33,   209,    10,    11,   284,    -1,   154,    23,    -1,
     217,    26,    -1,   220,     3,    30,    23,    32,     7,     3,
      27,   114,   229,     7,    31,   172,    -1,    16,    17,    18,
     123,   238,    16,    17,    18,    -1,     9,    10,    11,    -1,
      -1,    30,   189,    -1,    33,    -1,    30,    10,    11,    33,
      23,     7,     8,     9,    10,    11,    -1,    -1,    -1,   206,
      23,   154,   209,    -1,    27,    10,    11,    23,    31,   276,
     217,    27,    -1,   220,    30,    31,    -1,   284,    23,   172,
      -1,    26,   229,    -1,     3,     4,     5,     6,     7,    -1,
      -1,   238,    -1,    12,    13,    14,   189,    16,    17,    18,
      19,    20,    21,    22,    -1,    24,    25,    -1,   201,    28,
      29,    30,    -1,   206,    33,    -1,     9,    10,    11,     7,
       8,     9,    10,    11,   217,    -1,    -1,    -1,    -1,   276,
      23,   224,    -1,    26,    -1,    23,   229,   284,     3,     4,
       5,     6,     7,    31,    -1,    -1,    -1,    12,    13,    14,
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
      -1,    30,    -1,    -1,    33,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,     7,     8,     9,    10,
      11,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,     7,    23,     9,    10,    11,    27,    23,    -1,    -1,
      31,    27,    23,    -1,    -1,    31,    27,    23,    -1,    -1,
      31,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,     7,     8,     9,    10,    11,     7,    23,     9,    10,
      11,    27,    23,    -1,    -1,    31,    27,    23,    -1,    -1,
      31,    27,    23,    -1,    -1,    31,     7,     8,     9,    10,
      11,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,    -1,    23,     9,    10,    11,    27,    23,    -1,    -1,
      31,    27,    23,    -1,    -1,    31,    27,    23,    -1,    -1,
      31,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,     7,     8,     9,    10,    11,    -1,    23,    -1,    -1,
      -1,    27,    23,    -1,    -1,    31,    27,    23,     0,     1,
      31,    27,     4,     5,     6,    31,     7,     8,     9,    10,
      11,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,    -1,    23,    -1,    -1,    -1,    27,    23,    -1,    -1,
      31,    27,    23,     0,     1,    31,    -1,     4,     5,     6,
      31,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,     7,    11,     9,    10,    11,    -1,    23,    -1,    -1,
      -1,    -1,    23,    -1,    23,    31,    -1,    23,    27,    -1,
      31,    27,    31,    -1,    -1,    31,     7,     8,     9,    10,
      11,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,    -1,    23,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      31,    -1,    23,     0,     1,    31,    -1,     4,     5,     6,
      31,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,     7,     8,     9,    10,    11,    -1,    23,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    31,    -1,    23,    -1,     7,
      31,     9,    10,    11,    -1,    31,     7,     8,     9,    10,
      11,    -1,     0,     1,    -1,    23,     4,     5,     6,    27,
      -1,    -1,    23,    31,     7,     8,     9,    10,    11,     7,
      31,     9,    10,    11,    -1,     7,     8,     9,    10,    11,
      23,    -1,    -1,    -1,    -1,    23,    -1,    -1,    31,    -1,
      -1,    23,    -1,    31,    26,    -1,    -1,    -1,    30,     7,
       8,     9,    10,    11,     7,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    -1,    23,    -1,    -1,    -1,    -1,
      23,    -1,    30,    26,    -1,    23,    -1,    -1,    26,     7,
       8,     9,    10,    11,     7,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    -1,    23,    -1,    -1,    26,    -1,
      23,    -1,    -1,    26,    -1,    23,    -1,    -1,    26,     7,
       8,     9,    10,    11,     7,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    -1,    23,    -1,    -1,    26,    -1,
      23,    -1,    -1,    26,    -1,    23,    -1,    -1,    26,     7,
       8,     9,    10,    11,     7,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    -1,    23,    -1,    -1,    26,    -1,
      23,    -1,    -1,    26,    -1,    23,    -1,    -1,    26,     7,
       8,     9,    10,    11,     7,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    -1,    23,    -1,    -1,    26,    -1,
      23,    -1,    -1,    26,    -1,    23,    -1,    -1,    26,     7,
       8,     9,    10,    11,     7,    -1,     9,    10,    11,     7,
      -1,     9,    10,    11,    -1,    23,    -1,    -1,    26,    -1,
      23,    -1,    -1,    26,    -1,    23,    -1,    -1,    26,     9,
      10,    11,     7,     8,     9,    10,    11,     7,     8,     9,
      10,    11,    -1,    23,    -1,    -1,    26,    -1,    23,    -1,
      -1,    -1,    -1,    23,     7,     8,     9,    10,    11,     7,
       8,     9,    10,    11,     7,     8,     9,    10,    11,    -1,
      23,    -1,     0,     1,    -1,    23,     4,     5,     6,    -1,
      23,     7,     8,     9,    10,    11,     7,     8,     9,    10,
      11,     7,     8,     9,    10,    11,    -1,    23,    -1,     0,
       1,    -1,    23,     4,     5,     6,    -1,    23,     7,     8,
       9,    10,    11,     7,     8,     9,    10,    11,     7,     8,
       9,    10,    11,    -1,    23,    -1,     0,     1,    -1,    23,
       4,     5,     6,    -1,    23,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      -1,    23,    -1,     0,     1,    -1,    23,     4,     5,     6,
      -1,    23,     7,     8,     9,    10,    11,     0,     1,    -1,
      -1,     4,     5,     6,    -1,    -1,    -1,    -1,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,    35,    36,    37,    38,    39,
      62,     0,    37,     3,    26,    30,    31,    40,    62,    28,
      41,    31,     3,     3,     7,    12,    13,    14,    16,    17,
      18,    19,    21,    22,    24,    25,    30,    33,    38,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    62,
      63,    41,    27,    30,    32,     3,    60,    30,    30,    30,
      30,    30,     3,    26,    51,    30,    30,    51,    60,    29,
      42,    26,    11,    23,    10,     9,     7,     8,     3,    40,
      31,    51,    61,    51,    53,    54,     3,    15,    51,    51,
       3,    50,    26,     3,     3,    52,    31,    55,     3,    52,
      56,    57,    58,    59,    27,    31,    26,    31,    31,    31,
      31,    31,    26,    23,    31,    31,    61,    26,    26,    26,
      41,    43,    51,     3,    52,    26,    26,    20,    26,    31,
      31,    43,    50,    43,    43,    31,    43,    28,     3,     7,
      12,    16,    17,    18,    30,    33,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    63,     3,     7,    12,    16,
      17,    18,    30,    33,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    63,     3,     7,    16,    17,    18,    30,
      33,    55,    56,    57,    58,    59,    60,    63,    12,    26,
      11,    23,    32,    28,     3,    42,    30,     3,    60,    30,
      51,    60,    11,    10,     9,     7,     8,    30,     3,    60,
      30,    51,    60,    11,    23,    10,     9,     7,     8,    30,
       3,    60,    51,    60,    10,     9,     7,     8,    30,    55,
       3,    12,    52,    51,    42,    32,    29,    31,    61,    53,
      31,    55,    56,    57,    58,    59,    31,    61,    53,    31,
      55,     3,    12,    52,    56,    57,    58,    59,    31,    61,
      31,    56,    57,    58,    59,    53,    30,    26,    29,    51,
      31,    31,    31,    31,    30,    31,    31,    53,    26,    53,
      31,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    37,    38,    39,
      39,    40,    40,    41,    42,    42,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    44,    44,    44,    45,    46,
      46,    47,    47,    48,    48,    48,    48,    49,    50,    51,
      51,    52,    53,    53,    54,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      60,    60,    60,    61,    61,    62,    62,    62,    63,    63,
      63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     9,     5,
       7,     2,     3,     7,     7,     5,     5,     2,     4,     1,
       1,     4,     3,     3,     3,     1,     1,     3,     1,     3,
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
#line 2001 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 98 "syntax.y"
                                {printf("SINTATICO -------- declaration_list -> declaration declaration_list\n");}
#line 2007 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 99 "syntax.y"
                {printf("SINTATICO -------- declaration_list -> declaration\n");}
#line 2013 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 102 "syntax.y"
                       {printf("SINTATICO -------- declaration -> function_declaration\n");}
#line 2019 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 103 "syntax.y"
                    {printf("SINTATICO -------- declaration -> var_declaration\n");}
#line 2025 "syntax.tab.c"
    break;

  case 7: /* declaration: error  */
#line 104 "syntax.y"
          {}
#line 2031 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 107 "syntax.y"
              {printf("SINTATICO -------- var_declaration -> type %s\n", (yyvsp[-1].token).body);}
#line 2037 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 110 "syntax.y"
                                            {printf("SINTATICO -------- function_declaration -> type ID ( params_list ) brackets_stmt\n");}
#line 2043 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 111 "syntax.y"
                                  {printf("SINTATICO -------- function_declaration -> type ID ( ) brackets_stmt\n");}
#line 2049 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 114 "syntax.y"
                         {}
#line 2055 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 115 "syntax.y"
           {}
#line 2061 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 118 "syntax.y"
                {printf("SINTATICO -------- brackets_stmt -> stmt\n");}
#line 2067 "syntax.tab.c"
    break;

  case 14: /* stmts: stmt stmts  */
#line 121 "syntax.y"
             {}
#line 2073 "syntax.tab.c"
    break;

  case 15: /* stmts: stmt  */
#line 122 "syntax.y"
         {}
#line 2079 "syntax.tab.c"
    break;

  case 16: /* stmt: for_stmt  */
#line 125 "syntax.y"
           {}
#line 2085 "syntax.tab.c"
    break;

  case 17: /* stmt: if_else_stmt  */
#line 126 "syntax.y"
                 {}
#line 2091 "syntax.tab.c"
    break;

  case 18: /* stmt: return_stmt  */
#line 127 "syntax.y"
                {}
#line 2097 "syntax.tab.c"
    break;

  case 19: /* stmt: io_stmt  */
#line 128 "syntax.y"
            {}
#line 2103 "syntax.tab.c"
    break;

  case 20: /* stmt: exp_stmt  */
#line 129 "syntax.y"
             {}
#line 2109 "syntax.tab.c"
    break;

  case 21: /* stmt: set_stmt  */
#line 130 "syntax.y"
             {}
#line 2115 "syntax.tab.c"
    break;

  case 22: /* stmt: var_declaration  */
#line 131 "syntax.y"
                    {}
#line 2121 "syntax.tab.c"
    break;

  case 23: /* stmt: assignment  */
#line 132 "syntax.y"
               {}
#line 2127 "syntax.tab.c"
    break;

  case 24: /* stmt: brackets_stmt  */
#line 133 "syntax.y"
                  {}
#line 2133 "syntax.tab.c"
    break;

  case 25: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 136 "syntax.y"
                       {printf("SINTATICO -------- io_stmt -> %s ( %s )\n", (yyvsp[-4].token).body, (yyvsp[-2].token).body);}
#line 2139 "syntax.tab.c"
    break;

  case 26: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 137 "syntax.y"
                              {printf("SINTATICO -------- io_stmt -> %s ( %s )\n", (yyvsp[-4].token).body, (yyvsp[-2].token).body);}
#line 2145 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 138 "syntax.y"
                           {printf("SINTATICO -------- io_stmt -> %s ( exp )\n", (yyvsp[-4].token).body);}
#line 2151 "syntax.tab.c"
    break;

  case 28: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 141 "syntax.y"
                                                     {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}
#line 2157 "syntax.tab.c"
    break;

  case 29: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 144 "syntax.y"
                      {printf("SINTATICO -------- if_else_stmt -> IF ( exp ) brackets_stmt\n");}
#line 2163 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' brackets_stmt ELSE stmt  */
#line 145 "syntax.y"
                                           {printf("SINTATICO -------- if_else_stmt -> IF ( exp ) brackets_stmt ELSE stmt\n");}
#line 2169 "syntax.tab.c"
    break;

  case 31: /* return_stmt: RETURN ';'  */
#line 148 "syntax.y"
             {printf("SINTATICO -------- return_stmt -> RETURN ;\n");}
#line 2175 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN exp ';'  */
#line 149 "syntax.y"
                   {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}
#line 2181 "syntax.tab.c"
    break;

  case 33: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 152 "syntax.y"
                                          {printf("SINTATICO -------- set_stmt -> FORALL\n");}
#line 2187 "syntax.tab.c"
    break;

  case 34: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 153 "syntax.y"
                                       {printf("SINTATICO -------- set_stmt -> FORALL\n");}
#line 2193 "syntax.tab.c"
    break;

  case 35: /* set_stmt: ISSET '(' ID ')' ';'  */
#line 154 "syntax.y"
                         {printf("SINTATICO -------- set_stmt -> ISSET ( %s )\n", (yyvsp[-2].token).body);}
#line 2199 "syntax.tab.c"
    break;

  case 36: /* set_stmt: ISSET '(' set_exp ')' ';'  */
#line 155 "syntax.y"
                              {printf("SINTATICO -------- set_stmt -> ISSET ( set_exp )\n");}
#line 2205 "syntax.tab.c"
    break;

  case 37: /* exp_stmt: exp ';'  */
#line 158 "syntax.y"
          {}
#line 2211 "syntax.tab.c"
    break;

  case 38: /* assignment: ID '=' exp ';'  */
#line 161 "syntax.y"
                 {printf("SINTATICO -------- assignment -> %s = exp\n", (yyvsp[-3].token).body);}
#line 2217 "syntax.tab.c"
    break;

  case 39: /* exp: or_exp  */
#line 164 "syntax.y"
         {printf("SINTATICO -------- exp -> or_exp\n");}
#line 2223 "syntax.tab.c"
    break;

  case 40: /* exp: set_exp  */
#line 165 "syntax.y"
            {}
#line 2229 "syntax.tab.c"
    break;

  case 41: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 168 "syntax.y"
                             {printf("SINTATICO -------- set_exp -> %s ( set_in_exp )\n", (yyvsp[-3].token).body);}
#line 2235 "syntax.tab.c"
    break;

  case 42: /* set_in_exp: or_exp INFIX_OP ID  */
#line 171 "syntax.y"
                     {printf("SINTATICO -------- set_in_exp -> or_exp %s %s\n", (yyvsp[-1].token).body, (yyvsp[0].token).body);}
#line 2241 "syntax.tab.c"
    break;

  case 43: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 172 "syntax.y"
                            {printf("SINTATICO -------- set_in_exp -> or_exp %s set_exp\n", (yyvsp[-1].token).body);}
#line 2247 "syntax.tab.c"
    break;

  case 44: /* or_exp: or_exp OR and_exp  */
#line 175 "syntax.y"
                    {printf("SINTATICO -------- or_exp -> or_exp %s and_exp\n", (yyvsp[-1].token).body);}
#line 2253 "syntax.tab.c"
    break;

  case 45: /* or_exp: and_exp  */
#line 176 "syntax.y"
            {}
#line 2259 "syntax.tab.c"
    break;

  case 46: /* or_exp: set_in_exp  */
#line 177 "syntax.y"
               {}
#line 2265 "syntax.tab.c"
    break;

  case 47: /* and_exp: and_exp AND relational_exp  */
#line 180 "syntax.y"
                             {printf("SINTATICO -------- and_exp -> and_exp %s relational_exp\n", (yyvsp[-1].token).body);}
#line 2271 "syntax.tab.c"
    break;

  case 48: /* and_exp: relational_exp  */
#line 181 "syntax.y"
                   {}
#line 2277 "syntax.tab.c"
    break;

  case 49: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 184 "syntax.y"
                                       {printf("SINTATICO -------- relational_exp -> relational_exp %s sum_exp\n", (yyvsp[-1].token).body);}
#line 2283 "syntax.tab.c"
    break;

  case 50: /* relational_exp: sum_exp  */
#line 185 "syntax.y"
            {}
#line 2289 "syntax.tab.c"
    break;

  case 51: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 188 "syntax.y"
                                {printf("SINTATICO -------- sum_exp -> sum_exp %s mul_exp\n", (yyvsp[-1].token).body);}
#line 2295 "syntax.tab.c"
    break;

  case 52: /* sum_exp: mul_exp  */
#line 189 "syntax.y"
            {}
#line 2301 "syntax.tab.c"
    break;

  case 53: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 192 "syntax.y"
                                  {printf("SINTATICO -------- mul_exp -> mul_exp %s unary_exp\n", (yyvsp[-1].token).body);}
#line 2307 "syntax.tab.c"
    break;

  case 54: /* mul_exp: unary_exp  */
#line 193 "syntax.y"
              {}
#line 2313 "syntax.tab.c"
    break;

  case 55: /* unary_exp: primal_exp  */
#line 196 "syntax.y"
             {}
#line 2319 "syntax.tab.c"
    break;

  case 56: /* unary_exp: '!' primal_exp  */
#line 197 "syntax.y"
                   {}
#line 2325 "syntax.tab.c"
    break;

  case 57: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 198 "syntax.y"
                             {printf("SINTATICO -------- unary_exp -> %s primal_exp\n", (yyvsp[-1].token).body);}
#line 2331 "syntax.tab.c"
    break;

  case 58: /* unary_exp: ID '(' arg_list ')'  */
#line 199 "syntax.y"
                        {printf("SINTATICO %d:%d-------- primal_exp -> %s ( arg_list )\n", (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);}
#line 2337 "syntax.tab.c"
    break;

  case 59: /* unary_exp: ID '(' ')'  */
#line 200 "syntax.y"
               {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);}
#line 2343 "syntax.tab.c"
    break;

  case 60: /* primal_exp: ID  */
#line 204 "syntax.y"
     {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2349 "syntax.tab.c"
    break;

  case 61: /* primal_exp: const  */
#line 205 "syntax.y"
          {printf("SINTATICO -------- primal_exp -> const\n");}
#line 2355 "syntax.tab.c"
    break;

  case 62: /* primal_exp: '(' exp ')'  */
#line 206 "syntax.y"
                {}
#line 2361 "syntax.tab.c"
    break;

  case 63: /* arg_list: exp ',' arg_list  */
#line 209 "syntax.y"
                   {printf("SINTATICO -------- arg_list -> exp , arg_list\n");}
#line 2367 "syntax.tab.c"
    break;

  case 64: /* arg_list: exp  */
#line 210 "syntax.y"
        {printf("SINTATICO -------- arg_list -> exp\n");}
#line 2373 "syntax.tab.c"
    break;

  case 65: /* type: BASIC_TYPE  */
#line 213 "syntax.y"
             {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2379 "syntax.tab.c"
    break;

  case 66: /* type: SET_TYPE  */
#line 214 "syntax.y"
             {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2385 "syntax.tab.c"
    break;

  case 67: /* type: ELEM_TYPE  */
#line 215 "syntax.y"
              {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2391 "syntax.tab.c"
    break;

  case 68: /* const: INTEGER  */
#line 218 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2397 "syntax.tab.c"
    break;

  case 69: /* const: FLOAT  */
#line 219 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2403 "syntax.tab.c"
    break;

  case 70: /* const: EMPTY  */
#line 220 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2409 "syntax.tab.c"
    break;


#line 2413 "syntax.tab.c"

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
  fprintf (stderr, "SYNTAX ERROR %d:%d - %s\n", yylval.token.line, yylval.token.column, msg);
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

