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
#line 6 "sintatico.y"

  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include "tabela.h"
  #include "arvore.h"

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;

  extern Simbolo tabelaSimbolos[100000];
  int indiceTabela = -1;

  char tipo[100000][100];
  int indiceTipo = 0;

  int listaEscopo[100];
  int indiceEscopo = 0;
  int escopo = 0;
  int ehFuncao = 0;

  int indiceFuncao;
  int indiceParam;

  NodoArvore* raiz;

  int erros = 0;

#line 103 "sintatico.tab.c"

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

#include "sintatico.tab.h"
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
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_43_2 = 43,                      /* $@2  */
  YYSYMBOL_params_list = 44,               /* params_list  */
  YYSYMBOL_brackets_stmt = 45,             /* brackets_stmt  */
  YYSYMBOL_46_3 = 46,                      /* $@3  */
  YYSYMBOL_stmts = 47,                     /* stmts  */
  YYSYMBOL_stmt = 48,                      /* stmt  */
  YYSYMBOL_io_stmt = 49,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 50,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 51,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 52,               /* return_stmt  */
  YYSYMBOL_set_stmt = 53,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 54,                  /* exp_stmt  */
  YYSYMBOL_assignment = 55,                /* assignment  */
  YYSYMBOL_exp = 56,                       /* exp  */
  YYSYMBOL_set_exp = 57,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 58,                /* set_in_exp  */
  YYSYMBOL_or_exp = 59,                    /* or_exp  */
  YYSYMBOL_and_exp = 60,                   /* and_exp  */
  YYSYMBOL_relational_exp = 61,            /* relational_exp  */
  YYSYMBOL_sum_exp = 62,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 63,                   /* mul_exp  */
  YYSYMBOL_unary_exp = 64,                 /* unary_exp  */
  YYSYMBOL_primal_exp = 65,                /* primal_exp  */
  YYSYMBOL_arg_list = 66,                  /* arg_list  */
  YYSYMBOL_type = 67,                      /* type  */
  YYSYMBOL_const = 68                      /* const  */
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
#define YYLAST   4261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  451

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
       0,   100,   100,   108,   114,   119,   122,   125,   128,   152,
     152,   185,   185,   215,   245,   276,   276,   288,   291,   297,
     304,   307,   310,   313,   316,   319,   322,   325,   328,   333,
     344,   349,   356,   366,   372,   381,   385,   392,   399,   407,
     414,   426,   440,   443,   448,   456,   468,   474,   480,   494,
     501,   504,   509,   516,   521,   528,   533,   540,   545,   552,
     557,   560,   564,   568,   579,   591,   600,   611,   623,   634,
     645,   650,   661,   670,   681,   686,   693,   699,   706,   713,
     720,   727,   736,   741,   746
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
  "var_declaration", "function_declaration", "$@1", "$@2", "params_list",
  "brackets_stmt", "$@3", "stmts", "stmt", "io_stmt", "for_stmt",
  "if_else_stmt", "return_stmt", "set_stmt", "exp_stmt", "assignment",
  "exp", "set_exp", "set_in_exp", "or_exp", "and_exp", "relational_exp",
  "sum_exp", "mul_exp", "unary_exp", "primal_exp", "arg_list", "type",
  "const", YY_NULLPTR
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

