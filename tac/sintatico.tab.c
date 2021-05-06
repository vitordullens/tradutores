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

  int stringIdx = 0;
  char codigoTac[1100];

  int ifIdx = 0;

#line 113 "sintatico.tab.c"

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
#define YYLAST   5032

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  609

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
       0,   111,   111,   119,   125,   130,   133,   136,   139,   172,
     172,   209,   209,   245,   275,   306,   306,   318,   325,   331,
     334,   335,   338,   341,   344,   347,   350,   353,   356,   359,
     362,   367,   384,   417,   427,   437,   438,   445,   446,   453,
     466,   499,   533,   552,   559,   592,   597,   604,   614,   632,
     647,   680,   683,   688,   722,   727,   802,   807,   850,   855,
     898,   903,   906,   914,   924,   944,   944,   972,   972,   999,
    1020,  1020,  1047,  1068,  1083,  1089,  1104,  1114,  1131,  1134,
    1137,  1142,  1158,  1176,  1183,  1190,  1197,  1206,  1214,  1222
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

#define YYPACT_NINF (-316)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1202,  2200,    28,    34,    50,    61,    70,  2332,  2487,  4968,
    4977,    93,  -316,  4985,    97,  4993,    15,   479,    67,    69,
      99,    76,    76,     8,  3204,  5001,  5009,   479,  5017,  1539,
     105,  3239,   798,    92,   110,   129,   130,   134,  1933,  2340,
    2413,   135,   142,  2365,   146,   150,   114,  2400,  3274,  3309,
     153,  3344,  3379,  3414,  3449,  3484,  3519,  3554,   161,   165,
    4560,   293,   355,   107,  1440,  2138,  4571,  4582,  4593,   195,
    4604,   166,  2365,   141,  1089,  4615,  2529,   217,   220,   420,
    2400,    21,  1797,   198,   232,    52,  1904,   213,  4626,   221,
    5025,   218,  3589,  3624,  2365,  4067,  2365,  2365,  2365,  2365,
     226,   228,  4637,  4085,   231,   470,    60,   247,   245,   252,
     262,   265,   267,   271,   280,   283,  3659,   291,   292,   297,
     534,   204,  4648,   806,   390,  1590,  2164,  4659,  4670,   124,
     302,  4681,  4085,  4692,  2400,  4703,   316,   317,   318,  1835,
     602,  2400,  4714,  4725,  4736,  4085,   323,   327,  4085,  4747,
     341,   559,  3694,  3729,  3764,   336,   339,   345,   614,   351,
    4758,  4769,   353,  4780,  2442,    11,  2442,  4791,  3799,   364,
    3834,  2442,  3869,  3904,  1995,   362,   361,   370,  2234,  2378,
    4343,   372,   175,  2400,  4351,   645,   764,   103,   170,    81,
    4362,  4370,  4381,  4389,   433,   566,   382,   384,  2472,  2590,
    2679,   391,   196,  2400,  2760,   275,  2013,  1301,  2767,  4802,
    4813,  4821,   394,   403,   112,   870,   416,   419,   463,   588,
     765,   423,   290,  2400,   833,   908,   999,  3939,  1330,   929,
     424,   425,   517,   752,   844,   427,   684,  2400,  1637,   601,
     616,    37,   140,   399,  1873,  1939,  2065,  2147,  2529,  4103,
     428,   430,   435,   454,  2365,   460,  3974,  1412,  2037,  2280,
    2496,  2562,  2607,  2650,  2696,   482,   483,   505,  2400,   499,
     481,  4009,  1539,   636,  4324,  4400,  2529,   217,   521,  4332,
     500,  4408,   506,  2400,  2400,  2400,  2400,   675,   838,  4826,
    2529,   217,   715,  1448,   507,  4832,   523,  2529,  2529,  2529,
    2529,  2529,   217,   739,   263,  1051,  2529,   217,   767,   360,
     527,  1090,   524,   808,  1625,  2241,  2529,   217,   800,  1738,
     528,  2308,   531,  4085,  4121,  4085,  4085,  4085,  4085,   674,
       6,   941,   535,   539,   849,   938,   951,   548,   896,  2400,
    1020,  1025,  1043,  1112,   529,   977,  2400,    21,   558,   598,
    2731,  1539,  2784,  2819,   580,   533,  2400,   584,  4419,  4085,
    1053,  1161,   589,   593,   604,  1076,   888,  4427,   304,   230,
    4438,  4446,  4845,  4085,  1128,  1166,   606,   609,   613,  1149,
    1280,  4851,  2097,  2077,  4856,  4864,  1184,   623,  1323,  4085,
    1210,  1292,   630,   631,   635,  1242,  1392,  1487,  4134,  4085,
    1371,  1293,   647,   648,   650,  1459,  1480,  4147,    72,   189,
    1171,   663,   676,   658,   707,   712,   677,  1003,  2400,   909,
     986,  1032,  1111,   259,  1225,  4166,  4177,  1492,   200,  1294,
    2529,   217,  1780,   365,   678,  1341,   683,   690,   695,   698,
     708,   605,  2854,   709,   682,  2889,   719,  4044,   723,  4457,
    4085,  4465,  4476,  4484,  4495,  4503,  4085,   726,   733,   736,
    4875,  4085,  4883,  4888,  4894,  4907,  4913,  4085,   754,   755,
     757,   763,   772,  1558,  4085,  1580,  1614,  1638,  1642,  1705,
    4085,   780,   783,   787,  4185,  4085,  4196,  4215,  4226,  4234,
    4245,  4085,   788,   807,  1671,   299,  1123,  2529,   217,  1822,
     570,   790,  1193,   819,  1409,  4085,  1759,  1670,   825,   831,
     834,  1964,  1858,  1686,   801,   839,   850,  1835,   602,  2400,
    2924,  4514,   857,   863,  4522,  4533,  4918,   864,   868,  4926,
    4937,  1788,   872,   875,  1898,  1926,  4264,   876,   879,  4275,
    4283,  1237,  4085,  2112,  1693,   880,   883,   887,  2195,  1960,
    1255,   890,  1701,  4085,  1726,  1749,  1754,  1756,  1787,  4085,
     895,   898,  2959,  2994,  3029,  3064,   853,  1789,  4541,  4552,
    4945,  4950,  1987,  1989,  4294,  4313,   901,  1266,  4085,  1322,
    1366,  1472,  1495,  1549,  4085,   906,   921,  1832,   924,   928,
    1862,  1864,  1835,    11,  1835,  1582,   933,   936,  1595,  1654,
    1866,  1875,  3099,   940,  3134,  1784,  1786,  1835,  3169
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -316,  -316,  -316,   966,     1,  -316,  -316,  -316,   949,   -19,
    -168,   -25,  -130,  -127,  -116,  -161,   410,  -104,   -97,   -88,
     -87,   -71,   694,   -18,  -220,  2055,  2189,  1846,  1663,  1439,
    1314,  1031,  -315,  -257,  -305,   375,   791,     0,   703
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,    48,    10,    17,    18,    19,    49,
      29,    50,    51,    52,    53,   114,   156,    54,    55,    56,
      57,    58,   129,   238,   108,   239,   240,   241,   242,   243,
     244,   245,   132,   103,   145,   246,   130,    69,   247
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,     9,    25,    26,   169,   272,    71,    11,     9,   155,
     115,    60,   259,    60,   269,    60,   359,    20,   -77,    -9,
      -9,    -9,    -9,   260,   113,    60,    91,    20,    60,   184,
     373,   -84,   -77,    60,   168,   261,   170,   -83,   -77,   427,
     -14,   172,   262,   -36,    27,   450,   389,   -11,   325,   -51,
     -36,   263,   264,   -85,    60,   118,   399,   362,   204,   461,
     456,   184,   184,   -51,   -86,   212,   213,   119,   265,   -51,
      12,   376,   248,   -51,   467,   474,    60,   224,    60,    60,
      60,    60,   387,   325,   -50,   485,   249,   392,   351,   285,
     480,   -56,   -56,   -56,   270,    74,    14,   402,   -50,    21,
     491,    22,    23,   147,   -50,    34,    35,   -56,   -50,    38,
      39,    24,    40,   -56,   283,   -51,   184,    86,    96,   -51,
     258,    60,    60,   184,   -77,    47,    15,    34,    35,   -51,
      16,    38,    39,   -51,    40,   -51,   -51,   -13,   -77,   267,
     257,   -77,    87,    76,   -67,   303,    60,    47,    60,   -67,
     326,   -54,   -54,    60,   -67,   -67,   -82,   184,   -67,   -67,
     148,   -67,    77,    78,   184,   184,   -54,    79,    80,   -67,
     505,   -67,   -54,   102,   -67,    81,   -54,   204,   279,    84,
     284,   -54,   -54,    85,   204,   184,   441,    90,   176,   177,
      92,   553,   178,   179,    93,   180,   -54,   224,   100,   293,
     -20,   -77,   -54,   280,   224,   184,   559,   146,   183,   196,
     197,   508,   -77,   198,   199,   -77,   200,   212,   213,   184,
     107,   -77,   494,   109,   294,   -77,   -77,   116,   578,   203,
     204,   340,   -77,   506,   -65,   117,    60,   542,   285,   -65,
     -55,   -55,   -55,   584,   -65,   -65,   121,   357,   -65,   -65,
     184,   -65,   -18,   122,    60,   227,   -55,   -44,   204,   -65,
     364,   -65,   -55,   131,   -65,   184,   184,   184,   184,   326,
     -53,   -53,   204,   134,   378,   -77,   115,   135,   545,   204,
     204,   204,   204,   204,   136,   -53,   297,   -51,   204,   -77,
     394,   -53,   -77,   309,   137,   -53,   390,   138,   204,   139,
     404,   -51,    72,   216,   217,   -52,   419,   218,   219,   140,
     220,   -77,   -35,   340,   284,   -53,   -53,   141,   310,   -52,
     340,   184,   -52,   223,   142,   -77,   444,   184,   184,   143,
     -53,   -77,   543,    60,   149,   -77,   -53,   -39,   184,   -39,
     -39,   -39,   -39,   -39,   -39,   152,   153,   154,   458,   -39,
     -39,   -39,   -39,   -39,   -39,   160,   -39,   -39,   164,   161,
     -39,   -39,   469,   -39,   -39,   274,   -39,    94,   165,   -39,
     -39,   -39,   -77,   163,   -37,   176,   177,   -77,   482,   178,
     179,    95,   180,   167,   -45,   -81,   -77,   565,   493,   -77,
     259,   -77,   419,   395,   276,   183,   171,   -77,   511,   419,
     184,   260,   -49,   277,    68,   278,    68,   327,    75,   -56,
     -56,   -56,   204,   261,   510,   290,   -49,   291,    68,   -49,
     262,    88,   192,   174,   292,   -56,    68,   301,   175,   263,
     264,   -56,   603,   176,   177,   -56,   302,   178,   179,   110,
     180,   -77,   -77,   -77,   -77,   -77,   265,    68,   181,   306,
     182,   210,   307,   183,   192,   192,   308,   316,   317,   -77,
     318,   344,   602,   345,   604,   259,   287,   259,   346,    68,
     225,    68,    68,    68,    68,   -87,   260,   608,   260,   204,
     259,   547,   -52,     2,     3,     4,     5,   347,   261,   -87,
     261,   260,   -87,   349,   561,   262,   -52,   262,   258,    60,
      60,   184,   133,   261,   263,   264,   263,   264,   354,   192,
     262,   352,   353,   -35,    68,    68,   192,   267,   257,   263,
     264,   265,   270,   265,   363,   -87,   -87,   -87,   -87,   -87,
     356,   586,   437,   366,   212,   213,   265,   -70,   367,    68,
     380,    68,   -70,   -87,   283,   -50,    68,   -70,   -70,   -87,
     275,   -70,   -70,   -87,   -70,   381,   397,   281,   192,   -50,
     396,   406,   -70,   407,   -70,   -50,   144,   -70,   430,   288,
     289,   268,   431,   258,    60,   258,    60,   295,   192,   196,
     197,   432,   -77,   198,   199,   249,   200,   442,   258,    60,
     305,   -48,   267,   257,   267,   257,   -77,   311,   192,   203,
     -88,   443,   -77,   548,   315,    82,   -77,   267,   257,   445,
      33,   321,   192,   -52,   -88,    34,    35,   -88,   447,    38,
      39,   452,    40,   210,   342,   453,   268,   -52,   323,    68,
      45,   -38,    46,   -52,   518,    47,   454,   -52,   463,   -67,
     249,   464,   324,   192,   -67,   465,   166,    68,   -45,   -67,
     -67,   210,   -45,   -67,   -67,   471,   -67,   -52,   192,   192,
     192,   192,   476,   477,   -67,   210,   -67,   478,   358,   -67,
     -87,   -52,   210,   210,   210,   210,   210,   -52,   -67,   487,
     488,   210,   489,   -67,   -87,   297,   -50,   319,   -67,   -67,
     -87,   210,   -67,   -67,   -87,   -67,   497,   230,   231,   421,
     -50,   232,   233,   -67,   234,   -67,   429,   372,   -67,   498,
     499,   512,   320,   435,   192,   513,   520,   237,   377,   -88,
     192,   192,   514,    59,   -89,    59,    68,   515,   212,   213,
     516,   192,    70,   -88,    70,   519,    70,    83,   -89,   -88,
     517,    89,   -67,   -88,   -89,    59,    70,   -67,   -89,    70,
     193,   -44,   -67,   -67,    70,   521,   -67,   -67,   524,   -67,
     -88,   -88,   -88,   -88,   -88,   525,   101,   -67,   526,   -67,
     393,   388,   -67,   111,   112,    70,   268,   -89,   -88,   211,
     212,   213,   193,   193,   -88,   496,   529,   530,   -88,   -46,
     249,   -89,   502,   192,   -89,   -47,   -45,    70,   226,    70,
      70,    70,    70,   403,   531,   210,   -77,   -77,   -77,   -77,
     -77,   -67,   534,   212,   213,   535,   -67,    96,   -50,   536,
     539,   -67,   -67,   549,   -77,   -67,   -67,   -77,   -67,    72,
     562,    73,   -50,   266,   157,   -50,   -67,   193,   -67,   540,
     398,   -67,    70,    70,   193,   -80,   -77,   -77,   -77,   -77,
     -77,   550,   -89,   -89,   -89,   -89,   -89,   555,    59,   -80,
      59,   -87,   -80,   556,   -77,    59,   557,    70,   563,    70,
     -89,   374,   210,   304,    70,   -87,   -89,   282,   193,   564,
     -89,   -87,   593,   216,   217,   193,   193,   218,   219,   568,
     220,   457,    68,    68,   192,   569,   570,   296,   211,   433,
     571,   212,   213,   223,   572,   211,   193,   573,   574,   332,
     333,   575,   580,   334,   335,   581,   336,   312,   226,   582,
     -61,   -80,   587,   150,   434,   226,   193,   590,   566,   339,
     591,   322,   314,   595,   -61,   -80,   159,   -61,   598,   162,
     193,   -80,   230,   231,   428,   -80,   232,   233,   348,   234,
     -88,   211,   343,   599,   332,   333,   600,    70,   334,   335,
     601,   336,   237,   -89,   -88,   605,    59,    68,   606,    68,
     -88,   193,   607,    13,   339,    70,    30,   -89,     0,   211,
     174,     0,    68,   -89,     0,   175,   193,   193,   193,   193,
     176,   177,     0,   211,   178,   179,   438,   180,   -49,     0,
     211,   211,   211,   211,   211,   181,   500,   182,     0,   211,
     183,   -78,   -49,     0,     0,     0,   411,   412,   -49,   211,
     413,   414,   -49,   415,     0,   -78,     0,   422,   -78,     0,
       0,   501,   -80,   436,   343,     0,   418,   -49,     0,   439,
     440,   343,   193,     0,   -61,    59,   -80,     0,   193,   193,
     446,   -49,   -80,     0,    70,   -61,   -65,   -49,   -61,   193,
      67,   -65,    67,   -63,   -61,     0,   -65,   -65,   -61,   -61,
     -65,   -65,     0,   -65,    67,   -61,     0,   -63,   191,   -70,
     -63,   -65,    67,   -65,   -70,   449,   -65,     0,     0,   -70,
     -70,     0,     0,   -70,   -70,     0,   -70,   -77,   -77,   -77,
     -77,   -77,   -62,    67,   -70,     0,   -70,   209,   455,   -70,
     191,   191,   503,   422,     0,   -77,   -62,     0,   -77,   -62,
     422,   193,   104,   -78,   -78,    67,   124,    67,    67,    67,
     128,   -65,     0,   211,     0,   -63,   -65,   -78,   -78,     0,
       0,   -65,   -65,   -78,   -78,   -65,   -65,   -78,   -65,   -63,
     448,     0,   -70,     0,     0,   -63,   -65,   -70,   -65,   -63,
     460,   -65,   -70,   -70,   459,   191,   -70,   -70,     0,   -70,
      67,    67,   191,   -52,   495,     0,     0,   -70,   -52,   -70,
     472,   466,   -70,     0,   411,   412,     0,   -52,   413,   414,
     483,   415,   -52,   451,     0,    67,   -52,    67,   462,     0,
     211,     0,    67,     1,   418,   -62,     2,     3,     4,     5,
     -52,   266,   157,   -65,   191,     0,   470,     0,   -65,   -62,
      70,    70,   193,   -65,   -65,   -62,     0,   -65,   -65,   -62,
     -65,     0,     0,   327,   191,   -55,   -55,   -55,   -65,     0,
     -65,   522,   473,   -65,     0,   -70,     0,   523,     0,   -69,
     -70,   -55,   527,     0,   191,   -70,   -70,   -55,   528,   -70,
     -70,   -55,   -70,   -69,     0,   532,     0,   -79,   191,   -69,
     -70,   533,   -70,   -69,   479,   -70,   537,     0,   -64,   209,
     341,   -79,   538,   468,     0,    67,   266,   -79,   266,     0,
       0,   -79,   -64,   212,   213,    70,   551,    70,   -64,   191,
       0,   266,   -64,    67,   -52,   -52,   -63,   209,     0,   299,
      70,   -56,   -56,   -56,   191,   191,   191,   371,   -52,   -52,
     -63,   209,     0,     0,   475,   486,   -63,   -56,   209,   209,
     209,   385,   209,   576,   -46,   -69,     0,   209,   -77,   -77,
     -77,   -77,   -77,    66,   588,    66,     0,   209,   -46,   -69,
     589,     0,   -69,   -62,   -46,   420,   -77,    66,   -46,   426,
       0,   190,   -77,   313,     0,    66,   -77,   -62,     0,   596,
     191,     0,     0,   -62,   -65,   597,   191,   191,   -47,   -65,
       0,     0,    67,     0,   -65,   -65,    66,   191,   -65,   -65,
     208,   -65,   -47,   190,   190,   481,     0,     0,   -47,   -65,
       0,   -65,   -47,   484,   -65,   212,   213,     0,    66,     0,
      66,    66,   127,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -69,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -69,   -28,   -28,     0,   -28,
     -28,   -69,   -28,     0,     0,   -28,   -28,   -28,   190,   191,
      97,   -54,   -54,    66,    66,   190,   -77,   -77,   -77,   -77,
     -77,   209,   -70,     0,     0,     0,   -54,   -70,    65,   -54,
      65,     0,   -70,   -70,   -77,     0,   -70,   -70,    66,   -70,
      66,   379,    65,   492,   -73,    66,   189,   -70,     0,   -70,
      65,   490,   -70,   212,   213,   -67,     0,   190,   -73,   -79,
     -67,     0,     0,     0,   -73,   -67,   -67,   -74,   -73,   -67,
     -67,    65,   -67,   -79,     0,   207,   -79,   190,   189,   189,
     -67,   -74,   -67,     0,   504,   -67,     0,   -74,   209,     0,
       0,   -74,     0,    65,     0,    65,   126,   190,     0,     0,
      31,     0,    32,     2,     3,     4,     5,    33,    67,    67,
     191,   190,    34,    35,    36,    37,    38,    39,     0,    40,
      41,   -72,   208,    42,    43,     0,    44,    45,    66,    46,
     -64,     0,    47,   189,   173,   -72,     0,     0,    65,    65,
     189,   -72,   190,     0,   -64,   -72,    66,   -64,     0,     0,
     208,     0,   -46,     0,   -68,     0,     0,   190,   190,   370,
      97,   -53,   -53,    65,   208,    65,   -46,   -75,   -68,   -46,
      65,   208,   208,   384,   -68,   208,   -53,     0,   -68,   -53,
     208,   -75,   189,    67,     0,    67,   -47,   -75,     0,     0,
     208,   -75,     0,   -77,   -77,   -77,   -77,   -77,    67,     0,
     -47,   425,   189,   -47,     0,   -80,   -80,   -80,   -80,   -80,
     -73,   -77,     0,   190,   -74,     0,     0,   -77,   400,   190,
     190,   -77,   189,   -80,   -73,    66,   -76,   -73,   -74,   -80,
     190,   -74,     0,   -80,   -67,     0,   189,     0,     0,   -67,
     -76,     0,   -52,     0,   -67,   -67,   -76,   207,   -67,   -67,
     -76,   -67,    64,    65,    64,     0,   -52,     0,   -79,   -67,
       0,   -67,   554,   541,   -67,   -52,    64,   189,     0,     0,
     188,    65,   -79,   -64,    64,   207,     0,   -72,   -79,   -52,
       0,     0,   189,   369,     0,   579,     0,   -64,     0,   207,
       0,   -72,   190,   -64,   -72,    64,   207,   383,   -46,   206,
     207,     0,   188,   188,   208,   207,   -77,   -77,   -77,   -77,
     -77,     0,   -46,     0,     0,   207,     0,    64,   -46,   125,
       0,   -47,   -65,     0,   -77,   424,   -73,   -65,   -74,     0,
     -77,   405,   -65,   -65,   -77,   -47,   -65,   -65,   189,   -65,
     -73,   -47,   -74,   509,   189,   189,   -73,   -65,   -74,   -65,
      65,   552,   -65,   212,   213,   189,   -66,   188,   -71,   -72,
     -68,   268,    64,    64,   188,   -77,   -77,   -77,   -77,   -77,
     -66,   208,   -71,   -72,   -68,   249,   -66,   -68,   -71,   -72,
     -66,   594,   -71,   -77,     0,   546,   -77,    64,     0,    64,
      73,    66,    66,   190,    64,   212,   213,     0,    32,     2,
       3,     4,     5,    33,   -68,     0,   188,     0,    34,    35,
     250,   251,    38,    39,     0,    40,   252,   189,   -68,   253,
     254,   560,   255,    45,   -68,    46,   188,     0,    47,   207,
     256,   212,   213,     0,   -75,    63,   -76,    63,   -66,     0,
       0,   -58,   328,   -58,   -58,   -58,   188,   -71,   -75,    63,
     -76,     0,   -66,   187,   -75,     0,   -76,    63,   -66,   -58,
     188,   -71,     0,     0,     0,   -58,    66,   -71,    66,   -58,
     -75,   206,   -77,   -77,   -77,   -77,   -77,    64,    63,     0,
       0,    66,   205,     0,   -75,   187,   187,   -75,     0,     0,
     -77,   188,     0,   -77,     0,    64,   207,   120,   -76,   206,
     123,   -87,   -87,   -87,   -87,   -87,   368,   -60,   -60,   -60,
     -60,   -60,   -76,   206,     0,   -76,    65,    65,   189,   -87,
     382,     0,   -87,   585,   206,   -60,     0,   -70,     0,   206,
       0,   -60,   -70,   212,   213,   -60,     0,   -70,   -70,   206,
     187,   -70,   -70,     0,   -70,    63,    63,   187,   423,     0,
       0,     0,   -70,     0,   -70,     0,   558,   -70,     0,   -66,
       0,   -71,   188,   -77,   -77,   -77,   -77,   -77,   188,   188,
      63,     0,    63,   -66,    64,   -71,   -66,    63,   -71,   188,
       0,   -77,     0,   298,   -54,   -54,     0,   -77,   273,   187,
       0,    65,     0,    65,     0,     0,     0,     0,   -30,   -54,
     -30,   -30,   -30,   -30,   -30,   -30,    65,     0,     0,   187,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
       0,   -30,   -30,     0,   -30,   -30,     0,   -30,     0,   187,
     -30,   -30,   -30,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,   188,     0,   187,    61,   299,    61,   -55,   -55,   -55,
       0,   -61,     0,   206,   329,     0,     0,   -61,    61,     0,
      63,   -61,   185,   -55,     0,     0,    61,   298,   -53,   -53,
       0,     0,     0,     0,   355,   -65,     0,     0,    63,     0,
     -65,     0,   205,   -53,     0,   -65,   -65,    61,     0,   -65,
     -65,   105,   -65,     0,   185,   185,   205,     0,     0,     0,
     -65,     0,   -65,     0,   577,   -65,    98,   205,   -56,   -56,
     -56,     0,   205,     0,     0,   -78,   -78,   -78,   -78,   -78,
     206,     0,   205,     0,   -56,     0,     0,   -56,     0,   408,
       0,     0,    98,   -78,   -55,   -55,   -55,     0,     0,   -78,
      64,    64,   188,   -78,     0,   187,     0,     0,     0,   185,
     -55,   187,   187,   -55,    61,    61,   185,    63,   -70,     0,
      -7,    -7,   187,   -70,    -7,    -7,    -7,    -7,   -70,   -70,
       0,     0,   -70,   -70,     0,   -70,     0,     0,    62,    61,
      62,    61,     0,   -70,     0,   -70,    61,   583,   -70,     0,
       0,     0,    62,     0,     0,     0,   186,     0,   185,     0,
      62,     0,   -87,   -87,   -87,   -87,   -87,     0,     0,   -63,
     -63,   -63,   -63,   -63,     0,    64,     0,    64,   185,     0,
     -87,    62,     0,     0,   187,   106,   -87,   -63,   186,   186,
      64,     0,     0,   -63,     0,     0,   205,   -63,   185,     0,
       0,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,   185,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,    61,
     -25,     0,     0,   -25,   -25,   -25,   -62,   -62,   -62,   -62,
     -62,     0,     0,   151,     0,     0,     0,    61,    62,    62,
     158,   361,    -2,     1,   -62,     0,     2,     3,     4,     5,
     -62,     0,     0,   205,   -62,   375,     0,     0,   -88,   -88,
     -88,   -88,   -88,    62,     0,    62,   386,     0,     0,     0,
      62,   391,     0,    63,    63,   187,   -88,     0,    82,   -88,
       0,   401,   186,    33,     0,     0,     0,     0,    34,    35,
       0,     0,    38,    39,     0,    40,   -88,   -88,   -88,   -88,
     -88,     0,   186,    45,   185,    46,     0,     0,    47,     0,
     185,   185,     0,   174,   -88,     0,    61,     0,   175,     0,
     -88,   185,   186,   176,   177,     0,     0,   178,   179,     0,
     180,   -89,   -89,   -89,   -89,   -89,   186,     0,   181,     0,
     182,     0,     0,   183,     0,     0,     0,     0,    63,   -89,
      63,     0,   -89,    62,     0,    32,     2,     3,     4,     5,
      33,     0,     0,    63,     0,    34,    35,    36,    37,    38,
      39,    62,    40,    41,     0,   106,    42,    43,     0,    44,
      45,     0,    46,   185,     0,    47,     0,   173,     0,   106,
     -87,   -87,   -87,   -87,   -87,   507,     0,    -4,    -4,     0,
     106,    -4,    -4,    -4,    -4,   106,     0,   -22,   -87,   -22,
     -22,   -22,   -22,   -22,   -22,   106,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,
     -22,   -22,     0,   -22,   -22,     0,   -22,     0,   186,   -22,
     -22,   -22,   194,     0,   186,   186,     0,   195,     0,     0,
      62,     0,   196,   197,     0,   186,   198,   199,     0,   200,
       0,     0,   544,     0,     0,     0,     0,   201,     0,   202,
       0,     0,   203,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,    61,    61,   185,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,   -23,     0,   -23,   -23,     0,   -23,
     -23,     0,   -23,     0,     0,   -23,   -23,   -23,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,   186,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,   -88,     0,     0,   106,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,     0,   -24,   -24,     0,   -24,     0,     0,
     -24,   -24,   -24,     0,     0,     0,     0,    61,     0,    61,
       0,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,    61,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,
     -27,     0,     0,   -27,   -27,   -27,   106,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,   -89,    62,    62,   567,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,
     -26,   -26,     0,   -26,   -26,     0,   -26,     0,     0,   -26,
     -26,   -26,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,   -17,   -17,   -17,   -17,   -17,   -17,
       0,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,   -17,
       0,   -17,     0,     0,   -17,   -17,   -17,     0,   -80,   -80,
     -80,   -80,   -80,     0,     0,   -58,   300,   -58,   -58,   -58,
       0,    62,     0,    62,     0,   -29,   -80,   -29,   -29,   -29,
     -29,   -29,   -29,   -58,     0,     0,    62,   -29,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
       0,   -29,   -29,     0,   -29,     0,     0,   -29,   -29,   -29,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,     0,   -43,   -43,     0,   -43,   -43,     0,   -43,
       0,     0,   -43,   -43,   -43,   -41,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,     0,   -41,   -41,
       0,   -41,   -41,     0,   -41,     0,     0,   -41,   -41,   -41,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,    -8,
       0,     0,    -8,    -8,    -8,   -16,     0,   -16,   -16,   -16,
     -16,   -16,   -16,     0,     0,     0,     0,   -16,   -16,   -16,
     -16,   -16,   -16,     0,   -16,   -16,   -16,     0,   -16,   -16,
       0,   -16,   -16,     0,   -16,     0,     0,   -16,   -16,   -16,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,   -31,
       0,     0,   -31,   -31,   -31,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,   -32,     0,     0,   -32,   -32,   -32,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,   -33,
       0,     0,   -33,   -33,   -33,   -39,     0,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   592,     0,   -39,   -39,
       0,   -39,   -39,     0,   -39,     0,     0,   -39,   -39,   -39,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,   -40,
       0,     0,   -40,   -40,   -40,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,     0,   -42,   -42,
       0,   -42,   -42,     0,   -42,     0,     0,   -42,   -42,   -42,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,   -34,
       0,     0,   -34,   -34,   -34,   -15,     0,   -15,   -15,   -15,
     -15,   -15,   -15,     0,     0,     0,     0,   -15,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,     0,     0,   -15,   -15,
       0,   -15,   -15,     0,   -15,     0,     0,   -15,    28,   -15,
      31,     0,    32,     2,     3,     4,     5,    33,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,     0,    40,
      41,     0,     0,    42,    43,     0,    44,    45,     0,    46,
       0,     0,    47,   -21,   173,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,   -28,   -28,
       0,   -28,   -28,     0,   -28,     0,     0,   -28,   -28,   -28,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,     0,     0,   -30,   -30,     0,   -30,   -30,     0,   -30,
       0,     0,   -30,   -30,   -30,    31,     0,    32,     2,     3,
       4,     5,    33,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,     0,    40,    41,     0,     0,    42,    43,
       0,    44,    45,     0,    46,     0,     0,    47,   -19,   173,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,     0,     0,   -25,   -25,     0,   -25,   -25,     0,   -25,
       0,     0,   -25,   -25,   -25,   -22,     0,   -22,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,     0,   -22,   -22,   -22,
     -22,   -22,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,
       0,   -22,   -22,     0,   -22,     0,     0,   -22,   -22,   -22,
     -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,     0,     0,   -23,   -23,     0,   -23,   -23,     0,   -23,
       0,     0,   -23,   -23,   -23,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,     0,     0,   -24,   -24,
       0,   -24,   -24,     0,   -24,     0,     0,   -24,   -24,   -24,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,     0,     0,   -27,   -27,     0,   -27,   -27,     0,   -27,
       0,     0,   -27,   -27,   -27,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,
       0,   -26,   -26,     0,   -26,     0,     0,   -26,   -26,   -26,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,     0,     0,   -29,   -29,     0,   -29,   -29,     0,   -29,
       0,     0,   -29,   -29,   -29,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,     0,     0,   -43,   -43,
       0,   -43,   -43,     0,   -43,     0,     0,   -43,   -43,   -43,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,     0,     0,   -41,   -41,     0,   -41,   -41,     0,   -41,
       0,     0,   -41,   -41,   -41,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,
       0,   -31,   -31,     0,   -31,     0,     0,   -31,   -31,   -31,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,     0,     0,   -32,   -32,     0,   -32,   -32,     0,   -32,
       0,     0,   -32,   -32,   -32,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,
       0,   -33,   -33,     0,   -33,     0,     0,   -33,   -33,   -33,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,     0,     0,   -40,   -40,     0,   -40,   -40,     0,   -40,
       0,     0,   -40,   -40,   -40,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,     0,     0,   -42,   -42,
       0,   -42,   -42,     0,   -42,     0,     0,   -42,   -42,   -42,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,     0,     0,   -34,   -34,     0,   -34,   -34,     0,   -34,
       0,     0,   -34,   -34,   -34,   -15,     0,   -15,   -15,   -15,
     -15,   -15,   -15,     0,     0,     0,     0,   -15,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,     0,     0,   -15,   -15,
       0,   -15,   -15,     0,   -15,     0,     0,   -15,   271,   -15,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,     0,     0,    -8,    -8,     0,    -8,    -8,     0,    -8,
       0,     0,    -8,    -8,    -8,   -15,     0,   -15,   -15,   -15,
     -15,   -15,   -15,     0,     0,     0,     0,   -15,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,     0,     0,   -15,   -15,
       0,   -15,   -15,     0,   -15,     0,     0,   -15,   350,   -15,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,
       0,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,
     -17,     0,     0,   -17,   -17,     0,   -17,   -17,     0,   -17,
       0,     0,   -17,   -17,   -17,   -16,     0,   -16,   -16,   -16,
     -16,   -16,   -16,     0,     0,     0,     0,   -16,   -16,   -16,
     -16,   -16,   -16,     0,   -16,   -16,     0,     0,   -16,   -16,
     214,   -16,   -16,     0,   -16,   215,     0,   -16,   -16,   -16,
     216,   217,     0,     0,   218,   219,     0,   220,   228,     0,
       0,     0,     0,   229,     0,   221,     0,   222,   230,   231,
     223,     0,   232,   233,     0,   234,   330,     0,     0,     0,
       0,   331,     0,   235,     0,   236,   332,   333,   237,     0,
     334,   335,     0,   336,   409,     0,     0,     0,     0,   410,
       0,   337,     0,   338,   411,   412,   339,     0,   413,   414,
       0,   415,   -69,   -69,   -69,   -69,   -69,     0,     0,   416,
       0,   417,     0,     0,   418,   -79,   -79,   -79,   -79,   -79,
     -69,     0,     0,     0,     0,     0,   -69,     0,     0,     0,
     -69,     0,     0,   -79,   -57,   328,   -57,   -57,   -57,   -79,
       0,     0,     0,   -79,     0,   -59,   -59,   -59,   -59,   -59,
       0,     0,   -57,   -64,   -64,   -64,   -64,   -64,   -57,     0,
       0,     0,   -57,   -59,   -46,   -46,   -46,   -46,   -46,   -59,
       0,   -64,     0,   -59,     0,     0,     0,   -64,     0,     0,
       0,   -64,   -46,   -47,   -47,   -47,   -47,   -47,   -46,     0,
       0,     0,   -46,     0,   -73,   -73,   -73,   -73,   -73,     0,
       0,   -47,   -74,   -74,   -74,   -74,   -74,   -47,     0,     0,
       0,   -47,   -73,   -72,   -72,   -72,   -72,   -72,   -73,     0,
     -74,     0,   -73,     0,     0,     0,   -74,     0,     0,     0,
     -74,   -72,   -68,   -68,   -68,   -68,   -68,   -72,     0,     0,
       0,   -72,     0,   -75,   -75,   -75,   -75,   -75,     0,     0,
     -68,   -76,   -76,   -76,   -76,   -76,   -68,     0,     0,     0,
     -68,   -75,   -66,   -66,   -66,   -66,   -66,   -75,     0,   -76,
       0,   -75,     0,     0,     0,   -76,     0,     0,     0,   -76,
     -66,   -71,   -71,   -71,   -71,   -71,   -66,     0,     0,     0,
     -66,     0,   -77,   -77,   -77,   -77,   -77,     0,     0,   -71,
     -77,   -77,   -77,   -77,   -77,   -71,     0,     0,     0,   -71,
     -77,   -89,   -89,   -89,   -89,   -89,   -77,   360,   -77,   -80,
     -80,   -80,   -80,   -80,   -77,   365,     0,     0,     0,   -89,
     -58,   286,   -58,   -58,   -58,   -89,     0,   -80,   -60,   -60,
     -60,   -60,   -60,   -80,     0,     0,     0,     0,   -58,   -61,
     -61,   -61,   -61,   -61,   -58,     0,   -60,   -78,   -78,   -78,
     -78,   -78,   -60,     0,     0,     0,     0,   -61,   -63,   -63,
     -63,   -63,   -63,   -61,     0,   -78,   -62,   -62,   -62,   -62,
     -62,   -78,     0,     0,     0,     0,   -63,   -69,   -69,   -69,
     -69,   -69,   -63,     0,   -62,   -79,   -79,   -79,   -79,   -79,
     -62,     0,     0,     0,     0,   -69,   -57,   286,   -57,   -57,
     -57,   -69,     0,   -79,   -59,   -59,   -59,   -59,   -59,   -79,
       0,     0,     0,     0,   -57,   -64,   -64,   -64,   -64,   -64,
     -57,     0,   -59,   -46,   -46,   -46,   -46,   -46,   -59,     0,
       0,     0,     0,   -64,   -47,   -47,   -47,   -47,   -47,   -64,
       0,   -46,   -73,   -73,   -73,   -73,   -73,   -46,     0,     0,
       0,     0,   -47,   -74,   -74,   -74,   -74,   -74,   -47,     0,
     -73,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,     0,
       0,   -74,   -68,   -68,   -68,   -68,   -68,   -74,     0,   -72,
     -75,   -75,   -75,   -75,   -75,   -72,     0,     0,     0,     0,
     -68,   -76,   -76,   -76,   -76,   -76,   -68,     0,   -75,   -66,
     -66,   -66,   -66,   -66,   -75,     0,     0,     0,     0,   -76,
     -71,   -71,   -71,   -71,   -71,   -76,     0,   -66,   -80,   -80,
     -80,   -80,   -80,   -66,     0,     0,     0,     0,   -71,   -58,
      99,   -58,   -58,   -58,   -71,     0,   -80,     0,     0,   -80,
     -60,   -60,   -60,   -60,   -60,     0,     0,   -58,     0,     0,
     -58,   -61,   -61,   -61,   -61,   -61,     0,     0,   -60,     0,
       0,   -60,   -78,   -78,   -78,   -78,   -78,     0,     0,   -61,
       0,     0,   -61,   -63,   -63,   -63,   -63,   -63,     0,     0,
     -78,     0,     0,   -78,   -62,   -62,   -62,   -62,   -62,     0,
       0,   -63,     0,     0,   -63,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -62,     0,     0,   -62,   -79,   -79,   -79,   -79,
     -79,     0,     0,   -69,     0,     0,   -69,   -57,    99,   -57,
     -57,   -57,     0,     0,   -79,     0,     0,   -79,   -59,   -59,
     -59,   -59,   -59,     0,     0,   -57,     0,     0,   -57,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -59,     0,     0,   -59,
     -46,   -46,   -46,   -46,   -46,     0,     0,   -64,     0,     0,
     -64,   -47,   -47,   -47,   -47,   -47,     0,     0,   -46,     0,
       0,   -46,   -73,   -73,   -73,   -73,   -73,     0,     0,   -47,
       0,     0,   -47,   -74,   -74,   -74,   -74,   -74,     0,     0,
     -73,     0,     0,   -73,   -72,   -72,   -72,   -72,   -72,     0,
       0,   -74,     0,     0,   -74,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -72,     0,     0,   -72,   -75,   -75,   -75,   -75,
     -75,     0,     0,   -68,     0,     0,   -68,   -76,   -76,   -76,
     -76,   -76,     0,     0,   -75,     0,     0,   -75,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -76,     0,     0,   -76,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -66,     0,     0,   -66,
     -60,   -60,   -60,   -60,   -60,     0,     0,   -71,     0,     0,
     -71,   -61,   -61,   -61,   -61,   -61,     0,     0,   -60,   -78,
     -78,   -78,   -78,   -78,   -63,   -63,   -63,   -63,   -63,   -61,
     -62,   -62,   -62,   -62,   -62,     0,     0,   -78,     0,     0,
       0,     0,   -63,   -69,   -69,   -69,   -69,   -69,   -62,   -79,
     -79,   -79,   -79,   -79,   -57,   300,   -57,   -57,   -57,     0,
       0,   -69,   -59,   -59,   -59,   -59,   -59,   -79,     0,     0,
       0,     0,   -57,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -59,   -46,   -46,   -46,   -46,   -46,   -47,   -47,   -47,   -47,
     -47,   -64,   -73,   -73,   -73,   -73,   -73,     0,     0,   -46,
       0,     0,     0,     0,   -47,   -74,   -74,   -74,   -74,   -74,
     -73,   -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,
     -68,     0,     0,   -74,   -75,   -75,   -75,   -75,   -75,   -72,
       0,     0,     0,     0,   -68,   -76,   -76,   -76,   -76,   -76,
       0,     0,   -75,   -66,   -66,   -66,   -66,   -66,   -71,   -71,
     -71,   -71,   -71,   -76,     0,     0,     0,     0,    -6,    -6,
       0,   -66,    -6,    -6,    -6,    -6,   -71,    -5,    -5,     0,
       0,    -5,    -5,    -5,    -5,    -3,    -3,     0,     0,    -3,
      -3,    -3,    -3,    -8,    -8,     0,     0,    -8,    -8,    -8,
      -8,   -12,   -12,     0,     0,   -12,   -12,   -12,   -12,   -10,
     -10,     0,     0,   -10,   -10,   -10,   -10,   -17,   -17,     0,
       0,   -17,   -17,   -17,   -17,   -16,   -16,     0,     0,   -16,
     -16,   -16,   -16
};

