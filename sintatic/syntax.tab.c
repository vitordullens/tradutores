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
#line 9 "syntax.y"

  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include "tabela.h"
  #include "arvore.h"

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;

  extern Simbolo tabelaSimbolos[1000000];

  char tipo[10000][100];

  int indiceTipo = 0;

  int indiceTabela = -1;

  int escopo = 0;

  NodoArvore* raiz;

  int erros = 0;

#line 99 "syntax.tab.c"

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
  YYSYMBOL_IFX = 3,                        /* IFX  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_FLOAT_TYPE = 5,                 /* FLOAT_TYPE  */
  YYSYMBOL_INT_TYPE = 6,                   /* INT_TYPE  */
  YYSYMBOL_SET_TYPE = 7,                   /* SET_TYPE  */
  YYSYMBOL_ELEM_TYPE = 8,                  /* ELEM_TYPE  */
  YYSYMBOL_ARITMETIC_OP1 = 9,              /* ARITMETIC_OP1  */
  YYSYMBOL_ARITMETIC_OP2 = 10,             /* ARITMETIC_OP2  */
  YYSYMBOL_RELATIONAL_OP = 11,             /* RELATIONAL_OP  */
  YYSYMBOL_AND = 12,                       /* AND  */
  YYSYMBOL_OR = 13,                        /* OR  */
  YYSYMBOL_SET_OP1 = 14,                   /* SET_OP1  */
  YYSYMBOL_INPUT = 15,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 16,                    /* OUTPUT  */
  YYSYMBOL_INTEGER = 17,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 18,                     /* FLOAT  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_EMPTY = 20,                     /* EMPTY  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_INFIX_OP = 25,                  /* INFIX_OP  */
  YYSYMBOL_FORALL = 26,                    /* FORALL  */
  YYSYMBOL_ISSET = 27,                     /* ISSET  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* '!'  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* '}'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
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
  YYSYMBOL_assignment = 52,                /* assignment  */
  YYSYMBOL_exp = 53,                       /* exp  */
  YYSYMBOL_set_exp = 54,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 55,                /* set_in_exp  */
  YYSYMBOL_or_exp = 56,                    /* or_exp  */
  YYSYMBOL_and_exp = 57,                   /* and_exp  */
  YYSYMBOL_relational_exp = 58,            /* relational_exp  */
  YYSYMBOL_sum_exp = 59,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 60,                   /* mul_exp  */
  YYSYMBOL_unary_exp = 61,                 /* unary_exp  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  466

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
       2,     2,     2,    29,     2,     2,     2,     2,     2,     2,
      32,    31,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
       2,    30,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    33,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,   106,   112,   119,   124,   129,   132,   148,
     165,   183,   198,   214,   219,   222,   228,   235,   240,   245,
     250,   255,   260,   265,   270,   275,   282,   287,   292,   299,
     309,   315,   324,   328,   335,   342,   350,   357,   363,   371,
     376,   383,   388,   393,   398,   403,   410,   416,   422,   428,
     436,   442,   447,   454,   460,   467,   473,   480,   486,   493,
     499,   506,   511,   516,   521,   527,   535,   540,   545,   552,
     558,   565,   572,   579,   586,   595,   600,   605
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
  "\"end of file\"", "error", "\"invalid token\"", "IFX", "ID",
  "FLOAT_TYPE", "INT_TYPE", "SET_TYPE", "ELEM_TYPE", "ARITMETIC_OP1",
  "ARITMETIC_OP2", "RELATIONAL_OP", "AND", "OR", "SET_OP1", "INPUT",
  "OUTPUT", "INTEGER", "FLOAT", "STRING", "EMPTY", "IF", "ELSE", "FOR",
  "RETURN", "INFIX_OP", "FORALL", "ISSET", "';'", "'!'", "'='", "')'",
  "'('", "'}'", "'{'", "','", "$accept", "program", "declaration_list",
  "declaration", "var_declaration", "function_declaration", "params_list",
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
     275,   276,   277,   278,   279,   280,   281,   282,    59,    33,
      61,    41,    40,   125,   123,    44
};
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3652,  3126,    11,    59,    69,    91,    17,  3258,  3499,  3526,
    3553,   104,  -132,  3580,    50,  3607,    15,    18,    95,   124,
    3617,  2972,  3626,    18,   116,  3063,   121,   101,   143,   156,
    3300,  3305,  3325,   157,   167,    57,   182,   187,   243,   727,
    2190,  2224,   154,  2258,  2292,  2326,  2360,  2394,  2428,  2462,
     204,   222,     7,   109,   118,    86,  3449,   502,  3330,  3335,
    3355,   220,  3360,  3635,   375,   749,    92,  3365,  3385,   782,
     258,   152,   727,   267,  3093,  2496,   276,   291,    54,   287,
    3390,   306,  3644,   319,  2530,  2564,    65,    98,   131,    98,
      98,    98,    98,   331,   332,   339,   360,  3395,   196,   358,
     365,    -1,    13,   372,   376,   379,   387,   389,   378,  2598,
     397,   398,   405,   406,   280,  3415,   155,   226,   121,   655,
     374,   507,  3453,  1390,  3420,  3425,   851,  3445,   127,   408,
     410,   415,  3004,   870,   357,   215,   244,   417,   422,   424,
    2632,  2666,  2700,   189,   438,   431,   445,   260,   302,  2972,
     474,  2972,  2972,  2734,   448,  2768,  2802,  2972,  2836,  2870,
    2972,  3098,   338,   465,  3127,  3132,  3137,   466,   394,   727,
      29,   151,   160,   293,    16,  3274,  3160,  3165,  3170,  3193,
     603,   525,   468,   224,   882,   993,   485,   413,   727,    24,
     556,   594,   730,  3031,  1110,  1001,  1147,  1182,  1191,  3103,
     529,   490,  3473,  3478,  3483,   493,   467,   727,    75,  3073,
    3142,  3500,  3505,  3510,  3527,   494,   519,   531,   542,   552,
    2904,   489,   145,   544,   548,  1405,   558,   560,   569,   570,
     463,   577,  2972,  1441,  1476,  1510,  1544,  1578,  1612,  1646,
    1680,   506,   590,   616,   592,   593,   283,  3198,  3203,   782,
     636,   599,  3226,   606,   708,   708,   708,   708,   708,   492,
    1220,  1227,   782,   645,   607,  1259,   613,   648,   920,   657,
     920,   920,   920,   920,   579,  3532,  3537,   782,   674,   628,
    3554,   614,   145,   145,   145,   145,   782,   760,   782,   766,
     638,   195,   641,   647,   621,   309,   529,   461,   421,   434,
     799,   677,   637,   727,   267,  1714,   661,   692,   664,  1748,
    1782,   671,   914,  2938,  3231,   669,   564,   683,   684,   823,
    3236,   338,   304,   265,  3295,  3259,  3264,  1264,   685,   781,
     696,   703,   994,  1300,   698,   670,   673,   719,  1152,   525,
     873,  1228,  1266,  3036,  3028,  1317,  1354,  3559,   704,   828,
     720,   729,  1016,  3564,  3208,  3175,  3581,  3586,   845,   731,
     740,   902,   741,   742,  1023,   782,  1047,   718,   746,   757,
     759,   761,   767,   774,   769,  1816,   783,  1850,  1884,  3069,
     790,   791,  3269,    31,   119,   233,   794,   805,  1365,    45,
     551,   875,   809,   811,   782,  1050,   816,  3591,   836,   837,
     841,   846,   865,   872,   874,   878,   547,   961,  1067,   881,
     883,   917,   894,   905,  1056,   913,   916,   839,   844,   853,
    3004,   870,  1086,   255,   268,   925,  1257,   932,   927,   933,
    1159,   926,   941,  1089,  1126,   940,  1004,  1124,   946,   947,
    1918,  1952,  1986,  2020,   951,   949,   969,  1324,  1325,  1357,
     991,  1002,  1229,  1236,  3004,   474,  3004,  3004,  3033,  3052,
    2054,  1011,  2088,  2122,  3004,  2156
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,   975,     4,  -132,   982,   -15,   -40,  -118,
    -131,  -107,   -92,   -88,   -79,   -41,   -60,   -29,   -21,  1059,
    1095,   922,   850,   785,   713,   561,   282,  -117,     0,   436
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    40,    10,    18,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    99,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   235,    22,    83,     9,    95,    76,    11,    63,   139,
      81,     9,   -52,   108,   143,   -72,    19,    12,   170,    20,
       2,     3,     4,     5,   -52,   236,   222,   256,   -54,   -54,
     128,   153,    86,   155,   156,   -40,    96,    98,   223,   158,
     237,   -54,   105,   106,   238,   189,    17,   -54,   100,   267,
     170,   170,    21,   239,   221,   -40,   -41,   113,   111,   -40,
     -40,    74,   -41,   -71,    19,   117,    26,   121,   215,   116,
     -41,    27,   241,   -73,    30,    31,   -41,    32,    15,   217,
     -41,   216,    16,   112,    37,    75,    38,   282,   -51,    39,
     154,   240,   218,   138,   219,   -74,   180,    98,    89,   -51,
     -51,   181,    74,   242,   144,   189,   182,    26,    14,   183,
     184,   -51,   185,   146,   -51,    30,    31,   234,    32,   186,
     245,   187,   -52,    97,   188,    67,    23,   118,    24,   315,
      39,    87,   243,    69,   -52,   120,   233,   -52,    30,    31,
     253,    32,   328,    88,   -42,   217,   -39,   -12,   170,   199,
     -42,    64,   -41,    39,   200,   -41,   161,   348,   218,   266,
     219,   162,   202,   203,   -52,   204,   163,   170,   -49,   164,
     165,   104,   166,   254,   296,    70,   -52,   207,   281,   167,
     -49,   168,   -52,   -49,   169,   223,   170,    82,    71,    72,
     -30,   -39,   308,   -30,   -30,   -30,   -30,   -30,   -30,    73,
     295,   306,   299,   -30,   -30,   -30,   -30,   -30,   -49,   -30,
     -30,   149,   -30,   -30,    77,   -30,   -30,    98,   -30,    78,
     -49,   -30,   -30,   -30,    93,   189,   -49,   -70,   100,   318,
      98,   126,    84,   -75,   -75,   -75,   -75,   -75,   189,   -48,
     -42,   100,   331,   -42,   374,    98,   338,    67,   342,   -75,
      85,   -48,   380,   189,   -48,   -75,   100,   351,   -43,   -75,
      30,    31,   103,    32,   -43,   100,   360,   100,   363,   -43,
      79,   107,   -43,   372,   373,    39,   256,   -53,   -53,   369,
     -44,   170,   170,   381,   137,   -44,   -44,   180,   -44,   235,
     -53,   170,   181,   -45,   215,   110,   -53,   182,   387,   -45,
     183,   184,   443,   185,   109,   255,   -51,   216,    68,   112,
     186,   393,   187,   236,   314,   188,   255,   -50,   -51,   114,
      80,   178,   -48,   235,   -51,   235,   235,   -45,   237,   -50,
     -45,   402,   238,   235,   -48,   -50,   460,   115,   462,   463,
     -48,   239,   247,   410,   100,   413,   465,   236,   197,   236,
     236,   213,   -15,   178,   178,   164,   165,   236,   166,   220,
     241,   145,   237,   -11,   237,   237,   238,   -38,   238,   238,
     169,   215,   237,   100,   429,   239,   238,   239,   239,   240,
       2,     3,     4,     5,   216,   239,   112,   -46,   -37,   127,
     221,   242,   444,   439,   241,   461,   241,   241,   247,   -46,
      80,   446,   -46,   129,   241,   234,   133,   130,   197,   451,
     131,   164,   165,   240,   166,   240,   240,   260,   132,    65,
     243,   251,   134,   240,   233,   242,   169,   242,   242,   135,
     183,   184,   224,   185,   -46,   242,   140,   136,   141,   234,
     264,   234,   234,   142,   248,   188,   -46,   -47,   147,   234,
     252,   178,   -46,   148,   243,   -69,   243,   243,   233,   -47,
     233,   233,   151,   261,   243,   -47,   150,    74,   233,   265,
     178,   275,    26,   282,   -50,   179,   152,    27,   244,   157,
      30,    31,   276,    32,   202,   203,   -50,   204,   280,   178,
      37,   305,    38,   291,   279,    39,   180,   249,   250,   207,
     262,   181,   198,   292,   213,   214,   182,   179,   179,   183,
     184,    91,   185,   -56,   -56,   -56,   293,   263,   294,   186,
     -47,   187,   277,   327,   188,   278,   286,   -56,   197,   260,
     -56,   213,   -47,   275,   309,   -47,   178,   178,   178,   178,
     178,   197,   183,   184,   213,   185,   202,   203,   298,   204,
     197,   287,   197,   197,   197,   197,   197,   188,   292,   213,
     -41,   207,   198,   288,   213,   213,   213,   213,   213,   -52,
     213,   293,   -41,   294,   289,   -41,   -42,   -52,   280,   290,
     300,   -52,   -42,   180,   178,   178,   -42,   -52,   181,   -52,
     301,   -52,   302,   182,   178,   383,   183,   184,   179,   185,
     177,   303,   304,   252,   179,   179,   186,   268,   187,   307,
     347,   188,   -66,   -66,   -66,   -66,   -66,   198,   310,   269,
     311,   265,   312,   198,   179,   -39,   313,   196,   -66,   -39,
     212,   319,   177,   177,   -66,   259,   214,   320,   -66,   332,
     317,   161,   214,   179,   333,   353,   162,   213,   367,   330,
     215,   163,   334,   125,   164,   165,   371,   166,   214,   215,
     352,   341,   335,   216,   167,   112,   168,    89,   -50,   169,
     364,   335,   216,   365,   112,   336,   213,   337,   350,   366,
     -50,   370,   198,   -50,   336,   214,   337,   196,   215,   375,
     179,   179,   179,   179,   179,   198,   376,   377,   214,   378,
     382,   216,   394,   112,   198,   395,   198,   198,   198,   198,
     198,   -49,   161,   214,   384,   385,   388,   162,   214,   214,
     214,   214,   214,   -49,   214,   164,   165,   390,   166,   -49,
     177,   161,   214,   -49,   391,   397,   162,   321,   179,   179,
     169,   163,   270,   -51,   164,   165,   396,   166,   179,   177,
     414,   399,   176,    25,   167,   -51,   168,   179,    26,   169,
     400,   -51,   404,    27,   359,   -51,    30,    31,   177,    32,
     362,   405,   407,   408,   215,   198,    37,   415,    38,   195,
     215,    39,   211,   212,   176,   176,   199,   216,   416,   112,
     417,   200,   418,   216,   -52,   112,   201,   421,   419,   202,
     203,   214,   204,   368,   124,   420,   -52,   196,   422,   205,
     212,   206,   389,   215,   207,   177,   177,   177,   177,   326,
     196,   -38,   -37,   212,   175,   423,   216,   386,   112,   196,
     214,   196,   196,   196,   346,   196,   424,   215,   212,   195,
     425,   -52,   426,   212,   212,   212,   357,   212,   430,   212,
     216,   194,   112,   -52,   210,   180,   175,   175,   -52,   398,
     181,   -41,   -42,   177,   177,   182,   -43,   440,   183,   184,
     -52,   185,   441,   177,    74,   123,   403,   431,   186,    26,
     187,   442,   176,   188,    27,   270,   -50,    30,    31,   174,
      32,   -76,   -76,   -76,   -76,   -76,   432,    37,   -50,    38,
     -43,   176,    39,   -41,   -50,   -42,   -43,   -76,   -50,   -43,
     -43,   194,   433,   -76,   434,   -52,   193,   -76,   379,   209,
     176,   174,   174,   162,   180,   436,   212,   -52,   163,   181,
     -52,   164,   165,   406,   166,   211,   437,   183,   184,   122,
     185,   167,   -52,   168,   -44,   -52,   169,   -45,   435,   339,
     -44,   -44,   188,   -41,   175,   212,   -44,   -52,   448,   195,
     -44,   173,   211,   447,   449,   -41,   -45,   176,   176,   176,
     325,   -41,   195,   175,   -42,   211,   193,   452,   453,   455,
     456,   195,    13,   195,   195,   345,   -42,   195,   192,   -42,
     211,   208,   175,   173,   173,   211,   211,   356,   392,   211,
     457,   211,   -77,   -77,   -77,   -77,   -77,   210,   215,   119,
     -58,   273,   -58,   -58,   -58,   176,   176,   -42,   -77,   174,
     401,   216,   458,   112,   -77,   176,   -58,   409,   -77,   -42,
     215,   194,   -58,   459,   210,   -42,   -58,   215,   174,   175,
     175,   324,   464,   216,   194,   112,    94,   210,   192,     0,
     216,   412,   112,   194,   428,   194,   344,   174,     0,   194,
     438,   215,   210,     0,   215,     0,     0,   210,   355,     0,
     215,   210,   209,   210,   216,     0,   112,   216,   211,   112,
     -43,     0,     0,   216,     0,   112,     0,   175,   175,     0,
     445,   173,   -43,     0,     0,   -43,   193,   175,   171,   209,
     215,     0,   -44,     0,   174,   323,     0,   211,     0,   193,
     173,     0,   209,   216,   -44,   112,     0,   -44,   193,   272,
     343,   -56,   -56,   -56,   193,   190,     0,   209,   101,   173,
     171,   171,   354,     0,   172,   -56,   209,   -43,   209,   -45,
       0,   -56,     0,     0,   297,   -56,     0,     0,     0,   -43,
     210,   -45,   174,   174,   -45,   -43,   -60,   -60,   -60,   -60,
     -60,   191,   174,   450,   102,   -48,   172,   172,   192,     0,
       0,   208,   -60,   215,     0,     0,   322,   -48,   -60,   210,
       0,   192,   -60,   -48,   208,   190,   216,   -48,   112,     0,
     340,   -61,   -61,   -61,   -61,   -61,   192,     0,     0,   208,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -61,   208,     0,
     208,     0,     0,   -61,     0,   209,   -67,   -61,     0,     0,
       0,   191,   -67,     0,   173,   173,   -67,     0,   171,   -66,
     -66,   -66,   -66,   -66,   173,     0,   -63,   -63,   -63,   -63,
     -63,   -46,   -44,     0,   209,   -66,     0,   171,     0,   -45,
       0,   -66,   -63,   -46,   -44,   -66,     0,     0,   -63,   -46,
     -44,   -45,   -63,   -46,   172,     0,   171,   -45,   -62,   -62,
     -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,     0,   -47,
       0,     0,   -45,   172,   -62,     0,     0,   208,   -45,   -65,
     -62,   -47,   -45,     0,   -62,   -65,     0,   -47,     0,   -65,
       0,   -47,   172,     0,     0,   190,     0,     0,   316,   -68,
     -68,   -68,   -68,   -68,     0,     0,   208,     0,   190,     0,
       0,   329,     0,     0,     0,   -68,   -57,   273,   -57,   -57,
     -57,   -68,     0,   190,     0,   -68,   349,   -41,   -42,     0,
       0,   191,   -57,     0,   102,   358,     0,   361,   -57,   -41,
     -42,     0,   -57,     0,   191,   -41,   -42,   102,     0,   -41,
     -42,   171,   171,   -59,   -59,   -59,   -59,   -59,     0,   191,
     -43,   171,   102,     0,   -64,   -64,   -64,   -64,   -64,   -59,
       0,   102,   -43,   102,     0,   -59,     0,     0,   -43,   -59,
     -64,     0,   -43,     0,     0,     0,   -64,   172,   172,    91,
     -64,   -55,   -55,   -55,     0,     0,   -14,   172,     0,   -14,
     -14,   -14,   -14,   -14,   -14,   -55,     0,     0,   -55,   -14,
     -14,   -14,   -14,   -14,   411,   -14,   -14,   -14,   -14,   -14,
       0,   -14,   -14,     0,   -14,     0,     0,   -14,   -14,   -14,
       0,     0,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,   427,     0,   -23,   -23,   -23,   -23,   -23,
     102,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,
     -23,     0,     0,   -23,   -23,   -23,     0,   -25,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,   102,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,   -25,     0,     0,   -25,   -25,
     -25,   -20,     0,     0,   -20,   -20,   -20,   -20,   -20,   -20,
       0,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,     0,   -20,
       0,     0,   -20,   -20,   -20,   -17,     0,     0,   -17,   -17,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,     0,   -17,     0,     0,   -17,   -17,   -17,   -18,
       0,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
       0,     0,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,     0,   -18,     0,     0,
     -18,   -18,   -18,   -19,     0,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,     0,     0,     0,   -19,   -19,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,
       0,   -19,     0,     0,   -19,   -19,   -19,   -22,     0,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,     0,   -22,     0,     0,   -22,   -22,
     -22,   -21,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,
       0,     0,   -21,   -21,   -21,   -32,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,     0,   -32,     0,     0,   -32,   -32,   -32,   -24,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
       0,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,     0,   -24,     0,     0,
     -24,   -24,   -24,   -36,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
       0,   -36,     0,     0,   -36,   -36,   -36,   -33,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,     0,   -33,     0,     0,   -33,   -33,
     -33,   -13,     0,     0,   -13,   -13,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,     0,   -13,
       0,     0,   -13,   -13,   -13,    -8,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,   -26,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,     0,   -26,     0,     0,
     -26,   -26,   -26,   -27,     0,     0,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
       0,   -27,     0,     0,   -27,   -27,   -27,   -28,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,     0,   -28,     0,     0,   -28,   -28,
     -28,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   454,   -30,   -30,     0,   -30,   -30,     0,   -30,
       0,     0,   -30,   -30,   -30,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,     0,   -31,     0,     0,   -31,   -31,   -31,   -35,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,     0,   -35,     0,     0,
     -35,   -35,   -35,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
       0,   -34,     0,     0,   -34,   -34,   -34,   -29,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,     0,   -29,     0,     0,   -29,   -29,
     -29,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,     0,   -23,   -23,     0,   -23,   -23,     0,   -23,
       0,     0,   -23,   -23,   -23,   -25,     0,     0,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,
     -25,   -25,     0,   -25,     0,     0,   -25,   -25,   -25,   159,
       0,     0,    25,     2,     3,     4,     5,    26,     0,     0,
       0,     0,    27,    28,    29,    30,    31,     0,    32,    33,
       0,    34,    35,     0,    36,    37,     0,    38,     0,     0,
      39,   -16,   160,   -20,     0,     0,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,     0,     0,   -20,   -20,   -20,   -20,
     -20,     0,   -20,   -20,     0,   -20,   -20,     0,   -20,   -20,
       0,   -20,     0,     0,   -20,   -20,   -20,   -17,     0,     0,
     -17,   -17,   -17,   -17,   -17,   -17,     0,     0,     0,     0,
     -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,
     -17,     0,   -17,   -17,     0,   -17,     0,     0,   -17,   -17,
     -17,   -18,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
       0,     0,     0,     0,   -18,   -18,   -18,   -18,   -18,     0,
     -18,   -18,     0,   -18,   -18,     0,   -18,   -18,     0,   -18,
       0,     0,   -18,   -18,   -18,   -19,     0,     0,   -19,   -19,
     -19,   -19,   -19,   -19,     0,     0,     0,     0,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,     0,   -19,   -19,     0,
     -19,   -19,     0,   -19,     0,     0,   -19,   -19,   -19,   -22,
       0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
       0,   -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,
     -22,   -22,   -22,   -21,     0,     0,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,   -21,   -21,   -21,   -21,
     -21,     0,   -21,   -21,     0,   -21,   -21,     0,   -21,   -21,
       0,   -21,     0,     0,   -21,   -21,   -21,   -32,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,
     -32,     0,   -32,   -32,     0,   -32,     0,     0,   -32,   -32,
     -32,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,
       0,     0,   -24,   -24,   -24,   -36,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,
     -36,   -36,     0,   -36,     0,     0,   -36,   -36,   -36,   -33,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,     0,   -33,     0,     0,
     -33,   -33,   -33,   -26,     0,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,
       0,   -26,     0,     0,   -26,   -26,   -26,   -27,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,   -27,     0,   -27,     0,     0,   -27,   -27,
     -27,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,   -28,
       0,     0,   -28,   -28,   -28,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,
     -31,   -31,     0,   -31,     0,     0,   -31,   -31,   -31,   -35,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
       0,   -35,   -35,     0,   -35,   -35,     0,   -35,     0,     0,
     -35,   -35,   -35,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,
       0,   -34,     0,     0,   -34,   -34,   -34,   -29,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,     0,   -29,
     -29,     0,   -29,   -29,     0,   -29,     0,     0,   -29,   -29,
     -29,   -14,     0,     0,   -14,   -14,   -14,   -14,   -14,   -14,
       0,     0,     0,     0,   -14,   -14,   -14,   -14,   -14,     0,
     -14,   -14,     0,   -14,   -14,     0,   -14,   -14,     0,   -14,
       0,     0,   -14,   -14,   -14,    -8,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,
      -8,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,   -13,
       0,     0,   -13,   -13,   -13,   -13,   -13,   -13,     0,     0,
       0,     0,   -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,
       0,   -13,   -13,     0,   -13,   -13,     0,   -13,     0,     0,
     -13,   -13,   -13,   159,     0,     0,    25,     2,     3,     4,
       5,    26,     0,     0,     0,     0,    27,    28,    29,    30,
      31,     0,    32,    33,     0,    34,    35,     0,    36,    37,
       0,    38,     0,     0,    39,   225,   160,     0,    25,     2,
       3,     4,     5,    26,     0,     0,     0,     0,    27,   226,
     227,    30,    31,     0,    32,   228,     0,   229,   230,     0,
     231,    37,     0,    38,     0,     0,    39,   272,   232,   -55,
     -55,   -55,   271,   -54,   -54,     0,   -44,   271,   -53,   -53,
       0,     0,     0,   -55,     0,     0,   -54,     0,   -44,   -55,
       0,   -53,   -54,   -55,   -44,   -45,   -54,   -53,   -44,     0,
       0,   -53,   -66,   -66,   -66,   -66,   -66,   -45,   -66,   -66,
     -66,   -66,   -66,   -45,   283,   -54,   -54,   -45,   -66,     0,
       0,   -66,     0,    65,   -66,    66,     0,     0,   -54,   312,
     -66,   246,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,     0,
       0,   -66,     0,   -66,     0,    66,    -7,    -7,   -66,   -66,
     246,    -7,    -7,    -7,    -7,   274,   -75,   -75,   -75,   -75,
     -75,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,
     -77,   284,   -75,   -56,   -56,   -56,     0,   -76,   -75,     0,
       0,     0,   -77,   -76,     0,     0,     0,   -56,   -77,   -58,
     258,   -58,   -58,   -58,   -60,   -60,   -60,   -60,   -60,   -61,
     -61,   -61,   -61,   -61,   284,   -58,   -55,   -55,   -55,     0,
     -60,   -58,     0,     0,     0,   -61,   -60,     0,     0,     0,
     -55,   -61,   -67,   -67,   -67,   -67,   -67,   -66,   -66,   -66,
     -66,   -66,   -63,   -63,   -63,   -63,   -63,     0,   -67,   283,
     -53,   -53,     0,   -66,   -67,     0,     0,     0,   -63,   -66,
       0,     0,     0,   -53,   -63,   -62,   -62,   -62,   -62,   -62,
     -65,   -65,   -65,   -65,   -65,   -68,   -68,   -68,   -68,   -68,
       0,   -62,     0,     0,     0,     0,   -65,   -62,    -2,     1,
       0,   -68,   -65,     2,     3,     4,     5,   -68,   -57,   258,
     -57,   -57,   -57,   -59,   -59,   -59,   -59,   -59,   -64,   -64,
     -64,   -64,   -64,   257,   -57,   -56,   -56,   -56,     0,   -59,
     -57,     0,     0,     0,   -64,   -59,     0,     0,     0,   -56,
     -64,     0,     0,     0,   257,   -56,   -55,   -55,   -55,   -75,
     -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,     0,
     -55,     0,     0,     0,     0,   -75,   -55,     0,   -75,     0,
     -76,     0,     0,   -76,   -77,   -77,   -77,   -77,   -77,   -58,
      92,   -58,   -58,   -58,   -60,   -60,   -60,   -60,   -60,     0,
     -77,     0,     0,   -77,     0,   -58,     0,     0,   -58,     0,
     -60,     0,     0,   -60,   -61,   -61,   -61,   -61,   -61,   -67,
     -67,   -67,   -67,   -67,   -66,   -66,   -66,   -66,   -66,     0,
     -61,     0,     0,   -61,     0,   -67,     0,     0,   -67,     0,
     -66,     0,     0,   -66,   -63,   -63,   -63,   -63,   -63,   -62,
     -62,   -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,     0,
     -63,     0,     0,   -63,     0,   -62,     0,     0,   -62,     0,
     -65,     0,     0,   -65,   -68,   -68,   -68,   -68,   -68,   -57,
      92,   -57,   -57,   -57,   -59,   -59,   -59,   -59,   -59,     0,
     -68,     0,     0,   -68,     0,   -57,     0,     0,   -57,     0,
     -59,     0,     0,   -59,   -64,   -64,   -64,   -64,   -64,     0,
      90,   -54,   -54,     0,    90,   -53,   -53,     0,     0,     0,
     -64,     0,     0,   -64,   -54,     0,     0,   -54,   -53,     0,
       0,   -53,   -75,   -75,   -75,   -75,   -75,   -76,   -76,   -76,
     -76,   -76,   -77,   -77,   -77,   -77,   -77,     0,   -75,    -4,
      -4,     0,     0,   -76,    -4,    -4,    -4,    -4,   -77,   -58,
     285,   -58,   -58,   -58,   -60,   -60,   -60,   -60,   -60,   -61,
     -61,   -61,   -61,   -61,     0,   -58,    -6,    -6,     0,     0,
     -60,    -6,    -6,    -6,    -6,   -61,   -67,   -67,   -67,   -67,
     -67,   -66,   -66,   -66,   -66,   -66,   -63,   -63,   -63,   -63,
     -63,     0,   -67,    -5,    -5,     0,     0,   -66,    -5,    -5,
      -5,    -5,   -63,   -62,   -62,   -62,   -62,   -62,   -65,   -65,
     -65,   -65,   -65,   -68,   -68,   -68,   -68,   -68,     0,   -62,
      -3,    -3,     0,     0,   -65,    -3,    -3,    -3,    -3,   -68,
     -57,   285,   -57,   -57,   -57,   -59,   -59,   -59,   -59,   -59,
     -64,   -64,   -64,   -64,   -64,     0,   -57,    -8,    -8,     0,
       0,   -59,    -8,    -8,    -8,    -8,   -64,   -14,   -14,     0,
       0,     0,   -14,   -14,   -14,   -14,   -10,   -10,     0,     0,
       0,   -10,   -10,   -10,   -10,    -9,    -9,     0,     0,     0,
      -9,    -9,    -9,    -9,   -13,   -13,     0,     0,     0,   -13,
     -13,   -13,   -13,     1,     0,     0,     0,     2,     3,     4,
       5
};

static const yytype_int16 yycheck[] =
{
       0,   132,    17,    43,     0,    65,    35,     7,    23,   126,
      39,     7,    13,    73,   132,     4,    16,     0,    39,     1,
       5,     6,     7,     8,    25,   132,    13,    11,    12,    13,
      31,   149,    25,   151,   152,    28,    65,    66,    25,   157,
     132,    25,    71,    72,   132,    66,    31,    31,    69,    25,
      71,    72,    34,   132,    25,    31,    25,    78,     4,    35,
      31,     4,    31,     4,    64,    86,     9,    88,    14,     4,
      25,    14,   132,     4,    17,    18,    31,    20,    28,    14,
      35,    27,    32,    29,    27,    28,    29,    12,    13,    32,
     150,   132,    27,   114,    29,     4,     4,   126,    12,    13,
      25,     9,     4,   132,   133,   126,    14,     9,     4,    17,
      18,    25,    20,   134,    28,    17,    18,   132,    20,    27,
     160,    29,    13,    31,    32,     4,    31,    29,     4,   246,
      32,    13,   132,    32,    25,     4,   132,    28,    17,    18,
     169,    20,   259,    25,    25,    14,    28,    31,   169,     4,
      31,    35,    25,    32,     9,    28,     4,   274,    27,   188,
      29,     9,    17,    18,    13,    20,    14,   188,    13,    17,
      18,    19,    20,    13,    29,    32,    25,    32,   207,    27,
      25,    29,    31,    28,    32,    25,   207,    33,    32,    32,
       1,    31,   232,     4,     5,     6,     7,     8,     9,    32,
     221,   230,   223,    14,    15,    16,    17,    18,    13,    20,
      21,    22,    23,    24,    32,    26,    27,   246,    29,    32,
      25,    32,    33,    34,     4,   246,    31,    31,   249,   250,
     259,    35,    28,     9,    10,    11,    12,    13,   259,    13,
      25,   262,   263,    28,   304,   274,   267,     4,   269,    25,
      28,    25,   312,   274,    28,    31,   277,   278,    25,    35,
      17,    18,     4,    20,    31,   286,   287,   288,   289,    25,
      27,     4,    28,   302,   303,    32,    11,    12,    13,   300,
      25,   302,   303,   312,     4,    25,    31,     4,    28,   420,
      25,   312,     9,    25,    14,     4,    31,    14,   319,    31,
      17,    18,   420,    20,    28,    12,    13,    27,    26,    29,
      27,   332,    29,   420,    31,    32,    12,    13,    25,    32,
      38,    39,    13,   454,    31,   456,   457,    25,   420,    25,
      28,   352,   420,   464,    25,    31,   454,    31,   456,   457,
      31,   420,     4,   364,   365,   366,   464,   454,    66,   456,
     457,    69,    33,    71,    72,    17,    18,   464,    20,    28,
     420,     4,   454,    31,   456,   457,   454,    28,   456,   457,
      32,    14,   464,   394,   395,   454,   464,   456,   457,   420,
       5,     6,     7,     8,    27,   464,    29,    13,    28,    31,
      25,   420,   421,   414,   454,   455,   456,   457,     4,    25,
     118,   422,    28,    31,   464,   420,    28,    31,   126,   430,
      31,    17,    18,   454,    20,   456,   457,     4,    31,    30,
     420,    27,    25,   464,   420,   454,    32,   456,   457,    31,
      17,    18,    27,    20,    13,   464,    28,    31,    28,   454,
      27,   456,   457,    28,   162,    32,    25,    13,    31,   464,
     168,   169,    31,    31,   454,    31,   456,   457,   454,    25,
     456,   457,    31,   181,   464,    31,    28,     4,   464,   187,
     188,     4,     9,    12,    13,    39,    31,    14,     4,    31,
      17,    18,   200,    20,    17,    18,    25,    20,   206,   207,
      27,    28,    29,     4,    27,    32,     4,    32,    32,    32,
      32,     9,    66,    14,   222,    69,    14,    71,    72,    17,
      18,     9,    20,    11,    12,    13,    27,    32,    29,    27,
      13,    29,    32,    31,    32,    32,    32,    25,   246,     4,
      28,   249,    25,     4,    28,    28,   254,   255,   256,   257,
     258,   259,    17,    18,   262,    20,    17,    18,     4,    20,
     268,    32,   270,   271,   272,   273,   274,    32,    14,   277,
      13,    32,   126,    32,   282,   283,   284,   285,   286,    13,
     288,    27,    25,    29,    32,    28,    25,    13,   296,    27,
      32,    25,    31,     4,   302,   303,    35,    31,     9,    25,
      32,    35,    32,    14,   312,    31,    17,    18,   162,    20,
      39,    32,    32,   321,   168,   169,    27,    13,    29,    32,
      31,    32,     9,    10,    11,    12,    13,   181,    28,    25,
       4,   339,    30,   187,   188,    31,    33,    66,    25,    35,
      69,    32,    71,    72,    31,    32,   200,    31,    35,    32,
       4,     4,   206,   207,    31,    31,     9,   365,    27,     4,
      14,    14,     4,    92,    17,    18,    19,    20,   222,    14,
      32,     4,    14,    27,    27,    29,    29,    12,    13,    32,
      32,    14,    27,    32,    29,    27,   394,    29,     4,    32,
      25,     4,   246,    28,    27,   249,    29,   126,    14,    28,
     254,   255,   256,   257,   258,   259,     4,    33,   262,    28,
      31,    27,    32,    29,   268,    32,   270,   271,   272,   273,
     274,    13,     4,   277,    31,    31,    31,     9,   282,   283,
     284,   285,   286,    25,   288,    17,    18,    31,    20,    31,
     169,     4,   296,    35,    31,    31,     9,    29,   302,   303,
      32,    14,    12,    13,    17,    18,    27,    20,   312,   188,
      32,    31,    39,     4,    27,    25,    29,   321,     9,    32,
      31,    31,    31,    14,     4,    35,    17,    18,   207,    20,
       4,    31,    31,    31,    14,   339,    27,    31,    29,    66,
      14,    32,    69,   222,    71,    72,     4,    27,    31,    29,
      31,     9,    31,    27,    13,    29,    14,    28,    31,    17,
      18,   365,    20,     4,    91,    31,    25,   246,    25,    27,
     249,    29,    31,    14,    32,   254,   255,   256,   257,   258,
     259,    31,    31,   262,    39,    31,    27,     4,    29,   268,
     394,   270,   271,   272,   273,   274,    31,    14,   277,   126,
      31,    13,    31,   282,   283,   284,   285,   286,    32,   288,
      27,    66,    29,    25,    69,     4,    71,    72,    13,    31,
       9,    25,    25,   302,   303,    14,    25,    28,    17,    18,
      25,    20,    28,   312,     4,    90,    31,    31,    27,     9,
      29,    28,   169,    32,    14,    12,    13,    17,    18,    39,
      20,     9,    10,    11,    12,    13,    31,    27,    25,    29,
      25,   188,    32,    31,    31,    31,    31,    25,    35,    31,
      35,   126,    31,    31,    31,    13,    66,    35,     4,    69,
     207,    71,    72,     9,     4,    31,   365,    25,    14,     9,
      13,    17,    18,    31,    20,   222,    31,    17,    18,    89,
      20,    27,    25,    29,    31,    13,    32,    31,    31,    29,
      25,    25,    32,    13,   169,   394,    31,    25,    31,   246,
      35,    39,   249,    31,    31,    25,    25,   254,   255,   256,
     257,    31,   259,   188,    13,   262,   126,    31,    31,    28,
      31,   268,     7,   270,   271,   272,    25,   274,    66,    28,
     277,    69,   207,    71,    72,   282,   283,   284,     4,   286,
      31,   288,     9,    10,    11,    12,    13,   222,    14,    87,
       9,    10,    11,    12,    13,   302,   303,    13,    25,   169,
       4,    27,    31,    29,    31,   312,    25,     4,    35,    25,
      14,   246,    31,    31,   249,    31,    35,    14,   188,   254,
     255,   256,    31,    27,   259,    29,    64,   262,   126,    -1,
      27,     4,    29,   268,     4,   270,   271,   207,    -1,   274,
       4,    14,   277,    -1,    14,    -1,    -1,   282,   283,    -1,
      14,   286,   222,   288,    27,    -1,    29,    27,   365,    29,
      13,    -1,    -1,    27,    -1,    29,    -1,   302,   303,    -1,
       4,   169,    25,    -1,    -1,    28,   246,   312,    39,   249,
      14,    -1,    13,    -1,   254,   255,    -1,   394,    -1,   259,
     188,    -1,   262,    27,    25,    29,    -1,    28,   268,     9,
     270,    11,    12,    13,   274,    66,    -1,   277,    69,   207,
      71,    72,   282,    -1,    39,    25,   286,    13,   288,    13,
      -1,    31,    -1,    -1,   222,    35,    -1,    -1,    -1,    25,
     365,    25,   302,   303,    28,    31,     9,    10,    11,    12,
      13,    66,   312,     4,    69,    13,    71,    72,   246,    -1,
      -1,   249,    25,    14,    -1,    -1,   254,    25,    31,   394,
      -1,   259,    35,    31,   262,   126,    27,    35,    29,    -1,
     268,     9,    10,    11,    12,    13,   274,    -1,    -1,   277,
       9,    10,    11,    12,    13,    -1,    -1,    25,   286,    -1,
     288,    -1,    -1,    31,    -1,   365,    25,    35,    -1,    -1,
      -1,   126,    31,    -1,   302,   303,    35,    -1,   169,     9,
      10,    11,    12,    13,   312,    -1,     9,    10,    11,    12,
      13,    13,    13,    -1,   394,    25,    -1,   188,    -1,    13,
      -1,    31,    25,    25,    25,    35,    -1,    -1,    31,    31,
      31,    25,    35,    35,   169,    -1,   207,    31,     9,    10,
      11,    12,    13,     9,    10,    11,    12,    13,    -1,    13,
      -1,    -1,    25,   188,    25,    -1,    -1,   365,    31,    25,
      31,    25,    35,    -1,    35,    31,    -1,    31,    -1,    35,
      -1,    35,   207,    -1,    -1,   246,    -1,    -1,   249,     9,
      10,    11,    12,    13,    -1,    -1,   394,    -1,   259,    -1,
      -1,   262,    -1,    -1,    -1,    25,     9,    10,    11,    12,
      13,    31,    -1,   274,    -1,    35,   277,    13,    13,    -1,
      -1,   246,    25,    -1,   249,   286,    -1,   288,    31,    25,
      25,    -1,    35,    -1,   259,    31,    31,   262,    -1,    35,
      35,   302,   303,     9,    10,    11,    12,    13,    -1,   274,
      13,   312,   277,    -1,     9,    10,    11,    12,    13,    25,
      -1,   286,    25,   288,    -1,    31,    -1,    -1,    31,    35,
      25,    -1,    35,    -1,    -1,    -1,    31,   302,   303,     9,
      35,    11,    12,    13,    -1,    -1,     1,   312,    -1,     4,
       5,     6,     7,     8,     9,    25,    -1,    -1,    28,    14,
      15,    16,    17,    18,   365,    20,    21,    22,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
      -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    -1,   394,    -1,    14,    15,    16,    17,    18,
     365,    20,    21,    22,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,   394,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    33,    34,     1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,     1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,     1,    34,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,     9,    34,    11,
      12,    13,    11,    12,    13,    -1,    13,    11,    12,    13,
      -1,    -1,    -1,    25,    -1,    -1,    25,    -1,    25,    31,
      -1,    25,    31,    35,    31,    13,    35,    31,    35,    -1,
      -1,    35,     9,    10,    11,    12,    13,    25,     9,    10,
      11,    12,    13,    31,    11,    12,    13,    35,    25,    -1,
      -1,    28,    -1,    30,    25,    32,    -1,    -1,    25,    30,
      31,    32,     9,    10,    11,    12,    13,     9,    10,    11,
      12,    13,     9,    10,    11,    12,    13,    -1,    25,    -1,
      -1,    28,    -1,    25,    -1,    32,     0,     1,    25,    31,
      32,     5,     6,     7,     8,    32,     9,    10,    11,    12,
      13,     9,    10,    11,    12,    13,     9,    10,    11,    12,
      13,     9,    25,    11,    12,    13,    -1,    25,    31,    -1,
      -1,    -1,    25,    31,    -1,    -1,    -1,    25,    31,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    13,     9,    25,    11,    12,    13,    -1,
      25,    31,    -1,    -1,    -1,    25,    31,    -1,    -1,    -1,
      25,    31,     9,    10,    11,    12,    13,     9,    10,    11,
      12,    13,     9,    10,    11,    12,    13,    -1,    25,    11,
      12,    13,    -1,    25,    31,    -1,    -1,    -1,    25,    31,
      -1,    -1,    -1,    25,    31,     9,    10,    11,    12,    13,
       9,    10,    11,    12,    13,     9,    10,    11,    12,    13,
      -1,    25,    -1,    -1,    -1,    -1,    25,    31,     0,     1,
      -1,    25,    31,     5,     6,     7,     8,    31,     9,    10,
      11,    12,    13,     9,    10,    11,    12,    13,     9,    10,
      11,    12,    13,     9,    25,    11,    12,    13,    -1,    25,
      31,    -1,    -1,    -1,    25,    31,    -1,    -1,    -1,    25,
      31,    -1,    -1,    -1,     9,    31,    11,    12,    13,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13,    -1,
      25,    -1,    -1,    -1,    -1,    25,    31,    -1,    28,    -1,
      25,    -1,    -1,    28,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13,    -1,
      25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,    -1,
      25,    -1,    -1,    28,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13,    -1,
      25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,    -1,
      25,    -1,    -1,    28,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13,    -1,
      25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,    -1,
      25,    -1,    -1,    28,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13,    -1,
      25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,    -1,
      25,    -1,    -1,    28,     9,    10,    11,    12,    13,    -1,
      11,    12,    13,    -1,    11,    12,    13,    -1,    -1,    -1,
      25,    -1,    -1,    28,    25,    -1,    -1,    28,    25,    -1,
      -1,    28,     9,    10,    11,    12,    13,     9,    10,    11,
      12,    13,     9,    10,    11,    12,    13,    -1,    25,     0,
       1,    -1,    -1,    25,     5,     6,     7,     8,    25,     9,
      10,    11,    12,    13,     9,    10,    11,    12,    13,     9,
      10,    11,    12,    13,    -1,    25,     0,     1,    -1,    -1,
      25,     5,     6,     7,     8,    25,     9,    10,    11,    12,
      13,     9,    10,    11,    12,    13,     9,    10,    11,    12,
      13,    -1,    25,     0,     1,    -1,    -1,    25,     5,     6,
       7,     8,    25,     9,    10,    11,    12,    13,     9,    10,
      11,    12,    13,     9,    10,    11,    12,    13,    -1,    25,
       0,     1,    -1,    -1,    25,     5,     6,     7,     8,    25,
       9,    10,    11,    12,    13,     9,    10,    11,    12,    13,
       9,    10,    11,    12,    13,    -1,    25,     0,     1,    -1,
      -1,    25,     5,     6,     7,     8,    25,     0,     1,    -1,
      -1,    -1,     5,     6,     7,     8,     0,     1,    -1,    -1,
      -1,     5,     6,     7,     8,     0,     1,    -1,    -1,    -1,
       5,     6,     7,     8,     0,     1,    -1,    -1,    -1,     5,
       6,     7,     8,     1,    -1,    -1,    -1,     5,     6,     7,
       8
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,     6,     7,     8,    37,    38,    39,    40,
      41,    64,     0,    39,     4,    28,    32,    31,    42,    64,
       1,    34,    43,    31,     4,     4,     9,    14,    15,    16,
      17,    18,    20,    21,    23,    24,    26,    27,    29,    32,
      40,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    64,    65,    43,    35,    30,    32,     4,    62,    32,
      32,    32,    32,    32,     4,    28,    53,    32,    32,    27,
      62,    53,    33,    44,    28,    28,    25,    13,    25,    12,
      11,     9,    10,     4,    42,    52,    53,    31,    53,    63,
      54,    55,    56,     4,    19,    53,    53,     4,    52,    28,
       4,     4,    29,    54,    32,    31,     4,    54,    29,    57,
       4,    54,    58,    59,    60,    61,    35,    31,    31,    31,
      31,    31,    31,    28,    25,    31,    31,     4,    54,    63,
      28,    28,    28,    45,    53,     4,    54,    31,    31,    22,
      28,    31,    31,    45,    52,    45,    45,    31,    45,     1,
      34,     4,     9,    14,    17,    18,    20,    27,    29,    32,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    65,
       4,     9,    14,    17,    18,    20,    27,    29,    32,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    65,     4,
       9,    14,    17,    18,    20,    27,    29,    32,    57,    58,
      59,    60,    61,    62,    65,    14,    27,    14,    27,    29,
      28,    25,    13,    25,    27,     1,    15,    16,    21,    23,
      24,    26,    34,    40,    43,    46,    47,    48,    49,    50,
      51,    52,    53,    64,     4,    44,    32,     4,    62,    32,
      32,    27,    62,    53,    13,    12,    11,     9,    10,    32,
       4,    62,    32,    32,    27,    62,    53,    25,    13,    25,
      12,    11,     9,    10,    32,     4,    62,    32,    32,    27,
      62,    53,    12,    11,     9,    10,    32,    32,    32,    32,
      27,     4,    14,    27,    29,    54,    29,    57,     4,    54,
      32,    32,    32,    32,    32,    28,    53,    32,    44,    28,
      28,     4,    30,    33,    31,    63,    55,     4,    54,    32,
      31,    29,    57,    58,    59,    60,    61,    31,    63,    55,
       4,    54,    32,    31,     4,    14,    27,    29,    54,    29,
      57,     4,    54,    58,    59,    60,    61,    31,    63,    55,
       4,    54,    32,    31,    58,    59,    60,    61,    55,     4,
      54,    55,     4,    54,    32,    32,    32,    27,     4,    54,
       4,    19,    53,    53,    52,    28,     4,    33,    28,     4,
      52,    53,    31,    31,    31,    31,     4,    54,    31,    31,
      31,    31,     4,    54,    32,    32,    27,    31,    31,    31,
      31,     4,    54,    31,    31,    31,    31,    31,    31,     4,
      54,    55,     4,    54,    32,    31,    31,    31,    31,    31,
      31,    28,    25,    31,    31,    31,    31,    55,     4,    54,
      32,    31,    31,    31,    31,    31,    31,    31,     4,    54,
      28,    28,    28,    45,    53,     4,    54,    31,    31,    31,
       4,    54,    31,    31,    22,    28,    31,    31,    31,    31,
      45,    52,    45,    45,    31,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    40,    41,
      41,    42,    42,    43,    43,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    46,    47,
      48,    48,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     5,     5,     9,
       5,     7,     2,     3,     7,     7,     2,     3,     3,     1,
       1,     4,     4,     4,     5,     5,     3,     3,     3,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     4,     3,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 98 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2329 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 106 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2340 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 112 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2350 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 119 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2360 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 124 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2370 "syntax.tab.c"
    break;

  case 7: /* declaration: error  */
