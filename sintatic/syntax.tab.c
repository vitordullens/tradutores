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
  YYSYMBOL_LOGIC_OP = 10,                  /* LOGIC_OP  */
  YYSYMBOL_SET_OP1 = 11,                   /* SET_OP1  */
  YYSYMBOL_SET_OP2 = 12,                   /* SET_OP2  */
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
  YYSYMBOL_24_ = 24,                       /* ';'  */
  YYSYMBOL_25_ = 25,                       /* ','  */
  YYSYMBOL_26_ = 26,                       /* '{'  */
  YYSYMBOL_27_ = 27,                       /* '}'  */
  YYSYMBOL_28_ = 28,                       /* '('  */
  YYSYMBOL_29_ = 29,                       /* ')'  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_31_forall_ = 31,                /* "forall"  */
  YYSYMBOL_32_is_set_ = 32,                /* "is_set"  */
  YYSYMBOL_33_ = 33,                       /* "||"  */
  YYSYMBOL_34_ = 34,                       /* "&&"  */
  YYSYMBOL_35_ = 35,                       /* "-"  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_program = 37,                   /* program  */
  YYSYMBOL_declaration_list = 38,          /* declaration_list  */
  YYSYMBOL_declaration = 39,               /* declaration  */
  YYSYMBOL_var_declaration = 40,           /* var_declaration  */
  YYSYMBOL_function_declaration = 41,      /* function_declaration  */
  YYSYMBOL_params_list = 42,               /* params_list  */
  YYSYMBOL_brackets_stmt = 43,             /* brackets_stmt  */
  YYSYMBOL_stmts = 44,                     /* stmts  */
  YYSYMBOL_stmt = 45,                      /* stmt  */
  YYSYMBOL_io_stmt = 46,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 47,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 48,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 49,               /* return_stmt  */
  YYSYMBOL_set_stmt = 50,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 51,                  /* exp_stmt  */
  YYSYMBOL_52_1 = 52,                      /* $@1  */
  YYSYMBOL_assignment = 53,                /* assignment  */
  YYSYMBOL_exp = 54,                       /* exp  */
  YYSYMBOL_set_exp = 55,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 56,                /* set_in_exp  */
  YYSYMBOL_or_exp = 57,                    /* or_exp  */
  YYSYMBOL_and_exp = 58,                   /* and_exp  */
  YYSYMBOL_relational_exp = 59,            /* relational_exp  */
  YYSYMBOL_sum_exp = 60,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 61,                   /* mul_exp  */
  YYSYMBOL_primal_exp = 62,                /* primal_exp  */
  YYSYMBOL_arg_list = 63,                  /* arg_list  */
  YYSYMBOL_type = 64,                      /* type  */
  YYSYMBOL_const = 65                      /* const  */
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
#define YYLAST   1751

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


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
      28,    29,     2,     2,    25,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    24,
       2,    30,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    31,
      32,    33,    34,    35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    90,    90,    91,    94,    95,    98,    99,   102,   105,
     106,   109,   110,   113,   116,   117,   118,   121,   122,   123,
     124,   125,   126,   127,   128,   131,   132,   133,   136,   139,
     140,   143,   144,   147,   148,   149,   152,   152,   156,   159,
     160,   163,   166,   167,   170,   171,   174,   175,   178,   179,
     182,   183,   186,   187,   188,   191,   192,   193,   194,   197,
     198,   201,   202,   203,   206,   207,   208
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
  "RELATIONAL_OP", "LOGIC_OP", "SET_OP1", "SET_OP2", "INPUT", "OUTPUT",
  "STRING", "INTEGER", "FLOAT", "EMPTY", "IF", "ELSE", "FOR", "RETURN",
  "INFIX_OP", "';'", "','", "'{'", "'}'", "'('", "')'", "'='",
  "\"forall\"", "\"is_set\"", "\"||\"", "\"&&\"", "\"-\"", "$accept",
  "program", "declaration_list", "declaration", "var_declaration",
  "function_declaration", "params_list", "brackets_stmt", "stmts", "stmt",
  "io_stmt", "for_stmt", "if_else_stmt", "return_stmt", "set_stmt",
  "exp_stmt", "$@1", "assignment", "exp", "set_exp", "set_in_exp",
  "or_exp", "and_exp", "relational_exp", "sum_exp", "mul_exp",
  "primal_exp", "arg_list", "type", "const", YY_NULLPTR
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
     275,   276,   277,   278,    59,    44,   123,   125,    40,    41,
      61,   279,   280,   281,   282,   283
};
#endif

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-67)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     826,     8,    32,    70,    76,    11,   534,   567,   600,   633,
      81,  -182,   666,    71,   699,   108,    78,    67,    94,   340,
     732,    78,   136,  1249,    82,    96,   101,  1411,  1418,  1439,
     107,   112,    23,   121,   134,    39,   444,    75,   140,   477,
     510,   543,   576,   609,   642,   675,   708,   168,   170,   -21,
      84,   346,  1236,  1446,  1450,   202,  1453,   765,   297,    58,
      74,    35,   209,   116,   303,   216,  1267,   741,   204,   218,
      12,  1457,   798,   222,   234,   104,   104,   104,   104,    39,
     240,   227,  1485,   139,   242,   249,   250,   125,   256,   259,
     261,   282,   294,   305,   774,   324,   320,   331,   344,    92,
     402,  1315,  1488,  1491,  1237,  1496,   807,   345,    26,   361,
     362,   382,   381,    74,   409,   397,   399,   840,   405,   410,
     412,   873,   906,   939,   278,   416,   422,   972,  1005,   419,
     449,  1203,  1038,   424,  1071,  1203,  1104,   340,  1256,   426,
    1279,  1285,  1298,   197,   283,   232,   368,    34,  1507,  1308,
    1321,  1327,  1336,  1519,  1526,  1538,   206,    -9,   385,  1697,
    1547,  1555,  1559,  1358,   428,  1566,  1576,  1589,   260,   430,
     302,   831,   162,  1705,  1595,  1604,  1607,  1137,    35,    74,
     340,   340,   437,   445,   251,    35,  1364,   190,   190,   190,
     190,   197,  1212,  1612,    35,    35,    35,   206,  1215,    35,
    1618,   347,   347,   347,   347,   260,   284,   450,   446,   451,
      74,   457,  1370,   448,   456,   472,   226,  1625,  1376,  1399,
    1648,   458,  1228,  1709,  1653,  1656,  1659,   460,   463,   864,
     435,  1717,  1665,  1676,   462,   411,  1170,   476,  1405,   323,
    1688,  1694,   473,   478
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,   504,    65,  -182,   453,   -14,   -26,   269,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,   -64,   -32,   -54,
    -181,    19,   -42,   211,   189,   138,   -15,   -98,    30,    42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    36,     9,    17,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    98,    46,    47,    48,
      86,    49,    50,    51,    52,    53,    54,    84,    55,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    93,    20,   -39,   214,   144,   118,    57,    -3,   169,
     169,    11,    75,    73,   -45,    96,    97,   146,   228,   157,
      71,   171,   171,   164,   -45,   194,    66,    83,    85,   119,
      10,    90,    91,    99,    24,   -61,    10,   164,   152,    27,
      28,    29,    66,   189,   150,    18,   161,    67,   175,   175,
     144,   153,   154,   155,   120,    27,    28,    29,    35,   -47,
     126,   138,   146,   -47,   103,     8,   133,   -47,   -47,   139,
     156,     8,    83,   -62,   140,   141,   142,    66,   145,   -63,
      87,   125,   170,   170,    13,    24,   213,    82,    18,   150,
      27,    28,    29,   143,   221,    14,    21,    22,   124,    15,
     227,   151,   -15,   162,    19,   176,   176,    66,   -45,    35,
      61,   183,     2,     3,     4,   132,   -44,   -45,    76,   163,
      27,    28,    29,   145,    62,   -44,    76,   164,   186,    63,
     144,    89,   165,   166,   167,    64,   206,    16,   144,    35,
      65,   193,   146,   157,   144,   215,   151,   207,   108,    69,
     146,   168,    83,   200,   208,   209,   146,   157,   178,   229,
      83,    58,    70,   161,   104,   -12,    83,    72,   -60,   150,
     161,   203,   150,   150,   150,   150,   219,   150,   237,   161,
     161,   161,   225,   150,   161,   151,   175,   175,   175,   175,
     233,   -47,    74,   138,   -40,   -47,   -47,   149,   162,   160,
     138,   174,   174,   145,    87,    80,   140,   141,   142,   152,
     176,   145,    88,   140,   141,   142,   102,   145,    87,    92,
     162,    95,   153,   154,   155,   143,   151,   162,    94,   151,
     151,   151,   151,   151,   151,   189,   162,   162,   162,   162,
     151,   162,   149,   176,   176,   176,   176,   176,   148,   -14,
     159,   -46,   173,   173,   138,   -46,   -11,   -39,   -36,   -46,
     -46,   -39,   139,   163,   177,   187,   101,   140,   141,   142,
     147,   105,   158,   106,   172,   172,   165,   166,   167,   107,
     212,   -29,   -29,   -29,   -29,   109,   143,   100,   110,   -29,
     111,   -29,   -29,   148,   -29,   -29,   -29,   -29,   129,   -29,
     -29,     2,     3,     4,   -29,   -29,   163,   -44,   -40,   -29,
     -29,   112,   -40,   -29,   164,   147,   160,   -44,   194,   165,
     166,   167,   149,   160,   179,   149,   149,   149,   218,   113,
     149,   -39,   160,   160,   224,   201,   149,   160,   168,   174,
     174,   174,   232,    23,     2,     3,     4,   114,   -41,   115,
     163,    24,   -41,    25,    26,    77,    27,    28,    29,    30,
     116,    31,    32,   165,   166,   167,   137,   159,   117,   -41,
     -47,    33,    34,   148,   159,    35,   148,   148,   217,   -47,
     -47,   148,   168,   159,   223,   121,   122,   148,   159,   158,
     173,   173,   231,   -45,   195,   147,   158,   -45,   147,   216,
     134,   -45,   188,   147,   136,   222,   123,   180,   -47,   147,
     158,    77,   172,   230,   -13,   -13,   -13,   -13,   -47,   -47,
     164,   127,   -13,   128,   -13,   -13,   -46,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -59,   -46,   -46,   -13,   -13,   -43,
     130,   -42,   -13,   -13,   203,   181,   -13,   -23,   -23,   -23,
     -23,   131,   182,   135,   185,   -23,   199,   -23,   -23,   -40,
     -23,   -23,   -23,   -23,   -46,   -23,   -23,   210,   -46,   -46,
     -23,   -23,   211,   235,   234,   -23,   -23,   238,   236,   -23,
      23,     2,     3,     4,   -13,   239,   -38,   240,    24,   241,
      25,    26,   242,    27,    28,    29,    30,   -44,    31,    32,
     243,   -44,   -41,   137,   -16,   -44,   188,   -38,    33,    34,
      12,    81,    35,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,   -20,     0,   -20,   -20,     0,   -20,   -20,   -20,   -20,
       0,   -20,   -20,     0,    -2,     0,   -20,   -20,     2,     3,
       4,   -20,   -20,     0,     0,   -20,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,   -17,     0,   -17,   -17,     0,   -17,
     -17,   -17,   -17,     0,   -17,   -17,     0,    -5,     0,   -17,
     -17,    -5,    -5,    -5,   -17,   -17,     0,     0,   -17,   -18,
     -18,   -18,   -18,     0,     0,     0,     0,   -18,     0,   -18,
     -18,     0,   -18,   -18,   -18,   -18,     0,   -18,   -18,     0,
      -7,     0,   -18,   -18,    -7,    -7,    -7,   -18,   -18,     0,
       0,   -18,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
     -19,     0,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,
     -19,   -19,     0,    -6,     0,   -19,   -19,    -6,    -6,    -6,
     -19,   -19,     0,     0,   -19,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,   -22,     0,   -22,   -22,     0,   -22,   -22,
     -22,   -22,     0,   -22,   -22,     0,    -4,     0,   -22,   -22,
      -4,    -4,    -4,   -22,   -22,     0,     0,   -22,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,   -21,     0,   -21,   -21,
       0,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,    -8,
       0,   -21,   -21,    -8,    -8,    -8,   -21,   -21,     0,     0,
     -21,   -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,
       0,   -24,   -24,     0,   -24,   -24,   -24,   -24,     0,   -24,
     -24,     0,   -10,     0,   -24,   -24,   -10,   -10,   -10,   -24,
     -24,     0,     0,   -24,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,     0,   -31,   -31,     0,   -31,   -31,   -31,
     -31,     0,   -31,   -31,     0,    -9,     0,   -31,   -31,    -9,
      -9,    -9,   -31,   -31,     0,     0,   -31,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,   -32,     0,   -32,   -32,     0,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,   -13,     0,
     -32,   -32,   -13,   -13,   -13,   -32,   -32,     0,     0,   -32,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,     0,
     -38,   -38,     0,   -38,   -38,   -38,   -38,     1,   -38,   -38,
       2,     3,     4,   -38,   -38,     0,     0,     0,   -38,   -38,
       0,     0,   -38,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,   -37,     0,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -45,   -37,   -37,     0,   -45,   202,   -37,   -37,     0,     0,
       0,   -37,   -37,     0,     0,   -37,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,   -25,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -44,   -25,   -25,     0,   -44,   202,   -25,
     -25,     0,     0,     0,   -25,   -25,     0,     0,   -25,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,   -26,     0,   -26,
     -26,     0,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,     0,   -26,   -26,     0,     0,     0,   -26,   -26,     0,
       0,   -26,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,     0,   -27,   -27,     0,   -27,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,     0,   -27,   -27,     0,     0,     0,
     -27,   -27,     0,     0,   -27,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,   -34,     0,   -34,   -34,     0,   -34,   -34,
     -34,   -34,     0,   -34,   -34,     0,     0,     0,   -34,   -34,
       0,     0,     0,   -34,   -34,     0,     0,   -34,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,   -35,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,   -35,   -35,     0,     0,     0,   -35,   -35,     0,     0,
     -35,   -30,   -30,   -30,   -30,     0,     0,     0,     0,   -30,
       0,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,   -30,
     -30,     0,     0,     0,   -30,   -30,     0,     0,     0,   -30,
     -30,     0,     0,   -30,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,     0,   -33,   -33,     0,   -33,   -33,   -33,
     -33,     0,   -33,   -33,     0,     0,     0,   -33,   -33,     0,
       0,     0,   -33,   -33,     0,     0,   -33,   -28,   -28,   -28,
     -28,     0,     0,     0,     0,   -28,     0,   -28,   -28,     0,
     -28,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,     0,
     -28,   -28,     0,     0,     0,   -28,   -28,     0,     0,   -28,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,     0,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,    -8,    -8,
       0,     0,     0,    -8,    -8,     0,     0,     0,    -8,    -8,
       0,     0,    -8,   -13,   -13,   -13,   -13,     0,     0,     0,
       0,   -13,     0,   -13,   -13,     0,   -13,   -13,   -13,   -13,
       0,   -13,   -13,     0,     0,     0,   -13,   -13,     0,     0,
       0,   -13,   -13,     0,     0,   -13,    23,     2,     3,     4,
       0,     0,     0,     0,    24,   138,    25,    26,   138,    27,
      28,    29,    30,   139,    31,    32,   139,     0,   140,   141,
     142,   140,   141,   142,    33,    34,     0,   195,    35,     0,
     138,   220,     0,    78,   226,   -49,     0,   143,   139,     0,
     143,   -46,     0,   140,   141,   142,   -55,   -55,   -55,     0,
     -49,   -46,   -46,   -55,   -55,   -55,     0,     0,     0,   -49,
     -49,     0,   143,   -55,   -55,   -55,   -55,    59,     0,    60,
       0,   -55,   -55,   -55,   184,   -55,   -64,   -64,   -64,   -55,
     -55,   -55,   -65,   -65,   -65,    59,     0,     0,     0,     0,
     -55,   -55,     0,     0,   -64,   -66,   -66,   -66,   -64,     0,
     -65,     0,   -64,   -64,   -65,   -51,   191,   -51,   -65,   -65,
       0,     0,    78,   -66,   -48,     0,     0,   -66,   -54,   -54,
     -54,   -66,   -66,   -51,   -56,   -56,   -56,   -51,     0,   -48,
       0,   -51,   -51,   -55,   -55,   -55,   -54,     0,   -48,   -48,
     -54,     0,   -56,     0,   -54,   -54,   -56,     0,     0,   -55,
     -56,   -56,     0,     0,   192,   -55,   -55,   -55,     0,   -55,
     -55,   -53,   -53,   -53,     0,     0,     0,   -58,   -58,   -58,
       0,     0,     0,   -50,   191,   -50,   198,   -55,     0,   -53,
       0,   -55,   -55,   -53,     0,   -58,     0,   -53,   -53,   -58,
       0,   -50,     0,   -58,   -58,   -50,   -52,   -52,   -52,   -50,
     -50,     0,   -57,   -57,   -57,     0,     0,     0,   -64,   -64,
     -64,     0,     0,     0,   -52,   -65,   -65,   -65,   -52,     0,
     -57,     0,   -52,   -52,   -57,   -64,     0,     0,   -57,   -57,
       0,     0,   -65,     0,   -64,   -64,   -66,   -66,   -66,     0,
       0,   -65,   -65,   -51,    79,   -51,     0,   -54,   -54,   -54,
     -56,   -56,   -56,   -66,   -53,   -53,   -53,     0,     0,     0,
     -51,     0,   -66,   -66,   -54,     0,     0,   -56,     0,   -51,
     -51,   -53,     0,   -54,   -54,     0,   -56,   -56,     0,     0,
     -53,   -53,   -58,   -58,   -58,   -50,    79,   -50,   -52,   -52,
     -52,     0,     0,   -57,   -57,   -57,     0,     0,     0,   -58,
       0,     0,   -50,     0,   190,   -52,   -49,     0,   -58,   -58,
     -57,   -50,   -50,     0,   -52,   -52,   -64,   -64,   -64,   -57,
     -57,     0,   -49,   -65,   -65,   -65,   -49,     0,     0,     0,
     -49,   -49,   -64,     0,     0,   -66,   -66,   -66,     0,   -65,
       0,     0,   -64,   -64,   -51,   197,   -51,     0,     0,   -65,
     -65,   -66,   -54,   -54,   -54,     0,   -56,   -56,   -56,     0,
     -51,   -66,   -66,   -64,   -64,   -64,     0,     0,   -54,     0,
     -51,   -51,   -56,   -65,   -65,   -65,     0,     0,   -54,   -54,
       0,     0,   -56,   -56,     0,   -64,   -66,   -66,   -66,   -64,
     -64,     0,   -51,   205,   -51,   -65,     0,     0,     0,   -65,
     -65,   -54,   -54,   -54,   -56,   -56,   -56,     0,   -66,   -53,
     -53,   -53,   -66,   -66,   -51,   -53,   -53,   -53,   -51,   -51,
       0,     0,   190,   -54,   -48,   -53,   -56,   -54,   -54,     0,
     -56,   -56,     0,     0,     0,   -53,   -53,   -53,     0,     0,
     -48,   -53,   -53,     0,   -48,   -58,   -58,   -58,   -48,   -48,
     -50,   197,   -50,   -52,   -52,   -52,   -58,   -58,   -58,     0,
       0,   -58,   -50,   205,   -50,     0,   -50,     0,     0,   -52,
       0,   -58,   -58,   -52,   -52,   -52,   -50,   -50,   -58,   -52,
     -52,     0,   -58,   -58,   -50,   -57,   -57,   -57,   -50,   -50,
       0,   -57,   -57,   -57,   196,   -52,   -49,     0,     0,   -52,
     -52,   -57,   204,     0,   -49,     0,   196,     0,   -48,     0,
     -49,   -57,   -57,   -57,   204,     0,   -48,   -57,   -57,     0,
     -49,   -49,   -48,     0,   -49,     0,     0,     0,   -49,   -49,
       0,     0,   -48,   -48,     0,     0,   -48,     0,     0,     0,
     -48,   -48
};