static const yytype_int16 yycheck[] =
{
       0,     0,    21,    22,   165,   173,    31,     7,     7,   139,
      81,    29,   139,    31,     3,    33,   273,    17,    12,     4,
       5,     6,     7,   139,     3,    43,    51,    27,    46,    47,
     287,     3,    26,    51,   164,   139,   166,     3,    32,    33,
      32,   171,   139,    32,    36,   360,   303,    32,    11,    12,
      29,   139,   139,     3,    72,     3,   313,   277,    76,   374,
     365,    79,    80,    26,     3,    13,    14,    85,   139,    32,
       0,   291,    12,    36,   379,   390,    94,    95,    96,    97,
      98,    99,   302,    11,    12,   400,    26,   307,   256,     8,
     395,    10,    11,    12,   165,     3,     3,   317,    26,    32,
     405,    32,     3,   121,    32,    13,    14,    26,    36,    17,
      18,    35,    20,    32,    11,    12,   134,     3,    11,    12,
     139,   139,   140,   141,    12,    33,    29,    13,    14,    26,
      33,    17,    18,    26,    20,    32,    29,    32,    26,   139,
     139,    29,    28,    33,     3,    33,   164,    33,   166,     8,
      10,    11,    12,   171,    13,    14,    32,   175,    17,    18,
      36,    20,    33,    33,   182,   183,    26,    33,    33,    28,
     427,    30,    32,    32,    33,    33,    36,   195,     3,    33,
      10,    11,    12,    33,   202,   203,   347,    34,    13,    14,
      29,   506,    17,    18,    29,    20,    26,   215,     3,     3,
      34,    12,    32,    28,   222,   223,   511,     3,    33,    13,
      14,   431,    12,    17,    18,    26,    20,    13,    14,   237,
       3,    32,    33,     3,    28,    36,    26,    29,   543,    33,
     248,   249,    32,    33,     3,     3,   254,   494,     8,     8,
      10,    11,    12,   548,    13,    14,    33,   272,    17,    18,
     268,    20,    34,    32,   272,    29,    26,    29,   276,    28,
     278,    30,    32,    32,    33,   283,   284,   285,   286,    10,
      11,    12,   290,    26,   292,    12,   347,    32,   498,   297,
     298,   299,   300,   301,    32,    26,    11,    12,   306,    26,
     308,    32,    29,     3,    32,    36,    33,    32,   316,    32,
     318,    26,    31,    13,    14,    12,   324,    17,    18,    29,
      20,    12,    29,   331,    10,    11,    12,    26,    28,    26,
     338,   339,    29,    33,    32,    26,   351,   345,   346,    32,
      26,    32,    33,   351,    32,    36,    32,     1,   356,     3,
       4,     5,     6,     7,     8,    29,    29,    29,   366,    13,
      14,    15,    16,    17,    18,    32,    20,    21,    22,    32,
      24,    25,   380,    27,    28,     3,    30,    12,    29,    33,
      34,    35,    12,    32,    29,    13,    14,    12,   396,    17,
      18,    26,    20,    32,    29,    32,    26,   517,   406,    29,
     517,    26,   410,    33,    33,    33,    32,    32,    33,   417,
     418,   517,    12,    33,    29,    33,    31,     8,    33,    10,
      11,    12,   430,   517,   432,    33,    26,    33,    43,    29,
     517,    46,    47,     3,    33,    26,    51,    33,     8,   517,
     517,    32,   593,    13,    14,    36,    33,    17,    18,    19,
      20,     8,     9,    10,    11,    12,   517,    72,    28,    33,
      30,    76,    33,    33,    79,    80,    33,    33,    33,    26,
      33,    33,   592,    33,   594,   592,    33,   594,    33,    94,
      95,    96,    97,    98,    99,    12,   592,   607,   594,   497,
     607,   499,    12,     4,     5,     6,     7,    33,   592,    26,
     594,   607,    29,    33,   512,   592,    26,   594,   517,   517,
     518,   519,    32,   607,   592,   592,   594,   594,     3,   134,
     607,    29,    29,    32,   139,   140,   141,   517,   517,   607,
     607,   592,   593,   594,     3,     8,     9,    10,    11,    12,
      31,   549,     3,    33,    13,    14,   607,     3,    32,   164,
      33,   166,     8,    26,    11,    12,   171,    13,    14,    32,
     175,    17,    18,    36,    20,    32,    32,   182,   183,    26,
      33,    33,    28,    32,    30,    32,    32,    33,    33,     3,
     195,    12,    33,   592,   592,   594,   594,   202,   203,    13,
      14,    33,    12,    17,    18,    26,    20,    29,   607,   607,
     215,    32,   592,   592,   594,   594,    26,   222,   223,    33,
      12,     3,    32,    33,   229,     3,    36,   607,   607,    29,
       8,   236,   237,    12,    26,    13,    14,    29,    34,    17,
      18,    32,    20,   248,   249,    32,    12,    26,    12,   254,
      28,    29,    30,    32,    29,    33,    32,    36,    32,     3,
      26,    32,    26,   268,     8,    32,    32,   272,    32,    13,
      14,   276,    36,    17,    18,    32,    20,    12,   283,   284,
     285,   286,    32,    32,    28,   290,    30,    32,    32,    33,
      12,    26,   297,   298,   299,   300,   301,    32,     3,    32,
      32,   306,    32,     8,    26,    11,    12,     3,    13,    14,
      32,   316,    17,    18,    36,    20,    33,    13,    14,   324,
      26,    17,    18,    28,    20,    30,   331,    32,    33,    33,
      33,    33,    28,   338,   339,    32,    34,    33,     3,    12,
     345,   346,    32,    29,    12,    31,   351,    32,    13,    14,
      32,   356,    29,    26,    31,    26,    33,    43,    26,    32,
      32,    47,     3,    36,    32,    51,    43,     8,    36,    46,
      47,    32,    13,    14,    51,    32,    17,    18,    32,    20,
       8,     9,    10,    11,    12,    32,    72,    28,    32,    30,
       3,    32,    33,    79,    80,    72,    12,    12,    26,    76,
      13,    14,    79,    80,    32,   410,    32,    32,    36,    32,
      26,    26,   417,   418,    29,    32,    32,    94,    95,    96,
      97,    98,    99,     3,    32,   430,     8,     9,    10,    11,
      12,     3,    32,    13,    14,    32,     8,    11,    12,    32,
      32,    13,    14,    33,    26,    17,    18,    29,    20,    31,
      29,    33,    26,   139,   140,    29,    28,   134,    30,    32,
      32,    33,   139,   140,   141,    12,     8,     9,    10,    11,
      12,    32,     8,     9,    10,    11,    12,    32,   164,    26,
     166,    12,    29,    32,    26,   171,    32,   164,    29,   166,
      26,    33,   497,     3,   171,    26,    32,   183,   175,    29,
      36,    32,    29,    13,    14,   182,   183,    17,    18,    32,
      20,     3,   517,   518,   519,    32,    32,   203,   195,     3,
      32,    13,    14,    33,    32,   202,   203,    32,    32,    13,
      14,    32,    32,    17,    18,    32,    20,   223,   215,    32,
      12,    12,    32,   132,    28,   222,   223,    32,   518,    33,
      32,   237,     3,    32,    26,    26,   145,    29,    32,   148,
     237,    32,    13,    14,     3,    36,    17,    18,   254,    20,
      12,   248,   249,    32,    13,    14,    32,   254,    17,    18,
      32,    20,    33,    12,    26,    32,   272,   592,    32,   594,
      32,   268,    32,     7,    33,   272,    27,    26,    -1,   276,
       3,    -1,   607,    32,    -1,     8,   283,   284,   285,   286,
      13,    14,    -1,   290,    17,    18,    19,    20,    12,    -1,
     297,   298,   299,   300,   301,    28,     3,    30,    -1,   306,
      33,    12,    26,    -1,    -1,    -1,    13,    14,    32,   316,
      17,    18,    36,    20,    -1,    26,    -1,   324,    29,    -1,
      -1,    28,    12,   339,   331,    -1,    33,    12,    -1,   345,
     346,   338,   339,    -1,    12,   351,    26,    -1,   345,   346,
     356,    26,    32,    -1,   351,    12,     3,    32,    26,   356,
      29,     8,    31,    12,    32,    -1,    13,    14,    36,    26,
      17,    18,    -1,    20,    43,    32,    -1,    26,    47,     3,
      29,    28,    51,    30,     8,    32,    33,    -1,    -1,    13,
      14,    -1,    -1,    17,    18,    -1,    20,     8,     9,    10,
      11,    12,    12,    72,    28,    -1,    30,    76,    32,    33,
      79,    80,   418,   410,    -1,    26,    26,    -1,    29,    29,
     417,   418,    33,    12,    12,    94,    95,    96,    97,    98,
      99,     3,    -1,   430,    -1,    12,     8,    26,    26,    -1,
      -1,    13,    14,    32,    32,    17,    18,    36,    20,    26,
     359,    -1,     3,    -1,    -1,    32,    28,     8,    30,    36,
      32,    33,    13,    14,   373,   134,    17,    18,    -1,    20,
     139,   140,   141,    12,     3,    -1,    -1,    28,    12,    30,
     389,    32,    33,    -1,    13,    14,    -1,    26,    17,    18,
     399,    20,    26,    32,    -1,   164,    12,   166,    32,    -1,
     497,    -1,   171,     1,    33,    12,     4,     5,     6,     7,
      26,   517,   518,     3,   183,    -1,    32,    -1,     8,    26,
     517,   518,   519,    13,    14,    32,    -1,    17,    18,    36,
      20,    -1,    -1,     8,   203,    10,    11,    12,    28,    -1,
      30,   450,    32,    33,    -1,     3,    -1,   456,    -1,    12,
       8,    26,   461,    -1,   223,    13,    14,    32,   467,    17,
      18,    36,    20,    26,    -1,   474,    -1,    12,   237,    32,
      28,   480,    30,    36,    32,    33,   485,    -1,    12,   248,
     249,    26,   491,     3,    -1,   254,   592,    32,   594,    -1,
      -1,    36,    26,    13,    14,   592,   505,   594,    32,   268,
      -1,   607,    36,   272,    12,    12,    12,   276,    -1,     8,
     607,    10,    11,    12,   283,   284,   285,   286,    26,    26,
      26,   290,    -1,    -1,    32,    32,    32,    26,   297,   298,
     299,   300,   301,   542,    12,    12,    -1,   306,     8,     9,
      10,    11,    12,    29,   553,    31,    -1,   316,    26,    26,
     559,    -1,    29,    12,    32,   324,    26,    43,    36,   328,
      -1,    47,    32,    33,    -1,    51,    36,    26,    -1,   578,
     339,    -1,    -1,    32,     3,   584,   345,   346,    12,     8,
      -1,    -1,   351,    -1,    13,    14,    72,   356,    17,    18,
      76,    20,    26,    79,    80,     3,    -1,    -1,    32,    28,
      -1,    30,    36,    32,    33,    13,    14,    -1,    94,    -1,
      96,    97,    98,     1,    -1,     3,     4,     5,     6,     7,
       8,    12,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    26,    24,    25,    -1,    27,
      28,    32,    30,    -1,    -1,    33,    34,    35,   134,   418,
      10,    11,    12,   139,   140,   141,     8,     9,    10,    11,
      12,   430,     3,    -1,    -1,    -1,    26,     8,    29,    29,
      31,    -1,    13,    14,    26,    -1,    17,    18,   164,    20,
     166,    33,    43,     3,    12,   171,    47,    28,    -1,    30,
      51,    32,    33,    13,    14,     3,    -1,   183,    26,    12,
       8,    -1,    -1,    -1,    32,    13,    14,    12,    36,    17,
      18,    72,    20,    26,    -1,    76,    29,   203,    79,    80,
      28,    26,    30,    -1,    32,    33,    -1,    32,   497,    -1,
      -1,    36,    -1,    94,    -1,    96,    97,   223,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,   517,   518,
     519,   237,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    12,   248,    24,    25,    -1,    27,    28,   254,    30,
      12,    -1,    33,   134,    35,    26,    -1,    -1,   139,   140,
     141,    32,   268,    -1,    26,    36,   272,    29,    -1,    -1,
     276,    -1,    12,    -1,    12,    -1,    -1,   283,   284,   285,
      10,    11,    12,   164,   290,   166,    26,    12,    26,    29,
     171,   297,   298,   299,    32,   301,    26,    -1,    36,    29,
     306,    26,   183,   592,    -1,   594,    12,    32,    -1,    -1,
     316,    36,    -1,     8,     9,    10,    11,    12,   607,    -1,
      26,   327,   203,    29,    -1,     8,     9,    10,    11,    12,
      12,    26,    -1,   339,    12,    -1,    -1,    32,    33,   345,
     346,    36,   223,    26,    26,   351,    12,    29,    26,    32,
     356,    29,    -1,    36,     3,    -1,   237,    -1,    -1,     8,
      26,    -1,    12,    -1,    13,    14,    32,   248,    17,    18,
      36,    20,    29,   254,    31,    -1,    26,    -1,    12,    28,
      -1,    30,    32,    32,    33,    12,    43,   268,    -1,    -1,
      47,   272,    26,    12,    51,   276,    -1,    12,    32,    26,
      -1,    -1,   283,   284,    -1,    32,    -1,    26,    -1,   290,
      -1,    26,   418,    32,    29,    72,   297,   298,    12,    76,
     301,    -1,    79,    80,   430,   306,     8,     9,    10,    11,
      12,    -1,    26,    -1,    -1,   316,    -1,    94,    32,    96,
      -1,    12,     3,    -1,    26,   326,    12,     8,    12,    -1,
      32,    33,    13,    14,    36,    26,    17,    18,   339,    20,
      26,    32,    26,     3,   345,   346,    32,    28,    32,    30,
     351,    32,    33,    13,    14,   356,    12,   134,    12,    12,
      12,    12,   139,   140,   141,     8,     9,    10,    11,    12,
      26,   497,    26,    26,    26,    26,    32,    29,    32,    32,
      36,    32,    36,    26,    -1,     3,    29,   164,    -1,   166,
      33,   517,   518,   519,   171,    13,    14,    -1,     3,     4,
       5,     6,     7,     8,    12,    -1,   183,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,   418,    26,    24,
      25,     3,    27,    28,    32,    30,   203,    -1,    33,   430,
      35,    13,    14,    -1,    12,    29,    12,    31,    12,    -1,
      -1,     8,     9,    10,    11,    12,   223,    12,    26,    43,
      26,    -1,    26,    47,    32,    -1,    32,    51,    32,    26,
     237,    26,    -1,    -1,    -1,    32,   592,    32,   594,    36,
      12,   248,     8,     9,    10,    11,    12,   254,    72,    -1,
      -1,   607,    76,    -1,    26,    79,    80,    29,    -1,    -1,
      26,   268,    -1,    29,    -1,   272,   497,    33,    12,   276,
      94,     8,     9,    10,    11,    12,   283,     8,     9,    10,
      11,    12,    26,   290,    -1,    29,   517,   518,   519,    26,
     297,    -1,    29,     3,   301,    26,    -1,     3,    -1,   306,
      -1,    32,     8,    13,    14,    36,    -1,    13,    14,   316,
     134,    17,    18,    -1,    20,   139,   140,   141,   325,    -1,
      -1,    -1,    28,    -1,    30,    -1,    32,    33,    -1,    12,
      -1,    12,   339,     8,     9,    10,    11,    12,   345,   346,
     164,    -1,   166,    26,   351,    26,    29,   171,    29,   356,
      -1,    26,    -1,    10,    11,    12,    -1,    32,    33,   183,
      -1,   592,    -1,   594,    -1,    -1,    -1,    -1,     1,    26,
       3,     4,     5,     6,     7,     8,   607,    -1,    -1,   203,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,   223,
      33,    34,    35,     8,     9,    10,    11,    12,    -1,    -1,
      -1,   418,    -1,   237,    29,     8,    31,    10,    11,    12,
      -1,    26,    -1,   430,   248,    -1,    -1,    32,    43,    -1,
     254,    36,    47,    26,    -1,    -1,    51,    10,    11,    12,
      -1,    -1,    -1,    -1,   268,     3,    -1,    -1,   272,    -1,
       8,    -1,   276,    26,    -1,    13,    14,    72,    -1,    17,
      18,    76,    20,    -1,    79,    80,   290,    -1,    -1,    -1,
      28,    -1,    30,    -1,    32,    33,     8,   301,    10,    11,
      12,    -1,   306,    -1,    -1,     8,     9,    10,    11,    12,
     497,    -1,   316,    -1,    26,    -1,    -1,    29,    -1,   323,
      -1,    -1,     8,    26,    10,    11,    12,    -1,    -1,    32,
     517,   518,   519,    36,    -1,   339,    -1,    -1,    -1,   134,
      26,   345,   346,    29,   139,   140,   141,   351,     3,    -1,
       0,     1,   356,     8,     4,     5,     6,     7,    13,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    29,   164,
      31,   166,    -1,    28,    -1,    30,   171,    32,    33,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    -1,   183,    -1,
      51,    -1,     8,     9,    10,    11,    12,    -1,    -1,     8,
       9,    10,    11,    12,    -1,   592,    -1,   594,   203,    -1,
      26,    72,    -1,    -1,   418,    76,    32,    26,    79,    80,
     607,    -1,    -1,    32,    -1,    -1,   430,    36,   223,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,   237,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,   254,
      30,    -1,    -1,    33,    34,    35,     8,     9,    10,    11,
      12,    -1,    -1,   134,    -1,    -1,    -1,   272,   139,   140,
     141,   276,     0,     1,    26,    -1,     4,     5,     6,     7,
      32,    -1,    -1,   497,    36,   290,    -1,    -1,     8,     9,
      10,    11,    12,   164,    -1,   166,   301,    -1,    -1,    -1,
     171,   306,    -1,   517,   518,   519,    26,    -1,     3,    29,
      -1,   316,   183,     8,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    17,    18,    -1,    20,     8,     9,    10,    11,
      12,    -1,   203,    28,   339,    30,    -1,    -1,    33,    -1,
     345,   346,    -1,     3,    26,    -1,   351,    -1,     8,    -1,
      32,   356,   223,    13,    14,    -1,    -1,    17,    18,    -1,
      20,     8,     9,    10,    11,    12,   237,    -1,    28,    -1,
      30,    -1,    -1,    33,    -1,    -1,    -1,    -1,   592,    26,
     594,    -1,    29,   254,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,   607,    -1,    13,    14,    15,    16,    17,
      18,   272,    20,    21,    -1,   276,    24,    25,    -1,    27,
      28,    -1,    30,   418,    -1,    33,    -1,    35,    -1,   290,
       8,     9,    10,    11,    12,   430,    -1,     0,     1,    -1,
     301,     4,     5,     6,     7,   306,    -1,     1,    26,     3,
       4,     5,     6,     7,     8,   316,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,   339,    33,
      34,    35,     3,    -1,   345,   346,    -1,     8,    -1,    -1,
     351,    -1,    13,    14,    -1,   356,    17,    18,    -1,    20,
      -1,    -1,   497,    -1,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,   517,   518,   519,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,   418,     1,    -1,
       3,     4,     5,     6,     7,     8,    26,    -1,    -1,   430,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,   592,    -1,   594,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,   607,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,    35,   497,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    26,   517,   518,   519,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,    -1,     8,     9,
      10,    11,    12,    -1,    -1,     8,     9,    10,    11,    12,
      -1,   592,    -1,   594,    -1,     1,    26,     3,     4,     5,
       6,     7,     8,    26,    -1,    -1,   607,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
       3,    27,    28,    -1,    30,     8,    -1,    33,    34,    35,
      13,    14,    -1,    -1,    17,    18,    -1,    20,     3,    -1,
      -1,    -1,    -1,     8,    -1,    28,    -1,    30,    13,    14,
      33,    -1,    17,    18,    -1,    20,     3,    -1,    -1,    -1,
      -1,     8,    -1,    28,    -1,    30,    13,    14,    33,    -1,
      17,    18,    -1,    20,     3,    -1,    -1,    -1,    -1,     8,
      -1,    28,    -1,    30,    13,    14,    33,    -1,    17,    18,
      -1,    20,     8,     9,    10,    11,    12,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,     8,     9,    10,    11,    12,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    26,     8,     9,    10,    11,    12,    32,
      -1,    -1,    -1,    36,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    26,     8,     9,    10,    11,    12,    32,    -1,
      -1,    -1,    36,    26,     8,     9,    10,    11,    12,    32,
      -1,    26,    -1,    36,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    36,    26,     8,     9,    10,    11,    12,    32,    -1,
      -1,    -1,    36,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    26,     8,     9,    10,    11,    12,    32,    -1,    -1,
      -1,    36,    26,     8,     9,    10,    11,    12,    32,    -1,
      26,    -1,    36,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      36,    26,     8,     9,    10,    11,    12,    32,    -1,    -1,
      -1,    36,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      26,     8,     9,    10,    11,    12,    32,    -1,    -1,    -1,
      36,    26,     8,     9,    10,    11,    12,    32,    -1,    26,
      -1,    36,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      26,     8,     9,    10,    11,    12,    32,    -1,    -1,    -1,
      36,    -1,     8,     9,    10,    11,    12,    -1,    -1,    26,
       8,     9,    10,    11,    12,    32,    -1,    -1,    -1,    36,
      26,     8,     9,    10,    11,    12,    32,    33,    26,     8,
       9,    10,    11,    12,    32,    33,    -1,    -1,    -1,    26,
       8,     9,    10,    11,    12,    32,    -1,    26,     8,     9,
      10,    11,    12,    32,    -1,    -1,    -1,    -1,    26,     8,
       9,    10,    11,    12,    32,    -1,    26,     8,     9,    10,
      11,    12,    32,    -1,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,    32,    -1,    26,     8,     9,    10,    11,
      12,    32,    -1,    -1,    -1,    -1,    26,     8,     9,    10,
      11,    12,    32,    -1,    26,     8,     9,    10,    11,    12,
      32,    -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,
      12,    32,    -1,    26,     8,     9,    10,    11,    12,    32,
      -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,    12,
      32,    -1,    26,     8,     9,    10,    11,    12,    32,    -1,
      -1,    -1,    -1,    26,     8,     9,    10,    11,    12,    32,
      -1,    26,     8,     9,    10,    11,    12,    32,    -1,    -1,
      -1,    -1,    26,     8,     9,    10,    11,    12,    32,    -1,
      26,     8,     9,    10,    11,    12,    32,    -1,    -1,    -1,
      -1,    26,     8,     9,    10,    11,    12,    32,    -1,    26,
       8,     9,    10,    11,    12,    32,    -1,    -1,    -1,    -1,
      26,     8,     9,    10,    11,    12,    32,    -1,    26,     8,
       9,    10,    11,    12,    32,    -1,    -1,    -1,    -1,    26,
       8,     9,    10,    11,    12,    32,    -1,    26,     8,     9,
      10,    11,    12,    32,    -1,    -1,    -1,    -1,    26,     8,
       9,    10,    11,    12,    32,    -1,    26,    -1,    -1,    29,
       8,     9,    10,    11,    12,    -1,    -1,    26,    -1,    -1,
      29,     8,     9,    10,    11,    12,    -1,    -1,    26,    -1,
      -1,    29,     8,     9,    10,    11,    12,    -1,    -1,    26,
      -1,    -1,    29,     8,     9,    10,    11,    12,    -1,    -1,
      26,    -1,    -1,    29,     8,     9,    10,    11,    12,    -1,
      -1,    26,    -1,    -1,    29,     8,     9,    10,    11,    12,
      -1,    -1,    26,    -1,    -1,    29,     8,     9,    10,    11,
      12,    -1,    -1,    26,    -1,    -1,    29,     8,     9,    10,
      11,    12,    -1,    -1,    26,    -1,    -1,    29,     8,     9,
      10,    11,    12,    -1,    -1,    26,    -1,    -1,    29,     8,
       9,    10,    11,    12,    -1,    -1,    26,    -1,    -1,    29,
       8,     9,    10,    11,    12,    -1,    -1,    26,    -1,    -1,
      29,     8,     9,    10,    11,    12,    -1,    -1,    26,    -1,
      -1,    29,     8,     9,    10,    11,    12,    -1,    -1,    26,
      -1,    -1,    29,     8,     9,    10,    11,    12,    -1,    -1,
      26,    -1,    -1,    29,     8,     9,    10,    11,    12,    -1,
      -1,    26,    -1,    -1,    29,     8,     9,    10,    11,    12,
      -1,    -1,    26,    -1,    -1,    29,     8,     9,    10,    11,
      12,    -1,    -1,    26,    -1,    -1,    29,     8,     9,    10,
      11,    12,    -1,    -1,    26,    -1,    -1,    29,     8,     9,
      10,    11,    12,    -1,    -1,    26,    -1,    -1,    29,     8,
       9,    10,    11,    12,    -1,    -1,    26,    -1,    -1,    29,
       8,     9,    10,    11,    12,    -1,    -1,    26,    -1,    -1,
      29,     8,     9,    10,    11,    12,    -1,    -1,    26,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    26,
       8,     9,    10,    11,    12,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    26,     8,     9,    10,    11,    12,    26,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    26,     8,     9,    10,    11,    12,    26,    -1,    -1,
      -1,    -1,    26,     8,     9,    10,    11,    12,    -1,    -1,
      26,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    26,     8,     9,    10,    11,    12,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,    12,
      26,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    26,     8,     9,    10,    11,    12,    26,
      -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,    12,
      -1,    -1,    26,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    26,    -1,    -1,    -1,    -1,     0,     1,
      -1,    26,     4,     5,     6,     7,    26,     0,     1,    -1,
      -1,     4,     5,     6,     7,     0,     1,    -1,    -1,     4,
       5,     6,     7,     0,     1,    -1,    -1,     4,     5,     6,
       7,     0,     1,    -1,    -1,     4,     5,     6,     7,     0,
       1,    -1,    -1,     4,     5,     6,     7,     0,     1,    -1,
      -1,     4,     5,     6,     7,     0,     1,    -1,    -1,     4,
       5,     6,     7
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    38,    39,    40,    41,
      42,    74,     0,    40,     3,    29,    33,    43,    44,    45,
      74,    32,    32,     3,    35,    46,    46,    36,    34,    47,
      45,     1,     3,     8,    13,    14,    15,    16,    17,    18,
      20,    21,    24,    25,    27,    28,    30,    33,    41,    46,
      48,    49,    50,    51,    54,    55,    56,    57,    58,    59,
      60,    62,    63,    64,    65,    66,    67,    68,    72,    74,
      75,    48,    31,    33,     3,    72,    33,    33,    33,    33,
      33,    33,     3,    59,    33,    33,     3,    28,    72,    59,
      34,    48,    29,    29,    12,    26,    11,    10,     8,     9,
       3,    59,    32,    70,    33,    62,    63,     3,    61,     3,
      19,    59,    59,     3,    52,    58,    29,     3,     3,    60,
      33,    33,    32,    64,    68,    65,    66,    67,    68,    59,
      73,    32,    69,    32,    26,    32,    32,    32,    32,    32,
      29,    26,    32,    32,    32,    71,     3,    60,    36,    32,
      73,    63,    29,    29,    29,    49,    53,    59,    63,    73,
      32,    32,    73,    32,    22,    29,    32,    32,    49,    52,
      49,    32,    49,    35,     3,     8,    13,    14,    17,    18,
      20,    28,    30,    33,    60,    62,    63,    64,    65,    66,
      67,    68,    72,    75,     3,     8,    13,    14,    17,    18,
      20,    28,    30,    33,    60,    64,    65,    66,    67,    68,
      72,    75,    13,    14,     3,     8,    13,    14,    17,    18,
      20,    28,    30,    33,    60,    72,    75,    29,     3,     8,
      13,    14,    17,    18,    20,    28,    30,    33,    60,    62,
      63,    64,    65,    66,    67,    68,    72,    75,    12,    26,
      15,    16,    21,    24,    25,    27,    35,    41,    46,    50,
      51,    54,    55,    56,    57,    58,    59,    74,    12,     3,
      58,    34,    47,    33,     3,    72,    33,    33,    33,     3,
      28,    72,    59,    11,    10,     8,     9,    33,     3,    72,
      33,    33,    33,     3,    28,    72,    59,    11,    10,     8,
       9,    33,    33,    33,     3,    72,    33,    33,    33,     3,
      28,    72,    59,    33,     3,    72,    33,    33,    33,     3,
      28,    72,    59,    12,    26,    11,    10,     8,     9,    64,
       3,     8,    13,    14,    17,    18,    20,    28,    30,    33,
      60,    68,    72,    75,    33,    33,    33,    33,    59,    33,
      34,    47,    29,    29,     3,    64,    31,    48,    32,    70,
      33,    62,    61,     3,    60,    33,    33,    32,    65,    66,
      67,    68,    32,    70,    33,    62,    61,     3,    60,    33,
      33,    32,    65,    66,    67,    68,    62,    61,    32,    70,
      33,    62,    61,     3,    60,    33,    33,    32,    32,    70,
      33,    62,    61,     3,    60,    33,    33,    32,    64,     3,
       8,    13,    14,    17,    18,    20,    28,    30,    33,    60,
      68,    72,    75,    65,    66,    67,    68,    33,     3,    72,
      33,    33,    33,     3,    28,    72,    59,     3,    19,    59,
      59,    52,    29,     3,    48,    29,    59,    34,    73,    32,
      69,    32,    32,    32,    32,    32,    71,     3,    60,    73,
      32,    69,    32,    32,    32,    32,    32,    71,     3,    60,
      32,    32,    73,    32,    69,    32,    32,    32,    32,    32,
      71,     3,    60,    73,    32,    69,    32,    32,    32,    32,
      32,    71,     3,    60,    33,     3,    72,    33,    33,    33,
       3,    28,    72,    59,    32,    70,    33,    62,    61,     3,
      60,    33,    33,    32,    32,    32,    32,    32,    29,    26,
      34,    32,    73,    73,    32,    32,    32,    73,    73,    32,
      32,    32,    73,    73,    32,    32,    32,    73,    73,    32,
      32,    32,    70,    33,    62,    61,     3,    60,    33,    33,
      32,    73,    32,    69,    32,    32,    32,    32,    32,    71,
       3,    60,    29,    29,    29,    49,    53,    63,    32,    32,
      32,    32,    32,    32,    32,    32,    73,    32,    69,    32,
      32,    32,    32,    32,    71,     3,    60,    32,    73,    73,
      32,    32,    22,    29,    32,    32,    73,    73,    32,    32,
      32,    32,    49,    52,    49,    32,    32,    32,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    43,
      42,    44,    42,    45,    45,    47,    46,    46,    48,    48,
      48,    48,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    50,    50,    50,    51,    52,    52,    53,    53,    54,
      54,    55,    56,    57,    58,    59,    60,    60,    61,    62,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    69,    68,    70,    68,    68,
      71,    68,    68,    68,    68,    68,    68,    72,    72,    72,
      72,    73,    73,    74,    74,    74,    74,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       7,     0,     6,     4,     2,     0,     4,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     5,     5,     5,     9,     1,     0,     1,     0,     5,
       7,     3,     7,     2,     3,     1,     4,     4,     3,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     4,     0,     6,     0,     5,     3,
       0,     6,     4,     4,     4,     5,     5,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 111 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2676 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 119 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2687 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 125 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2695 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 130 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2703 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 133 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2711 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 136 "sintatico.y"
          {}
#line 2717 "sintatico.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 139 "sintatico.y"
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
      snprintf(codigoTac, 1100, "%s %s_%d", lowerCase(s.tipo), s.corpo, s.escopo);
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
    (yyval.nodo)->tac = criarTac(NULL, NULL, NULL, NULL, -1);
    if(strcmp(s.tipo, "elem") != 0 && strcmp(s.tipo, "set") != 0 ){
      (yyval.nodo)->tac->tabela = 1;
      (yyval.nodo)->tac->instrucao = strdup(codigoTac);
    }
  }
