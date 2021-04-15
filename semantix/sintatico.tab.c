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
  int indiceArg;

  NodoArvore* raiz;

  int erros = 0;

#line 104 "sintatico.tab.c"

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
  YYSYMBOL_SET_OP2 = 14,                   /* SET_OP2  */
  YYSYMBOL_INPUT = 15,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 16,                    /* OUTPUT  */
  YYSYMBOL_INTEGER = 17,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 18,                     /* FLOAT  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_EMPTY = 20,                     /* EMPTY  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_THEN = 23,                      /* THEN  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_INFIX_OP = 26,                  /* INFIX_OP  */
  YYSYMBOL_FORALL = 27,                    /* FORALL  */
  YYSYMBOL_ISSET = 28,                     /* ISSET  */
  YYSYMBOL_29_ = 29,                       /* ';'  */
  YYSYMBOL_30_ = 30,                       /* '!'  */
  YYSYMBOL_31_ = 31,                       /* '='  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_program = 38,                   /* program  */
  YYSYMBOL_declaration_list = 39,          /* declaration_list  */
  YYSYMBOL_declaration = 40,               /* declaration  */
  YYSYMBOL_var_declaration = 41,           /* var_declaration  */
  YYSYMBOL_function_declaration = 42,      /* function_declaration  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_44_2 = 44,                      /* $@2  */
  YYSYMBOL_params_list = 45,               /* params_list  */
  YYSYMBOL_brackets_stmt = 46,             /* brackets_stmt  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_stmts = 48,                     /* stmts  */
  YYSYMBOL_stmt = 49,                      /* stmt  */
  YYSYMBOL_io_stmt = 50,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 51,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 52,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 53,               /* return_stmt  */
  YYSYMBOL_set_stmt = 54,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 55,                  /* exp_stmt  */
  YYSYMBOL_assignment = 56,                /* assignment  */
  YYSYMBOL_exp = 57,                       /* exp  */
  YYSYMBOL_set_exp = 58,                   /* set_exp  */
  YYSYMBOL_set_aux_exp = 59,               /* set_aux_exp  */
  YYSYMBOL_set_in_exp = 60,                /* set_in_exp  */
  YYSYMBOL_or_exp = 61,                    /* or_exp  */
  YYSYMBOL_and_exp = 62,                   /* and_exp  */
  YYSYMBOL_relational_exp = 63,            /* relational_exp  */
  YYSYMBOL_sum_exp = 64,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 65,                   /* mul_exp  */
  YYSYMBOL_unary_exp = 66,                 /* unary_exp  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_68_5 = 68,                      /* $@5  */
  YYSYMBOL_69_6 = 69,                      /* $@6  */
  YYSYMBOL_primal_exp = 70,                /* primal_exp  */
  YYSYMBOL_arg_list = 71,                  /* arg_list  */
  YYSYMBOL_type = 72,                      /* type  */
  YYSYMBOL_const = 73                      /* const  */
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
#define YYLAST   4352

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  494

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
       2,     2,     2,    30,     2,     2,     2,     2,     2,     2,
      33,    32,     2,     2,    36,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
       2,    31,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    34,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   110,   116,   121,   124,   127,   130,   154,
     154,   187,   187,   217,   247,   278,   278,   290,   293,   299,
     304,   307,   310,   313,   316,   319,   322,   325,   328,   333,
     348,   353,   360,   370,   376,   385,   392,   409,   428,   435,
     454,   457,   462,   468,   476,   492,   510,   526,   532,   538,
     556,   566,   569,   574,   584,   589,   599,   604,   615,   620,
     630,   635,   638,   642,   646,   666,   666,   691,   691,   715,
     736,   736,   760,   781,   796,   801,   816,   825,   841,   844,
     849,   857,   866,   873,   880,   887,   896,   902,   908
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
  "RELATIONAL_OP", "AND", "OR", "SET_OP1", "SET_OP2", "INPUT", "OUTPUT",
  "INTEGER", "FLOAT", "STRING", "EMPTY", "IF", "ELSE", "THEN", "FOR",
  "RETURN", "INFIX_OP", "FORALL", "ISSET", "';'", "'!'", "'='", "')'",
  "'('", "'}'", "'{'", "','", "$accept", "program", "declaration_list",
  "declaration", "var_declaration", "function_declaration", "$@1", "$@2",
  "params_list", "brackets_stmt", "$@3", "stmts", "stmt", "io_stmt",
  "for_stmt", "if_else_stmt", "return_stmt", "set_stmt", "exp_stmt",
  "assignment", "exp", "set_exp", "set_aux_exp", "set_in_exp", "or_exp",
  "and_exp", "relational_exp", "sum_exp", "mul_exp", "unary_exp", "$@4",
  "$@5", "$@6", "primal_exp", "arg_list", "type", "const", YY_NULLPTR
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,    59,
      33,    61,    41,    40,   125,   123,    44
};
#endif

