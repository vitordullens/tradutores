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
#line 6 "syntax.y"

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
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_FLOAT_TYPE = 4,                 /* FLOAT_TYPE  */
  YYSYMBOL_INT_TYPE = 5,                   /* INT_TYPE  */
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
  YYSYMBOL_INTEGER = 16,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_EMPTY = 19,                     /* EMPTY  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_THEN = 22,                      /* THEN  */
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
#define YYLAST   4204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  446

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
       0,    96,    96,   104,   110,   117,   122,   127,   130,   146,
     163,   181,   196,   212,   217,   220,   226,   233,   238,   243,
     248,   253,   258,   263,   268,   273,   280,   285,   290,   297,
     307,   313,   322,   326,   333,   340,   348,   355,   361,   369,
     374,   381,   388,   394,   400,   406,   414,   420,   425,   432,
     438,   445,   451,   458,   464,   471,   477,   484,   489,   494,
     499,   505,   510,   516,   521,   527,   532,   537,   542,   547,
     556,   561,   566,   573,   579,   586,   593,   600,   607,   616,
     621,   626
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "FLOAT_TYPE",
  "INT_TYPE", "SET_TYPE", "ELEM_TYPE", "ARITMETIC_OP1", "ARITMETIC_OP2",
  "RELATIONAL_OP", "AND", "OR", "SET_OP1", "INPUT", "OUTPUT", "INTEGER",
  "FLOAT", "STRING", "EMPTY", "IF", "ELSE", "THEN", "FOR", "RETURN",
  "INFIX_OP", "FORALL", "ISSET", "';'", "'!'", "'='", "')'", "'('", "'}'",
  "'{'", "','", "$accept", "program", "declaration_list", "declaration",
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
     275,   276,   277,   278,   279,   280,   281,   282,    59,    33,
      61,    41,    40,   125,   123,    44
};
#endif