#line 2753 "sintatico.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 172 "sintatico.y"
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
#line 2784 "sintatico.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' $@1 params_list ')' brackets_stmt  */
#line 197 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, (yyvsp[-5].lexema).corpo, 2);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if(!errosSemanticos) {
      (yyval.nodo)->tac = criarTac((yyvsp[-5].lexema).corpo, NULL, NULL, NULL, 0);
    }
  }
#line 2801 "sintatico.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 209 "sintatico.y"
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
#line 2829 "sintatico.tab.c"
    break;

  case 12: /* function_declaration: type ID '(' $@2 ')' brackets_stmt  */
#line 231 "sintatico.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[0].nodo);

    
    if(!errosSemanticos) {
      (yyval.nodo)->tac = criarTac((yyvsp[-4].lexema).corpo, NULL, NULL, NULL, 0);
    }
  }
#line 2846 "sintatico.tab.c"
    break;

  case 13: /* params_list: type ID ',' params_list  */
#line 245 "sintatico.y"
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
#line 2881 "sintatico.tab.c"
    break;

  case 14: /* params_list: type ID  */
#line 275 "sintatico.y"
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
#line 2915 "sintatico.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 306 "sintatico.y"
      {
    if(ehFuncao) {
      ehFuncao = 0;
    } else {
      indiceEscopo++; 
      escopo++; 
      listaEscopo[indiceEscopo] = escopo; 
    }
  }