#define YYPACT_NINF (-320)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1371,  1289,    15,    17,    37,    39,     3,  1298,  1444,  1513,
    1545,    66,  -320,  1572,    -2,  1819,   295,  1331,    -3,    48,
     101,    13,    13,    61,  1841,  3555,  1922,  3672,  1331,  3588,
     105,  1555,   255,   113,   115,   143,   154,  1453,  3899,  3904,
     155,   166,  1161,   168,   170,    46,  1203,  2785,  2820,   179,
    2855,  2890,  2925,  2960,  2995,  3030,  3065,   197,   201,    31,
      27,   633,  1078,  1070,   663,  3926,  3931,  3936,   232,  3958,
    1161,    78,  1663,  3963,  1221,   234,   246,   110,  1203,   248,
    1865,   240,   256,     9,  1891,   244,  3968,   231,  3683,   278,
    3100,  3135,   215,   114,   273,   114,   114,   114,   114,   287,
     294,  3990,  1239,   149,   254,    75,    63,   281,   292,   325,
     360,   361,   365,   315,   374,  3170,   389,   384,   393,   177,
     441,  3995,   667,   757,  1181,   908,   989,  1125,   808,  4000,
    4022,   129,   411,  4027,  1239,    56,  1203,   319,   429,   436,
     456,  3621,  1161,  1203,  4032,  4054,  4059,  1239,   470,   475,
    1239,  4064,   477,    26,   124,  3205,  3240,  3275,   774,   481,
      83,   307,   490,  4086,  4091,   501,  4096,  3588,   534,  3588,
    3588,  4118,  3310,   520,  3345,  3380,  3588,  3415,  3450,  3555,
    1923,   371,   529,   538,  3649,  3654,  3659,   539,   199,  1203,
     107,   337,   397,    88,   354,   467,  3684,  3689,  3694,  3719,
    1192,   480,   541,   545,  4123,  4128,  4147,   556,   203,  1203,
     163,  1150,  1083,  4152,  4157,  4176,  4181,   557,   558,   562,
     565,  3485,   547,   486,   568,   570,   515,   698,   914,   571,
     323,  1203,    52,   123,   212,   172,   615,   160,  1076,  1252,
    1334,  1347,   536,   237,   625,  1970,   572,   580,   583,   588,
    1161,   599,  3555,  2050,  2085,  2120,  2155,  2190,  2225,  2260,
    2295,   540,   621,   564,   314,   623,  3588,   579,  1998,  3724,
    1221,   234,   818,  2003,   619,  3729,   624,   314,   314,   314,
     314,   616,  1932,  4186,  1221,   234,   903,  2036,   627,  4205,
     637,   237,   237,   237,   237,  1221,   234,  1221,   234,   797,
     729,  1391,  1221,   234,   953,  1025,   643,  1402,   652,   957,
     650,   966,   650,   650,   650,   650,   430,   649,   653,   508,
     324,   605,   691,   682,   833,  1203,   248,   659,   694,  3588,
    2330,  2365,   676,   230,  1203,   686,  3754,  1239,   872,   731,
     689,   700,   701,   944,  1009,  3759,   690,   506,  3764,  3789,
    4210,  1239,   970,   740,   703,   710,   713,  1011,  1103,  4215,
    1156,  1300,  4234,  4239,   744,   718,   830,   722,  1460,  1239,
    1046,   842,   741,   742,   752,  1110,  1107,  1489,   370,   760,
     764,   388,   279,   425,   437,   867,   981,  1496,  1590,  1221,
     234,   780,   781,   790,   792,   799,  2400,   807,   801,  2435,
     811,  3520,   813,  3794,  1239,   242,   266,  3799,  3824,  3829,
    1239,   825,   826,   827,  4244,  1239,   814,   839,  4263,  4268,
    4273,  1239,   835,   837,   840,   844,  1043,  1120,   851,  1595,
    1239,   402,   469,  1690,  1699,  1732,  1239,   852,   856,  1221,
     234,   933,   859,   810,   869,   884,  3621,  1161,  1203,  2470,
    3834,   883,   886,  3859,  3864,  4292,   889,   896,  4297,  4302,
    1761,   901,   904,  1795,  1824,   973,   911,   984,  1014,  2505,
    2540,  2575,  2610,   919,   528,  1036,  3869,  3894,  4321,  4326,
    1853,  1860,   574,   582,  3621,   534,  3621,  3621,  2645,   917,
    2680,  2715,  3621,  2750
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,  -320,   864,     4,  -320,  -320,  -320,   947,   -20,
    -169,   -44,  -132,  -125,  -116,  -109,   -65,   -51,   -39,   -74,
     -16,   861,  -226,  1515,  1613,  1344,  1246,   -31,  1037,   617,
    -319,  -231,  -302,   251,  -126,     0,   434
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,    47,    10,    17,    18,    19,    48,
      29,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     131,    59,   108,    60,    61,    62,    63,    64,    65,    66,
     134,   102,   147,    67,   132,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    26,    27,    12,     9,   114,    89,    11,   152,   158,
     266,     9,   117,    58,    24,   195,   255,    20,   -83,   404,
     -82,   162,   217,   218,   165,   256,    81,    15,    20,    21,
      87,    16,   257,   415,    58,   172,   337,   174,   175,   -52,
     -84,   410,   -85,   212,   177,   340,   195,   195,    25,    84,
     351,   430,   242,   -52,   100,   421,   -52,    92,   -45,   354,
     -41,   111,   112,    37,    38,   128,    39,   261,   369,    14,
     365,   237,   367,   436,    85,   243,   258,   372,   309,    46,
      22,   -67,   -42,   329,   -41,   -42,   -67,   -52,   -41,   244,
     259,   -67,   -67,   -14,   173,   -67,   -67,    28,   -67,   277,
     -51,   -52,   260,   237,    23,   195,   -67,   135,   -67,   242,
     101,   -67,   195,   180,   -51,   169,   237,    80,   181,   237,
     -51,   254,    32,   182,   183,   262,   159,   184,   185,   110,
     186,    37,    38,   242,    39,   -52,   264,   -13,   187,   -41,
     188,   263,    44,   189,    45,   253,    74,    46,    75,   -52,
     244,    58,   -65,    58,    58,   -52,   -44,   -65,   195,   -52,
      58,   -81,   -65,   -65,   442,   150,   -65,   -65,   314,   -65,
     -56,   -56,   -56,   276,   291,   -51,    76,   -65,   195,   -65,
     -70,   133,   -65,   312,   -51,   -70,   -56,    77,    78,   -51,
     -70,   -70,   -56,   290,   -70,   -70,   -56,   -70,   -51,    79,
     195,    82,   273,    83,   -51,   -70,   287,   -70,   -51,   146,
     -70,   402,   212,    88,   466,   308,   184,   185,   122,   186,
     204,   205,   335,   206,   310,   413,    90,   274,   219,   220,
      91,   288,   189,   195,   327,    99,   209,   107,   311,   212,
     200,   277,   -50,   428,   -40,   201,   195,   347,   -40,   109,
      58,   113,   395,   212,   204,   205,   -50,   206,    72,   116,
     212,   361,   -50,   121,   212,   207,   212,   208,   -42,   115,
     209,   212,    37,    38,   -42,    39,   125,   120,   451,   237,
     242,   237,   386,    73,   452,   398,   219,   220,    46,   456,
     312,   -50,   -43,   195,   195,   457,    86,   198,   -43,    -9,
      -9,    -9,    -9,   195,   461,   -50,   237,   136,   393,   394,
     462,   -50,   -18,    58,   472,   -50,   221,   180,   400,   264,
     237,   255,   181,   -39,   137,   215,   305,   -11,   198,   198,
     256,   184,   185,   244,   186,   291,   -50,   257,   237,   170,
     226,   227,   187,   228,   188,   -43,    70,   189,   -43,   -52,
     -50,   306,   488,   240,   490,   491,   231,   138,   212,   255,
     493,   255,   255,   -52,   278,   -54,   -54,   255,   256,   -52,
     256,   256,   261,   237,   268,   257,   256,   257,   257,   237,
     -54,   258,   -49,   257,   237,   240,   -54,   198,   184,   185,
     237,   186,   139,   140,   198,   259,   -49,   141,   240,   237,
     -48,   240,   -49,   142,   189,   237,   -49,   260,   212,   264,
     261,   489,   261,   261,   -48,   143,   144,   195,   261,   258,
     -48,   258,   258,   244,   -48,   145,   254,   258,   -42,   -40,
     262,   473,   269,   259,   -42,   259,   259,   -46,   -42,   275,
     198,   259,   -49,   151,   148,   260,   263,   260,   260,   -47,
     253,   -46,   283,   260,   217,   218,   -49,   -46,   155,   289,
     198,   -46,   -49,   -47,   254,   156,   254,   254,   262,   -47,
     262,   262,   254,   -47,   301,   279,   262,   -56,   -56,   -56,
     199,   307,   198,   282,   263,   157,   263,   263,   253,   300,
     253,   253,   263,   -56,   215,   -43,   253,   204,   205,   -56,
     206,   -43,   163,   226,   227,   -43,   228,   164,   216,   166,
     168,   199,   199,   209,   279,   198,   -55,   -55,   -55,   231,
     -48,   215,   171,   -86,   -86,   -86,   -86,   -86,   198,   198,
     198,   198,   -55,   -80,   -48,   215,   241,   265,   -55,   316,
     -48,   -86,   215,   215,   215,   215,   215,   -86,   215,   317,
     318,   -86,   176,   215,   242,   -77,   -77,   -77,   -77,   -77,
     486,   240,   270,   240,   240,   240,   240,   332,   241,   330,
     199,   271,   272,   -77,   284,   198,   198,   199,   285,   -77,
     299,   241,   -67,   -77,   241,   198,   -42,   -67,   240,   286,
     295,   296,   -67,   -67,   -43,   297,   -67,   -67,   298,   -67,
     -42,   302,   240,   303,   304,   323,   -42,   -67,   -43,   -67,
     -42,   336,   -67,   324,   -43,   199,   325,   -46,   -43,   -67,
     240,   326,   199,   199,   -67,   313,   -54,   -54,   321,   -67,
     -67,   -46,   328,   -67,   -67,   216,   -67,   -46,   317,   318,
     215,   -54,   216,   199,   -67,    93,   -67,   -54,   350,   -67,
     331,   -54,   344,   222,   334,   240,   345,   241,   223,    94,
     358,   240,   -40,   197,   241,   199,   240,   226,   227,   359,
     228,    97,   240,   -56,   -56,   -56,   376,   216,   229,   -49,
     230,   240,   389,   231,   377,   391,   390,   240,   396,   -56,
     215,   214,   -56,   -49,   197,   197,   -49,   397,   199,   198,
     278,   -53,   -53,   -47,   216,   399,   -87,   -87,   -87,   -87,
     -87,   199,   199,   199,   199,   130,   -53,   -47,   216,   239,
     401,   406,   -53,   -47,   -87,   216,   216,   216,   216,   216,
     -87,   216,   407,   408,   -87,   417,   216,   -77,   -77,   -77,
     -77,   -77,   418,   -52,   241,   419,   241,   241,   241,   241,
     425,   239,   -52,   197,   427,   -77,   -52,   -52,   199,   199,
     197,   -77,   370,   405,   239,   -77,   -52,   239,   199,   -48,
     -52,   241,   416,   432,   433,   -33,   424,   -33,   -33,   -33,
     -33,   -33,   -33,   -48,   434,   241,   -48,   -33,   -33,   -33,
     -33,   -33,   -33,   439,   -33,   -33,   167,   440,   -33,   -33,
     -67,   -33,   -33,   241,   -33,   -67,   197,   -33,   -33,   -33,
     -67,   -67,   443,   444,   -67,   -67,    97,   -67,   -55,   -55,
     -55,   341,   445,   216,   446,   -67,   197,   -67,   447,   368,
     -67,   217,   218,   448,   -55,   449,   180,   -55,   241,   469,
     -42,   181,   -52,   -39,   241,   450,   182,   183,   197,   241,
     184,   185,   392,   186,   -52,   241,   -52,   453,   454,   455,
     214,   187,   426,   188,   241,   -43,   189,   458,   -52,   459,
     241,    13,   -42,   216,   431,   -65,   -43,   313,   -53,   -53,
     -65,   197,   199,   460,   463,   -65,   -65,   214,   464,   -65,
     -65,   468,   -65,   -53,   197,   197,   197,   349,   470,   -53,
     -65,   214,   -65,   -53,   403,   -65,   355,   190,   214,   214,
     214,   363,   214,   471,   214,   476,   217,   218,   477,   214,
     -46,   478,   -88,   -88,   -88,   -88,   -88,   239,   479,   239,
     239,   239,   388,   480,   -46,   104,   481,   -46,   190,   190,
     -88,   197,   197,   483,   118,   -52,   -88,   -70,   485,   492,
     -88,   197,   -70,   123,   239,   126,   373,   -70,   -70,   -52,
     378,   -70,   -70,   232,   -70,   467,   217,   218,   239,   383,
     379,   380,   -70,   -65,   -70,    30,   409,   -70,   -65,   379,
     380,   149,     0,   -65,   -65,   -52,   239,   -65,   -65,   314,
     -65,   -55,   -55,   -55,     0,   232,   -42,   153,   -65,   -52,
     -65,   -47,   414,   -65,   160,   482,   214,   -55,   232,     0,
     -42,   232,   411,   -55,   -70,   -47,   -42,   -55,   -47,   -70,
       0,   239,   217,   218,   -70,   -70,   -43,   239,   -70,   -70,
       0,   -70,   239,   -77,   -77,   -77,   -77,   -77,   239,   -70,
     -43,   -70,     0,   420,   -70,     0,   -43,   239,   264,   -65,
     190,   -77,     0,   239,   -65,   -42,   214,   -77,   375,   -65,
     -65,   -77,   244,   -65,   -65,   197,   -65,     0,   487,   -42,
     190,     0,   -42,     0,   -65,     0,   -65,     0,   429,   -65,
      96,   -54,   -54,   196,   -58,   315,   -58,   -58,   -58,    95,
     -51,   293,   190,   -56,   -56,   -56,   -54,     0,     0,   -54,
       0,     0,   -58,   319,   -51,   322,   422,   -51,   -58,   -56,
     437,   213,   -58,   -70,   196,   196,   217,   218,   -70,     0,
     217,   218,     0,   -70,   -70,     0,     0,   -70,   -70,     0,
     -70,   104,   -43,   342,   129,    96,   -53,   -53,   -70,   238,
     -70,     0,   435,   -70,     0,   104,   -43,   356,     0,   -43,
       0,   -53,     0,     0,   -53,     0,   104,     0,   104,     0,
     292,   -54,   -54,   104,    80,   374,   292,   -53,   -53,    32,
     381,   238,   384,   196,    33,    34,   -54,     0,    37,    38,
     196,    39,   -53,     0,   238,   190,   190,   238,     0,    44,
       0,    45,    95,   -50,    46,   190,     0,     0,   232,     0,
     -77,   -77,   -77,   -77,   -77,   412,   180,   -50,     0,     0,
     -50,   181,   232,     0,     0,     0,   182,   183,   -77,   423,
     184,   185,     0,   186,   200,   281,   196,     0,     0,   201,
     232,   187,     0,   188,   202,   203,   189,   438,   204,   205,
       0,   206,   222,     0,     0,     0,   196,   223,     0,   207,
     104,   208,   224,   225,   209,     0,   226,   227,     0,   228,
     -60,   -60,   -60,   -60,   -60,   232,     0,   229,   196,   230,
       0,   232,   231,     0,     0,     0,   232,     0,   -60,     0,
     213,     0,   232,     0,   -60,     0,     0,     0,   -60,    -7,
      -7,   232,   194,    -7,    -7,    -7,    -7,   232,    -2,     1,
     104,   196,     2,     3,     4,     5,     0,   213,   293,   474,
     -55,   -55,   -55,     0,   196,   196,   348,     0,     0,     0,
     211,   213,     0,   194,   194,     0,   -55,     0,   213,   213,
     362,     0,   213,     0,   213,     2,     3,     4,     5,   213,
       0,   127,   -61,   -61,   -61,   -61,   -61,   238,   236,   238,
     238,   387,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -61,   196,   196,     0,     0,     0,   -61,     0,     0,     0,
     -61,   196,     1,   -78,   238,     2,     3,     4,     5,   -78,
     236,     0,   194,   -78,     0,     0,     0,     0,   238,   194,
     193,     0,     0,   236,     0,     0,   236,     0,     0,   -63,
     -63,   -63,   -63,   -63,     0,     0,   238,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,     0,     0,   -63,   210,     0,
       0,   193,   193,   -63,     0,     0,   213,   -63,   -62,     0,
       0,     0,     0,     0,   -62,   194,     0,   124,   -62,     0,
       0,   238,     0,     0,    -4,    -4,   235,   238,    -4,    -4,
      -4,    -4,   238,     0,     0,   194,     0,     0,   238,     0,
       0,   -86,   -86,   -86,   -86,   -86,     0,   238,   -69,   -69,
     -69,   -69,   -69,   238,     0,     0,   213,   194,   235,   -86,
     193,     0,   -86,     0,     0,   196,   -69,   193,     0,   211,
       0,   235,   -69,     0,   235,     0,   -69,   -79,   -79,   -79,
     -79,   -79,     0,     0,   -57,   315,   -57,   -57,   -57,     0,
     194,     0,     0,    -6,    -6,   -79,   211,    -6,    -6,    -6,
      -6,   -79,   -57,   346,     0,   -79,     0,     0,   -57,     0,
     211,     0,   -57,   193,     0,     0,     0,   360,     0,     0,
       0,   211,     0,   211,     0,    -5,    -5,     0,   211,    -5,
      -5,    -5,    -5,   193,     0,     0,   236,     0,   385,     0,
       0,   191,     0,   -77,   -77,   -77,   -77,   -77,     0,     0,
     194,   194,    -3,    -3,     0,   193,    -3,    -3,    -3,    -3,
     194,   -77,     0,   236,   -77,     0,    70,   320,    71,   105,
       0,     0,   191,   191,     0,     0,     0,   236,   -59,   -59,
     -59,   -59,   -59,   -64,   -64,   -64,   -64,   -64,   333,     0,
       0,     0,     0,     0,   210,   236,   -59,   233,     0,     0,
       0,   -64,   -59,     0,     0,     0,   -59,   -64,   210,     0,
       0,   -64,     0,     0,     0,   211,     0,     0,     0,   210,
       0,   210,     0,     0,     0,     0,   210,     0,     0,   233,
     236,   191,     0,     0,   382,     0,   236,     0,   191,   192,
       0,   236,   233,     0,     0,   233,     0,   236,   193,   193,
       0,   -77,   -77,   -77,   -77,   -77,   236,     0,   193,     0,
       0,   235,   236,     0,     0,   211,     0,   106,     0,   -77,
     192,   192,   -77,     0,   194,   235,   103,     0,   -73,   -73,
     -73,   -73,   -73,     0,   191,     0,     0,   -74,   -74,   -74,
     -74,   -74,     0,   235,     0,   234,   -73,     0,     0,     0,
       0,     0,   -73,     0,   191,   -74,   -73,     0,     0,     0,
       0,   -74,     0,   210,     0,   -74,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,     0,   191,   234,   235,   154,
       0,     0,     0,     0,   235,     0,   161,     0,   -72,   235,
     234,     0,     0,   234,   -72,   235,     0,     0,   -72,   -68,
     -68,   -68,   -68,   -68,   235,     0,     0,     0,     0,     0,
     235,     0,     0,   210,     0,   339,     0,   -68,     0,     0,
       0,     0,   193,   -68,     0,     0,     0,   -68,     0,   353,
       0,     0,   192,   -75,   -75,   -75,   -75,   -75,     0,     0,
     364,     0,   366,     0,     0,     0,     0,   371,     0,    -8,
      -8,   -75,   192,    -8,    -8,    -8,    -8,   -75,     0,     0,
       0,   -75,   -76,   -76,   -76,   -76,   -76,     0,     0,   191,
     191,   -17,   -17,     0,   192,   -17,   -17,   -17,   -17,   191,
     -76,     0,   233,     0,     0,     0,   -76,     0,     0,     0,
     -76,   -66,   -66,   -66,   -66,   -66,   233,     0,   -71,   -71,
     -71,   -71,   -71,   -77,   -77,   -77,   -77,   -77,     0,   -66,
       0,     0,     0,   106,   233,   -66,   -71,     0,     0,   -66,
       0,   -77,   -71,     0,   -77,     0,   -71,   106,    71,   -77,
     -77,   -77,   -77,   -77,   441,     0,     0,     0,   106,     0,
     106,     0,     0,     0,     0,   106,     0,   -77,     0,   233,
     -77,     0,   -12,   -12,   119,   233,   -12,   -12,   -12,   -12,
     233,   -77,   -77,   -77,   -77,   -77,   233,   192,   192,     0,
     -77,   -77,   -77,   -77,   -77,   233,     0,   192,     0,   -77,
     234,   233,     0,     0,   465,   -77,   267,     0,   -77,     0,
       0,     0,     0,   191,   234,   352,     0,     0,     0,     0,
       0,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,
       0,     0,   234,   -17,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,     0,   -17,   -17,     0,   -17,   -17,     0,
     -17,     0,   106,   -17,   -17,   -17,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   234,     0,     0,
       0,     0,     0,   234,   -77,     0,     0,     0,   234,   -77,
     -77,   338,     0,     0,   234,   -77,   343,     0,     0,     0,
       0,     0,     0,   234,   -77,   -77,   -77,   -77,   -77,   234,
       0,   -26,   106,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,   475,   -77,   -26,   -26,   -26,   -26,   -26,   -26,   357,
     -26,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,
     -26,     0,     0,   -26,   -26,   -26,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,     0,   -28,   -28,     0,   -28,     0,     0,   -28,   -28,
     -28,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,     0,   -23,   -23,     0,   -23,   -23,     0,
     -23,     0,     0,   -23,   -23,   -23,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,   -20,
     -20,     0,   -20,   -20,     0,   -20,     0,     0,   -20,   -20,
     -20,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,     0,   -21,   -21,     0,   -21,   -21,     0,
     -21,     0,     0,   -21,   -21,   -21,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,     0,   -22,   -22,     0,   -22,     0,     0,   -22,   -22,
     -22,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,
     -25,     0,     0,   -25,   -25,   -25,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,   -24,
     -24,     0,   -24,   -24,     0,   -24,     0,     0,   -24,   -24,
     -24,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,
     -27,     0,     0,   -27,   -27,   -27,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,   -38,
     -38,     0,   -38,   -38,     0,   -38,     0,     0,   -38,   -38,
     -38,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,
     -35,     0,     0,   -35,   -35,   -35,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,
      -8,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,   -16,   -16,     0,   -16,   -16,     0,   -16,   -16,     0,
     -16,     0,     0,   -16,   -16,   -16,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,
     -29,     0,   -29,   -29,     0,   -29,     0,     0,   -29,   -29,
     -29,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,     0,   -30,   -30,     0,   -30,   -30,     0,
     -30,     0,     0,   -30,   -30,   -30,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,
     -31,     0,   -31,   -31,     0,   -31,     0,     0,   -31,   -31,
     -31,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   484,     0,   -33,   -33,     0,   -33,   -33,     0,
     -33,     0,     0,   -33,   -33,   -33,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,     0,   -34,   -34,     0,   -34,     0,     0,   -34,   -34,
     -34,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,
     -36,     0,     0,   -36,   -36,   -36,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,
     -37,     0,   -37,   -37,     0,   -37,     0,     0,   -37,   -37,
     -37,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,
     -32,     0,     0,   -32,   -32,   -32,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,
     -26,     0,   -26,   -26,     0,   -26,     0,     0,   -26,   -26,
     -26,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,     0,     0,   -28,   -28,   -28,   178,     0,    31,     2,
       3,     4,     5,    32,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,     0,     0,    41,
      42,     0,    43,    44,     0,    45,     0,     0,    46,   -19,
     179,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,     0,     0,   -23,   -23,     0,   -23,   -23,     0,
     -23,     0,     0,   -23,   -23,   -23,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,   -20,
     -20,     0,   -20,   -20,     0,   -20,     0,     0,   -20,   -20,
     -20,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,     0,     0,   -21,   -21,     0,   -21,   -21,     0,
     -21,     0,     0,   -21,   -21,   -21,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,     0,     0,   -22,
     -22,     0,   -22,   -22,     0,   -22,     0,     0,   -22,   -22,
     -22,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,     0,     0,   -25,   -25,     0,   -25,   -25,     0,
     -25,     0,     0,   -25,   -25,   -25,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,     0,     0,   -24,
     -24,     0,   -24,   -24,     0,   -24,     0,     0,   -24,   -24,
     -24,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,     0,
     -27,     0,     0,   -27,   -27,   -27,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,
     -38,     0,   -38,   -38,     0,   -38,     0,     0,   -38,   -38,
     -38,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,     0,
     -35,     0,     0,   -35,   -35,   -35,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,   -29,
     -29,     0,   -29,   -29,     0,   -29,     0,     0,   -29,   -29,
     -29,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,     0,     0,   -30,   -30,     0,   -30,   -30,     0,
     -30,     0,     0,   -30,   -30,   -30,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,
     -31,     0,   -31,   -31,     0,   -31,     0,     0,   -31,   -31,
     -31,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,     0,     0,   -34,   -34,     0,   -34,   -34,     0,
     -34,     0,     0,   -34,   -34,   -34,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,   -36,
     -36,     0,   -36,   -36,     0,   -36,     0,     0,   -36,   -36,
     -36,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,     0,     0,   -37,   -37,     0,   -37,   -37,     0,
     -37,     0,     0,   -37,   -37,   -37,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,   -32,
     -32,     0,   -32,   -32,     0,   -32,     0,     0,   -32,   -32,
     -32,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,
       0,     0,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,     0,     0,   -17,   -17,     0,   -17,   -17,     0,
     -17,     0,     0,   -17,   -17,   -17,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,    -8,    -8,     0,     0,    -8,
      -8,     0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,
      -8,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,   -16,     0,     0,   -16,   -16,     0,   -16,   -16,     0,
     -16,     0,     0,   -16,   -16,   -16,   -15,     0,   -15,   -15,
     -15,   -15,   -15,   -15,     0,     0,     0,     0,   -15,   -15,
     -15,   -15,   -15,   -15,     0,   -15,   -15,     0,     0,   -15,
     -15,     0,   -15,   -15,     0,   -15,     0,     0,   -15,   178,
     -15,    31,     2,     3,     4,     5,    32,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,     0,    39,    40,
       0,     0,    41,    42,     0,    43,    44,     0,    45,     0,
       0,    46,   245,   179,    31,     2,     3,     4,     5,    32,
       0,     0,     0,     0,    33,    34,   246,   247,    37,    38,
       0,    39,   248,     0,     0,   249,   250,     0,   251,    44,
       0,    45,     0,     0,    46,     0,   252,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,
     -88,   -88,   -10,   -10,     0,   -86,   -10,   -10,   -10,   -10,
     -87,   -86,     0,   -16,   -16,   -88,   -87,   -16,   -16,   -16,
     -16,   -88,   -58,   280,   -58,   -58,   -58,   -60,   -60,   -60,
     -60,   -60,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
     -58,     0,     0,     0,     0,   -60,   -58,     0,     0,     0,
     -61,   -60,     0,     0,     0,     0,   -61,   -78,   -78,   -78,
     -78,   -78,   -63,   -63,   -63,   -63,   -63,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,   -78,     0,     0,     0,     0,
     -63,   -78,     0,     0,     0,   -62,   -63,     0,     0,     0,
       0,   -62,   -69,   -69,   -69,   -69,   -69,   -79,   -79,   -79,
     -79,   -79,   -57,   280,   -57,   -57,   -57,     0,     0,     0,
     -69,     0,     0,     0,     0,   -79,   -69,     0,     0,     0,
     -57,   -79,     0,     0,     0,     0,   -57,   -59,   -59,   -59,
     -59,   -59,   -64,   -64,   -64,   -64,   -64,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,   -59,     0,     0,     0,     0,
     -64,   -59,     0,     0,     0,   -73,   -64,     0,     0,     0,
       0,   -73,   -74,   -74,   -74,   -74,   -74,   -72,   -72,   -72,
     -72,   -72,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
     -74,     0,     0,     0,     0,   -72,   -74,     0,     0,     0,
     -68,   -72,     0,     0,     0,     0,   -68,   -75,   -75,   -75,
     -75,   -75,   -76,   -76,   -76,   -76,   -76,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,   -75,     0,     0,     0,     0,
     -76,   -75,     0,     0,     0,   -66,   -76,     0,     0,     0,
       0,   -66,   -71,   -71,   -71,   -71,   -71,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
     -71,     0,     0,     0,     0,   -87,   -71,     0,   -87,     0,
     -88,     0,     0,   -88,   -58,    98,   -58,   -58,   -58,   -60,
     -60,   -60,   -60,   -60,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,   -58,     0,     0,   -58,     0,   -60,     0,     0,
     -60,     0,   -61,     0,     0,   -61,   -78,   -78,   -78,   -78,
     -78,   -63,   -63,   -63,   -63,   -63,   -62,   -62,   -62,   -62,
     -62,     0,     0,     0,   -78,     0,     0,   -78,     0,   -63,
       0,     0,   -63,     0,   -62,     0,     0,   -62,   -69,   -69,
     -69,   -69,   -69,   -79,   -79,   -79,   -79,   -79,   -57,    98,
     -57,   -57,   -57,     0,     0,     0,   -69,     0,     0,   -69,
       0,   -79,     0,     0,   -79,     0,   -57,     0,     0,   -57,
     -59,   -59,   -59,   -59,   -59,   -64,   -64,   -64,   -64,   -64,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,   -59,     0,
       0,   -59,     0,   -64,     0,     0,   -64,     0,   -73,     0,
       0,   -73,   -74,   -74,   -74,   -74,   -74,   -72,   -72,   -72,
     -72,   -72,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
     -74,     0,     0,   -74,     0,   -72,     0,     0,   -72,     0,
     -68,     0,     0,   -68,   -75,   -75,   -75,   -75,   -75,   -76,
     -76,   -76,   -76,   -76,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -75,     0,     0,   -75,     0,   -76,     0,     0,
     -76,     0,   -66,     0,     0,   -66,   -71,   -71,   -71,   -71,
     -71,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,   -71,     0,     0,   -71,     0,   -86,
       0,     0,     0,     0,   -87,   -88,   -88,   -88,   -88,   -88,
     -58,   294,   -58,   -58,   -58,   -60,   -60,   -60,   -60,   -60,
       0,     0,     0,   -88,     0,     0,     0,     0,   -58,     0,
       0,     0,     0,   -60,   -61,   -61,   -61,   -61,   -61,   -78,
     -78,   -78,   -78,   -78,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,   -61,     0,     0,     0,     0,   -78,     0,     0,
       0,     0,   -63,   -62,   -62,   -62,   -62,   -62,   -69,   -69,
     -69,   -69,   -69,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,   -62,     0,     0,     0,     0,   -69,     0,     0,     0,
       0,   -79,   -57,   294,   -57,   -57,   -57,   -59,   -59,   -59,
     -59,   -59,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -57,     0,     0,     0,     0,   -59,     0,     0,     0,     0,
     -64,   -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,
     -74,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -73,
       0,     0,     0,     0,   -74,     0,     0,     0,     0,   -72,
     -68,   -68,   -68,   -68,   -68,   -75,   -75,   -75,   -75,   -75,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,   -68,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,   -76,   -66,
     -66,   -66,   -66,   -66,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,     0,     0,   -66,     0,     0,
       0,     0,   -71
};