#define YYPACT_NINF (-166)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1591,  1555,     6,    24,    29,    48,    10,  1673,  3647,  3681,
    3715,    49,  -166,  3749,    39,  3783,    15,   862,    35,    63,
     104,     7,     7,   279,  3817,   210,  4090,  4118,   862,  3253,
      88,  1467,    31,    98,   121,   130,   500,   872,  3828,   137,
     144,    61,   156,   159,    82,  1176,  2471,  2505,   174,  2539,
    2573,  2607,  2641,  2675,  2709,  2743,   182,   194,    80,    67,
     253,   815,   945,   406,  3849,  3854,  3859,   238,  3880,  1204,
     108,  3509,  3885,  1294,   250,   242,  1176,   264,  3514,  2777,
     247,   287,    13,  3519,   263,  3890,   288,  4146,   268,  2811,
    2845,    27,   551,    97,   551,   551,   551,   551,   304,   317,
     325,  3911,   421,   324,   374,   346,    45,    92,   341,   343,
     380,   381,   383,   422,  2879,   430,   423,   432,   521,   147,
    3916,   364,   434,  1011,   465,   713,   985,  1214,  3921,  3942,
    1322,  3947,  3952,   441,   103,   452,   460,   487,  3285,  1371,
     193,  3973,  3978,  3983,   469,   490,   495,   504,  4004,  2913,
    2947,  2981,   151,   514,   520,   532,  4009,  4014,  4035,  3253,
     454,  3253,  3253,  3015,   550,  3049,  3083,  3253,  3117,  3151,
     210,  3544,   419,   561,   822,  1508,  3614,   562,   117,  1176,
     -13,   207,   245,    12,   237,   672,  3619,  3624,  3648,  3653,
     804,   457,   564,   508,  1127,  1245,   597,   170,  1176,   221,
      30,    37,    71,   373,   602,  1568,  1575,  1603,  1614,  3579,
     466,   613,  4040,  4045,  4063,   614,   176,  1176,   136,   689,
     776,  4068,  4073,  4091,  4096,   624,   626,  3185,   218,  1088,
     270,  1689,   633,   642,   645,   661,   558,   662,   210,  1723,
    1757,  1791,  1825,  1859,  1893,  1927,  1961,   658,   682,   731,
     697,  3253,   603,  3549,  3658,  1294,   407,  3554,   711,  3682,
     714,  1430,  1430,  1430,  1430,  1430,   644,  1496,  1651,  1294,
     427,  1533,   718,  3312,   715,   429,  1464,   544,  1464,  1464,
    1464,  1464,   720,  3584,  4101,  1294,   576,  3589,   721,  4119,
     725,  1088,  1088,  1088,  1088,  1294,  1294,   292,   728,   299,
     187,   342,   524,   754,   790,  1176,   264,  1995,   735,   768,
    3253,  2029,  2063,   746,  1412,   742,  3687,   748,   751,   572,
     765,   771,   888,   596,  3692,   101,   456,   840,  3716,  3721,
    3317,   774,   935,   628,   787,   789,  1018,   605,  3324,   169,
     805,   274,   637,   557,   619,   590,  1332,  3352,  3357,  4124,
     810,  1051,   654,   814,   830,  1082,   625,  4129,  1062,   917,
    4147,  4152,   684,   701,  1294,   831,   833,   846,   847,   865,
    2097,   867,   861,  2131,  3484,   871,   875,  3219,  3726,  3750,
     879,   272,  3755,  3760,  3784,   880,   882,   883,  3364,  3392,
     887,   472,  3397,  3404,  3432,   890,   892,   893,  1294,  4157,
    4175,   901,   870,  4180,  4185,  4203,   902,   904,   905,   915,
     919,   704,   922,   931,   933,  3285,  1371,   638,  2165,  3789,
    3794,  3818,  3823,  3437,  3444,  3472,  3477,   764,  4208,  4213,
    4231,  4236,   813,  2199,  2233,  2267,  2301,   937,   932,   938,
     730,  3285,   454,  3285,  3285,  2335,   940,  2369,  2403,  3285,
    2437
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,   965,     4,  -166,  -166,  -166,   946,   -20,
    -165,   -46,  -123,  -107,  -103,   -93,   -84,   -80,   -47,   -63,
     -16,   209,  1218,  1336,    11,  1100,   982,   864,   724,   426,
     240,     0,   594
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    46,    10,    17,    18,    19,    47,
      29,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     102,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     103,    67,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    26,    27,    88,     9,   251,    99,    11,    24,   -79,
      12,     9,   228,    57,   113,   152,   116,    20,   -43,    -9,
      -9,    -9,    -9,   262,   -50,    80,   225,   -78,    20,    86,
     121,   241,   -80,    57,    71,   242,   163,   -50,   165,   166,
     226,    25,   -51,   -50,   168,   243,   -11,    36,    37,   276,
      38,   -81,    14,   100,   244,   -51,   183,   -51,   245,   110,
     111,   -51,   277,    45,    78,   -51,    21,    15,   -42,    32,
     -51,    16,   -42,   310,    33,   247,   134,    36,    37,   -51,
      38,   202,   278,   -50,   218,    83,   183,   183,    43,    79,
      44,   246,   -51,    45,    22,   -51,   -50,   164,    36,    37,
     124,    38,   -50,   123,   229,    91,   -50,    23,   -43,    84,
     226,   190,   262,   -49,    45,   202,   191,   230,   240,   -13,
     257,   192,   248,   153,   193,   194,   -49,   195,   -44,   202,
      73,   -44,   -49,   174,   175,   196,   176,   197,   249,   101,
     198,   202,   239,    57,   258,    57,    57,   291,   -50,   179,
     145,    57,   -33,    74,   -33,   -33,   -33,   -33,   -33,   -33,
     225,   -50,    75,   260,   -33,   -33,   -33,   -33,   -33,    76,
     -33,   -33,   159,   271,   -33,   -33,    77,   -33,   -33,   287,
     -33,   -48,   274,   -33,   -33,   -33,   193,   194,    81,   195,
     183,    82,   212,   213,   -48,   214,   154,   272,   291,   -49,
     -48,   290,   198,   288,   -48,   315,   225,    87,   217,   183,
      89,   -15,   -49,   -15,   -15,   -15,   -15,   -15,   -15,   -51,
     308,   297,    90,   -15,   -15,   -15,   -15,   -15,   183,   -15,
     -15,   298,   -51,   -15,   -15,    57,   -15,   -15,   -51,   -15,
     300,    98,   -15,   369,   -15,   171,   275,   263,   -53,   -53,
     172,   375,   -43,   108,   180,   173,   -43,   261,   174,   175,
     109,   176,   -53,   202,   372,    92,   218,   112,   -53,   177,
     230,   178,   325,   301,   179,   114,   -42,   202,    93,   199,
     218,   -42,   105,   298,   180,   180,   -47,   342,   367,   368,
     115,   117,   436,   202,    57,   119,   218,   -44,   376,   -47,
     122,   -18,   125,   -44,   -48,   -47,   218,   218,   241,   -47,
     -14,   -47,   242,   199,    28,   183,   183,   -48,   445,   120,
     447,   448,   243,   -48,   -47,   183,   450,   199,   146,   202,
     -47,   244,   227,   202,   241,   245,   241,   241,   242,   199,
     242,   242,   241,   202,   133,   -41,   242,   202,   243,   155,
     243,   243,   247,   -40,   -45,   131,   243,   244,   144,   244,
     244,   245,   202,   245,   245,   244,   202,   -45,   246,   245,
     147,   228,   135,   -45,   136,   218,   -48,   190,   247,   446,
     247,   247,   191,   279,   -53,   -53,   247,   192,   180,   -48,
     193,   194,   -48,   195,   246,   240,   246,   246,   -53,   248,
     437,   196,   246,   197,   -53,   132,   198,   180,   -53,   218,
     320,   137,   138,    69,    96,   249,   -55,   -55,   -55,   239,
     225,   240,   253,   240,   240,   248,   180,   248,   248,   240,
     334,   -55,   339,   248,   -55,   174,   175,   299,   176,   302,
     225,   249,   340,   249,   249,   239,   -47,   239,   239,   249,
     139,   179,   -77,   239,   141,   140,   130,   250,    72,   -47,
     267,   199,   -47,   142,   105,   321,   263,   -52,   -52,   283,
      85,   188,   148,   193,   194,   199,   195,   -45,   105,   335,
     149,   -52,   212,   213,   341,   214,   344,   -52,   150,   198,
     -45,   199,   317,   -45,   105,   354,   207,   -44,   217,   223,
     156,   188,   188,   -44,   105,   105,   331,   -44,   -82,   -82,
     -82,   -82,   -82,   180,   180,   151,   -82,   -82,   -82,   -82,
     -82,   157,   350,   180,   190,   -82,   158,   199,   -82,   191,
     207,   199,   387,   -82,   192,   -76,   -46,   193,   194,   -82,
     195,   199,   160,   -82,   207,   199,   397,   343,   196,   -46,
     197,   161,   143,   198,    78,   -46,   207,   340,   380,    32,
     199,    78,   385,   162,   199,   408,    32,    36,    37,   -45,
      38,    33,   390,   105,    36,    37,   395,    38,    43,   353,
      44,   167,   -45,    45,   -51,    43,   307,    44,   -45,   225,
      45,   401,   -45,   255,   256,   406,   269,   -51,   254,   386,
     279,   -52,   -52,   381,   259,   188,   190,   105,   396,   225,
     280,   191,   -55,   -55,   -55,   -52,   192,   268,   225,   193,
     194,   -52,   195,   273,   188,   -52,   439,   -55,   407,   270,
     196,   -46,   197,   -55,   316,   198,   284,   -55,   225,   189,
     -51,   438,   289,   188,   -46,   285,   286,   190,   278,   -49,
     -46,   225,   191,   -51,   -46,   223,   295,   192,   296,   391,
     193,   194,   -49,   195,   208,   303,   -51,   224,   -49,   189,
     189,   196,   -49,   197,   304,   330,   198,   305,   207,   -51,
     264,   223,   -55,   -55,   -55,   402,   311,   188,   188,   188,
     188,   188,   207,   306,   309,   223,   -51,   -55,   208,   292,
     -53,   -53,   207,   -55,   207,   207,   207,   207,   207,   -51,
     312,   223,   208,   -51,   -53,   409,   -51,   223,   223,   223,
     223,   223,   223,   190,   208,   -46,   -51,   314,   191,   -51,
     188,   188,   410,   192,   313,   432,   193,   194,   -46,   195,
     188,   -46,   -44,   323,   207,   324,   338,   196,   207,   197,
     337,   349,   198,   356,   190,   -44,   357,   365,   207,   191,
     364,   -44,   207,   370,   192,   -44,   189,   193,   194,   187,
     195,   371,   189,   189,   373,   377,   -51,   207,   196,   378,
     197,   207,   379,   198,   293,   208,   -55,   -55,   -55,   -51,
     223,   208,   189,   171,   206,   440,   382,   222,   172,   187,
     187,   -55,   383,   173,   224,   388,   174,   175,   366,   176,
     224,   189,   -73,   -73,   -73,   -73,   -73,   177,   392,   178,
     393,   129,   179,   224,   223,   -44,    94,   -50,   206,   -73,
     -82,   -82,   -82,   -82,   -82,   -73,   266,   398,   -44,   -73,
     -50,   399,   206,   -50,   -44,   403,   208,   -82,   264,   224,
     -54,   -54,   -54,   -82,   206,   189,   189,   189,   189,   189,
     208,   404,   412,   224,   413,   -54,     2,     3,     4,     5,
     208,   -54,   208,   208,   208,   208,   208,   414,   415,   224,
     -83,   -83,   -83,   -83,   -83,   224,   224,   224,   224,   224,
     224,   190,   417,   416,   418,   -44,   191,   -83,   189,   189,
     -83,   192,   -41,   187,   193,   194,   -40,   195,   189,   186,
     419,   420,   208,   421,   422,   196,   208,   197,   423,   384,
     198,   424,   187,   425,   426,   293,   208,   -54,   -54,   -54,
     208,   -44,   428,   429,   205,   430,   431,   221,   190,   186,
     186,   187,   -54,   191,   -44,   208,   -44,   -44,   192,   208,
     433,   193,   194,   222,   195,    95,   -53,   -53,   224,   434,
     128,   435,   196,   443,   197,   442,   389,   198,   205,   444,
     -53,   449,    13,   -53,    30,     0,   206,     0,     0,   222,
       0,     0,   205,     0,     0,   187,   187,   187,   187,   329,
     206,     0,   224,   222,   205,    95,   -52,   -52,     0,     0,
     206,     0,   206,   206,   206,   348,   206,     0,     0,   222,
     -52,     0,     0,   -52,     0,   222,   222,   222,   361,   222,
     222,   190,    94,   -49,     0,     0,   191,   185,   187,   187,
       0,   192,     0,     0,   193,   194,   -49,   195,   187,   -49,
       0,     0,   206,   186,     0,   196,   206,   197,     0,   394,
     198,     0,   204,     0,   190,   220,   206,   185,   185,   191,
     206,     0,   186,     0,   192,     0,     0,   193,   194,     0,
     195,     0,   292,   -52,   -52,   206,     0,   127,   196,   206,
     197,   186,   400,   198,     0,   190,   204,   -52,   222,     0,
     191,   209,     0,   221,     0,   192,   210,     0,   193,   194,
     204,   195,     0,     0,   212,   213,     0,   214,     0,   196,
       0,   197,   204,   405,   198,   215,   205,   216,     0,   221,
     217,     0,   222,     0,     0,   186,   186,   186,   328,     0,
     205,     0,     0,   221,     0,   -83,   -83,   -83,   -83,   -83,
     205,     0,   205,   205,   347,   184,   205,     0,     0,   221,
       0,     0,   -83,     0,     0,   221,   221,   360,   -83,   221,
     221,   185,   -83,     0,     0,     0,     0,     0,   186,   186,
     203,     0,     0,   219,     0,   184,   184,     0,   186,   171,
     185,     0,   205,     0,   172,     0,   205,     0,     0,   173,
       0,     0,   174,   175,   126,   176,   205,     0,     0,   185,
     205,     0,     0,   177,   203,   178,     0,    31,   179,     0,
       0,   220,    32,     0,     0,   205,     0,    33,   203,   205,
      36,    37,    96,    38,   -54,   -54,   -54,     0,   221,     0,
     203,    43,     0,    44,   204,     0,    45,   220,     0,   -54,
       0,     0,   -54,   185,   185,   327,     0,     0,   204,     0,
       0,   220,     0,   -84,   -84,   -84,   -84,   -84,   204,     0,
     204,   346,   221,   181,   204,     0,     0,   220,     0,     0,
     -84,     0,     0,   220,   359,     0,   -84,   220,   220,   184,
     -84,     0,     0,     0,     0,     0,   185,   185,   200,     0,
       0,   106,     0,   181,   181,     0,   185,   209,   184,     0,
     204,     0,   210,     0,   204,     0,     0,   211,     0,     0,
     212,   213,     0,   214,   204,     0,     0,   184,   204,     0,
       0,   215,   200,   216,     0,   190,   217,     0,     0,   219,
     191,     0,     0,   204,     0,   192,   200,   204,   193,   194,
     280,   195,   -54,   -54,   -54,     0,   220,     0,   200,   196,
       0,   197,   203,     0,   198,   219,     0,   -54,     0,     0,
       0,   184,   326,   -54,     0,     0,   203,   -54,     0,   219,
       0,     0,     0,     0,    78,     0,   203,     0,   345,    32,
     220,   182,   203,     0,    33,   219,     0,    36,    37,     0,
      38,   358,     0,     0,     0,   219,   219,   181,    43,     0,
      44,     0,     0,    45,   184,   184,   201,     0,     0,   107,
       0,   182,   182,     0,   184,   374,   181,     0,   203,     0,
     172,     0,   203,     0,     0,   173,     0,     0,   174,   175,
       0,   176,   203,   171,     0,   181,   203,     0,   172,   177,
     201,   178,     0,     0,   179,     0,   174,   175,     0,   176,
       0,   203,     0,     0,   201,   203,     0,   177,     0,   178,
       0,     0,   179,     0,   219,     0,   201,   190,     0,     0,
     200,     0,   191,   319,     0,   -73,   -73,   -73,   -73,   -73,
     193,   194,     0,   195,   200,     0,     0,   333,     0,     0,
       0,   196,   -73,   197,     0,   -73,   198,    69,   219,    70,
     200,     0,     0,   352,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,   362,   363,   182,   -83,   -83,   -83,   -83,
     -83,   -73,   181,   181,     0,     0,     0,   -73,   332,     0,
       0,   -73,   181,   -83,   182,     0,   200,     0,     0,   -83,
     200,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
     200,     0,     0,   182,   200,    -7,    -7,     0,   -73,    -7,
      -7,    -7,    -7,     0,   -73,   336,     0,     0,   -73,   200,
       0,     0,     0,   200,     0,     0,   -57,   281,   -57,   -57,
     -57,     0,   411,   -59,   -59,   -59,   -59,   -59,   201,     0,
       0,   107,     1,   -57,     0,     2,     3,     4,     5,   -57,
     -59,     0,   201,   -57,     0,   107,   -59,     0,     0,     0,
     -59,   -60,   -60,   -60,   -60,   -60,   427,     0,   201,     0,
       0,   107,   -74,   -74,   -74,   -74,   -74,     0,   -60,     0,
       0,   107,   107,     0,   -60,     0,     0,     0,   -60,   -74,
     182,   182,     0,     0,     0,   -74,     0,     0,     0,   -74,
     182,     0,     0,     0,   201,     0,     0,     0,   201,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,   201,     0,
       0,     0,   201,    -2,     1,     0,   -62,     2,     3,     4,
       5,     0,   -62,     0,     0,     0,   -62,   201,     0,     0,
     -17,   201,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,
     107,     0,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,
     -17,     0,   -17,   -17,     0,   -17,   -17,     0,   -17,     0,
       0,   -17,   -17,   -17,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   107,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,   -26,
     -26,     0,   -26,     0,     0,   -26,   -26,   -26,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,     0,   -28,   -28,     0,   -28,     0,     0,   -28,
     -28,   -28,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,     0,   -23,   -23,     0,   -23,   -23,     0,
     -23,     0,     0,   -23,   -23,   -23,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,
       0,   -20,   -20,     0,   -20,     0,     0,   -20,   -20,   -20,
     -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
       0,     0,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -21,     0,   -21,   -21,     0,   -21,   -21,     0,   -21,     0,
       0,   -21,   -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,     0,     0,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,     0,   -22,     0,     0,   -22,   -22,   -22,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,
     -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,   -25,
     -25,   -25,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,
     -24,     0,     0,   -24,   -24,   -24,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,
       0,   -35,   -35,     0,   -35,     0,     0,   -35,   -35,   -35,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,     0,   -27,   -27,     0,   -27,     0,
       0,   -27,   -27,   -27,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,     0,   -39,
     -39,     0,   -39,     0,     0,   -39,   -39,   -39,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,
     -36,   -36,     0,   -36,   -36,     0,   -36,     0,     0,   -36,
     -36,   -36,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,
      -8,     0,     0,    -8,    -8,    -8,   -16,     0,   -16,   -16,
     -16,   -16,   -16,   -16,     0,     0,     0,     0,   -16,   -16,
     -16,   -16,   -16,     0,   -16,   -16,   -16,     0,   -16,   -16,
       0,   -16,   -16,     0,   -16,     0,     0,   -16,   -16,   -16,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,     0,   -29,   -29,     0,   -29,   -29,     0,   -29,     0,
       0,   -29,   -29,   -29,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,     0,   -30,
     -30,     0,   -30,     0,     0,   -30,   -30,   -30,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,
     -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,   -31,
     -31,   -31,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   441,     0,   -33,   -33,     0,   -33,   -33,     0,
     -33,     0,     0,   -33,   -33,   -33,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,
       0,   -34,   -34,     0,   -34,     0,     0,   -34,   -34,   -34,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,     0,   -38,   -38,     0,   -38,   -38,     0,   -38,     0,
       0,   -38,   -38,   -38,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,     0,   -37,   -37,     0,   -37,
     -37,     0,   -37,     0,     0,   -37,   -37,   -37,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,     0,   -32,   -32,     0,   -32,     0,     0,   -32,
     -32,   -32,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,     0,     0,   -26,   -26,     0,   -26,   -26,     0,
     -26,     0,     0,   -26,   -26,   -26,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,   -28,   -28,
       0,   -28,   -28,     0,   -28,     0,     0,   -28,   -28,   -28,
     169,     0,    31,     2,     3,     4,     5,    32,     0,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
       0,     0,    40,    41,     0,    42,    43,     0,    44,     0,
       0,    45,   -19,   170,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,     0,     0,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,     0,     0,   -23,   -23,     0,   -23,
     -23,     0,   -23,     0,     0,   -23,   -23,   -23,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,
     -20,   -20,     0,   -20,   -20,     0,   -20,     0,     0,   -20,
     -20,   -20,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,     0,     0,   -21,   -21,     0,   -21,   -21,     0,
     -21,     0,     0,   -21,   -21,   -21,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,     0,     0,   -22,   -22,
     -22,   -22,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,
       0,   -22,   -22,     0,   -22,     0,     0,   -22,   -22,   -22,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,
       0,     0,   -25,   -25,     0,   -25,   -25,     0,   -25,     0,
       0,   -25,   -25,   -25,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,     0,     0,   -24,   -24,     0,   -24,
     -24,     0,   -24,     0,     0,   -24,   -24,   -24,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,
     -35,   -35,     0,   -35,   -35,     0,   -35,     0,     0,   -35,
     -35,   -35,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,     0,
     -27,     0,     0,   -27,   -27,   -27,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,   -39,   -39,
       0,   -39,   -39,     0,   -39,     0,     0,   -39,   -39,   -39,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,   -36,   -36,     0,   -36,   -36,     0,   -36,     0,
       0,   -36,   -36,   -36,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,   -29,   -29,     0,   -29,
     -29,     0,   -29,     0,     0,   -29,   -29,   -29,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,
     -30,   -30,     0,   -30,   -30,     0,   -30,     0,     0,   -30,
     -30,   -30,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,     0,     0,   -31,   -31,     0,   -31,   -31,     0,
     -31,     0,     0,   -31,   -31,   -31,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,     0,     0,   -34,   -34,
       0,   -34,   -34,     0,   -34,     0,     0,   -34,   -34,   -34,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
       0,     0,   -38,   -38,     0,   -38,   -38,     0,   -38,     0,
       0,   -38,   -38,   -38,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,     0,     0,   -37,   -37,     0,   -37,
     -37,     0,   -37,     0,     0,   -37,   -37,   -37,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
     -32,   -32,     0,   -32,   -32,     0,   -32,     0,     0,   -32,
     -32,   -32,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,     0,     0,   -17,   -17,     0,   -17,   -17,     0,
     -17,     0,     0,   -17,   -17,   -17,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,
       0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,
     -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,
       0,     0,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,
       0,     0,   -16,   -16,     0,   -16,   -16,     0,   -16,     0,
       0,   -16,   -16,   -16,   169,     0,    31,     2,     3,     4,
       5,    32,     0,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,     0,     0,    40,    41,     0,    42,
      43,     0,    44,     0,     0,    45,   231,   170,    31,     2,
       3,     4,     5,    32,     0,     0,     0,     0,    33,   232,
     233,    36,    37,     0,    38,   234,     0,     0,   235,   236,
       0,   237,    43,     0,    44,     0,     0,    45,     0,   238,
     -61,   -61,   -61,   -61,   -61,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -61,     0,     0,
       0,     0,   -66,   -61,     0,     0,     0,   -61,   -66,   -75,
       0,     0,   -66,     0,     0,   -75,     0,     0,     0,   -75,
     -56,   281,   -56,   -56,   -56,   -58,   -58,   -58,   -58,   -58,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -56,     0,     0,
       0,     0,   -58,   -56,     0,     0,     0,   -56,   -58,   -65,
       0,     0,   -58,     0,     0,   -65,     0,     0,     0,   -65,
     -63,   -63,   -63,   -63,   -63,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -63,     0,     0,
       0,     0,   -69,   -63,     0,     0,     0,   -63,   -69,   -70,
       0,     0,   -69,     0,     0,   -70,     0,     0,     0,   -70,
     -68,   -68,   -68,   -68,   -68,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -68,     0,     0,
       0,     0,   -64,   -68,     0,     0,     0,   -68,   -64,   -67,
       0,     0,   -64,     0,     0,   -67,     0,     0,     0,   -67,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -71,     0,     0,
       0,     0,   -72,   -71,     0,     0,     0,   -71,   -72,   -73,
       0,     0,   -72,     0,   314,   -73,   252,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -73,     0,     0,   -73,     0,   -73,
       0,   104,   -73,     0,   -73,     0,    70,   -73,     0,     0,
       0,   118,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,
       0,     0,     0,     0,   -73,   -73,   252,     0,     0,   -73,
     -73,   318,     0,     0,     0,   -73,   322,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -73,     0,     0,     0,     0,   -73,
       0,   282,     0,     0,   -73,     0,   351,     0,     0,     0,
       0,   355,   -84,   -84,   -84,   -84,   -84,   -57,   265,   -57,
     -57,   -57,   -59,   -59,   -59,   -59,   -59,     0,     0,   -84,
       0,     0,     0,     0,   -57,   -84,     0,    -4,    -4,   -59,
     -57,    -4,    -4,    -4,    -4,   -59,   -60,   -60,   -60,   -60,
     -60,   -74,   -74,   -74,   -74,   -74,   -62,   -62,   -62,   -62,
     -62,     0,     0,   -60,     0,     0,     0,     0,   -74,   -60,
       0,    -6,    -6,   -62,   -74,    -6,    -6,    -6,    -6,   -62,
     -61,   -61,   -61,   -61,   -61,   -66,   -66,   -66,   -66,   -66,
     -75,   -75,   -75,   -75,   -75,     0,     0,   -61,     0,     0,
       0,     0,   -66,   -61,     0,    -5,    -5,   -75,   -66,    -5,
      -5,    -5,    -5,   -75,   -56,   265,   -56,   -56,   -56,   -58,
     -58,   -58,   -58,   -58,   -65,   -65,   -65,   -65,   -65,     0,
       0,   -56,     0,     0,     0,     0,   -58,   -56,     0,    -3,
      -3,   -65,   -58,    -3,    -3,    -3,    -3,   -65,   -63,   -63,
     -63,   -63,   -63,   -69,   -69,   -69,   -69,   -69,   -70,   -70,
     -70,   -70,   -70,     0,     0,   -63,     0,     0,     0,     0,
     -69,   -63,     0,    -8,    -8,   -70,   -69,    -8,    -8,    -8,
      -8,   -70,   -68,   -68,   -68,   -68,   -68,   -64,   -64,   -64,
     -64,   -64,   -67,   -67,   -67,   -67,   -67,     0,     0,   -68,
       0,     0,     0,     0,   -64,   -68,     0,   -17,   -17,   -67,
     -64,   -17,   -17,   -17,   -17,   -67,   -71,   -71,   -71,   -71,
     -71,   -72,   -72,   -72,   -72,   -72,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -71,     0,     0,     0,     0,   -72,   -71,
       0,     0,     0,   -84,   -72,     0,   -84,   -57,    97,   -57,
     -57,   -57,   -59,   -59,   -59,   -59,   -59,   -60,   -60,   -60,
     -60,   -60,     0,     0,   -57,     0,     0,   -57,     0,   -59,
       0,     0,   -59,     0,   -60,     0,     0,   -60,   -74,   -74,
     -74,   -74,   -74,   -62,   -62,   -62,   -62,   -62,   -61,   -61,
     -61,   -61,   -61,     0,     0,   -74,     0,     0,   -74,     0,
     -62,     0,     0,   -62,     0,   -61,     0,     0,   -61,   -66,
     -66,   -66,   -66,   -66,   -75,   -75,   -75,   -75,   -75,   -56,
      97,   -56,   -56,   -56,     0,     0,   -66,     0,     0,   -66,
       0,   -75,     0,     0,   -75,     0,   -56,     0,     0,   -56,
     -58,   -58,   -58,   -58,   -58,   -65,   -65,   -65,   -65,   -65,
     -63,   -63,   -63,   -63,   -63,     0,     0,   -58,     0,     0,
     -58,     0,   -65,     0,     0,   -65,     0,   -63,     0,     0,
     -63,   -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,
     -70,   -68,   -68,   -68,   -68,   -68,     0,     0,   -69,     0,
       0,   -69,     0,   -70,     0,     0,   -70,     0,   -68,     0,
       0,   -68,   -64,   -64,   -64,   -64,   -64,   -67,   -67,   -67,
     -67,   -67,   -71,   -71,   -71,   -71,   -71,     0,     0,   -64,
       0,     0,   -64,     0,   -67,     0,     0,   -67,     0,   -71,
       0,     0,   -71,   -72,   -72,   -72,   -72,   -72,   -82,   -82,
     -82,   -82,   -82,   -83,   -83,   -83,   -83,   -83,     0,     0,
     -72,     0,     0,   -72,     0,   -82,     0,     0,     0,     0,
     -83,   -84,   -84,   -84,   -84,   -84,   -57,   294,   -57,   -57,
     -57,   -59,   -59,   -59,   -59,   -59,     0,     0,   -84,     0,
     -12,   -12,     0,   -57,   -12,   -12,   -12,   -12,   -59,   -60,
     -60,   -60,   -60,   -60,   -74,   -74,   -74,   -74,   -74,   -62,
     -62,   -62,   -62,   -62,     0,     0,   -60,     0,   -10,   -10,
       0,   -74,   -10,   -10,   -10,   -10,   -62,   -61,   -61,   -61,
     -61,   -61,   -66,   -66,   -66,   -66,   -66,   -75,   -75,   -75,
     -75,   -75,     0,     0,   -61,     0,   -16,   -16,     0,   -66,
     -16,   -16,   -16,   -16,   -75,   -56,   294,   -56,   -56,   -56,
     -58,   -58,   -58,   -58,   -58,   -65,   -65,   -65,   -65,   -65,
       0,     0,   -56,     0,     0,     0,     0,   -58,     0,     0,
       0,     0,   -65,   -63,   -63,   -63,   -63,   -63,   -69,   -69,
     -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,     0,     0,
     -63,     0,     0,     0,     0,   -69,     0,     0,     0,     0,
     -70,   -68,   -68,   -68,   -68,   -68,   -64,   -64,   -64,   -64,
     -64,   -67,   -67,   -67,   -67,   -67,     0,     0,   -68,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,   -67,   -71,
     -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -71,     0,     0,     0,
       0,   -72
};