#line 2929 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 314 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2938 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: '{' '}'  */
#line 318 "sintatico.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_brackets");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "empty", 4);
  }
#line 2948 "sintatico.tab.c"
    break;

  case 18: /* stmts: stmt stmts  */
#line 325 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2959 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt  */
#line 331 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2967 "sintatico.tab.c"
    break;

  case 20: /* stmts: error stmts  */
#line 334 "sintatico.y"
                {}
#line 2973 "sintatico.tab.c"
    break;

  case 21: /* stmts: error  */
#line 335 "sintatico.y"
          {}
#line 2979 "sintatico.tab.c"
    break;

  case 22: /* stmt: for_stmt  */
#line 338 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2987 "sintatico.tab.c"
    break;

  case 23: /* stmt: if_else_stmt  */
#line 341 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2995 "sintatico.tab.c"
    break;

  case 24: /* stmt: return_stmt  */
#line 344 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3003 "sintatico.tab.c"
    break;

  case 25: /* stmt: io_stmt  */
#line 347 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3011 "sintatico.tab.c"
    break;

  case 26: /* stmt: exp_stmt  */
#line 350 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3019 "sintatico.tab.c"
    break;

  case 27: /* stmt: set_stmt  */
#line 353 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3027 "sintatico.tab.c"
    break;

  case 28: /* stmt: var_declaration  */
