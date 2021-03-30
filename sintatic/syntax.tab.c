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

  char tipo[10000][100];

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
#define YYLAST   2659

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  366

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
       0,   112,   112,   120,   126,   133,   138,   143,   146,   162,
     179,   197,   212,   228,   233,   236,   242,   249,   254,   259,
     264,   269,   274,   279,   284,   289,   296,   301,   306,   313,
     323,   329,   338,   342,   349,   356,   364,   371,   377,   385,
     390,   397,   402,   407,   412,   417,   424,   430,   439,   445,
     450,   457,   463,   470,   476,   483,   489,   496,   502,   509,
     514,   519,   524,   530,   538,   543,   548,   555,   561,   568,
     575,   582,   589,   598,   603,   608
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

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2104,  2509,    10,    15,    21,    32,    37,  2536,  2563,  2590,
    2604,    45,  -120,  2612,    23,  2620,    55,     3,    31,    50,
    2628,  1775,  2636,     3,    46,  1862,   449,    48,    57,    68,
    2308,  2313,  2318,    76,    78,    39,    81,    88,   736,   382,
    1007,  1039,    47,  1071,  1103,  1135,  1167,  1199,  1231,  1263,
      42,    98,   116,    69,   102,   665,   762,   591,  2338,  2343,
    2348,   132,  2368,  2644,   980,   105,   812,  2373,  2378,    12,
     145,   403,   736,   146,  2279,  1295,   126,   155,    38,   134,
     136,  2398,  2652,   142,  1327,  1359,    72,   107,    72,    72,
      72,    72,   150,   166,  2403,    54,   167,   182,   190,   603,
       4,    -2,   186,   200,   203,   205,   215,   224,  1391,   229,
     236,   230,   237,  2408,   108,   916,   120,   321,  2456,  1867,
    2428,  2433,   907,  2438,   243,   261,   271,   274,  1807,  1831,
     147,   300,   302,   282,   309,   310,  1423,  1455,  1487,   882,
    1519,   307,   329,   330,   336,   338,  1775,   380,  1775,  1775,
    1551,   354,  1583,  1615,  1775,  1647,  1679,  1775,  1899,   609,
     361,  2080,  2105,  2110,   366,   736,   506,   383,    73,   192,
     581,   509,   846,  2115,  2140,  2145,  2150,  1894,   683,   381,
    1905,  1930,  1935,   386,   736,   578,   133,    -7,   152,   519,
     753,  2155,  1940,  1965,  1970,  1975,   453,   603,  2461,  2466,
    2483,   736,   158,   476,   283,  2488,  2493,  2510,  2515,   449,
     387,   396,   388,  1711,  2520,  2537,    12,   149,   402,   943,
    1775,   409,   416,   422,  2180,  2185,    12,   197,   437,  2190,
     137,   137,   137,   137,   137,   662,  2000,  2005,    12,   199,
     439,   443,  2010,   376,   202,   376,   376,   376,   376,   790,
    2542,   469,    12,    12,    12,    12,    12,   231,   450,   697,
     234,   479,   485,   492,   311,   276,   505,  1850,  1743,  2215,
     490,   348,   504,   507,  2220,   609,   821,   637,  2273,  2225,
    2250,  2035,   510,   538,   513,   514,  2040,   287,   683,   719,
     471,   521,   522,   512,   516,  2283,  2243,  2045,  2070,  2547,
     525,  2564,  1945,   379,  2569,  2574,   543,   541,   542,   306,
      12,   312,   553,   558,   562,   975,  1888,   566,   575,  2268,
     587,   593,   597,  2075,   159,   222,   280,   600,   623,    12,
     323,   604,  2591,   420,   446,   778,   625,   636,   612,   639,
     640,   423,   651,   672,   288,   350,   634,   679,   684,   425,
     799,   867,   701,   728,   860,   691,   696,   675,   694,   772,
     705,   710,   897,  1828,   835,  1819
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   743,    19,  -120,   577,   -11,   -42,    93,
    -120,  -120,  -120,  -120,  -120,  -120,   -64,   -27,   -38,   613,
     626,   545,   489,   407,   333,   259,    29,  -119,     7,   121
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
     167,    83,    97,   135,    20,   -50,    22,    11,    76,   107,
     216,    79,    63,   -69,    11,   196,   -50,   -50,   -70,     9,
     197,   -50,   217,    19,   -71,   -50,     9,   186,   -50,   198,
     199,   200,    21,   167,   167,   -72,   124,    12,    95,    98,
     112,   110,    74,   201,   104,   105,    99,    26,    14,   117,
      15,   160,    27,    24,    16,    68,    30,    31,    32,     2,
       3,     4,     5,    23,   164,    37,    75,   175,    81,    84,
      38,    19,   111,    39,    64,    74,   134,    82,   -12,    69,
      26,   -50,   122,   151,   186,   -50,   -68,    17,    70,    30,
      31,    32,   143,   -50,   194,    95,   -50,   -50,   207,    71,
     175,   175,   141,    38,   270,   -50,   209,    72,   177,    73,
     116,   133,    77,   178,    86,   222,   282,   139,   179,    78,
     210,   160,   180,   181,   182,    85,    87,   167,   215,   -39,
     300,   183,   -46,   211,   164,    92,   184,    94,   228,   185,
     158,   212,   111,   -40,   -46,   159,   167,   -46,   102,   106,
     142,   194,   260,   108,   161,   162,   163,   240,   109,   176,
     160,   -40,   261,   167,   243,   -40,   113,   114,   165,   252,
     -49,   275,   -15,   164,   251,   262,   244,   213,   266,   264,
     -39,   111,   -49,   263,   -39,   186,   195,   -41,   225,   273,
     208,   -41,   176,   176,   175,   229,    95,   186,   -11,   123,
     272,   285,   284,   317,   230,   290,   294,   237,    95,   -38,
     160,   186,   160,   175,   242,   291,   217,   -37,   125,   308,
     208,   140,    95,   164,   -39,   164,   250,   314,   292,   167,
     175,   111,   126,   111,   307,   127,   293,   128,    81,   150,
     318,   152,   153,   195,   160,   207,   -46,   155,    66,   328,
     -42,   129,   194,   130,   -42,   207,   218,   164,   -46,   175,
     175,   175,   175,   175,   194,   111,   -46,   207,   131,   132,
     -41,   337,   194,   340,   194,   194,   194,   194,   194,   313,
     176,   207,   207,   207,   207,   207,   176,   176,   136,   160,
     327,   254,   348,   -54,   -54,   -54,   175,   174,   137,   195,
     160,   138,   164,   356,   229,   176,   195,   -54,   -43,   336,
     111,   361,   -43,   164,   144,   339,   -44,   242,   208,   160,
     -44,   111,   176,   -47,   193,   160,   347,   -42,   206,   -43,
     174,   174,   164,   -47,   147,   -47,   160,   208,   164,   207,
     111,   145,   -67,   -47,   195,   -47,   111,   208,   -47,   164,
     121,   176,   176,   176,   176,   176,   195,   111,   207,   208,
     -50,   148,   149,   -44,   195,   -45,   195,   195,   195,   195,
     195,   173,   -50,   208,   208,   208,   208,   208,   -45,   177,
     320,   193,   -45,   221,   178,    67,   154,   254,   176,   -53,
     -53,   -53,   226,   180,   181,   182,   176,   227,   192,    30,
      31,    32,   205,   -53,   173,   173,   158,   184,    80,   195,
     288,   159,   238,    38,   258,   -40,   160,   239,   256,   103,
     161,   162,   163,   120,   174,   177,   355,   257,   360,   164,
     178,   208,   -41,   265,   165,   179,   160,   166,   160,   180,
     181,   182,   267,   174,   -41,   172,   268,   -41,   183,   164,
     208,   164,    67,   184,   269,   192,   185,   111,   -42,   111,
     174,   -64,   -64,   -64,   -64,   -64,    30,    31,    32,   274,
     -42,   286,   191,   -42,   287,   206,   204,   -64,   172,   172,
      38,   309,   193,   -46,   249,   206,   253,   -52,   -52,   174,
     174,   174,   174,   280,   193,   -46,   119,   206,   173,   -46,
     -52,   301,   193,   -46,   193,   193,   193,   298,   193,   224,
     310,   206,   206,   206,   305,   206,   311,   173,   312,   232,
     -52,   -52,   319,   161,   162,   163,   174,   171,   -47,   191,
     245,   -49,   218,   -52,   173,   315,   321,   165,   331,   322,
     -47,   -52,   323,   -49,   -47,   325,   326,   -49,   -47,   205,
     -50,   -49,   329,   330,   190,   -50,   192,   332,   203,   205,
     171,   171,   -50,   173,   173,   173,   279,   -50,   192,   206,
     324,   205,   172,   334,   335,   333,   192,   118,   192,   192,
     297,   236,   192,   170,   341,   205,   205,   304,   206,   205,
     342,   172,   231,   -49,   343,   180,   181,   182,   -38,    90,
     173,   -54,   -54,   -54,   241,   -49,   214,   -37,   172,   184,
     189,   190,   224,   -49,   202,   -54,   170,   170,   -54,   -41,
     198,   199,   200,   204,   -50,   -42,   161,   162,   163,   -43,
     191,   115,   344,   204,   201,   349,   -50,   172,   172,   278,
     165,    93,   191,   205,   352,   204,   -50,   232,   -51,   -51,
     191,   168,   191,   296,   171,   345,   191,   350,   -50,   204,
     303,   -51,   205,   204,   169,   177,   357,   189,   351,   -51,
     178,   353,   354,   171,   172,   179,    88,   -49,   187,   180,
     181,   182,   100,   -44,   168,   168,   236,   -41,   183,   -49,
     171,   188,   -49,   184,   281,   101,   185,   169,   169,   -41,
     180,   181,   182,   -41,   -45,   203,   -42,   -41,   252,   -48,
     170,   358,   190,   -41,   184,   203,   359,   204,   -42,   171,
     277,   -48,   -42,   362,   190,   -41,   -42,   203,   363,   170,
     245,   -48,   190,   -41,   295,   187,   204,   364,   190,   158,
     -42,   302,   365,   -48,   159,   203,   170,   -48,   188,   160,
      13,   -48,   -42,   161,   162,   163,   171,     0,     0,     0,
     -42,   259,   164,   246,   -52,   -52,     0,   165,   189,     0,
     166,   202,    89,   -52,   -52,   276,     0,   -52,   168,     0,
     189,   -52,     0,   202,   -43,   -52,   -52,     0,   289,   -52,
     -43,   169,     0,   177,   189,     0,   -43,   168,   178,   203,
     -43,   202,   -43,   179,   -43,   -43,     0,   180,   181,   182,
     169,   -44,   170,     0,   168,    25,   183,     0,   203,     0,
      26,   184,   299,   -44,   185,    27,   -44,   169,     0,    30,
      31,    32,   231,   -48,     0,     0,   187,     0,    37,   271,
       0,     0,     0,    38,     0,   -48,    39,   -44,   187,   188,
       0,   283,   101,   -48,   233,   202,   -54,   -54,   -54,   -44,
       0,   188,   187,   -44,   101,     0,     0,   -44,     0,   306,
     -54,     0,   -43,     0,   202,   188,     0,     0,   -54,   -45,
     168,     0,   101,   -25,   -43,   -25,   -25,   -25,   -25,   -25,
     -25,   -45,   -43,   169,   -45,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   146,   -25,   -25,     0,   -25,   -25,   -44,
     177,   -25,   -25,   -25,     0,   178,   -25,     0,     0,     0,
     179,   -44,     0,   338,   180,   181,   182,    88,   -48,   -44,
       0,     0,     0,   183,     0,     0,   101,     0,   184,     0,
     -48,   185,   346,   -48,   -14,     0,   -14,   -14,   -14,   -14,
     -14,   -14,     0,     0,     0,   101,   -14,   -14,   -14,     0,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,
       0,     0,   -14,   -14,   -14,     0,   -13,   -14,   -13,   -13,
     -13,   -13,   -13,   -13,     2,     3,     4,     5,   -13,   -13,
     -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,     0,     0,   -13,   -13,   -13,     0,   -23,   -13,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,     0,   -23,
     -23,     0,   -23,   -23,     0,     0,   -23,   -23,   -23,     0,
     -25,   -23,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -25,     0,     0,   -25,   -25,
     -25,     0,   156,   -25,    25,     2,     3,     4,     5,    26,
       0,     0,     0,     0,    27,    28,    29,     0,    30,    31,
      32,    33,     0,    34,    35,     0,    36,    37,     0,     0,
     157,   -16,    38,     0,   -20,    39,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,     0,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,     0,   -20,   -20,     0,   -20,   -20,
       0,     0,   -20,   -20,   -20,     0,   -17,   -20,   -17,   -17,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -17,     0,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,
     -17,   -17,     0,     0,   -17,   -17,   -17,     0,   -18,   -17,
     -18,   -18,   -18,   -18,   -18,   -18,     0,     0,     0,     0,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,     0,   -18,
     -18,     0,   -18,   -18,     0,     0,   -18,   -18,   -18,     0,
     -19,   -18,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
       0,     0,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
       0,   -19,   -19,     0,   -19,   -19,     0,     0,   -19,   -19,
     -19,     0,   -22,   -19,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,     0,     0,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,     0,   -22,   -22,     0,   -22,   -22,     0,     0,
     -22,   -22,   -22,     0,   -21,   -22,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,   -21,
       0,     0,   -21,   -21,   -21,     0,   -32,   -21,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,
     -32,   -32,     0,     0,   -32,   -32,   -32,     0,   -24,   -32,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,     0,   -24,
     -24,     0,   -24,   -24,     0,     0,   -24,   -24,   -24,     0,
     -36,   -24,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
       0,   -36,   -36,     0,   -36,   -36,     0,     0,   -36,   -36,
     -36,     0,   -33,   -36,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,     0,
     -33,   -33,   -33,     0,   -26,   -33,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,
       0,     0,   -26,   -26,   -26,     0,   -27,   -26,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,
     -27,   -27,     0,     0,   -27,   -27,   -27,     0,   -28,   -27,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,     0,   -28,
     -28,     0,   -28,   -28,     0,     0,   -28,   -28,   -28,     0,
     -30,   -28,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,   -30,   -30,     0,   -30,   -30,     0,     0,   -30,   -30,
     -30,     0,   -31,   -30,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,     0,
     -31,   -31,   -31,     0,   -35,   -31,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,
       0,     0,   -35,   -35,   -35,     0,   -34,   -35,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,
     -34,   -34,     0,     0,   -34,   -34,   -34,     0,   -29,   -34,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,     0,   -29,
     -29,     0,   -29,   -29,     0,     0,   -29,   -29,   -29,     0,
     -14,   -29,   -14,   -14,   -14,   -14,   -14,   -14,     0,     0,
       0,     0,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,
       0,   -14,   -14,     0,   -14,   -14,     0,     0,   -14,   -14,
     -14,     0,    -8,   -14,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,     0,     0,    -8,    -8,    -8,     0,    -8,    -8,
      -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,     0,
      -8,    -8,    -8,     0,   -13,    -8,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,     0,     0,   -13,   -13,   -13,     0,
     -13,   -13,   -13,   -13,     0,   -13,   -13,     0,   -13,   -13,
       0,     0,   -13,   -13,   -13,     0,   156,   -13,    25,     2,
       3,     4,     5,    26,     0,     0,     0,     0,    27,    28,
      29,     0,    30,    31,    32,    33,     0,    34,    35,     0,
      36,    37,     0,     0,   157,     0,    38,     0,   219,    39,
      25,     2,     3,     4,     5,    26,     0,     0,     0,     0,
      27,    28,    29,     0,    30,    31,    32,    33,     0,    34,
      35,   -45,    36,    37,    74,     0,   220,     0,    38,    26,
     -45,    39,     0,   -45,    27,     0,     0,   -45,    30,    31,
      32,   -45,   -45,   316,     0,     0,     0,    37,   159,     0,
     -45,     0,    38,   160,     0,    39,     0,   161,   162,   163,
     -64,   -64,   -64,   -64,   -64,    90,   164,   -53,   -53,   -53,
       0,   165,     0,     0,   166,     0,   -64,     0,     0,   -64,
       0,   -53,     0,    65,   -53,    66,   -64,   -64,   -64,   -64,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -73,   -73,   -73,   -73,   -73,   -64,   223,
     -64,   267,   -64,   -64,     0,   235,   -64,     0,     0,   -73,
     223,   -64,     0,   -73,     0,     0,     0,   -73,   -74,   -74,
     -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,   -56,   248,
     -56,   -56,   -56,     0,   -74,   253,   -51,   -51,   -74,   -75,
       0,     0,   -74,   -75,   -56,     0,     0,   -75,   -56,   -51,
       0,     0,   -56,   -58,   -58,   -58,   -58,   -58,   -59,   -59,
     -59,   -59,   -59,   -65,   -65,   -65,   -65,   -65,     0,   -58,
       0,     0,     0,   -58,   -59,     0,     0,   -58,   -59,   -65,
       0,     0,   -59,   -65,     0,     0,     0,   -65,   -64,   -64,
     -64,   -64,   -64,   -61,   -61,   -61,   -61,   -61,   -60,   -60,
     -60,   -60,   -60,     0,   -64,     0,     0,     0,   -64,   -61,
       0,     0,   -64,   -61,   -60,     0,     0,   -61,   -60,     0,
       0,     0,   -60,   -63,   -63,   -63,   -63,   -63,   -66,   -66,
     -66,   -66,   -66,   -55,   248,   -55,   -55,   -55,     0,   -63,
       0,     0,     0,   -63,   -66,     0,     0,   -63,   -66,   -55,
       0,     0,   -66,   -55,     0,     0,     0,   -55,   -57,   -57,
     -57,   -57,   -57,   -62,   -62,   -62,   -62,   -62,   -73,   -73,
     -73,   -73,   -73,     0,   -57,     0,     0,     0,   -57,   -62,
       0,     0,   -57,   -62,   -73,     1,     0,   -62,     2,     3,
       4,     5,   -73,   -74,   -74,   -74,   -74,   -74,   -75,   -75,
     -75,   -75,   -75,   -56,   234,   -56,   -56,   -56,     0,   -74,
       0,     0,     0,     0,   -75,     0,     0,   -74,     0,   -56,
       0,     0,   -75,     0,     0,     0,     0,   -56,   -58,   -58,
     -58,   -58,   -58,   -59,   -59,   -59,   -59,   -59,   -65,   -65,
     -65,   -65,   -65,   247,   -58,   -54,   -54,   -54,     0,   -59,
       0,     0,   -58,     0,   -65,     0,     0,   -59,     0,   -54,
       0,     0,   -65,   -54,     0,     0,     0,   -54,   -64,   -64,
     -64,   -64,   -64,   -61,   -61,   -61,   -61,   -61,   -60,   -60,
     -60,   -60,   -60,     0,   -64,     0,     0,     0,     0,   -61,
       0,     0,   -64,     0,   -60,     0,     0,   -61,     0,     0,
       0,     0,   -60,   -63,   -63,   -63,   -63,   -63,   -66,   -66,
     -66,   -66,   -66,   -55,   234,   -55,   -55,   -55,     0,   -63,
       0,     0,     0,     0,   -66,     0,     0,   -63,     0,   -55,
       0,   247,   -66,   -53,   -53,   -53,     0,   -55,   -57,   -57,
     -57,   -57,   -57,     0,     0,     0,     0,   -53,     0,     0,
       0,   -53,     0,     0,   -57,   -53,   -62,   -62,   -62,   -62,
     -62,   233,   -57,   -53,   -53,   -53,     0,   -64,   -64,   -64,
     -64,   -64,   -62,   246,   -51,   -51,     0,   -53,     0,     0,
     -62,     0,     0,   -64,     0,   -53,   -64,   -51,     0,     0,
      65,   -51,     0,     0,     0,   -51,   -73,   -73,   -73,   -73,
     -73,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,
     -75,     0,   -73,     0,     0,   -73,     0,   -74,     0,     0,
     -74,     0,   -75,     0,     0,   -75,   -56,    91,   -56,   -56,
     -56,   -58,   -58,   -58,   -58,   -58,   -59,   -59,   -59,   -59,
     -59,     0,   -56,     0,     0,   -56,     0,   -58,     0,     0,
     -58,     0,   -59,     0,     0,   -59,   -65,   -65,   -65,   -65,
     -65,   -64,   -64,   -64,   -64,   -64,   -61,   -61,   -61,   -61,
     -61,     0,   -65,     0,     0,   -65,     0,   -64,     0,     0,
     -64,     0,   -61,     0,     0,   -61,   -60,   -60,   -60,   -60,
     -60,   -63,   -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,
     -66,     0,   -60,     0,     0,   -60,     0,   -63,     0,     0,
     -63,     0,   -66,     0,     0,   -66,   -55,    91,   -55,   -55,
     -55,   -57,   -57,   -57,   -57,   -57,   -62,   -62,   -62,   -62,
     -62,     0,   -55,     0,     0,   -55,     0,   -57,     0,     0,
     -57,     0,   -62,     0,     0,   -62,    89,   -51,   -51,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,     0,
     -51,     0,     0,   -51,     0,   -73,     0,     0,     0,     0,
     -74,   -75,   -75,   -75,   -75,   -75,   -56,   255,   -56,   -56,
     -56,   -58,   -58,   -58,   -58,   -58,     0,   -75,     0,    -7,
      -7,     0,   -56,    -7,    -7,    -7,    -7,   -58,   -59,   -59,
     -59,   -59,   -59,   -65,   -65,   -65,   -65,   -65,   -64,   -64,
     -64,   -64,   -64,     0,   -59,     0,    -2,     1,     0,   -65,
       2,     3,     4,     5,   -64,   -60,   -60,   -60,   -60,   -60,
     -61,   -61,   -61,   -61,   -61,   -63,   -63,   -63,   -63,   -63,
       0,   -60,     0,    -4,    -4,     0,   -61,    -4,    -4,    -4,
      -4,   -63,   -66,   -66,   -66,   -66,   -66,   -55,   255,   -55,
     -55,   -55,   -57,   -57,   -57,   -57,   -57,     0,   -66,     0,
      -6,    -6,     0,   -55,    -6,    -6,    -6,    -6,   -57,   -62,
     -62,   -62,   -62,   -62,    -5,    -5,     0,     0,    -5,    -5,
      -5,    -5,    -3,    -3,     0,   -62,    -3,    -3,    -3,    -3,
      -8,    -8,     0,     0,    -8,    -8,    -8,    -8,   -14,   -14,
       0,     0,   -14,   -14,   -14,   -14,   -10,   -10,     0,     0,
     -10,   -10,   -10,   -10,    -9,    -9,     0,     0,    -9,    -9,
      -9,    -9,   -13,   -13,     0,     0,   -13,   -13,   -13,   -13
};