#line 129 "syntax.y"
          {}
#line 2376 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 132 "syntax.y"
              {
    Simbolo s = criarSimbolo((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2395 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 148 "syntax.y"
                                            {
    Simbolo s = criarSimbolo((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2417 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 165 "syntax.y"
                                  {
    Simbolo s = criarSimbolo((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo, 2);
    (yyvsp[-4].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2438 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 183 "syntax.y"
                         {
   Simbolo s = criarSimbolo((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-3].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyvsp[-3].nodo)->proximo = (yyvsp[0].nodo);
 }
#line 2458 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 198 "syntax.y"
           {
    Simbolo s = criarSimbolo((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
 }
#line 2477 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 214 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "brackets_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2487 "syntax.tab.c"
    break;

  case 14: /* brackets_stmt: error  */
#line 219 "syntax.y"
          {}
#line 2493 "syntax.tab.c"
    break;

  case 15: /* stmts: stmt stmts  */
#line 222 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2504 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt  */
#line 228 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2514 "syntax.tab.c"
    break;

  case 17: /* stmt: for_stmt  */
#line 235 "syntax.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2524 "syntax.tab.c"
    break;

  case 18: /* stmt: if_else_stmt  */
#line 240 "syntax.y"
                 {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2534 "syntax.tab.c"
    break;

  case 19: /* stmt: return_stmt  */
#line 245 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2544 "syntax.tab.c"
    break;

  case 20: /* stmt: io_stmt  */
#line 250 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2554 "syntax.tab.c"
    break;

  case 21: /* stmt: exp_stmt  */
#line 255 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2564 "syntax.tab.c"
    break;

  case 22: /* stmt: set_stmt  */
#line 260 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2574 "syntax.tab.c"
    break;

  case 23: /* stmt: var_declaration  */
#line 265 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2584 "syntax.tab.c"
    break;

  case 24: /* stmt: assignment ';'  */
#line 270 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2594 "syntax.tab.c"
    break;

  case 25: /* stmt: brackets_stmt  */
#line 275 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2604 "syntax.tab.c"
    break;

  case 26: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 282 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 2614 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 287 "syntax.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 1);
  }
#line 2624 "syntax.tab.c"
    break;

  case 28: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 292 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2634 "syntax.tab.c"
    break;

  case 29: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 299 "syntax.y"
                                                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2647 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 309 "syntax.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2658 "syntax.tab.c"
    break;

  case 31: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 315 "syntax.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2670 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN ';'  */
#line 324 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
  }
#line 2679 "syntax.tab.c"
    break;

  case 33: /* return_stmt: RETURN exp ';'  */
#line 328 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2689 "syntax.tab.c"
    break;

  case 34: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 335 "syntax.y"
                                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2701 "syntax.tab.c"
    break;

  case 35: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 342 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2712 "syntax.tab.c"
    break;

  case 36: /* exp_stmt: exp ';'  */
#line 350 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2722 "syntax.tab.c"
    break;

  case 37: /* assignment: ID '=' exp  */
#line 357 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2733 "syntax.tab.c"
    break;

  case 38: /* assignment: ID '=' assignment  */
#line 363 "syntax.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2744 "syntax.tab.c"
    break;

  case 39: /* exp: or_exp  */
#line 371 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2754 "syntax.tab.c"
    break;

  case 40: /* exp: set_exp  */
#line 376 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2764 "syntax.tab.c"
    break;

  case 41: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 383 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2774 "syntax.tab.c"
    break;

  case 42: /* set_exp: ISSET '(' ID ')'  */
#line 388 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2784 "syntax.tab.c"
    break;

  case 43: /* set_exp: ISSET '(' set_exp ')'  */
#line 393 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2794 "syntax.tab.c"
    break;

  case 44: /* set_exp: '!' ISSET '(' ID ')'  */
#line 398 "syntax.y"
                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2804 "syntax.tab.c"
    break;

  case 45: /* set_exp: '!' ISSET '(' set_exp ')'  */
#line 403 "syntax.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2814 "syntax.tab.c"
    break;

  case 46: /* set_in_exp: or_exp INFIX_OP ID  */
#line 410 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 2825 "syntax.tab.c"
    break;

  case 47: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 416 "syntax.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2836 "syntax.tab.c"
    break;

  case 48: /* set_in_exp: set_exp INFIX_OP set_exp  */
#line 422 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2847 "syntax.tab.c"
    break;

  case 49: /* set_in_exp: set_exp INFIX_OP ID  */
#line 428 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 2858 "syntax.tab.c"
    break;

  case 50: /* or_exp: or_exp OR and_exp  */
#line 436 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2869 "syntax.tab.c"
    break;

  case 51: /* or_exp: and_exp  */
#line 442 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2879 "syntax.tab.c"
    break;

  case 52: /* or_exp: set_in_exp  */
#line 447 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2889 "syntax.tab.c"
    break;

  case 53: /* and_exp: and_exp AND relational_exp  */
#line 454 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2900 "syntax.tab.c"
    break;

  case 54: /* and_exp: relational_exp  */
#line 460 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2910 "syntax.tab.c"
    break;

  case 55: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 467 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2921 "syntax.tab.c"
    break;

  case 56: /* relational_exp: sum_exp  */
#line 473 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2931 "syntax.tab.c"
    break;

  case 57: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 480 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2942 "syntax.tab.c"
    break;

  case 58: /* sum_exp: mul_exp  */
#line 486 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2952 "syntax.tab.c"
    break;

  case 59: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 493 "syntax.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2963 "syntax.tab.c"
    break;

  case 60: /* mul_exp: unary_exp  */
#line 499 "syntax.y"
              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2973 "syntax.tab.c"
    break;

  case 61: /* unary_exp: primal_exp  */
#line 506 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2983 "syntax.tab.c"
    break;

  case 62: /* unary_exp: '!' primal_exp  */
#line 511 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2993 "syntax.tab.c"
    break;

  case 63: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 516 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3003 "syntax.tab.c"
    break;

  case 64: /* unary_exp: ID '(' arg_list ')'  */
#line 521 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3014 "syntax.tab.c"
    break;

  case 65: /* unary_exp: ID '(' ')'  */
#line 527 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 3024 "syntax.tab.c"
    break;

  case 66: /* primal_exp: ID  */
#line 535 "syntax.y"
     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 3034 "syntax.tab.c"
    break;

  case 67: /* primal_exp: const  */
#line 540 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3044 "syntax.tab.c"
    break;

  case 68: /* primal_exp: '(' exp ')'  */
#line 545 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3054 "syntax.tab.c"
    break;

  case 69: /* arg_list: exp ',' arg_list  */
#line 552 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3065 "syntax.tab.c"
    break;

  case 70: /* arg_list: exp  */
#line 558 "syntax.y"
        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3075 "syntax.tab.c"
    break;

  case 71: /* type: INT_TYPE  */
#line 565 "syntax.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3087 "syntax.tab.c"
    break;

  case 72: /* type: FLOAT_TYPE  */
#line 572 "syntax.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3099 "syntax.tab.c"
    break;

  case 73: /* type: SET_TYPE  */
#line 579 "syntax.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3111 "syntax.tab.c"
    break;

  case 74: /* type: ELEM_TYPE  */
#line 586 "syntax.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3123 "syntax.tab.c"
    break;

  case 75: /* const: INTEGER  */
#line 595 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3133 "syntax.tab.c"
    break;

  case 76: /* const: FLOAT  */
#line 600 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3143 "syntax.tab.c"
    break;

  case 77: /* const: EMPTY  */
#line 605 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3153 "syntax.tab.c"
    break;


#line 3157 "syntax.tab.c"

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

#line 611 "syntax.y"


void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.linha, yylval.token.coluna, msg);
  erros++;
}

int main(int argc, char * argv[]) {
    ++argv, --argc;
    if(argc > 0) {
        yyin = fopen(argv[0], "r");
    }
    else {
        yyin = stdin;
    }
    
    yyparse();

    printTabela(indiceTabela);

    if (erros) {
      if(erros == 1) {
      printf("\n\n--> Paser finalizado com %d erro\n", erros);
      }
      else {
        printf("\n\n--> Paser finalizado com %d erros\n", erros);  
      }
      return 0;
    }

    printArvore(raiz, 0);
    freeArvore(raiz);

    fclose(yyin);
    yylex_destroy();
    return 0;
}