#line 356 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3035 "sintatico.tab.c"
    break;

  case 29: /* stmt: assignment ';'  */
#line 359 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3043 "sintatico.tab.c"
    break;

  case 30: /* stmt: brackets_stmt  */
#line 362 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3051 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 367 "sintatico.y"
                       {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      errosSemanticos++;
    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
      if(strcmp((yyval.nodo)->tipo, "FLOAT") == 0) (yyval.nodo)->tac = criarTac("scanf", variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), NULL, NULL, 1);
      if(strcmp((yyval.nodo)->tipo, "INT") == 0) (yyval.nodo)->tac = criarTac("scani", variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), NULL, NULL, 1);
    }

    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3073 "sintatico.tab.c"
    break;

  case 32: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 384 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
    
    if(strcmp((yyvsp[-4].lexema).corpo, "writeln") == 0){
      int tamanhoString = (int)strlen((yyvsp[-2].lexema).corpo) - 2;
      snprintf(codigoTac, 1100, "string_%d", stringIdx);
      if(tamanhoString == 1) (yyval.nodo)->tac = criarTac("println", codigoTac, NULL, NULL, 1);
      else {
        snprintf(codigoTac, 1100, "&string_%d\n\tparam %d\n\tparam $1021\n\tcall writeln, 2", stringIdx, tamanhoString);
        (yyval.nodo)->tac = criarTac("mov", codigoTac, NULL, "$1021", 2);
      }

    } 
    if(strcmp((yyvsp[-4].lexema).corpo, "write") == 0){
      int tamanhoString = (int)strlen((yyvsp[-2].lexema).corpo) - 2;
      snprintf(codigoTac, 1100, "string_%d", stringIdx);
      if(tamanhoString == 1) (yyval.nodo)->tac = criarTac("print", codigoTac, NULL, NULL, 1);
      else {
        snprintf(codigoTac, 1100, "&string_%d\n\tparam %d\n\tparam $1021\n\tcall write, 2", stringIdx, tamanhoString);
        (yyval.nodo)->tac = criarTac("mov", codigoTac, NULL, "$1021", 2);
      }
      
    } 

    if((yyvsp[-2].lexema).corpo[0] == 39) snprintf(codigoTac, 1100, "char string_%d = %s ", stringIdx, (yyvsp[-2].lexema).corpo);
    else snprintf(codigoTac, 1100, "char string_%d [] = %s ", stringIdx, (yyvsp[-2].lexema).corpo);
    (yyval.nodo)->tac->tabela = 1;
    (yyval.nodo)->tac->instrucao = strdup(codigoTac);

    stringIdx++;
  }
