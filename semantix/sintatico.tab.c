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
#define YYLAST   4462

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  499

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
     348,   353,   360,   370,   376,   385,   389,   396,   413,   432,
     439,   455,   473,   476,   481,   487,   495,   511,   529,   545,
     551,   557,   575,   585,   588,   593,   603,   608,   618,   623,
     634,   639,   649,   654,   657,   661,   665,   685,   685,   710,
     710,   734,   755,   755,   779,   800,   815,   820,   835,   844,
     859,   862,   867,   875,   884,   891,   898,   905,   914,   920,
     926
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

#define YYPACT_NINF (-333)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1433,  1872,    17,    24,    34,    43,    53,  1897,  1929,  1989,
    3770,    61,  -333,  3806,    22,  3817,   512,  1143,    41,    46,
      72,     9,     9,   177,  3841,  1332,  3852,  3876,  1143,  3572,
      63,  3646,   104,    77,    98,   105,   113,  4028,  4033,  4038,
     140,   149,   112,   169,   192,   132,  1445,  2767,  2802,    62,
    2837,  2872,  2907,  2942,  2977,  3012,  3047,   203,   212,    87,
     414,   526,   548,  1470,  1366,  4060,  4065,  4070,   246,  4092,
    1532,   198,  3680,  4097,  1555,   263,   280,   226,  1445,   294,
    3685,  3082,   213,   298,    80,  3711,   224,  4102,   253,  3887,
     278,  3117,  3152,   186,    49,   331,    49,    49,    49,    49,
     290,   309,   319,  4124,  1681,   261,   297,   160,    12,   301,
     314,   325,   329,   333,   337,   339,   360,  3187,   365,   375,
     376,   495,   609,  4129,   740,   745,   626,   799,   945,  1586,
    1657,  4134,  4156,   244,   377,  4161,  1681,   110,  1445,   258,
     382,   398,   410,  3605,  1713,  1445,  4166,  4188,  4193,  1681,
     385,   409,  1681,  4198,   417,   -11,   182,  3222,  3257,  3292,
      84,   413,   -10,   195,   422,  4220,  4225,   427,  4230,  3572,
     458,  3572,  3572,  4252,  3327,   434,  3362,  3397,  3572,  3432,
    3467,  1332,  3716,   141,   429,   447,  1255,  1776,  3788,   449,
     401,  1445,   131,   239,   317,   122,   875,   665,  3793,  3818,
    3823,  3828,  3752,   202,   451,   452,  1545,  1627,  4257,   467,
     450,  1445,   581,    60,  1162,  4262,  4281,  4286,  4291,   469,
     472,   473,   496,  3502,   553,   395,   497,   498,   656,   767,
     870,   506,   504,  1445,   236,   241,   270,    48,   888,   719,
     920,   980,  1060,  1069,   722,   230,   730,   163,   508,   510,
     521,   523,   570,   524,  1332,   841,  1025,  1503,  2102,  2137,
    2172,  2207,  2242,   482,   538,   572,   287,   545,  3572,   611,
    3721,  3853,  1555,   263,   793,  3747,   549,  3858,   565,   287,
     287,   287,   287,   691,  3757,  4310,  1555,   263,   937,  3783,
     569,  4315,   573,   230,   230,   230,   230,  1555,   263,  1555,
     263,   784,   624,  1120,  1555,   263,  1048,   706,   576,  1149,
     579,  1070,   430,  1130,   430,   430,   430,   430,   388,   585,
     594,   462,   636,   478,   589,   627,   322,  1445,   294,  2277,
     613,   637,  3572,  2312,  2347,   616,   584,  1803,   615,  3863,
    1681,   905,   658,   621,   622,   629,  1086,  1152,  3888,  1110,
    1818,  3893,  3898,  4320,  1681,  1176,   694,   640,   649,   651,
    1210,  1245,  4339,   826,  1827,  4344,  4349,   798,   653,   809,
     654,  1568,  1681,  1355,   838,   655,   664,   670,  1399,  1328,
    1646,   420,   677,   679,   797,   369,  1151,  1199,  1266,  1767,
    1744,  1848,  1555,   263,   671,   690,   705,   709,   717,  2382,
     727,   724,  2417,  3672,   736,   738,  3537,   741,  3923,  1681,
     178,   282,  3928,  3933,  3958,  1681,   756,   757,   758,  4368,
    1681,   765,   774,  4373,  4378,  4397,  1681,   781,   783,   787,
     794,   954,  1008,   800,  1879,  1681,   350,   979,  1915,  1966,
    1998,  1681,   807,   811,  1555,   263,   878,   819,   824,   843,
     855,  3605,  1713,  1445,  2452,  3963,   835,   857,  3968,  3993,
    4402,   859,   860,  4407,  4426,  2009,   863,   873,  2051,  2062,
     933,   884,   941,   981,  2487,  2522,  2557,  2592,   868,   384,
     992,  3998,  4003,  4431,  4436,  3633,  3638,  1224,  1296,  3605,
     458,  3605,  3605,  2627,   885,  2662,  2697,  3605,  2732
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -333,  -333,  -333,   919,     4,  -333,  -333,  -333,   906,   -20,
    -173,   -44,  -129,  -138,  -125,  -118,  -114,  -104,   -95,   -67,
     -16,   865,  -242,  1613,  1660,  1528,  1348,  1175,   989,   682,
    -332,  -236,  -310,   254,  -117,     0,   468
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,    47,    10,    17,    18,    19,    48,
      29,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     133,    59,   110,    60,    61,    62,    63,    64,    65,    66,
     136,   104,   149,    67,   134,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    26,    27,   101,     9,   257,    90,    11,   268,   409,
      24,     9,   116,    58,   160,   244,   244,    20,   258,   154,
     -85,   -47,   171,   420,   245,   259,    82,   -84,    20,   260,
      88,   343,   164,   340,    58,   167,   415,   -86,   246,   261,
     174,   435,   176,   177,    25,   357,   -87,   354,   262,   179,
     426,    15,    80,    12,   102,    16,   368,    32,   370,   314,
     -53,   113,   114,   375,    14,   372,    37,    38,   441,    39,
     294,   -56,   -56,    21,   -53,    23,   263,    44,    22,    45,
     -53,   332,    46,   119,   -53,   -33,   -56,   -33,   -33,   -33,
     -33,   -33,   -33,   219,   220,   -13,    89,   -33,   -33,   -33,
     -33,   -33,   -33,   175,   -33,   -33,   169,    72,   -33,   -33,
      74,   -33,   -33,    93,   -33,    80,   -43,   -33,   -33,   -33,
      32,    37,    38,   256,    39,    33,    34,   264,   161,    37,
      38,    75,    39,   279,   -53,    85,   -44,    46,    76,   -44,
      44,    81,    45,   265,   270,    46,    77,   255,   -53,    37,
      38,   447,    39,    58,   -53,    58,    58,   244,   186,   187,
      86,   188,    58,   -43,   -17,    46,   -17,   -17,   -17,   -17,
     -17,   -17,   -54,    78,   191,   278,   -17,   -17,   -17,   -17,
     -17,   -17,    79,   -17,   -17,   -17,   -54,   -17,   -17,   124,
     -17,   -17,   137,   -17,   266,   292,   -17,   -17,   -17,   221,
     222,   -69,    83,   471,   -44,   284,   -69,   266,   246,   -14,
     -44,   -69,   -69,    28,   -46,   -69,   -69,   310,   -69,   206,
     207,   246,   208,   407,   338,    84,   -69,   172,   -69,   182,
     103,   -69,    91,   202,   183,   211,   330,   418,   203,   184,
     185,    92,   117,   186,   187,   112,   188,   206,   207,   100,
     208,   -54,    58,   -54,   189,   433,   190,   122,   209,   191,
     210,   398,   311,   211,   -67,   -54,   109,   -54,   -43,   -67,
     404,   -54,   -43,   -54,   -67,   -67,   -83,   -54,   -67,   -67,
     152,   -67,   312,   111,   -45,   123,    73,   -45,   401,   -67,
     182,   -67,   456,   135,   -67,   183,   313,   115,   457,    87,
     200,   118,   -42,   461,   186,   187,   -42,   188,   -45,   462,
     396,   397,   -18,   257,   -45,   189,    58,   190,   466,   223,
     191,   405,   477,   244,   467,   182,   258,   138,   217,   266,
     183,   200,   200,   259,   127,   184,   185,   260,   -41,   186,
     187,   395,   188,   246,   221,   222,   139,   261,   -40,   -42,
     189,   257,   190,   257,   257,   191,   262,   140,   242,   257,
     493,   141,   495,   496,   258,   142,   258,   258,   498,   143,
      70,   259,   258,   259,   259,   260,   -44,   260,   260,   259,
     314,   -52,   -44,   260,   263,   261,   -44,   261,   261,   144,
     242,   145,   200,   261,   262,   -52,   262,   262,   302,   200,
     -51,   -52,   262,   242,   275,   -52,   242,   146,   147,   153,
     244,   157,   228,   229,   -51,   230,   491,   165,   186,   187,
     -51,   188,   263,   494,   263,   263,   -54,   158,   233,   276,
     263,   256,   -51,   224,   191,   264,   478,   271,   225,   159,
     -54,   166,   170,   -54,   277,   200,   -51,   228,   229,   168,
     230,   265,   -51,   289,   173,   255,   -51,   285,   231,   -82,
     232,   267,   272,   233,   291,   200,   178,   206,   207,   256,
     208,   256,   256,   264,   -50,   264,   264,   256,   290,   303,
     273,   264,   274,   211,   286,   287,   309,   200,   -50,   265,
     -48,   265,   265,   255,   -50,   255,   255,   265,   -72,   217,
     288,   255,   297,   -72,   -48,   298,   299,   307,   -72,   -72,
     -48,   333,   -72,   -72,   201,   -72,    -9,    -9,    -9,    -9,
     200,   228,   229,   -72,   230,   -72,   217,   148,   -72,   300,
     304,   305,   308,   200,   200,   200,   200,   233,    94,   306,
     217,   325,   218,   326,   -11,   201,   201,   217,   217,   217,
     217,   217,    95,   217,   327,   -42,   328,   331,   217,    96,
     -53,   -79,   -79,   -79,   -79,   -79,   242,   334,   242,   242,
     242,   242,   243,    80,   -53,   335,   337,   -53,    32,   -79,
     200,   200,   347,    33,    34,   -79,   301,    37,    38,   -79,
      39,   200,   293,   -53,   242,   279,   -52,   348,    44,   329,
      45,   -49,   361,    46,   243,   362,   201,   -53,   242,   379,
     -52,   380,   150,   201,   -69,   -49,   -52,   243,   392,   -69,
     243,   -49,   219,   220,   -69,   -69,   242,   393,   -69,   -69,
     394,   -69,   -79,   -79,   -79,   -79,   -79,    96,   -52,   -69,
     400,   -69,   399,   339,   -69,   402,   217,   293,   -52,   406,
     -79,   201,   -52,   411,   412,   -52,   -79,   373,   201,   201,
     -79,   413,   -52,   242,   -88,   -88,   -88,   -88,   -88,   242,
     -54,   218,   422,   281,   242,   -58,   -58,   -58,   218,   201,
     242,   423,   -88,   424,   -54,   430,   432,   437,   -88,   242,
     410,   -58,   -88,   243,   -69,   242,   438,   -58,   217,   -69,
     243,   201,   439,   448,   -69,   -69,   -54,   200,   -69,   -69,
     444,   -69,   445,   218,   -79,   -79,   -79,   -79,   -79,   -69,
     -54,   -69,   449,   353,   -69,   318,   421,   316,   199,   -58,
     -58,   -58,   -79,   323,   201,   319,   320,   450,   -79,   378,
     218,   451,   -79,   319,   320,   -58,   452,   201,   201,   201,
     201,   -58,   -51,   453,   218,   -58,   216,   -50,   454,   199,
     199,   218,   218,   218,   218,   218,   -51,   218,   -41,   -51,
     -40,   -50,   218,   455,   -50,   -89,   -89,   -89,   -89,   -89,
     243,   132,   243,   243,   243,   243,   241,   -69,   458,   459,
     460,   -44,   -69,   -89,   201,   201,   344,   -69,   -69,   -89,
     -45,   -69,   -69,   -89,   -69,   201,   219,   220,   243,   -50,
     -54,   -48,   -69,   463,   -69,   464,   371,   -69,   241,   -44,
     199,   -54,   243,   -50,   -54,   -48,   -45,   199,   -48,   -50,
     429,   241,   465,   -50,   241,   -54,   294,   -55,   -55,   468,
     243,   431,   -26,   469,   -26,   -26,   -26,   -26,   -26,   -26,
     -54,   473,   -55,   474,   -26,   -26,   -26,   -26,   -26,   -26,
     218,   -26,   -26,   -26,   -54,   -26,   -26,   481,   -26,   -26,
     436,   -26,   475,   199,   -26,   -26,   -26,   243,   -90,   -90,
     -90,   -90,   -90,   243,   476,   280,   -56,   -56,   243,   482,
     -54,   483,   484,   199,   243,   485,   -90,   490,   315,   -56,
     -56,   -56,   -90,   243,   -54,   486,   -90,   -56,   -67,   243,
     472,   192,   218,   -67,   -56,   199,   488,   497,   -67,   -67,
     -56,   201,   -67,   -67,   -56,   -67,    13,   216,   -60,   317,
     -60,   -60,   -60,   -67,    30,   -67,     0,   408,   -67,   106,
     358,     0,   192,   192,     0,   -54,   -60,     0,   199,   120,
     219,   220,   -60,   -44,   216,     0,   -60,   -49,   125,   -54,
     128,   199,   199,   199,   352,   487,   -44,   -44,   216,   234,
       0,   -49,     0,   -44,   -49,   216,   216,   216,   366,   216,
     -44,   216,     0,   -44,     0,     0,   216,   151,   -62,   -62,
     -62,   -62,   -62,   -45,   241,     0,   241,   241,   241,   391,
       0,   234,     0,   155,   266,   -45,   -62,   -45,   199,   199,
     162,   -45,   -62,   -45,   234,   -45,   -62,   234,   246,   199,
     -45,     0,   241,     0,   492,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -45,   198,   241,   -45,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,   376,   -28,   -28,   241,   -28,   192,     0,   -28,   -28,
     -28,   219,   220,   215,     0,     0,   198,   198,   -63,   -63,
     -63,   -63,   -63,   381,   216,     0,   192,   -80,   -80,   -80,
     -80,   -80,     0,   382,   383,     0,   -63,   131,     0,   -72,
       0,   241,   -63,   240,   -72,   -80,   -63,   241,   192,   -72,
     -72,   -80,   241,   -72,   -72,   -80,   -72,     0,   241,   321,
       0,   324,     0,     0,   -72,     0,   -72,   241,   414,   -72,
     280,   -55,   -55,   241,     0,   240,   216,   198,   -65,   -65,
     -65,   -65,   -65,   386,   198,   199,   -55,   106,   240,   345,
       0,   240,   -55,   382,   383,     0,   -65,     2,     3,     4,
       5,   106,   -65,   359,     0,   416,   -65,   -64,   -64,   -64,
     -64,   -64,   106,   -48,   106,   219,   220,     0,     0,   106,
     295,   377,   -58,   -58,   -58,   -64,   384,   -48,   387,   -67,
     198,   -64,     0,   -48,   -67,   -64,     0,   -48,   -58,   -67,
     -67,   192,   192,   -67,   -67,     0,   -67,     0,     0,     0,
     198,     0,   192,     0,   -67,   234,   -67,     0,   419,   -67,
       0,   -49,   417,   -72,     0,     0,     0,     0,   -72,   234,
       0,   197,   198,   -72,   -72,   -49,   428,   -72,   -72,     0,
     -72,   -49,     0,     0,   215,   -49,   -44,   234,   -72,     0,
     -72,     0,   425,   -72,   443,     0,     0,     0,   427,   214,
     -44,     0,   197,   197,     0,   198,   -44,   106,   219,   220,
     -44,   215,     0,   -88,   -88,   -88,   -88,   -88,   198,   198,
     351,     0,   130,     0,   234,   215,   315,   -55,   -55,   239,
     234,   -88,   215,   215,   365,   234,   215,   -88,   215,     0,
       0,   234,   -55,   215,     0,     0,     0,     0,   -55,     0,
     234,   240,   -55,   240,   240,   390,   234,     0,   -45,   106,
       0,   239,     0,   197,     0,   198,   198,     0,   479,     0,
     197,     0,   -45,     0,   239,     0,   198,   239,   -45,   240,
       0,   442,   -45,   -15,     0,   -15,   -15,   -15,   -15,   -15,
     -15,   219,   220,   240,     0,   -15,   -15,   -15,   -15,   -15,
     -15,     0,   -15,   -15,     0,     0,   -15,   -15,   -67,   -15,
     -15,   240,   -15,   -67,     0,   -15,   197,   -15,   -67,   -67,
       0,     0,   -67,   -67,    98,   -67,   -58,   -58,   -58,     0,
       0,   215,     0,   -67,     0,   -67,   197,   434,   -67,     0,
       0,     0,   -58,     0,   196,   -58,     0,     0,   240,     0,
       0,     0,   -72,     0,   240,     0,     0,   -72,   197,   240,
       0,     0,   -72,   -72,     0,   240,   -72,   -72,     0,   -72,
     214,     0,   213,     0,   240,   196,   196,   -72,     0,   -72,
     240,   440,   -72,   215,     1,     0,     0,     2,     3,     4,
       5,   197,   198,     0,   129,     0,     0,   214,   182,     0,
       0,     0,   238,   183,   197,   350,     0,     0,   184,   185,
       0,   214,   186,   187,     0,   188,     0,     0,   214,   364,
       0,     0,   214,   189,   214,   190,     0,     0,   191,   214,
      97,   -56,   -56,     0,   238,     0,   196,   239,     0,   239,
     389,     0,     0,   196,     0,     0,   -56,   238,     0,   -56,
     238,   197,   197,     0,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,   197,     0,     0,   239,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,   239,
     -23,   -23,     0,   -23,     0,    31,   -23,   -23,   -23,   196,
      32,     0,     0,     0,     0,    33,    34,   239,     0,    37,
      38,     0,    39,   -88,   -88,   -88,   -88,   -88,   202,   196,
      44,     0,    45,   203,     0,    46,     0,   214,   204,   205,
       0,   -88,   206,   207,   195,   208,   -71,   -71,   -71,   -71,
     -71,   196,     0,   209,   239,   210,     0,     0,   211,     0,
     239,     0,     0,   213,   -71,   239,    97,   -55,   -55,     0,
     -71,   239,   212,     0,   -71,   195,   195,     0,     0,     0,
     239,     0,   -55,     0,   196,   -55,   239,     0,     0,   214,
     213,     0,   126,     0,     0,     0,     0,   349,   197,     0,
       0,     0,   237,     0,   213,   -89,   -89,   -89,   -89,   -89,
       0,   363,     0,     0,     0,   213,     0,   213,     0,     0,
       0,     0,   213,   -89,   -81,   -81,   -81,   -81,   -81,   193,
     238,     0,   388,     0,   237,    98,   195,   -57,   -57,   -57,
       0,     0,   -81,   195,   196,   196,     0,   237,   -81,     0,
     237,     0,   -81,   -57,   224,   196,   -57,   107,   238,   225,
     193,   193,     0,     0,   226,   227,     0,     0,   228,   229,
       0,   230,   238,     0,     0,     0,   194,     0,     0,   231,
       0,   232,     0,     0,   233,     0,    80,   235,     0,   195,
     238,    32,     0,     0,     0,     0,    33,    34,     0,     0,
      37,    38,     0,    39,   108,     0,     0,   194,   194,   195,
     213,    44,     0,    45,     0,     0,    46,     0,     0,   235,
       0,   193,   -59,   317,   -59,   -59,   -59,   238,   193,     0,
       0,   195,   235,   238,   236,   235,     0,     0,   238,     0,
     -59,     0,     0,   322,   238,   316,   -59,   -57,   -57,   -57,
     -59,     0,     0,   238,   -89,   -89,   -89,   -89,   -89,   238,
       0,     0,   213,   -57,   336,     0,   236,     0,   156,   -57,
     212,   196,   -89,   -57,   193,   163,   403,     0,   -89,   236,
       0,   183,   236,     0,   212,     0,   184,   185,     0,     0,
     186,   187,     0,   188,   193,   212,   281,   212,   -57,   -57,
     -57,   189,   212,   190,     0,   295,   191,   -57,   -57,   -57,
     385,     0,     0,     0,   -57,     0,   193,     0,     0,     0,
     -57,   194,     0,   -57,   195,   195,   -61,   -61,   -61,   -61,
     -61,     0,     0,     0,     0,   195,     0,     0,   237,     0,
       0,   194,    -7,    -7,   -61,     0,    -7,    -7,    -7,    -7,
     -61,     0,   237,     0,   -61,   342,     0,   -66,   -66,   -66,
     -66,   -66,     0,   194,     0,     0,     0,    -2,     1,   356,
     237,     2,     3,     4,     5,   -66,     0,     0,     0,     0,
     367,   -66,   369,     0,     0,   -66,     0,   374,     0,     0,
     212,     0,     0,   -75,   -75,   -75,   -75,   -75,     0,    -4,
      -4,     0,   108,    -4,    -4,    -4,    -4,   237,     0,   193,
     193,   -75,     0,   237,     0,     0,   108,   -75,   237,     0,
     193,   -75,     0,   235,   237,     0,     0,   108,     0,   108,
       0,     0,     0,   237,   108,     0,     0,   235,     0,   237,
       0,     0,   212,     0,   -76,   -76,   -76,   -76,   -76,     0,
       0,   195,     0,     0,     0,   235,   194,   194,     0,    -6,
      -6,     0,   -76,    -6,    -6,    -6,    -6,   194,   -76,     0,
     236,     0,   -76,     0,     0,   446,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,   236,     0,     0,   -70,   -70,   -70,
     -70,   -70,   235,     0,   -74,     0,     0,     0,   235,     0,
     -74,     0,   236,   235,   -74,   -70,     0,     0,     0,   235,
       0,   -70,     0,     0,     0,   -70,     0,     0,   235,     0,
       0,     0,   108,     0,   235,     0,     0,   470,     0,   -77,
     -77,   -77,   -77,   -77,     0,     0,   193,     0,     0,   236,
     -78,   -78,   -78,   -78,   -78,   236,     0,   -77,     0,     0,
     236,     0,     0,   -77,     0,     0,   236,   -77,   -78,     0,
       0,     0,     0,     0,   -78,   236,     0,     0,   -78,     0,
       0,   236,     0,   -20,   108,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   480,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,   -20,   -20,   -20,     0,   -20,   -20,     0,   -20,
     -20,     0,   -20,     0,     0,   -20,   -20,   -20,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,
     -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,
       0,   -21,   -21,     0,   -21,   -21,     0,   -21,     0,     0,
     -21,   -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,     0,   -22,     0,     0,   -22,   -22,   -22,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,
     -25,   -25,   -25,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,   -24,
     -24,     0,   -24,     0,     0,   -24,   -24,   -24,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,     0,   -35,   -35,     0,   -35,     0,     0,
     -35,   -35,   -35,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,     0,     0,   -27,   -27,   -27,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,     0,   -39,   -39,     0,   -39,     0,     0,
     -39,   -39,   -39,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,     0,   -36,   -36,     0,   -36,
     -36,     0,   -36,     0,     0,   -36,   -36,   -36,    -8,     0,
      -8,    -8,    -8,    -8,    -8,    -8,     0,     0,     0,     0,
      -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,
       0,    -8,    -8,     0,    -8,    -8,     0,    -8,     0,     0,
      -8,    -8,    -8,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -16,     0,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,
     -16,     0,   -16,   -16,   -16,     0,   -16,   -16,     0,   -16,
     -16,     0,   -16,     0,     0,   -16,   -16,   -16,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
       0,   -29,   -29,     0,   -29,   -29,     0,   -29,     0,     0,
     -29,   -29,   -29,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,     0,   -30,
     -30,     0,   -30,     0,     0,   -30,   -30,   -30,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,
     -31,   -31,   -31,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   489,     0,   -33,   -33,     0,   -33,
     -33,     0,   -33,     0,     0,   -33,   -33,   -33,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,     0,   -34,   -34,     0,   -34,     0,     0,
     -34,   -34,   -34,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,     0,   -37,   -37,     0,   -37,
     -37,     0,   -37,     0,     0,   -37,   -37,   -37,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
       0,   -38,   -38,     0,   -38,   -38,     0,   -38,     0,     0,
     -38,   -38,   -38,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,
     -32,     0,   -32,     0,     0,   -32,   -32,   -32,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,   -26,   -26,     0,   -26,   -26,     0,   -26,     0,     0,
     -26,   -26,   -26,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,     0,     0,   -28,   -28,     0,   -28,
     -28,     0,   -28,     0,     0,   -28,   -28,   -28,   180,     0,
      31,     2,     3,     4,     5,    32,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,    41,    42,     0,    43,    44,     0,    45,     0,     0,
      46,   -19,   181,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,     0,     0,   -23,   -23,     0,   -23,
     -23,     0,   -23,     0,     0,   -23,   -23,   -23,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,     0,
       0,   -20,   -20,     0,   -20,   -20,     0,   -20,     0,     0,
     -20,   -20,   -20,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,     0,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,
     -21,     0,   -21,   -21,     0,     0,   -21,   -21,     0,   -21,
     -21,     0,   -21,     0,     0,   -21,   -21,   -21,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,     0,
       0,   -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,
     -22,   -22,   -22,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,   -25,   -25,     0,   -25,
     -25,     0,   -25,     0,     0,   -25,   -25,   -25,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,   -24,   -24,     0,   -24,   -24,     0,   -24,     0,     0,
     -24,   -24,   -24,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,     0,     0,   -35,   -35,     0,   -35,
     -35,     0,   -35,     0,     0,   -35,   -35,   -35,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,   -27,   -27,     0,   -27,   -27,     0,   -27,     0,     0,
     -27,   -27,   -27,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   -39,     0,     0,   -39,   -39,     0,   -39,
     -39,     0,   -39,     0,     0,   -39,   -39,   -39,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,
       0,   -36,   -36,     0,   -36,   -36,     0,   -36,     0,     0,
     -36,   -36,   -36,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,   -29,   -29,     0,   -29,
     -29,     0,   -29,     0,     0,   -29,   -29,   -29,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,
       0,   -30,   -30,     0,   -30,   -30,     0,   -30,     0,     0,
     -30,   -30,   -30,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,     0,     0,   -31,   -31,     0,   -31,
     -31,     0,   -31,     0,     0,   -31,   -31,   -31,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,
       0,   -34,   -34,     0,   -34,   -34,     0,   -34,     0,     0,
     -34,   -34,   -34,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,     0,     0,   -37,   -37,     0,   -37,
     -37,     0,   -37,     0,     0,   -37,   -37,   -37,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,     0,
       0,   -38,   -38,     0,   -38,   -38,     0,   -38,     0,     0,
     -38,   -38,   -38,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,     0,     0,   -32,   -32,     0,   -32,
     -32,     0,   -32,     0,     0,   -32,   -32,   -32,   -17,     0,
     -17,   -17,   -17,   -17,   -17,   -17,     0,     0,     0,     0,
     -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,
       0,   -17,   -17,     0,   -17,   -17,     0,   -17,     0,     0,
     -17,   -17,   -17,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,    -8,    -8,     0,     0,    -8,    -8,     0,    -8,
      -8,     0,    -8,     0,     0,    -8,    -8,    -8,   -16,     0,
     -16,   -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
     -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,     0,
       0,   -16,   -16,     0,   -16,   -16,     0,   -16,     0,     0,
     -16,   -16,   -16,   180,     0,    31,     2,     3,     4,     5,
      32,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,     0,    39,    40,     0,     0,    41,    42,     0,    43,
      44,     0,    45,     0,     0,    46,   247,   181,    31,     2,
       3,     4,     5,    32,     0,     0,     0,     0,    33,    34,
     248,   249,    37,    38,     0,    39,   250,     0,     0,   251,
     252,     0,   253,    44,     0,    45,     0,     0,    46,     0,
     254,   -68,   -68,   -68,   -68,   -68,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -68,
       0,     0,     0,     0,   -73,   -68,     0,     0,     0,   -68,
     -73,     0,   -79,     0,   -73,   -79,     0,    70,     0,    71,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,   337,   -79,   269,   -79,     0,     0,   -79,
       0,   -79,     0,   105,   -79,     0,     0,     0,    71,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -79,     0,     0,
     -79,     0,   -79,     0,   121,     0,     0,   -79,   -79,   269,
       0,     0,     0,   -79,   341,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
      -5,    -5,     0,   -79,    -5,    -5,    -5,    -5,   -79,   -79,
     346,     0,     0,   -79,     0,   283,     0,     0,     0,     0,
     355,   -79,   -79,   -79,   -79,   -79,   -90,   -90,   -90,   -90,
     -90,   -60,   282,   -60,   -60,   -60,    -3,    -3,     0,   -79,
      -3,    -3,    -3,    -3,   -90,     0,   360,    -8,    -8,   -60,
     -90,    -8,    -8,    -8,    -8,   -60,   -62,   -62,   -62,   -62,
     -62,   -63,   -63,   -63,   -63,   -63,   -80,   -80,   -80,   -80,
     -80,   -17,   -17,     0,   -62,   -17,   -17,   -17,   -17,   -63,
     -62,     0,   -12,   -12,   -80,   -63,   -12,   -12,   -12,   -12,
     -80,   -65,   -65,   -65,   -65,   -65,   -64,   -64,   -64,   -64,
     -64,   -71,   -71,   -71,   -71,   -71,   -10,   -10,     0,   -65,
     -10,   -10,   -10,   -10,   -64,   -65,     0,   -16,   -16,   -71,
     -64,   -16,   -16,   -16,   -16,   -71,   -81,   -81,   -81,   -81,
     -81,   -59,   282,   -59,   -59,   -59,   -61,   -61,   -61,   -61,
     -61,     0,     0,     0,   -81,     0,     0,     0,     0,   -59,
     -81,     0,     0,     0,   -61,   -59,     0,     0,     0,     0,
     -61,   -66,   -66,   -66,   -66,   -66,   -75,   -75,   -75,   -75,
     -75,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,   -66,
       0,     0,     0,     0,   -75,   -66,     0,     0,     0,   -76,
     -75,     0,     0,     0,     0,   -76,   -74,   -74,   -74,   -74,
     -74,   -70,   -70,   -70,   -70,   -70,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,   -74,     0,     0,     0,     0,   -70,
     -74,     0,     0,     0,   -77,   -70,     0,     0,     0,     0,
     -77,   -78,   -78,   -78,   -78,   -78,   -68,   -68,   -68,   -68,
     -68,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,   -78,
       0,     0,     0,     0,   -68,   -78,     0,     0,     0,   -73,
     -68,     0,     0,     0,     0,   -73,   -88,   -88,   -88,   -88,
     -88,   -89,   -89,   -89,   -89,   -89,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,   -88,     0,     0,   -88,     0,   -89,
       0,     0,   -89,     0,   -90,     0,     0,   -90,   -60,    99,
     -60,   -60,   -60,   -62,   -62,   -62,   -62,   -62,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,   -60,     0,     0,   -60,
       0,   -62,     0,     0,   -62,     0,   -63,     0,     0,   -63,
     -80,   -80,   -80,   -80,   -80,   -65,   -65,   -65,   -65,   -65,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,   -80,     0,
       0,   -80,     0,   -65,     0,     0,   -65,     0,   -64,     0,
       0,   -64,   -71,   -71,   -71,   -71,   -71,   -81,   -81,   -81,
     -81,   -81,   -59,    99,   -59,   -59,   -59,     0,     0,     0,
     -71,     0,     0,   -71,     0,   -81,     0,     0,   -81,     0,
     -59,     0,     0,   -59,   -61,   -61,   -61,   -61,   -61,   -66,
     -66,   -66,   -66,   -66,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,   -61,     0,     0,   -61,     0,   -66,     0,     0,
     -66,     0,   -75,     0,     0,   -75,   -76,   -76,   -76,   -76,
     -76,   -74,   -74,   -74,   -74,   -74,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,   -76,     0,     0,   -76,     0,   -74,
       0,     0,   -74,     0,   -70,     0,     0,   -70,   -77,   -77,
     -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,   -77,     0,     0,   -77,
       0,   -78,     0,     0,   -78,     0,   -68,     0,     0,   -68,
     -73,   -73,   -73,   -73,   -73,   -90,   -90,   -90,   -90,   -90,
     -60,   296,   -60,   -60,   -60,     0,     0,     0,   -73,     0,
       0,   -73,     0,   -90,     0,     0,     0,     0,   -60,   -62,
     -62,   -62,   -62,   -62,   -63,   -63,   -63,   -63,   -63,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,   -62,     0,     0,
       0,     0,   -63,     0,     0,     0,     0,   -80,   -65,   -65,
     -65,   -65,   -65,   -64,   -64,   -64,   -64,   -64,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,   -65,     0,     0,     0,
       0,   -64,     0,     0,     0,     0,   -71,   -81,   -81,   -81,
     -81,   -81,   -59,   296,   -59,   -59,   -59,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,   -81,     0,     0,     0,     0,
     -59,     0,     0,     0,     0,   -61,   -66,   -66,   -66,   -66,
     -66,   -75,   -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,   -66,     0,     0,     0,     0,   -75,
       0,     0,     0,     0,   -76,   -74,   -74,   -74,   -74,   -74,
     -70,   -70,   -70,   -70,   -70,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,   -74,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,   -77,   -78,   -78,   -78,   -78,   -78,   -68,
     -68,   -68,   -68,   -68,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,   -78,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,   -73
};