static const yytype_int16 yycheck[] =
{
       0,    21,    22,    49,     0,   170,    69,     7,     1,     3,
       0,     7,    25,    29,    77,   138,     3,    17,    31,     4,
       5,     6,     7,    11,    12,    41,    13,     3,    28,    45,
       3,   138,     3,    49,     3,   138,   159,    25,   161,   162,
      13,    34,    12,    31,   167,   138,    31,    16,    17,    12,
      19,     3,     3,    69,   138,    25,    45,    12,   138,    75,
      76,    31,    25,    32,     3,    35,    31,    28,    31,     8,
      25,    32,    35,   238,    13,   138,    31,    16,    17,    12,
      19,    70,    11,    12,    73,     3,    75,    76,    27,    28,
      29,   138,    25,    32,    31,    28,    25,   160,    16,    17,
       3,    19,    31,    92,    12,    25,    35,     3,    28,    27,
      13,     3,    11,    12,    32,   104,     8,    25,   138,    31,
       3,    13,   138,   139,    16,    17,    25,    19,    25,   118,
      32,    28,    31,    16,    17,    27,    19,    29,   138,    31,
      32,   130,   138,   159,    27,   161,   162,    11,    12,    32,
       3,   167,     1,    32,     3,     4,     5,     6,     7,     8,
      13,    25,    32,   179,    13,    14,    15,    16,    17,    32,
      19,    20,    21,     3,    23,    24,    32,    26,    27,     3,
      29,    12,   198,    32,    33,    34,    16,    17,    32,    19,
     179,    32,    16,    17,    25,    19,     3,    27,    11,    12,
      31,   217,    32,    27,    35,   251,    13,    33,    32,   198,
      28,     1,    25,     3,     4,     5,     6,     7,     8,    12,
     236,     3,    28,    13,    14,    15,    16,    17,   217,    19,
      20,    13,    25,    23,    24,   251,    26,    27,    31,    29,
     229,     3,    32,   306,    34,     3,    25,    10,    11,    12,
       8,   314,    31,     3,    45,    13,    35,    12,    16,    17,
      18,    19,    25,   252,   310,    12,   255,     3,    31,    27,
      25,    29,   261,     3,    32,    28,    31,   266,    25,    70,
     269,    28,    73,    13,    75,    76,    12,   276,   304,   305,
       3,    82,   415,   282,   310,    32,   285,    25,   314,    25,
      91,    33,    93,    31,    12,    31,   295,   296,   415,    35,
      31,    12,   415,   104,    35,   304,   305,    25,   441,    31,
     443,   444,   415,    31,    25,   314,   449,   118,   119,   318,
      31,   415,    28,   322,   441,   415,   443,   444,   441,   130,
     443,   444,   449,   332,   104,    28,   449,   336,   441,   140,
     443,   444,   415,    28,    12,    31,   449,   441,   118,   443,
     444,   441,   351,   443,   444,   449,   355,    25,   415,   449,
     130,    25,    31,    31,    31,   364,    12,     3,   441,   442,
     443,   444,     8,    10,    11,    12,   449,    13,   179,    25,
      16,    17,    28,    19,   441,   415,   443,   444,    25,   415,
     416,    27,   449,    29,    31,    31,    32,   198,    35,   398,
       3,    31,    31,    30,     8,   415,    10,    11,    12,   415,
      13,   441,     3,   443,   444,   441,   217,   443,   444,   449,
       3,    25,     3,   449,    28,    16,    17,   228,    19,   230,
      13,   441,    13,   443,   444,   441,    12,   443,   444,   449,
      28,    32,    31,   449,    31,    25,    35,     3,    32,    25,
       3,   252,    28,    31,   255,   256,    10,    11,    12,     3,
      44,    45,    31,    16,    17,   266,    19,    12,   269,   270,
      28,    25,    16,    17,   275,    19,   277,    31,    28,    32,
      25,   282,   252,    28,   285,   286,    70,    25,    32,    73,
      31,    75,    76,    31,   295,   296,   266,    35,     8,     9,
      10,    11,    12,   304,   305,    28,     8,     9,    10,    11,
      12,    31,   282,   314,     3,    25,    31,   318,    28,     8,
     104,   322,   323,    25,    13,    31,    12,    16,    17,    31,
      19,   332,    28,    35,   118,   336,   337,     3,    27,    25,
      29,    31,    31,    32,     3,    31,   130,    13,   318,     8,
     351,     3,   322,    31,   355,   356,     8,    16,    17,    12,
      19,    13,   332,   364,    16,    17,   336,    19,    27,     3,
      29,    31,    25,    32,    12,    27,    28,    29,    31,    13,
      32,   351,    35,    32,    32,   355,    32,    25,   172,     3,
      10,    11,    12,    31,   178,   179,     3,   398,     3,    13,
       8,     8,    10,    11,    12,    25,    13,   191,    13,    16,
      17,    31,    19,   197,   198,    35,   417,    25,     3,    32,
      27,    12,    29,    31,    31,    32,   210,    35,    13,    45,
      12,     3,   216,   217,    25,    32,    32,     3,    11,    12,
      31,    13,     8,    25,    35,   229,    32,    13,    32,    31,
      16,    17,    25,    19,    70,    32,    12,    73,    31,    75,
      76,    27,    35,    29,    32,    31,    32,    32,   252,    25,
       8,   255,    10,    11,    12,    31,    28,   261,   262,   263,
     264,   265,   266,    32,    32,   269,    12,    25,   104,    10,
      11,    12,   276,    31,   278,   279,   280,   281,   282,    25,
      28,   285,   118,    12,    25,    31,    12,   291,   292,   293,
     294,   295,   296,     3,   130,    12,    25,    30,     8,    25,
     304,   305,    31,    13,     3,    31,    16,    17,    25,    19,
     314,    28,    12,    32,   318,    31,    31,    27,   322,    29,
      32,    31,    32,    32,     3,    25,    31,     3,   332,     8,
      32,    31,   336,    28,    13,    35,   172,    16,    17,    45,
      19,     3,   178,   179,    28,    33,    12,   351,    27,    31,
      29,   355,    31,    32,     8,   191,    10,    11,    12,    25,
     364,   197,   198,     3,    70,    31,    31,    73,     8,    75,
      76,    25,    31,    13,   210,    31,    16,    17,    18,    19,
     216,   217,     8,     9,    10,    11,    12,    27,    31,    29,
      31,    97,    32,   229,   398,    12,    11,    12,   104,    25,
       8,     9,    10,    11,    12,    31,    32,    32,    25,    35,
      25,    31,   118,    28,    31,    31,   252,    25,     8,   255,
      10,    11,    12,    31,   130,   261,   262,   263,   264,   265,
     266,    31,    31,   269,    31,    25,     4,     5,     6,     7,
     276,    31,   278,   279,   280,   281,   282,    31,    31,   285,
       8,     9,    10,    11,    12,   291,   292,   293,   294,   295,
     296,     3,    25,    28,    33,    25,     8,    25,   304,   305,
      28,    13,    31,   179,    16,    17,    31,    19,   314,    45,
      31,    31,   318,    31,    31,    27,   322,    29,    31,    31,
      32,    31,   198,    31,    31,     8,   332,    10,    11,    12,
     336,    12,    31,    31,    70,    31,    31,    73,     3,    75,
      76,   217,    25,     8,    25,   351,    31,    28,    13,   355,
      28,    16,    17,   229,    19,    10,    11,    12,   364,    28,
      96,    28,    27,    31,    29,    28,    31,    32,   104,    31,
      25,    31,     7,    28,    28,    -1,   252,    -1,    -1,   255,
      -1,    -1,   118,    -1,    -1,   261,   262,   263,   264,   265,
     266,    -1,   398,   269,   130,    10,    11,    12,    -1,    -1,
     276,    -1,   278,   279,   280,   281,   282,    -1,    -1,   285,
      25,    -1,    -1,    28,    -1,   291,   292,   293,   294,   295,
     296,     3,    11,    12,    -1,    -1,     8,    45,   304,   305,
      -1,    13,    -1,    -1,    16,    17,    25,    19,   314,    28,
      -1,    -1,   318,   179,    -1,    27,   322,    29,    -1,    31,
      32,    -1,    70,    -1,     3,    73,   332,    75,    76,     8,
     336,    -1,   198,    -1,    13,    -1,    -1,    16,    17,    -1,
      19,    -1,    10,    11,    12,   351,    -1,    95,    27,   355,
      29,   217,    31,    32,    -1,     3,   104,    25,   364,    -1,
       8,     3,    -1,   229,    -1,    13,     8,    -1,    16,    17,
     118,    19,    -1,    -1,    16,    17,    -1,    19,    -1,    27,
      -1,    29,   130,    31,    32,    27,   252,    29,    -1,   255,
      32,    -1,   398,    -1,    -1,   261,   262,   263,   264,    -1,
     266,    -1,    -1,   269,    -1,     8,     9,    10,    11,    12,
     276,    -1,   278,   279,   280,    45,   282,    -1,    -1,   285,
      -1,    -1,    25,    -1,    -1,   291,   292,   293,    31,   295,
     296,   179,    35,    -1,    -1,    -1,    -1,    -1,   304,   305,
      70,    -1,    -1,    73,    -1,    75,    76,    -1,   314,     3,
     198,    -1,   318,    -1,     8,    -1,   322,    -1,    -1,    13,
      -1,    -1,    16,    17,    94,    19,   332,    -1,    -1,   217,
     336,    -1,    -1,    27,   104,    29,    -1,     3,    32,    -1,
      -1,   229,     8,    -1,    -1,   351,    -1,    13,   118,   355,
      16,    17,     8,    19,    10,    11,    12,    -1,   364,    -1,
     130,    27,    -1,    29,   252,    -1,    32,   255,    -1,    25,
      -1,    -1,    28,   261,   262,   263,    -1,    -1,   266,    -1,
      -1,   269,    -1,     8,     9,    10,    11,    12,   276,    -1,
     278,   279,   398,    45,   282,    -1,    -1,   285,    -1,    -1,
      25,    -1,    -1,   291,   292,    -1,    31,   295,   296,   179,
      35,    -1,    -1,    -1,    -1,    -1,   304,   305,    70,    -1,
      -1,    73,    -1,    75,    76,    -1,   314,     3,   198,    -1,
     318,    -1,     8,    -1,   322,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    19,   332,    -1,    -1,   217,   336,    -1,
      -1,    27,   104,    29,    -1,     3,    32,    -1,    -1,   229,
       8,    -1,    -1,   351,    -1,    13,   118,   355,    16,    17,
       8,    19,    10,    11,    12,    -1,   364,    -1,   130,    27,
      -1,    29,   252,    -1,    32,   255,    -1,    25,    -1,    -1,
      -1,   261,   262,    31,    -1,    -1,   266,    35,    -1,   269,
      -1,    -1,    -1,    -1,     3,    -1,   276,    -1,   278,     8,
     398,    45,   282,    -1,    13,   285,    -1,    16,    17,    -1,
      19,   291,    -1,    -1,    -1,   295,   296,   179,    27,    -1,
      29,    -1,    -1,    32,   304,   305,    70,    -1,    -1,    73,
      -1,    75,    76,    -1,   314,     3,   198,    -1,   318,    -1,
       8,    -1,   322,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    19,   332,     3,    -1,   217,   336,    -1,     8,    27,
     104,    29,    -1,    -1,    32,    -1,    16,    17,    -1,    19,
      -1,   351,    -1,    -1,   118,   355,    -1,    27,    -1,    29,
      -1,    -1,    32,    -1,   364,    -1,   130,     3,    -1,    -1,
     252,    -1,     8,   255,    -1,     8,     9,    10,    11,    12,
      16,    17,    -1,    19,   266,    -1,    -1,   269,    -1,    -1,
      -1,    27,    25,    29,    -1,    28,    32,    30,   398,    32,
     282,    -1,    -1,   285,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,   295,   296,   179,     8,     9,    10,    11,
      12,    25,   304,   305,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,   314,    25,   198,    -1,   318,    -1,    -1,    31,
     322,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
     332,    -1,    -1,   217,   336,     0,     1,    -1,    25,     4,
       5,     6,     7,    -1,    31,    32,    -1,    -1,    35,   351,
      -1,    -1,    -1,   355,    -1,    -1,     8,     9,    10,    11,
      12,    -1,   364,     8,     9,    10,    11,    12,   252,    -1,
      -1,   255,     1,    25,    -1,     4,     5,     6,     7,    31,
      25,    -1,   266,    35,    -1,   269,    31,    -1,    -1,    -1,
      35,     8,     9,    10,    11,    12,   398,    -1,   282,    -1,
      -1,   285,     8,     9,    10,    11,    12,    -1,    25,    -1,
      -1,   295,   296,    -1,    31,    -1,    -1,    -1,    35,    25,
     304,   305,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,
     314,    -1,    -1,    -1,   318,    -1,    -1,    -1,   322,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,   332,    -1,
      -1,    -1,   336,     0,     1,    -1,    25,     4,     5,     6,
       7,    -1,    31,    -1,    -1,    -1,    35,   351,    -1,    -1,
       1,   355,     3,     4,     5,     6,     7,     8,    -1,    -1,
     364,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,   398,    -1,    13,    14,    15,    16,
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
      27,    -1,    29,    -1,    -1,    32,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    -1,    34,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,     8,     9,    10,    11,    12,    25,    -1,    -1,
      -1,    -1,    25,    31,    -1,    -1,    -1,    35,    31,    25,
      -1,    -1,    35,    -1,    -1,    31,    -1,    -1,    -1,    35,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,     8,     9,    10,    11,    12,    25,    -1,    -1,
      -1,    -1,    25,    31,    -1,    -1,    -1,    35,    31,    25,
      -1,    -1,    35,    -1,    -1,    31,    -1,    -1,    -1,    35,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,     8,     9,    10,    11,    12,    25,    -1,    -1,
      -1,    -1,    25,    31,    -1,    -1,    -1,    35,    31,    25,
      -1,    -1,    35,    -1,    -1,    31,    -1,    -1,    -1,    35,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,     8,     9,    10,    11,    12,    25,    -1,    -1,
      -1,    -1,    25,    31,    -1,    -1,    -1,    35,    31,    25,
      -1,    -1,    35,    -1,    -1,    31,    -1,    -1,    -1,    35,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,     8,     9,    10,    11,    12,    25,    -1,    -1,
      -1,    -1,    25,    31,    -1,    -1,    -1,    35,    31,    25,
      -1,    -1,    35,    -1,    30,    31,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    25,    -1,    -1,    28,    -1,    25,
      -1,    32,    28,    -1,    25,    -1,    32,    28,    -1,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    25,    31,    32,    -1,    -1,    25,
      31,    32,    -1,    -1,    -1,    31,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    25,    -1,    -1,    -1,    -1,    25,
      -1,    32,    -1,    -1,    25,    -1,    32,    -1,    -1,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    25,    31,    -1,     0,     1,    25,
      31,     4,     5,     6,     7,    31,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    25,    -1,    -1,    -1,    -1,    25,    31,
      -1,     0,     1,    25,    31,     4,     5,     6,     7,    31,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    25,    31,    -1,     0,     1,    25,    31,     4,
       5,     6,     7,    31,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,     0,
       1,    25,    31,     4,     5,     6,     7,    31,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      25,    31,    -1,     0,     1,    25,    31,     4,     5,     6,
       7,    31,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    25,    31,    -1,     0,     1,    25,
      31,     4,     5,     6,     7,    31,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    25,    -1,    -1,    -1,    -1,    25,    31,
      -1,    -1,    -1,    25,    31,    -1,    28,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    25,    -1,    -1,    28,    -1,    25,
      -1,    -1,    28,    -1,    25,    -1,    -1,    28,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    25,    -1,    -1,    28,    -1,
      25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,    28,
      -1,    25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,
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
      25,    -1,    -1,    28,    -1,    25,    -1,    -1,    -1,    -1,
      25,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    25,    -1,
       0,     1,    -1,    25,     4,     5,     6,     7,    25,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    25,    -1,     0,     1,
      -1,    25,     4,     5,     6,     7,    25,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    25,    -1,     0,     1,    -1,    25,
       4,     5,     6,     7,    25,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    25,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      25,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    25,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    37,    38,    39,    40,
      41,    67,     0,    39,     3,    28,    32,    42,    43,    44,
      67,    31,    31,     3,     1,    34,    45,    45,    35,    46,
      44,     3,     8,    13,    14,    15,    16,    17,    19,    20,
      23,    24,    26,    27,    29,    32,    40,    45,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    67,    68,    30,
      32,     3,    65,    32,    32,    32,    32,    32,     3,    28,
      56,    32,    32,     3,    27,    65,    56,    33,    47,    28,
      28,    25,    12,    25,    11,    10,     8,     9,     3,    55,
      56,    31,    56,    66,    32,    57,    58,    59,     3,    18,
      56,    56,     3,    55,    28,     3,     3,    57,    32,    32,
      31,     3,    57,    60,     3,    57,    61,    62,    63,    64,
      35,    31,    31,    66,    31,    31,    31,    31,    31,    28,
      25,    31,    31,    31,    66,     3,    57,    66,    31,    28,
      28,    28,    48,    56,     3,    57,    31,    31,    31,    21,
      28,    31,    31,    48,    55,    48,    48,    31,    48,     1,
      34,     3,     8,    13,    16,    17,    19,    27,    29,    32,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    68,
       3,     8,    13,    16,    17,    19,    27,    29,    32,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    68,     3,
       8,    13,    16,    17,    19,    27,    29,    32,    60,    61,
      62,    63,    64,    65,    68,    13,    13,    28,    25,    12,
      25,     1,    14,    15,    20,    23,    24,    26,    34,    40,
      45,    49,    50,    51,    52,    53,    54,    55,    56,    67,
       3,    46,    32,     3,    65,    32,    32,     3,    27,    65,
      56,    12,    11,    10,     8,     9,    32,     3,    65,    32,
      32,     3,    27,    65,    56,    25,    12,    25,    11,    10,
       8,     9,    32,     3,    65,    32,    32,     3,    27,    65,
      56,    11,    10,     8,     9,    32,    32,     3,    13,    57,
      60,     3,    57,    32,    32,    32,    32,    28,    56,    32,
      46,    28,    28,     3,    30,    47,    31,    66,    32,    58,
       3,    57,    32,    32,    31,    60,    61,    62,    63,    64,
      31,    66,    32,    58,     3,    57,    32,    32,    31,     3,
      13,    57,    60,     3,    57,    61,    62,    63,    64,    31,
      66,    32,    58,     3,    57,    32,    32,    31,    61,    62,
      63,    64,    58,    58,    32,     3,    18,    56,    56,    55,
      28,     3,    47,    28,     3,    55,    56,    33,    31,    31,
      66,    31,    31,    31,    31,    66,     3,    57,    31,    31,
      66,    31,    31,    31,    31,    66,     3,    57,    32,    31,
      31,    66,    31,    31,    31,    31,    66,     3,    57,    31,
      31,    58,    31,    31,    31,    31,    28,    25,    33,    31,
      31,    31,    31,    31,    31,    31,    31,    58,    31,    31,
      31,    31,    31,    28,    28,    28,    48,    56,     3,    57,
      31,    21,    28,    31,    31,    48,    55,    48,    48,    31,
      48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    40,    42,
      41,    43,    41,    44,    44,    46,    45,    45,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    55,    56,    56,    57,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    66,    66,    67,    67,
      67,    67,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       7,     0,     6,     4,     2,     0,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       5,     5,     9,     5,     7,     2,     3,     7,     7,     2,
       3,     3,     1,     1,     4,     3,     3,     3,     3,     3,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     2,     2,     4,     5,     4,     3,     5,     4,     4,
       4,     5,     5,     1,     1,     3,     3,     1,     1,     1,
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
#line 100 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2459 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 108 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2470 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 114 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2478 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 119 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2486 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 122 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2494 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 125 "sintatico.y"
          {}
#line 2500 "sintatico.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 128 "sintatico.y"
              {
    int check = checkDuplicado((yyvsp[-1].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Redeclaration of variable", (yyvsp[-1].lexema).corpo);
      erros++;
    }

    Simbolo s = criarSimbolo((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo);
    s.escopo = listaEscopo[indiceEscopo];
    s.ehFuncao = 0;
    s.ehParametro = 0;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 2527 "sintatico.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 152 "sintatico.y"
              {
    int check = checkDuplicado((yyvsp[-1].lexema).corpo, 0, indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Redeclaration of function", (yyvsp[-1].lexema).corpo);
      erros++;
    }

    escopo++; 
    ehFuncao = 1;
    indiceEscopo++; 
    listaEscopo[indiceEscopo] = escopo; 

    Simbolo s = criarSimbolo((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo);
    s.escopo = 0;
    s.ehFuncao = 1;
    s.ehParametro = 0;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    indiceFuncao = indiceTabela;
    indiceParam = 0;

  }
#line 2558 "sintatico.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' $@1 params_list ')' brackets_stmt  */
#line 177 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, (yyvsp[-5].lexema).corpo, 2);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2571 "sintatico.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 185 "sintatico.y"
                { 
    int check = checkDuplicado((yyvsp[-1].lexema).corpo, 0, indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Redeclaration of function", (yyvsp[-1].lexema).corpo);
      erros++;
    }

    escopo++; 
    ehFuncao = 1;
    indiceEscopo++; 
    listaEscopo[indiceEscopo] = escopo; 

    Simbolo s = criarSimbolo((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo);
    s.escopo = 0;
    s.ehFuncao = 1;
    s.ehParametro = 0;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;
  }
#line 2598 "sintatico.tab.c"
    break;

  case 12: /* function_declaration: type ID '(' $@2 ')' brackets_stmt  */
#line 206 "sintatico.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2610 "sintatico.tab.c"
    break;

  case 13: /* params_list: type ID ',' params_list  */
#line 215 "sintatico.y"
                         {
    int check = checkDuplicado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Redeclaration of variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    Simbolo s = criarSimbolo((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo);
    s.escopo = listaEscopo[indiceEscopo];
    s.ehFuncao = 0;
    s.ehParametro = 1;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    Simbolo funcao = tabelaSimbolos[indiceFuncao];
    strcpy(funcao.params[indiceParam], s.corpo);
    strcpy(funcao.tipoParams[indiceParam], s.tipo);
    funcao.quantidadeParams++;
    tabelaSimbolos[indiceFuncao] = funcao;
    indiceParam++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-3].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyvsp[-3].nodo)->proximo = (yyvsp[0].nodo);
 }
#line 2645 "sintatico.tab.c"
    break;

  case 14: /* params_list: type ID  */
#line 245 "sintatico.y"
           {
    int check = checkDuplicado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Redeclaration of variable", (yyvsp[0].lexema).corpo);
      erros++;
    }

    Simbolo s = criarSimbolo((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo);
    s.escopo = listaEscopo[indiceEscopo];
    s.ehFuncao = 0;
    s.ehParametro = 1;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    Simbolo funcao = tabelaSimbolos[indiceFuncao];
    strcpy(funcao.params[indiceParam], s.corpo);
    strcpy(funcao.tipoParams[indiceParam], s.tipo);
    funcao.quantidadeParams++;
    tabelaSimbolos[indiceFuncao] = funcao;
    indiceParam++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
 }
#line 2679 "sintatico.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 276 "sintatico.y"
      {
    if(ehFuncao) {
      ehFuncao = 0;
    } else {
      indiceEscopo++; 
      escopo++; 
      listaEscopo[indiceEscopo] = escopo; 
    }
  }
#line 2693 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 284 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2702 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: error  */
#line 288 "sintatico.y"
          {}
#line 2708 "sintatico.tab.c"
    break;

  case 18: /* stmts: stmt stmts  */
#line 291 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2719 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt  */
#line 297 "sintatico.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2729 "sintatico.tab.c"
    break;

  case 20: /* stmt: for_stmt  */
#line 304 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2737 "sintatico.tab.c"
    break;

  case 21: /* stmt: if_else_stmt  */
#line 307 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2745 "sintatico.tab.c"
    break;

  case 22: /* stmt: return_stmt  */
#line 310 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2753 "sintatico.tab.c"
    break;

  case 23: /* stmt: io_stmt  */
#line 313 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2761 "sintatico.tab.c"
    break;

  case 24: /* stmt: exp_stmt  */
#line 316 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2769 "sintatico.tab.c"
    break;

  case 25: /* stmt: set_stmt  */
#line 319 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2777 "sintatico.tab.c"
    break;

  case 26: /* stmt: var_declaration  */
#line 322 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2785 "sintatico.tab.c"
    break;

  case 27: /* stmt: assignment ';'  */
#line 325 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2793 "sintatico.tab.c"
    break;

  case 28: /* stmt: brackets_stmt  */
#line 328 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2801 "sintatico.tab.c"
    break;

  case 29: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 333 "sintatico.y"
                       {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 2817 "sintatico.tab.c"
    break;

  case 30: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 344 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 2827 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 349 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2837 "sintatico.tab.c"
    break;

  case 32: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 356 "sintatico.y"
                                                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2850 "sintatico.tab.c"
    break;

  case 33: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 366 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2861 "sintatico.tab.c"
    break;

  case 34: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 372 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2873 "sintatico.tab.c"
    break;

  case 35: /* return_stmt: RETURN ';'  */
#line 381 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
  }
#line 2882 "sintatico.tab.c"
    break;

  case 36: /* return_stmt: RETURN exp ';'  */
#line 385 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2892 "sintatico.tab.c"
    break;

  case 37: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 392 "sintatico.y"
                                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2904 "sintatico.tab.c"
    break;

  case 38: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 399 "sintatico.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2915 "sintatico.tab.c"
    break;

  case 39: /* exp_stmt: exp ';'  */
#line 407 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2925 "sintatico.tab.c"
    break;

  case 40: /* assignment: ID '=' exp  */
#line 414 "sintatico.y"
             {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2942 "sintatico.tab.c"
    break;

  case 41: /* assignment: ID '=' assignment  */
#line 426 "sintatico.y"
                      {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2959 "sintatico.tab.c"
    break;

  case 42: /* exp: or_exp  */
#line 440 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2967 "sintatico.tab.c"
    break;

  case 43: /* exp: set_exp  */
#line 443 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2975 "sintatico.tab.c"
    break;

  case 44: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 448 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2986 "sintatico.tab.c"
    break;

  case 45: /* set_in_exp: or_exp INFIX_OP ID  */
#line 456 "sintatico.y"
                     {
    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 3003 "sintatico.tab.c"
    break;

  case 46: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 468 "sintatico.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3014 "sintatico.tab.c"
    break;

  case 47: /* set_in_exp: set_exp INFIX_OP set_exp  */
#line 474 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3025 "sintatico.tab.c"
    break;

  case 48: /* set_in_exp: set_exp INFIX_OP ID  */
#line 480 "sintatico.y"
                        {
    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 3042 "sintatico.tab.c"
    break;

  case 49: /* or_exp: or_exp OR and_exp  */
#line 494 "sintatico.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3054 "sintatico.tab.c"
    break;

  case 50: /* or_exp: and_exp  */
#line 501 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3062 "sintatico.tab.c"
    break;

  case 51: /* or_exp: set_in_exp  */
#line 504 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3070 "sintatico.tab.c"
    break;

  case 52: /* and_exp: and_exp AND relational_exp  */
#line 509 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3082 "sintatico.tab.c"
    break;

  case 53: /* and_exp: relational_exp  */
#line 516 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3090 "sintatico.tab.c"
    break;

  case 54: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 521 "sintatico.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3102 "sintatico.tab.c"
    break;

  case 55: /* relational_exp: sum_exp  */
#line 528 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3110 "sintatico.tab.c"
    break;

  case 56: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 533 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3122 "sintatico.tab.c"
    break;

  case 57: /* sum_exp: mul_exp  */
#line 540 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3130 "sintatico.tab.c"
    break;

  case 58: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 545 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3142 "sintatico.tab.c"
    break;

  case 59: /* mul_exp: unary_exp  */
#line 552 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3150 "sintatico.tab.c"
    break;

  case 60: /* unary_exp: primal_exp  */
#line 557 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3158 "sintatico.tab.c"
    break;

  case 61: /* unary_exp: '!' primal_exp  */
#line 560 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3167 "sintatico.tab.c"
    break;

  case 62: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 564 "sintatico.y"
                             {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3176 "sintatico.tab.c"
    break;

  case 63: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 568 "sintatico.y"
                             {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3192 "sintatico.tab.c"
    break;

  case 64: /* unary_exp: ARITMETIC_OP1 ID '(' arg_list ')'  */
#line 579 "sintatico.y"
                                      {
    int check = checkDeclarado((yyvsp[-3].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, "Undeclared function", (yyvsp[-3].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3209 "sintatico.tab.c"
    break;

  case 65: /* unary_exp: ID '(' arg_list ')'  */
#line 591 "sintatico.y"
                        {
    int check = checkDeclarado((yyvsp[-3].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, "Undeclared function", (yyvsp[-3].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3223 "sintatico.tab.c"
    break;

  case 66: /* unary_exp: ID '(' ')'  */
#line 600 "sintatico.y"
               {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3239 "sintatico.tab.c"
    break;

  case 67: /* unary_exp: '!' ID '(' arg_list ')'  */
#line 611 "sintatico.y"
                            {
    int check = checkDeclarado((yyvsp[-3].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, "Undeclared function", (yyvsp[-3].lexema).corpo);
      erros++;
    }
    
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3256 "sintatico.tab.c"
    break;

  case 68: /* unary_exp: '!' ID '(' ')'  */
#line 623 "sintatico.y"
                   {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3272 "sintatico.tab.c"
    break;

  case 69: /* unary_exp: ISSET '(' ID ')'  */
#line 634 "sintatico.y"
                     {
    int check = checkDeclarado((yyvsp[-1].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared variable", (yyvsp[-1].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 3288 "sintatico.tab.c"
    break;

  case 70: /* unary_exp: ISSET '(' set_exp ')'  */
#line 645 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3298 "sintatico.tab.c"
    break;

  case 71: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 650 "sintatico.y"
                          {
    int check = checkDeclarado((yyvsp[-1].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared variable", (yyvsp[-1].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 3314 "sintatico.tab.c"
    break;

  case 72: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 661 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3324 "sintatico.tab.c"
    break;

  case 73: /* primal_exp: ID  */
#line 670 "sintatico.y"
     {
    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 3340 "sintatico.tab.c"
    break;

  case 74: /* primal_exp: const  */
#line 681 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3350 "sintatico.tab.c"
    break;

  case 75: /* primal_exp: '(' exp ')'  */
#line 686 "sintatico.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3360 "sintatico.tab.c"
    break;

  case 76: /* arg_list: exp ',' arg_list  */
#line 693 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3371 "sintatico.tab.c"
    break;

  case 77: /* arg_list: exp  */
#line 699 "sintatico.y"
        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3381 "sintatico.tab.c"
    break;

  case 78: /* type: INT_TYPE  */
#line 706 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3393 "sintatico.tab.c"
    break;

  case 79: /* type: FLOAT_TYPE  */
#line 713 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3405 "sintatico.tab.c"
    break;

  case 80: /* type: SET_TYPE  */
#line 720 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3417 "sintatico.tab.c"
    break;

  case 81: /* type: ELEM_TYPE  */
#line 727 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3429 "sintatico.tab.c"
    break;

  case 82: /* const: INTEGER  */
#line 736 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3439 "sintatico.tab.c"
    break;

  case 83: /* const: FLOAT  */
#line 741 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3449 "sintatico.tab.c"
    break;

  case 84: /* const: EMPTY  */
#line 746 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3459 "sintatico.tab.c"
    break;


#line 3463 "sintatico.tab.c"

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

#line 752 "sintatico.y"


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

    for(int i=0; i<10000000;i++){
      listaEscopo[i] = 0;
    }
    
    yyparse();

    if (erros == 0) {
      printArvore(raiz, 0);
      freeArvore(raiz);
    }

    printTabela(indiceTabela);

    if (erros >= 1) {
      if(erros == 1) {
      printf("\n\n--> Paser finalizado com %d erro\n", erros);
      }
      else {
        printf("\n\n--> Paser finalizado com %d erros\n", erros);  
      }
    }

    fclose(yyin);
    yylex_destroy();
    return 0;
}