#line 3111 "sintatico.tab.c"
    break;

  case 33: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 417 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);

    if(strcmp((yyvsp[-4].lexema).corpo, "writeln") == 0) (yyval.nodo)->tac = criarTac("println", (yyvsp[-2].nodo)->tac->res, NULL, NULL, 1);
    if(strcmp((yyvsp[-4].lexema).corpo, "write") == 0) (yyval.nodo)->tac = criarTac("print", (yyvsp[-2].nodo)->tac->res, NULL, NULL, 1);
  }
#line 3124 "sintatico.tab.c"
    break;

  case 34: /* for_stmt: FOR '(' assignment_or_null ';' exp_or_null ';' assignment_or_null ')' stmt  */
#line 427 "sintatico.y"
                                                                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3137 "sintatico.tab.c"
    break;

  case 35: /* assignment_or_null: assignment  */
#line 437 "sintatico.y"
             { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3143 "sintatico.tab.c"
    break;

  case 36: /* assignment_or_null: %empty  */
#line 438 "sintatico.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore(1, 1, "empty", 4);
  }
#line 3153 "sintatico.tab.c"
    break;

  case 37: /* exp_or_null: exp  */
#line 445 "sintatico.y"
      { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3159 "sintatico.tab.c"
    break;

  case 38: /* exp_or_null: %empty  */
#line 446 "sintatico.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore(1, 1, "empty", 4);
  }