#define YYPACT_NINF (-131)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1023,  3590,     9,    76,    95,   110,    33,  3624,  3658,  3692,
    3726,   123,  -131,  3760,    90,  4033,    14,     5,   -17,   138,
    4061,  3197,  4089,     5,    64,  3456,    40,   172,   176,   188,
    1651,  3771,  3792,   204,   211,    73,   212,   233,    10,  1331,
    2415,  2449,   202,  2483,  2517,  2551,  2585,  2619,  2653,  2687,
     241,   257,    30,   230,   532,    19,  1259,   126,  3797,  3802,
    3823,   284,  3828,  4117,   727,  1379,   198,  3487,  3833,  1421,
     291,   438,  1331,   296,  3492,  2721,   285,   325,    12,  3497,
     301,  3854,   308,  4145,   312,  2755,  2789,    67,   801,    74,
     801,   801,   801,   801,   313,   332,   328,   360,  3859,   245,
     371,   508,   379,   118,    84,   376,   391,   399,   421,   380,
     444,  2823,   436,   435,   443,   584,   139,  3864,   607,   758,
     690,   780,   969,  1356,   568,  3885,  3890,  1467,  3895,  3916,
     451,   157,   455,   456,   458,  3229,  1494,   206,  3921,  3926,
    3947,   459,   466,   467,   471,  3952,  2857,  2891,  2925,   154,
     463,   474,   481,  3957,  3978,  3983,  3197,   511,  3197,  3197,
    2959,   486,  2993,  3027,  3197,  3061,  3095,  3197,   654,   100,
     488,   749,  1542,  3557,   490,   173,  1331,   115,   356,   401,
     182,   187,   406,  3562,  3567,  3591,  3596,  1132,   112,   506,
     468,   737,   864,   509,   234,  1331,    53,    79,   270,   229,
      38,   943,   876,   905,   990,  1391,  1102,   147,   526,  1144,
    3988,  4006,   530,   350,  1331,    11,    96,  1451,  4011,  4016,
    4034,  4039,   533,   541,  3129,   213,  1048,   264,  1571,   542,
     556,   558,   559,   664,   566,  3197,  1667,  1701,  1735,  1769,
    1803,  1837,  1871,  1905,   522,   571,   515,   534,   569,   617,
    3522,  3601,  1421,   271,  3527,   574,  3625,   576,  1172,  1172,
    1172,  1172,  1172,   681,  1530,  1604,  1421,   309,  1612,   577,
    3256,   583,   321,  1500,   337,  1500,  1500,  1500,  1500,   808,
    1303,  4044,  1421,   358,  3532,   585,  4062,   590,  1048,  1048,
    1048,  1048,  1421,  1421,   422,   595,   433,    41,   498,   518,
     636,   944,  1331,   296,  1939,   614,   640,   618,  1973,  2007,
     619,  1517,  3163,  3630,   621,  1076,   593,   637,   639,  1179,
     386,  3635,   381,   536,   484,  3659,  3664,  3261,   642,  1209,
     598,   643,   647,  1249,   446,  3268,   311,   663,   501,   261,
     754,   763,   221,  3428,  3296,  3301,  4067,   668,  1289,   628,
     672,   674,  1314,   447,  4072,   292,  1630,  4090,  4095,   705,
     775,  1421,   675,   676,   678,   688,   698,  2041,   646,  2075,
    2109,  3462,   696,   711,  3669,  3693,   712,   171,  3698,  3703,
    3727,   725,   736,   740,  3308,  3336,   745,   203,  3341,  3348,
    3376,   747,   751,   759,  1421,  4100,  4118,   762,   704,  4123,
    4128,  4146,   766,   776,   781,   782,   983,   908,   791,   798,
     804,  3229,  1494,   460,  3732,  3737,  3761,  3766,  3381,  3388,
    3416,  3421,   934,  4151,  4156,  4174,  4179,   955,  2143,  2177,
    2211,  2245,   806,   805,   811,   907,  3229,   511,  3229,  3229,
    2279,   812,  2313,  2347,  3229,  2381
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,   822,     4,  -131,   789,   -15,   -40,  -118,
    -130,  -101,   -84,   -60,   -53,   -41,   -64,   -11,    -4,  1176,
    1317,  1112,   971,   857,   730,   589,   293,   156,     0,   462
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    40,    10,    18,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    99,    52,    53,
      54,    55,    56,    57,    58,    59,    60,   100,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    96,    22,    84,     9,   238,    20,    11,    63,   110,
      51,     9,   -76,    79,    23,   113,    19,   149,     2,     3,
       4,     5,   288,   -47,    76,   222,    30,    31,    82,    32,
      90,   -47,    51,    12,   239,   177,   -47,    80,   160,    21,
     162,   163,    39,    67,   -47,    17,   165,   -47,   276,   -50,
     -50,   240,   288,   -46,    97,    87,    30,    31,   -40,    32,
     107,   108,   196,   -50,    19,   102,   -46,   177,   177,   -50,
     118,   244,    39,   -50,   114,   241,    74,   121,   272,   -75,
     223,    26,   242,   119,   -40,   122,    27,   223,   -40,    30,
      31,   -48,    32,   161,   243,   -12,   226,   196,   -77,    64,
      37,    75,    38,   250,   -48,    39,   289,   -50,   -50,   227,
     -48,   196,   143,   -78,   -48,   264,   171,   172,    15,   173,
     237,   -50,    16,   196,   245,   150,    14,   248,   190,   191,
     -48,   192,   176,   152,    92,   246,   -52,   -52,   -52,   236,
     225,    24,   142,   -48,   195,    51,   -40,    51,    51,   131,
     280,   -52,   222,    51,   -52,   -30,    51,   -30,   -30,   -30,
     -30,   -30,   -30,   209,   210,   257,   211,   -30,   -30,   -30,
     -30,   -30,   177,   -30,   -30,   156,   254,   -30,   -30,   214,
     -30,   -30,   -41,   -30,   271,   -41,   -30,   -30,   -30,   171,
     172,   177,   173,   259,   -47,   307,   -41,   260,   -50,   -50,
     255,   187,   -41,   287,    69,   176,   188,   -47,    70,   151,
     177,   189,   -50,   -47,   190,   191,   294,   192,   -50,   222,
      71,   296,   305,   299,    51,   193,   295,   194,   -41,    98,
     195,   276,   -49,   -49,   -41,    83,    72,   268,   -41,   366,
     275,   -47,   -48,    73,    77,   196,   -49,   372,   102,   318,
     190,   191,   -49,   192,   -47,   -48,   -49,   130,   -48,   196,
     -47,   269,   102,   332,   -47,    78,   195,   298,   338,    85,
     341,   141,   275,   -46,   317,   196,   -74,   295,   102,   351,
     127,   238,   273,   144,   222,    86,   -46,    94,   102,   102,
     364,   365,   -46,   431,   105,   274,   -46,   177,   177,   109,
     373,   -39,   289,   -49,   -49,   -39,   238,   177,   238,   238,
     239,   196,   331,   111,   238,   196,   383,   -49,   440,    68,
     442,   443,   222,   -45,   336,   196,   445,   240,   112,   196,
     393,    81,   185,   116,   337,   239,   -45,   239,   239,   117,
     340,   224,   -45,   239,   196,   -15,   -45,   244,   196,   404,
     337,   241,   240,   284,   240,   240,   -38,   102,   242,   204,
     240,   350,   220,   -11,   185,   185,   209,   210,   -48,   211,
     243,   222,   244,   441,   244,   244,   241,   285,   241,   241,
     244,   -48,   214,   242,   241,   242,   242,   -48,   -37,   382,
     102,   242,   259,   -46,   204,   243,   237,   243,   243,   222,
     245,   432,   128,   243,   225,   314,   -46,   132,   204,   434,
      65,   246,   -46,   258,   261,   236,   -52,   -52,   -52,   328,
     204,   237,   133,   237,   237,   245,   227,   245,   245,   237,
     134,   -52,   -39,   245,   -45,   347,   246,   -52,   246,   246,
     236,   168,   236,   236,   246,   -44,   169,   -45,   236,   392,
     403,   170,   135,   -45,   171,   172,   106,   173,   -44,   222,
     222,   137,   251,   433,   -44,   174,   138,   175,   256,   185,
     176,   376,   136,   222,   139,   381,   -79,   -79,   -79,   -79,
     -79,   265,   145,   146,   147,   386,   148,   270,   185,   391,
     153,   157,   261,   -79,   -51,   -51,   -51,   154,   155,   -79,
     281,   186,   -73,   -79,   397,   158,   286,   185,   402,   -51,
     -42,   187,   159,   -44,   247,   -51,   188,   164,   310,   220,
     252,   189,   253,   -42,   190,   191,   -44,   192,   205,   -42,
     -43,   221,   -44,   186,   186,   193,   -44,   194,   266,   129,
     195,   267,   204,   -43,    88,   220,   260,   -49,   -49,   -43,
     308,   185,   185,   185,   185,   185,   204,    89,   282,   220,
     -39,   -49,   283,   205,   311,   292,   204,   -49,   204,   204,
     204,   204,   204,   293,   300,   220,    92,   205,   -51,   -51,
     -51,   220,   220,   220,   220,   220,   220,   187,   301,   205,
     302,   303,   188,   -51,   185,   185,   -51,   189,   306,   309,
     190,   191,   312,   192,   185,   -48,   320,   321,   204,   334,
     -48,   193,   204,   194,   335,   140,   195,   353,   -48,   -45,
     187,   354,   204,   -48,   377,   188,   204,   361,   184,   387,
     189,   186,   -45,   190,   191,   -45,   192,   186,   186,   362,
     -48,   204,   367,   368,   193,   204,   194,   370,   313,   195,
     205,   369,   374,   -48,   220,   203,   205,   186,   219,   398,
     184,   184,   -70,   -70,   -70,   -70,   -70,    74,   378,   221,
     379,   413,    26,   384,   388,   221,   186,    27,   389,   -70,
      30,    31,   126,    32,   187,   -70,   249,   220,   221,   188,
     203,    37,   304,    38,   189,   394,    39,   190,   191,   395,
     192,    90,   -46,   399,   203,   400,   408,   409,   193,   410,
     194,   205,   327,   195,   221,   -46,   203,   -48,   -46,   411,
     186,   186,   186,   186,   186,   205,   412,   -38,   221,   -41,
     -48,     2,     3,     4,     5,   205,   405,   205,   205,   205,
     205,   205,   -37,   414,   221,   -80,   -80,   -80,   -80,   -80,
     221,   221,   221,   221,   221,   221,   415,   -79,   -79,   -79,
     -79,   -79,   -80,   186,   186,   184,   -42,   416,   -80,   183,
     -44,   417,   -80,   186,   -79,   -43,   418,   205,   419,   -42,
     -79,   205,   420,   -44,   184,   -42,   -44,   -48,   -43,   -42,
     421,   205,   -42,   423,   -43,   205,   202,   424,   -43,   218,
     -48,   183,   183,   184,    74,   -42,   406,   425,   -42,    26,
     205,   187,   426,   -41,   205,   219,   188,    30,    31,   428,
      32,   189,   125,   221,   190,   191,   429,   192,    37,    13,
      38,   202,   430,    39,   437,   193,   438,   194,   203,   346,
     195,   219,   439,   444,     0,   202,     0,   184,   184,   184,
     184,   326,   203,    95,     0,   219,   221,   202,     0,     0,
       0,     0,   203,     0,   203,   203,   203,   345,   203,     0,
       0,   219,   -81,   -81,   -81,   -81,   -81,   219,   219,   219,
     358,   219,   219,     0,   -54,   278,   -54,   -54,   -54,   -81,
     184,   184,     0,     0,     0,   -81,   182,     0,     0,   -81,
     184,   -54,     0,     0,   203,     0,   183,   -54,   203,     0,
       0,   -54,     0,   -56,   -56,   -56,   -56,   -56,   203,   -41,
     -48,     0,   203,   201,     0,   183,   217,     0,   182,   182,
     -56,     0,   -41,   -48,     0,     0,   -56,   203,   -41,   427,
     -56,   203,   -41,     0,   183,     0,   -48,   168,   124,     0,
     219,   277,   169,   -52,   -52,   -52,   218,   170,   201,   -48,
     171,   172,   363,   173,     0,   435,     0,   -41,   -52,     0,
       0,   174,   201,   175,   -52,     0,   176,     0,   -52,   202,
     -41,   -43,   218,   219,   201,     0,   -41,     0,   183,   183,
     183,   325,     0,   202,   -43,   -41,   218,   -43,   -57,   -57,
     -57,   -57,   -57,   202,     0,   202,   202,   344,   -41,   202,
     181,   -41,   218,     0,     0,   -57,     0,     0,   218,   218,
     357,   -57,   218,   218,     1,   -57,     0,     2,     3,     4,
       5,   183,   183,   182,     0,     0,     0,   200,     0,     0,
     216,   183,   181,   181,     0,   202,     0,     0,     0,   202,
       0,   206,   182,     0,     0,     0,   207,     0,     0,   202,
       0,   123,     0,   202,   209,   210,     0,   211,     0,     0,
       0,   182,   200,     0,     0,   212,     0,   213,   202,   187,
     214,     0,   202,   217,   188,     0,   200,     0,     0,   189,
       0,   218,   190,   191,     0,   192,     0,     0,   200,     0,
       0,     0,     0,   193,     0,   194,   201,   375,   195,   217,
     -70,   -70,   -70,   -70,   -70,   182,   182,   324,     0,     0,
     201,     0,     0,   217,   218,     0,     0,   -70,     0,     0,
     201,     0,   201,   343,   279,     0,   201,     0,     0,   217,
     -70,   -70,   -70,   -70,   -70,   217,   356,   181,     0,   217,
     217,   180,   -79,   -79,   -79,   -79,   -79,   -70,   182,   182,
       0,     0,     0,   -70,   263,     0,   181,   -70,   182,   -79,
       0,     0,   201,     0,     0,   168,   201,     0,   199,     0,
     169,   215,   187,   180,   180,   181,   201,   188,   171,   172,
     201,   173,   189,     0,     0,   190,   191,   216,   192,   174,
     120,   175,     0,     0,   176,   201,   193,     0,   194,   201,
     380,   195,   187,   199,     0,   178,     0,   188,   217,     0,
     200,     0,   189,   216,     0,   190,   191,   199,   192,   181,
     323,     0,     0,     0,   200,     0,   193,   216,   194,   199,
     385,   195,   197,     0,   200,   103,   342,   178,   178,     0,
     200,   217,   187,   216,     0,     0,     0,   188,     0,   355,
       0,     0,   189,   216,   216,   190,   191,     0,   192,    91,
     -50,   -50,   181,   181,     0,     0,   193,   197,   194,     0,
     390,   195,   181,     0,   -50,     0,   200,   -50,   180,     0,
     200,   197,   187,     0,     0,     0,     0,   188,     0,     0,
     200,     0,   189,   197,   200,   190,   191,   180,   192,     0,
       0,   -70,   -70,   -70,   -70,   -70,   193,   187,   194,   200,
     396,   195,   188,   200,     0,     0,   180,   189,   -70,     0,
     190,   191,   216,   192,   168,   348,     0,     0,   297,   169,
       0,   193,     0,   194,   170,   401,   195,   171,   172,     0,
     173,     0,   178,     0,     0,     0,   179,     0,   174,     0,
     175,   199,     0,   176,   215,   216,    91,   -49,   -49,     0,
     322,   178,     0,     0,     0,   199,     0,     0,   215,     0,
       0,   -49,    25,   198,   -49,   339,   104,    26,   179,   179,
     178,   199,    27,     0,   215,    30,    31,     0,    32,   -71,
     -71,   -71,   -71,   -71,   215,   215,    37,     0,    38,     0,
       0,    39,     0,   180,   180,     0,   -71,     0,   198,     0,
       0,     0,   -71,   180,   206,   197,   -71,   199,   316,   207,
       0,   199,   198,     0,   208,     0,     0,   209,   210,   197,
     211,   199,   330,     0,   198,   199,     0,     0,   212,     0,
     213,     0,     0,   214,     0,   197,     0,     0,   349,   290,
     199,   -52,   -52,   -52,   199,     0,     0,     0,   359,   360,
     187,     0,     0,   215,     0,   188,   -52,   178,   178,     0,
     189,     0,     0,   190,   191,     0,   192,   178,     0,     0,
       0,   197,     0,   179,   193,   197,   194,    74,     0,   195,
       0,     0,    26,   187,     0,   197,   215,    27,   188,   197,
      30,    31,   179,    32,     0,     0,   190,   191,     0,   192,
     371,    37,     0,    38,   197,   169,    39,   193,   197,   194,
     170,   179,   195,   171,   172,     0,   173,   407,   -70,   -70,
     -70,   -70,   -70,     0,   174,     0,   175,     0,     0,   176,
     -80,   -80,   -80,   -80,   -80,   -70,     0,     0,     0,     0,
       0,   -70,   329,     0,     0,   -70,   198,   -80,     0,   104,
     422,     0,   -14,   -80,   -14,   -14,   -14,   -14,   -14,   -14,
     198,     0,     0,   104,   -14,   -14,   -14,   -14,   -14,     0,
     -14,   -14,   -14,     0,   -14,   -14,   198,   -14,   -14,   104,
     -14,     0,     0,   -14,   -14,   -14,     0,     0,     0,   104,
     104,     0,   -59,   -59,   -59,   -59,   -59,     0,   179,   179,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,   179,   -59,
       0,     0,   198,     0,     0,   -59,   198,   -70,   290,   -59,
     -51,   -51,   -51,   -70,   333,     0,   198,   -70,     0,     0,
     198,     0,     0,     0,     0,   -51,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,     0,   198,     0,     0,   -23,   198,
     -23,   -23,   -23,   -23,   -23,   -23,   -79,     0,   104,   -79,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,     0,   -23,   -23,     0,   -23,     0,     0,   -23,
     -23,   -23,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   104,     0,     0,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,
     -25,     0,     0,   -25,   -25,   -25,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,
       0,   -20,   -20,     0,   -20,     0,     0,   -20,   -20,   -20,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,
       0,     0,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,
     -17,     0,   -17,   -17,     0,   -17,   -17,     0,   -17,     0,
       0,   -17,   -17,   -17,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,     0,     0,   -18,   -18,   -18,   -18,
     -18,     0,   -18,   -18,   -18,     0,   -18,   -18,     0,   -18,
     -18,     0,   -18,     0,     0,   -18,   -18,   -18,   -19,     0,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,     0,
     -19,   -19,     0,   -19,   -19,     0,   -19,     0,     0,   -19,
     -19,   -19,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,     0,     0,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,     0,   -22,   -22,     0,   -22,   -22,     0,
     -22,     0,     0,   -22,   -22,   -22,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,
       0,   -21,   -21,     0,   -21,     0,     0,   -21,   -21,   -21,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,     0,   -32,   -32,     0,   -32,   -32,     0,   -32,     0,
       0,   -32,   -32,   -32,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,   -24,
     -24,     0,   -24,     0,     0,   -24,   -24,   -24,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,
     -36,   -36,     0,   -36,   -36,     0,   -36,     0,     0,   -36,
     -36,   -36,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,
     -33,     0,     0,   -33,   -33,   -33,   -13,     0,   -13,   -13,
     -13,   -13,   -13,   -13,     0,     0,     0,     0,   -13,   -13,
     -13,   -13,   -13,     0,   -13,   -13,   -13,     0,   -13,   -13,
       0,   -13,   -13,     0,   -13,     0,     0,   -13,   -13,   -13,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
      -8,     0,    -8,    -8,     0,    -8,    -8,     0,    -8,     0,
       0,    -8,    -8,    -8,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,   -26,
     -26,     0,   -26,     0,     0,   -26,   -26,   -26,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,
     -27,   -27,     0,   -27,   -27,     0,   -27,     0,     0,   -27,
     -27,   -27,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,     0,     0,   -28,   -28,   -28,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   436,     0,   -30,   -30,
       0,   -30,   -30,     0,   -30,     0,     0,   -30,   -30,   -30,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,     0,   -31,   -31,     0,   -31,     0,
       0,   -31,   -31,   -31,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,     0,   -35,
     -35,     0,   -35,     0,     0,   -35,   -35,   -35,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,     0,     0,   -34,
     -34,   -34,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,     0,
     -29,     0,     0,   -29,   -29,   -29,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,     0,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,     0,     0,   -23,   -23,
       0,   -23,   -23,     0,   -23,     0,     0,   -23,   -23,   -23,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,
       0,     0,   -25,   -25,     0,   -25,   -25,     0,   -25,     0,
       0,   -25,   -25,   -25,   166,     0,    25,     2,     3,     4,
       5,    26,     0,     0,     0,     0,    27,    28,    29,    30,
      31,     0,    32,    33,     0,     0,    34,    35,     0,    36,
      37,     0,    38,     0,     0,    39,   -16,   167,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,
     -20,   -20,     0,   -20,   -20,     0,   -20,     0,     0,   -20,
     -20,   -20,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,     0,     0,   -17,   -17,     0,   -17,   -17,     0,
     -17,     0,     0,   -17,   -17,   -17,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,     0,     0,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,     0,     0,   -18,   -18,
       0,   -18,   -18,     0,   -18,     0,     0,   -18,   -18,   -18,
     -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
       0,     0,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,
       0,     0,   -19,   -19,     0,   -19,   -19,     0,   -19,     0,
       0,   -19,   -19,   -19,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,     0,     0,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,     0,     0,   -22,   -22,     0,   -22,
     -22,     0,   -22,     0,     0,   -22,   -22,   -22,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,     0,
     -21,   -21,     0,   -21,   -21,     0,   -21,     0,     0,   -21,
     -21,   -21,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,     0,     0,   -32,   -32,     0,   -32,   -32,     0,
     -32,     0,     0,   -32,   -32,   -32,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,     0,     0,   -24,   -24,
       0,   -24,   -24,     0,   -24,     0,     0,   -24,   -24,   -24,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,   -36,   -36,     0,   -36,   -36,     0,   -36,     0,
       0,   -36,   -36,   -36,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,     0,     0,   -33,   -33,     0,   -33,
     -33,     0,   -33,     0,     0,   -33,   -33,   -33,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,
     -26,   -26,     0,   -26,   -26,     0,   -26,     0,     0,   -26,
     -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,     0,
     -27,     0,     0,   -27,   -27,   -27,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,   -28,   -28,
       0,   -28,   -28,     0,   -28,     0,     0,   -28,   -28,   -28,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
       0,     0,   -31,   -31,     0,   -31,   -31,     0,   -31,     0,
       0,   -31,   -31,   -31,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,     0,     0,   -35,   -35,     0,   -35,
     -35,     0,   -35,     0,     0,   -35,   -35,   -35,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,     0,     0,   -34,
     -34,   -34,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,     0,     0,   -29,   -29,     0,   -29,   -29,     0,
     -29,     0,     0,   -29,   -29,   -29,   -14,     0,   -14,   -14,
     -14,   -14,   -14,   -14,     0,     0,     0,     0,   -14,   -14,
     -14,   -14,   -14,     0,   -14,   -14,     0,     0,   -14,   -14,
       0,   -14,   -14,     0,   -14,     0,     0,   -14,   -14,   -14,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
       0,     0,    -8,    -8,     0,    -8,    -8,     0,    -8,     0,
       0,    -8,    -8,    -8,   -13,     0,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,     0,     0,   -13,   -13,   -13,   -13,
     -13,     0,   -13,   -13,     0,     0,   -13,   -13,     0,   -13,
     -13,     0,   -13,     0,     0,   -13,   -13,   -13,   166,     0,
      25,     2,     3,     4,     5,    26,     0,     0,     0,     0,
      27,    28,    29,    30,    31,     0,    32,    33,     0,     0,
      34,    35,     0,    36,    37,     0,    38,     0,     0,    39,
     228,   167,    25,     2,     3,     4,     5,    26,     0,     0,
       0,     0,    27,   229,   230,    30,    31,     0,    32,   231,
       0,     0,   232,   233,     0,   234,    37,     0,    38,     0,
       0,    39,     0,   235,   -58,   -58,   -58,   -58,   -58,   -63,
     -63,   -63,   -63,   -63,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -58,     0,     0,     0,     0,   -63,   -58,     0,     0,
       0,   -58,   -63,   -72,     0,     0,   -63,     0,     0,   -72,
       0,     0,     0,   -72,   -53,   278,   -53,   -53,   -53,   -55,
     -55,   -55,   -55,   -55,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -53,     0,     0,     0,     0,   -55,   -53,     0,     0,
       0,   -53,   -55,   -60,     0,     0,   -55,     0,     0,   -60,
       0,     0,     0,   -60,   -61,   -61,   -61,   -61,   -61,   -66,
     -66,   -66,   -66,   -66,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -61,     0,     0,     0,     0,   -66,   -61,     0,     0,
       0,   -61,   -66,   -67,     0,     0,   -66,     0,     0,   -67,
       0,     0,     0,   -67,   -65,   -65,   -65,   -65,   -65,   -62,
     -62,   -62,   -62,   -62,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -65,     0,     0,     0,     0,   -62,   -65,     0,     0,
       0,   -65,   -62,   -64,     0,     0,   -62,     0,     0,   -64,
       0,     0,     0,   -64,   -68,   -68,   -68,   -68,   -68,   -69,
     -69,   -69,   -69,   -69,     0,     0,   277,     0,   -51,   -51,
     -51,   -68,     0,     0,     0,     0,   -69,   -68,     0,     0,
       0,   -68,   -69,   -51,     0,     0,   -69,     0,     0,   -51,
       0,     0,     0,   -51,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,   -70,     0,    65,   -70,    66,     0,
       0,     0,   311,   -70,   249,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,   -70,     0,     0,   -70,     0,   -70,     0,   101,
     -70,     0,   -70,     0,    66,   -70,     0,     0,     0,   115,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,   -70,     0,     0,
       0,     0,   -70,   -70,   315,     0,     0,   -70,   -70,   319,
       0,     0,     0,     0,   352,   -81,   -81,   -81,   -81,   -81,
     -54,   262,   -54,   -54,   -54,   -56,   -56,   -56,   -56,   -56,
       0,     0,   -81,     0,     0,     0,     0,   -54,   -81,     0,
      -7,    -7,   -56,   -54,    -7,    -7,    -7,    -7,   -56,   -57,
     -57,   -57,   -57,   -57,   -71,   -71,   -71,   -71,   -71,   -59,
     -59,   -59,   -59,   -59,     0,     0,   -57,     0,     0,     0,
       0,   -71,   -57,     0,    -2,     1,   -59,   -71,     2,     3,
       4,     5,   -59,   -58,   -58,   -58,   -58,   -58,   -63,   -63,
     -63,   -63,   -63,   -72,   -72,   -72,   -72,   -72,     0,     0,
     -58,     0,     0,     0,     0,   -63,   -58,     0,    -4,    -4,
     -72,   -63,    -4,    -4,    -4,    -4,   -72,   -53,   262,   -53,
     -53,   -53,   -55,   -55,   -55,   -55,   -55,   -60,   -60,   -60,
     -60,   -60,     0,     0,   -53,     0,     0,     0,     0,   -55,
     -53,     0,    -6,    -6,   -60,   -55,    -6,    -6,    -6,    -6,
     -60,   -61,   -61,   -61,   -61,   -61,   -66,   -66,   -66,   -66,
     -66,   -67,   -67,   -67,   -67,   -67,     0,     0,   -61,     0,
       0,     0,     0,   -66,   -61,     0,    -5,    -5,   -67,   -66,
      -5,    -5,    -5,    -5,   -67,   -65,   -65,   -65,   -65,   -65,
     -62,   -62,   -62,   -62,   -62,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -65,     0,     0,     0,     0,   -62,   -65,     0,
      -3,    -3,   -64,   -62,    -3,    -3,    -3,    -3,   -64,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -80,
     -80,   -80,   -80,   -80,     0,     0,   -68,     0,     0,     0,
       0,   -69,   -68,     0,     0,     0,   -80,   -69,     0,   -80,
     -81,   -81,   -81,   -81,   -81,   -54,    93,   -54,   -54,   -54,
     -56,   -56,   -56,   -56,   -56,     0,     0,   -81,     0,     0,
     -81,     0,   -54,     0,     0,   -54,     0,   -56,     0,     0,
     -56,   -57,   -57,   -57,   -57,   -57,   -71,   -71,   -71,   -71,
     -71,   -59,   -59,   -59,   -59,   -59,     0,     0,   -57,     0,
       0,   -57,     0,   -71,     0,     0,   -71,     0,   -59,     0,
       0,   -59,   -58,   -58,   -58,   -58,   -58,   -63,   -63,   -63,
     -63,   -63,   -72,   -72,   -72,   -72,   -72,     0,     0,   -58,
       0,     0,   -58,     0,   -63,     0,     0,   -63,     0,   -72,
       0,     0,   -72,   -53,    93,   -53,   -53,   -53,   -55,   -55,
     -55,   -55,   -55,   -60,   -60,   -60,   -60,   -60,     0,     0,
     -53,     0,     0,   -53,     0,   -55,     0,     0,   -55,     0,
     -60,     0,     0,   -60,   -61,   -61,   -61,   -61,   -61,   -66,
     -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -61,     0,     0,   -61,     0,   -66,     0,     0,   -66,
       0,   -67,     0,     0,   -67,   -65,   -65,   -65,   -65,   -65,
     -62,   -62,   -62,   -62,   -62,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -65,     0,     0,   -65,     0,   -62,     0,     0,
     -62,     0,   -64,     0,     0,   -64,   -68,   -68,   -68,   -68,
     -68,   -69,   -69,   -69,   -69,   -69,   -80,   -80,   -80,   -80,
     -80,     0,     0,   -68,     0,     0,   -68,     0,   -69,     0,
       0,   -69,     0,   -80,   -81,   -81,   -81,   -81,   -81,   -54,
     291,   -54,   -54,   -54,   -56,   -56,   -56,   -56,   -56,     0,
       0,   -81,     0,    -8,    -8,     0,   -54,    -8,    -8,    -8,
      -8,   -56,   -57,   -57,   -57,   -57,   -57,   -71,   -71,   -71,
     -71,   -71,   -59,   -59,   -59,   -59,   -59,     0,     0,   -57,
       0,   -14,   -14,     0,   -71,   -14,   -14,   -14,   -14,   -59,
     -58,   -58,   -58,   -58,   -58,   -63,   -63,   -63,   -63,   -63,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -58,     0,   -10,
     -10,     0,   -63,   -10,   -10,   -10,   -10,   -72,   -53,   291,
     -53,   -53,   -53,   -55,   -55,   -55,   -55,   -55,   -60,   -60,
     -60,   -60,   -60,     0,     0,   -53,     0,    -9,    -9,     0,
     -55,    -9,    -9,    -9,    -9,   -60,   -61,   -61,   -61,   -61,
     -61,   -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,
     -67,     0,     0,   -61,     0,   -13,   -13,     0,   -66,   -13,
     -13,   -13,   -13,   -67,   -65,   -65,   -65,   -65,   -65,   -62,
     -62,   -62,   -62,   -62,   -64,   -64,   -64,   -64,   -64,     0,
       0,   -65,     0,     0,     0,     0,   -62,     0,     0,     0,
       0,   -64,   -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,   -68,
       0,     0,     0,     0,   -69
};

