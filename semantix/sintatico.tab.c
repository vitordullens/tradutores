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

  Simbolo prevFuncao;

  NodoArvore* raiz;

  int erros = 0;
  int errosSemanticos = 0;

#line 107 "sintatico.tab.c"

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
#define YYLAST   4988

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  607

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
       0,   105,   105,   113,   119,   124,   127,   130,   133,   157,
     157,   190,   190,   220,   250,   281,   281,   293,   298,   301,
     307,   312,   315,   318,   321,   324,   327,   330,   333,   336,
     341,   356,   361,   368,   378,   384,   393,   409,   428,   435,
     454,   459,   466,   476,   494,   509,   518,   521,   526,   535,
     540,   556,   561,   578,   583,   600,   605,   608,   612,   616,
     636,   636,   664,   664,   691,   712,   712,   739,   760,   775,
     781,   796,   806,   822,   825,   828,   833,   849,   867,   874,
     881,   888,   897,   903,   909
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

#define YYPACT_NINF (-344)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2442,  4796,    15,    18,    28,    34,    43,  4825,  4854,  4883,
    4912,    45,  -344,  4931,   -17,  4941,    93,   753,    27,    39,
      72,     9,     9,    14,  4949,  2288,  4957,  4965,   753,  4973,
    3984,    47,  1255,   317,    48,    55,    57,    58,  2234,  4490,
    4498,    61,    70,   680,    71,    73,   126,   766,  3144,  3179,
      75,  3214,  3249,  3284,  3319,  3354,  3389,  3424,    94,    95,
    4520,    51,   298,   310,  1808,  2357,  4525,  4530,  4552,   133,
    4557,   680,   102,  1450,  4562,  1053,   144,   145,   198,   766,
     157,  1632,   104,   165,    98,  2229,   116,  4584,   154,  4981,
     153,  3459,  3494,   680,  1672,   680,   680,   680,   680,   168,
     178,  4589,  1709,   163,    40,    12,   166,   162,   189,   190,
     206,   214,   218,   221,  3529,   227,   225,   228,   381,   338,
    4594,   361,   716,  1875,  4123,  4616,  4621,    33,   249,  4626,
    1709,  4648,   766,  4653,   237,   253,   270,  4017,   680,   766,
    4658,  4680,  4685,  1709,   272,   275,  1709,  4690,   282,   257,
    3564,  3599,  3634,   341,   287,   395,   285,  4712,  4717,   297,
    4722,  3984,   316,  3984,  4744,  3669,   308,  3704,  3984,  3739,
    3774,  3809,  1847,   758,   327,   331,  2327,  4262,  4270,   337,
     234,   766,  4281,   522,   535,   188,   229,   695,  4289,  4300,
    4308,  4319,  1101,   942,   344,   352,  2061,  2370,  2451,   353,
     295,   766,  2458,   130,   869,  2322,  2584,  2665,  2672,  4749,
     355,   358,   146,   975,   367,   377,   814,   932,  1003,   383,
     421,   766,  1018,  1078,  1163,  3844,   370,  1045,   385,   389,
     548,  1286,  1359,   390,   594,   766,  1406,    21,   119,   232,
     193,   432,  1590,  1724,  1937,  2056,  1053,  1889,  1125,   393,
     399,   404,   413,   680,   414,  3879,  1322,  2187,  2401,  2475,
    2512,  2547,  2601,  2636,   430,   433,   447,   766,   434,  3914,
    3984,   721,  4243,  4327,  1053,   144,   478,  4251,   437,  4338,
     431,   766,   766,   766,   766,   801,  2067,  4754,  1053,   144,
     487,  2239,   456,  4773,   462,  1053,  1053,  1053,  1053,  1053,
     144,   843,   268,  1246,  1053,   144,   527,   506,   470,  1374,
     475,   893,   876,  2110,  1053,   144,   574,  1162,   484,  2151,
     490,  1709,  2570,  1709,  1709,  1709,  1709,   280,    -6,  1194,
     495,   504,   592,   663,   711,   511,   620,   766,   761,   813,
     815,   840,   463,   654,   766,   157,   524,   562,  2689,  3984,
    2724,  2759,   539,   587,   766,   536,  4346,  1709,  1008,   937,
     537,   546,   553,  1088,   629,  4357,   461,  1602,  4365,  4376,
    4778,  1709,  1148,   970,   557,   564,   568,  1345,   633,  4783,
    1925,  2377,  4802,  4807,  1048,   578,  1382,  1709,  1492,  1167,
     588,   607,   609,  1524,   799,  1418,  4053,  1709,  1560,  1230,
     626,   627,   628,  1967,   880,  4066,   419,    81,  1202,   593,
     636,   540,   589,   618,   643,   914,   766,   619,   720,   756,
     842,   264,   812,  4085,  4096,  2014,   141,  1245,  1053,   144,
     916,   201,   652,  1319,   658,   659,   660,   677,   682,   632,
    2794,   675,   683,  2829,   690,  3949,   698,  4384,  1709,  4395,
    4403,  4414,  4422,  4433,  1709,   701,   718,   723,  4812,  1709,
    4831,  4836,  4841,  4860,  4865,  1709,   738,   745,   749,   757,
     763,  1465,  1709,  1538,  1655,  1814,  1821,  1852,  1709,   768,
     771,   773,  4104,  1709,  4115,  4134,  4145,  4153,  4164,  1709,
     779,   784,  2081,   152,   888,  1053,   144,  1086,   476,   752,
     958,   785,  1378,  1709,  2253,  1407,   796,   803,   804,  2343,
    1122,  1442,   824,   826,   829,  4017,   680,   766,  2864,  4441,
     827,   832,  4452,  4460,  4870,   833,   835,  4889,  4894,  1870,
     859,   860,  1898,  1938,  4183,   871,   873,  4194,  4202,   988,
    1709,  2424,  1443,   886,   901,   903,  4040,  1591,  1007,   905,
    1454,  1709,  1491,  1502,  1521,  1533,  1563,  1709,   906,   908,
    2899,  2934,  2969,  3004,   912,  1595,  4471,  4479,  4899,  4918,
    1950,  1965,  4213,  4232,   922,  1043,  1709,  1275,  1277,  1472,
    1503,  1504,  1709,   939,   944,  1650,   945,   947,  1684,  1747,
    4017,   316,  4017,  1550,   948,   949,  1624,  1683,  1773,  1777,
    3039,   953,  3074,  1736,  1745,  4017,  3109
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -344,  -344,  -344,   941,     1,  -344,  -344,  -344,   918,   -19,
    -166,   -47,  -107,  -123,   -95,   -79,   -63,   -59,   -41,   -67,
    1753,   -11,  -266,  1882,  2096,  1737,  1540,  1350,  1153,   956,
    -343,  -260,  -301,   382,  1266,     0,   669
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,    48,    10,    17,    18,    19,    49,
      30,    50,    51,    52,    53,    54,    55,    56,    57,    58,
     127,   236,   107,   237,   238,   239,   240,   241,   242,   243,
     130,   102,   143,   244,   128,    69,   245
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,     9,    26,    27,    90,   270,   -72,    11,     9,   360,
      24,   357,    15,   113,   258,   448,    16,    20,   -79,    60,
     -72,   -78,    60,   374,   246,   371,   -72,   425,    20,   459,
     153,   -80,    60,   -47,   385,    60,   182,   -81,   247,   390,
      60,   387,   259,    12,    25,   472,   -14,   -47,    14,   400,
      28,   397,   -47,   -47,   165,   483,   167,   -47,   260,    21,
      60,   169,   454,   -47,   202,   -77,   -47,   182,   182,   146,
     264,    22,   131,   117,   261,    23,   465,   -47,   262,   -13,
     -47,    75,    60,   222,    60,    60,    60,    60,    76,   349,
      77,    78,   478,   -72,    79,   166,   263,    -9,    -9,    -9,
      -9,   116,   489,    80,    83,   -62,    84,   -72,   145,    89,
     -62,   210,   211,   -72,   492,   -62,   -62,   -72,   257,   -62,
     -62,   182,   -62,    91,    92,   -11,    60,    60,   182,    85,
     -62,   321,   -62,   114,   101,   -62,    99,   266,   256,    34,
      35,   295,   -46,    38,    39,   322,    40,   106,   108,   119,
      60,   -40,    60,   -72,    86,   -40,   -46,    60,   -72,    47,
     112,   551,   182,   506,   -72,   503,   -60,   -72,   115,   182,
     182,   -60,   -72,   -72,   504,   -72,   -60,   -60,   -72,   301,
     -60,   -60,   202,   -60,   -72,   541,   120,   -19,   -72,   202,
     182,   -60,   132,   -60,   133,   129,   -60,   225,   576,   281,
     -46,   172,   222,   324,   -49,   -49,   173,   -39,   557,   222,
     182,   174,   175,   -72,   -46,   176,   177,   109,   178,   -49,
     -46,   134,   135,   355,   182,   -49,   179,   -72,   180,   -49,
     543,   181,   540,   -72,   509,   202,   338,   277,   136,   282,
     -49,   -49,    60,   323,   -46,   582,   137,   174,   175,    71,
     138,   176,   177,   139,   178,   -49,   182,   140,   -46,    60,
     141,   -49,   278,   202,   -46,   362,   150,   181,   -46,   267,
     182,   182,   182,   182,   324,   -48,   -48,   202,   439,   376,
     -72,   147,   151,   247,   202,   202,   202,   202,   202,   -43,
     -48,   295,   -45,   202,   -72,   392,   -48,   -72,   291,   152,
     -48,   388,   442,   202,   157,   402,   -45,   158,   194,   195,
      93,   417,   196,   197,   160,   198,   162,   164,   338,   268,
      73,    95,   -46,   292,    94,   338,   182,   -40,   201,   -76,
      34,    35,   182,   182,    38,    39,   -46,    40,    60,   -46,
     168,   144,   -34,   182,   -34,   -34,   -34,   -34,   -34,   -34,
      47,   210,   211,   456,   -34,   -34,   -34,   -34,   -34,   -34,
     274,   -34,   -34,   161,   275,   -34,   -34,   467,   -34,   -34,
     276,   -34,    95,   -45,   -34,   -34,   -34,   288,   -72,   -72,
     -72,   -72,   -72,   480,   -65,   289,   290,   -45,   299,   -65,
     -45,   300,   258,   491,   -65,   -65,   -72,   417,   -65,   -65,
     304,   -65,   -72,   311,   417,   182,   -72,   267,   563,   -65,
     305,   -65,    68,   142,   -65,    74,   306,   202,   314,   508,
     259,   247,   315,   316,   307,    68,   342,   163,    87,   190,
     323,   -45,   343,    68,   214,   215,   260,   344,   216,   217,
     325,   218,   -51,   -51,   -51,   -45,   345,   347,   264,   308,
     352,   -45,   261,    68,   221,   -45,   262,   208,   -51,   350,
     190,   190,   351,   365,   -51,   354,   435,   258,   -51,   258,
     364,   282,   -48,   -48,   263,    68,   223,    68,    68,    68,
      68,   361,   258,   600,   202,   602,   545,   -48,   -72,   378,
     375,   210,   211,   -48,   379,   259,   257,   259,   606,   559,
     210,   211,   -72,   394,    60,    60,   182,   395,   -72,   546,
     259,   260,   -72,   260,   190,   266,   256,   404,   -72,    68,
      68,   190,   405,   264,   601,   264,   260,   261,   428,   261,
     391,   262,   -72,   262,   -47,   -72,   584,   429,   264,   393,
     210,   211,   261,    68,   430,    68,   262,   267,   -47,   263,
      68,   263,   -82,   440,   -47,   273,   -82,   -82,   -82,   -82,
     -82,   247,   279,   190,   263,   441,   -82,   -40,   443,   450,
     445,   257,   -82,   257,   -82,   287,   -82,   401,   451,    60,
     -82,    60,   293,   190,   -82,   452,   257,   210,   211,   461,
     266,   256,   266,   256,    60,   303,   462,   317,   281,   -45,
     463,   -83,   309,   190,   -82,   266,   256,   228,   229,   313,
     469,   230,   231,   -45,   232,   -83,   319,   190,   -82,   -45,
     474,   -83,   318,   431,   -82,   -83,   495,   235,   208,   340,
     -84,   -75,   455,   330,   331,    68,   466,   332,   333,   475,
     334,   476,   210,   211,   -84,   -75,   210,   211,   432,   190,
     -84,   -75,    68,   337,   -84,   -75,   208,   172,   485,   486,
     487,   516,   173,   190,   190,   190,   190,   174,   175,   496,
     208,   176,   177,   436,   178,   -83,   497,   208,   208,   208,
     208,   208,   179,    81,   180,   510,   208,   181,    33,   -83,
     511,   512,   513,    34,    35,   -83,   208,    38,    39,    70,
      40,   517,    70,   283,   419,   -51,   -51,   -51,    45,   514,
      46,   427,    70,    47,   515,    70,   191,   518,   433,   190,
      70,   -51,   -39,   -84,   -62,   190,   190,   -51,   -44,   -62,
     519,    68,   -44,   522,   -62,   -62,   190,   -84,   -62,   -62,
      70,   -62,   -44,   -84,   209,   -44,   -44,   191,   191,   -62,
     523,   -62,   -44,   356,   -62,   524,   -44,     2,     3,     4,
       5,   272,    70,   224,    70,    70,    70,    70,   -56,   172,
     527,   174,   175,   -75,   173,   176,   177,   528,   178,   174,
     175,   -41,   -56,   176,   177,   547,   178,   -75,   -56,   -42,
     494,   181,   -56,   -75,   179,   529,   180,   500,   190,   181,
     532,   191,   479,   533,   -62,   534,    70,    70,   191,   -62,
     208,   537,   210,   211,   -62,   -62,   538,   548,   -62,   -62,
     325,   -62,   -50,   -50,   -50,   -44,   -82,   -56,   553,   -62,
      70,   -62,    70,   370,   -62,   554,   555,    70,   -50,   -44,
     -82,   -56,   191,   -82,   -50,   -44,   -62,   -56,   -50,   191,
     191,   -62,   -73,   560,   -73,   561,   -62,   -62,   562,   566,
     -62,   -62,   209,   -62,   567,   568,   -73,   569,   -73,   209,
     191,   -62,   -73,   -62,   -73,   386,   -62,   208,   -73,   296,
     -49,   -49,   224,   490,   -72,   -72,   -72,   -72,   -72,   224,
     191,   570,   571,   210,   211,   -49,   -62,    68,    68,   190,
     -58,   -62,   -72,   572,   191,   573,   -62,   -62,   -72,   398,
     -62,   -62,   -72,   -62,   -58,   209,   341,   498,   578,   507,
     -58,   -62,    70,   -62,   -58,   396,   -62,   409,   410,   210,
     211,   411,   412,   579,   413,   580,   191,   585,   588,    70,
     589,   591,   499,   209,   -83,   286,    31,   416,    13,   -47,
     191,   191,   191,   191,   593,   194,   195,   209,   -83,   196,
     197,   -83,   198,   -47,   209,   209,   209,   209,   209,   449,
     -57,   596,    68,   209,    68,   201,   597,   598,   302,   599,
     603,   604,   -47,   209,   -57,   605,    67,    68,   214,   215,
     -57,   420,   216,   217,   -57,   218,   -47,     0,   341,    67,
     -64,     0,   460,   189,     0,   341,   191,    67,   221,     0,
       0,   -60,   191,   191,   -64,   -84,   -60,     0,    70,   -74,
     -64,   -60,   -60,   191,   -64,   -60,   -60,    67,   -60,   -84,
     -75,   207,   -84,   -74,   189,   189,   -60,     0,   -60,   -74,
     447,   -60,     0,   -74,   -75,     0,     0,   -75,   312,    67,
     122,    67,    67,    67,   126,   -59,   192,     0,   228,   229,
     -47,   193,   230,   231,     0,   232,   194,   195,     0,   -59,
     196,   197,     0,   198,   -47,   -59,     0,   420,   235,   -59,
     468,   199,     0,   200,   420,   191,   201,     0,   189,   544,
     -56,   -65,     0,    67,    67,   189,   -65,   209,     0,   210,
     211,   -65,   -65,     0,   -56,   -65,   -65,   -56,   -65,   -72,
     -72,   -72,   -72,   -72,     0,     0,   -65,    67,   -65,    67,
     453,   -65,     0,     0,    67,   558,   -18,   -72,   -18,   -18,
     -18,   -18,   -18,   -18,   285,   210,   211,   189,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,     0,   -18,
     -18,   -60,   -18,   -18,     0,   -18,   -60,   189,   -18,   -18,
     -18,   -60,   -60,     0,   209,   -60,   -60,     0,   -60,     0,
     -72,   -72,   -72,   -72,   -72,   -73,   -60,   189,   -60,   -47,
     458,   -60,     0,    66,    70,    70,   191,     0,   -72,   -73,
       0,   189,   -73,   -47,   -72,   403,    66,   426,   -72,   473,
     188,     0,   207,   339,    66,   493,     0,   330,   331,    67,
       0,   332,   333,     0,   334,   409,   410,     0,     0,   411,
     412,     0,   413,   189,    66,     0,    67,   337,   206,     0,
     207,   188,   188,     0,     0,   416,     0,   189,   189,   189,
     369,     0,   -47,     0,   207,     0,    66,     0,    66,    66,
     125,   207,   207,   207,   383,   207,   -47,   -58,   -58,    70,
     207,    70,   484,   -72,   -72,   -72,   -72,   -72,     0,     0,
     207,   -58,   -58,     0,    70,   -58,     0,   -58,   418,     0,
       0,   -72,   424,     0,   -72,   188,    71,   -41,    72,   -42,
      66,    66,   188,   189,   -83,   -83,   -83,   -83,   -83,   189,
     189,   -41,     0,   -42,     0,    67,     0,   -41,     0,   -42,
     189,   -41,   -83,   -42,    66,     0,    66,     0,   -83,     0,
       0,    66,   -83,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -57,     0,     0,   188,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -57,   -27,   -27,   -65,   -27,
     -27,   -57,   -27,   -65,   188,   -27,   -27,   -27,   -65,   -65,
       0,     0,   -65,   -65,     0,   -65,     0,   -84,   -84,   -84,
     -84,   -84,   189,   -65,   188,   -65,     0,   464,   -65,     0,
      65,     0,     0,     0,   207,   -84,   -57,     0,   188,     0,
     -64,   -84,     0,    65,   -64,   -84,   148,   187,     0,   206,
     -57,    65,     0,   -57,   -64,     0,    66,     0,   -64,   156,
     -64,   -64,   159,     0,   -75,   -75,   -75,   -75,   -75,   -47,
     188,    65,     0,    66,     0,   205,     0,   206,   187,   187,
     -74,     0,   -75,   -47,   188,   188,   368,     0,   -75,   552,
       0,   206,   -75,    65,   -74,    65,   124,   -74,   206,   206,
     382,   207,   206,     0,   -74,   -47,     0,   206,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,   -59,   206,   -74,   -47,
       0,    67,    67,   189,   -74,   577,   -72,   -59,   423,   -72,
     -59,     0,   187,   103,   -68,     0,   -59,    65,    65,   187,
     188,   -59,     0,     0,   -59,   -60,   188,   188,   -68,     0,
     -60,     0,    66,   -41,   -68,   -60,   -60,   188,   -68,   -60,
     -60,    65,   -60,    65,   -42,   -69,   -67,   -41,    65,     0,
     -60,     0,   -60,   -41,   471,   -60,     0,   -65,   -42,   -69,
     -67,   187,   -65,   -68,   -42,   -69,   -67,   -65,   -65,   -69,
     -67,   -65,   -65,     0,   -65,   -69,    67,   -68,    67,     0,
     -41,   187,   -65,   -68,   -65,     0,   477,   -65,     0,   -69,
       0,    67,   -63,   -60,   -41,   -69,     0,   -41,   -60,   188,
      64,   187,     0,   -60,   -60,   -67,   -63,   -60,   -60,     0,
     -60,   206,   -63,    64,     0,   187,   -63,   186,   -60,   -67,
     -60,    64,   482,   -60,   583,   -67,   205,     0,   -53,   326,
     -53,   -53,   -53,    65,   210,   211,     0,   267,     0,     0,
     283,    64,   -50,   -50,   -50,   204,   -53,   187,   186,   186,
      65,   247,   -53,   446,   205,     0,   -53,   592,   -50,     0,
       0,   187,   367,    64,   -50,   123,   -70,   457,   205,     0,
     -72,   -72,   -72,   -72,   -72,   205,   381,     0,   206,   205,
     -70,     0,     0,   470,   205,     0,   -70,     0,   -72,     0,
     -70,   -72,   -63,   481,   205,    72,     0,   -42,    66,    66,
     188,     0,   186,     0,   422,   212,   -63,    64,    64,   186,
     213,   -42,   -63,     0,   -42,   214,   215,   187,     0,   216,
     217,     0,   218,   187,   187,   -71,   -70,     0,     0,    65,
     219,    64,   220,    64,   187,   221,     0,     0,    64,   -71,
     -70,     0,   226,     0,   520,   -71,   -70,   227,     0,   -71,
     521,   186,   228,   229,     0,   525,   230,   231,     0,   232,
       0,   526,   -55,   -55,   -55,   -55,   -55,   233,   530,   234,
       0,   186,   235,    66,   531,    66,     0,     0,   -61,   535,
     -55,     0,     0,     0,     0,   536,   -55,   -66,    66,   -71,
     -55,   186,   -61,     0,     0,     0,   187,    63,   -61,   549,
       0,   -66,   -61,   -71,     0,   186,     0,   -66,   205,   -71,
      63,   -66,     0,    59,   185,   -61,   204,     0,    63,   -66,
       0,     0,     0,    64,     0,     0,    82,     0,     0,   -61,
      88,     0,     0,   -66,    59,   -61,   574,   186,    63,   -66,
      64,     0,   203,     0,   204,   185,   185,   586,    96,   -49,
     -49,   366,     0,   587,   100,     0,   -68,     0,   204,     0,
     121,   110,   111,   -69,   -49,   380,     0,   -49,     0,   204,
     -68,     0,   594,   -68,   204,   205,     0,   -69,   595,     0,
     -69,     0,     0,     0,   204,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,   421,   -67,    65,    65,   187,     0,   185,
       0,     0,     0,   -72,    63,    63,   185,   186,   -67,   -72,
     271,   -67,   -63,   186,   186,    96,   -48,   -48,     0,    64,
     265,   154,   328,     0,   186,     0,   -63,   329,    63,   -63,
      63,   -48,   330,   331,   -48,    63,   332,   333,     0,   334,
     -70,     0,    61,     0,    59,     0,    59,   335,   185,   336,
       0,    59,   337,     0,   -70,    61,     0,   -70,     0,   183,
       0,     0,     0,    61,   280,   296,   -48,   -48,   185,     0,
      65,     0,    65,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -71,   -48,     0,    61,   294,    65,   186,   104,   185,     0,
     183,   183,   -61,   -56,   -71,     0,     0,   -71,   204,   -56,
     -65,     0,   185,   -56,   310,   -65,   -61,   -66,     0,   -61,
     -65,   -65,     0,   327,   -65,   -65,     0,   -65,   320,     0,
      63,   -66,     0,     0,   -66,   -65,     0,   -65,     0,   488,
     -65,     0,     0,     0,   353,     0,   346,    63,     0,     0,
       0,   203,     0,     0,   183,     0,     0,   -62,     0,    61,
      61,   183,   -62,    59,     0,   203,     0,   -62,   -62,     0,
       0,   -62,   -62,     0,   -62,   204,   203,     0,     0,     0,
       0,   203,   -62,    61,   -62,    61,   502,   -62,     0,     0,
      61,   203,     0,     0,     0,    64,    64,   186,   406,     0,
       0,     0,     0,   183,   -73,   -73,   -73,   -73,   -73,   -82,
     -82,   -82,   -82,   -82,   185,   -72,   -72,   -72,   -72,   -72,
     185,   185,   -73,   183,   -62,     0,    63,   -82,   -73,   -62,
     434,   185,   -73,   -72,   -62,   -62,   437,   438,   -62,   -62,
     372,   -62,    59,   183,     0,     0,     0,   444,     0,   -62,
       0,   -62,     0,   539,   -62,     0,     0,   183,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,    62,     0,     0,     0,
      64,     0,    64,     0,     0,    61,   -58,     0,     0,    62,
       0,     0,   -58,   184,     0,    64,   -58,    62,     0,     0,
       0,     0,    61,   185,     0,     0,   359,     0,     0,   -57,
     -57,   -57,   -57,   -57,     0,   203,     0,    62,     0,   501,
     373,   105,     0,     0,   184,   184,     0,   -57,     0,     0,
       0,   384,     0,   -57,     0,     0,   389,   -57,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,   399,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
       0,   -29,   -29,     0,   -29,   -29,     0,   -29,     0,   183,
     -29,   -29,   -29,     0,     0,   183,   183,     0,   149,     0,
       0,    61,   203,    62,    62,   155,   183,   -72,   -72,   -72,
     -72,   -72,   -82,   -82,   -82,   -82,   -82,   -72,   -72,   -72,
     -72,   -72,    63,    63,   185,   -72,   -60,    62,   -72,    62,
     -82,   -60,   118,   -82,    62,   -72,   -60,   -60,   265,   564,
     -60,   -60,   377,   -60,     0,     0,     0,   184,     0,     0,
       0,   -60,     0,   -60,     0,   550,   -60,     0,     0,   -15,
       0,   -15,   -15,   -15,   -15,   -15,   -15,   184,   183,     0,
       0,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,
     505,     0,   -15,   -15,     0,   -15,   -15,   184,   -15,     0,
       0,   -15,    29,   -15,     0,     0,     0,    63,     0,    63,
     297,   184,   -51,   -51,   -51,   -82,   -82,   -82,   -82,   -82,
       0,     0,    63,   265,     0,   265,   -65,     0,   -51,    62,
       0,   -65,     0,   -82,     0,     0,   -65,   -65,   265,   -82,
     -65,   -65,     0,   -65,     0,    97,    62,   -51,   -51,   -51,
     105,   -65,     0,   -65,     0,   556,   -65,   542,   -83,   -83,
     -83,   -83,   -83,   -51,   105,   297,   -51,   -50,   -50,   -50,
       0,     0,     0,     0,     0,   105,   -83,    61,    61,   183,
     105,     0,   -24,   -50,   -24,   -24,   -24,   -24,   -24,   -24,
     105,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -60,   -24,   -24,
       0,   -24,   -60,   184,   -24,   -24,   -24,   -60,   -60,   184,
     184,   -60,   -60,     1,   -60,    62,     2,     3,     4,     5,
     184,     0,   -60,     0,   -60,     0,   575,   -60,     0,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -75,   -75,   -75,   -75,
     -75,     0,    61,     0,    61,     0,   -21,   -84,   -21,   -21,
     -21,   -21,   -21,   -21,   -75,     0,     0,    61,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,
     -21,     0,   -21,   -21,     0,   -21,     0,     0,   -21,   -21,
     -21,     0,   184,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,   105,   -22,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,     0,   -22,     0,     0,   -22,   -22,   -22,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
       0,   -23,   -23,   407,   -23,   -23,     0,   -23,   408,     0,
     -23,   -23,   -23,   409,   410,     0,     0,   411,   412,     0,
     413,   105,   -53,   298,   -53,   -53,   -53,     0,   414,     0,
     415,     0,   -26,   416,   -26,   -26,   -26,   -26,   -26,   -26,
     -53,    62,    62,   565,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,
       0,   -26,     0,     0,   -26,   -26,   -26,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,
     -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,   -25,
     -25,   -25,     0,   -55,   -55,   -55,   -55,   -55,     0,     0,
     -56,   -56,   -56,   -56,   -56,     0,    62,     0,    62,     0,
     -17,   -55,   -17,   -17,   -17,   -17,   -17,   -17,   -56,     0,
       0,    62,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,
     -17,   -17,     0,   -17,   -17,     0,   -17,   -17,     0,   -17,
       0,     0,   -17,   -17,   -17,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
       0,   -28,   -28,     0,   -28,     0,     0,   -28,   -28,   -28,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,     0,   -38,   -38,     0,   -38,   -38,     0,   -38,
       0,     0,   -38,   -38,   -38,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
       0,   -36,   -36,     0,   -36,     0,     0,   -36,   -36,   -36,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,    -8,
       0,     0,    -8,    -8,    -8,   -16,     0,   -16,   -16,   -16,
     -16,   -16,   -16,     0,     0,     0,     0,   -16,   -16,   -16,
     -16,   -16,   -16,     0,   -16,   -16,   -16,     0,   -16,   -16,
       0,   -16,   -16,     0,   -16,     0,     0,   -16,   -16,   -16,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,   -30,   -30,     0,   -30,   -30,     0,   -30,
       0,     0,   -30,   -30,   -30,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,     0,   -31,     0,     0,   -31,   -31,   -31,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,   -32,
       0,     0,   -32,   -32,   -32,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   590,     0,   -34,   -34,
       0,   -34,   -34,     0,   -34,     0,     0,   -34,   -34,   -34,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,   -35,
       0,     0,   -35,   -35,   -35,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
       0,   -37,   -37,     0,   -37,     0,     0,   -37,   -37,   -37,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,   -33,
       0,     0,   -33,   -33,   -33,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,   -27,
       0,   -27,   -27,     0,   -27,     0,     0,   -27,   -27,   -27,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,     0,     0,   -29,   -29,     0,   -29,   -29,     0,   -29,
       0,     0,   -29,   -29,   -29,   170,     0,    32,     2,     3,
       4,     5,    33,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,     0,    40,    41,     0,     0,    42,    43,
       0,    44,    45,     0,    46,     0,     0,    47,   -20,   171,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,     0,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,
       0,     0,   -24,   -24,   -24,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,     0,     0,   -21,   -21,
       0,   -21,   -21,     0,   -21,     0,     0,   -21,   -21,   -21,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,
     -22,     0,     0,   -22,   -22,     0,   -22,   -22,     0,   -22,
       0,     0,   -22,   -22,   -22,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,     0,     0,     0,     0,   -23,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,     0,     0,   -23,   -23,
       0,   -23,   -23,     0,   -23,     0,     0,   -23,   -23,   -23,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,     0,     0,   -26,   -26,     0,   -26,   -26,     0,   -26,
       0,     0,   -26,   -26,   -26,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,     0,     0,   -25,   -25,
       0,   -25,   -25,     0,   -25,     0,     0,   -25,   -25,   -25,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,     0,     0,   -28,   -28,     0,   -28,   -28,     0,   -28,
       0,     0,   -28,   -28,   -28,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,   -38,
       0,   -38,   -38,     0,   -38,     0,     0,   -38,   -38,   -38,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,     0,     0,   -36,   -36,     0,   -36,   -36,     0,   -36,
       0,     0,   -36,   -36,   -36,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,     0,     0,   -30,   -30,
       0,   -30,   -30,     0,   -30,     0,     0,   -30,   -30,   -30,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,     0,     0,   -31,   -31,     0,   -31,   -31,     0,   -31,
       0,     0,   -31,   -31,   -31,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,     0,     0,   -32,   -32,
       0,   -32,   -32,     0,   -32,     0,     0,   -32,   -32,   -32,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,     0,     0,   -35,   -35,     0,   -35,   -35,     0,   -35,
       0,     0,   -35,   -35,   -35,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,     0,     0,   -37,   -37,
       0,   -37,   -37,     0,   -37,     0,     0,   -37,   -37,   -37,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,     0,     0,   -33,   -33,     0,   -33,   -33,     0,   -33,
       0,     0,   -33,   -33,   -33,   -18,     0,   -18,   -18,   -18,
     -18,   -18,   -18,     0,     0,     0,     0,   -18,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,     0,     0,   -18,   -18,
       0,   -18,   -18,     0,   -18,     0,     0,   -18,   -18,   -18,
     -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,     0,
       0,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,
     -15,     0,     0,   -15,   -15,     0,   -15,   -15,     0,   -15,
       0,     0,   -15,   269,   -15,    -8,     0,    -8,    -8,    -8,
      -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,
       0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,
     -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,     0,
       0,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,
     -15,     0,     0,   -15,   -15,     0,   -15,   -15,     0,   -15,
       0,     0,   -15,   348,   -15,   -17,     0,   -17,   -17,   -17,
     -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,     0,     0,   -17,   -17,
       0,   -17,   -17,     0,   -17,     0,     0,   -17,   -17,   -17,
     -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,
       0,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,
     -16,     0,     0,   -16,   -16,     0,   -16,   -16,     0,   -16,
       0,     0,   -16,   -16,   -16,   170,     0,    32,     2,     3,
       4,     5,    33,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,     0,    40,    41,     0,     0,    42,    43,
       0,    44,    45,     0,    46,     0,     0,    47,   248,   171,
      32,     2,     3,     4,     5,    33,     0,     0,     0,     0,
      34,    35,   249,   250,    38,    39,     0,    40,   251,     0,
       0,   252,   253,   -65,   254,    45,     0,    46,   -65,     0,
      47,     0,   255,   -65,   -65,     0,     0,   -65,   -65,     0,
     -65,   -64,   -64,   -64,   -64,   -64,     0,     0,   -65,     0,
     -65,     0,   581,   -65,   -74,   -74,   -74,   -74,   -74,   -64,
       0,     0,     0,     0,     0,   -64,     0,     0,     0,   -64,
       0,     0,   -74,   -52,   326,   -52,   -52,   -52,   -74,     0,
       0,     0,   -74,     0,   -54,   -54,   -54,   -54,   -54,     0,
       0,   -52,   -59,   -59,   -59,   -59,   -59,   -52,     0,     0,
       0,   -52,   -54,   -41,   -41,   -41,   -41,   -41,   -54,     0,
     -59,    97,   -54,   -50,   -50,   -50,   -59,     0,     0,     0,
     -59,   -41,   -42,   -42,   -42,   -42,   -42,   -41,     0,   -50,
       0,   -41,   -50,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -42,   -69,   -69,   -69,   -69,   -69,   -42,     0,     0,     0,
     -42,   -68,   -67,   -67,   -67,   -67,   -67,   -68,     0,   -69,
       0,   -68,     0,     0,     0,   -69,     0,     0,     0,   -69,
     -67,   -63,   -63,   -63,   -63,   -63,   -67,     0,     0,     0,
     -67,     0,   -70,   -70,   -70,   -70,   -70,     0,     0,   -63,
     -71,   -71,   -71,   -71,   -71,   -63,     0,     0,     0,   -63,
     -70,   -61,   -61,   -61,   -61,   -61,   -70,     0,   -71,     0,
     -70,     0,     0,     0,   -71,     0,     0,     0,   -71,   -61,
     -66,   -66,   -66,   -66,   -66,   -61,     0,     0,     0,   -61,
       0,   -72,   -72,   -72,   -72,   -72,     0,     0,   -66,   -72,
     -72,   -72,   -72,   -72,   -66,     0,     0,     0,   -66,   -72,
     -83,   -83,   -83,   -83,   -83,   -72,   358,   -72,   -84,   -84,
     -84,   -84,   -84,   -72,   363,     0,     0,     0,   -83,   -75,
     -75,   -75,   -75,   -75,   -83,     0,   -84,   -53,   284,   -53,
     -53,   -53,   -84,     0,     0,     0,     0,   -75,   -55,   -55,
     -55,   -55,   -55,   -75,     0,   -53,   -56,   -56,   -56,   -56,
     -56,   -53,     0,     0,     0,     0,   -55,   -73,   -73,   -73,
     -73,   -73,   -55,     0,   -56,   -58,   -58,   -58,   -58,   -58,
     -56,     0,     0,     0,     0,   -73,   -57,   -57,   -57,   -57,
     -57,   -73,     0,   -58,   -64,   -64,   -64,   -64,   -64,   -58,
       0,     0,     0,     0,   -57,   -74,   -74,   -74,   -74,   -74,
     -57,     0,   -64,   -52,   284,   -52,   -52,   -52,   -64,     0,
       0,     0,     0,   -74,   -54,   -54,   -54,   -54,   -54,   -74,
       0,   -52,   -59,   -59,   -59,   -59,   -59,   -52,     0,     0,
       0,     0,   -54,   -41,   -41,   -41,   -41,   -41,   -54,     0,
     -59,   -42,   -42,   -42,   -42,   -42,   -59,     0,     0,     0,
       0,   -41,   -68,   -68,   -68,   -68,   -68,   -41,     0,   -42,
     -69,   -69,   -69,   -69,   -69,   -42,     0,     0,     0,     0,
     -68,   -67,   -67,   -67,   -67,   -67,   -68,     0,   -69,   -63,
     -63,   -63,   -63,   -63,   -69,     0,     0,     0,     0,   -67,
     -70,   -70,   -70,   -70,   -70,   -67,     0,   -63,   -71,   -71,
     -71,   -71,   -71,   -63,     0,     0,     0,     0,   -70,   -61,
     -61,   -61,   -61,   -61,   -70,     0,   -71,   -66,   -66,   -66,
     -66,   -66,   -71,     0,     0,     0,     0,   -61,   -83,   -83,
     -83,   -83,   -83,   -61,     0,   -66,   -84,   -84,   -84,   -84,
     -84,   -66,     0,     0,     0,     0,   -83,     0,     0,   -83,
       0,     0,     0,     0,   -84,     0,     0,   -84,   -75,   -75,
     -75,   -75,   -75,   -53,    98,   -53,   -53,   -53,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,   -75,     0,     0,   -75,
       0,   -53,     0,     0,   -53,     0,   -55,     0,     0,   -55,
     -56,   -56,   -56,   -56,   -56,   -73,   -73,   -73,   -73,   -73,
     -58,   -58,   -58,   -58,   -58,     0,     0,     0,   -56,     0,
       0,   -56,     0,   -73,     0,     0,   -73,     0,   -58,     0,
       0,   -58,   -57,   -57,   -57,   -57,   -57,   -64,   -64,   -64,
     -64,   -64,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
     -57,     0,     0,   -57,     0,   -64,     0,     0,   -64,     0,
     -74,     0,     0,   -74,   -52,    98,   -52,   -52,   -52,   -54,
     -54,   -54,   -54,   -54,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,   -52,     0,     0,   -52,     0,   -54,     0,     0,
     -54,     0,   -59,     0,     0,   -59,   -41,   -41,   -41,   -41,
     -41,   -42,   -42,   -42,   -42,   -42,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,   -41,     0,     0,   -41,     0,   -42,
       0,     0,   -42,     0,   -68,     0,     0,   -68,   -69,   -69,
     -69,   -69,   -69,   -67,   -67,   -67,   -67,   -67,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,   -69,     0,     0,   -69,
       0,   -67,     0,     0,   -67,     0,   -63,     0,     0,   -63,
     -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,   -71,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,   -70,     0,
       0,   -70,     0,   -71,     0,     0,   -71,     0,   -61,     0,
       0,   -61,   -66,   -66,   -66,   -66,   -66,   -73,   -73,   -73,
     -73,   -73,   -58,   -58,   -58,   -58,   -58,     0,     0,     0,
     -66,     0,     0,   -66,     0,   -73,     0,     0,     0,     0,
     -58,   -57,   -57,   -57,   -57,   -57,   -64,   -64,   -64,   -64,
     -64,   -74,   -74,   -74,   -74,   -74,    -7,    -7,     0,   -57,
      -7,    -7,    -7,    -7,   -64,     0,     0,     0,     0,   -74,
     -52,   298,   -52,   -52,   -52,   -54,   -54,   -54,   -54,   -54,
     -59,   -59,   -59,   -59,   -59,    -2,     1,     0,   -52,     2,
       3,     4,     5,   -54,     0,     0,     0,     0,   -59,   -41,
     -41,   -41,   -41,   -41,   -42,   -42,   -42,   -42,   -42,   -68,
     -68,   -68,   -68,   -68,    -4,    -4,     0,   -41,    -4,    -4,
      -4,    -4,   -42,     0,     0,     0,     0,   -68,   -69,   -69,
     -69,   -69,   -69,   -67,   -67,   -67,   -67,   -67,   -63,   -63,
     -63,   -63,   -63,    -6,    -6,     0,   -69,    -6,    -6,    -6,
      -6,   -67,     0,     0,     0,     0,   -63,   -70,   -70,   -70,
     -70,   -70,   -71,   -71,   -71,   -71,   -71,   -61,   -61,   -61,
     -61,   -61,    -5,    -5,     0,   -70,    -5,    -5,    -5,    -5,
     -71,     0,     0,     0,     0,   -61,   -66,   -66,   -66,   -66,
     -66,    -3,    -3,     0,     0,    -3,    -3,    -3,    -3,     0,
       0,    -8,    -8,     0,   -66,    -8,    -8,    -8,    -8,   -18,
     -18,     0,     0,   -18,   -18,   -18,   -18,   -12,   -12,     0,
       0,   -12,   -12,   -12,   -12,   -10,   -10,     0,     0,   -10,
     -10,   -10,   -10,   -17,   -17,     0,     0,   -17,   -17,   -17,
     -17,   -16,   -16,     0,     0,   -16,   -16,   -16,   -16
};