#line 3169 "sintatico.tab.c"
    break;

  case 39: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 453 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    snprintf(codigoTac, 1100, "end_if_%d", ifIdx);
    (yyval.nodo)->tac = criarTac(codigoTac, NULL, NULL, NULL, -2);
    if((yyvsp[-2].nodo)->tac) {
      (yyvsp[-2].nodo)->tac2 = criarTac("brz", (yyvsp[-2].nodo)->tac->res, NULL, codigoTac, 2);
    }
    ifIdx++;
  }
#line 3187 "sintatico.tab.c"
    break;

  case 40: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 466 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    NodoArvore* n = (yyvsp[-4].nodo);

    while(n->proximo) n = n->proximo;
    n->proximo = (yyvsp[-2].nodo);
    n = (yyvsp[-2].nodo);
    while(n->proximo) n = n->proximo;
    n->proximo = (yyvsp[0].nodo);

    snprintf(codigoTac, 1100, "end_if_else_%d", ifIdx);
    (yyval.nodo)->tac = criarTac(codigoTac, NULL, NULL, NULL, -2);
    if((yyvsp[-4].nodo)->tac) {
      snprintf(codigoTac, 1100, "end_if_%d", ifIdx);
      (yyvsp[-4].nodo)->tac2 = criarTac("brz", (yyvsp[-4].nodo)->tac->res, NULL, codigoTac, 2);
    }
    n = (yyvsp[-2].nodo);
    while(n->proximo != (yyvsp[0].nodo)) n = n->proximo;
    if(n->tac){
      snprintf(codigoTac, 1100, "end_if_else_%d\nend_if_%d:", ifIdx, ifIdx);
      n->tac2 = criarTac("jump", codigoTac, NULL, NULL, 1);
    }
    else{
      n->tac = criarTac(NULL, NULL, NULL, NULL, -1);
      snprintf(codigoTac, 1100, "end_if_else_%d\nend_if_%d:", ifIdx, ifIdx);
      n->tac2 = criarTac("jump", codigoTac, NULL, NULL, 1);
    }
    ifIdx++;
  }
#line 3223 "sintatico.tab.c"
    break;

  case 41: /* return_stmt: RETURN exp ';'  */