static const yytype_int16 yycheck[] =
{
       0,    65,    17,    43,     0,   135,     1,     7,    23,    73,
      21,     7,     3,     3,    31,     3,    16,   135,     4,     5,
       6,     7,    11,    12,    35,    13,    16,    17,    39,    19,
      11,    12,    43,     0,   135,    39,    25,    27,   156,    34,
     158,   159,    32,     3,    25,    31,   164,    28,    10,    11,
      12,   135,    11,    12,    65,    25,    16,    17,    28,    19,
      71,    72,    66,    25,    64,    69,    25,    71,    72,    31,
       3,   135,    32,    35,    78,   135,     3,     3,    25,     3,
      13,     8,   135,    87,    31,    89,    13,    13,    35,    16,
      17,    12,    19,   157,   135,    31,    12,   101,     3,    35,
      27,    28,    29,     3,    25,    32,    10,    11,    12,    25,
      31,   115,   116,     3,    35,     3,    16,    17,    28,    19,
     135,    25,    32,   127,   135,   136,     3,   167,    16,    17,
      12,    19,    32,   137,     8,   135,    10,    11,    12,   135,
      25,     3,     3,    25,    32,   156,    31,   158,   159,    31,
       3,    25,    13,   164,    28,     1,   167,     3,     4,     5,
       6,     7,     8,    16,    17,   176,    19,    13,    14,    15,
      16,    17,   176,    19,    20,    21,     3,    23,    24,    32,
      26,    27,    25,    29,   195,    28,    32,    33,    34,    16,
      17,   195,    19,    11,    12,   235,    25,    10,    11,    12,
      27,     3,    31,   214,    32,    32,     8,    25,    32,     3,
     214,    13,    25,    31,    16,    17,     3,    19,    31,    13,
      32,   225,   233,   227,   235,    27,    13,    29,    25,    31,
      32,    10,    11,    12,    31,    33,    32,     3,    35,   303,
      11,    12,    12,    32,    32,   249,    25,   311,   252,   253,
      16,    17,    31,    19,    25,    25,    35,   101,    28,   263,
      31,    27,   266,   267,    35,    32,    32,     3,   272,    28,
     274,   115,    11,    12,     3,   279,    31,    13,   282,   283,
      35,   411,    12,   127,    13,    28,    25,     3,   292,   293,
     301,   302,    31,   411,     3,    25,    35,   301,   302,     3,
     311,    31,    10,    11,    12,    35,   436,   311,   438,   439,
     411,   315,     3,    28,   444,   319,   320,    25,   436,    26,
     438,   439,    13,    12,     3,   329,   444,   411,     3,   333,
     334,    38,    39,    32,    13,   436,    25,   438,   439,    31,
       3,    28,    31,   444,   348,    33,    35,   411,   352,   353,
      13,   411,   436,     3,   438,   439,    28,   361,   411,    66,
     444,     3,    69,    31,    71,    72,    16,    17,    12,    19,
     411,    13,   436,   437,   438,   439,   436,    27,   438,   439,
     444,    25,    32,   436,   444,   438,   439,    31,    28,     3,
     394,   444,    11,    12,   101,   436,   411,   438,   439,    13,
     411,   412,    31,   444,    25,   249,    25,    31,   115,   413,
      30,   411,    31,    12,     8,   411,    10,    11,    12,   263,
     127,   436,    31,   438,   439,   436,    25,   438,   439,   444,
      31,    25,    31,   444,    12,   279,   436,    31,   438,   439,
     436,     3,   438,   439,   444,    12,     8,    25,   444,     3,
       3,    13,    31,    31,    16,    17,    18,    19,    25,    13,
      13,    25,   169,     3,    31,    27,    31,    29,   175,   176,
      32,   315,    28,    13,    31,   319,     8,     9,    10,    11,
      12,   188,    31,    28,    28,   329,    28,   194,   195,   333,
      31,    28,     8,    25,    10,    11,    12,    31,    31,    31,
     207,    39,    31,    35,   348,    31,   213,   214,   352,    25,
      12,     3,    31,    12,     3,    31,     8,    31,     3,   226,
      32,    13,    32,    25,    16,    17,    25,    19,    66,    31,
      12,    69,    31,    71,    72,    27,    35,    29,    32,    31,
      32,    32,   249,    25,    12,   252,    10,    11,    12,    31,
      28,   258,   259,   260,   261,   262,   263,    25,    32,   266,
      28,    25,    32,   101,    30,    32,   273,    31,   275,   276,
     277,   278,   279,    32,    32,   282,     8,   115,    10,    11,
      12,   288,   289,   290,   291,   292,   293,     3,    32,   127,
      32,    32,     8,    25,   301,   302,    28,    13,    32,    28,
      16,    17,    33,    19,   311,    12,    32,    31,   315,    32,
      12,    27,   319,    29,    31,    31,    32,    32,    25,    12,
       3,    31,   329,    25,    31,     8,   333,    32,    39,    31,
      13,   169,    25,    16,    17,    28,    19,   175,   176,     3,
      12,   348,    28,     3,    27,   352,    29,    28,    31,    32,
     188,    33,    31,    25,   361,    66,   194,   195,    69,    31,
      71,    72,     8,     9,    10,    11,    12,     3,    31,   207,
      31,    25,     8,    31,    31,   213,   214,    13,    31,    25,
      16,    17,    93,    19,     3,    31,    32,   394,   226,     8,
     101,    27,    28,    29,    13,    32,    32,    16,    17,    31,
      19,    11,    12,    31,   115,    31,    31,    31,    27,    31,
      29,   249,    31,    32,   252,    25,   127,    12,    28,    31,
     258,   259,   260,   261,   262,   263,    28,    31,   266,    25,
      25,     4,     5,     6,     7,   273,    31,   275,   276,   277,
     278,   279,    31,    31,   282,     8,     9,    10,    11,    12,
     288,   289,   290,   291,   292,   293,    31,     8,     9,    10,
      11,    12,    25,   301,   302,   176,    12,    31,    31,    39,
      12,    31,    35,   311,    25,    12,    31,   315,    31,    25,
      31,   319,    31,    25,   195,    31,    28,    12,    25,    35,
      31,   329,    12,    31,    31,   333,    66,    31,    35,    69,
      25,    71,    72,   214,     3,    25,    31,    31,    28,     8,
     348,     3,    31,    31,   352,   226,     8,    16,    17,    28,
      19,    13,    92,   361,    16,    17,    28,    19,    27,     7,
      29,   101,    28,    32,    28,    27,    31,    29,   249,    31,
      32,   252,    31,    31,    -1,   115,    -1,   258,   259,   260,
     261,   262,   263,    64,    -1,   266,   394,   127,    -1,    -1,
      -1,    -1,   273,    -1,   275,   276,   277,   278,   279,    -1,
      -1,   282,     8,     9,    10,    11,    12,   288,   289,   290,
     291,   292,   293,    -1,     8,     9,    10,    11,    12,    25,
     301,   302,    -1,    -1,    -1,    31,    39,    -1,    -1,    35,
     311,    25,    -1,    -1,   315,    -1,   176,    31,   319,    -1,
      -1,    35,    -1,     8,     9,    10,    11,    12,   329,    12,
      12,    -1,   333,    66,    -1,   195,    69,    -1,    71,    72,
      25,    -1,    25,    25,    -1,    -1,    31,   348,    31,    31,
      35,   352,    35,    -1,   214,    -1,    12,     3,    91,    -1,
     361,     8,     8,    10,    11,    12,   226,    13,   101,    25,
      16,    17,    18,    19,    -1,    31,    -1,    12,    25,    -1,
      -1,    27,   115,    29,    31,    -1,    32,    -1,    35,   249,
      25,    12,   252,   394,   127,    -1,    31,    -1,   258,   259,
     260,   261,    -1,   263,    25,    12,   266,    28,     8,     9,
      10,    11,    12,   273,    -1,   275,   276,   277,    25,   279,
      39,    28,   282,    -1,    -1,    25,    -1,    -1,   288,   289,
     290,    31,   292,   293,     1,    35,    -1,     4,     5,     6,
       7,   301,   302,   176,    -1,    -1,    -1,    66,    -1,    -1,
      69,   311,    71,    72,    -1,   315,    -1,    -1,    -1,   319,
      -1,     3,   195,    -1,    -1,    -1,     8,    -1,    -1,   329,
      -1,    90,    -1,   333,    16,    17,    -1,    19,    -1,    -1,
      -1,   214,   101,    -1,    -1,    27,    -1,    29,   348,     3,
      32,    -1,   352,   226,     8,    -1,   115,    -1,    -1,    13,
      -1,   361,    16,    17,    -1,    19,    -1,    -1,   127,    -1,
      -1,    -1,    -1,    27,    -1,    29,   249,    31,    32,   252,
       8,     9,    10,    11,    12,   258,   259,   260,    -1,    -1,
     263,    -1,    -1,   266,   394,    -1,    -1,    25,    -1,    -1,
     273,    -1,   275,   276,    32,    -1,   279,    -1,    -1,   282,
       8,     9,    10,    11,    12,   288,   289,   176,    -1,   292,
     293,    39,     8,     9,    10,    11,    12,    25,   301,   302,
      -1,    -1,    -1,    31,    32,    -1,   195,    35,   311,    25,
      -1,    -1,   315,    -1,    -1,     3,   319,    -1,    66,    -1,
       8,    69,     3,    71,    72,   214,   329,     8,    16,    17,
     333,    19,    13,    -1,    -1,    16,    17,   226,    19,    27,
      88,    29,    -1,    -1,    32,   348,    27,    -1,    29,   352,
      31,    32,     3,   101,    -1,    39,    -1,     8,   361,    -1,
     249,    -1,    13,   252,    -1,    16,    17,   115,    19,   258,
     259,    -1,    -1,    -1,   263,    -1,    27,   266,    29,   127,
      31,    32,    66,    -1,   273,    69,   275,    71,    72,    -1,
     279,   394,     3,   282,    -1,    -1,    -1,     8,    -1,   288,
      -1,    -1,    13,   292,   293,    16,    17,    -1,    19,    10,
      11,    12,   301,   302,    -1,    -1,    27,   101,    29,    -1,
      31,    32,   311,    -1,    25,    -1,   315,    28,   176,    -1,
     319,   115,     3,    -1,    -1,    -1,    -1,     8,    -1,    -1,
     329,    -1,    13,   127,   333,    16,    17,   195,    19,    -1,
      -1,     8,     9,    10,    11,    12,    27,     3,    29,   348,
      31,    32,     8,   352,    -1,    -1,   214,    13,    25,    -1,
      16,    17,   361,    19,     3,    32,    -1,    -1,   226,     8,
      -1,    27,    -1,    29,    13,    31,    32,    16,    17,    -1,
      19,    -1,   176,    -1,    -1,    -1,    39,    -1,    27,    -1,
      29,   249,    -1,    32,   252,   394,    10,    11,    12,    -1,
     258,   195,    -1,    -1,    -1,   263,    -1,    -1,   266,    -1,
      -1,    25,     3,    66,    28,   273,    69,     8,    71,    72,
     214,   279,    13,    -1,   282,    16,    17,    -1,    19,     8,
       9,    10,    11,    12,   292,   293,    27,    -1,    29,    -1,
      -1,    32,    -1,   301,   302,    -1,    25,    -1,   101,    -1,
      -1,    -1,    31,   311,     3,   249,    35,   315,   252,     8,
      -1,   319,   115,    -1,    13,    -1,    -1,    16,    17,   263,
      19,   329,   266,    -1,   127,   333,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    -1,   279,    -1,    -1,   282,     8,
     348,    10,    11,    12,   352,    -1,    -1,    -1,   292,   293,
       3,    -1,    -1,   361,    -1,     8,    25,   301,   302,    -1,
      13,    -1,    -1,    16,    17,    -1,    19,   311,    -1,    -1,
      -1,   315,    -1,   176,    27,   319,    29,     3,    -1,    32,
      -1,    -1,     8,     3,    -1,   329,   394,    13,     8,   333,
      16,    17,   195,    19,    -1,    -1,    16,    17,    -1,    19,
       3,    27,    -1,    29,   348,     8,    32,    27,   352,    29,
      13,   214,    32,    16,    17,    -1,    19,   361,     8,     9,
      10,    11,    12,    -1,    27,    -1,    29,    -1,    -1,    32,
       8,     9,    10,    11,    12,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,   249,    25,    -1,   252,
     394,    -1,     1,    31,     3,     4,     5,     6,     7,     8,
     263,    -1,    -1,   266,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,   279,    26,    27,   282,
      29,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,   292,
     293,    -1,     8,     9,    10,    11,    12,    -1,   301,   302,
       8,     9,    10,    11,    12,    -1,    -1,    -1,   311,    25,
      -1,    -1,   315,    -1,    -1,    31,   319,    25,     8,    35,
      10,    11,    12,    31,    32,    -1,   329,    35,    -1,    -1,
     333,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    -1,   348,    -1,    -1,     1,   352,
       3,     4,     5,     6,     7,     8,    25,    -1,   361,    28,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,   394,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    -1,    34,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,     8,     9,    10,    11,
      12,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,    -1,
      -1,    35,    31,    25,    -1,    -1,    35,    -1,    -1,    31,
      -1,    -1,    -1,    35,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,     8,     9,    10,    11,
      12,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,    -1,
      -1,    35,    31,    25,    -1,    -1,    35,    -1,    -1,    31,
      -1,    -1,    -1,    35,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,     8,     9,    10,    11,
      12,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,    -1,
      -1,    35,    31,    25,    -1,    -1,    35,    -1,    -1,    31,
      -1,    -1,    -1,    35,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,     8,     9,    10,    11,
      12,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,    -1,
      -1,    35,    31,    25,    -1,    -1,    35,    -1,    -1,    31,
      -1,    -1,    -1,    35,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,     8,    -1,    10,    11,
      12,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,    -1,
      -1,    35,    31,    25,    -1,    -1,    35,    -1,    -1,    31,
      -1,    -1,    -1,    35,     8,     9,    10,    11,    12,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    30,    25,    32,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,    32,
      28,    -1,    25,    -1,    32,    28,    -1,    -1,    -1,    32,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    25,    31,    32,    -1,    -1,    25,    31,    32,
      -1,    -1,    -1,    -1,    32,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,
       0,     1,    25,    31,     4,     5,     6,     7,    31,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    25,    31,    -1,     0,     1,    25,    31,     4,     5,
       6,     7,    31,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    25,    31,    -1,     0,     1,
      25,    31,     4,     5,     6,     7,    31,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    25,    -1,    -1,    -1,    -1,    25,
      31,    -1,     0,     1,    25,    31,     4,     5,     6,     7,
      31,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    25,    31,    -1,     0,     1,    25,    31,
       4,     5,     6,     7,    31,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,
       0,     1,    25,    31,     4,     5,     6,     7,    31,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    25,    31,    -1,    -1,    -1,    25,    31,    -1,    28,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,
      28,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,    -1,
      28,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    25,    -1,
      -1,    28,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,
      -1,    28,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    25,
      -1,    -1,    28,    -1,    25,    -1,    -1,    28,    -1,    25,
      -1,    -1,    28,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
      25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,    -1,
      25,    -1,    -1,    28,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,
      -1,    25,    -1,    -1,    28,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,    -1,
      28,    -1,    25,    -1,    -1,    28,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,
      -1,    28,    -1,    25,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    25,    -1,     0,     1,    -1,    25,     4,     5,     6,
       7,    25,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    25,
      -1,     0,     1,    -1,    25,     4,     5,     6,     7,    25,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    25,    -1,     0,
       1,    -1,    25,     4,     5,     6,     7,    25,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    25,    -1,     0,     1,    -1,
      25,     4,     5,     6,     7,    25,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    25,    -1,     0,     1,    -1,    25,     4,
       5,     6,     7,    25,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    25,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    37,    38,    39,    40,
      41,    64,     0,    39,     3,    28,    32,    31,    42,    64,
       1,    34,    43,    31,     3,     3,     8,    13,    14,    15,
      16,    17,    19,    20,    23,    24,    26,    27,    29,    32,
      40,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    64,    65,    43,    35,    30,    32,     3,    62,    32,
      32,    32,    32,    32,     3,    28,    53,    32,    32,     3,
      27,    62,    53,    33,    44,    28,    28,    25,    12,    25,
      11,    10,     8,     9,     3,    42,    52,    53,    31,    53,
      63,    32,    54,    55,    56,     3,    18,    53,    53,     3,
      52,    28,     3,     3,    54,    32,    32,    31,     3,    54,
      57,     3,    54,    58,    59,    60,    61,    35,    31,    31,
      63,    31,    31,    31,    31,    31,    28,    25,    31,    31,
      31,    63,     3,    54,    63,    31,    28,    28,    28,    45,
      53,     3,    54,    31,    31,    31,    21,    28,    31,    31,
      45,    52,    45,    45,    31,    45,     1,    34,     3,     8,
      13,    16,    17,    19,    27,    29,    32,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    65,     3,     8,    13,
      16,    17,    19,    27,    29,    32,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    65,     3,     8,    13,    16,
      17,    19,    27,    29,    32,    57,    58,    59,    60,    61,
      62,    65,    13,    13,    28,    25,    12,    25,     1,    14,
      15,    20,    23,    24,    26,    34,    40,    43,    46,    47,
      48,    49,    50,    51,    52,    53,    64,     3,    44,    32,
       3,    62,    32,    32,     3,    27,    62,    53,    12,    11,
      10,     8,     9,    32,     3,    62,    32,    32,     3,    27,
      62,    53,    25,    12,    25,    11,    10,     8,     9,    32,
       3,    62,    32,    32,     3,    27,    62,    53,    11,    10,
       8,     9,    32,    32,     3,    13,    54,    57,     3,    54,
      32,    32,    32,    32,    28,    53,    32,    44,    28,    28,
       3,    30,    33,    31,    63,    32,    55,     3,    54,    32,
      32,    31,    57,    58,    59,    60,    61,    31,    63,    32,
      55,     3,    54,    32,    32,    31,     3,    13,    54,    57,
       3,    54,    58,    59,    60,    61,    31,    63,    32,    55,
       3,    54,    32,    32,    31,    58,    59,    60,    61,    55,
      55,    32,     3,    18,    53,    53,    52,    28,     3,    33,
      28,     3,    52,    53,    31,    31,    63,    31,    31,    31,
      31,    63,     3,    54,    31,    31,    63,    31,    31,    31,
      31,    63,     3,    54,    32,    31,    31,    63,    31,    31,
      31,    31,    63,     3,    54,    31,    31,    55,    31,    31,
      31,    31,    28,    25,    31,    31,    31,    31,    31,    31,
      31,    31,    55,    31,    31,    31,    31,    31,    28,    28,
      28,    45,    53,     3,    54,    31,    21,    28,    31,    31,
      45,    52,    45,    45,    31,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    40,    41,
      41,    42,    42,    43,    43,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    46,    47,
      48,    48,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    54,    55,    55,    55,    55,    56,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    62,    63,    63,    64,    64,    64,    64,    65,
      65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     5,     5,     9,
       5,     7,     2,     3,     7,     7,     2,     3,     3,     1,
       1,     4,     3,     3,     3,     3,     3,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     2,     2,
       4,     4,     5,     3,     5,     4,     4,     4,     5,     5,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 96 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2434 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 104 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2445 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 110 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2455 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 117 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2465 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 122 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2475 "syntax.tab.c"
    break;

  case 7: /* declaration: error  */
#line 127 "syntax.y"
          {}
#line 2481 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 130 "syntax.y"
              {
    Simbolo s = criarSimbolo((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 2500 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 146 "syntax.y"
                                            {
    Simbolo s = criarSimbolo((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo);
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
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2522 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 163 "syntax.y"
                                  {
    Simbolo s = criarSimbolo((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo);
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
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 2);
    (yyvsp[-4].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2543 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 181 "syntax.y"
                         {
   Simbolo s = criarSimbolo((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-3].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyvsp[-3].nodo)->proximo = (yyvsp[0].nodo);
 }
#line 2563 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 196 "syntax.y"
           {
    Simbolo s = criarSimbolo((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
 }
#line 2582 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 212 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "brackets_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2592 "syntax.tab.c"
    break;

  case 14: /* brackets_stmt: error  */
#line 217 "syntax.y"
          {}
#line 2598 "syntax.tab.c"
    break;

  case 15: /* stmts: stmt stmts  */
#line 220 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2609 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt  */
#line 226 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2619 "syntax.tab.c"
    break;

  case 17: /* stmt: for_stmt  */
#line 233 "syntax.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2629 "syntax.tab.c"
    break;

  case 18: /* stmt: if_else_stmt  */
#line 238 "syntax.y"
                 {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2639 "syntax.tab.c"
    break;

  case 19: /* stmt: return_stmt  */
#line 243 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2649 "syntax.tab.c"
    break;

  case 20: /* stmt: io_stmt  */
#line 248 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2659 "syntax.tab.c"
    break;

  case 21: /* stmt: exp_stmt  */
#line 253 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2669 "syntax.tab.c"
    break;

  case 22: /* stmt: set_stmt  */
#line 258 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2679 "syntax.tab.c"
    break;

  case 23: /* stmt: var_declaration  */
#line 263 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2689 "syntax.tab.c"
    break;

  case 24: /* stmt: assignment ';'  */
#line 268 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2699 "syntax.tab.c"
    break;

  case 25: /* stmt: brackets_stmt  */
#line 273 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2709 "syntax.tab.c"
    break;

  case 26: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 280 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 2719 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 285 "syntax.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 2729 "syntax.tab.c"
    break;

  case 28: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 290 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2739 "syntax.tab.c"
    break;

  case 29: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 297 "syntax.y"
                                                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2752 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 307 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2763 "syntax.tab.c"
    break;

  case 31: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 313 "syntax.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2775 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN ';'  */
#line 322 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
  }
#line 2784 "syntax.tab.c"
    break;

  case 33: /* return_stmt: RETURN exp ';'  */
#line 326 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2794 "syntax.tab.c"
    break;

  case 34: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 333 "syntax.y"
                                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2806 "syntax.tab.c"
    break;

  case 35: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 340 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2817 "syntax.tab.c"
    break;

  case 36: /* exp_stmt: exp ';'  */
#line 348 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2827 "syntax.tab.c"
    break;

  case 37: /* assignment: ID '=' exp  */
#line 355 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2838 "syntax.tab.c"
    break;

  case 38: /* assignment: ID '=' assignment  */
#line 361 "syntax.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2849 "syntax.tab.c"
    break;

  case 39: /* exp: or_exp  */
#line 369 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2859 "syntax.tab.c"
    break;

  case 40: /* exp: set_exp  */
#line 374 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2869 "syntax.tab.c"
    break;

  case 41: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 381 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2879 "syntax.tab.c"
    break;

  case 42: /* set_in_exp: or_exp INFIX_OP ID  */
#line 388 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 2890 "syntax.tab.c"
    break;

  case 43: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 394 "syntax.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2901 "syntax.tab.c"
    break;

  case 44: /* set_in_exp: set_exp INFIX_OP set_exp  */
#line 400 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2912 "syntax.tab.c"
    break;

  case 45: /* set_in_exp: set_exp INFIX_OP ID  */
#line 406 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 2923 "syntax.tab.c"
    break;

  case 46: /* or_exp: or_exp OR and_exp  */
#line 414 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2934 "syntax.tab.c"
    break;

  case 47: /* or_exp: and_exp  */
#line 420 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2944 "syntax.tab.c"
    break;

  case 48: /* or_exp: set_in_exp  */
#line 425 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2954 "syntax.tab.c"
    break;

  case 49: /* and_exp: and_exp AND relational_exp  */
#line 432 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2965 "syntax.tab.c"
    break;

  case 50: /* and_exp: relational_exp  */
#line 438 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2975 "syntax.tab.c"
    break;

  case 51: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 445 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2986 "syntax.tab.c"
    break;

  case 52: /* relational_exp: sum_exp  */
#line 451 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2996 "syntax.tab.c"
    break;

  case 53: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 458 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3007 "syntax.tab.c"
    break;

  case 54: /* sum_exp: mul_exp  */
#line 464 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3017 "syntax.tab.c"
    break;

  case 55: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 471 "syntax.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3028 "syntax.tab.c"
    break;

  case 56: /* mul_exp: unary_exp  */
#line 477 "syntax.y"
              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3038 "syntax.tab.c"
    break;

  case 57: /* unary_exp: primal_exp  */
#line 484 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3048 "syntax.tab.c"
    break;

  case 58: /* unary_exp: '!' primal_exp  */
#line 489 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3058 "syntax.tab.c"
    break;

  case 59: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 494 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3068 "syntax.tab.c"
    break;

  case 60: /* unary_exp: ID '(' arg_list ')'  */
#line 499 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3079 "syntax.tab.c"
    break;

  case 61: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 505 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3089 "syntax.tab.c"
    break;

  case 62: /* unary_exp: ARITMETIC_OP1 ID '(' arg_list ')'  */
#line 510 "syntax.y"
                                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3100 "syntax.tab.c"
    break;

  case 63: /* unary_exp: ID '(' ')'  */
#line 516 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3110 "syntax.tab.c"
    break;

  case 64: /* unary_exp: '!' ID '(' arg_list ')'  */
#line 521 "syntax.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3121 "syntax.tab.c"
    break;

  case 65: /* unary_exp: '!' ID '(' ')'  */
#line 527 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3131 "syntax.tab.c"
    break;

  case 66: /* unary_exp: ISSET '(' ID ')'  */
#line 532 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 3141 "syntax.tab.c"
    break;

  case 67: /* unary_exp: ISSET '(' set_exp ')'  */
#line 537 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3151 "syntax.tab.c"
    break;

  case 68: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 542 "syntax.y"
                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 3161 "syntax.tab.c"
    break;

  case 69: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 547 "syntax.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3171 "syntax.tab.c"
    break;

  case 70: /* primal_exp: ID  */
#line 556 "syntax.y"
     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 3181 "syntax.tab.c"
    break;

  case 71: /* primal_exp: const  */
#line 561 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3191 "syntax.tab.c"
    break;

  case 72: /* primal_exp: '(' exp ')'  */
#line 566 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3201 "syntax.tab.c"
    break;

  case 73: /* arg_list: exp ',' arg_list  */
#line 573 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3212 "syntax.tab.c"
    break;

  case 74: /* arg_list: exp  */
#line 579 "syntax.y"
        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3222 "syntax.tab.c"
    break;

  case 75: /* type: INT_TYPE  */
#line 586 "syntax.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3234 "syntax.tab.c"
    break;

  case 76: /* type: FLOAT_TYPE  */
#line 593 "syntax.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3246 "syntax.tab.c"
    break;

  case 77: /* type: SET_TYPE  */
#line 600 "syntax.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3258 "syntax.tab.c"
    break;

  case 78: /* type: ELEM_TYPE  */
#line 607 "syntax.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3270 "syntax.tab.c"
    break;

  case 79: /* const: INTEGER  */
#line 616 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3280 "syntax.tab.c"
    break;

  case 80: /* const: FLOAT  */
#line 621 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3290 "syntax.tab.c"
    break;

  case 81: /* const: EMPTY  */
#line 626 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3300 "syntax.tab.c"
    break;


#line 3304 "syntax.tab.c"

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

#line 632 "syntax.y"


void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.lexema.linha, yylval.lexema.coluna, msg);
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