static const yytype_int16 yycheck[] =
{
       0,     0,    21,    22,    51,   171,    12,     7,     7,   275,
       1,   271,    29,    80,   137,   358,    33,    17,     3,    30,
      26,     3,    33,   289,    12,   285,    32,    33,    28,   372,
     137,     3,    43,    12,   300,    46,    47,     3,    26,   305,
      51,   301,   137,     0,    35,   388,    32,    26,     3,   315,
      36,   311,    12,    32,   161,   398,   163,    36,   137,    32,
      71,   168,   363,    12,    75,    32,    26,    78,    79,    36,
     137,    32,    32,    84,   137,     3,   377,    26,   137,    32,
      29,    33,    93,    94,    95,    96,    97,    98,    33,   255,
      33,    33,   393,    12,    33,   162,   137,     4,     5,     6,
       7,     3,   403,    33,    33,     3,    33,    26,   119,    34,
       8,    13,    14,    32,    33,    13,    14,    36,   137,    17,
      18,   132,    20,    29,    29,    32,   137,   138,   139,     3,
      28,    12,    30,    29,    32,    33,     3,   137,   137,    13,
      14,    11,    12,    17,    18,    26,    20,     3,     3,    33,
     161,    32,   163,    12,    28,    36,    26,   168,    12,    33,
       3,   504,   173,   429,    12,   425,     3,    26,     3,   180,
     181,     8,    26,    32,    33,    29,    13,    14,    26,    33,
      17,    18,   193,    20,    32,    33,    32,    34,    36,   200,
     201,    28,    26,    30,    32,    32,    33,    29,   541,    11,
      12,     3,   213,    10,    11,    12,     8,    29,   509,   220,
     221,    13,    14,    12,    26,    17,    18,    19,    20,    26,
      32,    32,    32,   270,   235,    32,    28,    26,    30,    36,
     496,    33,   492,    32,    33,   246,   247,     3,    32,    10,
      11,    12,   253,    11,    12,   546,    32,    13,    14,    31,
      29,    17,    18,    26,    20,    26,   267,    32,    26,   270,
      32,    32,    28,   274,    32,   276,    29,    33,    36,    12,
     281,   282,   283,   284,    10,    11,    12,   288,   345,   290,
      12,    32,    29,    26,   295,   296,   297,   298,   299,    32,
      26,    11,    12,   304,    26,   306,    32,    29,     3,    29,
      36,    33,   349,   314,    32,   316,    26,    32,    13,    14,
      12,   322,    17,    18,    32,    20,    29,    32,   329,     3,
       3,    11,    12,    28,    26,   336,   337,    29,    33,    32,
      13,    14,   343,   344,    17,    18,    26,    20,   349,    29,
      32,     3,     1,   354,     3,     4,     5,     6,     7,     8,
      33,    13,    14,   364,    13,    14,    15,    16,    17,    18,
      33,    20,    21,    22,    33,    24,    25,   378,    27,    28,
      33,    30,    11,    12,    33,    34,    35,    33,     8,     9,
      10,    11,    12,   394,     3,    33,    33,    26,    33,     8,
      29,    33,   515,   404,    13,    14,    26,   408,    17,    18,
      33,    20,    32,    33,   415,   416,    36,    12,   515,    28,
      33,    30,    30,    32,    33,    33,    33,   428,    33,   430,
     515,    26,    33,    33,     3,    43,    33,    32,    46,    47,
      11,    12,    33,    51,    13,    14,   515,    33,    17,    18,
       8,    20,    10,    11,    12,    26,    33,    33,   515,    28,
       3,    32,   515,    71,    33,    36,   515,    75,    26,    29,
      78,    79,    29,    32,    32,    31,     3,   590,    36,   592,
      33,    10,    11,    12,   515,    93,    94,    95,    96,    97,
      98,     3,   605,   590,   495,   592,   497,    26,    12,    33,
       3,    13,    14,    32,    32,   590,   515,   592,   605,   510,
      13,    14,    26,    33,   515,   516,   517,    32,    32,    33,
     605,   590,    36,   592,   132,   515,   515,    33,    12,   137,
     138,   139,    32,   590,   591,   592,   605,   590,    33,   592,
       3,   590,    26,   592,    12,    29,   547,    33,   605,    33,
      13,    14,   605,   161,    33,   163,   605,    12,    26,   590,
     168,   592,    12,    29,    32,   173,     8,     9,    10,    11,
      12,    26,   180,   181,   605,     3,    26,    32,    29,    32,
      34,   590,    32,   592,    26,   193,    36,     3,    32,   590,
      32,   592,   200,   201,    36,    32,   605,    13,    14,    32,
     590,   590,   592,   592,   605,   213,    32,     3,    11,    12,
      32,    12,   220,   221,    12,   605,   605,    13,    14,   227,
      32,    17,    18,    26,    20,    26,   234,   235,    26,    32,
      32,    32,    28,     3,    32,    36,    33,    33,   246,   247,
      12,    12,     3,    13,    14,   253,     3,    17,    18,    32,
      20,    32,    13,    14,    26,    26,    13,    14,    28,   267,
      32,    32,   270,    33,    36,    36,   274,     3,    32,    32,
      32,    29,     8,   281,   282,   283,   284,    13,    14,    33,
     288,    17,    18,    19,    20,    12,    33,   295,   296,   297,
     298,   299,    28,     3,    30,    33,   304,    33,     8,    26,
      32,    32,    32,    13,    14,    32,   314,    17,    18,    30,
      20,    26,    33,     8,   322,    10,    11,    12,    28,    32,
      30,   329,    43,    33,    32,    46,    47,    34,   336,   337,
      51,    26,    32,    12,     3,   343,   344,    32,    12,     8,
      32,   349,    12,    32,    13,    14,   354,    26,    17,    18,
      71,    20,    26,    32,    75,    29,    26,    78,    79,    28,
      32,    30,    32,    32,    33,    32,    36,     4,     5,     6,
       7,     3,    93,    94,    95,    96,    97,    98,    12,     3,
      32,    13,    14,    12,     8,    17,    18,    32,    20,    13,
      14,    32,    26,    17,    18,    33,    20,    26,    32,    32,
     408,    33,    36,    32,    28,    32,    30,   415,   416,    33,
      32,   132,     3,    32,     3,    32,   137,   138,   139,     8,
     428,    32,    13,    14,    13,    14,    32,    32,    17,    18,
       8,    20,    10,    11,    12,    12,    12,    12,    32,    28,
     161,    30,   163,    32,    33,    32,    32,   168,    26,    26,
      26,    26,   173,    29,    32,    32,     3,    32,    36,   180,
     181,     8,    12,    29,    12,    29,    13,    14,    29,    32,
      17,    18,   193,    20,    32,    32,    26,    32,    26,   200,
     201,    28,    32,    30,    32,    32,    33,   495,    36,    10,
      11,    12,   213,     3,     8,     9,    10,    11,    12,   220,
     221,    32,    32,    13,    14,    26,     3,   515,   516,   517,
      12,     8,    26,    32,   235,    32,    13,    14,    32,    33,
      17,    18,    36,    20,    26,   246,   247,     3,    32,     3,
      32,    28,   253,    30,    36,    32,    33,    13,    14,    13,
      14,    17,    18,    32,    20,    32,   267,    32,    32,   270,
      32,    29,    28,   274,    12,     3,    28,    33,     7,    12,
     281,   282,   283,   284,    32,    13,    14,   288,    26,    17,
      18,    29,    20,    26,   295,   296,   297,   298,   299,    32,
      12,    32,   590,   304,   592,    33,    32,    32,     3,    32,
      32,    32,    12,   314,    26,    32,    30,   605,    13,    14,
      32,   322,    17,    18,    36,    20,    26,    -1,   329,    43,
      12,    -1,    32,    47,    -1,   336,   337,    51,    33,    -1,
      -1,     3,   343,   344,    26,    12,     8,    -1,   349,    12,
      32,    13,    14,   354,    36,    17,    18,    71,    20,    26,
      12,    75,    29,    26,    78,    79,    28,    -1,    30,    32,
      32,    33,    -1,    36,    26,    -1,    -1,    29,     3,    93,
      94,    95,    96,    97,    98,    12,     3,    -1,    13,    14,
      12,     8,    17,    18,    -1,    20,    13,    14,    -1,    26,
      17,    18,    -1,    20,    26,    32,    -1,   408,    33,    36,
      32,    28,    -1,    30,   415,   416,    33,    -1,   132,     3,
      12,     3,    -1,   137,   138,   139,     8,   428,    -1,    13,
      14,    13,    14,    -1,    26,    17,    18,    29,    20,     8,
       9,    10,    11,    12,    -1,    -1,    28,   161,    30,   163,
      32,    33,    -1,    -1,   168,     3,     1,    26,     3,     4,
       5,     6,     7,     8,    33,    13,    14,   181,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,     3,    27,    28,    -1,    30,     8,   201,    33,    34,
      35,    13,    14,    -1,   495,    17,    18,    -1,    20,    -1,
       8,     9,    10,    11,    12,    12,    28,   221,    30,    12,
      32,    33,    -1,    30,   515,   516,   517,    -1,    26,    26,
      -1,   235,    29,    26,    32,    33,    43,     3,    36,    32,
      47,    -1,   246,   247,    51,     3,    -1,    13,    14,   253,
      -1,    17,    18,    -1,    20,    13,    14,    -1,    -1,    17,
      18,    -1,    20,   267,    71,    -1,   270,    33,    75,    -1,
     274,    78,    79,    -1,    -1,    33,    -1,   281,   282,   283,
     284,    -1,    12,    -1,   288,    -1,    93,    -1,    95,    96,
      97,   295,   296,   297,   298,   299,    26,    12,    12,   590,
     304,   592,    32,     8,     9,    10,    11,    12,    -1,    -1,
     314,    26,    26,    -1,   605,    29,    -1,    32,   322,    -1,
      -1,    26,   326,    -1,    29,   132,    31,    12,    33,    12,
     137,   138,   139,   337,     8,     9,    10,    11,    12,   343,
     344,    26,    -1,    26,    -1,   349,    -1,    32,    -1,    32,
     354,    36,    26,    36,   161,    -1,   163,    -1,    32,    -1,
      -1,   168,    36,     1,    -1,     3,     4,     5,     6,     7,
       8,    12,    -1,    -1,   181,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    26,    24,    25,     3,    27,
      28,    32,    30,     8,   201,    33,    34,    35,    13,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,     8,     9,    10,
      11,    12,   416,    28,   221,    30,    -1,    32,    33,    -1,
      30,    -1,    -1,    -1,   428,    26,    12,    -1,   235,    -1,
      12,    32,    -1,    43,    12,    36,   130,    47,    -1,   246,
      26,    51,    -1,    29,    26,    -1,   253,    -1,    26,   143,
      32,    29,   146,    -1,     8,     9,    10,    11,    12,    12,
     267,    71,    -1,   270,    -1,    75,    -1,   274,    78,    79,
      12,    -1,    26,    26,   281,   282,   283,    -1,    32,    32,
      -1,   288,    36,    93,    26,    95,    96,    29,   295,   296,
     297,   495,   299,    -1,    12,    12,    -1,   304,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    12,   314,    26,    26,
      -1,   515,   516,   517,    32,    32,    26,    12,   325,    29,
      26,    -1,   132,    33,    12,    -1,    32,   137,   138,   139,
     337,    26,    -1,    -1,    29,     3,   343,   344,    26,    -1,
       8,    -1,   349,    12,    32,    13,    14,   354,    36,    17,
      18,   161,    20,   163,    12,    12,    12,    26,   168,    -1,
      28,    -1,    30,    32,    32,    33,    -1,     3,    26,    26,
      26,   181,     8,    12,    32,    32,    32,    13,    14,    36,
      36,    17,    18,    -1,    20,    12,   590,    26,   592,    -1,
      12,   201,    28,    32,    30,    -1,    32,    33,    -1,    26,
      -1,   605,    12,     3,    26,    32,    -1,    29,     8,   416,
      30,   221,    -1,    13,    14,    12,    26,    17,    18,    -1,
      20,   428,    32,    43,    -1,   235,    36,    47,    28,    26,
      30,    51,    32,    33,     3,    32,   246,    -1,     8,     9,
      10,    11,    12,   253,    13,    14,    -1,    12,    -1,    -1,
       8,    71,    10,    11,    12,    75,    26,   267,    78,    79,
     270,    26,    32,   357,   274,    -1,    36,    32,    26,    -1,
      -1,   281,   282,    93,    32,    95,    12,   371,   288,    -1,
       8,     9,    10,    11,    12,   295,   296,    -1,   495,   299,
      26,    -1,    -1,   387,   304,    -1,    32,    -1,    26,    -1,
      36,    29,    12,   397,   314,    33,    -1,    12,   515,   516,
     517,    -1,   132,    -1,   324,     3,    26,   137,   138,   139,
       8,    26,    32,    -1,    29,    13,    14,   337,    -1,    17,
      18,    -1,    20,   343,   344,    12,    12,    -1,    -1,   349,
      28,   161,    30,   163,   354,    33,    -1,    -1,   168,    26,
      26,    -1,     3,    -1,   448,    32,    32,     8,    -1,    36,
     454,   181,    13,    14,    -1,   459,    17,    18,    -1,    20,
      -1,   465,     8,     9,    10,    11,    12,    28,   472,    30,
      -1,   201,    33,   590,   478,   592,    -1,    -1,    12,   483,
      26,    -1,    -1,    -1,    -1,   489,    32,    12,   605,    12,
      36,   221,    26,    -1,    -1,    -1,   416,    30,    32,   503,
      -1,    26,    36,    26,    -1,   235,    -1,    32,   428,    32,
      43,    36,    -1,    30,    47,    12,   246,    -1,    51,    12,
      -1,    -1,    -1,   253,    -1,    -1,    43,    -1,    -1,    26,
      47,    -1,    -1,    26,    51,    32,   540,   267,    71,    32,
     270,    -1,    75,    -1,   274,    78,    79,   551,    10,    11,
      12,   281,    -1,   557,    71,    -1,    12,    -1,   288,    -1,
      93,    78,    79,    12,    26,   295,    -1,    29,    -1,   299,
      26,    -1,   576,    29,   304,   495,    -1,    26,   582,    -1,
      29,    -1,    -1,    -1,   314,     8,     9,    10,    11,    12,
      -1,    -1,    -1,   323,    12,   515,   516,   517,    -1,   132,
      -1,    -1,    -1,    26,   137,   138,   139,   337,    26,    32,
      33,    29,    12,   343,   344,    10,    11,    12,    -1,   349,
     137,   138,     3,    -1,   354,    -1,    26,     8,   161,    29,
     163,    26,    13,    14,    29,   168,    17,    18,    -1,    20,
      12,    -1,    30,    -1,   161,    -1,   163,    28,   181,    30,
      -1,   168,    33,    -1,    26,    43,    -1,    29,    -1,    47,
      -1,    -1,    -1,    51,   181,    10,    11,    12,   201,    -1,
     590,    -1,   592,    -1,    -1,     8,     9,    10,    11,    12,
      12,    26,    -1,    71,   201,   605,   416,    75,   221,    -1,
      78,    79,    12,    26,    26,    -1,    -1,    29,   428,    32,
       3,    -1,   235,    36,   221,     8,    26,    12,    -1,    29,
      13,    14,    -1,   246,    17,    18,    -1,    20,   235,    -1,
     253,    26,    -1,    -1,    29,    28,    -1,    30,    -1,    32,
      33,    -1,    -1,    -1,   267,    -1,   253,   270,    -1,    -1,
      -1,   274,    -1,    -1,   132,    -1,    -1,     3,    -1,   137,
     138,   139,     8,   270,    -1,   288,    -1,    13,    14,    -1,
      -1,    17,    18,    -1,    20,   495,   299,    -1,    -1,    -1,
      -1,   304,    28,   161,    30,   163,    32,    33,    -1,    -1,
     168,   314,    -1,    -1,    -1,   515,   516,   517,   321,    -1,
      -1,    -1,    -1,   181,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,   337,     8,     9,    10,    11,    12,
     343,   344,    26,   201,     3,    -1,   349,    26,    32,     8,
     337,   354,    36,    26,    13,    14,   343,   344,    17,    18,
      33,    20,   349,   221,    -1,    -1,    -1,   354,    -1,    28,
      -1,    30,    -1,    32,    33,    -1,    -1,   235,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    30,    -1,    -1,    -1,
     590,    -1,   592,    -1,    -1,   253,    26,    -1,    -1,    43,
      -1,    -1,    32,    47,    -1,   605,    36,    51,    -1,    -1,
      -1,    -1,   270,   416,    -1,    -1,   274,    -1,    -1,     8,
       9,    10,    11,    12,    -1,   428,    -1,    71,    -1,   416,
     288,    75,    -1,    -1,    78,    79,    -1,    26,    -1,    -1,
      -1,   299,    -1,    32,    -1,    -1,   304,    36,     1,    -1,
       3,     4,     5,     6,     7,     8,   314,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,   337,
      33,    34,    35,    -1,    -1,   343,   344,    -1,   132,    -1,
      -1,   349,   495,   137,   138,   139,   354,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,   515,   516,   517,    26,     3,   161,    29,   163,
      26,     8,    33,    29,   168,    26,    13,    14,   515,   516,
      17,    18,    33,    20,    -1,    -1,    -1,   181,    -1,    -1,
      -1,    28,    -1,    30,    -1,    32,    33,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,   201,   416,    -1,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
     428,    -1,    24,    25,    -1,    27,    28,   221,    30,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,   590,    -1,   592,
       8,   235,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,   605,   590,    -1,   592,     3,    -1,    26,   253,
      -1,     8,    -1,    26,    -1,    -1,    13,    14,   605,    32,
      17,    18,    -1,    20,    -1,     8,   270,    10,    11,    12,
     274,    28,    -1,    30,    -1,    32,    33,   495,     8,     9,
      10,    11,    12,    26,   288,     8,    29,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,   299,    26,   515,   516,   517,
     304,    -1,     1,    26,     3,     4,     5,     6,     7,     8,
     314,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,     3,    27,    28,
      -1,    30,     8,   337,    33,    34,    35,    13,    14,   343,
     344,    17,    18,     1,    20,   349,     4,     5,     6,     7,
     354,    -1,    28,    -1,    30,    -1,    32,    33,    -1,     8,
       9,    10,    11,    12,    -1,    -1,     8,     9,    10,    11,
      12,    -1,   590,    -1,   592,    -1,     1,    26,     3,     4,
       5,     6,     7,     8,    26,    -1,    -1,   605,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,    -1,   416,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,   428,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,     3,    27,    28,    -1,    30,     8,    -1,
      33,    34,    35,    13,    14,    -1,    -1,    17,    18,    -1,
      20,   495,     8,     9,    10,    11,    12,    -1,    28,    -1,
      30,    -1,     1,    33,     3,     4,     5,     6,     7,     8,
      26,   515,   516,   517,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,    -1,     8,     9,    10,    11,    12,    -1,    -1,
       8,     9,    10,    11,    12,    -1,   590,    -1,   592,    -1,
       1,    26,     3,     4,     5,     6,     7,     8,    26,    -1,
      -1,   605,    13,    14,    15,    16,    17,    18,    -1,    20,
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
      -1,    27,    28,    -1,    30,    -1,    -1,    33,     1,    35,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,     3,    27,    28,    -1,    30,     8,    -1,
      33,    -1,    35,    13,    14,    -1,    -1,    17,    18,    -1,
      20,     8,     9,    10,    11,    12,    -1,    -1,    28,    -1,
      30,    -1,    32,    33,     8,     9,    10,    11,    12,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      -1,    -1,    26,     8,     9,    10,    11,    12,    32,    -1,
      -1,    -1,    36,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    26,     8,     9,    10,    11,    12,    32,    -1,    -1,
      -1,    36,    26,     8,     9,    10,    11,    12,    32,    -1,
      26,     8,    36,    10,    11,    12,    32,    -1,    -1,    -1,
      36,    26,     8,     9,    10,    11,    12,    32,    -1,    26,
      -1,    36,    29,     8,     9,    10,    11,    12,    -1,    -1,
      26,     8,     9,    10,    11,    12,    32,    -1,    -1,    -1,
      36,    26,     8,     9,    10,    11,    12,    32,    -1,    26,
      -1,    36,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      26,     8,     9,    10,    11,    12,    32,    -1,    -1,    -1,
      36,    -1,     8,     9,    10,    11,    12,    -1,    -1,    26,
       8,     9,    10,    11,    12,    32,    -1,    -1,    -1,    36,
      26,     8,     9,    10,    11,    12,    32,    -1,    26,    -1,
      36,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,    26,
       8,     9,    10,    11,    12,    32,    -1,    -1,    -1,    36,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    26,     8,
       9,    10,    11,    12,    32,    -1,    -1,    -1,    36,    26,
       8,     9,    10,    11,    12,    32,    33,    26,     8,     9,
      10,    11,    12,    32,    33,    -1,    -1,    -1,    26,     8,
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
       9,    10,    11,    12,    32,    -1,    26,     8,     9,    10,
      11,    12,    32,    -1,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,    32,    -1,    26,     8,     9,    10,    11,
      12,    32,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,     8,     9,
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
      -1,    29,    -1,    26,    -1,    -1,    29,    -1,    26,    -1,
      -1,    29,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    26,    -1,    -1,    -1,    -1,
      26,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     0,     1,    -1,    26,
       4,     5,     6,     7,    26,    -1,    -1,    -1,    -1,    26,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     0,     1,    -1,    26,     4,
       5,     6,     7,    26,    -1,    -1,    -1,    -1,    26,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     0,     1,    -1,    26,     4,     5,
       6,     7,    26,    -1,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     0,     1,    -1,    26,     4,     5,     6,
       7,    26,    -1,    -1,    -1,    -1,    26,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     0,     1,    -1,    26,     4,     5,     6,     7,
      26,    -1,    -1,    -1,    -1,    26,     8,     9,    10,    11,
      12,     0,     1,    -1,    -1,     4,     5,     6,     7,    -1,
      -1,     0,     1,    -1,    26,     4,     5,     6,     7,     0,
       1,    -1,    -1,     4,     5,     6,     7,     0,     1,    -1,
      -1,     4,     5,     6,     7,     0,     1,    -1,    -1,     4,
       5,     6,     7,     0,     1,    -1,    -1,     4,     5,     6,
       7,     0,     1,    -1,    -1,     4,     5,     6,     7
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    38,    39,    40,    41,
      42,    72,     0,    40,     3,    29,    33,    43,    44,    45,
      72,    32,    32,     3,     1,    35,    46,    46,    36,    34,
      47,    45,     3,     8,    13,    14,    15,    16,    17,    18,
      20,    21,    24,    25,    27,    28,    30,    33,    41,    46,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    60,    61,    62,    63,    64,    65,    66,    70,    72,
      73,    31,    33,     3,    70,    33,    33,    33,    33,    33,
      33,     3,    57,    33,    33,     3,    28,    70,    57,    34,
      48,    29,    29,    12,    26,    11,    10,     8,     9,     3,
      57,    32,    68,    33,    60,    61,     3,    59,     3,    19,
      57,    57,     3,    56,    29,     3,     3,    58,    33,    33,
      32,    62,    66,    63,    64,    65,    66,    57,    71,    32,
      67,    32,    26,    32,    32,    32,    32,    32,    29,    26,
      32,    32,    32,    69,     3,    58,    36,    32,    71,    61,
      29,    29,    29,    49,    57,    61,    71,    32,    32,    71,
      32,    22,    29,    32,    32,    49,    56,    49,    32,    49,
       1,    35,     3,     8,    13,    14,    17,    18,    20,    28,
      30,    33,    58,    60,    61,    62,    63,    64,    65,    66,
      70,    73,     3,     8,    13,    14,    17,    18,    20,    28,
      30,    33,    58,    62,    63,    64,    65,    66,    70,    73,
      13,    14,     3,     8,    13,    14,    17,    18,    20,    28,
      30,    33,    58,    70,    73,    29,     3,     8,    13,    14,
      17,    18,    20,    28,    30,    33,    58,    60,    61,    62,
      63,    64,    65,    66,    70,    73,    12,    26,     1,    15,
      16,    21,    24,    25,    27,    35,    41,    46,    50,    51,
      52,    53,    54,    55,    56,    57,    72,    12,     3,    34,
      47,    33,     3,    70,    33,    33,    33,     3,    28,    70,
      57,    11,    10,     8,     9,    33,     3,    70,    33,    33,
      33,     3,    28,    70,    57,    11,    10,     8,     9,    33,
      33,    33,     3,    70,    33,    33,    33,     3,    28,    70,
      57,    33,     3,    70,    33,    33,    33,     3,    28,    70,
      57,    12,    26,    11,    10,     8,     9,    62,     3,     8,
      13,    14,    17,    18,    20,    28,    30,    33,    58,    66,
      70,    73,    33,    33,    33,    33,    57,    33,    34,    47,
      29,    29,     3,    62,    31,    48,    32,    68,    33,    60,
      59,     3,    58,    33,    33,    32,    63,    64,    65,    66,
      32,    68,    33,    60,    59,     3,    58,    33,    33,    32,
      63,    64,    65,    66,    60,    59,    32,    68,    33,    60,
      59,     3,    58,    33,    33,    32,    32,    68,    33,    60,
      59,     3,    58,    33,    33,    32,    62,     3,     8,    13,
      14,    17,    18,    20,    28,    30,    33,    58,    66,    70,
      73,    63,    64,    65,    66,    33,     3,    70,    33,    33,
      33,     3,    28,    70,    57,     3,    19,    57,    57,    56,
      29,     3,    48,    29,    57,    34,    71,    32,    67,    32,
      32,    32,    32,    32,    69,     3,    58,    71,    32,    67,
      32,    32,    32,    32,    32,    69,     3,    58,    32,    32,
      71,    32,    67,    32,    32,    32,    32,    32,    69,     3,
      58,    71,    32,    67,    32,    32,    32,    32,    32,    69,
       3,    58,    33,     3,    70,    33,    33,    33,     3,    28,
      70,    57,    32,    68,    33,    60,    59,     3,    58,    33,
      33,    32,    32,    32,    32,    32,    29,    26,    34,    32,
      71,    71,    32,    32,    32,    71,    71,    32,    32,    32,
      71,    71,    32,    32,    32,    71,    71,    32,    32,    32,
      68,    33,    60,    59,     3,    58,    33,    33,    32,    71,
      32,    67,    32,    32,    32,    32,    32,    69,     3,    58,
      29,    29,    29,    49,    57,    61,    32,    32,    32,    32,
      32,    32,    32,    32,    71,    32,    67,    32,    32,    32,
      32,    32,    69,     3,    58,    32,    71,    71,    32,    32,
      22,    29,    32,    32,    71,    71,    32,    32,    32,    32,
      49,    56,    49,    32,    32,    32,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    43,
      42,    44,    42,    45,    45,    47,    46,    46,    46,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    50,    51,    52,    52,    53,    54,    55,    56,
      57,    58,    58,    59,    60,    61,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    66,    66,
      67,    66,    68,    66,    66,    69,    66,    66,    66,    66,
      66,    66,    70,    70,    70,    70,    71,    71,    72,    72,
      72,    72,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       7,     0,     6,     4,     2,     0,     4,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       5,     5,     5,     9,     5,     7,     3,     7,     2,     3,
       1,     4,     4,     3,     3,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     2,     2,     4,
       0,     6,     0,     5,     3,     0,     6,     4,     4,     4,
       5,     5,     1,     1,     3,     1,     3,     1,     1,     1,
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
#line 105 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2657 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 113 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2668 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 119 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2676 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 124 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2684 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 127 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2692 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 130 "sintatico.y"
          {}
#line 2698 "sintatico.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 133 "sintatico.y"
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

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 2);
  }