static const yytype_int16 yycheck[] =
{
      38,    43,    66,   122,     1,    12,    17,     0,    35,    73,
      12,    38,    23,     3,     7,     3,    12,    24,     3,     0,
       8,    28,    24,    16,     3,    32,     7,    65,    24,    17,
      18,    19,    29,    71,    72,     3,    32,     0,    65,    66,
      78,     3,     3,    31,    71,    72,    34,     8,     3,    87,
      27,    13,    13,     3,    31,    26,    17,    18,    19,     4,
       5,     6,     7,    32,    26,    26,    27,    38,    39,    27,
      31,    64,    34,    34,    28,     3,   114,    30,    32,    31,
       8,    12,    28,   147,   122,    12,    32,    32,    31,    17,
      18,    19,   130,    24,    65,   122,    27,    24,    69,    31,
      71,    72,   129,    31,   223,    32,    34,    31,     3,    31,
       3,     3,    31,     8,    12,   157,   235,   128,    13,    31,
      13,    13,    17,    18,    19,    27,    24,   165,    99,    27,
     249,    26,    12,    26,    26,     3,    31,    32,   165,    34,
       3,    34,    34,    27,    24,     8,   184,    27,     3,     3,
       3,   122,     3,    27,    17,    18,    19,   184,     3,    38,
      13,    28,    13,   201,    12,    32,    32,    31,    31,    11,
      12,    34,    30,    26,   201,    26,    24,    27,   220,   217,
      28,    34,    24,    34,    32,   223,    65,    28,   159,   227,
      69,    32,    71,    72,   165,   166,   223,   235,    32,    32,
       3,   239,     3,   267,    12,     3,   244,   178,   235,    27,
      13,   249,    13,   184,   185,    13,    24,    27,    32,   257,
      99,   128,   249,    26,    32,    26,   197,   265,    26,   267,
     201,    34,    32,    34,     3,    32,    34,    32,   209,   146,
     267,   148,   149,   122,    13,   216,    12,   154,    33,   287,
      28,    27,   223,    24,    32,   226,    26,    26,    24,   230,
     231,   232,   233,   234,   235,    34,    32,   238,    32,    32,
      27,   309,   243,   311,   245,   246,   247,   248,   249,     3,
     159,   252,   253,   254,   255,   256,   165,   166,    27,    13,
       3,     8,   330,    10,    11,    12,   267,    38,    27,   178,
      13,    27,    26,   341,   275,   184,   185,    24,    28,     3,
      34,   349,    32,    26,    32,     3,    28,   288,   197,    13,
      32,    34,   201,    12,    65,    13,     3,    27,    69,    27,
      71,    72,    26,    12,    27,    24,    13,   216,    26,   310,
      34,    32,    32,    32,   223,    24,    34,   226,    27,    26,
      91,   230,   231,   232,   233,   234,   235,    34,   329,   238,
      12,    32,    32,    27,   243,    27,   245,   246,   247,   248,
     249,    38,    24,   252,   253,   254,   255,   256,    28,     3,
      32,   122,    32,     3,     8,     3,    32,     8,   267,    10,
      11,    12,    31,    17,    18,    19,   275,    31,    65,    17,
      18,    19,    69,    24,    71,    72,     3,    31,    26,   288,
      34,     8,    31,    31,    26,    32,    13,    31,    31,    16,
      17,    18,    19,    90,   165,     3,     3,    31,     3,    26,
       8,   310,    12,    31,    31,    13,    13,    34,    13,    17,
      18,    19,    33,   184,    24,    38,    30,    27,    26,    26,
     329,    26,     3,    31,    32,   122,    34,    34,    12,    34,
     201,     8,     9,    10,    11,    12,    17,    18,    19,    32,
      24,    32,    65,    27,    31,   216,    69,    24,    71,    72,
      31,    31,   223,    12,    31,   226,    10,    11,    12,   230,
     231,   232,   233,   234,   235,    24,    89,   238,   165,    28,
      24,    32,   243,    32,   245,   246,   247,   248,   249,     3,
      31,   252,   253,   254,   255,   256,    31,   184,    26,    10,
      11,    12,    32,    17,    18,    19,   267,    38,    12,   122,
      11,    12,    26,    24,   201,    30,    32,    31,    26,    32,
      24,    32,    32,    24,    28,    32,    32,    28,    32,   216,
      12,    32,    31,    31,    65,    12,   223,    32,    69,   226,
      71,    72,    24,   230,   231,   232,   233,    24,   235,   310,
      32,   238,   165,    32,    32,    32,   243,    88,   245,   246,
     247,     3,   249,    38,    31,   252,   253,   254,   329,   256,
      32,   184,    11,    12,    32,    17,    18,    19,    32,     8,
     267,    10,    11,    12,    26,    24,     3,    32,   201,    31,
      65,   122,     3,    32,    69,    24,    71,    72,    27,    32,
      17,    18,    19,   216,    12,    32,    17,    18,    19,    32,
     223,    86,    32,   226,    31,    31,    24,   230,   231,   232,
      31,    64,   235,   310,    32,   238,    12,    10,    11,    12,
     243,    38,   245,   246,   165,    32,   249,    32,    24,   252,
     253,    24,   329,   256,    38,     3,    32,   122,    32,    32,
       8,    32,    32,   184,   267,    13,    11,    12,    65,    17,
      18,    19,    69,    32,    71,    72,     3,    12,    26,    24,
     201,    65,    27,    31,    32,    69,    34,    71,    72,    24,
      17,    18,    19,    28,    32,   216,    12,    32,    11,    12,
     165,    32,   223,    12,    31,   226,    32,   310,    24,   230,
     231,    24,    28,    32,   235,    24,    32,   238,    32,   184,
      11,    12,   243,    32,   245,   122,   329,    32,   249,     3,
      12,   252,    32,    24,     8,   256,   201,    28,   122,    13,
       7,    32,    24,    17,    18,    19,   267,    -1,    -1,    -1,
      32,   216,    26,    10,    11,    12,    -1,    31,   223,    -1,
      34,   226,    10,    11,    12,   230,    -1,    24,   165,    -1,
     235,    28,    -1,   238,    12,    32,    24,    -1,   243,    27,
      12,   165,    -1,     3,   249,    -1,    24,   184,     8,   310,
      28,   256,    24,    13,    32,    27,    -1,    17,    18,    19,
     184,    12,   267,    -1,   201,     3,    26,    -1,   329,    -1,
       8,    31,    32,    24,    34,    13,    27,   201,    -1,    17,
      18,    19,    11,    12,    -1,    -1,   223,    -1,    26,   226,
      -1,    -1,    -1,    31,    -1,    24,    34,    12,   235,   223,
      -1,   238,   226,    32,     8,   310,    10,    11,    12,    24,
      -1,   235,   249,    28,   238,    -1,    -1,    32,    -1,   256,
      24,    -1,    12,    -1,   329,   249,    -1,    -1,    32,    12,
     267,    -1,   256,     1,    24,     3,     4,     5,     6,     7,
       8,    24,    32,   267,    27,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    12,
       3,    29,    30,    31,    -1,     8,    34,    -1,    -1,    -1,
      13,    24,    -1,   310,    17,    18,    19,    11,    12,    32,
      -1,    -1,    -1,    26,    -1,    -1,   310,    -1,    31,    -1,
      24,    34,   329,    27,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,   329,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,     4,     5,     6,     7,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    -1,
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
      25,    26,    -1,    -1,    29,    -1,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    12,    25,    26,     3,    -1,    29,    -1,    31,     8,
      12,    34,    -1,    24,    13,    -1,    -1,    28,    17,    18,
      19,    32,    24,     3,    -1,    -1,    -1,    26,     8,    -1,
      32,    -1,    31,    13,    -1,    34,    -1,    17,    18,    19,
       8,     9,    10,    11,    12,     8,    26,    10,    11,    12,
      -1,    31,    -1,    -1,    34,    -1,    24,    -1,    -1,    27,
      -1,    24,    -1,    31,    27,    33,     8,     9,    10,    11,
      12,    -1,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    24,     8,     9,    10,    11,    12,    24,    31,
      32,    33,    28,    24,    -1,    31,    32,    -1,    -1,    24,
      31,    32,    -1,    28,    -1,    -1,    -1,    32,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    24,    10,    11,    12,    28,    24,
      -1,    -1,    32,    28,    24,    -1,    -1,    32,    28,    24,
      -1,    -1,    32,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    24,
      -1,    -1,    -1,    28,    24,    -1,    -1,    32,    28,    24,
      -1,    -1,    32,    28,    -1,    -1,    -1,    32,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    24,    -1,    -1,    -1,    28,    24,
      -1,    -1,    32,    28,    24,    -1,    -1,    32,    28,    -1,
      -1,    -1,    32,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    24,
      -1,    -1,    -1,    28,    24,    -1,    -1,    32,    28,    24,
      -1,    -1,    32,    28,    -1,    -1,    -1,    32,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    24,    -1,    -1,    -1,    28,    24,
      -1,    -1,    32,    28,    24,     1,    -1,    32,     4,     5,
       6,     7,    32,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    24,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    32,    -1,    24,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    32,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,    24,    10,    11,    12,    -1,    24,
      -1,    -1,    32,    -1,    24,    -1,    -1,    32,    -1,    24,
      -1,    -1,    32,    28,    -1,    -1,    -1,    32,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    24,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    32,    -1,    24,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    32,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    24,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    32,    -1,    24,
      -1,     8,    32,    10,    11,    12,    -1,    32,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    28,    -1,    -1,    24,    32,     8,     9,    10,    11,
      12,     8,    32,    10,    11,    12,    -1,     8,     9,    10,
      11,    12,    24,    10,    11,    12,    -1,    24,    -1,    -1,
      32,    -1,    -1,    24,    -1,    32,    27,    24,    -1,    -1,
      31,    28,    -1,    -1,    -1,    32,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    24,    -1,    -1,    27,    -1,    24,    -1,    -1,
      27,    -1,    24,    -1,    -1,    27,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    24,    -1,    -1,    27,    -1,    24,    -1,    -1,
      27,    -1,    24,    -1,    -1,    27,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    24,    -1,    -1,    27,    -1,    24,    -1,    -1,
      27,    -1,    24,    -1,    -1,    27,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    24,    -1,    -1,    27,    -1,    24,    -1,    -1,
      27,    -1,    24,    -1,    -1,    27,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    24,    -1,    -1,    27,    -1,    24,    -1,    -1,
      27,    -1,    24,    -1,    -1,    27,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    -1,    -1,
      24,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    24,    -1,     0,
       1,    -1,    24,     4,     5,     6,     7,    24,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    24,    -1,     0,     1,    -1,    24,
       4,     5,     6,     7,    24,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    24,    -1,     0,     1,    -1,    24,     4,     5,     6,
       7,    24,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    24,    -1,
       0,     1,    -1,    24,     4,     5,     6,     7,    24,     8,
       9,    10,    11,    12,     0,     1,    -1,    -1,     4,     5,
       6,     7,     0,     1,    -1,    24,     4,     5,     6,     7,
       0,     1,    -1,    -1,     4,     5,     6,     7,     0,     1,
      -1,    -1,     4,     5,     6,     7,     0,     1,    -1,    -1,
       4,     5,     6,     7,     0,     1,    -1,    -1,     4,     5,
       6,     7,     0,     1,    -1,    -1,     4,     5,     6,     7
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
       8,     9,     3,    41,    32,    52,    62,    51,    52,    34,
      54,    55,     3,    16,    52,    52,     3,    51,    27,     3,
       3,    34,    53,    32,    31,    56,     3,    53,    57,    58,
      59,    60,    28,    32,    32,    32,    32,    32,    32,    27,
      24,    32,    32,     3,    53,    62,    27,    27,    27,    42,
      44,    52,     3,    53,    32,    32,    21,    27,    32,    32,
      44,    51,    44,    44,    32,    44,     1,    29,     3,     8,
      13,    17,    18,    19,    26,    31,    34,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    64,     3,     8,    13,
      17,    18,    19,    26,    31,    34,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    64,     3,     8,    17,    18,
      19,    31,    56,    57,    58,    59,    60,    61,    64,    34,
      13,    26,    34,    27,     3,    61,    12,    24,    26,     1,
      29,     3,    43,    31,     3,    61,    31,    31,    52,    61,
      12,    11,    10,     8,     9,    31,     3,    61,    31,    31,
      52,    26,    61,    12,    24,    11,    10,     8,     9,    31,
      61,    52,    11,    10,     8,     9,    31,    31,    26,    56,
       3,    13,    26,    34,    53,    31,    43,    33,    30,    32,
      62,    54,     3,    53,    32,    34,    56,    57,    58,    59,
      60,    32,    62,    54,     3,    53,    32,    31,    34,    56,
       3,    13,    26,    34,    53,    57,    58,    59,    60,    32,
      62,    32,    57,    58,    59,    60,    54,     3,    53,    31,
      31,    31,    26,     3,    53,    30,     3,    51,    52,    32,
      32,    32,    32,    32,    32,    32,    32,     3,    53,    31,
      31,    26,    32,    32,    32,    32,     3,    53,    54,     3,
      53,    31,    32,    32,    32,    32,    54,     3,    53,    31,
      32,    32,    32,    32,    32,     3,    53,    32,    32,    32,
       3,    53,    32,    32,    32,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    39,    40,
      40,    41,    41,    42,    42,    43,    43,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    45,    46,
      47,    47,    48,    48,    49,    49,    50,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    54,    54,    55,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    60,    60,    60,    61,    61,    61,    62,    62,    63,
      63,    63,    63,    64,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     5,     5,     9,
       5,     7,     2,     3,     7,     7,     2,     3,     3,     1,
       1,     4,     4,     4,     5,     5,     3,     3,     3,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       2,     2,     4,     3,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1
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
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2096 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 120 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2107 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 126 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2117 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 133 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2127 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 138 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2137 "syntax.tab.c"
    break;

  case 7: /* declaration: error  */
#line 143 "syntax.y"
          {}
#line 2143 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 146 "syntax.y"
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
#line 2162 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 162 "syntax.y"
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
#line 2184 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 179 "syntax.y"
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
#line 2205 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 197 "syntax.y"
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
#line 2225 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 212 "syntax.y"
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
#line 2244 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 228 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "brackets_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2254 "syntax.tab.c"
    break;

  case 14: /* brackets_stmt: error  */
#line 233 "syntax.y"
          {}
#line 2260 "syntax.tab.c"
    break;

  case 15: /* stmts: stmt stmts  */
#line 236 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2271 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt  */
#line 242 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2281 "syntax.tab.c"
    break;

  case 17: /* stmt: for_stmt  */
#line 249 "syntax.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2291 "syntax.tab.c"
    break;

  case 18: /* stmt: if_else_stmt  */
#line 254 "syntax.y"
                 {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2301 "syntax.tab.c"
    break;

  case 19: /* stmt: return_stmt  */
#line 259 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2311 "syntax.tab.c"
    break;

  case 20: /* stmt: io_stmt  */
#line 264 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2321 "syntax.tab.c"
    break;

  case 21: /* stmt: exp_stmt  */
#line 269 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2331 "syntax.tab.c"
    break;

  case 22: /* stmt: set_stmt  */
#line 274 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2341 "syntax.tab.c"
    break;

  case 23: /* stmt: var_declaration  */
#line 279 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2351 "syntax.tab.c"
    break;

  case 24: /* stmt: assignment ';'  */
#line 284 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2361 "syntax.tab.c"
    break;

  case 25: /* stmt: brackets_stmt  */
#line 289 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2371 "syntax.tab.c"
    break;

  case 26: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 296 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 2381 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 301 "syntax.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 1);
  }
#line 2391 "syntax.tab.c"
    break;

  case 28: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 306 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2401 "syntax.tab.c"
    break;

  case 29: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 313 "syntax.y"
                                                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2414 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 323 "syntax.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2425 "syntax.tab.c"
    break;

  case 31: /* if_else_stmt: IF '(' exp ')' brackets_stmt ELSE stmt  */
#line 329 "syntax.y"
                                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2437 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN ';'  */
#line 338 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
  }
