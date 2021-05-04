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
  #include "tac.h"

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;

  extern Simbolo tabelaSimbolos[100000];
  int indiceTabela = -1;

  char tipo[100000][8];
  int indiceTipo = 0;

  int listaEscopo[100];
  int indiceEscopo = 0;
  int escopo = 0;
  int ehFuncao = 0;

  int indiceFuncao;
  int indiceParam;
  int indiceArg;

  Simbolo prevFuncao;

  NodoArvore* raiz;

  int erros = 0;
  int errosSemanticos = 0;

  char codigoTac[110];

#line 110 "sintatico.tab.c"

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
  YYSYMBOL_assignment_or_null = 52,        /* assignment_or_null  */
  YYSYMBOL_exp_or_null = 53,               /* exp_or_null  */
  YYSYMBOL_if_else_stmt = 54,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 55,               /* return_stmt  */
  YYSYMBOL_set_stmt = 56,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 57,                  /* exp_stmt  */
  YYSYMBOL_assignment = 58,                /* assignment  */
  YYSYMBOL_exp = 59,                       /* exp  */
  YYSYMBOL_set_exp = 60,                   /* set_exp  */
  YYSYMBOL_set_aux_exp = 61,               /* set_aux_exp  */
  YYSYMBOL_set_in_exp = 62,                /* set_in_exp  */
  YYSYMBOL_or_exp = 63,                    /* or_exp  */
  YYSYMBOL_and_exp = 64,                   /* and_exp  */
  YYSYMBOL_relational_exp = 65,            /* relational_exp  */
  YYSYMBOL_sum_exp = 66,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 67,                   /* mul_exp  */
  YYSYMBOL_unary_exp = 68,                 /* unary_exp  */
  YYSYMBOL_69_4 = 69,                      /* $@4  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_71_6 = 71,                      /* $@6  */
  YYSYMBOL_primal_exp = 72,                /* primal_exp  */
  YYSYMBOL_arg_list = 73,                  /* arg_list  */
  YYSYMBOL_type = 74,                      /* type  */
  YYSYMBOL_const = 75                      /* const  */
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
#define YYLAST   4935

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  610

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
       0,   108,   108,   116,   122,   127,   130,   133,   136,   167,
     167,   200,   200,   230,   260,   291,   291,   303,   308,   311,
     317,   322,   325,   328,   331,   334,   337,   340,   343,   346,
     351,   366,   371,   378,   388,   389,   396,   397,   404,   410,
     419,   435,   454,   461,   480,   485,   492,   502,   520,   535,
     547,   550,   555,   564,   569,   585,   590,   607,   612,   629,
     634,   637,   643,   649,   669,   669,   697,   697,   724,   745,
     745,   772,   793,   808,   814,   829,   839,   856,   859,   862,
     867,   883,   901,   908,   915,   922,   931,   937,   943
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
  "for_stmt", "assignment_or_null", "exp_or_null", "if_else_stmt",
  "return_stmt", "set_stmt", "exp_stmt", "assignment", "exp", "set_exp",
  "set_aux_exp", "set_in_exp", "or_exp", "and_exp", "relational_exp",
  "sum_exp", "mul_exp", "unary_exp", "$@4", "$@5", "$@6", "primal_exp",
  "arg_list", "type", "const", YY_NULLPTR
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