static const yytype_int16 yycheck[] =
{
       0,    21,    22,    70,     0,   143,    50,     7,   181,   341,
       1,     7,    79,    29,   143,    26,    26,    17,   143,   136,
       3,    32,    32,   355,    12,   143,    42,     3,    28,   143,
      46,   273,   149,   269,    50,   152,   346,     3,    26,   143,
     169,   373,   171,   172,    35,   287,     3,   283,   143,   178,
     360,    29,     3,     0,    70,    33,   298,     8,   300,    11,
      12,    77,    78,   305,     3,   301,    17,    18,   378,    20,
      10,    11,    12,    32,    26,     3,   143,    28,    32,    30,
      32,   254,    33,     3,    36,     1,    26,     3,     4,     5,
       6,     7,     8,    13,    14,    32,    34,    13,    14,    15,
      16,    17,    18,   170,    20,    21,    22,     3,    24,    25,
      33,    27,    28,    26,    30,     3,    29,    33,    34,    35,
       8,    17,    18,   143,    20,    13,    14,   143,   144,    17,
      18,    33,    20,    11,    12,     3,    26,    33,    33,    29,
      28,    29,    30,   143,     3,    33,    33,   143,    26,    17,
      18,   393,    20,   169,    32,   171,   172,    26,    17,    18,
      28,    20,   178,    32,     1,    33,     3,     4,     5,     6,
       7,     8,    12,    33,    33,   191,    13,    14,    15,    16,
      17,    18,    33,    20,    21,    22,    26,    24,    25,     3,
      27,    28,    32,    30,    12,   211,    33,    34,    35,    13,
      14,     3,    33,   445,    26,     3,     8,    12,    26,    32,
      32,    13,    14,    36,    32,    17,    18,   233,    20,    17,
      18,    26,    20,   340,   268,    33,    28,    32,    30,     3,
      32,    33,    29,     3,     8,    33,   252,   354,     8,    13,
      14,    29,    29,    17,    18,    19,    20,    17,    18,     3,
      20,    12,   268,    12,    28,   372,    30,    33,    28,    33,
      30,   328,    26,    33,     3,    26,     3,    26,    32,     8,
     337,    32,    36,    32,    13,    14,    32,    36,    17,    18,
      36,    20,    12,     3,    26,    32,    32,    29,   332,    28,
       3,    30,   409,    32,    33,     8,    26,     3,   415,    45,
      46,     3,    32,   420,    17,    18,    36,    20,    26,   426,
     326,   327,    34,   451,    32,    28,   332,    30,   435,    29,
      33,   337,   451,    26,   441,     3,   451,    26,    74,    12,
       8,    77,    78,   451,     3,    13,    14,   451,    29,    17,
      18,    19,    20,    26,    13,    14,    32,   451,    29,    32,
      28,   489,    30,   491,   492,    33,   451,    32,   104,   497,
     489,    32,   491,   492,   489,    32,   491,   492,   497,    32,
      31,   489,   497,   491,   492,   489,    26,   491,   492,   497,
      11,    12,    32,   497,   451,   489,    36,   491,   492,    29,
     136,    26,   138,   497,   489,    26,   491,   492,     3,   145,
      12,    32,   497,   149,     3,    36,   152,    32,    32,    32,
      26,    29,    17,    18,    26,    20,    32,    32,    17,    18,
      32,    20,   489,   490,   491,   492,    12,    29,    33,    28,
     497,   451,    12,     3,    33,   451,   452,   183,     8,    29,
      26,    32,    29,    29,   190,   191,    26,    17,    18,    32,
      20,   451,    32,     3,    32,   451,    36,   203,    28,    32,
      30,     3,    33,    33,   210,   211,    32,    17,    18,   489,
      20,   491,   492,   489,    12,   491,   492,   497,    28,   225,
      33,   497,    33,    33,    33,    33,   232,   233,    26,   489,
      12,   491,   492,   489,    32,   491,   492,   497,     3,   245,
      33,   497,    33,     8,    26,    33,    33,     3,    13,    14,
      32,    29,    17,    18,    46,    20,     4,     5,     6,     7,
     266,    17,    18,    28,    20,    30,   272,    32,    33,    33,
      33,    33,    28,   279,   280,   281,   282,    33,    12,    33,
     286,    33,    74,    33,    32,    77,    78,   293,   294,   295,
     296,   297,    26,   299,    33,    29,    33,    33,   304,    11,
      12,     8,     9,    10,    11,    12,   312,    29,   314,   315,
     316,   317,   104,     3,    26,     3,    31,    29,     8,    26,
     326,   327,    33,    13,    14,    32,    33,    17,    18,    36,
      20,   337,    11,    12,   340,    11,    12,    32,    28,    29,
      30,    12,    33,    33,   136,    32,   138,    26,   354,    33,
      26,    32,     3,   145,     3,    26,    32,   149,    33,     8,
     152,    32,    13,    14,    13,    14,   372,    33,    17,    18,
       3,    20,     8,     9,    10,    11,    12,    11,    12,    28,
       3,    30,    29,    32,    33,    29,   392,    11,    12,    34,
      26,   183,    26,    32,    32,    29,    32,    33,   190,   191,
      36,    32,    26,   409,     8,     9,    10,    11,    12,   415,
      12,   203,    32,     8,   420,    10,    11,    12,   210,   211,
     426,    32,    26,    32,    26,    32,    32,    32,    32,   435,
      32,    26,    36,   225,     3,   441,    32,    32,   444,     8,
     232,   233,    32,    32,    13,    14,    12,   453,    17,    18,
      33,    20,    33,   245,     8,     9,    10,    11,    12,    28,
      26,    30,    32,    32,    33,     3,    32,     8,    46,    10,
      11,    12,    26,     3,   266,    13,    14,    32,    32,    33,
     272,    32,    36,    13,    14,    26,    29,   279,   280,   281,
     282,    32,    12,    26,   286,    36,    74,    12,    34,    77,
      78,   293,   294,   295,   296,   297,    26,   299,    32,    29,
      32,    26,   304,    32,    29,     8,     9,    10,    11,    12,
     312,    99,   314,   315,   316,   317,   104,     3,    32,    32,
      32,    26,     8,    26,   326,   327,     3,    13,    14,    32,
      26,    17,    18,    36,    20,   337,    13,    14,   340,    12,
      12,    12,    28,    32,    30,    32,    32,    33,   136,    32,
     138,    12,   354,    26,    26,    26,    32,   145,    29,    32,
      32,   149,    32,    36,   152,    26,    10,    11,    12,    32,
     372,    32,     1,    32,     3,     4,     5,     6,     7,     8,
      12,    32,    26,    29,    13,    14,    15,    16,    17,    18,
     392,    20,    21,    22,    26,    24,    25,    32,    27,    28,
      32,    30,    29,   191,    33,    34,    35,   409,     8,     9,
      10,    11,    12,   415,    29,    10,    11,    12,   420,    32,
      12,    32,    32,   211,   426,    32,    26,    29,    10,    11,
      12,    26,    32,   435,    26,    32,    36,    32,     3,   441,
      32,    46,   444,     8,    26,   233,    32,    32,    13,    14,
      32,   453,    17,    18,    36,    20,     7,   245,     8,     9,
      10,    11,    12,    28,    28,    30,    -1,    32,    33,    74,
       3,    -1,    77,    78,    -1,    12,    26,    -1,   266,    84,
      13,    14,    32,    12,   272,    -1,    36,    12,    93,    26,
      95,   279,   280,   281,   282,    32,    12,    26,   286,   104,
      -1,    26,    -1,    32,    29,   293,   294,   295,   296,   297,
      26,   299,    -1,    29,    -1,    -1,   304,   122,     8,     9,
      10,    11,    12,    12,   312,    -1,   314,   315,   316,   317,
      -1,   136,    -1,   138,    12,    26,    26,    26,   326,   327,
     145,    32,    32,    32,   149,    36,    36,   152,    26,   337,
      12,    -1,   340,    -1,    32,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    26,    46,   354,    29,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,     3,    27,    28,   372,    30,   191,    -1,    33,    34,
      35,    13,    14,    74,    -1,    -1,    77,    78,     8,     9,
      10,    11,    12,     3,   392,    -1,   211,     8,     9,    10,
      11,    12,    -1,    13,    14,    -1,    26,    98,    -1,     3,
      -1,   409,    32,   104,     8,    26,    36,   415,   233,    13,
      14,    32,   420,    17,    18,    36,    20,    -1,   426,   244,
      -1,   246,    -1,    -1,    28,    -1,    30,   435,    32,    33,
      10,    11,    12,   441,    -1,   136,   444,   138,     8,     9,
      10,    11,    12,     3,   145,   453,    26,   272,   149,   274,
      -1,   152,    32,    13,    14,    -1,    26,     4,     5,     6,
       7,   286,    32,   288,    -1,     3,    36,     8,     9,    10,
      11,    12,   297,    12,   299,    13,    14,    -1,    -1,   304,
       8,   306,    10,    11,    12,    26,   311,    26,   313,     3,
     191,    32,    -1,    32,     8,    36,    -1,    36,    26,    13,
      14,   326,   327,    17,    18,    -1,    20,    -1,    -1,    -1,
     211,    -1,   337,    -1,    28,   340,    30,    -1,    32,    33,
      -1,    12,   347,     3,    -1,    -1,    -1,    -1,     8,   354,
      -1,    46,   233,    13,    14,    26,   361,    17,    18,    -1,
      20,    32,    -1,    -1,   245,    36,    12,   372,    28,    -1,
      30,    -1,    32,    33,   379,    -1,    -1,    -1,     3,    74,
      26,    -1,    77,    78,    -1,   266,    32,   392,    13,    14,
      36,   272,    -1,     8,     9,    10,    11,    12,   279,   280,
     281,    -1,    97,    -1,   409,   286,    10,    11,    12,   104,
     415,    26,   293,   294,   295,   420,   297,    32,   299,    -1,
      -1,   426,    26,   304,    -1,    -1,    -1,    -1,    32,    -1,
     435,   312,    36,   314,   315,   316,   441,    -1,    12,   444,
      -1,   136,    -1,   138,    -1,   326,   327,    -1,   453,    -1,
     145,    -1,    26,    -1,   149,    -1,   337,   152,    32,   340,
      -1,     3,    36,     1,    -1,     3,     4,     5,     6,     7,
       8,    13,    14,   354,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,     3,    27,
      28,   372,    30,     8,    -1,    33,   191,    35,    13,    14,
      -1,    -1,    17,    18,     8,    20,    10,    11,    12,    -1,
      -1,   392,    -1,    28,    -1,    30,   211,    32,    33,    -1,
      -1,    -1,    26,    -1,    46,    29,    -1,    -1,   409,    -1,
      -1,    -1,     3,    -1,   415,    -1,    -1,     8,   233,   420,
      -1,    -1,    13,    14,    -1,   426,    17,    18,    -1,    20,
     245,    -1,    74,    -1,   435,    77,    78,    28,    -1,    30,
     441,    32,    33,   444,     1,    -1,    -1,     4,     5,     6,
       7,   266,   453,    -1,    96,    -1,    -1,   272,     3,    -1,
      -1,    -1,   104,     8,   279,   280,    -1,    -1,    13,    14,
      -1,   286,    17,    18,    -1,    20,    -1,    -1,   293,   294,
      -1,    -1,   297,    28,   299,    30,    -1,    -1,    33,   304,
      10,    11,    12,    -1,   136,    -1,   138,   312,    -1,   314,
     315,    -1,    -1,   145,    -1,    -1,    26,   149,    -1,    29,
     152,   326,   327,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,   337,    -1,    -1,   340,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    24,    25,   354,
      27,    28,    -1,    30,    -1,     3,    33,    34,    35,   191,
       8,    -1,    -1,    -1,    -1,    13,    14,   372,    -1,    17,
      18,    -1,    20,     8,     9,    10,    11,    12,     3,   211,
      28,    -1,    30,     8,    -1,    33,    -1,   392,    13,    14,
      -1,    26,    17,    18,    46,    20,     8,     9,    10,    11,
      12,   233,    -1,    28,   409,    30,    -1,    -1,    33,    -1,
     415,    -1,    -1,   245,    26,   420,    10,    11,    12,    -1,
      32,   426,    74,    -1,    36,    77,    78,    -1,    -1,    -1,
     435,    -1,    26,    -1,   266,    29,   441,    -1,    -1,   444,
     272,    -1,    94,    -1,    -1,    -1,    -1,   279,   453,    -1,
      -1,    -1,   104,    -1,   286,     8,     9,    10,    11,    12,
      -1,   293,    -1,    -1,    -1,   297,    -1,   299,    -1,    -1,
      -1,    -1,   304,    26,     8,     9,    10,    11,    12,    46,
     312,    -1,   314,    -1,   136,     8,   138,    10,    11,    12,
      -1,    -1,    26,   145,   326,   327,    -1,   149,    32,    -1,
     152,    -1,    36,    26,     3,   337,    29,    74,   340,     8,
      77,    78,    -1,    -1,    13,    14,    -1,    -1,    17,    18,
      -1,    20,   354,    -1,    -1,    -1,    46,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    -1,     3,   104,    -1,   191,
     372,     8,    -1,    -1,    -1,    -1,    13,    14,    -1,    -1,
      17,    18,    -1,    20,    74,    -1,    -1,    77,    78,   211,
     392,    28,    -1,    30,    -1,    -1,    33,    -1,    -1,   136,
      -1,   138,     8,     9,    10,    11,    12,   409,   145,    -1,
      -1,   233,   149,   415,   104,   152,    -1,    -1,   420,    -1,
      26,    -1,    -1,   245,   426,     8,    32,    10,    11,    12,
      36,    -1,    -1,   435,     8,     9,    10,    11,    12,   441,
      -1,    -1,   444,    26,   266,    -1,   136,    -1,   138,    32,
     272,   453,    26,    36,   191,   145,     3,    -1,    32,   149,
      -1,     8,   152,    -1,   286,    -1,    13,    14,    -1,    -1,
      17,    18,    -1,    20,   211,   297,     8,   299,    10,    11,
      12,    28,   304,    30,    -1,     8,    33,    10,    11,    12,
     312,    -1,    -1,    -1,    26,    -1,   233,    -1,    -1,    -1,
      32,   191,    -1,    26,   326,   327,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,   337,    -1,    -1,   340,    -1,
      -1,   211,     0,     1,    26,    -1,     4,     5,     6,     7,
      32,    -1,   354,    -1,    36,   272,    -1,     8,     9,    10,
      11,    12,    -1,   233,    -1,    -1,    -1,     0,     1,   286,
     372,     4,     5,     6,     7,    26,    -1,    -1,    -1,    -1,
     297,    32,   299,    -1,    -1,    36,    -1,   304,    -1,    -1,
     392,    -1,    -1,     8,     9,    10,    11,    12,    -1,     0,
       1,    -1,   272,     4,     5,     6,     7,   409,    -1,   326,
     327,    26,    -1,   415,    -1,    -1,   286,    32,   420,    -1,
     337,    36,    -1,   340,   426,    -1,    -1,   297,    -1,   299,
      -1,    -1,    -1,   435,   304,    -1,    -1,   354,    -1,   441,
      -1,    -1,   444,    -1,     8,     9,    10,    11,    12,    -1,
      -1,   453,    -1,    -1,    -1,   372,   326,   327,    -1,     0,
       1,    -1,    26,     4,     5,     6,     7,   337,    32,    -1,
     340,    -1,    36,    -1,    -1,   392,     8,     9,    10,    11,
      12,    -1,    -1,    -1,   354,    -1,    -1,     8,     9,    10,
      11,    12,   409,    -1,    26,    -1,    -1,    -1,   415,    -1,
      32,    -1,   372,   420,    36,    26,    -1,    -1,    -1,   426,
      -1,    32,    -1,    -1,    -1,    36,    -1,    -1,   435,    -1,
      -1,    -1,   392,    -1,   441,    -1,    -1,   444,    -1,     8,
       9,    10,    11,    12,    -1,    -1,   453,    -1,    -1,   409,
       8,     9,    10,    11,    12,   415,    -1,    26,    -1,    -1,
     420,    -1,    -1,    32,    -1,    -1,   426,    36,    26,    -1,
      -1,    -1,    -1,    -1,    32,   435,    -1,    -1,    36,    -1,
      -1,   441,    -1,     1,   444,     3,     4,     5,     6,     7,
       8,    -1,    -1,   453,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,     1,    35,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    -1,
      35,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    -1,     8,     9,    10,    11,    12,    26,
      -1,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,    36,
      32,    -1,    26,    -1,    36,    29,    -1,    31,    -1,    33,
       8,     9,    10,    11,    12,    -1,    -1,    -1,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    26,    -1,    -1,    29,
      -1,    26,    -1,    33,    29,    -1,    -1,    -1,    33,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    26,    -1,    33,    -1,    -1,    26,    32,    33,
      -1,    -1,    -1,    32,    33,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       0,     1,    -1,    26,     4,     5,     6,     7,    26,    32,
      33,    -1,    -1,    26,    -1,    33,    -1,    -1,    -1,    -1,
      33,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     0,     1,    -1,    26,
       4,     5,     6,     7,    26,    -1,    33,     0,     1,    26,
      32,     4,     5,     6,     7,    32,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     0,     1,    -1,    26,     4,     5,     6,     7,    26,
      32,    -1,     0,     1,    26,    32,     4,     5,     6,     7,
      32,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     0,     1,    -1,    26,
       4,     5,     6,     7,    26,    32,    -1,     0,     1,    26,
      32,     4,     5,     6,     7,    32,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,
      32,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,    -1,
      32,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,    26,
      32,    -1,    -1,    -1,    -1,    32,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,
      32,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,    -1,
      32,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,    26,
      32,    -1,    -1,    -1,    -1,    32,     8,     9,    10,    11,
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
      -1,    -1,    29,    -1,    26,    -1,    -1,    29,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,    29,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    26,    -1,    -1,    -1,    -1,    26,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    26,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    26,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    26,    -1,    -1,
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
       3,    29,    57,    33,    33,     3,    28,    70,    57,    34,
      48,    29,    29,    26,    12,    26,    11,    10,     8,     9,
       3,    56,    57,    32,    68,    33,    58,    60,    61,     3,
      59,     3,    19,    57,    57,     3,    56,    29,     3,     3,
      58,    33,    33,    32,     3,    58,    62,     3,    58,    63,
      64,    65,    66,    57,    71,    32,    67,    32,    26,    32,
      32,    32,    32,    32,    29,    26,    32,    32,    32,    69,
       3,    58,    36,    32,    71,    58,    61,    29,    29,    29,
      49,    57,    58,    61,    71,    32,    32,    71,    32,    22,
      29,    32,    32,    32,    49,    56,    49,    49,    32,    49,
       1,    35,     3,     8,    13,    14,    17,    18,    20,    28,
      30,    33,    58,    60,    61,    62,    63,    64,    65,    66,
      70,    73,     3,     8,    13,    14,    17,    18,    20,    28,
      30,    33,    62,    63,    64,    65,    66,    70,    73,    13,
      14,    13,    14,    29,     3,     8,    13,    14,    17,    18,
      20,    28,    30,    33,    58,    60,    61,    62,    63,    64,
      65,    66,    70,    73,    26,    12,    26,     1,    15,    16,
      21,    24,    25,    27,    35,    41,    46,    50,    51,    52,
      53,    54,    55,    56,    57,    72,    12,     3,    47,    33,
       3,    70,    33,    33,    33,     3,    28,    70,    57,    11,
      10,     8,     9,    33,     3,    70,    33,    33,    33,     3,
      28,    70,    57,    11,    10,     8,     9,    33,    33,    33,
      33,    33,     3,    70,    33,    33,    33,     3,    28,    70,
      57,    26,    12,    26,    11,    10,     8,     9,     3,    13,
      14,    58,    62,     3,    58,    33,    33,    33,    33,    29,
      57,    33,    47,    29,    29,     3,    62,    31,    48,    32,
      68,    33,    60,    59,     3,    58,    33,    33,    32,    63,
      64,    65,    66,    32,    68,    33,    60,    59,     3,    58,
      33,    33,    32,    63,    64,    65,    66,    60,    59,    60,
      59,    32,    68,    33,    60,    59,     3,    58,    33,    33,
      32,     3,    13,    14,    58,    62,     3,    58,    63,    64,
      65,    66,    33,    33,     3,    19,    57,    57,    56,    29,
       3,    48,    29,     3,    56,    57,    34,    71,    32,    67,
      32,    32,    32,    32,    32,    69,     3,    58,    71,    32,
      67,    32,    32,    32,    32,    32,    69,     3,    58,    32,
      32,    32,    32,    71,    32,    67,    32,    32,    32,    32,
      32,    69,     3,    58,    33,    33,    60,    59,    32,    32,
      32,    32,    29,    26,    34,    32,    71,    71,    32,    32,
      32,    71,    71,    32,    32,    32,    71,    71,    32,    32,
      60,    59,    32,    32,    29,    29,    29,    49,    57,    58,
      61,    32,    32,    32,    32,    32,    32,    32,    32,    22,
      29,    32,    32,    49,    56,    49,    49,    32,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    43,
      42,    44,    42,    45,    45,    47,    46,    46,    48,    48,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    50,
      50,    50,    51,    52,    52,    53,    53,    54,    54,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    60,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    67,    66,    68,
      66,    66,    69,    66,    66,    66,    66,    66,    66,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       7,     0,     6,     4,     2,     0,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       5,     5,     9,     5,     7,     2,     3,     7,     7,     2,
       3,     3,     1,     1,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     2,     2,     4,     0,     6,     0,
       5,     3,     0,     6,     4,     4,     4,     5,     5,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
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
#line 102 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2520 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 110 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2531 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 116 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2539 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 121 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2547 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 124 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2555 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 127 "sintatico.y"
          {}
#line 2561 "sintatico.tab.c"
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
#line 2588 "sintatico.tab.c"
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
#line 2619 "sintatico.tab.c"
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
#line 2632 "sintatico.tab.c"
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
#line 2659 "sintatico.tab.c"
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
#line 2671 "sintatico.tab.c"
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
#line 2706 "sintatico.tab.c"
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
#line 2740 "sintatico.tab.c"
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
#line 2754 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 286 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2763 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: error  */
#line 290 "sintatico.y"
          {}
#line 2769 "sintatico.tab.c"
    break;

  case 18: /* stmts: stmt stmts  */
#line 293 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2780 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt  */
#line 299 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2788 "sintatico.tab.c"
    break;

  case 20: /* stmt: for_stmt  */
#line 304 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2796 "sintatico.tab.c"
    break;

  case 21: /* stmt: if_else_stmt  */
#line 307 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2804 "sintatico.tab.c"
    break;

  case 22: /* stmt: return_stmt  */
#line 310 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2812 "sintatico.tab.c"
    break;

  case 23: /* stmt: io_stmt  */
#line 313 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2820 "sintatico.tab.c"
    break;

  case 24: /* stmt: exp_stmt  */
#line 316 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2828 "sintatico.tab.c"
    break;

  case 25: /* stmt: set_stmt  */
#line 319 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2836 "sintatico.tab.c"
    break;

  case 26: /* stmt: var_declaration  */
#line 322 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2844 "sintatico.tab.c"
    break;

  case 27: /* stmt: assignment ';'  */
#line 325 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2852 "sintatico.tab.c"
    break;

  case 28: /* stmt: brackets_stmt  */
#line 328 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2860 "sintatico.tab.c"
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
#line 2880 "sintatico.tab.c"
    break;

  case 30: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 348 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 2890 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 353 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2900 "sintatico.tab.c"
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
#line 2913 "sintatico.tab.c"
    break;

  case 33: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 370 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2924 "sintatico.tab.c"
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
#line 2936 "sintatico.tab.c"
    break;

  case 35: /* return_stmt: RETURN ';'  */
#line 385 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
  }