static const yytype_int16 yycheck[] =
{
      32,    65,    16,    24,   185,    59,   104,    21,     0,    63,
      64,     0,    33,    39,    23,     3,    70,    59,   199,    61,
      35,    63,    64,    11,    33,    34,     3,    59,    60,     3,
       0,    63,    64,    75,    11,     3,     6,    11,     3,    16,
      17,    18,     3,     9,    59,    15,    61,    24,    63,    64,
     104,    16,    17,    18,   108,    16,    17,    18,    35,    25,
     114,     3,   104,    29,    79,     0,   130,    33,    34,    11,
      35,     6,   104,     3,    16,    17,    18,     3,    59,     3,
      61,   113,    63,    64,     3,    11,   184,    29,    58,   104,
      16,    17,    18,    35,   192,    24,    29,     3,   112,    28,
     198,    59,    27,    61,    26,    63,    64,     3,    24,    35,
      28,   137,     4,     5,     6,   129,    24,    33,    34,     3,
      16,    17,    18,   104,    28,    33,    34,    11,   143,    28,
     184,    15,    16,    17,    18,    28,   178,    29,   192,    35,
      28,   156,   184,   185,   198,   187,   104,   179,    23,    28,
     192,    35,   184,   168,   180,   181,   198,   199,    33,   201,
     192,    25,    28,   178,    25,    29,   198,    27,    29,   184,
     185,     9,   187,   188,   189,   190,   191,   192,   210,   194,
     195,   196,   197,   198,   199,   143,   201,   202,   203,   204,
     205,    29,    24,     3,    24,    33,    34,    59,   156,    61,
       3,    63,    64,   184,   185,     3,    16,    17,    18,     3,
     168,   192,     3,    16,    17,    18,    78,   198,   199,     3,
     178,     3,    16,    17,    18,    35,   184,   185,    24,   187,
     188,   189,   190,   191,   192,     9,   194,   195,   196,   197,
     198,   199,   104,   201,   202,   203,   204,   205,    59,    27,
      61,    25,    63,    64,     3,    29,    29,    25,    24,    33,
      34,    29,    11,     3,    24,    33,    77,    16,    17,    18,
      59,    29,    61,    24,    63,    64,    16,    17,    18,    29,
      29,     3,     4,     5,     6,    29,    35,    76,    29,    11,
      29,    13,    14,   104,    16,    17,    18,    19,    20,    21,
      22,     4,     5,     6,    26,    27,     3,    23,    25,    31,
      32,    29,    29,    35,    11,   104,   178,    33,    34,    16,
      17,    18,   184,   185,    30,   187,   188,   189,   190,    24,
     192,    29,   194,   195,   196,    33,   198,   199,    35,   201,
     202,   203,   204,     3,     4,     5,     6,    23,    25,    29,
       3,    11,    29,    13,    14,     9,    16,    17,    18,    19,
      29,    21,    22,    16,    17,    18,    26,   178,    24,    24,
      24,    31,    32,   184,   185,    35,   187,   188,   189,    33,
      34,   192,    35,   194,   195,    24,    24,   198,   199,   178,
     201,   202,   203,    25,     9,   184,   185,    29,   187,   188,
     131,    33,    34,   192,   135,   194,    24,    26,    23,   198,
     199,     9,   201,   202,     3,     4,     5,     6,    33,    34,
      11,    24,    11,    24,    13,    14,    24,    16,    17,    18,
      19,    20,    21,    22,    29,    33,    34,    26,    27,    29,
      24,    29,    31,    32,     9,    26,    35,     3,     4,     5,
       6,    29,     3,    29,    28,    11,    28,    13,    14,    29,
      16,    17,    18,    19,    29,    21,    22,    30,    33,    34,
      26,    27,    27,    27,    24,    31,    32,    29,    27,    35,
       3,     4,     5,     6,    27,    29,    24,    29,    11,    29,
      13,    14,    29,    16,    17,    18,    19,    25,    21,    22,
      24,    29,    29,    26,    27,    33,    34,    29,    31,    32,
       6,    58,    35,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    21,    22,    -1,     0,    -1,    26,    27,     4,     5,
       6,    31,    32,    -1,    -1,    35,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    21,    22,    -1,     0,    -1,    26,
      27,     4,     5,     6,    31,    32,    -1,    -1,    35,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    21,    22,    -1,
       0,    -1,    26,    27,     4,     5,     6,    31,    32,    -1,
      -1,    35,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      21,    22,    -1,     0,    -1,    26,    27,     4,     5,     6,
      31,    32,    -1,    -1,    35,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    21,    22,    -1,     0,    -1,    26,    27,
       4,     5,     6,    31,    32,    -1,    -1,    35,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    21,    22,    -1,     0,
      -1,    26,    27,     4,     5,     6,    31,    32,    -1,    -1,
      35,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    21,
      22,    -1,     0,    -1,    26,    27,     4,     5,     6,    31,
      32,    -1,    -1,    35,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    21,    22,    -1,     0,    -1,    26,    27,     4,
       5,     6,    31,    32,    -1,    -1,    35,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    21,    22,    -1,     0,    -1,
      26,    27,     4,     5,     6,    31,    32,    -1,    -1,    35,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,     1,    21,    22,
       4,     5,     6,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    35,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      29,    21,    22,    -1,    33,    34,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    29,    21,    22,    -1,    33,    34,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    21,    22,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      21,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    21,    22,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    35,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    21,    22,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      35,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    21,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    21,    22,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    35,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    21,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    35,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    21,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    11,     3,    13,    14,     3,    16,
      17,    18,    19,    11,    21,    22,    11,    -1,    16,    17,
      18,    16,    17,    18,    31,    32,    -1,     9,    35,    -1,
       3,    29,    -1,     7,    29,     9,    -1,    35,    11,    -1,
      35,    23,    -1,    16,    17,    18,     7,     8,     9,    -1,
      24,    33,    34,     7,     8,     9,    -1,    -1,    -1,    33,
      34,    -1,    35,    24,     7,     8,     9,    28,    -1,    30,
      -1,    25,    33,    34,    28,    29,     7,     8,     9,    33,
      34,    24,     7,     8,     9,    28,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    25,     7,     8,     9,    29,    -1,
      25,    -1,    33,    34,    29,     7,     8,     9,    33,    34,
      -1,    -1,     7,    25,     9,    -1,    -1,    29,     7,     8,
       9,    33,    34,    25,     7,     8,     9,    29,    -1,    24,
      -1,    33,    34,     7,     8,     9,    25,    -1,    33,    34,
      29,    -1,    25,    -1,    33,    34,    29,    -1,    -1,    23,
      33,    34,    -1,    -1,    28,     7,     8,     9,    -1,    33,
      34,     7,     8,     9,    -1,    -1,    -1,     7,     8,     9,
      -1,    -1,    -1,     7,     8,     9,    28,    29,    -1,    25,
      -1,    33,    34,    29,    -1,    25,    -1,    33,    34,    29,
      -1,    25,    -1,    33,    34,    29,     7,     8,     9,    33,
      34,    -1,     7,     8,     9,    -1,    -1,    -1,     7,     8,
       9,    -1,    -1,    -1,    25,     7,     8,     9,    29,    -1,
      25,    -1,    33,    34,    29,    24,    -1,    -1,    33,    34,
      -1,    -1,    24,    -1,    33,    34,     7,     8,     9,    -1,
      -1,    33,    34,     7,     8,     9,    -1,     7,     8,     9,
       7,     8,     9,    24,     7,     8,     9,    -1,    -1,    -1,
      24,    -1,    33,    34,    24,    -1,    -1,    24,    -1,    33,
      34,    24,    -1,    33,    34,    -1,    33,    34,    -1,    -1,
      33,    34,     7,     8,     9,     7,     8,     9,     7,     8,
       9,    -1,    -1,     7,     8,     9,    -1,    -1,    -1,    24,
      -1,    -1,    24,    -1,     7,    24,     9,    -1,    33,    34,
      24,    33,    34,    -1,    33,    34,     7,     8,     9,    33,
      34,    -1,    25,     7,     8,     9,    29,    -1,    -1,    -1,
      33,    34,    23,    -1,    -1,     7,     8,     9,    -1,    23,
      -1,    -1,    33,    34,     7,     8,     9,    -1,    -1,    33,
      34,    23,     7,     8,     9,    -1,     7,     8,     9,    -1,
      23,    33,    34,     7,     8,     9,    -1,    -1,    23,    -1,
      33,    34,    23,     7,     8,     9,    -1,    -1,    33,    34,
      -1,    -1,    33,    34,    -1,    29,     7,     8,     9,    33,
      34,    -1,     7,     8,     9,    29,    -1,    -1,    -1,    33,
      34,     7,     8,     9,     7,     8,     9,    -1,    29,     7,
       8,     9,    33,    34,    29,     7,     8,     9,    33,    34,
      -1,    -1,     7,    29,     9,    23,    29,    33,    34,    -1,
      33,    34,    -1,    -1,    -1,    33,    34,    29,    -1,    -1,
      25,    33,    34,    -1,    29,     7,     8,     9,    33,    34,
       7,     8,     9,     7,     8,     9,     7,     8,     9,    -1,
      -1,    23,     7,     8,     9,    -1,    23,    -1,    -1,    23,
      -1,    33,    34,     7,     8,     9,    33,    34,    29,    33,
      34,    -1,    33,    34,    29,     7,     8,     9,    33,    34,
      -1,     7,     8,     9,     7,    29,     9,    -1,    -1,    33,
      34,    23,     7,    -1,     9,    -1,     7,    -1,     9,    -1,
      23,    33,    34,    29,     7,    -1,     9,    33,    34,    -1,
      33,    34,    23,    -1,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    33,    34,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,    37,    38,    39,    40,    41,
      64,     0,    39,     3,    24,    28,    29,    42,    64,    26,
      43,    29,     3,     3,    11,    13,    14,    16,    17,    18,
      19,    21,    22,    31,    32,    35,    40,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    53,    54,    55,    57,
      58,    59,    60,    61,    62,    64,    65,    43,    25,    28,
      30,    28,    28,    28,    28,    28,     3,    24,    54,    28,
      28,    62,    27,    44,    24,    33,    34,     9,     7,     8,
       3,    42,    29,    54,    63,    54,    56,    57,     3,    15,
      54,    54,     3,    53,    24,     3,     3,    55,    52,    58,
      59,    60,    61,    62,    25,    29,    24,    29,    23,    29,
      29,    29,    29,    24,    23,    29,    29,    24,    63,     3,
      55,    24,    24,    24,    43,    54,    55,    24,    24,    20,
      24,    29,    43,    53,    45,    29,    45,    26,     3,    11,
      16,    17,    18,    35,    55,    57,    58,    59,    60,    61,
      62,    65,     3,    16,    17,    18,    35,    58,    59,    60,
      61,    62,    65,     3,    11,    16,    17,    18,    35,    55,
      57,    58,    59,    60,    61,    62,    65,    24,    33,    30,
      26,    26,     3,    44,    28,    28,    62,    33,    34,     9,
       7,     8,    28,    62,    34,     9,     7,     8,    28,    28,
      62,    33,    34,     9,     7,     8,    58,    54,    44,    44,
      30,    27,    29,    63,    56,    58,    59,    60,    61,    62,
      29,    63,    59,    60,    61,    62,    29,    63,    56,    58,
      59,    60,    61,    62,    24,    27,    27,    54,    29,    29,
      29,    29,    29,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    39,    39,    40,    41,
      41,    42,    42,    43,    44,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    46,    46,    46,    47,    48,
      48,    49,    49,    50,    50,    50,    52,    51,    53,    54,
      54,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    61,    61,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     9,     5,
       7,     2,     3,     7,     5,     5,     0,     4,     4,     1,
       1,     4,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     2,     1,     1,     1,     4,     3,     3,
       1,     1,     1,     1,     1,     1,     1
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
#line 90 "syntax.y"
                   {printf("SINTATICO -------- program -> declaration_list\n");}
#line 1858 "syntax.tab.c"
    break;

  case 3: /* program: error  */
#line 91 "syntax.y"
          {}
#line 1864 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration_list declaration  */
#line 94 "syntax.y"
                                {printf("SINTATICO -------- declaration_list -> declaration declaration_list\n");}
#line 1870 "syntax.tab.c"
    break;

  case 5: /* declaration_list: declaration  */
#line 95 "syntax.y"
                {printf("SINTATICO -------- declaration_list -> declaration\n");}
#line 1876 "syntax.tab.c"
    break;

  case 6: /* declaration: function_declaration  */
#line 98 "syntax.y"
                       {printf("SINTATICO -------- declaration -> function_declaration\n");}
#line 1882 "syntax.tab.c"
    break;

  case 7: /* declaration: var_declaration  */
#line 99 "syntax.y"
                    {printf("SINTATICO -------- declaration -> var_declaration\n");}
#line 1888 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 102 "syntax.y"
              {printf("SINTATICO -------- var_declaration -> type %s\n", (yyvsp[-1].token).body);}
#line 1894 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 105 "syntax.y"
                                            {printf("SINTATICO -------- function_declaration -> type ID ( params_list ) brackets_stmt\n");}
#line 1900 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 106 "syntax.y"
                                  {printf("SINTATICO -------- function_declaration -> type ID ( ) brackets_stmt\n");}
#line 1906 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 109 "syntax.y"
                         {}
#line 1912 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 110 "syntax.y"
           {}
#line 1918 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 113 "syntax.y"
                {printf("SINTATICO -------- brackets_stmt -> stmt\n");}
#line 1924 "syntax.tab.c"
    break;

  case 14: /* stmts: stmt stmts  */
#line 116 "syntax.y"
             {}
#line 1930 "syntax.tab.c"
    break;

  case 15: /* stmts: brackets_stmt  */
#line 117 "syntax.y"
                  {}
#line 1936 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt  */
#line 118 "syntax.y"
         {}
#line 1942 "syntax.tab.c"
    break;

  case 17: /* stmt: for_stmt  */
#line 121 "syntax.y"
           {}
#line 1948 "syntax.tab.c"
    break;

  case 18: /* stmt: if_else_stmt  */
#line 122 "syntax.y"
                 {}
#line 1954 "syntax.tab.c"
    break;

  case 19: /* stmt: return_stmt  */
#line 123 "syntax.y"
                {}
#line 1960 "syntax.tab.c"
    break;

  case 20: /* stmt: io_stmt  */
#line 124 "syntax.y"
            {}
#line 1966 "syntax.tab.c"
    break;

  case 21: /* stmt: exp_stmt  */
#line 125 "syntax.y"
             {}
#line 1972 "syntax.tab.c"
    break;

  case 22: /* stmt: set_stmt  */
#line 126 "syntax.y"
             {}
#line 1978 "syntax.tab.c"
    break;

  case 23: /* stmt: var_declaration  */
#line 127 "syntax.y"
                    {}
#line 1984 "syntax.tab.c"
    break;

  case 24: /* stmt: assignment  */
#line 128 "syntax.y"
               {}
#line 1990 "syntax.tab.c"
    break;

  case 25: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 131 "syntax.y"
                       {}
#line 1996 "syntax.tab.c"
    break;

  case 26: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 132 "syntax.y"
                              {}
#line 2002 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 133 "syntax.y"
                           {}
#line 2008 "syntax.tab.c"
    break;

  case 28: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 136 "syntax.y"
                                                     {}
#line 2014 "syntax.tab.c"
    break;

  case 29: /* if_else_stmt: IF '(' exp ')' brackets_stmt  */
#line 139 "syntax.y"
                               {}
#line 2020 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' brackets_stmt ELSE brackets_stmt  */
#line 140 "syntax.y"
                                                    {}
#line 2026 "syntax.tab.c"
    break;

  case 31: /* return_stmt: RETURN ';'  */
#line 143 "syntax.y"
             {printf("SINTATICO -------- return_stmt -> RETURN ;\n");}
#line 2032 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN exp ';'  */
#line 144 "syntax.y"
                   {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}
#line 2038 "syntax.tab.c"
    break;

  case 33: /* set_stmt: "forall" '(' ID INFIX_OP set_exp ')' stmt  */
#line 147 "syntax.y"
                                            {}
#line 2044 "syntax.tab.c"
    break;

  case 34: /* set_stmt: "is_set" '(' ID ')' ';'  */
#line 148 "syntax.y"
                            {}
#line 2050 "syntax.tab.c"
    break;

  case 35: /* set_stmt: "is_set" '(' set_exp ')' ';'  */
#line 149 "syntax.y"
                                 {}
#line 2056 "syntax.tab.c"
    break;

  case 36: /* $@1: %empty  */
#line 152 "syntax.y"
          {}
#line 2062 "syntax.tab.c"
    break;

  case 37: /* exp_stmt: exp ';' $@1 ';'  */
#line 153 "syntax.y"
      {}
#line 2068 "syntax.tab.c"
    break;

  case 38: /* assignment: ID '=' exp ';'  */
#line 156 "syntax.y"
                 {printf("SINTATICO -------- assignment -> %s = exp\n", (yyvsp[-3].token).body);}
#line 2074 "syntax.tab.c"
    break;

  case 39: /* exp: or_exp  */
#line 159 "syntax.y"
         {}
#line 2080 "syntax.tab.c"
    break;

  case 40: /* exp: set_exp  */
#line 160 "syntax.y"
            {}
#line 2086 "syntax.tab.c"
    break;

  case 41: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 163 "syntax.y"
                             {}
#line 2092 "syntax.tab.c"
    break;

  case 42: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 166 "syntax.y"
                          {}
#line 2098 "syntax.tab.c"
    break;

  case 43: /* set_in_exp: or_exp INFIX_OP ID  */
#line 167 "syntax.y"
                       {}
#line 2104 "syntax.tab.c"
    break;

  case 44: /* or_exp: or_exp "||" and_exp  */
#line 170 "syntax.y"
                      {}
#line 2110 "syntax.tab.c"
    break;

  case 45: /* or_exp: and_exp  */
#line 171 "syntax.y"
            {}
#line 2116 "syntax.tab.c"
    break;

  case 46: /* and_exp: and_exp "&&" relational_exp  */
#line 174 "syntax.y"
                              {}
#line 2122 "syntax.tab.c"
    break;

  case 47: /* and_exp: relational_exp  */
#line 175 "syntax.y"
                   {}
#line 2128 "syntax.tab.c"
    break;

  case 48: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 178 "syntax.y"
                                       {}
#line 2134 "syntax.tab.c"
    break;

  case 49: /* relational_exp: sum_exp  */
#line 179 "syntax.y"
            {}
#line 2140 "syntax.tab.c"
    break;

  case 50: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 182 "syntax.y"
                                {}
#line 2146 "syntax.tab.c"
    break;

  case 51: /* sum_exp: mul_exp  */
#line 183 "syntax.y"
            {}
#line 2152 "syntax.tab.c"
    break;

  case 52: /* mul_exp: mul_exp ARITMETIC_OP2 primal_exp  */
#line 186 "syntax.y"
                                   {}
#line 2158 "syntax.tab.c"
    break;

  case 53: /* mul_exp: "-" primal_exp  */
#line 187 "syntax.y"
                   {}
#line 2164 "syntax.tab.c"
    break;

  case 54: /* mul_exp: primal_exp  */
#line 188 "syntax.y"
               {}
#line 2170 "syntax.tab.c"
    break;

  case 55: /* primal_exp: ID  */
#line 191 "syntax.y"
     {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2176 "syntax.tab.c"
    break;

  case 56: /* primal_exp: const  */
#line 192 "syntax.y"
          {printf("SINTATICO -------- primal_exp -> const\n");}
#line 2182 "syntax.tab.c"
    break;

  case 57: /* primal_exp: ID '(' arg_list ')'  */
#line 193 "syntax.y"
                        {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);}
#line 2188 "syntax.tab.c"
    break;

  case 58: /* primal_exp: ID '(' ')'  */
#line 194 "syntax.y"
               {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);}