#line 2725 "sintatico.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 157 "sintatico.y"
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
#line 2756 "sintatico.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' $@1 params_list ')' brackets_stmt  */
#line 182 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, (yyvsp[-5].lexema).corpo, 2);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2769 "sintatico.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 190 "sintatico.y"
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
#line 2796 "sintatico.tab.c"
    break;

  case 12: /* function_declaration: type ID '(' $@2 ')' brackets_stmt  */
#line 211 "sintatico.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2808 "sintatico.tab.c"
    break;

  case 13: /* params_list: type ID ',' params_list  */
#line 220 "sintatico.y"
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
#line 2843 "sintatico.tab.c"
    break;

  case 14: /* params_list: type ID  */
#line 250 "sintatico.y"
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
#line 2877 "sintatico.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 281 "sintatico.y"
      {
    if(ehFuncao) {
      ehFuncao = 0;
    } else {
      indiceEscopo++; 
      escopo++; 
      listaEscopo[indiceEscopo] = escopo; 
    }
  }
#line 2891 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 289 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2900 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: '{' '}'  */
#line 293 "sintatico.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_brackets");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "empty", 4);
  }
#line 2910 "sintatico.tab.c"
    break;

  case 18: /* brackets_stmt: error  */
#line 298 "sintatico.y"
          {}