#define YYPACT_NINF (-346)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2315,    98,     8,    30,    31,    39,    23,  4291,  4329,  4367,
    4405,    47,  -346,  4443,    37,  4724,    20,  2183,    21,    29,
      71,     3,     3,   -22,  4753,  3247,  4782,  4811,  2183,  4840,
    4122,    44,  1382,   320,    62,    67,    79,   109,  2045,  4426,
    4448,   110,   116,   849,   120,   125,   160,  1345,  3282,  3317,
     134,  3352,  3387,  3422,  3457,  3492,  3527,  3562,   132,   140,
    4453,    51,   271,   904,   122,  2037,  4458,  4480,  4485,   167,
    4490,   849,    93,   973,  4512,  2229,   172,   173,   127,  1345,
      18,  1896,   150,   179,   281,  2324,   156,  4517,   164,  4869,
     171,  3597,  3632,   849,  2247,   849,   849,   849,   849,   169,
     178,  4522,  2271,   200,   124,    19,   175,   184,   197,   203,
     204,   211,   224,   234,   236,  3667,   260,   270,   275,   631,
     329,  4544,  1316,   301,  1273,  4200,  4549,  4554,    88,   277,
    4576,  2271,  4581,  1345,  4586,   263,   288,   291,  4155,   770,
    1345,  4608,  4613,  4618,  2271,   290,   292,  2271,  4640,   307,
     503,  3702,  3737,  3772,   344,   334,   338,   654,   343,  4645,
    4650,   348,  4672,  4122,    17,  4122,  4677,  3807,   350,  3842,
    4122,  3877,  3912,  3947,  1206,   370,   356,   360,  1037,  1632,
    1749,   371,   239,  1345,  2496,   833,   846,   293,   105,   879,
    4229,  4236,  4255,  4262,   438,   537,   377,   379,  2332,  4682,
    4701,   381,   298,  1345,  4706,    46,   480,  2501,  4711,  4730,
    4735,  4740,   390,   391,   399,   762,   398,   412,   578,   720,
     779,   420,   424,  1345,   998,  1113,  1374,  3982,   213,   806,
     423,   427,   551,   591,   685,   430,   608,  1345,  1067,   488,
     621,   174,   267,    82,  1125,  1187,  1454,  1473,  2229,  2297,
    2386,   432,   433,   435,   441,   849,   453,  4017,  2421,  2456,
    2529,  2617,  2652,  2687,  2722,  2757,   347,   411,   490,  1345,
     470,   473,  4052,  4122,   814,  1268,  4267,  2229,   172,   341,
    1280,   509,  4274,   515,  1345,  1345,  1345,  1345,   906,  2076,
    4759,  2229,   172,   388,  2166,   519,  4764,   524,  2229,  2229,
    2229,  2229,  2229,   172,  1053,   676,  1430,  2229,   172,   481,
     804,   531,  1462,   535,  1098,   985,  1519,  2229,   172,   530,
    1032,   538,  1584,   536,  2271,  2346,  2271,  2271,  2271,  2271,
     259,   471,   880,   539,   540,  1112,  1219,  1237,   542,   659,
    1345,  1312,  1348,  1488,  1509,   510,  1156,  1345,    18,   552,
     585,  2792,  4122,  2827,  2862,   562,   603,  1345,   558,  4293,
    2271,  1302,  1522,   581,   584,   586,  1406,   566,  4300,   155,
    1097,  4305,  4312,  4769,  2271,  1440,  1550,   598,   605,   610,
    1553,   783,  4788,  1210,  4897,  4793,  4798,  1552,   611,  1484,
    2271,  1604,  1587,   614,   622,   623,  1659,   871,  1585,  1845,
    2271,  1711,  1643,   626,   633,   639,  1766,  1140,  1877,   183,
     215,   934,   642,   645,   828,   917,   929,   656,   744,  1345,
     997,  1062,  1120,  1146,   727,   407,  1906,  1964,  1816,   505,
    1683,  2229,   172,  1512,   701,   658,  1739,   666,   667,   672,
     678,   682,   697,  2897,   702,   707,  2932,   711,  4087,   713,
    4331,  2271,  4338,  4343,  4350,  4369,  4376,  2271,   718,   722,
     723,  4817,  2271,  4822,  4827,  4846,  4851,  4856,  2271,   728,
     742,   749,   753,   757,  1621,  2271,  1670,  1871,  1968,  1977,
    2004,  2271,   760,   775,   786,  2121,  2271,  2484,  2489,  2557,
    2564,  2569,  2271,   789,   793,  1862,   228,  1175,  2229,   172,
    1566,   373,   782,  1235,   809,  1775,  2271,  2006,  1777,   817,
     818,   819,  2090,  1612,  1778,   824,   832,   841,  4155,   770,
    1345,  2967,  4381,   839,   848,  4388,  4407,  4875,   854,   860,
    4880,  4885,  2113,   867,   872,  2171,  2204,  2576,   874,   875,
    4183,  4188,  1305,  2271,  2138,  1794,   876,   885,   886,  2195,
    1734,  1314,   893,  1908,  2271,  1929,  1933,  1955,  1976,  1981,
    2271,   895,   899,  3002,  3037,  3072,  3107,   844,  1986,  4414,
    4419,  4904,  4909,  2205,  2209,  4195,  4224,   900,  1370,  2271,
    1409,  1506,  1527,  1634,  1671,  2271,   903,   908,  2005,   912,
     913,  2050,  2057,  4155,    17,  4155,  1672,   924,   930,  1704,
    1811,  2085,  2089,  3142,   931,  3177,  1907,  1924,  4155,  3212
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -346,  -346,  -346,   905,     1,  -346,  -346,  -346,   938,   -19,
    -168,   -42,  -126,  -123,  -120,  -158,   449,   -97,   -83,   -63,
     -59,   -67,  1999,   -11,  -249,  1788,  2021,  1675,  1465,  1354,
    1070,   957,  -345,  -226,  -315,   383,   250,     0,   673
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,    48,    10,    17,    18,    19,    49,
      30,    50,    51,    52,    53,   113,   155,    54,    55,    56,
      57,    58,   128,   238,   107,   239,   240,   241,   242,   243,
     244,   245,   131,   102,   144,   246,   129,    69,   247
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,     9,    26,    27,    24,   273,   168,    11,     9,    90,
     -14,   -83,   154,   114,    28,   260,   451,    20,   261,    60,
     270,   112,    60,    12,    -9,    -9,    -9,    -9,    20,   363,
     462,   248,    60,   -82,   -84,    60,   184,   167,    25,   169,
      60,   262,   -85,   377,   171,   249,   475,   -35,   360,   -35,
      14,   457,   -11,    21,   388,   263,   486,   298,   -50,   393,
      60,    22,   374,   -51,   204,   468,    15,   184,   184,   403,
      16,   266,   -50,   118,    23,   264,   -13,   -51,   390,   265,
     -51,   481,    60,   224,    60,    60,    60,    60,   400,   352,
     328,   492,   -55,   -55,   -55,    75,   -66,   271,    -7,    -7,
      76,   -66,    -7,    -7,    -7,    -7,   -66,   -66,   -55,   146,
     -66,   -66,    77,   -66,   -55,   285,   -53,   -53,   -55,   259,
     -81,   -66,   184,   -66,   147,   101,   -66,    60,    60,   184,
     174,   -53,    96,   -53,   -53,   175,   -51,   -53,   268,   258,
     176,   177,    78,    79,   178,   179,   109,   180,   -53,    80,
     -51,   -53,    60,    83,    60,   181,   132,   182,    84,    60,
     183,    91,   554,    85,   184,   285,   -52,   -52,    89,    92,
      99,   184,   184,    34,    35,   106,   108,    38,    39,   115,
      40,   -52,   116,   509,   204,   326,   -50,   -52,    86,   120,
     442,   204,   184,    47,   326,   -49,   121,   560,   227,   579,
     -50,   133,   506,   -64,   224,   -19,   -50,   -43,   -64,   -49,
     -50,   224,   184,   -64,   -64,   -49,   134,   -64,   -64,   -49,
     -64,   -76,   -76,   -76,   -76,   -76,   184,   -76,   -64,   135,
     -64,   358,   130,   -64,   585,   136,   137,   204,   341,   -76,
     -76,   -76,   280,   138,    60,   -76,   314,   -76,   495,   -76,
     546,   -76,   176,   177,   -76,    71,   178,   179,   184,   180,
     -76,   544,    60,   139,   -76,   -34,   204,   281,   365,   543,
     298,   -49,   183,   184,   184,   184,   184,   327,   -53,   -53,
     204,   114,   379,    93,   117,   -49,   140,   204,   204,   204,
     204,   204,   151,   -53,   212,   213,   204,    94,   395,   -53,
     -44,   294,   141,   -53,   284,   -50,   204,   142,   405,   148,
     445,   196,   197,   -48,   420,   198,   199,   152,   200,   -50,
     153,   341,   159,    73,   160,   -50,   295,   -48,   341,   184,
     -48,   203,   145,    34,    35,   184,   184,    38,    39,   162,
      40,    60,   212,   213,   364,   -38,   184,   -38,   -38,   -38,
     -38,   -38,   -38,    47,   212,   213,   459,   -38,   -38,   -38,
     -38,   -38,   -38,   164,   -38,   -38,   163,   -36,   -38,   -38,
     470,   -38,   -38,   275,   -38,   166,   353,   -38,   -38,   -38,
     -80,   149,   170,   176,   177,   -76,   483,   178,   179,   277,
     180,   378,   566,   278,   158,   260,   494,   161,   261,   -76,
     420,   212,   213,   183,   279,   -76,   549,   420,   184,   -76,
     291,   -76,   292,    68,   293,   328,    74,   -54,   -54,   -54,
     204,   262,   511,   302,   303,   -76,    68,   310,   -76,    87,
     192,   307,   304,   -54,    68,   263,   604,   216,   217,   -54,
     354,   218,   219,   -54,   220,   308,   -76,   -76,   -76,   -76,
     -76,   266,   311,   309,    68,   264,   317,   223,   210,   265,
     318,   192,   192,   319,   -76,   345,   346,   603,   347,   605,
     260,   288,   260,   261,   348,   261,    68,   225,    68,    68,
      68,    68,   609,   -76,   394,   260,   350,   204,   261,   548,
     299,   -53,   -53,   355,   212,   213,   262,   -76,   262,   259,
     -51,   357,   562,   -76,   428,   -34,   -53,    60,    60,   184,
     263,   262,   263,   438,   -51,   269,   192,   -76,   268,   258,
     -51,    68,    68,   192,   -51,   263,   266,   271,   266,   249,
     264,   -76,   264,   404,   265,   -47,   265,   -76,   507,   587,
     289,   266,   367,   212,   213,   264,    68,   368,    68,   265,
     196,   197,   381,    68,   198,   199,   382,   200,   276,   -86,
     -86,   -86,   -86,   -86,   397,   282,   192,   398,   408,   458,
     203,   407,   431,   432,   259,   433,   259,   -86,   290,   212,
     213,   443,    60,   -86,    60,   296,   192,   -86,   444,   259,
     -86,   446,   448,   268,   258,   268,   258,    60,   306,   -87,
     -87,   -87,   -87,   -87,   -86,   312,   192,   -86,   268,   258,
     449,   320,   316,   453,   284,   -49,   454,   -87,   455,   322,
     192,   230,   231,   -87,   460,   232,   233,   -87,   234,   -49,
     464,   210,   343,   324,   -69,   -49,   321,   465,    68,   -69,
     473,   237,   466,   472,   -69,   -69,   477,   325,   -69,   -69,
     484,   -69,   192,   -44,   478,   479,    68,   -44,   488,   -69,
     210,   -69,   434,   143,   -69,   489,   269,   192,   192,   192,
     192,   490,   333,   334,   210,   498,   335,   336,   499,   337,
     249,   210,   210,   210,   210,   210,   165,   435,   -76,   500,
     210,   513,   340,   -88,   -88,   -88,   -88,   -88,   514,   515,
     210,   523,   -76,    70,   516,   -76,    70,   524,   422,   391,
     517,   -88,   528,   -76,   518,   430,    70,   -88,   529,    70,
     193,   -88,   436,   192,    70,   533,   519,   -76,   520,   192,
     192,   534,   -87,   -76,   512,    68,   538,   327,   -52,   -52,
     192,   521,   539,   -43,    70,   522,   -87,   501,   211,   -87,
     525,   193,   193,   -52,   526,   527,   552,   412,   413,   -52,
     530,   414,   415,   -52,   416,   305,    70,   226,    70,    70,
      70,    70,   502,    81,   531,   216,   217,   419,    33,   218,
     219,   -45,   220,    34,    35,   -46,   469,    38,    39,   532,
      40,   -88,   535,   577,   497,   223,   212,   213,    45,   -37,
      46,   503,   192,    47,   589,   -88,   193,   536,   -88,   315,
     590,    70,    70,   193,   210,   550,   -76,   -66,   537,   230,
     231,   540,   -66,   232,   233,   541,   234,   -66,   -66,   597,
     -76,   -66,   -66,   -76,   -66,   598,    70,   396,    70,   237,
     -86,   551,   -66,    70,   -66,   -51,   359,   -66,   193,   556,
     557,   558,    81,   563,   -86,   193,   193,    33,   269,   -51,
     -86,   564,    34,    35,   -86,   -51,    38,    39,   211,    40,
     565,   569,   249,   594,   482,   211,   193,    45,   -44,    46,
     570,   210,    47,   429,   212,   213,   571,   286,   226,   -55,
     -55,   -55,   572,   333,   334,   226,   193,   335,   336,   573,
     337,    68,    68,   192,   574,   -55,   575,   576,   581,   -66,
     193,   -55,    13,   340,   -66,    95,   -50,   582,   583,   -66,
     -66,   211,   344,   -66,   -66,   588,   -66,   591,    70,   -87,
     -50,   592,   596,   -50,   -66,   599,   -66,   496,   373,   -66,
     600,   -88,   193,   -87,   601,   602,    70,   412,   413,   -87,
     211,   414,   415,   -87,   416,   -88,   606,   193,   193,   193,
     193,   -88,   607,   608,   211,   -88,    31,   419,   567,     0,
       0,   211,   211,   211,   211,   211,    68,     0,    68,     0,
     211,   -76,   -76,   -76,   -76,   -76,     0,    67,     0,     0,
     211,    68,     0,   -76,   -76,   -76,   -76,   -76,   423,   -76,
      67,     0,   -76,     0,   191,   344,   103,     0,    67,   -79,
     -79,   -76,   344,   193,     0,     0,     0,   -76,   401,   193,
     193,   -76,     0,   -79,   -79,    70,     0,   -79,    67,   -79,
     193,     0,   209,   -79,     0,   191,   191,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -86,   -86,   -86,   -86,   -86,
      67,   123,    67,    67,    67,   127,   -66,     0,   -76,     0,
       0,   -66,     0,   -86,   -76,   406,   -66,   -66,   -76,   -86,
     -66,   -66,     0,   -66,   -48,   -79,   -79,   -79,   -79,   -79,
       0,   -66,     0,   -66,   423,   389,   -66,     0,   -48,     0,
     191,   423,   193,   -79,   -48,    67,    67,   191,   -48,   -79,
      66,   -66,     0,   -79,   211,   286,   -66,   -54,   -54,   -54,
       0,   -66,   -66,    66,     0,   -66,   -66,   190,   -66,     0,
      67,    66,    67,   -54,   -86,   -60,   -66,    67,   -66,   -54,
     399,   -66,   -60,   -57,   329,   -57,   -57,   -57,   -86,   -60,
     191,    66,   -60,   493,   -86,   208,   -60,     0,   190,   190,
       0,   -57,   -60,   212,   213,     0,   -60,   -57,   -77,   174,
     191,   -57,     0,    66,   175,    66,    66,   126,     0,   176,
     177,   211,   -77,   178,   179,   439,   180,     0,   -77,     0,
     191,     0,   -77,     0,   181,     0,   182,   -62,     0,   183,
       0,    70,    70,   193,   191,   -59,   -59,   -59,   -59,   -59,
       0,   -62,     0,   190,     0,   209,   342,   -62,    66,    66,
     190,   -62,    67,   -59,   -76,   -76,   -76,   -76,   -76,   -59,
     299,   -52,   -52,   -59,     0,     0,   191,     0,     0,     0,
      67,   -87,   -76,    66,   209,    66,   -52,     0,   -76,   274,
      66,   191,   191,   191,   372,   -87,     0,   -61,   209,   -88,
       0,   -87,     0,   190,     0,   209,   209,   209,   386,   209,
       0,   -61,     0,   -88,   209,     0,    70,   -61,    70,   -88,
       0,   -61,     0,   190,   209,     0,   -76,   -76,   -76,   -76,
     -76,    70,   421,    96,   -52,   -52,   427,     0,   -76,   -76,
     -76,   -76,   -76,   190,   -76,     0,     0,   191,     0,   -52,
     -76,   361,   -52,   191,   191,   -64,   -76,   190,     0,    67,
     -64,     0,   -76,   366,   191,   -64,   -64,   -68,   208,   -64,
     -64,     0,   -64,     0,   -79,    66,   -78,    95,   -49,     0,
     -64,   -68,   -64,     0,   450,   -64,     0,   -68,   -79,   190,
     -78,   -68,   -49,    66,   -79,   -49,   -78,   208,   174,     0,
     -78,     0,     0,   175,   190,   190,   371,     0,   176,   177,
     -48,   208,   178,   179,     0,   180,     0,     0,   208,   208,
     385,     0,   208,   181,   -48,   182,   191,   208,   183,     0,
     -48,     0,   -63,     0,    65,     0,   -77,   208,   209,     0,
     -76,   -76,   -76,   -76,   -76,     0,   -63,    65,   426,     0,
     -77,   189,   -63,   -77,     0,    65,   -63,     0,   -76,   -69,
     190,   -76,     0,    71,   -69,    72,   190,   190,     0,   -69,
     -69,   -45,    66,   -69,   -69,    65,   -69,   190,     0,   207,
       0,     0,   189,   189,   -69,   -45,   -69,     0,   456,   -69,
       0,   -45,   -62,   -64,     0,   -45,     0,    65,   -64,    65,
     125,     0,     0,   -64,   -64,   209,   -62,   -64,   -64,   -62,
     -64,     0,   -60,   -60,   -60,   -60,   -60,     0,   -64,     0,
     -64,     0,   461,   -64,   -61,    67,    67,   191,     0,     0,
     -60,   -77,   -77,   -77,   -77,   -77,   -60,   189,   -61,   190,
     -60,   -61,    65,    65,   189,    64,   -68,     0,     0,   -77,
     -60,   208,     0,     0,     0,   -77,     0,     0,    64,   -77,
     -68,     0,   188,   -68,   -60,   510,    64,    65,   -46,    65,
     -60,   -77,     0,     0,    65,   212,   213,   -62,   -62,   -62,
     -62,   -62,   -46,     0,   -51,   -77,    64,   189,   -46,   -72,
     206,   -77,   -46,   188,   188,   -62,     0,     0,   -51,     0,
      67,   -62,    67,   -72,   452,   -62,   -69,   189,    64,   -72,
     124,   -69,   -51,   -72,   -51,    67,   -69,   -69,   208,   547,
     -69,   -69,     0,   -69,     0,     0,   -51,   189,   -51,   212,
     213,   -69,   463,   -69,   471,   467,   -69,     0,    66,    66,
     190,   189,   -61,   -61,   -61,   -61,   -61,   -78,   188,   -51,
       0,     0,   207,    64,    64,   188,     0,   -64,     0,    65,
     -61,   -78,   -64,   -51,   -78,   561,   -61,   -64,   -64,   476,
     -61,   -64,   -64,   189,   -64,   212,   213,    65,    64,     0,
      64,   207,   -64,   -63,   -64,    64,   474,   -64,   189,   370,
     -87,   -87,   -87,   -87,   -87,   207,   -73,   -63,   188,     0,
     -63,     0,   207,   384,     0,   -51,   207,     0,   -87,     0,
     -73,   207,   -69,    66,   -87,    66,   -73,   -69,   188,   -51,
     -73,   207,   -69,   -69,     0,   487,   -69,   -69,    66,   -69,
       0,   425,   -45,   -71,   -67,     0,     0,   -69,   188,   -69,
       0,   480,   -69,     0,   189,   -62,   -45,   -71,   -67,   -45,
     189,   189,   188,   -71,   -67,    63,    65,   -71,   -67,   -62,
       0,   189,     0,   206,   -64,   -62,   -74,     0,    63,   -64,
      64,     0,   187,     0,   -64,   -64,    63,     0,   -64,   -64,
     -74,   -64,     0,     0,   188,     0,   -74,   586,    64,   -64,
     -74,   -64,   206,   485,   -64,     0,    63,   212,   213,   369,
     205,   -61,     0,   187,   187,     0,   206,   -88,   -88,   -88,
     -88,   -88,     0,   383,     0,   -61,     0,   206,   122,   -69,
       0,   -61,   206,   189,   -69,   -88,     0,     0,     0,   -69,
     -69,   -88,   206,   -69,   -69,   207,   -69,   -68,     0,   -51,
     -78,   424,     0,     0,   -69,     0,   -69,     0,   491,   -69,
       0,   -68,     0,   -51,   -78,   188,   -51,   -68,   187,   555,
     -78,   188,   188,    63,    63,   187,     0,    64,    61,   -66,
     -51,     0,   188,   -75,   -66,     0,   580,     0,     0,   -66,
     -66,    61,     0,   -66,   -66,   185,   -66,   -75,    63,    61,
      63,     0,     0,   -75,   -66,    63,   -66,   -75,   505,   -66,
       0,     0,   207,   -68,   -68,   -68,   -68,   -68,   187,    61,
       0,     0,     0,   104,     0,   -66,   185,   185,     0,     0,
     -66,   -68,    65,    65,   189,   -66,   -66,   -68,   187,   -66,
     -66,   -68,   -66,   -46,   188,   -78,   -78,   -78,   -78,   -78,
     -66,     0,   -66,     0,   542,   -66,   206,   -46,   187,     0,
     -46,     0,     0,   -78,   -76,   -76,   -76,   -76,   -76,   -78,
       0,     0,   187,   -78,   -56,   329,   -56,   -56,   -56,   -65,
     -63,   185,   -76,   330,     0,   -76,    61,    61,   185,    72,
      63,     0,   -56,   -65,   -63,     0,   -70,     0,   -56,   -65,
     -63,   -45,   -56,   -65,   356,   -46,     0,    65,    63,    65,
     -70,    61,   205,    61,     0,   -45,   -70,     0,    61,   -46,
     -70,   -45,    65,   206,     0,   -46,   205,   -72,     0,     0,
       0,   185,   -58,   -58,   -58,   -58,   -58,   205,     0,     0,
     -72,   -72,   205,    64,    64,   188,     0,   -72,   -73,   -73,
     -58,   185,   205,   -71,   -72,     0,   -58,   -72,   269,   409,
     -58,     0,   -73,   -73,     0,     0,   -73,   -71,   -73,   -64,
       0,   185,   249,   -71,   -64,   187,   -71,   -67,   595,   -64,
     -64,   187,   187,   -64,   -64,   185,   -64,    63,     0,    59,
     -71,   -67,   187,   -71,   -64,     0,   -64,   -67,   553,   -64,
       0,     0,    82,    61,     0,    97,    88,   -55,   -55,   -55,
      59,    62,     0,   -86,   -86,   -86,   -86,   -86,    64,     0,
      64,    61,   -74,   -55,    62,   362,   -55,     0,   186,   -75,
     100,   -86,    62,    64,   -86,     0,   -74,   110,   111,   376,
       0,     0,   -74,   -75,   -76,   -76,   -76,   -76,   -76,   -75,
     387,     0,    62,   -69,   187,   392,   105,   -65,   -69,   186,
     186,   -70,   -76,   -69,   -69,   402,   205,   -69,   -69,   375,
     -69,   -65,     0,     0,     0,   -70,     0,   -65,   -69,     0,
     -69,   -70,   559,   -69,     0,   -67,     0,     0,   185,   -63,
     -63,   -63,   -63,   -63,   185,   185,     0,   267,   156,   -67,
      61,   -64,   -67,     0,     0,   185,   -64,   -63,     0,     0,
       0,   -64,   -64,   -63,   150,   -64,   -64,   -63,   -64,    62,
      62,   157,    59,     0,    59,     0,   -64,     0,   -64,    59,
     578,   -64,     0,   205,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,   283,   -74,    62,     0,    62,     2,     3,     4,
       5,    62,   -76,    63,    63,   187,     0,   -74,   -69,   380,
     -74,     0,   297,   -69,   186,     0,     0,   185,   -69,   -69,
       0,     0,   -69,   -69,     0,   -69,   -75,   -65,     0,   508,
       0,   -70,   313,   -69,   186,   -69,     0,   584,   -69,     0,
     -75,   -65,   194,   -75,   -65,   -70,   323,   195,   -70,     0,
       0,     0,   196,   197,   186,     0,   198,   199,     0,   200,
     214,     0,     0,     0,   349,   215,     0,   201,   186,   202,
     216,   217,   203,     0,   218,   219,     0,   220,    63,     0,
      63,     0,    59,     0,   228,   221,    62,   222,     0,   229,
     223,     0,     0,    63,   230,   231,   545,     0,   232,   233,
       0,   234,     0,     0,    62,     0,     0,     0,   105,   235,
     331,   236,     0,     0,   237,   332,    61,    61,   185,     0,
     333,   334,   105,     0,   335,   336,     1,   337,     0,     2,
       3,     4,     5,   105,     0,   338,     0,   339,   105,     0,
     340,     0,   -76,   -76,   -76,   -76,   -76,     0,   105,   437,
     -86,   -86,   -86,   -86,   -86,   440,   441,     0,     0,   410,
     -76,    59,     0,   -76,   411,     0,   447,   119,   -86,   412,
     413,   186,     0,   414,   415,     0,   416,   186,   186,     0,
       0,     0,     0,    62,   417,     0,   418,     0,   186,   419,
       0,    61,     0,    61,     0,     0,     0,   -18,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,    61,     0,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,     0,
     -18,   -18,     0,   -18,   -18,     0,   -18,     0,   504,   -18,
     -18,   -18,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     186,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,
       0,   -27,   105,     0,   -27,   -27,   -27,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,
     -29,   -29,     0,   -29,   -29,     0,   -29,     0,     0,   -29,
     -29,   -29,   -45,   -45,   -45,   -45,   -45,   -46,   -46,   -46,
     -46,   -46,     0,     0,   -79,   -79,   -79,   -79,   -79,   300,
     -45,   -55,   -55,   -55,     0,   -46,   -45,   267,   156,   105,
     -45,   -46,   -79,     0,     0,   -46,     0,   -55,   -79,     0,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,    62,
      62,   568,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,
       0,     0,   -24,   -24,   -24,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -71,   -71,   -71,
     -71,   -71,     0,   -72,   -67,   -67,   -67,   -67,   -67,   -72,
     -73,     0,   267,   -72,   267,   -71,   -73,     0,     0,     0,
     -73,   -71,   -67,     0,     0,   -71,     0,   267,   -67,     0,
       0,     0,   -67,     0,    62,     0,    62,     0,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,    62,
     -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,
       0,   -21,   -21,     0,   -21,   -21,     0,   -21,     0,     0,
     -21,   -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,     0,   -22,     0,     0,   -22,   -22,   -22,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
       0,   -23,   -23,     0,   -23,   -23,     0,   -23,     0,     0,
     -23,   -23,   -23,   -26,     0,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,   -26,
     -26,     0,   -26,     0,     0,   -26,   -26,   -26,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,
     -25,   -25,   -25,   -17,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,     0,     0,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,
     -17,     0,   -17,     0,     0,   -17,   -17,   -17,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
       0,   -28,   -28,     0,   -28,   -28,     0,   -28,     0,     0,
     -28,   -28,   -28,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,     0,   -42,   -42,     0,   -42,
     -42,     0,   -42,     0,     0,   -42,   -42,   -42,   -40,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
       0,   -40,   -40,     0,   -40,   -40,     0,   -40,     0,     0,
     -40,   -40,   -40,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,    -8,    -8,    -8,     0,    -8,    -8,     0,    -8,
      -8,     0,    -8,     0,     0,    -8,    -8,    -8,   -16,     0,
     -16,   -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
     -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,
       0,   -16,   -16,     0,   -16,   -16,     0,   -16,     0,     0,
     -16,   -16,   -16,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,     0,   -30,
     -30,     0,   -30,     0,     0,   -30,   -30,   -30,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,
     -31,   -31,   -31,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,
     -32,     0,   -32,     0,     0,   -32,   -32,   -32,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   593,
       0,   -38,   -38,     0,   -38,   -38,     0,   -38,     0,     0,
     -38,   -38,   -38,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,     0,   -39,
     -39,     0,   -39,     0,     0,   -39,   -39,   -39,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,
       0,   -41,   -41,     0,   -41,   -41,     0,   -41,     0,     0,
     -41,   -41,   -41,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,     0,   -33,   -33,     0,   -33,
     -33,     0,   -33,     0,     0,   -33,   -33,   -33,   -15,     0,
     -15,   -15,   -15,   -15,   -15,   -15,     0,     0,     0,     0,
     -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,
       0,   -15,   -15,     0,   -15,   -15,     0,   -15,     0,     0,
     -15,    29,   -15,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,     0,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,     0,     0,   -27,   -27,   -27,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,     0,
       0,   -29,   -29,     0,   -29,   -29,     0,   -29,     0,     0,
     -29,   -29,   -29,   172,     0,    32,     2,     3,     4,     5,
      33,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,     0,    40,    41,     0,     0,    42,    43,     0,    44,
      45,     0,    46,     0,     0,    47,   -20,   173,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,   -24,   -24,     0,   -24,   -24,     0,   -24,     0,     0,
     -24,   -24,   -24,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,     0,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,
     -21,     0,   -21,   -21,     0,     0,   -21,   -21,     0,   -21,
     -21,     0,   -21,     0,     0,   -21,   -21,   -21,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,     0,
       0,   -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,
     -22,   -22,   -22,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,     0,     0,   -23,   -23,     0,   -23,
     -23,     0,   -23,     0,     0,   -23,   -23,   -23,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,   -26,   -26,     0,   -26,   -26,     0,   -26,     0,     0,
     -26,   -26,   -26,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,   -25,   -25,     0,   -25,
     -25,     0,   -25,     0,     0,   -25,   -25,   -25,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,
       0,   -28,   -28,     0,   -28,   -28,     0,   -28,     0,     0,
     -28,   -28,   -28,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,     0,     0,   -42,   -42,     0,   -42,
     -42,     0,   -42,     0,     0,   -42,   -42,   -42,   -40,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,
       0,   -40,   -40,     0,   -40,   -40,     0,   -40,     0,     0,
     -40,   -40,   -40,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,     0,     0,   -30,   -30,     0,   -30,
     -30,     0,   -30,     0,     0,   -30,   -30,   -30,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,
       0,   -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,
     -31,   -31,   -31,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,     0,     0,   -32,   -32,     0,   -32,
     -32,     0,   -32,     0,     0,   -32,   -32,   -32,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,     0,
       0,   -39,   -39,     0,   -39,   -39,     0,   -39,     0,     0,
     -39,   -39,   -39,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,     0,     0,   -41,   -41,     0,   -41,
     -41,     0,   -41,     0,     0,   -41,   -41,   -41,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,
       0,   -33,   -33,     0,   -33,   -33,     0,   -33,     0,     0,
     -33,   -33,   -33,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,     0,     0,     0,     0,   -18,   -18,   -18,   -18,   -18,
     -18,     0,   -18,   -18,     0,     0,   -18,   -18,     0,   -18,
     -18,     0,   -18,     0,     0,   -18,   -18,   -18,   -15,     0,
     -15,   -15,   -15,   -15,   -15,   -15,     0,     0,     0,     0,
     -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,
       0,   -15,   -15,     0,   -15,   -15,     0,   -15,     0,     0,
     -15,   272,   -15,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,    -8,    -8,     0,     0,    -8,    -8,     0,    -8,
      -8,     0,    -8,     0,     0,    -8,    -8,    -8,   -15,     0,
     -15,   -15,   -15,   -15,   -15,   -15,     0,     0,     0,     0,
     -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,
       0,   -15,   -15,     0,   -15,   -15,     0,   -15,     0,     0,
     -15,   351,   -15,   -17,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,     0,     0,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,   -17,   -17,     0,     0,   -17,   -17,     0,   -17,
     -17,     0,   -17,     0,     0,   -17,   -17,   -17,   -16,     0,
     -16,   -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
     -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,     0,
       0,   -16,   -16,     0,   -16,   -16,     0,   -16,     0,     0,
     -16,   -16,   -16,   172,     0,    32,     2,     3,     4,     5,
      33,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,     0,    40,    41,     0,     0,    42,    43,     0,    44,
      45,     0,    46,     0,     0,    47,   250,   173,    32,     2,
       3,     4,     5,    33,     0,     0,     0,     0,    34,    35,
     251,   252,    38,    39,     0,    40,   253,     0,     0,   254,
     255,     0,   256,    45,     0,    46,     0,     0,    47,     0,
     257,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,
     -75,     0,     0,   -65,   -65,   -65,   -65,   -65,    97,   -74,
     -54,   -54,   -54,     0,   -75,   -74,     0,     0,     0,   -74,
     -75,   -65,     0,     0,   -75,     0,   -54,   -65,     0,   -54,
       0,   -65,   -70,   -70,   -70,   -70,   -70,   -57,   287,   -57,
     -57,   -57,     0,     0,   -59,   -59,   -59,   -59,   -59,     0,
     -70,     0,     0,     0,     0,   -57,   -70,     0,     0,     0,
     -70,   -57,   -59,   -60,   -60,   -60,   -60,   -60,   -59,     0,
     -77,   -77,   -77,   -77,   -77,   -62,   -62,   -62,   -62,   -62,
       0,   -60,   -61,   -61,   -61,   -61,   -61,   -60,   -77,     0,
       0,    -2,     1,   -62,   -77,     2,     3,     4,     5,   -62,
     -61,   -68,   -68,   -68,   -68,   -68,   -61,     0,   -78,   -78,
     -78,   -78,   -78,   -56,   287,   -56,   -56,   -56,     0,   -68,
     -58,   -58,   -58,   -58,   -58,   -68,   -78,     0,     0,    -4,
      -4,   -56,   -78,    -4,    -4,    -4,    -4,   -56,   -58,   -63,
     -63,   -63,   -63,   -63,   -58,     0,   -45,   -45,   -45,   -45,
     -45,   -46,   -46,   -46,   -46,   -46,     0,   -63,   -72,   -72,
     -72,   -72,   -72,   -63,   -45,     0,     0,    -6,    -6,   -46,
     -45,    -6,    -6,    -6,    -6,   -46,   -72,   -73,   -73,   -73,
     -73,   -73,   -72,     0,   -71,   -71,   -71,   -71,   -71,   -67,
     -67,   -67,   -67,   -67,     0,   -73,   -74,   -74,   -74,   -74,
     -74,   -73,   -71,     0,     0,    -5,    -5,   -67,   -71,    -5,
      -5,    -5,    -5,   -67,   -74,   -75,   -75,   -75,   -75,   -75,
     -74,     0,   -65,   -65,   -65,   -65,   -65,   -70,   -70,   -70,
     -70,   -70,     0,   -75,   -87,   -87,   -87,   -87,   -87,   -75,
     -65,     0,     0,    -3,    -3,   -70,   -65,    -3,    -3,    -3,
      -3,   -70,   -87,     0,     0,   -87,   -88,   -88,   -88,   -88,
     -88,   -79,   -79,   -79,   -79,   -79,   -57,    98,   -57,   -57,
     -57,     0,     0,     0,   -88,     0,     0,   -88,     0,   -79,
       0,     0,   -79,     0,   -57,     0,     0,   -57,   -59,   -59,
     -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,   -59,     0,     0,   -59,
       0,   -60,     0,     0,   -60,     0,   -77,     0,     0,   -77,
     -62,   -62,   -62,   -62,   -62,   -61,   -61,   -61,   -61,   -61,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,   -62,     0,
       0,   -62,     0,   -61,     0,     0,   -61,     0,   -68,     0,
       0,   -68,   -78,   -78,   -78,   -78,   -78,   -56,    98,   -56,
     -56,   -56,   -58,   -58,   -58,   -58,   -58,     0,     0,     0,
     -78,     0,     0,   -78,     0,   -56,     0,     0,   -56,     0,
     -58,     0,     0,   -58,   -63,   -63,   -63,   -63,   -63,   -45,
     -45,   -45,   -45,   -45,   -46,   -46,   -46,   -46,   -46,     0,
       0,     0,   -63,     0,     0,   -63,     0,   -45,     0,     0,
     -45,     0,   -46,     0,     0,   -46,   -72,   -72,   -72,   -72,
     -72,   -73,   -73,   -73,   -73,   -73,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,   -72,     0,     0,   -72,     0,   -73,
       0,     0,   -73,     0,   -71,     0,     0,   -71,   -67,   -67,
     -67,   -67,   -67,   -74,   -74,   -74,   -74,   -74,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,   -67,     0,     0,   -67,
       0,   -74,     0,     0,   -74,     0,   -75,     0,     0,   -75,
     -65,   -65,   -65,   -65,   -65,   -70,   -70,   -70,   -70,   -70,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,   -65,     0,
       0,   -65,     0,   -70,     0,     0,   -70,     0,   -87,   -88,
     -88,   -88,   -88,   -88,   -79,   -79,   -79,   -79,   -79,   -57,
     301,   -57,   -57,   -57,    -8,    -8,     0,   -88,    -8,    -8,
      -8,    -8,   -79,     0,     0,     0,     0,   -57,   -59,   -59,
     -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,   -77,   -77,
     -77,   -77,   -77,   -18,   -18,     0,   -59,   -18,   -18,   -18,
     -18,   -60,     0,     0,     0,     0,   -77,   -62,   -62,   -62,
     -62,   -62,   -61,   -61,   -61,   -61,   -61,   -68,   -68,   -68,
     -68,   -68,   -12,   -12,     0,   -62,   -12,   -12,   -12,   -12,
     -61,     0,     0,     0,     0,   -68,   -78,   -78,   -78,   -78,
     -78,   -56,   301,   -56,   -56,   -56,   -58,   -58,   -58,   -58,
     -58,   -10,   -10,     0,   -78,   -10,   -10,   -10,   -10,   -56,
       0,     0,     0,     0,   -58,   -63,   -63,   -63,   -63,   -63,
     -45,   -45,   -45,   -45,   -45,   -46,   -46,   -46,   -46,   -46,
     -17,   -17,     0,   -63,   -17,   -17,   -17,   -17,   -45,     0,
       0,     0,     0,   -46,   -72,   -72,   -72,   -72,   -72,   -73,
     -73,   -73,   -73,   -73,   -71,   -71,   -71,   -71,   -71,   -16,
     -16,     0,   -72,   -16,   -16,   -16,   -16,   -73,     0,     0,
       0,     0,   -71,   -67,   -67,   -67,   -67,   -67,   -74,   -74,
     -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,   -67,     0,     0,     0,   300,   -74,   -54,   -54,   -54,
       0,   -75,   -65,   -65,   -65,   -65,   -65,   -70,   -70,   -70,
     -70,   -70,     0,   -54,     0,     0,     0,     0,     0,     0,
     -65,     0,     0,     0,     0,   -70
};