#line 2194 "syntax.tab.c"
    break;

  case 59: /* arg_list: exp ',' arg_list  */
#line 197 "syntax.y"
                   {printf("SINTATICO -------- arg_list -> exp , arg_list\n");}
#line 2200 "syntax.tab.c"
    break;

  case 60: /* arg_list: exp  */
#line 198 "syntax.y"
        {printf("SINTATICO -------- arg_list -> exp\n");}
#line 2206 "syntax.tab.c"
    break;

  case 61: /* type: BASIC_TYPE  */
#line 201 "syntax.y"
             {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2212 "syntax.tab.c"
    break;

  case 62: /* type: SET_TYPE  */
#line 202 "syntax.y"
             {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2218 "syntax.tab.c"
    break;

  case 63: /* type: ELEM_TYPE  */
#line 203 "syntax.y"
              {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2224 "syntax.tab.c"
    break;

  case 64: /* const: INTEGER  */
#line 206 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2230 "syntax.tab.c"
    break;

  case 65: /* const: FLOAT  */
#line 207 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2236 "syntax.tab.c"
    break;

  case 66: /* const: EMPTY  */
#line 208 "syntax.y"
          {printf("SINTATICO %d:%d-------- const -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);}
#line 2242 "syntax.tab.c"
    break;


#line 2246 "syntax.tab.c"

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

#line 210 "syntax.y"


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