#line 2916 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt stmts  */
#line 301 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2927 "sintatico.tab.c"
    break;

  case 20: /* stmts: stmt  */
#line 307 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2935 "sintatico.tab.c"
    break;

  case 21: /* stmt: for_stmt  */
#line 312 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2943 "sintatico.tab.c"
    break;

  case 22: /* stmt: if_else_stmt  */
#line 315 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2951 "sintatico.tab.c"
    break;

  case 23: /* stmt: return_stmt  */
#line 318 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2959 "sintatico.tab.c"
    break;

  case 24: /* stmt: io_stmt  */
#line 321 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2967 "sintatico.tab.c"
    break;

  case 25: /* stmt: exp_stmt  */
#line 324 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2975 "sintatico.tab.c"
    break;

  case 26: /* stmt: set_stmt  */
#line 327 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2983 "sintatico.tab.c"
    break;

  case 27: /* stmt: var_declaration  */
#line 330 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2991 "sintatico.tab.c"
    break;

  case 28: /* stmt: assignment ';'  */
#line 333 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2999 "sintatico.tab.c"
    break;

  case 29: /* stmt: brackets_stmt  */
#line 336 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3007 "sintatico.tab.c"
    break;

  case 30: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 341 "sintatico.y"
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
#line 3027 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 356 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 3037 "sintatico.tab.c"
    break;

  case 32: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 361 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 3047 "sintatico.tab.c"
    break;

  case 33: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 368 "sintatico.y"
                                                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3060 "sintatico.tab.c"
    break;

  case 34: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 378 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3071 "sintatico.tab.c"
    break;

  case 35: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 384 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3083 "sintatico.tab.c"
    break;

  case 36: /* return_stmt: RETURN exp ';'  */
