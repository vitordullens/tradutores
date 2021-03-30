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

  char tipo[1000][100];

  int indiceTipo = 0;

  int indiceTabela = -1;

  int escopo = 0;

  NodoArvore* raiz;

  int error = 0;

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
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT_TYPE = 4,                   /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 5,                 /* FLOAT_TYPE  */
  YYSYMBOL_SET_TYPE = 6,                   /* SET_TYPE  */
  YYSYMBOL_ELEM_TYPE = 7,                  /* ELEM_TYPE  */
  YYSYMBOL_ARITMETIC_OP1 = 8,              /* ARITMETIC_OP1  */
  YYSYMBOL_ARITMETIC_OP2 = 9,              /* ARITMETIC_OP2  */
  YYSYMBOL_RELATIONAL_OP = 10,             /* RELATIONAL_OP  */
  YYSYMBOL_AND = 11,                       /* AND  */
  YYSYMBOL_OR = 12,                        /* OR  */
  YYSYMBOL_SET_OP1 = 13,                   /* SET_OP1  */
  YYSYMBOL_INPUT = 14,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 15,                    /* OUTPUT  */
  YYSYMBOL_STRING = 16,                    /* STRING  */
  YYSYMBOL_INTEGER = 17,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 18,                     /* FLOAT  */
  YYSYMBOL_EMPTY = 19,                     /* EMPTY  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_INFIX_OP = 24,                  /* INFIX_OP  */
  YYSYMBOL_FORALL = 25,                    /* FORALL  */
  YYSYMBOL_ISSET = 26,                     /* ISSET  */
  YYSYMBOL_27_ = 27,                       /* ';'  */
  YYSYMBOL_28_ = 28,                       /* ','  */
  YYSYMBOL_29_ = 29,                       /* '{'  */
  YYSYMBOL_30_ = 30,                       /* '}'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '='  */
  YYSYMBOL_34_ = 34,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_declaration_list = 37,          /* declaration_list  */
  YYSYMBOL_declaration = 38,               /* declaration  */
  YYSYMBOL_var_declaration = 39,           /* var_declaration  */
  YYSYMBOL_function_declaration = 40,      /* function_declaration  */
  YYSYMBOL_params_list = 41,               /* params_list  */
  YYSYMBOL_brackets_stmt = 42,             /* brackets_stmt  */
  YYSYMBOL_stmts = 43,                     /* stmts  */
  YYSYMBOL_stmt = 44,                      /* stmt  */
  YYSYMBOL_io_stmt = 45,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 46,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 47,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 48,               /* return_stmt  */
  YYSYMBOL_set_stmt = 49,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 50,                  /* exp_stmt  */
  YYSYMBOL_assignment = 51,                /* assignment  */
  YYSYMBOL_exp = 52,                       /* exp  */
  YYSYMBOL_set_exp = 53,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 54,                /* set_in_exp  */
  YYSYMBOL_or_exp = 55,                    /* or_exp  */
  YYSYMBOL_and_exp = 56,                   /* and_exp  */
  YYSYMBOL_relational_exp = 57,            /* relational_exp  */
  YYSYMBOL_sum_exp = 58,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 59,                   /* mul_exp  */
  YYSYMBOL_unary_exp = 60,                 /* unary_exp  */
  YYSYMBOL_primal_exp = 61,                /* primal_exp  */
  YYSYMBOL_arg_list = 62,                  /* arg_list  */
  YYSYMBOL_type = 63,                      /* type  */
  YYSYMBOL_const = 64                      /* const  */
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
#define YYLAST   2617

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  363

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
       2,     2,     2,    34,     2,     2,     2,     2,     2,     2,
      31,    32,     2,     2,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
       2,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   112,   112,   119,   124,   130,   134,   138,   141,   156,
     172,   189,   203,   218,   222,   225,   230,   236,   240,   244,
     248,   252,   256,   260,   264,   268,   274,   278,   282,   288,
     297,   302,   310,   313,   319,   325,   332,   338,   345,   349,
     355,   359,   363,   367,   371,   377,   382,   390,   395,   399,
     405,   410,   416,   421,   427,   432,   438,   443,   449,   453,
     457,   461,   466,   473,   477,   481,   487,   492,   498,   503,
     508,   513,   520,   524,   528
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT_TYPE",
  "FLOAT_TYPE", "SET_TYPE", "ELEM_TYPE", "ARITMETIC_OP1", "ARITMETIC_OP2",
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
     275,   276,   277,   278,   279,   280,   281,    59,    44,   123,
     125,    40,    41,    61,    33
};
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2045,  2453,    14,    17,    38,    43,    32,  2480,  2507,  2534,
    2561,    49,  -120,  2570,   170,  2578,   372,     6,   -21,    51,
    2586,  1743,  2594,     6,    57,   757,   214,    26,    41,    68,
    2231,  2251,  2256,    73,    79,    11,    97,   108,   155,   511,
     975,  1007,    50,  1039,  1071,  1103,  1135,  1167,  1199,  1231,
      61,   114,   119,    -2,   446,   381,  2403,  2381,  2261,  2281,
    2286,   153,  2291,  2602,   869,    99,   531,  2311,  2316,   103,
     154,    45,   155,   161,   562,  1263,   138,   173,    10,   150,
     164,  2321,  2610,   168,  1295,  1327,   332,    13,   332,   332,
     332,   332,   181,   182,  2341,   188,   187,   197,   312,    19,
      -6,   203,   204,   210,   225,   231,   238,  1359,   255,   253,
     262,   272,  2346,    47,   385,   491,   653,  2407,  2399,  2351,
    2371,  1799,  2376,   278,   285,   286,   314,  1775,   531,    71,
     315,   317,   289,   307,   327,  1391,  1423,  1455,   864,  1487,
     356,   329,   349,   362,   383,  1743,   422,  1743,  1743,  1519,
     394,  1551,  1583,  1743,  1615,  1647,  1743,  1836,   528,   402,
     765,  2016,  2021,   405,   155,   564,   407,    58,   215,   112,
     500,   420,  2046,  2051,  2056,  2081,  1811,   631,   418,  1841,
    1846,  1871,   424,   155,   613,   218,   123,   147,   282,  2201,
     717,  1876,  1881,  1906,  1911,  2196,   312,  2427,  2432,  2437,
     155,    54,   617,  1851,  2454,  2459,  2464,  2481,   214,   426,
     432,   438,  1679,  2486,  2491,   103,   106,   434,   911,  1743,
     435,   437,   135,  2086,  2091,   103,   157,   440,  2116,   443,
     443,   443,   443,   443,   354,  1916,  1941,   103,   177,   457,
     444,  1946,   463,   189,   463,   463,   463,   463,   828,  2508,
     461,   103,   103,   103,   103,   103,   196,   473,    84,   324,
     482,   485,   495,   358,   265,   487,   155,  1711,  2121,   490,
     573,   503,   504,  2126,   528,   544,  2225,  2191,  2151,  2156,
    1951,   506,   614,   508,   509,  1976,   283,   631,   662,   580,
     520,   522,   538,   669,  2220,  2161,  1981,  1986,  2513,   534,
    2518,  1817,  1886,  2535,  2540,   639,   546,   547,   294,   103,
     298,   556,   570,   575,   943,   591,  2186,   615,   623,   629,
    2011,   221,   224,   270,   636,   638,   103,   334,   557,  2545,
     734,   839,   972,   643,   650,   700,   655,   668,   361,   671,
     675,   290,   326,   816,   678,   681,   416,  1004,  1036,   832,
     876,   879,   683,   685,   710,   724,   779,   689,   698,  1779,
    1802,   782,   806
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   589,     8,  -120,   555,   -14,   -42,   300,
    -120,  -120,  -120,  -120,  -120,  -120,   -69,    21,   -38,   587,
     595,   571,   489,   454,   369,   254,    29,  -119,     5,   169
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    40,    10,    18,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    96,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     166,    83,   134,    22,   106,    11,   215,    20,     9,    63,
     -49,    23,    11,   109,    74,     9,   115,   -68,   216,    26,
     -69,    19,   -49,   159,    27,   -49,   209,   185,    30,    31,
      32,   -49,    12,   166,   166,    21,   163,    37,    75,   210,
     111,   -70,    38,   -49,   110,    39,   -71,   211,   157,   116,
     132,   123,    14,   158,    24,    68,    76,    69,   159,    79,
     159,   102,   160,   161,   162,   251,   -48,   174,    81,    19,
     -49,   163,    70,   163,   141,   133,   164,   150,   -48,   165,
      82,   110,   -49,   185,   159,    64,    95,    97,    84,   -12,
     -49,   142,   103,   104,   193,   251,   -47,   163,   206,    71,
     174,   174,   176,   269,    72,   110,   195,   177,   -47,   259,
      73,   196,   178,   138,   221,   281,   179,   180,   181,   260,
     197,   198,   199,   230,   -48,   182,   166,   214,    77,   299,
     183,    94,   261,   184,   200,   -49,   -48,    98,   176,    78,
     262,    85,    95,   177,   -48,   166,   -39,   -49,   178,   140,
     193,   -49,   179,   180,   181,   -49,    92,   101,   157,   242,
     271,   182,   166,   158,   105,   107,   183,   268,   159,   184,
     159,   243,   160,   161,   162,   -38,   108,   265,   263,   -38,
     283,   163,   112,   163,   185,   227,   164,   224,   272,   165,
     159,   110,   289,   174,   228,   113,   185,    15,   -15,   306,
     284,    16,   290,   163,   239,   293,   236,   175,   212,   159,
     185,   110,   174,   241,   -11,   291,   121,    67,   307,   122,
     -67,   250,   163,   292,   -37,   249,   313,   229,   166,   174,
     110,    30,    31,    32,   194,   124,   125,    81,   207,   216,
     175,   175,   126,    95,   206,    38,   -39,   -38,   325,   -40,
     -39,   193,   -41,   -40,   206,    95,   -41,   127,   174,   174,
     174,   174,   174,   193,    66,   128,   206,   207,   312,    95,
     334,   193,   337,   193,   193,   193,   193,   193,   159,   129,
     206,   206,   206,   206,   206,   130,   324,   315,   217,   345,
     194,   163,   173,   244,   -48,   174,   159,   333,   -42,   110,
     353,   336,   -42,   228,   131,   -40,   -48,   159,   358,   163,
     -48,   159,   135,   136,   -48,   213,   241,   110,   -43,   192,
     163,   143,   -43,   205,   163,   173,   173,   175,   110,   197,
     198,   199,   110,   175,   175,    74,   -45,   344,   206,   144,
      26,   137,   -41,   200,   -42,   120,   194,   159,   -45,    30,
      31,    32,   175,   194,   -44,   206,   -45,   176,   -44,   -66,
     163,   147,   177,    38,   352,   207,   208,   178,   110,   175,
     -46,   179,   180,   181,   159,   192,     2,     3,     4,     5,
     182,   148,   -46,   146,   207,   183,   280,   163,   184,   -43,
     -46,   194,    88,   -48,   207,   110,    88,   -47,   175,   175,
     175,   175,   175,   194,    17,   -48,   207,   172,   -48,   -47,
     -44,   194,   -47,   194,   194,   194,   194,   194,   173,   357,
     207,   207,   207,   207,   207,   220,   153,   139,   232,   159,
     -53,   -53,   -53,   225,   191,   175,   226,   173,   204,   -39,
     172,   172,   163,   175,   -53,   149,   157,   151,   152,   237,
     110,   158,   -53,   154,   173,   238,   194,   255,    86,   119,
     160,   161,   162,   256,   257,   264,   176,   267,   266,   205,
      87,   177,   273,   -38,   164,   286,   192,   274,   207,   205,
     179,   180,   181,   173,   173,   173,   173,   279,   192,   285,
     191,   205,   171,   300,   183,   207,   192,   287,   192,   192,
     192,   297,   192,   -45,   308,   205,   205,   205,   304,   205,
     231,   -51,   -51,   309,    67,   -45,   310,   314,   -45,   190,
     173,   311,   316,   203,   -51,   171,   171,   170,    30,    31,
      32,   223,   -51,   172,    74,   318,   319,    80,   320,    26,
     322,   323,    38,   118,    27,   160,   161,   162,    30,    31,
      32,   326,   172,   327,   189,   230,   -47,    37,   202,   164,
     170,   170,    38,   205,   328,    39,   329,   223,   -47,   172,
     -63,   -63,   -63,   -63,   -63,   190,   -47,   117,   331,   332,
     205,   160,   161,   162,   204,   -49,   -63,   338,   346,   -63,
     217,   191,   -45,    65,   204,   164,    13,   -49,   172,   172,
     172,   278,   339,   191,   -45,   317,   204,   340,   -45,   169,
     189,   191,   -45,   191,   191,   296,   235,   191,   171,    93,
     204,   204,   303,   -37,   204,   167,   -49,   252,   -51,   -51,
     179,   180,   181,   168,   235,   172,   188,   171,   -49,   240,
     201,   -51,   169,   169,   183,     0,   321,   -40,   179,   180,
     181,   -49,   186,   170,   171,   -41,    99,   114,   167,   167,
     187,   -42,   183,   -49,   100,   -46,   168,   168,   341,   203,
     342,   330,   170,   244,   -47,   347,   190,   -46,   204,   203,
     -46,   -46,   348,   171,   171,   277,   -47,   350,   190,   170,
     -47,   203,   188,   -46,   -47,   204,   190,   -46,   190,   295,
     351,   -46,   190,   -43,   202,   203,   302,   -44,   186,   203,
     355,   189,   -49,   356,   202,   359,   187,   360,   170,   276,
     171,   361,   -40,   189,   -49,   246,   202,   -53,   -53,   -53,
     362,   189,   349,   294,   -40,   169,   -41,   189,   -40,     0,
     301,   -53,   -40,     0,   202,   -53,   -40,     0,   -41,   -53,
       0,   167,   -41,     0,   169,   170,   -41,     0,   -40,   168,
       0,   -40,     0,   203,     0,   -63,   -63,   -63,   -63,   -63,
     167,   169,     0,   -72,   -72,   -72,   -72,   -72,   168,     0,
     203,   -63,     0,     0,   -63,     0,   258,   167,    65,   -72,
      66,   -42,     0,   188,   -43,   168,   201,   -72,   202,     0,
     275,     0,     0,   -42,     0,   188,   -43,   -42,   201,   186,
     -43,   -42,   270,   288,   -43,   202,     0,   187,   -44,   188,
     100,   186,     0,     0,   282,     0,   201,     0,   -49,   187,
     -44,   176,   100,     0,   -44,   186,   177,   169,   -44,     0,
     -49,   178,   305,   187,   -40,   179,   180,   181,   354,     0,
     100,   -41,     0,   167,   182,     0,   -40,     0,     0,   183,
     298,   168,   184,   -41,   -40,   -25,   -41,   -25,   -25,   -25,
     -25,   -25,   -25,     2,     3,     4,     5,   -25,   -25,   -25,
     201,   -25,   -25,   -25,   -25,   145,   -25,   -25,   -41,   -25,
     -25,   -42,     0,   -25,   -25,   -25,   335,   201,   -25,     0,
     -41,     0,     0,   -42,   100,     0,     0,     0,   -41,     0,
       0,   -42,   -14,   343,   -14,   -14,   -14,   -14,   -14,   -14,
       0,   100,     0,     0,   -14,   -14,   -14,     0,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,     0,     0,
     -14,   -14,   -14,     0,   -13,   -14,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,     0,     0,   -13,   -13,   -13,     0,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,
       0,     0,   -13,   -13,   -13,     0,   -23,   -13,   -23,   -23,
     -23,   -23,   -23,   -23,   -42,     0,     0,     0,   -23,   -23,
     -23,     0,   -23,   -23,   -23,   -23,   -42,   -23,   -23,   -42,
     -23,   -23,     0,     0,   -23,   -23,   -23,     0,   -25,   -23,
     -25,   -25,   -25,   -25,   -25,   -25,   -43,     0,     0,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -43,   -25,
     -25,   -43,   -25,   -25,     0,     0,   -25,   -25,   -25,     0,
     155,   -25,    25,     2,     3,     4,     5,    26,   -44,     0,
       0,     0,    27,    28,    29,     0,    30,    31,    32,    33,
     -44,    34,    35,   -44,    36,    37,     0,     0,   156,   -16,
      38,     0,   -20,    39,   -20,   -20,   -20,   -20,   -20,   -20,
       0,     0,     0,     0,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,     0,   -20,   -20,     0,   -20,   -20,     0,     0,
     -20,   -20,   -20,     0,   -17,   -20,   -17,   -17,   -17,   -17,
     -17,   -17,     0,     0,     0,     0,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,   -17,
       0,     0,   -17,   -17,   -17,     0,   -18,   -17,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,     0,     0,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,     0,   -18,   -18,     0,
     -18,   -18,     0,     0,   -18,   -18,   -18,     0,   -19,   -18,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,   -19,
     -19,     0,   -19,   -19,     0,     0,   -19,   -19,   -19,     0,
     -22,   -19,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
       0,   -22,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,
     -22,     0,   -21,   -22,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,     0,   -21,   -21,     0,   -21,   -21,     0,     0,
     -21,   -21,   -21,     0,   -32,   -21,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,
       0,     0,   -32,   -32,   -32,     0,   -24,   -32,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,     0,   -24,   -24,     0,
     -24,   -24,     0,     0,   -24,   -24,   -24,     0,   -36,   -24,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,     0,   -36,
     -36,     0,   -36,   -36,     0,     0,   -36,   -36,   -36,     0,
     -33,   -36,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,
     -33,     0,   -26,   -33,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,     0,
     -26,   -26,   -26,     0,   -27,   -26,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,
       0,     0,   -27,   -27,   -27,     0,   -28,   -27,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,   -28,     0,   -30,   -28,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,   -30,
     -30,     0,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,
     -31,   -30,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
       0,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,
     -31,     0,   -35,   -31,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,     0,
     -35,   -35,   -35,     0,   -34,   -35,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,
       0,     0,   -34,   -34,   -34,     0,   -29,   -34,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,     0,
     -29,   -29,     0,     0,   -29,   -29,   -29,     0,   -14,   -29,
     -14,   -14,   -14,   -14,   -14,   -14,     0,     0,     0,     0,
     -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,     0,   -14,
     -14,     0,   -14,   -14,     0,     0,   -14,   -14,   -14,     0,
      -8,   -14,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,
       0,    -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,
      -8,     0,   -13,    -8,   -13,   -13,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -13,     0,   -13,   -13,
     -13,   -13,     0,   -13,   -13,     0,   -13,   -13,     0,     0,
     -13,   -13,   -13,     0,   155,   -13,    25,     2,     3,     4,
       5,    26,     0,     0,     0,     0,    27,    28,    29,     0,
      30,    31,    32,    33,     0,    34,    35,     0,    36,    37,
       0,     0,   156,     0,    38,     0,   218,    39,    25,     2,
       3,     4,     5,    26,     0,     0,     0,     0,    27,    28,
      29,   -43,    30,    31,    32,    33,     0,    34,    35,     0,
      36,    37,   176,   -43,   219,     0,    38,   177,     0,    39,
       0,   -43,   178,     0,   -44,     0,   179,   180,   181,   -63,
     -63,   -63,   -63,   -63,     0,   182,   -44,   252,   -50,   -50,
     183,     0,     0,   184,   -44,   -63,     0,     0,     0,   -63,
       0,   -50,   234,   -63,   -63,   -63,   -63,   -63,   -63,   -72,
     -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,   253,
     -63,   -53,   -53,   -53,     0,   -72,     0,   222,   -63,   -72,
     -73,     0,     0,   -72,   -73,   -53,     0,     0,   -73,   -74,
     -74,   -74,   -74,   -74,   -55,   247,   -55,   -55,   -55,   -57,
     -57,   -57,   -57,   -57,   253,   -74,   -52,   -52,   -52,   -74,
     -55,     0,     0,   -74,   -55,   -57,     0,     0,   -55,   -57,
     -52,     0,     0,   -57,   -58,   -58,   -58,   -58,   -58,   -64,
     -64,   -64,   -64,   -64,   -63,   -63,   -63,   -63,   -63,     0,
     -58,     0,     0,     0,   -58,   -64,     0,     0,   -58,   -64,
     -63,     0,     0,   -64,   -63,     0,     0,     0,   -63,   -60,
     -60,   -60,   -60,   -60,   -59,   -59,   -59,   -59,   -59,   -62,
     -62,   -62,   -62,   -62,     0,   -60,     0,     0,     0,   -60,
     -59,     0,     0,   -60,   -59,   -62,     0,     0,   -59,   -62,
       0,     0,     0,   -62,   -65,   -65,   -65,   -65,   -65,   -54,
     247,   -54,   -54,   -54,   -56,   -56,   -56,   -56,   -56,     0,
     -65,     0,     0,     0,   -65,   -54,     0,     0,   -65,   -54,
     -56,     0,     0,   -54,   -56,     0,     0,     0,   -56,   -61,
     -61,   -61,   -61,   -61,   -73,   -73,   -73,   -73,   -73,   -74,
     -74,   -74,   -74,   -74,     0,   -61,     0,     0,     0,   -61,
     -73,     0,     0,   -61,     0,   -74,     1,     0,   -73,     2,
       3,     4,     5,   -74,   -55,   233,   -55,   -55,   -55,   -57,
     -57,   -57,   -57,   -57,   -58,   -58,   -58,   -58,   -58,     0,
     -55,     0,     0,     0,     0,   -57,     0,     0,   -55,     0,
     -58,     0,     0,   -57,     0,     0,     0,     0,   -58,   -64,
     -64,   -64,   -64,   -64,   -63,   -63,   -63,   -63,   -63,   -60,
     -60,   -60,   -60,   -60,     0,   -64,     0,     0,     0,     0,
     -63,     0,     0,   -64,     0,   -60,     0,     0,   -63,     0,
       0,     0,     0,   -60,   -59,   -59,   -59,   -59,   -59,   -62,
     -62,   -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,     0,
     -59,     0,     0,     0,     0,   -62,     0,     0,   -59,     0,
     -65,     0,     0,   -62,     0,     0,     0,     0,   -65,   -54,
     233,   -54,   -54,   -54,   -56,   -56,   -56,   -56,   -56,   246,
       0,   -52,   -52,   -52,     0,   -54,     0,     0,     0,     0,
     -56,     0,     0,   -54,     0,   -52,     0,     0,   -56,   -52,
       0,     0,     0,   -52,   -61,   -61,   -61,   -61,   -61,   232,
       0,   -52,   -52,   -52,   -63,   -63,   -63,   -63,   -63,     0,
     -61,   245,   -51,   -51,     0,   -52,     0,     0,   -61,     0,
     -63,     0,     0,   -52,     0,   -51,     0,   248,     0,   -51,
     245,   -50,   -50,   -51,     0,   231,   -50,   -50,     0,   -72,
     -72,   -72,   -72,   -72,   -50,     0,     0,     0,   -50,   -50,
       0,     0,   -50,     0,     0,   -72,     0,   -50,   -72,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -55,
      91,   -55,   -55,   -55,     0,   -73,     0,     0,   -73,     0,
     -74,     0,     0,   -74,     0,   -55,     0,     0,   -55,   -57,
     -57,   -57,   -57,   -57,   -58,   -58,   -58,   -58,   -58,   -64,
     -64,   -64,   -64,   -64,     0,   -57,     0,     0,   -57,     0,
     -58,     0,     0,   -58,     0,   -64,     0,     0,   -64,   -63,
     -63,   -63,   -63,   -63,   -60,   -60,   -60,   -60,   -60,   -59,
     -59,   -59,   -59,   -59,     0,   -63,     0,     0,   -63,     0,
     -60,     0,     0,   -60,     0,   -59,     0,     0,   -59,   -62,
     -62,   -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,   -54,
      91,   -54,   -54,   -54,     0,   -62,     0,     0,   -62,     0,
     -65,     0,     0,   -65,     0,   -54,     0,     0,   -54,   -56,
     -56,   -56,   -56,   -56,   -61,   -61,   -61,   -61,   -61,    90,
       0,   -53,   -53,   -53,     0,   -56,     0,     0,   -56,     0,
     -61,     0,     0,   -61,     0,   -53,     0,    90,   -53,   -52,
     -52,   -52,     0,    89,   -51,   -51,     0,    89,   -50,   -50,
       0,     0,     0,   -52,     0,     0,   -52,   -51,     0,     0,
     -51,   -50,     0,     0,   -50,   -72,   -72,   -72,   -72,   -72,
     -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,
       0,   -72,     0,    -7,    -7,     0,   -73,    -7,    -7,    -7,
      -7,   -74,   -55,   254,   -55,   -55,   -55,   -57,   -57,   -57,
     -57,   -57,   -58,   -58,   -58,   -58,   -58,     0,   -55,     0,
      -2,     1,     0,   -57,     2,     3,     4,     5,   -58,   -64,
     -64,   -64,   -64,   -64,   -63,   -63,   -63,   -63,   -63,   -59,
     -59,   -59,   -59,   -59,     0,   -64,     0,    -4,    -4,     0,
     -63,    -4,    -4,    -4,    -4,   -59,   -60,   -60,   -60,   -60,
     -60,   -62,   -62,   -62,   -62,   -62,   -65,   -65,   -65,   -65,
     -65,     0,   -60,     0,    -6,    -6,     0,   -62,    -6,    -6,
      -6,    -6,   -65,   -54,   254,   -54,   -54,   -54,   -56,   -56,
     -56,   -56,   -56,   -61,   -61,   -61,   -61,   -61,     0,   -54,
       0,    -5,    -5,     0,   -56,    -5,    -5,    -5,    -5,   -61,
      -3,    -3,     0,     0,    -3,    -3,    -3,    -3,    -8,    -8,
       0,     0,    -8,    -8,    -8,    -8,   -14,   -14,     0,     0,
     -14,   -14,   -14,   -14,   -10,   -10,     0,     0,   -10,   -10,
     -10,   -10,    -9,    -9,     0,     0,    -9,    -9,    -9,    -9,
     -13,   -13,     0,     0,   -13,   -13,   -13,   -13
};