#line 2945 "sintatico.tab.c"
    break;

  case 36: /* return_stmt: RETURN exp ';'  */
#line 389 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2955 "sintatico.tab.c"
    break;

  case 37: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 396 "sintatico.y"
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
#line 2977 "sintatico.tab.c"
    break;

  case 38: /* set_stmt: FORALL '(' ID INFIX_OP or_exp ')' stmt  */
#line 413 "sintatico.y"
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
#line 2999 "sintatico.tab.c"
    break;

  case 39: /* exp_stmt: exp ';'  */
#line 432 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3009 "sintatico.tab.c"
    break;

  case 40: /* assignment: ID '=' exp  */
#line 439 "sintatico.y"
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

    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3030 "sintatico.tab.c"
    break;

  case 41: /* assignment: ID '=' assignment  */
#line 455 "sintatico.y"
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

    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3051 "sintatico.tab.c"
    break;

  case 42: /* exp: or_exp  */
#line 473 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3059 "sintatico.tab.c"
    break;

  case 43: /* exp: set_exp  */
#line 476 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3067 "sintatico.tab.c"
    break;

  case 44: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 481 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3078 "sintatico.tab.c"
    break;

  case 45: /* set_exp: SET_OP2 '(' set_aux_exp ')'  */
#line 487 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3089 "sintatico.tab.c"
    break;

  case 46: /* set_aux_exp: ID INFIX_OP or_exp  */