#line 393 "sintatico.y"
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
#line 3102 "sintatico.tab.c"
    break;

  case 37: /* set_stmt: FORALL '(' ID INFIX_OP or_exp ')' stmt  */
#line 409 "sintatico.y"
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
#line 3124 "sintatico.tab.c"
    break;

  case 38: /* exp_stmt: exp ';'  */
#line 428 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3134 "sintatico.tab.c"
    break;

  case 39: /* assignment: ID '=' exp  */
#line 435 "sintatico.y"
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
#line 3156 "sintatico.tab.c"
    break;

  case 40: /* exp: or_exp  */
#line 454 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3164 "sintatico.tab.c"
    break;

  case 41: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 459 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3176 "sintatico.tab.c"
    break;

  case 42: /* set_exp: SET_OP2 '(' set_aux_exp ')'  */
#line 466 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("ELEM");

  }
#line 3189 "sintatico.tab.c"
    break;

  case 43: /* set_aux_exp: ID INFIX_OP or_exp  */
#line 476 "sintatico.y"
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
#line 3210 "sintatico.tab.c"
    break;

  case 44: /* set_in_exp: or_exp INFIX_OP unary_exp  */
#line 494 "sintatico.y"
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
#line 3228 "sintatico.tab.c"
    break;

  case 45: /* or_exp: or_exp OR and_exp  */