static const yytype_int16 yycheck[] =
{
       0,    21,    22,     0,     0,    79,    50,     7,   134,   141,
     179,     7,     3,    29,     1,    46,   141,    17,     3,   338,
       3,   147,    13,    14,   150,   141,    42,    29,    28,    32,
      46,    33,   141,   352,    50,   167,   267,   169,   170,    12,
       3,   343,     3,    74,   176,   271,    77,    78,    35,     3,
     281,   370,    26,    26,    70,   357,    29,    26,    32,   285,
      29,    77,    78,    17,    18,    96,    20,   141,   299,     3,
     296,   102,   298,   375,    28,    12,   141,   303,    26,    33,
      32,     3,    26,   252,    32,    29,     8,    12,    36,    26,
     141,    13,    14,    32,   168,    17,    18,    36,    20,    11,
      12,    26,   141,   134,     3,   136,    28,    32,    30,    26,
      32,    33,   143,     3,    26,    32,   147,     3,     8,   150,
      32,   141,     8,    13,    14,   141,   142,    17,    18,    19,
      20,    17,    18,    26,    20,    12,    12,    32,    28,    32,
      30,   141,    28,    33,    30,   141,    33,    33,    33,    26,
      26,   167,     3,   169,   170,    32,    32,     8,   189,    36,
     176,    32,    13,    14,   390,    36,    17,    18,     8,    20,
      10,    11,    12,   189,    11,    12,    33,    28,   209,    30,
       3,    32,    33,    11,    12,     8,    26,    33,    33,    26,
      13,    14,    32,   209,    17,    18,    36,    20,    26,    33,
     231,    33,     3,    33,    32,    28,     3,    30,    36,    32,
      33,   337,   243,    34,   440,   231,    17,    18,     3,    20,
      17,    18,   266,    20,    12,   351,    29,    28,    13,    14,
      29,    28,    33,   264,   250,     3,    33,     3,    26,   270,
       3,    11,    12,   369,    32,     8,   277,   278,    36,     3,
     266,     3,   326,   284,    17,    18,    26,    20,     3,     3,
     291,   292,    32,    32,   295,    28,   297,    30,    26,    29,
      33,   302,    17,    18,    32,    20,     3,    33,   404,   310,
      26,   312,   313,    32,   410,   329,    13,    14,    33,   415,
      11,    12,    26,   324,   325,   421,    45,    46,    32,     4,
       5,     6,     7,   334,   430,    26,   337,    26,   324,   325,
     436,    32,    34,   329,   446,    36,    29,     3,   334,    12,
     351,   446,     8,    29,    32,    74,     3,    32,    77,    78,
     446,    17,    18,    26,    20,    11,    12,   446,   369,    32,
      17,    18,    28,    20,    30,    26,    31,    33,    29,    12,
      26,    28,   484,   102,   486,   487,    33,    32,   389,   484,
     492,   486,   487,    26,    10,    11,    12,   492,   484,    32,
     486,   487,   446,   404,     3,   484,   492,   486,   487,   410,
      26,   446,    12,   492,   415,   134,    32,   136,    17,    18,
     421,    20,    32,    32,   143,   446,    26,    32,   147,   430,
      12,   150,    32,    29,    33,   436,    36,   446,   439,    12,
     484,   485,   486,   487,    26,    26,    32,   448,   492,   484,
      32,   486,   487,    26,    36,    32,   446,   492,    26,    32,
     446,   447,   181,   484,    32,   486,   487,    12,    36,   188,
     189,   492,    12,    32,     3,   484,   446,   486,   487,    12,
     446,    26,   201,   492,    13,    14,    26,    32,    29,   208,
     209,    36,    32,    26,   484,    29,   486,   487,   484,    32,
     486,   487,   492,    36,   223,     8,   492,    10,    11,    12,
      46,   230,   231,     3,   484,    29,   486,   487,   484,     3,
     486,   487,   492,    26,   243,    26,   492,    17,    18,    32,
      20,    32,    32,    17,    18,    36,    20,    32,    74,    32,
      29,    77,    78,    33,     8,   264,    10,    11,    12,    33,
      12,   270,    32,     8,     9,    10,    11,    12,   277,   278,
     279,   280,    26,    32,    26,   284,   102,     3,    32,     3,
      32,    26,   291,   292,   293,   294,   295,    32,   297,    13,
      14,    36,    32,   302,    26,     8,     9,    10,    11,    12,
      32,   310,    33,   312,   313,   314,   315,     3,   134,    29,
     136,    33,    33,    26,    33,   324,   325,   143,    33,    32,
      33,   147,     3,    36,   150,   334,    12,     8,   337,    33,
      33,    33,    13,    14,    12,    33,    17,    18,    33,    20,
      26,    33,   351,    33,    33,    33,    32,    28,    26,    30,
      36,    32,    33,    33,    32,   181,    33,    12,    36,     3,
     369,    33,   188,   189,     8,    10,    11,    12,     3,    13,
      14,    26,    33,    17,    18,   201,    20,    32,    13,    14,
     389,    26,   208,   209,    28,    12,    30,    32,    32,    33,
      29,    36,    33,     3,    31,   404,    32,   223,     8,    26,
      33,   410,    29,    46,   230,   231,   415,    17,    18,    32,
      20,     8,   421,    10,    11,    12,    33,   243,    28,    12,
      30,   430,    33,    33,    32,     3,    33,   436,    29,    26,
     439,    74,    29,    26,    77,    78,    29,     3,   264,   448,
      10,    11,    12,    12,   270,    29,     8,     9,    10,    11,
      12,   277,   278,   279,   280,    98,    26,    26,   284,   102,
      34,    32,    32,    32,    26,   291,   292,   293,   294,   295,
      32,   297,    32,    32,    36,    32,   302,     8,     9,    10,
      11,    12,    32,    12,   310,    32,   312,   313,   314,   315,
      32,   134,    12,   136,    32,    26,    12,    26,   324,   325,
     143,    32,    33,    32,   147,    36,    26,   150,   334,    12,
      26,   337,    32,    32,    32,     1,    32,     3,     4,     5,
       6,     7,     8,    26,    32,   351,    29,    13,    14,    15,
      16,    17,    18,    33,    20,    21,    22,    33,    24,    25,
       3,    27,    28,   369,    30,     8,   189,    33,    34,    35,
      13,    14,    32,    32,    17,    18,     8,    20,    10,    11,
      12,     3,    32,   389,    32,    28,   209,    30,    29,    32,
      33,    13,    14,    26,    26,    34,     3,    29,   404,    29,
      26,     8,    12,    32,   410,    32,    13,    14,   231,   415,
      17,    18,    19,    20,    12,   421,    26,    32,    32,    32,
     243,    28,    32,    30,   430,    26,    33,    32,    26,    32,
     436,     7,    32,   439,    32,     3,    32,    10,    11,    12,
       8,   264,   448,    32,    32,    13,    14,   270,    32,    17,
      18,    32,    20,    26,   277,   278,   279,   280,    29,    32,
      28,   284,    30,    36,    32,    33,     3,    46,   291,   292,
     293,   294,   295,    29,   297,    32,    13,    14,    32,   302,
      12,    32,     8,     9,    10,    11,    12,   310,    32,   312,
     313,   314,   315,    32,    26,    74,    32,    29,    77,    78,
      26,   324,   325,    32,    83,    12,    32,     3,    29,    32,
      36,   334,     8,    92,   337,    94,     3,    13,    14,    26,
       3,    17,    18,   102,    20,    32,    13,    14,   351,     3,
      13,    14,    28,     3,    30,    28,    32,    33,     8,    13,
      14,   120,    -1,    13,    14,    12,   369,    17,    18,     8,
      20,    10,    11,    12,    -1,   134,    12,   136,    28,    26,
      30,    12,    32,    33,   143,    32,   389,    26,   147,    -1,
      26,   150,     3,    32,     3,    26,    32,    36,    29,     8,
      -1,   404,    13,    14,    13,    14,    12,   410,    17,    18,
      -1,    20,   415,     8,     9,    10,    11,    12,   421,    28,
      26,    30,    -1,    32,    33,    -1,    32,   430,    12,     3,
     189,    26,    -1,   436,     8,    12,   439,    32,    33,    13,
      14,    36,    26,    17,    18,   448,    20,    -1,    32,    26,
     209,    -1,    29,    -1,    28,    -1,    30,    -1,    32,    33,
      10,    11,    12,    46,     8,     9,    10,    11,    12,    11,
      12,     8,   231,    10,    11,    12,    26,    -1,    -1,    29,
      -1,    -1,    26,   242,    26,   244,     3,    29,    32,    26,
       3,    74,    36,     3,    77,    78,    13,    14,     8,    -1,
      13,    14,    -1,    13,    14,    -1,    -1,    17,    18,    -1,
      20,   270,    12,   272,    97,    10,    11,    12,    28,   102,
      30,    -1,    32,    33,    -1,   284,    26,   286,    -1,    29,
      -1,    26,    -1,    -1,    29,    -1,   295,    -1,   297,    -1,
      10,    11,    12,   302,     3,   304,    10,    11,    12,     8,
     309,   134,   311,   136,    13,    14,    26,    -1,    17,    18,
     143,    20,    26,    -1,   147,   324,   325,   150,    -1,    28,
      -1,    30,    11,    12,    33,   334,    -1,    -1,   337,    -1,
       8,     9,    10,    11,    12,   344,     3,    26,    -1,    -1,
      29,     8,   351,    -1,    -1,    -1,    13,    14,    26,   358,
      17,    18,    -1,    20,     3,    33,   189,    -1,    -1,     8,
     369,    28,    -1,    30,    13,    14,    33,   376,    17,    18,
      -1,    20,     3,    -1,    -1,    -1,   209,     8,    -1,    28,
     389,    30,    13,    14,    33,    -1,    17,    18,    -1,    20,
       8,     9,    10,    11,    12,   404,    -1,    28,   231,    30,
      -1,   410,    33,    -1,    -1,    -1,   415,    -1,    26,    -1,
     243,    -1,   421,    -1,    32,    -1,    -1,    -1,    36,     0,
       1,   430,    46,     4,     5,     6,     7,   436,     0,     1,
     439,   264,     4,     5,     6,     7,    -1,   270,     8,   448,
      10,    11,    12,    -1,   277,   278,   279,    -1,    -1,    -1,
      74,   284,    -1,    77,    78,    -1,    26,    -1,   291,   292,
     293,    -1,   295,    -1,   297,     4,     5,     6,     7,   302,
      -1,    95,     8,     9,    10,    11,    12,   310,   102,   312,
     313,   314,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      26,   324,   325,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      36,   334,     1,    26,   337,     4,     5,     6,     7,    32,
     134,    -1,   136,    36,    -1,    -1,    -1,    -1,   351,   143,
      46,    -1,    -1,   147,    -1,    -1,   150,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    -1,   369,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    26,    74,    -1,
      -1,    77,    78,    32,    -1,    -1,   389,    36,    26,    -1,
      -1,    -1,    -1,    -1,    32,   189,    -1,    93,    36,    -1,
      -1,   404,    -1,    -1,     0,     1,   102,   410,     4,     5,
       6,     7,   415,    -1,    -1,   209,    -1,    -1,   421,    -1,
      -1,     8,     9,    10,    11,    12,    -1,   430,     8,     9,
      10,    11,    12,   436,    -1,    -1,   439,   231,   134,    26,
     136,    -1,    29,    -1,    -1,   448,    26,   143,    -1,   243,
      -1,   147,    32,    -1,   150,    -1,    36,     8,     9,    10,
      11,    12,    -1,    -1,     8,     9,    10,    11,    12,    -1,
     264,    -1,    -1,     0,     1,    26,   270,     4,     5,     6,
       7,    32,    26,   277,    -1,    36,    -1,    -1,    32,    -1,
     284,    -1,    36,   189,    -1,    -1,    -1,   291,    -1,    -1,
      -1,   295,    -1,   297,    -1,     0,     1,    -1,   302,     4,
       5,     6,     7,   209,    -1,    -1,   310,    -1,   312,    -1,
      -1,    46,    -1,     8,     9,    10,    11,    12,    -1,    -1,
     324,   325,     0,     1,    -1,   231,     4,     5,     6,     7,
     334,    26,    -1,   337,    29,    -1,    31,   243,    33,    74,
      -1,    -1,    77,    78,    -1,    -1,    -1,   351,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,   264,    -1,
      -1,    -1,    -1,    -1,   270,   369,    26,   102,    -1,    -1,
      -1,    26,    32,    -1,    -1,    -1,    36,    32,   284,    -1,
      -1,    36,    -1,    -1,    -1,   389,    -1,    -1,    -1,   295,
      -1,   297,    -1,    -1,    -1,    -1,   302,    -1,    -1,   134,
     404,   136,    -1,    -1,   310,    -1,   410,    -1,   143,    46,
      -1,   415,   147,    -1,    -1,   150,    -1,   421,   324,   325,
      -1,     8,     9,    10,    11,    12,   430,    -1,   334,    -1,
      -1,   337,   436,    -1,    -1,   439,    -1,    74,    -1,    26,
      77,    78,    29,    -1,   448,   351,    33,    -1,     8,     9,
      10,    11,    12,    -1,   189,    -1,    -1,     8,     9,    10,
      11,    12,    -1,   369,    -1,   102,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,   209,    26,    36,    -1,    -1,    -1,
      -1,    32,    -1,   389,    -1,    36,    -1,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    -1,   231,   134,   404,   136,
      -1,    -1,    -1,    -1,   410,    -1,   143,    -1,    26,   415,
     147,    -1,    -1,   150,    32,   421,    -1,    -1,    36,     8,
       9,    10,    11,    12,   430,    -1,    -1,    -1,    -1,    -1,
     436,    -1,    -1,   439,    -1,   270,    -1,    26,    -1,    -1,
      -1,    -1,   448,    32,    -1,    -1,    -1,    36,    -1,   284,
      -1,    -1,   189,     8,     9,    10,    11,    12,    -1,    -1,
     295,    -1,   297,    -1,    -1,    -1,    -1,   302,    -1,     0,
       1,    26,   209,     4,     5,     6,     7,    32,    -1,    -1,
      -1,    36,     8,     9,    10,    11,    12,    -1,    -1,   324,
     325,     0,     1,    -1,   231,     4,     5,     6,     7,   334,
      26,    -1,   337,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      36,     8,     9,    10,    11,    12,   351,    -1,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    26,
      -1,    -1,    -1,   270,   369,    32,    26,    -1,    -1,    36,
      -1,    26,    32,    -1,    29,    -1,    36,   284,    33,     8,
       9,    10,    11,    12,   389,    -1,    -1,    -1,   295,    -1,
     297,    -1,    -1,    -1,    -1,   302,    -1,    26,    -1,   404,
      29,    -1,     0,     1,    33,   410,     4,     5,     6,     7,
     415,     8,     9,    10,    11,    12,   421,   324,   325,    -1,
       8,     9,    10,    11,    12,   430,    -1,   334,    -1,    26,
     337,   436,    -1,    -1,   439,    32,    33,    -1,    26,    -1,
      -1,    -1,    -1,   448,   351,    33,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,   369,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,   389,    33,    34,    35,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,   404,    -1,    -1,
      -1,    -1,    -1,   410,    26,    -1,    -1,    -1,   415,    26,
      32,    33,    -1,    -1,   421,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,   430,     8,     9,    10,    11,    12,   436,
      -1,     1,   439,     3,     4,     5,     6,     7,     8,    -1,
      -1,   448,    26,    13,    14,    15,    16,    17,    18,    33,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,     1,
      35,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,
      -1,    33,     1,    35,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    -1,    35,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     0,     1,    -1,    26,     4,     5,     6,     7,
      26,    32,    -1,     0,     1,    26,    32,     4,     5,     6,
       7,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,
      26,    32,    -1,    -1,    -1,    -1,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      26,    32,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,
      26,    32,    -1,    -1,    -1,    -1,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      26,    32,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,
      26,    32,    -1,    -1,    -1,    -1,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      26,    32,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    26,    32,    -1,    29,    -1,
      26,    -1,    -1,    29,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,
      29,    -1,    26,    -1,    -1,    29,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    26,
      -1,    -1,    29,    -1,    26,    -1,    -1,    29,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,    29,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    26,    -1,    -1,    29,    -1,    26,    -1,
      -1,    29,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    26,    -1,    -1,    29,    -1,
      26,    -1,    -1,    29,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,
      29,    -1,    26,    -1,    -1,    29,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    26,
      -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    26,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    26,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    26,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      26,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    38,    39,    40,    41,
      42,    72,     0,    40,     3,    29,    33,    43,    44,    45,
      72,    32,    32,     3,     1,    35,    46,    46,    36,    47,
      45,     3,     8,    13,    14,    15,    16,    17,    18,    20,
      21,    24,    25,    27,    28,    30,    33,    41,    46,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      60,    61,    62,    63,    64,    65,    66,    70,    72,    73,
      31,    33,     3,    70,    33,    33,    33,    33,    33,    33,
       3,    57,    33,    33,     3,    28,    70,    57,    34,    48,
      29,    29,    26,    12,    26,    11,    10,     8,     9,     3,
      57,    32,    68,    33,    58,    60,    61,     3,    59,     3,
      19,    57,    57,     3,    56,    29,     3,     3,    58,    33,
      33,    32,     3,    58,    62,     3,    58,    63,    64,    65,
      66,    57,    71,    32,    67,    32,    26,    32,    32,    32,
      32,    32,    29,    26,    32,    32,    32,    69,     3,    58,
      36,    32,    71,    58,    61,    29,    29,    29,    49,    57,
      58,    61,    71,    32,    32,    71,    32,    22,    29,    32,
      32,    32,    49,    56,    49,    49,    32,    49,     1,    35,
       3,     8,    13,    14,    17,    18,    20,    28,    30,    33,
      58,    60,    61,    62,    63,    64,    65,    66,    70,    73,
       3,     8,    13,    14,    17,    18,    20,    28,    30,    33,
      62,    63,    64,    65,    66,    70,    73,    13,    14,    13,
      14,    29,     3,     8,    13,    14,    17,    18,    20,    28,
      30,    33,    58,    60,    61,    62,    63,    64,    65,    66,
      70,    73,    26,    12,    26,     1,    15,    16,    21,    24,
      25,    27,    35,    41,    46,    50,    51,    52,    53,    54,
      55,    56,    57,    72,    12,     3,    47,    33,     3,    70,
      33,    33,    33,     3,    28,    70,    57,    11,    10,     8,
       9,    33,     3,    70,    33,    33,    33,     3,    28,    70,
      57,    11,    10,     8,     9,    33,    33,    33,    33,    33,
       3,    70,    33,    33,    33,     3,    28,    70,    57,    26,
      12,    26,    11,    10,     8,     9,     3,    13,    14,    58,
      62,     3,    58,    33,    33,    33,    33,    57,    33,    47,
      29,    29,     3,    62,    31,    48,    32,    68,    33,    60,
      59,     3,    58,    33,    33,    32,    63,    64,    65,    66,
      32,    68,    33,    60,    59,     3,    58,    33,    33,    32,
      63,    64,    65,    66,    60,    59,    60,    59,    32,    68,
      33,    60,    59,     3,    58,    33,    33,    32,     3,    13,
      14,    58,    62,     3,    58,    63,    64,    65,    66,    33,
      33,     3,    19,    57,    57,    56,    29,     3,    48,    29,
      57,    34,    71,    32,    67,    32,    32,    32,    32,    32,
      69,     3,    58,    71,    32,    67,    32,    32,    32,    32,
      32,    69,     3,    58,    32,    32,    32,    32,    71,    32,
      67,    32,    32,    32,    32,    32,    69,     3,    58,    33,
      33,    60,    59,    32,    32,    32,    32,    29,    26,    34,
      32,    71,    71,    32,    32,    32,    71,    71,    32,    32,
      32,    71,    71,    32,    32,    60,    59,    32,    32,    29,
      29,    29,    49,    57,    58,    61,    32,    32,    32,    32,
      32,    32,    32,    32,    22,    29,    32,    32,    49,    56,
      49,    49,    32,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    43,
      42,    44,    42,    45,    45,    47,    46,    46,    48,    48,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    50,
      50,    50,    51,    52,    52,    53,    54,    54,    55,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    60,
      61,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    66,    67,    66,    68,    66,    66,
      69,    66,    66,    66,    66,    66,    66,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       7,     0,     6,     4,     2,     0,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       5,     5,     9,     5,     7,     3,     7,     7,     2,     3,
       1,     1,     4,     4,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     4,     0,     6,     0,     5,     3,
       0,     6,     4,     4,     4,     5,     5,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 102 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2495 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 110 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2506 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 116 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2514 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 121 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2522 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 124 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2530 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 127 "sintatico.y"
          {}
#line 2536 "sintatico.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 130 "sintatico.y"
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
#line 2563 "sintatico.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 154 "sintatico.y"
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
#line 2594 "sintatico.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' $@1 params_list ')' brackets_stmt  */
#line 179 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, (yyvsp[-5].lexema).corpo, 2);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2607 "sintatico.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 187 "sintatico.y"
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
#line 2634 "sintatico.tab.c"
    break;

  case 12: /* function_declaration: type ID '(' $@2 ')' brackets_stmt  */
#line 208 "sintatico.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2646 "sintatico.tab.c"
    break;

  case 13: /* params_list: type ID ',' params_list  */
#line 217 "sintatico.y"
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
#line 2681 "sintatico.tab.c"
    break;

  case 14: /* params_list: type ID  */
#line 247 "sintatico.y"
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
#line 2715 "sintatico.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 278 "sintatico.y"
      {
    if(ehFuncao) {
      ehFuncao = 0;
    } else {
      indiceEscopo++; 
      escopo++; 
      listaEscopo[indiceEscopo] = escopo; 
    }
  }
#line 2729 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 286 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2738 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: error  */
#line 290 "sintatico.y"
          {}
#line 2744 "sintatico.tab.c"
    break;

  case 18: /* stmts: stmt stmts  */
#line 293 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2755 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt  */
#line 299 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2763 "sintatico.tab.c"
    break;

  case 20: /* stmt: for_stmt  */
#line 304 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2771 "sintatico.tab.c"
    break;

  case 21: /* stmt: if_else_stmt  */
#line 307 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2779 "sintatico.tab.c"
    break;

  case 22: /* stmt: return_stmt  */
#line 310 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2787 "sintatico.tab.c"
    break;

  case 23: /* stmt: io_stmt  */
#line 313 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2795 "sintatico.tab.c"
    break;

  case 24: /* stmt: exp_stmt  */
#line 316 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2803 "sintatico.tab.c"
    break;

  case 25: /* stmt: set_stmt  */
#line 319 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2811 "sintatico.tab.c"
    break;

  case 26: /* stmt: var_declaration  */
#line 322 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2819 "sintatico.tab.c"
    break;

  case 27: /* stmt: assignment ';'  */
#line 325 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2827 "sintatico.tab.c"
    break;

  case 28: /* stmt: brackets_stmt  */
#line 328 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2835 "sintatico.tab.c"
    break;

  case 29: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 333 "sintatico.y"
                       {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 2855 "sintatico.tab.c"
    break;

  case 30: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 348 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 2865 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 353 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2875 "sintatico.tab.c"
    break;

  case 32: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 360 "sintatico.y"
                                                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2888 "sintatico.tab.c"
    break;

  case 33: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 370 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2899 "sintatico.tab.c"
    break;

  case 34: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 376 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2911 "sintatico.tab.c"
    break;

  case 35: /* return_stmt: RETURN exp ';'  */
#line 385 "sintatico.y"
                 {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2921 "sintatico.tab.c"
    break;

  case 36: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 392 "sintatico.y"
                                          {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared variable", (yyvsp[-4].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "forall_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->filho = (yyvsp[0].nodo);
  }
#line 2943 "sintatico.tab.c"
    break;

  case 37: /* set_stmt: FORALL '(' ID INFIX_OP or_exp ')' stmt  */
#line 409 "sintatico.y"
                                           {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared variable", (yyvsp[-4].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "forall_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->proximo = (yyvsp[-2].nodo);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2965 "sintatico.tab.c"
    break;

  case 38: /* exp_stmt: exp ';'  */
#line 428 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2975 "sintatico.tab.c"
    break;

  case 39: /* assignment: ID '=' exp  */
#line 435 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
      forcaCast((yyval.nodo)->tipo, (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    }

    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2997 "sintatico.tab.c"
    break;

  case 40: /* exp: or_exp  */
#line 454 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3005 "sintatico.tab.c"
    break;

  case 41: /* exp: set_exp  */
#line 457 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3013 "sintatico.tab.c"
    break;

  case 42: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 462 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3024 "sintatico.tab.c"
    break;

  case 43: /* set_exp: SET_OP2 '(' set_aux_exp ')'  */
#line 468 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3035 "sintatico.tab.c"
    break;

  case 44: /* set_aux_exp: ID INFIX_OP or_exp  */
#line 476 "sintatico.y"
                     {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "set_aux_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3056 "sintatico.tab.c"
    break;

  case 45: /* set_aux_exp: ID INFIX_OP set_exp  */
#line 492 "sintatico.y"
                        {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "set_aux_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3077 "sintatico.tab.c"
    break;

  case 46: /* set_in_exp: or_exp INFIX_OP ID  */
#line 510 "sintatico.y"
                     {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 3098 "sintatico.tab.c"
    break;

  case 47: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 526 "sintatico.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3109 "sintatico.tab.c"
    break;

  case 48: /* set_in_exp: set_exp INFIX_OP set_exp  */
#line 532 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3120 "sintatico.tab.c"
    break;

  case 49: /* set_in_exp: set_exp INFIX_OP ID  */
#line 538 "sintatico.y"
                        {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 3141 "sintatico.tab.c"
    break;

  case 50: /* or_exp: or_exp OR and_exp  */
#line 556 "sintatico.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3156 "sintatico.tab.c"
    break;

  case 51: /* or_exp: and_exp  */
#line 566 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3164 "sintatico.tab.c"
    break;

  case 52: /* or_exp: set_in_exp  */
#line 569 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3172 "sintatico.tab.c"
    break;

  case 53: /* and_exp: and_exp AND relational_exp  */
#line 574 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3187 "sintatico.tab.c"
    break;

  case 54: /* and_exp: relational_exp  */
#line 584 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3195 "sintatico.tab.c"
    break;

  case 55: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 589 "sintatico.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3210 "sintatico.tab.c"
    break;

  case 56: /* relational_exp: sum_exp  */
#line 599 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3218 "sintatico.tab.c"
    break;

  case 57: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 604 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);

  }
#line 3234 "sintatico.tab.c"
    break;

  case 58: /* sum_exp: mul_exp  */
#line 615 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3242 "sintatico.tab.c"
    break;

  case 59: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 620 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3257 "sintatico.tab.c"
    break;

  case 60: /* mul_exp: unary_exp  */
#line 630 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3265 "sintatico.tab.c"
    break;

  case 61: /* unary_exp: primal_exp  */
#line 635 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3273 "sintatico.tab.c"
    break;

  case 62: /* unary_exp: '!' primal_exp  */
#line 638 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3282 "sintatico.tab.c"
    break;

  case 63: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 642 "sintatico.y"
                             {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3291 "sintatico.tab.c"
    break;

  case 64: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 646 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3316 "sintatico.tab.c"
    break;

  case 65: /* $@4: %empty  */
#line 666 "sintatico.y"
                         {
    indiceArg = 0;

  }
#line 3325 "sintatico.tab.c"
    break;

  case 66: /* unary_exp: ARITMETIC_OP1 ID '(' $@4 arg_list ')'  */
#line 669 "sintatico.y"
                 {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared function", (yyvsp[-4].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    
    check = checkQuantidadeParametros((yyvsp[-4].lexema).corpo, (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }
    indiceArg = 0;

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3352 "sintatico.tab.c"
    break;

  case 67: /* $@5: %empty  */
#line 691 "sintatico.y"
           {
      indiceArg = 0;

    }
#line 3361 "sintatico.tab.c"
    break;

  case 68: /* unary_exp: ID '(' $@5 arg_list ')'  */
#line 694 "sintatico.y"
                   {
      (yyval.nodo) = retornaNodo();
      int check = checkDeclarado((yyvsp[-4].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
      if(!(~check)){
        printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared function", (yyvsp[-4].lexema).corpo);
        erros++;
      }
      else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
      }

      check = checkQuantidadeParametros((yyvsp[-4].lexema).corpo, (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
      if(!check){
        erros++;
      }
      indiceArg = 0;

      strcpy((yyval.nodo)->val, "unary_exp");
      (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
      (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3387 "sintatico.tab.c"
    break;

  case 69: /* unary_exp: ID '(' ')'  */
#line 715 "sintatico.y"
               {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3413 "sintatico.tab.c"
    break;

  case 70: /* $@6: %empty  */
#line 736 "sintatico.y"
               {
    indiceArg = 0;
  }
#line 3421 "sintatico.tab.c"
    break;

  case 71: /* unary_exp: '!' ID '(' $@6 arg_list ')'  */
#line 738 "sintatico.y"
                 {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared function", (yyvsp[-4].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    
    check = checkQuantidadeParametros((yyvsp[-5].lexema).corpo, (yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }
    indiceArg = 0;

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3448 "sintatico.tab.c"
    break;

  case 72: /* unary_exp: '!' ID '(' ')'  */
#line 760 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3474 "sintatico.tab.c"
    break;

  case 73: /* unary_exp: ISSET '(' ID ')'  */
#line 781 "sintatico.y"
                     {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-1].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared variable", (yyvsp[-1].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 3494 "sintatico.tab.c"
    break;

  case 74: /* unary_exp: ISSET '(' set_exp ')'  */
#line 796 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3504 "sintatico.tab.c"
    break;

  case 75: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 801 "sintatico.y"
                          {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-1].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared variable", (yyvsp[-1].lexema).corpo);
      erros++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 3524 "sintatico.tab.c"
    break;

  case 76: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 816 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3534 "sintatico.tab.c"
    break;

  case 77: /* primal_exp: ID  */
#line 825 "sintatico.y"
     {
    (yyval.nodo) = retornaNodo();

    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      erros++;

    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);

  }
#line 3555 "sintatico.tab.c"
    break;

  case 78: /* primal_exp: const  */
#line 841 "sintatico.y"
          {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3563 "sintatico.tab.c"
    break;

  case 79: /* primal_exp: '(' exp ')'  */
#line 844 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3571 "sintatico.tab.c"
    break;

  case 80: /* arg_list: exp ',' arg_list  */
#line 849 "sintatico.y"
                   {
    indiceArg++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3584 "sintatico.tab.c"
    break;

  case 81: /* arg_list: exp  */
#line 857 "sintatico.y"
        {
    indiceArg++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3596 "sintatico.tab.c"
    break;

  case 82: /* type: INT_TYPE  */
#line 866 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3608 "sintatico.tab.c"
    break;

  case 83: /* type: FLOAT_TYPE  */
#line 873 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3620 "sintatico.tab.c"
    break;

  case 84: /* type: SET_TYPE  */
#line 880 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3632 "sintatico.tab.c"
    break;

  case 85: /* type: ELEM_TYPE  */
#line 887 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3644 "sintatico.tab.c"
    break;

  case 86: /* const: INTEGER  */
#line 896 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3655 "sintatico.tab.c"
    break;

  case 87: /* const: FLOAT  */
#line 902 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("FLOAT");
  }
#line 3666 "sintatico.tab.c"
    break;

  case 88: /* const: EMPTY  */
#line 908 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3677 "sintatico.tab.c"
    break;


#line 3681 "sintatico.tab.c"

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

#line 915 "sintatico.y"


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

    int check = checkMain(indiceTabela);
    if(!check){
      printf("%-15s - %s \n", "SEMANTIC ERROR", "The program doens't have a 'main' function");
      erros++;
    }

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