#line 495 "sintatico.y"
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
#line 3110 "sintatico.tab.c"
    break;

  case 47: /* set_aux_exp: ID INFIX_OP set_exp  */
#line 511 "sintatico.y"
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
#line 3131 "sintatico.tab.c"
    break;

  case 48: /* set_in_exp: or_exp INFIX_OP ID  */
#line 529 "sintatico.y"
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
#line 3152 "sintatico.tab.c"
    break;

  case 49: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 545 "sintatico.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3163 "sintatico.tab.c"
    break;

  case 50: /* set_in_exp: set_exp INFIX_OP set_exp  */
#line 551 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3174 "sintatico.tab.c"
    break;

  case 51: /* set_in_exp: set_exp INFIX_OP ID  */
#line 557 "sintatico.y"
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
#line 3195 "sintatico.tab.c"
    break;

  case 52: /* or_exp: or_exp OR and_exp  */
#line 575 "sintatico.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3210 "sintatico.tab.c"
    break;

  case 53: /* or_exp: and_exp  */
#line 585 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3218 "sintatico.tab.c"
    break;

  case 54: /* or_exp: set_in_exp  */
#line 588 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3226 "sintatico.tab.c"
    break;

  case 55: /* and_exp: and_exp AND relational_exp  */
#line 593 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3241 "sintatico.tab.c"
    break;

  case 56: /* and_exp: relational_exp  */