#line 509 "sintatico.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup("INT");
  }
#line 3242 "sintatico.tab.c"
    break;

  case 46: /* or_exp: and_exp  */
#line 518 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3250 "sintatico.tab.c"
    break;

  case 47: /* or_exp: set_in_exp  */
#line 521 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3258 "sintatico.tab.c"
    break;

  case 48: /* and_exp: and_exp AND relational_exp  */
#line 526 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup("INT");
  }
#line 3272 "sintatico.tab.c"
    break;

  case 49: /* and_exp: relational_exp  */
#line 535 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3280 "sintatico.tab.c"
    break;

  case 50: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 540 "sintatico.y"
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
#line 3301 "sintatico.tab.c"
    break;

  case 51: /* relational_exp: sum_exp  */
#line 556 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3309 "sintatico.tab.c"
    break;

  case 52: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 561 "sintatico.y"
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
#line 3331 "sintatico.tab.c"
    break;

  case 53: /* sum_exp: mul_exp  */
#line 578 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3339 "sintatico.tab.c"
    break;

  case 54: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 583 "sintatico.y"
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
#line 3361 "sintatico.tab.c"
    break;

  case 55: /* mul_exp: unary_exp  */
#line 600 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3369 "sintatico.tab.c"
    break;

  case 56: /* unary_exp: primal_exp  */