#line 2446 "syntax.tab.c"
    break;

  case 33: /* return_stmt: RETURN exp ';'  */
#line 342 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2456 "syntax.tab.c"
    break;

  case 34: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 349 "syntax.y"
                                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2468 "syntax.tab.c"
    break;

  case 35: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 356 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2479 "syntax.tab.c"
    break;

  case 36: /* exp_stmt: exp ';'  */
#line 364 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2489 "syntax.tab.c"
    break;

  case 37: /* assignment: ID '=' exp  */
#line 371 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2500 "syntax.tab.c"
    break;

  case 38: /* assignment: ID '=' assignment  */
#line 377 "syntax.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2511 "syntax.tab.c"
    break;

  case 39: /* exp: or_exp  */
#line 385 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2521 "syntax.tab.c"
    break;

  case 40: /* exp: set_exp  */
#line 390 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2531 "syntax.tab.c"
    break;

  case 41: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 397 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2541 "syntax.tab.c"
    break;

  case 42: /* set_exp: ISSET '(' ID ')'  */
#line 402 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2551 "syntax.tab.c"
    break;

  case 43: /* set_exp: ISSET '(' set_exp ')'  */
#line 407 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2561 "syntax.tab.c"
    break;

  case 44: /* set_exp: '!' ISSET '(' ID ')'  */