static const yytype_int16 yycheck[] =
{
       0,     0,    21,    22,     1,   173,   164,     7,     7,    51,
      32,     3,   138,    80,    36,   138,   361,    17,   138,    30,
       3,     3,    33,     0,     4,     5,     6,     7,    28,   278,
     375,    12,    43,     3,     3,    46,    47,   163,    35,   165,
      51,   138,     3,   292,   170,    26,   391,    29,   274,    32,
       3,   366,    32,    32,   303,   138,   401,    11,    12,   308,
      71,    32,   288,    12,    75,   380,    29,    78,    79,   318,
      33,   138,    26,    84,     3,   138,    32,    26,   304,   138,
      29,   396,    93,    94,    95,    96,    97,    98,   314,   257,
       8,   406,    10,    11,    12,    33,     3,   164,     0,     1,
      33,     8,     4,     5,     6,     7,    13,    14,    26,   120,
      17,    18,    33,    20,    32,    10,    11,    12,    36,   138,
      32,    28,   133,    30,    36,    32,    33,   138,   139,   140,
       3,    26,    10,    11,    12,     8,    12,    32,   138,   138,
      13,    14,    33,    33,    17,    18,    19,    20,    26,    33,
      26,    29,   163,    33,   165,    28,    32,    30,    33,   170,
      33,    29,   507,     3,   175,    10,    11,    12,    34,    29,
       3,   182,   183,    13,    14,     3,     3,    17,    18,    29,
      20,    26,     3,   432,   195,    11,    12,    32,    28,    33,
     348,   202,   203,    33,    11,    12,    32,   512,    29,   544,
      26,    26,   428,     3,   215,    34,    32,    29,     8,    26,
      36,   222,   223,    13,    14,    32,    32,    17,    18,    36,
      20,     8,     9,    10,    11,    12,   237,    12,    28,    32,
      30,   273,    32,    33,   549,    32,    32,   248,   249,    26,
      12,    26,     3,    32,   255,    32,    33,    32,    33,    36,
     499,    36,    13,    14,    26,    31,    17,    18,   269,    20,
      32,    33,   273,    29,    36,    29,   277,    28,   279,   495,
      11,    12,    33,   284,   285,   286,   287,    10,    11,    12,
     291,   348,   293,    12,     3,    26,    26,   298,   299,   300,
     301,   302,    29,    26,    13,    14,   307,    26,   309,    32,
      29,     3,    32,    36,    11,    12,   317,    32,   319,    32,
     352,    13,    14,    12,   325,    17,    18,    29,    20,    26,
      29,   332,    32,     3,    32,    32,    28,    26,   339,   340,
      29,    33,     3,    13,    14,   346,   347,    17,    18,    32,
      20,   352,    13,    14,     3,     1,   357,     3,     4,     5,
       6,     7,     8,    33,    13,    14,   367,    13,    14,    15,
      16,    17,    18,    29,    20,    21,    22,    29,    24,    25,
     381,    27,    28,     3,    30,    32,    29,    33,    34,    35,
      32,   131,    32,    13,    14,    12,   397,    17,    18,    33,
      20,     3,   518,    33,   144,   518,   407,   147,   518,    26,
     411,    13,    14,    33,    33,    32,    33,   418,   419,    36,
      33,    12,    33,    30,    33,     8,    33,    10,    11,    12,
     431,   518,   433,    33,    33,    26,    43,     3,    29,    46,
      47,    33,    33,    26,    51,   518,   594,    13,    14,    32,
      29,    17,    18,    36,    20,    33,     8,     9,    10,    11,
      12,   518,    28,    33,    71,   518,    33,    33,    75,   518,
      33,    78,    79,    33,    26,    33,    33,   593,    33,   595,
     593,    33,   595,   593,    33,   595,    93,    94,    95,    96,
      97,    98,   608,    12,     3,   608,    33,   498,   608,   500,
      10,    11,    12,     3,    13,    14,   593,    26,   595,   518,
      12,    31,   513,    32,    33,    32,    26,   518,   519,   520,
     593,   608,   595,     3,    26,    12,   133,    12,   518,   518,
      32,   138,   139,   140,    36,   608,   593,   594,   595,    26,
     593,    26,   595,     3,   593,    32,   595,    32,    33,   550,
       3,   608,    33,    13,    14,   608,   163,    32,   165,   608,
      13,    14,    33,   170,    17,    18,    32,    20,   175,     8,
       9,    10,    11,    12,    33,   182,   183,    32,    32,     3,
      33,    33,    33,    33,   593,    33,   595,    26,   195,    13,
      14,    29,   593,    32,   595,   202,   203,    36,     3,   608,
      12,    29,    34,   593,   593,   595,   595,   608,   215,     8,
       9,    10,    11,    12,    26,   222,   223,    29,   608,   608,
     360,     3,   229,    32,    11,    12,    32,    26,    32,   236,
     237,    13,    14,    32,   374,    17,    18,    36,    20,    26,
      32,   248,   249,    12,     3,    32,    28,    32,   255,     8,
     390,    33,    32,    32,    13,    14,    32,    26,    17,    18,
     400,    20,   269,    32,    32,    32,   273,    36,    32,    28,
     277,    30,     3,    32,    33,    32,    12,   284,   285,   286,
     287,    32,    13,    14,   291,    33,    17,    18,    33,    20,
      26,   298,   299,   300,   301,   302,    32,    28,    12,    33,
     307,    33,    33,     8,     9,    10,    11,    12,    32,    32,
     317,   451,    26,    30,    32,    29,    33,   457,   325,    33,
      32,    26,   462,    12,    32,   332,    43,    32,   468,    46,
      47,    36,   339,   340,    51,   475,    29,    26,    26,   346,
     347,   481,    12,    32,    33,   352,   486,    10,    11,    12,
     357,    34,   492,    32,    71,    32,    26,     3,    75,    29,
      32,    78,    79,    26,    32,    32,   506,    13,    14,    32,
      32,    17,    18,    36,    20,     3,    93,    94,    95,    96,
      97,    98,    28,     3,    32,    13,    14,    33,     8,    17,
      18,    32,    20,    13,    14,    32,     3,    17,    18,    32,
      20,    12,    32,   543,   411,    33,    13,    14,    28,    29,
      30,   418,   419,    33,   554,    26,   133,    32,    29,     3,
     560,   138,   139,   140,   431,    33,    12,     3,    32,    13,
      14,    32,     8,    17,    18,    32,    20,    13,    14,   579,
      26,    17,    18,    29,    20,   585,   163,    33,   165,    33,
      12,    32,    28,   170,    30,    12,    32,    33,   175,    32,
      32,    32,     3,    29,    26,   182,   183,     8,    12,    26,
      32,    29,    13,    14,    36,    32,    17,    18,   195,    20,
      29,    32,    26,    29,     3,   202,   203,    28,    32,    30,
      32,   498,    33,     3,    13,    14,    32,     8,   215,    10,
      11,    12,    32,    13,    14,   222,   223,    17,    18,    32,
      20,   518,   519,   520,    32,    26,    32,    32,    32,     3,
     237,    32,     7,    33,     8,    11,    12,    32,    32,    13,
      14,   248,   249,    17,    18,    32,    20,    32,   255,    12,
      26,    32,    32,    29,    28,    32,    30,     3,    32,    33,
      32,    12,   269,    26,    32,    32,   273,    13,    14,    32,
     277,    17,    18,    36,    20,    26,    32,   284,   285,   286,
     287,    32,    32,    32,   291,    36,    28,    33,   519,    -1,
      -1,   298,   299,   300,   301,   302,   593,    -1,   595,    -1,
     307,     8,     9,    10,    11,    12,    -1,    30,    -1,    -1,
     317,   608,    -1,     8,     9,    10,    11,    12,   325,    26,
      43,    -1,    29,    -1,    47,   332,    33,    -1,    51,    12,
      12,    26,   339,   340,    -1,    -1,    -1,    32,    33,   346,
     347,    36,    -1,    26,    26,   352,    -1,    29,    71,    32,
     357,    -1,    75,    36,    -1,    78,    79,    -1,    -1,    -1,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      93,    94,    95,    96,    97,    98,     3,    -1,    26,    -1,
      -1,     8,    -1,    26,    32,    33,    13,    14,    36,    32,
      17,    18,    -1,    20,    12,     8,     9,    10,    11,    12,
      -1,    28,    -1,    30,   411,    32,    33,    -1,    26,    -1,
     133,   418,   419,    26,    32,   138,   139,   140,    36,    32,
      30,     3,    -1,    36,   431,     8,     8,    10,    11,    12,
      -1,    13,    14,    43,    -1,    17,    18,    47,    20,    -1,
     163,    51,   165,    26,    12,    12,    28,   170,    30,    32,
      32,    33,    12,     8,     9,    10,    11,    12,    26,    26,
     183,    71,    29,     3,    32,    75,    26,    -1,    78,    79,
      -1,    26,    32,    13,    14,    -1,    36,    32,    12,     3,
     203,    36,    -1,    93,     8,    95,    96,    97,    -1,    13,
      14,   498,    26,    17,    18,    19,    20,    -1,    32,    -1,
     223,    -1,    36,    -1,    28,    -1,    30,    12,    -1,    33,
      -1,   518,   519,   520,   237,     8,     9,    10,    11,    12,
      -1,    26,    -1,   133,    -1,   248,   249,    32,   138,   139,
     140,    36,   255,    26,     8,     9,    10,    11,    12,    32,
      10,    11,    12,    36,    -1,    -1,   269,    -1,    -1,    -1,
     273,    12,    26,   163,   277,   165,    26,    -1,    32,    33,
     170,   284,   285,   286,   287,    26,    -1,    12,   291,    12,
      -1,    32,    -1,   183,    -1,   298,   299,   300,   301,   302,
      -1,    26,    -1,    26,   307,    -1,   593,    32,   595,    32,
      -1,    36,    -1,   203,   317,    -1,     8,     9,    10,    11,
      12,   608,   325,    10,    11,    12,   329,    -1,     8,     9,
      10,    11,    12,   223,    26,    -1,    -1,   340,    -1,    26,
      32,    33,    29,   346,   347,     3,    26,   237,    -1,   352,
       8,    -1,    32,    33,   357,    13,    14,    12,   248,    17,
      18,    -1,    20,    -1,    12,   255,    12,    11,    12,    -1,
      28,    26,    30,    -1,    32,    33,    -1,    32,    26,   269,
      26,    36,    26,   273,    32,    29,    32,   277,     3,    -1,
      36,    -1,    -1,     8,   284,   285,   286,    -1,    13,    14,
      12,   291,    17,    18,    -1,    20,    -1,    -1,   298,   299,
     300,    -1,   302,    28,    26,    30,   419,   307,    33,    -1,
      32,    -1,    12,    -1,    30,    -1,    12,   317,   431,    -1,
       8,     9,    10,    11,    12,    -1,    26,    43,   328,    -1,
      26,    47,    32,    29,    -1,    51,    36,    -1,    26,     3,
     340,    29,    -1,    31,     8,    33,   346,   347,    -1,    13,
      14,    12,   352,    17,    18,    71,    20,   357,    -1,    75,
      -1,    -1,    78,    79,    28,    26,    30,    -1,    32,    33,
      -1,    32,    12,     3,    -1,    36,    -1,    93,     8,    95,
      96,    -1,    -1,    13,    14,   498,    26,    17,    18,    29,
      20,    -1,     8,     9,    10,    11,    12,    -1,    28,    -1,
      30,    -1,    32,    33,    12,   518,   519,   520,    -1,    -1,
      26,     8,     9,    10,    11,    12,    32,   133,    26,   419,
      36,    29,   138,   139,   140,    30,    12,    -1,    -1,    26,
      12,   431,    -1,    -1,    -1,    32,    -1,    -1,    43,    36,
      26,    -1,    47,    29,    26,     3,    51,   163,    12,   165,
      32,    12,    -1,    -1,   170,    13,    14,     8,     9,    10,
      11,    12,    26,    -1,    12,    26,    71,   183,    32,    12,
      75,    32,    36,    78,    79,    26,    -1,    -1,    26,    -1,
     593,    32,   595,    26,    32,    36,     3,   203,    93,    32,
      95,     8,    12,    36,    12,   608,    13,    14,   498,     3,
      17,    18,    -1,    20,    -1,    -1,    26,   223,    26,    13,
      14,    28,    32,    30,    32,    32,    33,    -1,   518,   519,
     520,   237,     8,     9,    10,    11,    12,    12,   133,    12,
      -1,    -1,   248,   138,   139,   140,    -1,     3,    -1,   255,
      26,    26,     8,    26,    29,     3,    32,    13,    14,    32,
      36,    17,    18,   269,    20,    13,    14,   273,   163,    -1,
     165,   277,    28,    12,    30,   170,    32,    33,   284,   285,
       8,     9,    10,    11,    12,   291,    12,    26,   183,    -1,
      29,    -1,   298,   299,    -1,    12,   302,    -1,    26,    -1,
      26,   307,     3,   593,    32,   595,    32,     8,   203,    26,
      36,   317,    13,    14,    -1,    32,    17,    18,   608,    20,
      -1,   327,    12,    12,    12,    -1,    -1,    28,   223,    30,
      -1,    32,    33,    -1,   340,    12,    26,    26,    26,    29,
     346,   347,   237,    32,    32,    30,   352,    36,    36,    26,
      -1,   357,    -1,   248,     3,    32,    12,    -1,    43,     8,
     255,    -1,    47,    -1,    13,    14,    51,    -1,    17,    18,
      26,    20,    -1,    -1,   269,    -1,    32,     3,   273,    28,
      36,    30,   277,    32,    33,    -1,    71,    13,    14,   284,
      75,    12,    -1,    78,    79,    -1,   291,     8,     9,    10,
      11,    12,    -1,   298,    -1,    26,    -1,   302,    93,     3,
      -1,    32,   307,   419,     8,    26,    -1,    -1,    -1,    13,
      14,    32,   317,    17,    18,   431,    20,    12,    -1,    12,
      12,   326,    -1,    -1,    28,    -1,    30,    -1,    32,    33,
      -1,    26,    -1,    26,    26,   340,    12,    32,   133,    32,
      32,   346,   347,   138,   139,   140,    -1,   352,    30,     3,
      26,    -1,   357,    12,     8,    -1,    32,    -1,    -1,    13,
      14,    43,    -1,    17,    18,    47,    20,    26,   163,    51,
     165,    -1,    -1,    32,    28,   170,    30,    36,    32,    33,
      -1,    -1,   498,     8,     9,    10,    11,    12,   183,    71,
      -1,    -1,    -1,    75,    -1,     3,    78,    79,    -1,    -1,
       8,    26,   518,   519,   520,    13,    14,    32,   203,    17,
      18,    36,    20,    12,   419,     8,     9,    10,    11,    12,
      28,    -1,    30,    -1,    32,    33,   431,    26,   223,    -1,
      29,    -1,    -1,    26,     8,     9,    10,    11,    12,    32,
      -1,    -1,   237,    36,     8,     9,    10,    11,    12,    12,
      12,   133,    26,   248,    -1,    29,   138,   139,   140,    33,
     255,    -1,    26,    26,    26,    -1,    12,    -1,    32,    32,
      32,    12,    36,    36,   269,    12,    -1,   593,   273,   595,
      26,   163,   277,   165,    -1,    26,    32,    -1,   170,    26,
      36,    32,   608,   498,    -1,    32,   291,    12,    -1,    -1,
      -1,   183,     8,     9,    10,    11,    12,   302,    -1,    -1,
      12,    26,   307,   518,   519,   520,    -1,    32,    12,    12,
      26,   203,   317,    12,    26,    -1,    32,    29,    12,   324,
      36,    -1,    26,    26,    -1,    -1,    29,    26,    32,     3,
      -1,   223,    26,    32,     8,   340,    12,    12,    32,    13,
      14,   346,   347,    17,    18,   237,    20,   352,    -1,    30,
      26,    26,   357,    29,    28,    -1,    30,    32,    32,    33,
      -1,    -1,    43,   255,    -1,     8,    47,    10,    11,    12,
      51,    30,    -1,     8,     9,    10,    11,    12,   593,    -1,
     595,   273,    12,    26,    43,   277,    29,    -1,    47,    12,
      71,    26,    51,   608,    29,    -1,    26,    78,    79,   291,
      -1,    -1,    32,    26,     8,     9,    10,    11,    12,    32,
     302,    -1,    71,     3,   419,   307,    75,    12,     8,    78,
      79,    12,    26,    13,    14,   317,   431,    17,    18,    33,
      20,    26,    -1,    -1,    -1,    26,    -1,    32,    28,    -1,
      30,    32,    32,    33,    -1,    12,    -1,    -1,   340,     8,
       9,    10,    11,    12,   346,   347,    -1,   138,   139,    26,
     352,     3,    29,    -1,    -1,   357,     8,    26,    -1,    -1,
      -1,    13,    14,    32,   133,    17,    18,    36,    20,   138,
     139,   140,   163,    -1,   165,    -1,    28,    -1,    30,   170,
      32,    33,    -1,   498,     8,     9,    10,    11,    12,    -1,
      -1,    -1,   183,    12,   163,    -1,   165,     4,     5,     6,
       7,   170,    26,   518,   519,   520,    -1,    26,     3,    33,
      29,    -1,   203,     8,   183,    -1,    -1,   419,    13,    14,
      -1,    -1,    17,    18,    -1,    20,    12,    12,    -1,   431,
      -1,    12,   223,    28,   203,    30,    -1,    32,    33,    -1,
      26,    26,     3,    29,    29,    26,   237,     8,    29,    -1,
      -1,    -1,    13,    14,   223,    -1,    17,    18,    -1,    20,
       3,    -1,    -1,    -1,   255,     8,    -1,    28,   237,    30,
      13,    14,    33,    -1,    17,    18,    -1,    20,   593,    -1,
     595,    -1,   273,    -1,     3,    28,   255,    30,    -1,     8,
      33,    -1,    -1,   608,    13,    14,   498,    -1,    17,    18,
      -1,    20,    -1,    -1,   273,    -1,    -1,    -1,   277,    28,
       3,    30,    -1,    -1,    33,     8,   518,   519,   520,    -1,
      13,    14,   291,    -1,    17,    18,     1,    20,    -1,     4,
       5,     6,     7,   302,    -1,    28,    -1,    30,   307,    -1,
      33,    -1,     8,     9,    10,    11,    12,    -1,   317,   340,
       8,     9,    10,    11,    12,   346,   347,    -1,    -1,     3,
      26,   352,    -1,    29,     8,    -1,   357,    33,    26,    13,
      14,   340,    -1,    17,    18,    -1,    20,   346,   347,    -1,
      -1,    -1,    -1,   352,    28,    -1,    30,    -1,   357,    33,
      -1,   593,    -1,   595,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,   608,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,   419,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
     419,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      -1,    30,   431,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,     8,     9,    10,    11,    12,     8,
      26,    10,    11,    12,    -1,    26,    32,   518,   519,   498,
      36,    32,    26,    -1,    -1,    36,    -1,    26,    32,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,   518,
     519,   520,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     8,     9,    10,    11,    12,
      -1,    -1,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    26,     8,     9,    10,    11,    12,    32,
      26,    -1,   593,    36,   595,    26,    32,    -1,    -1,    -1,
      36,    32,    26,    -1,    -1,    36,    -1,   608,    32,    -1,
      -1,    -1,    36,    -1,   593,    -1,   595,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,   608,
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
      12,    -1,    -1,     8,     9,    10,    11,    12,     8,    26,
      10,    11,    12,    -1,    26,    32,    -1,    -1,    -1,    36,
      32,    26,    -1,    -1,    36,    -1,    26,    32,    -1,    29,
      -1,    36,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      26,    -1,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,
      36,    32,    26,     8,     9,    10,    11,    12,    32,    -1,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    26,     8,     9,    10,    11,    12,    32,    26,    -1,
      -1,     0,     1,    26,    32,     4,     5,     6,     7,    32,
      26,     8,     9,    10,    11,    12,    32,    -1,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    26,
       8,     9,    10,    11,    12,    32,    26,    -1,    -1,     0,
       1,    26,    32,     4,     5,     6,     7,    32,    26,     8,
       9,    10,    11,    12,    32,    -1,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    26,     8,     9,
      10,    11,    12,    32,    26,    -1,    -1,     0,     1,    26,
      32,     4,     5,     6,     7,    32,    26,     8,     9,    10,
      11,    12,    32,    -1,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    26,     8,     9,    10,    11,
      12,    32,    26,    -1,    -1,     0,     1,    26,    32,     4,
       5,     6,     7,    32,    26,     8,     9,    10,    11,    12,
      32,    -1,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    26,     8,     9,    10,    11,    12,    32,
      26,    -1,    -1,     0,     1,    26,    32,     4,     5,     6,
       7,    32,    26,    -1,    -1,    29,     8,     9,    10,    11,
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
      -1,    29,    -1,    26,    -1,    -1,    29,    -1,    26,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     0,     1,    -1,    26,     4,     5,
       6,     7,    26,    -1,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     0,     1,    -1,    26,     4,     5,     6,
       7,    26,    -1,    -1,    -1,    -1,    26,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     0,     1,    -1,    26,     4,     5,     6,     7,
      26,    -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     0,     1,    -1,    26,     4,     5,     6,     7,    26,
      -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       0,     1,    -1,    26,     4,     5,     6,     7,    26,    -1,
      -1,    -1,    -1,    26,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     0,
       1,    -1,    26,     4,     5,     6,     7,    26,    -1,    -1,
      -1,    -1,    26,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    26,    -1,    -1,    -1,     8,    26,    10,    11,    12,
      -1,    26,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    38,    39,    40,    41,
      42,    74,     0,    40,     3,    29,    33,    43,    44,    45,
      74,    32,    32,     3,     1,    35,    46,    46,    36,    34,
      47,    45,     3,     8,    13,    14,    15,    16,    17,    18,
      20,    21,    24,    25,    27,    28,    30,    33,    41,    46,
      48,    49,    50,    51,    54,    55,    56,    57,    58,    59,
      60,    62,    63,    64,    65,    66,    67,    68,    72,    74,
      75,    31,    33,     3,    72,    33,    33,    33,    33,    33,
      33,     3,    59,    33,    33,     3,    28,    72,    59,    34,
      48,    29,    29,    12,    26,    11,    10,     8,     9,     3,
      59,    32,    70,    33,    62,    63,     3,    61,     3,    19,
      59,    59,     3,    52,    58,    29,     3,     3,    60,    33,
      33,    32,    64,    68,    65,    66,    67,    68,    59,    73,
      32,    69,    32,    26,    32,    32,    32,    32,    32,    29,
      26,    32,    32,    32,    71,     3,    60,    36,    32,    73,
      63,    29,    29,    29,    49,    53,    59,    63,    73,    32,
      32,    73,    32,    22,    29,    32,    32,    49,    52,    49,
      32,    49,     1,    35,     3,     8,    13,    14,    17,    18,
      20,    28,    30,    33,    60,    62,    63,    64,    65,    66,
      67,    68,    72,    75,     3,     8,    13,    14,    17,    18,
      20,    28,    30,    33,    60,    64,    65,    66,    67,    68,
      72,    75,    13,    14,     3,     8,    13,    14,    17,    18,
      20,    28,    30,    33,    60,    72,    75,    29,     3,     8,
      13,    14,    17,    18,    20,    28,    30,    33,    60,    62,
      63,    64,    65,    66,    67,    68,    72,    75,    12,    26,
       1,    15,    16,    21,    24,    25,    27,    35,    41,    46,
      50,    51,    54,    55,    56,    57,    58,    59,    74,    12,
       3,    58,    34,    47,    33,     3,    72,    33,    33,    33,
       3,    28,    72,    59,    11,    10,     8,     9,    33,     3,
      72,    33,    33,    33,     3,    28,    72,    59,    11,    10,
       8,     9,    33,    33,    33,     3,    72,    33,    33,    33,
       3,    28,    72,    59,    33,     3,    72,    33,    33,    33,
       3,    28,    72,    59,    12,    26,    11,    10,     8,     9,
      64,     3,     8,    13,    14,    17,    18,    20,    28,    30,
      33,    60,    68,    72,    75,    33,    33,    33,    33,    59,
      33,    34,    47,    29,    29,     3,    64,    31,    48,    32,
      70,    33,    62,    61,     3,    60,    33,    33,    32,    65,
      66,    67,    68,    32,    70,    33,    62,    61,     3,    60,
      33,    33,    32,    65,    66,    67,    68,    62,    61,    32,
      70,    33,    62,    61,     3,    60,    33,    33,    32,    32,
      70,    33,    62,    61,     3,    60,    33,    33,    32,    64,
       3,     8,    13,    14,    17,    18,    20,    28,    30,    33,
      60,    68,    72,    75,    65,    66,    67,    68,    33,     3,
      72,    33,    33,    33,     3,    28,    72,    59,     3,    19,
      59,    59,    52,    29,     3,    48,    29,    59,    34,    73,
      32,    69,    32,    32,    32,    32,    32,    71,     3,    60,
      73,    32,    69,    32,    32,    32,    32,    32,    71,     3,
      60,    32,    32,    73,    32,    69,    32,    32,    32,    32,
      32,    71,     3,    60,    73,    32,    69,    32,    32,    32,
      32,    32,    71,     3,    60,    33,     3,    72,    33,    33,
      33,     3,    28,    72,    59,    32,    70,    33,    62,    61,
       3,    60,    33,    33,    32,    32,    32,    32,    32,    29,
      26,    34,    32,    73,    73,    32,    32,    32,    73,    73,
      32,    32,    32,    73,    73,    32,    32,    32,    73,    73,
      32,    32,    32,    70,    33,    62,    61,     3,    60,    33,
      33,    32,    73,    32,    69,    32,    32,    32,    32,    32,
      71,     3,    60,    29,    29,    29,    49,    53,    63,    32,
      32,    32,    32,    32,    32,    32,    32,    73,    32,    69,
      32,    32,    32,    32,    32,    71,     3,    60,    32,    73,
      73,    32,    32,    22,    29,    32,    32,    73,    73,    32,
      32,    32,    32,    49,    52,    49,    32,    32,    32,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    43,
      42,    44,    42,    45,    45,    47,    46,    46,    46,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    50,    51,    52,    52,    53,    53,    54,    54,
      55,    56,    57,    58,    59,    60,    60,    61,    62,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    68,    69,    68,    70,    68,    68,    71,
      68,    68,    68,    68,    68,    68,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       7,     0,     6,     4,     2,     0,     4,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       5,     5,     5,     9,     1,     0,     1,     0,     5,     7,
       3,     7,     2,     3,     1,     4,     4,     3,     3,     3,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     2,     2,     4,     0,     6,     0,     5,     3,     0,
       6,     4,     4,     4,     5,     5,     1,     1,     3,     1,
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
#line 108 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2653 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 116 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2664 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 122 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2672 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 127 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2680 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 130 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2688 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 133 "sintatico.y"
          {}
#line 2694 "sintatico.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 136 "sintatico.y"
              {
    int check = checkDuplicado((yyvsp[-1].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Redeclaration of variable", (yyvsp[-1].lexema).corpo);
      errosSemanticos++;
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

    if(!check) {
      snprintf(codigoTac, 110, "%s %s_%d", lowerCase(s.tipo), s.corpo, s.escopo);
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
    (yyval.nodo)->tac = criarTac(NULL, NULL, NULL, NULL, -1);
    (yyval.nodo)->tac->tabela = 1;
    (yyval.nodo)->tac->instrucao = strdup(codigoTac);
  }
#line 2728 "sintatico.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 167 "sintatico.y"
              {
    int check = checkDuplicado((yyvsp[-1].lexema).corpo, 0, indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Redeclaration of function", (yyvsp[-1].lexema).corpo);
      errosSemanticos++;
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
#line 2759 "sintatico.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' $@1 params_list ')' brackets_stmt  */
#line 192 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, (yyvsp[-5].lexema).corpo, 2);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2772 "sintatico.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 200 "sintatico.y"
                { 
    int check = checkDuplicado((yyvsp[-1].lexema).corpo, 0, indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Redeclaration of function", (yyvsp[-1].lexema).corpo);
      errosSemanticos++;
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
#line 2799 "sintatico.tab.c"
    break;

  case 12: /* function_declaration: type ID '(' $@2 ')' brackets_stmt  */
#line 221 "sintatico.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2811 "sintatico.tab.c"
    break;

  case 13: /* params_list: type ID ',' params_list  */
#line 230 "sintatico.y"
                         {
    int check = checkDuplicado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Redeclaration of variable", (yyvsp[-2].lexema).corpo);
      errosSemanticos++;
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
#line 2846 "sintatico.tab.c"
    break;

  case 14: /* params_list: type ID  */
#line 260 "sintatico.y"
           {
    int check = checkDuplicado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Redeclaration of variable", (yyvsp[0].lexema).corpo);
      errosSemanticos++;
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
#line 2880 "sintatico.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 291 "sintatico.y"
      {
    if(ehFuncao) {
      ehFuncao = 0;
    } else {
      indiceEscopo++; 
      escopo++; 
      listaEscopo[indiceEscopo] = escopo; 
    }
  }
#line 2894 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 299 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2903 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: '{' '}'  */
#line 303 "sintatico.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_brackets");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "empty", 4);
  }
#line 2913 "sintatico.tab.c"
    break;

  case 18: /* brackets_stmt: error  */
#line 308 "sintatico.y"
          {}
#line 2919 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt stmts  */
#line 311 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2930 "sintatico.tab.c"
    break;

  case 20: /* stmts: stmt  */
#line 317 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2938 "sintatico.tab.c"
    break;

  case 21: /* stmt: for_stmt  */
#line 322 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2946 "sintatico.tab.c"
    break;

  case 22: /* stmt: if_else_stmt  */
#line 325 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2954 "sintatico.tab.c"
    break;

  case 23: /* stmt: return_stmt  */
#line 328 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2962 "sintatico.tab.c"
    break;

  case 24: /* stmt: io_stmt  */
#line 331 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2970 "sintatico.tab.c"
    break;

  case 25: /* stmt: exp_stmt  */
#line 334 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2978 "sintatico.tab.c"
    break;

  case 26: /* stmt: set_stmt  */
#line 337 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2986 "sintatico.tab.c"
    break;

  case 27: /* stmt: var_declaration  */
#line 340 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2994 "sintatico.tab.c"
    break;

  case 28: /* stmt: assignment ';'  */
#line 343 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3002 "sintatico.tab.c"
    break;

  case 29: /* stmt: brackets_stmt  */
#line 346 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3010 "sintatico.tab.c"
    break;

  case 30: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 351 "sintatico.y"
                       {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3030 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 366 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 3040 "sintatico.tab.c"
    break;

  case 32: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 371 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 3050 "sintatico.tab.c"
    break;

  case 33: /* for_stmt: FOR '(' assignment_or_null ';' exp_or_null ';' assignment_or_null ')' stmt  */
#line 378 "sintatico.y"
                                                                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3063 "sintatico.tab.c"
    break;

  case 34: /* assignment_or_null: assignment  */
#line 388 "sintatico.y"
             { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3069 "sintatico.tab.c"
    break;

  case 35: /* assignment_or_null: %empty  */
#line 389 "sintatico.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore(1, 1, "empty", 4);
  }
#line 3079 "sintatico.tab.c"
    break;

  case 36: /* exp_or_null: exp  */
#line 396 "sintatico.y"
      { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3085 "sintatico.tab.c"
    break;

  case 37: /* exp_or_null: %empty  */
#line 397 "sintatico.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore(1, 1, "empty", 4);
  }
#line 3095 "sintatico.tab.c"
    break;

  case 38: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 404 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3106 "sintatico.tab.c"
    break;

  case 39: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 410 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3118 "sintatico.tab.c"
    break;

  case 40: /* return_stmt: RETURN exp ';'  */
#line 419 "sintatico.y"
                 {
    (yyval.nodo) = retornaNodo();
    int check = checkTipoRetorno(indiceTabela);
    if(!(~check)) {

    } else {
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
      forcaCast((yyval.nodo)->tipo, (yyvsp[-1].nodo), &errosSemanticos, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna);
    }


    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3137 "sintatico.tab.c"
    break;

  case 41: /* set_stmt: FORALL '(' ID INFIX_OP or_exp ')' stmt  */
#line 435 "sintatico.y"
                                         {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared variable", (yyvsp[-4].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    strcpy((yyval.nodo)->val, "forall_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->proximo = (yyvsp[-2].nodo);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3159 "sintatico.tab.c"
    break;

  case 42: /* exp_stmt: exp ';'  */
#line 454 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3169 "sintatico.tab.c"
    break;

  case 43: /* assignment: ID '=' exp  */
#line 461 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
      forcaCast((yyval.nodo)->tipo, (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    }

    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3191 "sintatico.tab.c"
    break;

  case 44: /* exp: or_exp  */
#line 480 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3199 "sintatico.tab.c"
    break;

  case 45: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 485 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3211 "sintatico.tab.c"
    break;

  case 46: /* set_exp: SET_OP2 '(' set_aux_exp ')'  */
#line 492 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("ELEM");

  }
#line 3224 "sintatico.tab.c"
    break;

  case 47: /* set_aux_exp: ID INFIX_OP or_exp  */
#line 502 "sintatico.y"
                     {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup("INT");
    }

    strcpy((yyval.nodo)->val, "set_aux_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3245 "sintatico.tab.c"
    break;

  case 48: /* set_in_exp: or_exp INFIX_OP unary_exp  */
#line 520 "sintatico.y"
                            {
    (yyval.nodo) = retornaNodo();
    
    if(!checkSet((yyvsp[0].nodo)->tipo)) {
      printf("%-15s %d:%-3d - %s\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "'in' right operator only supports the type SET");
      errosSemanticos++;
    }
    (yyval.nodo)->tipo = strdup("INT");

    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3263 "sintatico.tab.c"
    break;

  case 49: /* or_exp: or_exp OR and_exp  */
#line 535 "sintatico.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if((yyvsp[-2].nodo)->tipo){
      (yyval.nodo)->tipo = strdup("INT");
      (yyval.nodo)->tac = criarTac("or", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
    } 
  }
#line 3280 "sintatico.tab.c"
    break;

  case 50: /* or_exp: and_exp  */
#line 547 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3288 "sintatico.tab.c"
    break;

  case 51: /* or_exp: set_in_exp  */
#line 550 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3296 "sintatico.tab.c"
    break;

  case 52: /* and_exp: and_exp AND relational_exp  */
#line 555 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup("INT");
  }
#line 3310 "sintatico.tab.c"
    break;

  case 53: /* and_exp: relational_exp  */
#line 564 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3318 "sintatico.tab.c"
    break;

  case 54: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 569 "sintatico.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if(checkSet((yyvsp[-2].nodo)->tipo) || checkSet((yyvsp[0].nodo)->tipo)) {
        printf("%-15s %d:%-3d - '%s' %s\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, "operator do not supports the type SET");
        errosSemanticos++;
    }
    else{
      fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
      if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup("INT");
    }
  }
#line 3339 "sintatico.tab.c"
    break;

  case 55: /* relational_exp: sum_exp  */
#line 585 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3347 "sintatico.tab.c"
    break;

  case 56: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 590 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if(checkSet((yyvsp[-2].nodo)->tipo) || checkSet((yyvsp[0].nodo)->tipo)) {
        printf("%-15s %d:%-3d - '%s' %s\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, "operator do not supports the type SET");
        errosSemanticos++;
    }
    else{
      fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
      if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
    }

  }
#line 3369 "sintatico.tab.c"
    break;

  case 57: /* sum_exp: mul_exp  */
#line 607 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3377 "sintatico.tab.c"
    break;

  case 58: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 612 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if(checkSet((yyvsp[-2].nodo)->tipo) || checkSet((yyvsp[0].nodo)->tipo)) {
        printf("%-15s %d:%-3d - '%s' %s\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, "operator do not supports the type SET");
        errosSemanticos++;
    } 
    else {
      fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
      if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
    }

  }
#line 3399 "sintatico.tab.c"
    break;

  case 59: /* mul_exp: unary_exp  */
#line 629 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3407 "sintatico.tab.c"
    break;

  case 60: /* unary_exp: primal_exp  */
#line 634 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3415 "sintatico.tab.c"
    break;

  case 61: /* unary_exp: '!' primal_exp  */
#line 637 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3426 "sintatico.tab.c"
    break;

  case 62: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 643 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3437 "sintatico.tab.c"
    break;

  case 63: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 649 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3462 "sintatico.tab.c"
    break;

  case 64: /* $@4: %empty  */
#line 669 "sintatico.y"
                         {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

  }
#line 3474 "sintatico.tab.c"
    break;

  case 65: /* unary_exp: ARITMETIC_OP1 ID '(' $@4 arg_list ')'  */
#line 675 "sintatico.y"
                 {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared function", (yyvsp[-4].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    
    check = checkQuantidadeParametros((yyvsp[-4].lexema).corpo, (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }
    indiceArg = 0;

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3501 "sintatico.tab.c"
    break;

  case 66: /* $@5: %empty  */
#line 697 "sintatico.y"
           {
      indiceArg = 0;
      strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
      prevFuncao.linha = (yyvsp[-1].lexema).linha;
      prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

    }
#line 3513 "sintatico.tab.c"
    break;

  case 67: /* unary_exp: ID '(' $@5 arg_list ')'  */
#line 703 "sintatico.y"
                   {
      (yyval.nodo) = retornaNodo();
      int check = checkDeclarado((yyvsp[-4].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
      if(!(~check)){
        printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared function", (yyvsp[-4].lexema).corpo);
        errosSemanticos++;
      }
      else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
      }

      check = checkQuantidadeParametros((yyvsp[-4].lexema).corpo, (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
      if(!check){
        errosSemanticos++;
      }
      indiceArg = 0;

      strcpy((yyval.nodo)->val, "unary_exp");
      (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
      (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3539 "sintatico.tab.c"
    break;

  case 68: /* unary_exp: ID '(' ')'  */
#line 724 "sintatico.y"
               {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3565 "sintatico.tab.c"
    break;

  case 69: /* $@6: %empty  */
#line 745 "sintatico.y"
               {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;
  }
#line 3576 "sintatico.tab.c"
    break;

  case 70: /* unary_exp: '!' ID '(' $@6 arg_list ')'  */
#line 750 "sintatico.y"
                 {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared function", (yyvsp[-4].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    
    check = checkQuantidadeParametros((yyvsp[-5].lexema).corpo, (yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }
    indiceArg = 0;

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3603 "sintatico.tab.c"
    break;

  case 71: /* unary_exp: '!' ID '(' ')'  */
#line 772 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3629 "sintatico.tab.c"
    break;

  case 72: /* unary_exp: ISSET '(' ID ')'  */
#line 793 "sintatico.y"
                     {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-1].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared variable", (yyvsp[-1].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup("INT");
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 3649 "sintatico.tab.c"
    break;

  case 73: /* unary_exp: ISSET '(' set_exp ')'  */
#line 808 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3660 "sintatico.tab.c"
    break;

  case 74: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 814 "sintatico.y"
                          {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-1].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared variable", (yyvsp[-1].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup("INT");
    }

    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 3680 "sintatico.tab.c"
    break;

  case 75: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 829 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3691 "sintatico.tab.c"
    break;

  case 76: /* primal_exp: ID  */
#line 839 "sintatico.y"
     {
    (yyval.nodo) = retornaNodo();

    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      errosSemanticos++;

    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
      (yyval.nodo)->tac = criarTac(NULL, NULL, NULL, variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), -1);
    }
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);

  }
#line 3713 "sintatico.tab.c"
    break;

  case 77: /* primal_exp: const  */
#line 856 "sintatico.y"
          {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3721 "sintatico.tab.c"
    break;

  case 78: /* primal_exp: '(' exp ')'  */
#line 859 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3729 "sintatico.tab.c"
    break;

  case 79: /* primal_exp: set_exp  */
#line 862 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3737 "sintatico.tab.c"
    break;

  case 80: /* arg_list: exp ',' arg_list  */
#line 867 "sintatico.y"
                   {
    indiceArg++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    char tipoParametro[10];
    strcpy(tipoParametro, checkTipoParametros(prevFuncao, (yyvsp[-2].nodo)->tipo,indiceTabela, listaEscopo, indiceEscopo, indiceArg-1));

    if(!checkErro(tipoParametro)) {
      forcaCast(tipoParametro, (yyvsp[-2].nodo), &errosSemanticos, prevFuncao.linha, prevFuncao.coluna);
    }

  }
#line 3758 "sintatico.tab.c"
    break;

  case 81: /* arg_list: exp  */
#line 883 "sintatico.y"
        {
    indiceArg++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);

    char tipoParametro[10];
    strcpy(tipoParametro, checkTipoParametros(prevFuncao, (yyvsp[0].nodo)->tipo,indiceTabela, listaEscopo, indiceEscopo, indiceArg-1));

    if(!checkErro(tipoParametro)) {
      forcaCast(tipoParametro, (yyvsp[0].nodo), &errosSemanticos, prevFuncao.linha, prevFuncao.coluna);
    }

    
  }
#line 3779 "sintatico.tab.c"
    break;

  case 82: /* type: INT_TYPE  */
#line 901 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3791 "sintatico.tab.c"
    break;

  case 83: /* type: FLOAT_TYPE  */
#line 908 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3803 "sintatico.tab.c"
    break;

  case 84: /* type: SET_TYPE  */
#line 915 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3815 "sintatico.tab.c"
    break;

  case 85: /* type: ELEM_TYPE  */
#line 922 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3827 "sintatico.tab.c"
    break;

  case 86: /* const: INTEGER  */
#line 931 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3838 "sintatico.tab.c"
    break;

  case 87: /* const: FLOAT  */
#line 937 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("FLOAT");
  }
#line 3849 "sintatico.tab.c"
    break;

  case 88: /* const: EMPTY  */
#line 943 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3860 "sintatico.tab.c"
    break;


#line 3864 "sintatico.tab.c"

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

#line 950 "sintatico.y"


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
      errosSemanticos++;
    }

    if (erros == 0) {
      printArvore(raiz, 0);
    }

    printTabela(indiceTabela);

    erros = erros + errosSemanticos;

    if (erros >= 1) {
      if(erros == 1) {
      printf("\n\n--> Paser finalizado com %d erro\n", erros);
      }
      else {
        printf("\n\n--> Paser finalizado com %d erros\n", erros);  
      }
    }
    else {
      escreveTac(raiz);
    }

    freeArvore(raiz);

    fclose(yyin);
    yylex_destroy();
    return 0;
}