#line 605 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3377 "sintatico.tab.c"
    break;

  case 57: /* unary_exp: '!' primal_exp  */
#line 608 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3386 "sintatico.tab.c"
    break;

  case 58: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 612 "sintatico.y"
                             {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3395 "sintatico.tab.c"
    break;

  case 59: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 616 "sintatico.y"
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
#line 3420 "sintatico.tab.c"
    break;

  case 60: /* $@4: %empty  */
#line 636 "sintatico.y"
                         {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

  }
#line 3432 "sintatico.tab.c"
    break;

  case 61: /* unary_exp: ARITMETIC_OP1 ID '(' $@4 arg_list ')'  */
#line 642 "sintatico.y"
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
#line 3459 "sintatico.tab.c"
    break;

  case 62: /* $@5: %empty  */
#line 664 "sintatico.y"
           {
      indiceArg = 0;
      strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
      prevFuncao.linha = (yyvsp[-1].lexema).linha;
      prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

    }
#line 3471 "sintatico.tab.c"
    break;

  case 63: /* unary_exp: ID '(' $@5 arg_list ')'  */
#line 670 "sintatico.y"
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
#line 3497 "sintatico.tab.c"
    break;

  case 64: /* unary_exp: ID '(' ')'  */
#line 691 "sintatico.y"
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
#line 3523 "sintatico.tab.c"
    break;

  case 65: /* $@6: %empty  */
#line 712 "sintatico.y"
               {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;
  }
#line 3534 "sintatico.tab.c"
    break;

  case 66: /* unary_exp: '!' ID '(' $@6 arg_list ')'  */
#line 717 "sintatico.y"
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
#line 3561 "sintatico.tab.c"
    break;

  case 67: /* unary_exp: '!' ID '(' ')'  */
#line 739 "sintatico.y"
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
#line 3587 "sintatico.tab.c"
    break;

  case 68: /* unary_exp: ISSET '(' ID ')'  */
#line 760 "sintatico.y"
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
#line 3607 "sintatico.tab.c"
    break;

  case 69: /* unary_exp: ISSET '(' set_exp ')'  */
#line 775 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3618 "sintatico.tab.c"
    break;

  case 70: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 781 "sintatico.y"
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
#line 3638 "sintatico.tab.c"
    break;

  case 71: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 796 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3649 "sintatico.tab.c"
    break;

  case 72: /* primal_exp: ID  */
#line 806 "sintatico.y"
     {
    (yyval.nodo) = retornaNodo();

    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      errosSemanticos++;

    }
    else{
      (yyval.nodo)->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);

  }