#line 412 "syntax.y"
                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2571 "syntax.tab.c"
    break;

  case 45: /* set_exp: '!' ISSET '(' set_exp ')'  */
#line 417 "syntax.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2581 "syntax.tab.c"
    break;

  case 46: /* set_in_exp: or_exp INFIX_OP ID  */
#line 424 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 2592 "syntax.tab.c"
    break;

  case 47: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 430 "syntax.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

  }
#line 2604 "syntax.tab.c"
    break;

  case 48: /* or_exp: or_exp OR and_exp  */
#line 439 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2615 "syntax.tab.c"
    break;

  case 49: /* or_exp: and_exp  */
#line 445 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2625 "syntax.tab.c"
    break;

  case 50: /* or_exp: set_in_exp  */
#line 450 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2635 "syntax.tab.c"
    break;

  case 51: /* and_exp: and_exp AND relational_exp  */
#line 457 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2646 "syntax.tab.c"
    break;

  case 52: /* and_exp: relational_exp  */
#line 463 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2656 "syntax.tab.c"
    break;

  case 53: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 470 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2667 "syntax.tab.c"
    break;

  case 54: /* relational_exp: sum_exp  */
#line 476 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2677 "syntax.tab.c"
    break;

  case 55: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 483 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2688 "syntax.tab.c"
    break;

  case 56: /* sum_exp: mul_exp  */