#line 603 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3249 "sintatico.tab.c"
    break;

  case 57: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 608 "sintatico.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3264 "sintatico.tab.c"
    break;

  case 58: /* relational_exp: sum_exp  */
#line 618 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3272 "sintatico.tab.c"
    break;

  case 59: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 623 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);

  }
#line 3288 "sintatico.tab.c"
    break;

  case 60: /* sum_exp: mul_exp  */
#line 634 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3296 "sintatico.tab.c"
    break;

  case 61: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 639 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &erros, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3311 "sintatico.tab.c"
    break;

  case 62: /* mul_exp: unary_exp  */
#line 649 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3319 "sintatico.tab.c"
    break;

  case 63: /* unary_exp: primal_exp  */
#line 654 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3327 "sintatico.tab.c"
    break;

  case 64: /* unary_exp: '!' primal_exp  */
#line 657 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3336 "sintatico.tab.c"
    break;

  case 65: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 661 "sintatico.y"
                             {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3345 "sintatico.tab.c"
    break;

  case 66: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 665 "sintatico.y"
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
#line 3370 "sintatico.tab.c"
    break;

  case 67: /* $@4: %empty  */
#line 685 "sintatico.y"
                         {
    indiceArg = 0;

  }
#line 3379 "sintatico.tab.c"
    break;

  case 68: /* unary_exp: ARITMETIC_OP1 ID '(' $@4 arg_list ')'  */
#line 688 "sintatico.y"
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
#line 3406 "sintatico.tab.c"
    break;

  case 69: /* $@5: %empty  */
#line 710 "sintatico.y"
           {
      indiceArg = 0;

    }
#line 3415 "sintatico.tab.c"
    break;

  case 70: /* unary_exp: ID '(' $@5 arg_list ')'  */
#line 713 "sintatico.y"
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
#line 3441 "sintatico.tab.c"
    break;

  case 71: /* unary_exp: ID '(' ')'  */
#line 734 "sintatico.y"
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
#line 3467 "sintatico.tab.c"
    break;

  case 72: /* $@6: %empty  */
#line 755 "sintatico.y"
               {
    indiceArg = 0;
  }
#line 3475 "sintatico.tab.c"
    break;

  case 73: /* unary_exp: '!' ID '(' $@6 arg_list ')'  */
#line 757 "sintatico.y"
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
#line 3502 "sintatico.tab.c"
    break;

  case 74: /* unary_exp: '!' ID '(' ')'  */
#line 779 "sintatico.y"
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
#line 3528 "sintatico.tab.c"
    break;

  case 75: /* unary_exp: ISSET '(' ID ')'  */
#line 800 "sintatico.y"
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
#line 3548 "sintatico.tab.c"
    break;

  case 76: /* unary_exp: ISSET '(' set_exp ')'  */
#line 815 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3558 "sintatico.tab.c"
    break;

  case 77: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 820 "sintatico.y"
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
#line 3578 "sintatico.tab.c"
    break;

  case 78: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 835 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3588 "sintatico.tab.c"
    break;

  case 79: /* primal_exp: ID  */
#line 844 "sintatico.y"
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
#line 3608 "sintatico.tab.c"
    break;

  case 80: /* primal_exp: const  */
#line 859 "sintatico.y"
          {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3616 "sintatico.tab.c"
    break;

  case 81: /* primal_exp: '(' exp ')'  */
#line 862 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3624 "sintatico.tab.c"
    break;

  case 82: /* arg_list: exp ',' arg_list  */
#line 867 "sintatico.y"
                   {
    indiceArg++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3637 "sintatico.tab.c"
    break;

  case 83: /* arg_list: exp  */
#line 875 "sintatico.y"
        {
    indiceArg++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3649 "sintatico.tab.c"
    break;

  case 84: /* type: INT_TYPE  */
#line 884 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3661 "sintatico.tab.c"
    break;

  case 85: /* type: FLOAT_TYPE  */
#line 891 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3673 "sintatico.tab.c"
    break;

  case 86: /* type: SET_TYPE  */
#line 898 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3685 "sintatico.tab.c"
    break;

  case 87: /* type: ELEM_TYPE  */
#line 905 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3697 "sintatico.tab.c"
    break;

  case 88: /* const: INTEGER  */
#line 914 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3708 "sintatico.tab.c"
    break;

  case 89: /* const: FLOAT  */
#line 920 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("FLOAT");
  }
#line 3719 "sintatico.tab.c"
    break;

  case 90: /* const: EMPTY  */
#line 926 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3730 "sintatico.tab.c"
    break;


#line 3734 "sintatico.tab.c"

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

#line 933 "sintatico.y"


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