#line 499 "sintatico.y"
                 {
    (yyval.nodo) = retornaNodo();
    int check = checkTipoRetorno(indiceTabela);
    if(!(~check)) {

    } else {
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
      forcaCast((yyval.nodo)->tipo, (yyvsp[-1].nodo), &errosSemanticos, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna);

      if(!errosSemanticos){

        char* aux;
        if(strcmp(tabelaSimbolos[check].corpo, "main") == 0) {
          (yyval.nodo)->tac = criarTac("jump", "END", NULL, NULL, 1);
        }
        else if((yyvsp[-1].nodo)->cast) {
          aux = strdup(getFreeRegTemp());
          (yyval.nodo)->tac = criarTac("return", aux, NULL, NULL, 1);
          if(strcmp((yyvsp[-1].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[-1].nodo)->tac->res, NULL, aux, 2);
          if(strcmp((yyvsp[-1].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[-1].nodo)->tac->res, NULL, aux, 2);
          free(aux);
        } 
        else {
          (yyval.nodo)->tac = criarTac("return", (yyvsp[-1].nodo)->tac->res, NULL, NULL, 1);
        }
      }
    }


    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3260 "sintatico.tab.c"
    break;

  case 42: /* set_stmt: FORALL '(' ID INFIX_OP or_exp ')' stmt  */
#line 533 "sintatico.y"
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
#line 3282 "sintatico.tab.c"
    break;

  case 43: /* exp_stmt: exp ';'  */
#line 552 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3292 "sintatico.tab.c"
    break;

  case 44: /* assignment: ID '=' exp  */
#line 559 "sintatico.y"
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
      if(!errosSemanticos){

        char* aux;
        if((yyvsp[0].nodo)->cast) {
          aux = strdup(getFreeRegTemp());
          (yyval.nodo)->tac = criarTac("mov", aux, NULL, variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), 2);
          if(strcmp((yyvsp[0].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
          if(strcmp((yyvsp[0].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
          free(aux);
        } 
        else {
          (yyval.nodo)->tac = criarTac("mov", (yyvsp[0].nodo)->tac->res, NULL, variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), 2);
        }
      }
    }

    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3328 "sintatico.tab.c"
    break;

  case 45: /* exp: or_exp  */
#line 592 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3336 "sintatico.tab.c"
    break;

  case 46: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 597 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3348 "sintatico.tab.c"
    break;

  case 47: /* set_exp: SET_OP2 '(' set_aux_exp ')'  */
#line 604 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("ELEM");

  }
#line 3361 "sintatico.tab.c"
    break;

  case 48: /* set_aux_exp: ID INFIX_OP or_exp  */
#line 614 "sintatico.y"
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
#line 3382 "sintatico.tab.c"
    break;

  case 49: /* set_in_exp: or_exp INFIX_OP unary_exp  */
#line 632 "sintatico.y"
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
#line 3400 "sintatico.tab.c"
    break;

  case 50: /* or_exp: or_exp OR and_exp  */
#line 647 "sintatico.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if((yyvsp[-2].nodo)->tipo){
      fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
      (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);

      if(!errosSemanticos) {
        char* aux;
        if((yyvsp[-2].nodo)->cast) {
          aux = strdup(getFreeRegTemp());
          (yyval.nodo)->tac = criarTac("or", aux, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
          if(strcmp((yyvsp[-2].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
          if(strcmp((yyvsp[-2].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
          free(aux);
        }
        else if((yyvsp[0].nodo)->cast){
          aux = strdup(getFreeRegTemp());
          (yyval.nodo)->tac = criarTac("or", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
          if(strcmp((yyvsp[0].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
          if(strcmp((yyvsp[0].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
          free(aux);
        } 
        else {
          (yyval.nodo)->tac = criarTac("or", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
        }
      }
    } 
  }
#line 3438 "sintatico.tab.c"
    break;

  case 51: /* or_exp: and_exp  */
#line 680 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3446 "sintatico.tab.c"
    break;

  case 52: /* or_exp: set_in_exp  */
#line 683 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3454 "sintatico.tab.c"
    break;

  case 53: /* and_exp: and_exp AND relational_exp  */
#line 688 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if((yyvsp[-2].nodo)->tipo) {
      fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
      (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);

      if(!errosSemanticos) {
        char* aux;
        if((yyvsp[-2].nodo)->cast) {
          aux = strdup(getFreeRegTemp());
          (yyval.nodo)->tac = criarTac("or", aux, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
          if(strcmp((yyvsp[-2].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
          if(strcmp((yyvsp[-2].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
          free(aux);
        }
        else if((yyvsp[0].nodo)->cast){
          aux = strdup(getFreeRegTemp());
          (yyval.nodo)->tac = criarTac("or", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
          if(strcmp((yyvsp[0].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
          if(strcmp((yyvsp[0].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
          free(aux);
        } 
        else {
          (yyval.nodo)->tac = criarTac("and", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
        }
      }
    
    }
  }
#line 3493 "sintatico.tab.c"
    break;

  case 54: /* and_exp: relational_exp  */
#line 722 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3501 "sintatico.tab.c"
    break;

  case 55: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 727 "sintatico.y"
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
      if((yyvsp[-2].nodo)->tipo) {
        (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);

        if(!errosSemanticos) {
          char* aux;
          if((yyvsp[-2].nodo)->cast) {
            aux = strdup(getFreeRegTemp());
            if(strcmp((yyvsp[-1].lexema).corpo, "!=") == 0) {
              char* aux2;
              aux2 = strdup(getFreeRegTemp());
              (yyval.nodo)->tac = criarTac("seq", aux, (yyvsp[0].nodo)->tac->res, aux2, 3);
              sprintf(codigoTac, "not %s, %s", aux2, aux2);
              (yyval.nodo)->tac->instrucao = strdup(codigoTac);
              free(aux2);
            } 
            if(strcmp((yyvsp[-1].lexema).corpo, "==") == 0) (yyval.nodo)->tac = criarTac("seq", aux, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "<") == 0) (yyval.nodo)->tac = criarTac("slt", aux, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "<=") == 0) (yyval.nodo)->tac = criarTac("sleq", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, ">") == 0) (yyval.nodo)->tac = criarTac("sleq", aux, (yyvsp[-2].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, ">=") == 0) (yyval.nodo)->tac = criarTac("sleq", aux, (yyvsp[-2].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-2].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
            if(strcmp((yyvsp[-2].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
            free(aux);
          }
          else if((yyvsp[0].nodo)->cast){
            aux = strdup(getFreeRegTemp());
            if(strcmp((yyvsp[-1].lexema).corpo, "!=") == 0){
              char* aux2;
              aux2 = strdup(getFreeRegTemp());
              (yyval.nodo)->tac = criarTac("seq", (yyvsp[-2].nodo)->tac->res, aux, aux2, 3);
              sprintf(codigoTac, "not %s, %s", aux2, aux2);
              (yyval.nodo)->tac->instrucao = strdup(codigoTac);
              free(aux2);
            }
            if(strcmp((yyvsp[-1].lexema).corpo, "==") == 0) (yyval.nodo)->tac = criarTac("seq", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "<") == 0) (yyval.nodo)->tac = criarTac("slt", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "<=") == 0) (yyval.nodo)->tac = criarTac("sleq", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, ">") == 0) (yyval.nodo)->tac = criarTac("slt", aux, (yyvsp[-2].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, ">=") == 0) (yyval.nodo)->tac = criarTac("sleq", aux, (yyvsp[-2].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[0].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
            if(strcmp((yyvsp[0].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
            free(aux);
          } 
          else {
            if(strcmp((yyvsp[-1].lexema).corpo, "!=") == 0) {
              char* aux2;
              aux2 = strdup(getFreeRegTemp());
              (yyval.nodo)->tac = criarTac("seq", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, aux2, 3);
              sprintf(codigoTac, "not %s, %s", aux2, aux2);
              (yyval.nodo)->tac->instrucao = strdup(codigoTac);
              free(aux2);
            } 
            if(strcmp((yyvsp[-1].lexema).corpo, "==") == 0) (yyval.nodo)->tac = criarTac("seq", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "<") == 0) (yyval.nodo)->tac = criarTac("slt", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "<=") == 0) (yyval.nodo)->tac = criarTac("sleq", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, ">") == 0) (yyval.nodo)->tac = criarTac("slt", (yyvsp[0].nodo)->tac->res, (yyvsp[-2].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, ">=") == 0) (yyval.nodo)->tac = criarTac("sleq", (yyvsp[0].nodo)->tac->res, (yyvsp[-2].nodo)->tac->res, getFreeRegTemp(), 3);
          }
        }
      }
    }
  }
#line 3581 "sintatico.tab.c"
    break;

  case 56: /* relational_exp: sum_exp  */
#line 802 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3589 "sintatico.tab.c"
    break;

  case 57: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 807 "sintatico.y"
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
      if((yyvsp[-2].nodo)->tipo) {
        (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);

        if(!errosSemanticos) {
          char* aux;
          if((yyvsp[-2].nodo)->cast) {
            aux = strdup(getFreeRegTemp());
            if(strcmp((yyvsp[-1].lexema).corpo, "+") == 0) (yyval.nodo)->tac = criarTac("add", aux, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "-") == 0) (yyval.nodo)->tac = criarTac("sub", aux, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-2].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
            if(strcmp((yyvsp[-2].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
            free(aux);
          }
          else if((yyvsp[0].nodo)->cast){
            aux = strdup(getFreeRegTemp());
            if(strcmp((yyvsp[-1].lexema).corpo, "+") == 0) (yyval.nodo)->tac = criarTac("add", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "-") == 0) (yyval.nodo)->tac = criarTac("sub", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[0].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
            if(strcmp((yyvsp[0].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
            free(aux);
          } 
          else {
            if(strcmp((yyvsp[-1].lexema).corpo, "+") == 0) (yyval.nodo)->tac = criarTac("add", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "-") == 0) (yyval.nodo)->tac = criarTac("sub", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
          }
        }
      }
    }

  }
#line 3637 "sintatico.tab.c"
    break;

  case 58: /* sum_exp: mul_exp  */
#line 850 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3645 "sintatico.tab.c"
    break;

  case 59: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 855 "sintatico.y"
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
      if((yyvsp[-2].nodo)->tipo){
        (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);

        if(!errosSemanticos) {
          char* aux;
          if((yyvsp[-2].nodo)->cast) {
            aux = strdup(getFreeRegTemp());
            if(strcmp((yyvsp[-1].lexema).corpo, "*") == 0) (yyval.nodo)->tac = criarTac("mul", aux, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "/") == 0) (yyval.nodo)->tac = criarTac("div", aux, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-2].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
            if(strcmp((yyvsp[-2].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[-2].nodo)->tac->res, NULL, aux, 2);
            free(aux);
          }
          else if((yyvsp[0].nodo)->cast){
            aux = strdup(getFreeRegTemp());
            if(strcmp((yyvsp[-1].lexema).corpo, "*") == 0) (yyval.nodo)->tac = criarTac("mul", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "/") == 0) (yyval.nodo)->tac = criarTac("div", (yyvsp[-2].nodo)->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[0].nodo)->cast, "int2float") == 0) (yyval.nodo)->tac->cast = criarTac("inttofl", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
            if(strcmp((yyvsp[0].nodo)->cast, "float2int") == 0) (yyval.nodo)->tac->cast = criarTac("fltoint", (yyvsp[0].nodo)->tac->res, NULL, aux, 2);
            free(aux);
          } 
          else {
            if(strcmp((yyvsp[-1].lexema).corpo, "*") == 0) (yyval.nodo)->tac = criarTac("mul", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
            if(strcmp((yyvsp[-1].lexema).corpo, "/") == 0) (yyval.nodo)->tac = criarTac("div", (yyvsp[-2].nodo)->tac->res, (yyvsp[0].nodo)->tac->res, getFreeRegTemp(), 3);
          }
        }
      } 
    }

  }
#line 3693 "sintatico.tab.c"
    break;

  case 60: /* mul_exp: unary_exp  */
#line 898 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3701 "sintatico.tab.c"
    break;

  case 61: /* unary_exp: primal_exp  */
#line 903 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3709 "sintatico.tab.c"
    break;

  case 62: /* unary_exp: '!' primal_exp  */
#line 906 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->tipo = strdup((yyvsp[0].nodo)->tipo);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    if(!errosSemanticos) (yyval.nodo)->tac = criarTac("not", (yyvsp[0].nodo)->tac->res, NULL, getFreeRegTemp(), 2);
  }
#line 3722 "sintatico.tab.c"
    break;

  case 63: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 914 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->tipo = strdup((yyvsp[0].nodo)->tipo);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    if(!errosSemanticos) {
      if(strcmp((yyvsp[-1].lexema).corpo, "-") == 0) (yyval.nodo)->tac = criarTac("minus", (yyvsp[0].nodo)->tac->res, NULL, getFreeRegTemp(), 2);
    } 
  }
#line 3737 "sintatico.tab.c"
    break;

  case 64: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 924 "sintatico.y"
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
#line 3762 "sintatico.tab.c"
    break;

  case 65: /* $@4: %empty  */
#line 944 "sintatico.y"
                         {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

  }
#line 3774 "sintatico.tab.c"
    break;

  case 66: /* unary_exp: ARITMETIC_OP1 ID '(' $@4 arg_list ')'  */
#line 950 "sintatico.y"
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
#line 3801 "sintatico.tab.c"
    break;

  case 67: /* $@5: %empty  */
#line 972 "sintatico.y"
           {
      indiceArg = 0;
      strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
      prevFuncao.linha = (yyvsp[-1].lexema).linha;
      prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

    }
#line 3813 "sintatico.tab.c"
    break;

  case 68: /* unary_exp: ID '(' $@5 arg_list ')'  */
#line 978 "sintatico.y"
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
#line 3839 "sintatico.tab.c"
    break;

  case 69: /* unary_exp: ID '(' ')'  */
#line 999 "sintatico.y"
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
#line 3865 "sintatico.tab.c"
    break;

  case 70: /* $@6: %empty  */
#line 1020 "sintatico.y"
               {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;
  }
#line 3876 "sintatico.tab.c"
    break;

  case 71: /* unary_exp: '!' ID '(' $@6 arg_list ')'  */
#line 1025 "sintatico.y"
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
#line 3903 "sintatico.tab.c"
    break;

  case 72: /* unary_exp: '!' ID '(' ')'  */
#line 1047 "sintatico.y"
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
#line 3929 "sintatico.tab.c"
    break;

  case 73: /* unary_exp: ISSET '(' ID ')'  */
#line 1068 "sintatico.y"
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
#line 3949 "sintatico.tab.c"
    break;

  case 74: /* unary_exp: ISSET '(' set_exp ')'  */
#line 1083 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3960 "sintatico.tab.c"
    break;

  case 75: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 1089 "sintatico.y"
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
#line 3980 "sintatico.tab.c"
    break;

  case 76: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 1104 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3991 "sintatico.tab.c"
    break;

  case 77: /* primal_exp: ID  */
#line 1114 "sintatico.y"
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
#line 4013 "sintatico.tab.c"
    break;

  case 78: /* primal_exp: const  */
#line 1131 "sintatico.y"
          {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 4021 "sintatico.tab.c"
    break;

  case 79: /* primal_exp: '(' exp ')'  */
#line 1134 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 4029 "sintatico.tab.c"
    break;

  case 80: /* primal_exp: set_exp  */
#line 1137 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 4037 "sintatico.tab.c"
    break;

  case 81: /* arg_list: exp ',' arg_list  */
#line 1142 "sintatico.y"
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
#line 4058 "sintatico.tab.c"
    break;

  case 82: /* arg_list: exp  */
#line 1158 "sintatico.y"
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
#line 4079 "sintatico.tab.c"
    break;

  case 83: /* type: INT_TYPE  */
#line 1176 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 4091 "sintatico.tab.c"
    break;

  case 84: /* type: FLOAT_TYPE  */
#line 1183 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 4103 "sintatico.tab.c"
    break;

  case 85: /* type: SET_TYPE  */
#line 1190 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 4115 "sintatico.tab.c"
    break;

  case 86: /* type: ELEM_TYPE  */
#line 1197 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 4127 "sintatico.tab.c"
    break;

  case 87: /* const: INTEGER  */
#line 1206 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("INT");

    (yyval.nodo)->tac = criarTac(NULL, NULL, NULL, (yyvsp[0].lexema).corpo, -1);
  }
#line 4140 "sintatico.tab.c"
    break;

  case 88: /* const: FLOAT  */
#line 1214 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("FLOAT");

    (yyval.nodo)->tac = criarTac(NULL, NULL, NULL, (yyvsp[0].lexema).corpo, -1);
  }
#line 4153 "sintatico.tab.c"
    break;

  case 89: /* const: EMPTY  */
#line 1222 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("SET");

    (yyval.nodo)->tac = criarTac(NULL, NULL, NULL, (yyvsp[0].lexema).corpo, -1);
  }
#line 4166 "sintatico.tab.c"
    break;


#line 4170 "sintatico.tab.c"

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

#line 1231 "sintatico.y"


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
    if(erros == 0) {
      freeArvore(raiz);
    }

    fclose(yyin);
    yylex_destroy();
    return 0;
}