#line 489 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2698 "syntax.tab.c"
    break;

  case 57: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 496 "syntax.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2709 "syntax.tab.c"
    break;

  case 58: /* mul_exp: unary_exp  */
#line 502 "syntax.y"
              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2719 "syntax.tab.c"
    break;

  case 59: /* unary_exp: primal_exp  */
#line 509 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2729 "syntax.tab.c"
    break;

  case 60: /* unary_exp: '!' primal_exp  */
#line 514 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2739 "syntax.tab.c"
    break;

  case 61: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 519 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2749 "syntax.tab.c"
    break;

  case 62: /* unary_exp: ID '(' arg_list ')'  */
#line 524 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2760 "syntax.tab.c"
    break;

  case 63: /* unary_exp: ID '(' ')'  */
#line 530 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 2770 "syntax.tab.c"
    break;

  case 64: /* primal_exp: ID  */
#line 538 "syntax.y"
     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 2780 "syntax.tab.c"
    break;

  case 65: /* primal_exp: const  */
#line 543 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2790 "syntax.tab.c"
    break;

  case 66: /* primal_exp: '(' exp ')'  */
#line 548 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2800 "syntax.tab.c"
    break;

  case 67: /* arg_list: exp ',' arg_list  */
#line 555 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2811 "syntax.tab.c"
    break;

  case 68: /* arg_list: exp  */
#line 561 "syntax.y"
        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2821 "syntax.tab.c"
    break;

  case 69: /* type: INT_TYPE  */
#line 568 "syntax.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 2833 "syntax.tab.c"
    break;

  case 70: /* type: FLOAT_TYPE  */
#line 575 "syntax.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 2845 "syntax.tab.c"
    break;

  case 71: /* type: SET_TYPE  */
#line 582 "syntax.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 2857 "syntax.tab.c"
    break;

  case 72: /* type: ELEM_TYPE  */
#line 589 "syntax.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 2869 "syntax.tab.c"
    break;

  case 73: /* const: INTEGER  */
#line 598 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 2879 "syntax.tab.c"
    break;

  case 74: /* const: FLOAT  */
#line 603 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 2889 "syntax.tab.c"
    break;

  case 75: /* const: EMPTY  */
#line 608 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 2899 "syntax.tab.c"
    break;


#line 2903 "syntax.tab.c"

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

#line 614 "syntax.y"


void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.linha, yylval.token.coluna, msg);
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