static const yytype_int16 yycheck[] =
{
      38,    43,   121,    17,    73,     0,    12,     1,     0,    23,
      12,    32,     7,     3,     3,     7,     3,     3,    24,     8,
       3,    16,    24,    13,    13,    27,    13,    65,    17,    18,
      19,    12,     0,    71,    72,    29,    26,    26,    27,    26,
      78,     3,    31,    24,    34,    34,     3,    34,     3,    87,
       3,    32,     3,     8,     3,    26,    35,    31,    13,    38,
      13,    16,    17,    18,    19,    11,    12,    38,    39,    64,
      12,    26,    31,    26,     3,   113,    31,   146,    24,    34,
      30,    34,    24,   121,    13,    28,    65,    66,    27,    32,
      32,   129,    71,    72,    65,    11,    12,    26,    69,    31,
      71,    72,     3,   222,    31,    34,     3,     8,    24,     3,
      31,     8,    13,   127,   156,   234,    17,    18,    19,    13,
      17,    18,    19,    11,    12,    26,   164,    98,    31,   248,
      31,    32,    26,    34,    31,    12,    24,    34,     3,    31,
      34,    27,   121,     8,    32,   183,    27,    24,    13,   128,
     121,    28,    17,    18,    19,    32,     3,     3,     3,    12,
       3,    26,   200,     8,     3,    27,    31,    32,    13,    34,
      13,    24,    17,    18,    19,    28,     3,   219,   216,    32,
       3,    26,    32,    26,   222,   164,    31,   158,   226,    34,
      13,    34,     3,   164,   165,    31,   234,    27,    30,     3,
     238,    31,    13,    26,   183,   243,   177,    38,    27,    13,
     248,    34,   183,   184,    32,    26,    28,     3,   256,    32,
      32,   200,    26,    34,    27,   196,   264,    12,   266,   200,
      34,    17,    18,    19,    65,    32,    32,   208,    69,    24,
      71,    72,    32,   222,   215,    31,    28,    32,   286,    28,
      32,   222,    28,    32,   225,   234,    32,    32,   229,   230,
     231,   232,   233,   234,    33,    27,   237,    98,     3,   248,
     308,   242,   310,   244,   245,   246,   247,   248,    13,    24,
     251,   252,   253,   254,   255,    32,     3,   266,    26,   327,
     121,    26,    38,    11,    12,   266,    13,     3,    28,    34,
     338,     3,    32,   274,    32,    27,    24,    13,   346,    26,
      28,    13,    27,    27,    32,     3,   287,    34,    28,    65,
      26,    32,    32,    69,    26,    71,    72,   158,    34,    17,
      18,    19,    34,   164,   165,     3,    12,     3,   309,    32,
       8,    27,    27,    31,    27,    91,   177,    13,    24,    17,
      18,    19,   183,   184,    28,   326,    32,     3,    32,    32,
      26,    32,     8,    31,     3,   196,    34,    13,    34,   200,
      12,    17,    18,    19,    13,   121,     4,     5,     6,     7,
      26,    32,    24,    27,   215,    31,    32,    26,    34,    27,
      32,   222,    11,    12,   225,    34,    11,    12,   229,   230,
     231,   232,   233,   234,    32,    24,   237,    38,    27,    24,
      27,   242,    27,   244,   245,   246,   247,   248,   164,     3,
     251,   252,   253,   254,   255,     3,    32,   127,     8,    13,
      10,    11,    12,    31,    65,   266,    31,   183,    69,    32,
      71,    72,    26,   274,    24,   145,     3,   147,   148,    31,
      34,     8,    32,   153,   200,    31,   287,    31,    12,    90,
      17,    18,    19,    31,    26,    31,     3,    30,    33,   215,
      24,     8,    32,    27,    31,    31,   222,    34,   309,   225,
      17,    18,    19,   229,   230,   231,   232,   233,   234,    32,
     121,   237,    38,    32,    31,   326,   242,    34,   244,   245,
     246,   247,   248,    12,    31,   251,   252,   253,   254,   255,
      10,    11,    12,    31,     3,    24,    31,    30,    27,    65,
     266,    26,    32,    69,    24,    71,    72,    38,    17,    18,
      19,     3,    32,   164,     3,    32,    32,    26,    32,     8,
      32,    32,    31,    89,    13,    17,    18,    19,    17,    18,
      19,    31,   183,    31,    65,    11,    12,    26,    69,    31,
      71,    72,    31,   309,    26,    34,    32,     3,    24,   200,
       8,     9,    10,    11,    12,   121,    32,    88,    32,    32,
     326,    17,    18,    19,   215,    12,    24,    31,    31,    27,
      26,   222,    12,    31,   225,    31,     7,    24,   229,   230,
     231,   232,    32,   234,    24,    32,   237,    32,    28,    38,
     121,   242,    32,   244,   245,   246,     3,   248,   164,    64,
     251,   252,   253,    32,   255,    38,    12,    10,    11,    12,
      17,    18,    19,    38,     3,   266,    65,   183,    24,    26,
      69,    24,    71,    72,    31,    -1,    32,    32,    17,    18,
      19,    12,    65,   164,   200,    32,    69,    86,    71,    72,
      65,    32,    31,    24,    69,    12,    71,    72,    32,   215,
      32,    32,   183,    11,    12,    32,   222,    24,   309,   225,
      27,    12,    32,   229,   230,   231,    24,    32,   234,   200,
      28,   237,   121,    24,    32,   326,   242,    28,   244,   245,
      32,    32,   248,    32,   215,   251,   252,    32,   121,   255,
      32,   222,    12,    32,   225,    32,   121,    32,   229,   230,
     266,    32,    12,   234,    24,     8,   237,    10,    11,    12,
      32,   242,    32,   244,    24,   164,    12,   248,    28,    -1,
     251,    24,    32,    -1,   255,    28,    12,    -1,    24,    32,
      -1,   164,    28,    -1,   183,   266,    32,    -1,    24,   164,
      -1,    27,    -1,   309,    -1,     8,     9,    10,    11,    12,
     183,   200,    -1,     8,     9,    10,    11,    12,   183,    -1,
     326,    24,    -1,    -1,    27,    -1,   215,   200,    31,    24,
      33,    12,    -1,   222,    12,   200,   225,    32,   309,    -1,
     229,    -1,    -1,    24,    -1,   234,    24,    28,   237,   222,
      28,    32,   225,   242,    32,   326,    -1,   222,    12,   248,
     225,   234,    -1,    -1,   237,    -1,   255,    -1,    12,   234,
      24,     3,   237,    -1,    28,   248,     8,   266,    32,    -1,
      24,    13,   255,   248,    12,    17,    18,    19,    32,    -1,
     255,    12,    -1,   266,    26,    -1,    24,    -1,    -1,    31,
      32,   266,    34,    24,    32,     1,    27,     3,     4,     5,
       6,     7,     8,     4,     5,     6,     7,    13,    14,    15,
     309,    17,    18,    19,    20,    21,    22,    23,    12,    25,
      26,    12,    -1,    29,    30,    31,   309,   326,    34,    -1,
      24,    -1,    -1,    24,   309,    -1,    -1,    -1,    32,    -1,
      -1,    32,     1,   326,     3,     4,     5,     6,     7,     8,
      -1,   326,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    12,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    24,    22,    23,    27,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    12,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    24,    22,
      23,    27,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    12,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      24,    22,    23,    27,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    12,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,     3,    24,    29,    -1,    31,     8,    -1,    34,
      -1,    32,    13,    -1,    12,    -1,    17,    18,    19,     8,
       9,    10,    11,    12,    -1,    26,    24,    10,    11,    12,
      31,    -1,    -1,    34,    32,    24,    -1,    -1,    -1,    28,
      -1,    24,    31,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
      24,    10,    11,    12,    -1,    24,    -1,    31,    32,    28,
      24,    -1,    -1,    32,    28,    24,    -1,    -1,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,    24,    10,    11,    12,    28,
      24,    -1,    -1,    32,    28,    24,    -1,    -1,    32,    28,
      24,    -1,    -1,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      24,    -1,    -1,    -1,    28,    24,    -1,    -1,    32,    28,
      24,    -1,    -1,    32,    28,    -1,    -1,    -1,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    -1,    28,
      24,    -1,    -1,    32,    28,    24,    -1,    -1,    32,    28,
      -1,    -1,    -1,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      24,    -1,    -1,    -1,    28,    24,    -1,    -1,    32,    28,
      24,    -1,    -1,    32,    28,    -1,    -1,    -1,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    -1,    28,
      24,    -1,    -1,    32,    -1,    24,     1,    -1,    32,     4,
       5,     6,     7,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      24,    -1,    -1,    -1,    -1,    24,    -1,    -1,    32,    -1,
      24,    -1,    -1,    32,    -1,    -1,    -1,    -1,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    32,    -1,    24,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      24,    -1,    -1,    -1,    -1,    24,    -1,    -1,    32,    -1,
      24,    -1,    -1,    32,    -1,    -1,    -1,    -1,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
      -1,    10,    11,    12,    -1,    24,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    32,    -1,    24,    -1,    -1,    32,    28,
      -1,    -1,    -1,    32,     8,     9,    10,    11,    12,     8,
      -1,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      24,    10,    11,    12,    -1,    24,    -1,    -1,    32,    -1,
      24,    -1,    -1,    32,    -1,    24,    -1,    31,    -1,    28,
      10,    11,    12,    32,    -1,    10,    11,    12,    -1,     8,
       9,    10,    11,    12,    24,    -1,    -1,    -1,    28,    24,
      -1,    -1,    32,    -1,    -1,    24,    -1,    32,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
      -1,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,     8,    27,    10,
      11,    12,    -1,    10,    11,    12,    -1,    10,    11,    12,
      -1,    -1,    -1,    24,    -1,    -1,    27,    24,    -1,    -1,
      27,    24,    -1,    -1,    27,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    24,    -1,     0,     1,    -1,    24,     4,     5,     6,
       7,    24,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    24,    -1,
       0,     1,    -1,    24,     4,     5,     6,     7,    24,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,     0,     1,    -1,
      24,     4,     5,     6,     7,    24,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    24,    -1,     0,     1,    -1,    24,     4,     5,
       6,     7,    24,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    24,
      -1,     0,     1,    -1,    24,     4,     5,     6,     7,    24,
       0,     1,    -1,    -1,     4,     5,     6,     7,     0,     1,
      -1,    -1,     4,     5,     6,     7,     0,     1,    -1,    -1,
       4,     5,     6,     7,     0,     1,    -1,    -1,     4,     5,
       6,     7,     0,     1,    -1,    -1,     4,     5,     6,     7,
       0,     1,    -1,    -1,     4,     5,     6,     7
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    36,    37,    38,    39,
      40,    63,     0,    38,     3,    27,    31,    32,    41,    63,
       1,    29,    42,    32,     3,     3,     8,    13,    14,    15,
      17,    18,    19,    20,    22,    23,    25,    26,    31,    34,
      39,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    63,    64,    42,    28,    31,    33,     3,    61,    31,
      31,    31,    31,    31,     3,    27,    52,    31,    31,    52,
      26,    61,    30,    43,    27,    27,    12,    24,    11,    10,
       8,     9,     3,    41,    32,    52,    62,    52,    34,    54,
      55,     3,    16,    52,    52,     3,    51,    27,     3,     3,
      34,    53,    32,    31,    56,     3,    53,    57,    58,    59,
      60,    28,    32,    32,    32,    32,    32,    32,    27,    24,
      32,    32,     3,    53,    62,    27,    27,    27,    42,    44,
      52,     3,    53,    32,    32,    21,    27,    32,    32,    44,
      51,    44,    44,    32,    44,     1,    29,     3,     8,    13,
      17,    18,    19,    26,    31,    34,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    64,     3,     8,    13,    17,
      18,    19,    26,    31,    34,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    64,     3,     8,    17,    18,    19,
      31,    56,    57,    58,    59,    60,    61,    64,    34,    13,
      26,    34,    27,     3,    61,    12,    24,    26,     1,    29,
       3,    43,    31,     3,    61,    31,    31,    52,    61,    12,
      11,    10,     8,     9,    31,     3,    61,    31,    31,    52,
      26,    61,    12,    24,    11,    10,     8,     9,    31,    61,
      52,    11,    10,     8,     9,    31,    31,    26,    56,     3,
      13,    26,    34,    53,    31,    43,    33,    30,    32,    62,
      54,     3,    53,    32,    34,    56,    57,    58,    59,    60,
      32,    62,    54,     3,    53,    32,    31,    34,    56,     3,
      13,    26,    34,    53,    57,    58,    59,    60,    32,    62,
      32,    57,    58,    59,    60,    54,     3,    53,    31,    31,
      31,    26,     3,    53,    30,    52,    32,    32,    32,    32,
      32,    32,    32,    32,     3,    53,    31,    31,    26,    32,
      32,    32,    32,     3,    53,    54,     3,    53,    31,    32,
      32,    32,    32,    54,     3,    53,    31,    32,    32,    32,
      32,    32,     3,    53,    32,    32,    32,     3,    53,    32,
      32,    32,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    39,    40,
      40,    41,    41,    42,    42,    43,    43,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    45,    46,
      47,    47,    48,    48,    49,    49,    50,    51,    52,    52,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      63,    63,    64,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     5,     5,     9,
       5,     7,     2,     3,     7,     7,     2,     3,     1,     1,
       4,     4,     4,     5,     5,     3,     3,     3,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     2,
       2,     4,     3,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 112 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2087 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 119 "syntax.y"
                                {
    (yyval.nodo) = criarNodo("declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2097 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 124 "syntax.y"
                {
    (yyval.nodo) = criarNodo("declaration_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2106 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 130 "syntax.y"
                       {
    (yyval.nodo) = criarNodo("declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2115 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 134 "syntax.y"
                    {
    (yyval.nodo) = criarNodo("declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2124 "syntax.tab.c"
    break;

  case 7: /* declaration: error  */
#line 138 "syntax.y"
          {}
#line 2130 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 141 "syntax.y"
              {
    Simbolo s = criarSimbolo((yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-1].token).body);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = criarNodo("var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-1].token).body);
  }
#line 2148 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 156 "syntax.y"
                                            {
    Simbolo s = criarSimbolo((yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-4].token).body);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = criarNodo("function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-4].token).body);
    (yyvsp[-5].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2169 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 172 "syntax.y"
                                  {
    Simbolo s = criarSimbolo((yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = criarNodo("function_declaration");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);
    (yyvsp[-4].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2189 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 189 "syntax.y"
                         {
   Simbolo s = criarSimbolo((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = criarNodo("params_list");
    (yyval.nodo)->filho = (yyvsp[-3].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
    (yyvsp[-3].nodo)->proximo = (yyvsp[0].nodo);
 }
#line 2208 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 203 "syntax.y"
           {
    Simbolo s = criarSimbolo((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = criarNodo("params_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
 }
#line 2226 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 218 "syntax.y"
                {
    (yyval.nodo) = criarNodo("brackets_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2235 "syntax.tab.c"
    break;

  case 14: /* brackets_stmt: error  */
#line 222 "syntax.y"
          {}
#line 2241 "syntax.tab.c"
    break;

  case 15: /* stmts: stmt stmts  */
#line 225 "syntax.y"
             {
    (yyval.nodo) = criarNodo("stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2251 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt  */
#line 230 "syntax.y"
         {
    (yyval.nodo) = criarNodo("stmts");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2260 "syntax.tab.c"
    break;

  case 17: /* stmt: for_stmt  */
#line 236 "syntax.y"
           {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2269 "syntax.tab.c"
    break;

  case 18: /* stmt: if_else_stmt  */
#line 240 "syntax.y"
                 {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2278 "syntax.tab.c"
    break;

  case 19: /* stmt: return_stmt  */
#line 244 "syntax.y"
                {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2287 "syntax.tab.c"
    break;

  case 20: /* stmt: io_stmt  */
#line 248 "syntax.y"
            {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2296 "syntax.tab.c"
    break;

  case 21: /* stmt: exp_stmt  */
#line 252 "syntax.y"
             {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2305 "syntax.tab.c"
    break;

  case 22: /* stmt: set_stmt  */
#line 256 "syntax.y"
             {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2314 "syntax.tab.c"
    break;

  case 23: /* stmt: var_declaration  */
#line 260 "syntax.y"
                    {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2323 "syntax.tab.c"
    break;

  case 24: /* stmt: assignment ';'  */
#line 264 "syntax.y"
                  {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2332 "syntax.tab.c"
    break;

  case 25: /* stmt: brackets_stmt  */
#line 268 "syntax.y"
                  {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2341 "syntax.tab.c"
    break;

  case 26: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 274 "syntax.y"
                       {
    (yyval.nodo) = criarNodo("io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
  }
#line 2350 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 278 "syntax.y"
                              {
    (yyval.nodo) = criarNodo("io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
  }
#line 2359 "syntax.tab.c"
    break;

  case 28: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 282 "syntax.y"
                           {
    (yyval.nodo) = criarNodo("io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2368 "syntax.tab.c"
    break;

  case 29: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 288 "syntax.y"
                                                     {
    (yyval.nodo) = criarNodo("for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2380 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 297 "syntax.y"
                      {
    (yyval.nodo) = criarNodo("if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2390 "syntax.tab.c"
    break;

  case 31: /* if_else_stmt: IF '(' exp ')' brackets_stmt ELSE stmt  */
#line 302 "syntax.y"
                                           {
    (yyval.nodo) = criarNodo("if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2401 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN ';'  */
#line 310 "syntax.y"
             {
    (yyval.nodo) = criarNodo("return_stmt");
  }
#line 2409 "syntax.tab.c"
    break;

  case 33: /* return_stmt: RETURN exp ';'  */
#line 313 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2418 "syntax.tab.c"
    break;

  case 34: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 319 "syntax.y"
                                          {
    (yyval.nodo) = criarNodo("set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-4].token).body);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2429 "syntax.tab.c"
    break;

  case 35: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 325 "syntax.y"
                                       {
    (yyval.nodo) = criarNodo("set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-4].token).body);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2439 "syntax.tab.c"
    break;

  case 36: /* exp_stmt: exp ';'  */
#line 332 "syntax.y"
          {
    (yyval.nodo) = criarNodo("exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2448 "syntax.tab.c"
    break;

  case 37: /* assignment: ID '=' exp  */
#line 338 "syntax.y"
             {
    (yyval.nodo) = criarNodo("assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2458 "syntax.tab.c"
    break;

  case 38: /* exp: or_exp  */
#line 345 "syntax.y"
         {
    (yyval.nodo) = criarNodo("exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2467 "syntax.tab.c"
    break;

  case 39: /* exp: set_exp  */
#line 349 "syntax.y"
            {
    (yyval.nodo) = criarNodo("exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2476 "syntax.tab.c"
    break;

  case 40: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 355 "syntax.y"
                             {
    (yyval.nodo) = criarNodo("set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2485 "syntax.tab.c"
    break;

  case 41: /* set_exp: ISSET '(' ID ')'  */
#line 359 "syntax.y"
                     {
    (yyval.nodo) = criarNodo("set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-1].token).body);
  }
#line 2494 "syntax.tab.c"
    break;

  case 42: /* set_exp: ISSET '(' set_exp ')'  */
#line 363 "syntax.y"
                           {
    (yyval.nodo) = criarNodo("set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2503 "syntax.tab.c"
    break;

  case 43: /* set_exp: '!' ISSET '(' ID ')'  */
#line 367 "syntax.y"
                          {
    (yyval.nodo) = criarNodo("set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-1].token).body);
  }
#line 2512 "syntax.tab.c"
    break;

  case 44: /* set_exp: '!' ISSET '(' set_exp ')'  */
#line 371 "syntax.y"
                               {
    (yyval.nodo) = criarNodo("set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2521 "syntax.tab.c"
    break;

  case 45: /* set_in_exp: or_exp INFIX_OP ID  */
#line 377 "syntax.y"
                     {
    (yyval.nodo) = criarNodo("set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2531 "syntax.tab.c"
    break;

  case 46: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 382 "syntax.y"
                            {
    (yyval.nodo) = criarNodo("set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

  }
#line 2542 "syntax.tab.c"
    break;

  case 47: /* or_exp: or_exp OR and_exp  */
#line 390 "syntax.y"
                    {
    (yyval.nodo) = criarNodo("or_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2552 "syntax.tab.c"
    break;

  case 48: /* or_exp: and_exp  */
#line 395 "syntax.y"
            {
    (yyval.nodo) = criarNodo("or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2561 "syntax.tab.c"
    break;

  case 49: /* or_exp: set_in_exp  */
#line 399 "syntax.y"
               {
    (yyval.nodo) = criarNodo("or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2570 "syntax.tab.c"
    break;

  case 50: /* and_exp: and_exp AND relational_exp  */
#line 405 "syntax.y"
                             {
    (yyval.nodo) = criarNodo("and_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2580 "syntax.tab.c"
    break;

  case 51: /* and_exp: relational_exp  */
#line 410 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("and_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2589 "syntax.tab.c"
    break;

  case 52: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 416 "syntax.y"
                                       {
    (yyval.nodo) = criarNodo("relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2599 "syntax.tab.c"
    break;

  case 53: /* relational_exp: sum_exp  */
#line 421 "syntax.y"
            {
    (yyval.nodo) = criarNodo("relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2608 "syntax.tab.c"
    break;

  case 54: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 427 "syntax.y"
                                {
    (yyval.nodo) = criarNodo("sum_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2618 "syntax.tab.c"
    break;

  case 55: /* sum_exp: mul_exp  */
#line 432 "syntax.y"
            {
    (yyval.nodo) = criarNodo("sum_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2627 "syntax.tab.c"
    break;

  case 56: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 438 "syntax.y"
                                  {
    (yyval.nodo) = criarNodo("mul_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2637 "syntax.tab.c"
    break;

  case 57: /* mul_exp: unary_exp  */
#line 443 "syntax.y"
              {
    (yyval.nodo) = criarNodo("mul_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2646 "syntax.tab.c"
    break;

  case 58: /* unary_exp: primal_exp  */
#line 449 "syntax.y"
             {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2655 "syntax.tab.c"
    break;

  case 59: /* unary_exp: '!' primal_exp  */
#line 453 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2664 "syntax.tab.c"
    break;

  case 60: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 457 "syntax.y"
                             {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2673 "syntax.tab.c"
    break;

  case 61: /* unary_exp: ID '(' arg_list ')'  */
#line 461 "syntax.y"
                        {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2683 "syntax.tab.c"
    break;

  case 62: /* unary_exp: ID '(' ')'  */
#line 466 "syntax.y"
               {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
  }
#line 2692 "syntax.tab.c"
    break;

  case 63: /* primal_exp: ID  */
#line 473 "syntax.y"
     {
    (yyval.nodo) = criarNodo("primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2701 "syntax.tab.c"
    break;

  case 64: /* primal_exp: const  */
#line 477 "syntax.y"
          {
    (yyval.nodo) = criarNodo("primal_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2710 "syntax.tab.c"
    break;

  case 65: /* primal_exp: '(' exp ')'  */
#line 481 "syntax.y"
                {
    (yyval.nodo) = criarNodo("arg_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2719 "syntax.tab.c"
    break;

  case 66: /* arg_list: exp ',' arg_list  */
#line 487 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2729 "syntax.tab.c"
    break;

  case 67: /* arg_list: exp  */
#line 492 "syntax.y"
        {
    (yyval.nodo) = criarNodo("arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2738 "syntax.tab.c"
    break;

  case 68: /* type: INT_TYPE  */
#line 498 "syntax.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;
    (yyval.nodo) = criarNodo("INT_TYPE");
  }
#line 2748 "syntax.tab.c"
    break;

  case 69: /* type: FLOAT_TYPE  */
#line 503 "syntax.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;
    (yyval.nodo) = criarNodo("FLOAT_TYPE");
  }
#line 2758 "syntax.tab.c"
    break;

  case 70: /* type: SET_TYPE  */
#line 508 "syntax.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;
    (yyval.nodo) = criarNodo("SET_TYPE");
  }
#line 2768 "syntax.tab.c"
    break;

  case 71: /* type: ELEM_TYPE  */
#line 513 "syntax.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;
    (yyval.nodo) = criarNodo("ELEM_TYPE");
  }
#line 2778 "syntax.tab.c"
    break;

  case 72: /* const: INTEGER  */
#line 520 "syntax.y"
          {
    (yyval.nodo) = criarNodo("const");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2787 "syntax.tab.c"
    break;

  case 73: /* const: FLOAT  */
#line 524 "syntax.y"
          {
    (yyval.nodo) = criarNodo("const");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2796 "syntax.tab.c"
    break;

  case 74: /* const: EMPTY  */
#line 528 "syntax.y"
          {
    (yyval.nodo) = criarNodo("const");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2805 "syntax.tab.c"
    break;


#line 2809 "syntax.tab.c"

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

#line 533 "syntax.y"


void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.line, yylval.token.column, msg);
  error++;
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

    if (error) return 0;

    printArvore(raiz, 0);
    freeArvore(raiz);

    fclose(yyin);
    yylex_destroy();
    return 0;
}