#line 3670 "sintatico.tab.c"
    break;

  case 73: /* primal_exp: const  */
#line 822 "sintatico.y"
          {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3678 "sintatico.tab.c"
    break;

  case 74: /* primal_exp: '(' exp ')'  */
#line 825 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3686 "sintatico.tab.c"
    break;

  case 75: /* primal_exp: set_exp  */
#line 828 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3694 "sintatico.tab.c"
    break;

  case 76: /* arg_list: exp ',' arg_list  */
#line 833 "sintatico.y"
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
#line 3715 "sintatico.tab.c"
    break;

  case 77: /* arg_list: exp  */
#line 849 "sintatico.y"
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
#line 3736 "sintatico.tab.c"
    break;

  case 78: /* type: INT_TYPE  */
#line 867 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3748 "sintatico.tab.c"
    break;

  case 79: /* type: FLOAT_TYPE  */
#line 874 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3760 "sintatico.tab.c"
    break;

  case 80: /* type: SET_TYPE  */
#line 881 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3772 "sintatico.tab.c"
    break;

  case 81: /* type: ELEM_TYPE  */
#line 888 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3784 "sintatico.tab.c"
    break;

  case 82: /* const: INTEGER  */
#line 897 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3795 "sintatico.tab.c"
    break;

  case 83: /* const: FLOAT  */
#line 903 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("FLOAT");
  }
#line 3806 "sintatico.tab.c"
    break;

  case 84: /* const: EMPTY  */
#line 909 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3817 "sintatico.tab.c"
    break;


#line 3821 "sintatico.tab.c"

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

#line 916 "sintatico.y"


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
      freeArvore(raiz);
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

    fclose(yyin);
    yylex_destroy();
    return 0;
}

