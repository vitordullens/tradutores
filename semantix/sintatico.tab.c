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
#define YYLAST   4551

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  481

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
     454,   459,   466,   476,   494,   514,   529,   539,   542,   547,
     557,   562,   572,   577,   594,   599,   616,   621,   624,   628,
     632,   652,   652,   680,   680,   707,   728,   728,   755,   776,
     791,   797,   812,   822,   838,   841,   844,   849,   865,   883,
     890,   897,   904,   913,   919,   925
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

#define YYPACT_NINF (-256)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     755,  1556,    15,    17,    18,    20,    36,  1707,  1732,  1760,
    1961,    45,  -256,  3774,     5,  3809,    86,   912,   -17,    19,
      59,    12,    12,     7,  3820,  2610,  3844,  3855,   912,  3879,
    3485,    38,   874,    91,    50,    54,    68,    73,  1853,  4066,
    4071,    77,    92,  1154,    95,    98,   109,  1264,  2645,  2680,
     107,  2715,  2750,  2785,  2820,  2855,  2890,  2925,   118,   132,
    4076,   123,   161,   775,   725,    88,  4098,  4103,  4108,   165,
    4130,  1154,   142,  1422,  4135,  1312,   168,   173,   377,  1264,
     174,  1458,   149,   177,   185,  1844,   148,  4140,   154,  3890,
     186,  2960,  2995,  1154,   216,  1154,  1154,  1154,  1154,   182,
     195,  4162,  1347,   474,   153,    -2,   201,   218,   222,   240,
     243,   246,   232,   204,  3030,   262,   264,   269,   546,   313,
    4167,   811,   171,   202,   785,   713,  4172,  4194,     9,   279,
    4199,  1347,  4204,    89,  4226,   299,   302,   303,  3518,  1154,
      89,  4231,  4236,  4258,  1347,   308,   312,  1347,  4263,   337,
     341,  3065,  3100,  3135,    51,   316,   350,   352,  4268,  4290,
     354,  4295,  3485,   385,  3485,  4300,  3170,   357,  3205,  3485,
    3240,  3275,  3310,  1878,   841,   369,   378,  3761,  3786,  3791,
     382,   267,  1264,  3796,   245,   380,   310,   257,  1227,  3821,
    3826,  3831,  3856,   460,  1025,   393,   402,   946,  1664,  1776,
     405,   997,  1264,  4322,   539,   420,   327,  4327,  4332,  4351,
    4356,   410,   414,   417,   425,  3345,   282,  1109,   426,   429,
    1214,  1450,  1538,   450,  1053,  1264,  1569,    14,   104,   122,
     413,  1292,  1582,  1635,  1684,  1718,  1312,   400,   188,   470,
     486,   494,   504,  1154,   520,  3380,   231,   974,  1921,  1980,
    2015,  2050,  2085,  2120,   412,   424,   542,   527,  3415,  3485,
     577,  3751,  3861,  1312,   168,   482,  3756,   534,  3866,   537,
    1264,  1264,  1264,  1264,  1264,   632,  1907,  4361,  1312,   168,
     526,  1966,   550,  4380,   555,  1312,  1312,  1312,  1312,  1312,
     168,  1312,   168,   655,  1167,  1789,  1312,   168,   770,  1411,
     559,  1801,   561,  1347,   821,  1347,  1347,  1347,  1347,   589,
     408,   563,   566,   452,   609,   600,  1264,   174,   573,   619,
    2155,  3485,  2190,  2225,   597,  1264,   595,  3891,  1347,   678,
     496,   607,   610,   642,   761,   843,  3896,   355,   499,  1383,
    3901,  3926,  4385,  1347,   799,   572,   644,   645,   650,   933,
     862,  4390,   455,   367,  4409,  4414,   599,   657,   622,   661,
    3546,  1347,  1100,   625,   665,   669,   672,  1133,   864,  3551,
     545,   131,   676,   684,   250,   536,  1492,  3558,  3587,  1312,
     168,   686,   687,   700,   702,   712,  2260,   717,   710,  2295,
     721,  3450,   731,  3931,  1347,  3936,  3961,  3966,  3971,  3996,
    1347,   733,   744,   748,  4419,  1347,  4438,  4443,  4448,  4467,
    4472,  1347,   750,   756,   758,   767,   214,   512,   768,  3592,
    1347,  3599,  3628,  3633,  3640,  3669,  1347,   776,   777,  1312,
     168,   629,   783,   801,   804,   810,  3518,  1154,    89,  2330,
    4001,   788,   796,  4006,  4031,  4477,   813,   818,  4496,  4501,
    3674,   819,   820,  3681,  3710,   658,   831,   668,   740,  2365,
    2400,  2435,  2470,   814,   832,  4036,  4041,  4506,  4525,  3715,
    3722,   287,   298,  3518,   385,  3518,  2505,   840,  2540,  3518,
    2575
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -256,  -256,  -256,   866,     1,  -256,  -256,  -256,   851,   -19,
    -168,   -42,  -132,  -127,  -124,  -119,  -116,  -111,  -103,   -75,
     -18,   442,  -248,  1480,  1553,  1363,  1210,  1111,   958,   791,
    -255,  -180,  -252,   227,    22,     0,   624
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,    48,    10,    17,    18,    19,    49,
      30,    50,    51,    52,    53,    54,    55,    56,    57,    58,
     128,    60,   107,    61,    62,    63,    64,    65,    66,    67,
     131,   102,   144,    68,   129,    69,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,     9,    26,    27,   259,   113,   154,    11,     9,    90,
     236,   248,    59,    24,   249,    21,   331,    20,   -80,   250,
     -79,   -81,   251,   -82,   237,    82,   -48,   252,    20,    88,
     166,   346,   168,    59,    15,   253,    12,   170,    16,   -14,
     -48,   -78,   357,    28,   359,   147,   -48,    25,    14,   364,
     -48,    22,   -34,   100,   -34,   -34,   -34,   -34,   -34,   -34,
     110,   111,    23,   254,   -34,   -34,   -34,   -34,   -34,   -34,
     -13,   -34,   -34,   162,   394,   -34,   -34,   321,   -34,   -34,
     328,   -34,   400,    75,   -34,   -34,   -34,    76,   167,   405,
      -9,    -9,    -9,    -9,    73,   343,    97,   411,   -52,   -52,
     -52,    77,   211,   212,    34,    35,    78,   420,    38,    39,
      79,    40,    85,   361,   -52,   426,   303,   -52,   -11,   247,
     255,   155,    34,    35,    47,    80,    38,    39,    83,    40,
     304,    84,   432,   305,   -47,   -48,   -40,    86,   256,   246,
     -40,    89,    47,   -44,    59,   -63,    59,    91,   -47,   -48,
     -63,    59,   -48,   149,   -47,   -63,   -63,   -44,   -47,   -63,
     -63,    92,   -63,   -44,   269,   -48,   157,   -44,    99,   160,
     -63,   106,   -63,    93,   101,   -63,   108,   112,   114,   -48,
     115,   119,   456,   -44,   284,   132,   120,    94,   116,   -18,
     -40,   -18,   -18,   -18,   -18,   -18,   -18,   -44,   211,   212,
     -44,   -18,   -18,   -18,   -18,   -18,   -18,   302,   -18,   -18,
     -18,   215,   -18,   -18,   -45,   -18,   -18,   326,   -18,   122,
     -19,   -18,   -18,   -18,   -39,   318,   -41,   133,   -45,   213,
     214,   -45,   -27,   139,   -27,   -27,   -27,   -27,   -27,   -27,
     -41,    59,   385,   -41,   -27,   -27,   -27,   -27,   -27,   -27,
     134,   -27,   -27,   -27,   135,   -27,   -27,   -48,   -27,   -27,
      74,   -27,   -45,    71,   -27,   -27,   -27,   272,   -50,   -50,
     266,   -48,   136,    87,   191,   137,   -45,   -48,   138,   388,
     175,   176,   -45,   -50,   177,   178,   -45,   179,   140,   -50,
     -73,   -73,   -73,   -73,   -73,   267,   141,   383,   384,   -41,
     182,   142,   209,    59,   462,   191,   191,   390,   -73,   248,
     -42,   148,   249,   -41,   -73,   293,   145,   250,   -73,   -41,
     251,   271,   -47,   -41,   -42,   252,   211,   212,   151,   234,
     -42,   152,   153,   253,   -42,   287,   -47,   -52,   -52,   -52,
     158,   476,   -47,   478,   159,   163,   248,   480,   248,   249,
     392,   249,   248,   -52,   250,   249,   250,   251,   234,   251,
     250,   254,   252,   251,   252,   403,   271,   -46,   252,   161,
     253,   234,   253,   -43,   234,   287,   253,   -51,   -51,   -51,
     173,   -46,   164,   418,   165,   174,   -77,   -46,   257,   169,
     175,   176,   270,   -51,   177,   178,   109,   179,   254,   477,
     254,   262,   263,   310,   254,   180,   237,   181,   268,   191,
     182,   264,   -40,   311,   312,   265,   441,   247,   255,   463,
     -44,   277,   442,   306,   -50,   -50,   278,   446,   283,   191,
     286,   -50,   -50,   447,   -44,   279,   256,   246,   280,   -50,
     -44,   322,   451,   289,   295,   -50,   -50,   290,   452,   -50,
     291,   301,   191,   323,   247,   255,   247,   255,   292,   296,
     247,   255,   297,   209,   -45,   286,   -49,   -49,   -73,   -73,
     -73,   -73,   -73,   256,   246,   256,   246,   -61,   -45,   256,
     246,   -49,   -61,   298,   -45,   332,   -73,   -61,   -61,   183,
     209,   -61,   -61,   275,   -61,   211,   212,   191,   191,   191,
     191,   191,   -61,   314,   -61,   209,   130,   -61,   -48,   272,
     -49,   -49,   209,   209,   209,   209,   209,   203,   209,   315,
     183,   183,   -48,   209,   -42,   -49,   117,   316,   395,   347,
     234,   -49,   234,   234,   234,   234,   123,   317,   -42,   211,
     212,   -42,   191,   191,   226,   324,   306,   -49,   -49,   -66,
     285,   -47,   191,   319,   -66,   234,   305,   -46,   325,   -66,
     -66,   146,   -49,   -66,   -66,   -47,   -66,   335,   -49,   336,
     234,   -46,   -49,   226,   -66,   150,   -66,   -46,   143,   -66,
     -63,   -46,   156,   350,   -48,   -63,   226,   351,   234,   226,
     -63,   -63,   368,   369,   -63,   -63,   379,   -63,   -48,   380,
     285,   -46,   386,   173,   406,   -63,   209,   -63,   174,   327,
     -63,   -48,   381,   175,   176,   -46,   183,   177,   178,   382,
     179,   234,   387,   183,   183,   -48,   389,   234,   180,   391,
     181,   414,   234,   182,   -48,   -63,   203,   -48,   234,   396,
     -63,   -48,   397,   203,   183,   -63,   -63,   234,   -48,   -63,
     -63,   -48,   -63,   234,   416,   -48,   209,   421,   -63,   226,
     -63,   457,   -63,   -63,   342,   -63,   226,   183,   -63,   -63,
     -48,   192,   -63,   -63,   398,   -63,   407,   408,   203,   313,
     -41,   -61,   409,   -63,   -48,   -63,   -61,   360,   -63,   415,
     471,   -61,   -61,   417,   -41,   -61,   -61,   422,   -61,   210,
     -41,   423,   192,   192,   424,   203,   -61,   333,   -61,   429,
     393,   -61,   183,   183,   183,   183,   183,   430,   433,   434,
     203,    97,   348,   -51,   -51,   -51,   235,   203,   203,   203,
     203,   203,   435,   203,   436,    96,   -50,   -50,   203,   -51,
     366,   437,   -51,   438,   439,   226,   374,   226,   226,   226,
     226,   -50,   -42,   -39,   -50,   235,     1,   183,   183,     2,
       3,     4,     5,   440,   -66,   443,   -42,   183,   235,   -66,
     226,   235,   -42,   365,   -66,   -66,   444,   402,   -66,   -66,
     445,   -66,   448,   211,   212,   226,    95,   -47,   449,   -66,
     -41,   -66,   413,   399,   -66,    96,   -49,   -49,   192,   -42,
     450,   -47,   -61,   226,   -47,   192,   192,   -61,   453,   454,
     428,   -49,   -61,   -61,   -49,   458,   -61,   -61,   210,   -61,
     465,   203,    95,   -46,   371,   210,   192,   -61,   466,   -61,
     459,   404,   -61,   460,   372,   373,   226,   -46,   190,   461,
     -46,   235,   226,   474,   261,   467,   401,   226,   235,   192,
     468,   469,   470,   226,   175,   176,   211,   212,   177,   178,
     210,   179,   226,   472,   475,   412,   208,   427,   226,   190,
     190,   203,   479,    13,   182,   211,   212,   211,   212,    31,
     464,     0,   -73,   -73,   -73,   -73,   -73,   210,     0,   127,
       0,     0,     0,   233,   192,   192,   192,   192,   192,     0,
     -73,     0,   210,   -73,     0,    71,     0,    72,     0,   210,
     210,   210,   210,   210,     0,   210,     2,     3,     4,     5,
     210,     0,   233,     0,     0,     0,     0,   235,     0,   235,
     235,   235,   235,     0,     0,   233,   -66,     0,   233,   192,
     192,   -66,     0,     0,     0,     0,   -66,   -66,     0,   192,
     -66,   -66,   235,   -66,   -83,   -83,   -83,   -83,   -83,     0,
       0,   -66,     0,   -66,     0,   410,   -66,   235,     0,     0,
       0,     0,   -83,   190,     0,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,   235,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   190,   -29,   -29,   -29,     0,   -29,   -29,
     281,   -29,   -29,   210,   -29,   189,     0,   -29,   -29,   -29,
     195,   196,     0,     0,   197,   198,   190,   199,   235,     0,
       0,     0,     0,     0,   235,   282,     0,   208,   276,   235,
     202,     0,     0,   207,     0,   235,   189,   189,   195,   196,
       0,     0,   197,   198,   235,   199,     0,     0,     0,     0,
     235,     0,     0,   210,   208,   126,   299,     0,   202,     0,
     232,   190,   190,   190,   190,   341,   218,   219,     0,   208,
     220,   221,     0,   222,     0,     0,   208,   208,   208,   355,
     208,   300,   208,     0,     0,     0,   225,   208,     0,   232,
       0,     0,     0,     0,   233,     0,   233,   233,   233,   378,
       0,     0,   232,   -61,     0,   232,   190,   190,   -61,     0,
       0,     0,   294,   -61,   -61,     0,   190,   -61,   -61,   233,
     -61,     0,   218,   219,     0,     0,   220,   221,   -61,   222,
     -61,     0,   419,   -61,   233,     0,   -66,     0,     0,     0,
     189,   -66,   225,     0,     0,     0,   -66,   -66,     0,     0,
     -66,   -66,   233,   -66,     0,     0,     0,    81,   188,     0,
     189,   -66,    33,   -66,     0,   425,   -66,    34,    35,     0,
     208,    38,    39,     0,    40,   -73,   -73,   -73,   -73,   -73,
       0,     0,    45,   189,    46,   233,   206,    47,     0,   188,
     188,   233,     0,   -73,   207,     0,   233,     0,     0,   -73,
     362,     0,   233,   -73,     0,     0,     0,   125,     0,     0,
       0,   233,     0,   231,     0,     0,     0,   233,     0,     0,
     208,   207,   -83,   -83,   -83,   -83,   -83,     0,   189,   189,
     189,   340,     0,     0,     0,   273,   207,   -52,   -52,   -52,
     -83,     0,   231,   207,   207,   354,   -83,   207,     0,   207,
     -83,     0,     0,   -52,   207,   231,     0,   187,   231,   -52,
       0,   232,     0,   232,   232,   377,     0,   173,     0,     0,
       0,     0,   174,   189,   189,     0,     0,   175,   176,     0,
       0,   177,   178,   189,   179,   205,   232,     0,   187,   187,
       0,     0,   180,   188,   181,     0,     0,   182,     0,     0,
     307,   232,   -52,   -52,   -52,   124,     0,     0,     0,     0,
       0,     0,   230,   188,     0,   193,     0,     0,   -52,   232,
     194,     0,     0,     0,   -52,   195,   196,     0,   -52,   197,
     198,     0,   199,     0,     0,     0,   188,   207,     0,     0,
     200,   230,   201,     0,     0,   202,     0,   206,     0,     0,
     216,     0,   232,     0,   230,   217,     0,   230,   232,     0,
     218,   219,     0,   232,   220,   221,     0,   222,     0,   232,
       0,     0,     0,     0,   206,   223,     0,   224,   232,     0,
     225,   188,   188,   339,   232,     0,     0,   207,     0,   206,
       0,   273,   187,   -51,   -51,   -51,   206,   353,     0,     0,
     206,     0,   206,     0,     0,     0,     0,   206,     0,   -51,
     186,     0,   187,     0,   231,   -51,   231,   376,     0,   -73,
     -73,   -73,   -73,   -73,     0,     0,   188,   188,     0,     0,
     -73,   -73,   -73,   -73,   -73,   187,   188,   -73,   204,   231,
       0,   186,   186,   -73,   367,     0,   205,   -73,   -73,     0,
       0,   -73,     0,     0,   231,   103,   121,     0,   -84,   -84,
     -84,   -84,   -84,     0,     0,   229,   -73,   -73,   -73,   -73,
     -73,     0,   231,   205,     0,     0,   -84,     0,     0,     0,
     187,   338,   -84,     0,   -73,     0,   -84,   -73,   205,     0,
     206,    72,     0,     0,   229,   352,     0,     0,     0,   205,
     307,   205,   -51,   -51,   -51,   231,   205,   229,     0,     0,
     229,   231,     0,   230,     0,   375,   231,     0,   -51,     0,
       0,     0,   231,     0,   -51,   187,   187,   184,   -51,     0,
       0,   231,     0,     0,     0,   187,     0,   231,   230,     0,
     206,     0,     0,     0,     0,   186,   -85,   -85,   -85,   -85,
     -85,     0,     0,   230,     0,   104,    -7,    -7,   184,   184,
      -7,    -7,    -7,    -7,   -85,   186,     0,     0,     0,     0,
     -85,   230,     0,     0,   -85,     0,     0,   -76,   -76,   -76,
     -76,   -76,   227,     0,     0,     0,     0,     0,   186,   205,
     -54,   308,   -54,   -54,   -54,   -76,     0,     0,     0,   309,
     185,   -76,     0,     0,   230,   -76,     0,     0,   -54,     0,
     230,   227,     0,     0,   -54,   230,     0,     0,   -54,     0,
       0,   230,     0,     0,   227,     0,   204,   227,   105,     0,
     230,   185,   185,   337,     0,     0,   230,     0,     0,   205,
       0,   204,     0,   -56,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,   204,     0,   204,   228,     0,     0,     0,   204,
       0,   -56,   184,     0,     0,     0,   370,   -56,     0,     0,
       0,   -56,   -84,   -84,   -84,   -84,   -84,     0,   186,   186,
       0,     0,   184,     0,   228,     0,     0,     0,   186,     0,
     -84,   229,   -57,   -57,   -57,   -57,   -57,   228,     0,     0,
     228,     0,     0,     0,     0,   184,   229,    -2,     1,     0,
     -57,     2,     3,     4,     5,     0,   -57,     0,     0,     0,
     -57,     0,     0,     0,   229,     0,   -74,   -74,   -74,   -74,
     -74,     0,    -4,    -4,     0,   185,    -4,    -4,    -4,    -4,
       0,     0,   204,   330,   -74,     0,     0,     0,     0,     0,
     -74,     0,     0,     0,   -74,   185,     0,   229,   345,     0,
      -6,    -6,     0,   229,    -6,    -6,    -6,    -6,   229,   356,
       0,   358,     0,     0,   229,     0,   363,     0,   185,     0,
       0,     0,     0,   229,   -85,   -85,   -85,   -85,   -85,   229,
       0,     0,   204,     0,     0,   184,   184,   -59,   -59,   -59,
     -59,   -59,   -85,     0,     0,   184,     0,     0,   227,   -58,
     -58,   -58,   -58,   -58,     0,   -59,   105,     0,     0,     0,
       0,   -59,     0,   227,     0,   -59,     0,   -58,     0,     0,
       0,   105,     0,   -58,     0,     0,     0,   -58,     0,     0,
       0,   227,   105,     0,   105,     0,     0,     0,     0,   105,
       0,     0,   -73,   -73,   -73,   -73,   -73,     0,     0,   431,
       0,   -83,   -83,   -83,   -83,   -83,     0,     0,   185,   185,
     -73,     0,     0,   -73,   227,     0,     0,   118,   185,   -83,
     227,   228,   -83,     0,     0,   227,   -73,   -73,   -73,   -73,
     -73,   227,     0,     0,     0,     0,   228,     0,     0,     0,
     227,     0,     0,     0,   -73,     0,   227,     0,     0,   455,
     -73,   260,     0,     0,   228,   -73,   -73,   -73,   -73,   -73,
       0,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   105,   -73,   -24,   -24,   -24,   -24,   -24,   -24,
     344,   -24,   -24,   -24,     0,   -24,   -24,   228,   -24,   -24,
       0,   -24,     0,   228,   -24,   -24,   -24,     0,   228,     0,
       0,    -5,    -5,     0,   228,    -5,    -5,    -5,    -5,     0,
       0,     0,     0,   228,   -73,   -73,   -73,   -73,   -73,   228,
       0,   -21,   105,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,   -73,   -21,   -21,   -21,   -21,   -21,   -21,   349,
     -21,   -21,   -21,     0,   -21,   -21,     0,   -21,   -21,     0,
     -21,     0,     0,   -21,   -21,   -21,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,     0,   -22,   -22,     0,   -22,     0,     0,   -22,   -22,
     -22,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,     0,   -23,   -23,     0,   -23,   -23,     0,
     -23,     0,     0,   -23,   -23,   -23,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -26,
     -26,     0,   -26,   -26,     0,   -26,     0,     0,   -26,   -26,
     -26,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,
     -25,     0,     0,   -25,   -25,   -25,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,     0,   -17,
     -17,     0,   -17,   -17,     0,   -17,     0,     0,   -17,   -17,
     -17,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,     0,     0,   -28,   -28,   -28,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,   -38,
     -38,     0,   -38,   -38,     0,   -38,     0,     0,   -38,   -38,
     -38,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,
     -36,     0,     0,   -36,   -36,   -36,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,
      -8,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,   -16,   -16,     0,   -16,   -16,     0,   -16,   -16,     0,
     -16,     0,     0,   -16,   -16,   -16,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,     0,   -30,   -30,     0,   -30,     0,     0,   -30,   -30,
     -30,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,
     -31,     0,     0,   -31,   -31,   -31,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,     0,   -32,   -32,     0,   -32,     0,     0,   -32,   -32,
     -32,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   473,     0,   -34,   -34,     0,   -34,   -34,     0,
     -34,     0,     0,   -34,   -34,   -34,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,
     -35,     0,   -35,   -35,     0,   -35,     0,     0,   -35,   -35,
     -35,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,
     -37,     0,     0,   -37,   -37,   -37,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -33,
     -33,     0,   -33,   -33,     0,   -33,     0,     0,   -33,   -33,
     -33,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
       0,     0,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
     -15,   -15,     0,     0,   -15,   -15,     0,   -15,   -15,     0,
     -15,     0,     0,   -15,    29,   -15,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,
     -27,     0,   -27,   -27,     0,   -27,     0,     0,   -27,   -27,
     -27,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,     0,     0,   -29,   -29,     0,   -29,   -29,     0,
     -29,     0,     0,   -29,   -29,   -29,   171,     0,    32,     2,
       3,     4,     5,    33,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,     0,    40,    41,     0,     0,    42,
      43,     0,    44,    45,     0,    46,     0,     0,    47,   -20,
     172,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,     0,     0,   -24,   -24,     0,   -24,   -24,     0,
     -24,     0,     0,   -24,   -24,   -24,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,     0,     0,   -21,
     -21,     0,   -21,   -21,     0,   -21,     0,     0,   -21,   -21,
     -21,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,     0,     0,   -22,   -22,     0,   -22,   -22,     0,
     -22,     0,     0,   -22,   -22,   -22,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,   -23,   -23,     0,     0,   -23,
     -23,     0,   -23,   -23,     0,   -23,     0,     0,   -23,   -23,
     -23,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,     0,     0,   -26,   -26,     0,   -26,   -26,     0,
     -26,     0,     0,   -26,   -26,   -26,   -25,     0,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,   -25,
     -25,     0,   -25,   -25,     0,   -25,     0,     0,   -25,   -25,
     -25,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,     0,     0,   -28,   -28,   -28,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,
     -38,     0,   -38,   -38,     0,   -38,     0,     0,   -38,   -38,
     -38,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,     0,     0,   -36,   -36,     0,   -36,   -36,     0,
     -36,     0,     0,   -36,   -36,   -36,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,   -30,
     -30,     0,   -30,   -30,     0,   -30,     0,     0,   -30,   -30,
     -30,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,     0,     0,   -31,   -31,     0,   -31,   -31,     0,
     -31,     0,     0,   -31,   -31,   -31,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,   -32,
     -32,     0,   -32,   -32,     0,   -32,     0,     0,   -32,   -32,
     -32,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,     0,
     -35,     0,     0,   -35,   -35,   -35,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,     0,     0,   -37,
     -37,     0,   -37,   -37,     0,   -37,     0,     0,   -37,   -37,
     -37,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,     0,     0,   -33,   -33,     0,   -33,   -33,     0,
     -33,     0,     0,   -33,   -33,   -33,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,     0,     0,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,     0,     0,   -18,
     -18,     0,   -18,   -18,     0,   -18,     0,     0,   -18,   -18,
     -18,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
       0,     0,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
     -15,   -15,     0,     0,   -15,   -15,     0,   -15,   -15,     0,
     -15,     0,     0,   -15,   258,   -15,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,    -8,    -8,     0,     0,    -8,
      -8,     0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,
      -8,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
       0,     0,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
     -15,   -15,     0,     0,   -15,   -15,     0,   -15,   -15,     0,
     -15,     0,     0,   -15,   320,   -15,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -17,   -17,   -17,   -17,     0,   -17,   -17,     0,     0,   -17,
     -17,     0,   -17,   -17,     0,   -17,     0,     0,   -17,   -17,
     -17,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,   -16,     0,     0,   -16,   -16,     0,   -16,   -16,     0,
     -16,     0,     0,   -16,   -16,   -16,   171,     0,    32,     2,
       3,     4,     5,    33,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,     0,    40,    41,     0,     0,    42,
      43,     0,    44,    45,     0,    46,     0,     0,    47,   238,
     172,    32,     2,     3,     4,     5,    33,     0,     0,     0,
       0,    34,    35,   239,   240,    38,    39,     0,    40,   241,
       0,     0,   242,   243,     0,   244,    45,     0,    46,     0,
       0,    47,     0,   245,   -65,   -65,   -65,   -65,   -65,   -75,
     -75,   -75,   -75,   -75,     0,     0,   -53,   308,   -53,   -53,
     -53,     0,   -65,     0,     0,     0,     0,   -75,   -65,     0,
       0,     0,   -65,   -75,   -53,     0,     0,   -75,     0,     0,
     -53,     0,     0,     0,   -53,   -55,   -55,   -55,   -55,   -55,
     -60,   -60,   -60,   -60,   -60,     0,     0,   -41,   -41,   -41,
     -41,   -41,     0,   -55,     0,     0,     0,     0,   -60,   -55,
       0,     0,     0,   -55,   -60,   -41,     0,     0,   -60,     0,
       0,   -41,     0,     0,     0,   -41,   -42,   -42,   -42,   -42,
     -42,   -69,   -69,   -69,   -69,   -69,     0,     0,   -70,   -70,
     -70,   -70,   -70,     0,   -42,     0,     0,     0,     0,   -69,
     -42,     0,     0,     0,   -42,   -69,   -70,     0,     0,   -69,
       0,     0,   -70,     0,     0,     0,   -70,   -68,   -68,   -68,
     -68,   -68,   -64,   -64,   -64,   -64,   -64,     0,     0,   -71,
     -71,   -71,   -71,   -71,     0,   -68,     0,     0,     0,     0,
     -64,   -68,     0,     0,     0,   -68,   -64,   -71,     0,     0,
     -64,     0,     0,   -71,     0,     0,     0,   -71,   -72,   -72,
     -72,   -72,   -72,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -67,   -67,   -67,   -67,   -67,     0,   -72,     0,     0,     0,
       0,   -62,   -72,     0,     0,     0,   -72,   -62,   -67,     0,
       0,   -62,     0,     0,   -67,     0,     0,     0,   -67,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -83,
     -83,   -83,   -83,   -83,    -3,    -3,     0,   -73,    -3,    -3,
      -3,    -3,   -73,   -73,   329,     0,     0,   -83,   -73,   334,
       0,     0,     0,   -83,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,   -85,   -76,   -76,   -76,   -76,   -76,    -8,
      -8,     0,   -84,    -8,    -8,    -8,    -8,   -85,   -84,     0,
     -18,   -18,   -76,   -85,   -18,   -18,   -18,   -18,   -76,   -54,
     274,   -54,   -54,   -54,   -56,   -56,   -56,   -56,   -56,   -57,
     -57,   -57,   -57,   -57,   -12,   -12,     0,   -54,   -12,   -12,
     -12,   -12,   -56,   -54,     0,   -10,   -10,   -57,   -56,   -10,
     -10,   -10,   -10,   -57,   -74,   -74,   -74,   -74,   -74,   -59,
     -59,   -59,   -59,   -59,   -58,   -58,   -58,   -58,   -58,   -17,
     -17,     0,   -74,   -17,   -17,   -17,   -17,   -59,   -74,     0,
     -16,   -16,   -58,   -59,   -16,   -16,   -16,   -16,   -58,   -65,
     -65,   -65,   -65,   -65,   -75,   -75,   -75,   -75,   -75,   -53,
     274,   -53,   -53,   -53,     0,     0,     0,   -65,     0,     0,
       0,     0,   -75,   -65,     0,     0,     0,   -53,   -75,     0,
       0,     0,     0,   -53,   -55,   -55,   -55,   -55,   -55,   -60,
     -60,   -60,   -60,   -60,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,   -55,     0,     0,     0,     0,   -60,   -55,     0,
       0,     0,   -41,   -60,     0,     0,     0,     0,   -41,   -42,
     -42,   -42,   -42,   -42,   -69,   -69,   -69,   -69,   -69,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,   -42,     0,     0,
       0,     0,   -69,   -42,     0,     0,     0,   -70,   -69,     0,
       0,     0,     0,   -70,   -68,   -68,   -68,   -68,   -68,   -64,
     -64,   -64,   -64,   -64,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,   -68,     0,     0,     0,     0,   -64,   -68,     0,
       0,     0,   -71,   -64,     0,     0,     0,     0,   -71,   -72,
     -72,   -72,   -72,   -72,   -62,   -62,   -62,   -62,   -62,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,   -72,     0,     0,
       0,     0,   -62,   -72,     0,     0,     0,   -67,   -62,     0,
       0,     0,     0,   -67,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,   -85,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,   -84,     0,     0,   -84,     0,   -85,     0,     0,
     -85,     0,   -76,     0,     0,   -76,   -54,    98,   -54,   -54,
     -54,   -56,   -56,   -56,   -56,   -56,   -57,   -57,   -57,   -57,
     -57,     0,     0,     0,   -54,     0,     0,   -54,     0,   -56,
       0,     0,   -56,     0,   -57,     0,     0,   -57,   -74,   -74,
     -74,   -74,   -74,   -59,   -59,   -59,   -59,   -59,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,   -74,     0,     0,   -74,
       0,   -59,     0,     0,   -59,     0,   -58,     0,     0,   -58,
     -65,   -65,   -65,   -65,   -65,   -75,   -75,   -75,   -75,   -75,
     -53,    98,   -53,   -53,   -53,     0,     0,     0,   -65,     0,
       0,   -65,     0,   -75,     0,     0,   -75,     0,   -53,     0,
       0,   -53,   -55,   -55,   -55,   -55,   -55,   -60,   -60,   -60,
     -60,   -60,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
     -55,     0,     0,   -55,     0,   -60,     0,     0,   -60,     0,
     -41,     0,     0,   -41,   -42,   -42,   -42,   -42,   -42,   -69,
     -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,   -42,     0,     0,   -42,     0,   -69,     0,     0,
     -69,     0,   -70,     0,     0,   -70,   -68,   -68,   -68,   -68,
     -68,   -64,   -64,   -64,   -64,   -64,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,   -68,     0,     0,   -68,     0,   -64,
       0,     0,   -64,     0,   -71,     0,     0,   -71,   -72,   -72,
     -72,   -72,   -72,   -62,   -62,   -62,   -62,   -62,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,   -72,     0,     0,   -72,
       0,   -62,     0,     0,   -62,     0,   -67,     0,     0,   -67,
     -76,   -76,   -76,   -76,   -76,   -54,   288,   -54,   -54,   -54,
     -56,   -56,   -56,   -56,   -56,     0,     0,     0,   -76,     0,
       0,     0,     0,   -54,     0,     0,     0,     0,   -56,   -57,
     -57,   -57,   -57,   -57,   -74,   -74,   -74,   -74,   -74,   -59,
     -59,   -59,   -59,   -59,     0,     0,     0,   -57,     0,     0,
       0,     0,   -74,     0,     0,     0,     0,   -59,   -58,   -58,
     -58,   -58,   -58,   -65,   -65,   -65,   -65,   -65,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,   -58,     0,     0,     0,
       0,   -65,     0,     0,     0,     0,   -75,   -53,   288,   -53,
     -53,   -53,   -55,   -55,   -55,   -55,   -55,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,   -53,     0,     0,     0,     0,
     -55,     0,     0,     0,     0,   -60,   -41,   -41,   -41,   -41,
     -41,   -42,   -42,   -42,   -42,   -42,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,   -41,     0,     0,     0,     0,   -42,
       0,     0,     0,     0,   -69,   -70,   -70,   -70,   -70,   -70,
     -68,   -68,   -68,   -68,   -68,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,   -70,     0,     0,     0,     0,   -68,     0,
       0,     0,     0,   -64,   -71,   -71,   -71,   -71,   -71,   -72,
     -72,   -72,   -72,   -72,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,   -71,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,   -62,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -67
};

static const yytype_int16 yycheck[] =
{
       0,     0,    21,    22,   172,    80,   138,     7,     7,    51,
      12,   138,    30,     1,   138,    32,   264,    17,     3,   138,
       3,     3,   138,     3,    26,    43,    12,   138,    28,    47,
     162,   279,   164,    51,    29,   138,     0,   169,    33,    32,
      26,    32,   290,    36,   292,    36,    32,    35,     3,   297,
      36,    32,     1,    71,     3,     4,     5,     6,     7,     8,
      78,    79,     3,   138,    13,    14,    15,    16,    17,    18,
      32,    20,    21,    22,   329,    24,    25,   245,    27,    28,
     260,    30,   334,    33,    33,    34,    35,    33,   163,   344,
       4,     5,     6,     7,     3,   275,     8,   349,    10,    11,
      12,    33,    13,    14,    13,    14,    33,   362,    17,    18,
      33,    20,     3,   293,    26,   367,    12,    29,    32,   138,
     138,   139,    13,    14,    33,    33,    17,    18,    33,    20,
      26,    33,   380,    11,    12,    12,    32,    28,   138,   138,
      36,    34,    33,    12,   162,     3,   164,    29,    26,    26,
       8,   169,    29,   131,    32,    13,    14,    26,    36,    17,
      18,    29,    20,    32,   182,    12,   144,    36,     3,   147,
      28,     3,    30,    12,    32,    33,     3,     3,    29,    26,
       3,    33,   430,    12,   202,    32,    32,    26,     3,     1,
      29,     3,     4,     5,     6,     7,     8,    26,    13,    14,
      29,    13,    14,    15,    16,    17,    18,   225,    20,    21,
      22,    29,    24,    25,    12,    27,    28,   259,    30,     3,
      34,    33,    34,    35,    29,   243,    12,    26,    26,    13,
      14,    29,     1,    29,     3,     4,     5,     6,     7,     8,
      26,   259,   317,    29,    13,    14,    15,    16,    17,    18,
      32,    20,    21,    22,    32,    24,    25,    12,    27,    28,
      33,    30,    12,    31,    33,    34,    35,    10,    11,    12,
       3,    26,    32,    46,    47,    32,    26,    32,    32,   321,
      13,    14,    32,    26,    17,    18,    36,    20,    26,    32,
       8,     9,    10,    11,    12,    28,    32,   315,   316,    12,
      33,    32,    75,   321,   436,    78,    79,   325,    26,   436,
      12,    32,   436,    26,    32,    33,     3,   436,    36,    32,
     436,    11,    12,    36,    26,   436,    13,    14,    29,   102,
      32,    29,    29,   436,    36,     8,    26,    10,    11,    12,
      32,   473,    32,   475,    32,    29,   473,   479,   475,   473,
     328,   475,   479,    26,   473,   479,   475,   473,   131,   475,
     479,   436,   473,   479,   475,   343,    11,    12,   479,    32,
     473,   144,   475,    32,   147,     8,   479,    10,    11,    12,
       3,    26,    32,   361,    32,     8,    32,    32,     3,    32,
      13,    14,    12,    26,    17,    18,    19,    20,   473,   474,
     475,   174,    33,     3,   479,    28,    26,    30,   181,   182,
      33,    33,    32,    13,    14,    33,   394,   436,   436,   437,
      12,   194,   400,    10,    11,    12,    33,   405,   201,   202,
      10,    11,    12,   411,    26,    33,   436,   436,    33,    26,
      32,    29,   420,    33,   217,    32,    26,    33,   426,    36,
      33,   224,   225,    29,   473,   473,   475,   475,    33,    33,
     479,   479,    33,   236,    12,    10,    11,    12,     8,     9,
      10,    11,    12,   473,   473,   475,   475,     3,    26,   479,
     479,    26,     8,    33,    32,     3,    26,    13,    14,    47,
     263,    17,    18,    33,    20,    13,    14,   270,   271,   272,
     273,   274,    28,    33,    30,   278,    32,    33,    12,    10,
      11,    12,   285,   286,   287,   288,   289,    75,   291,    33,
      78,    79,    26,   296,    12,    26,    84,    33,    32,     3,
     303,    32,   305,   306,   307,   308,    94,    33,    26,    13,
      14,    29,   315,   316,   102,     3,    10,    11,    12,     3,
      11,    12,   325,    33,     8,   328,    11,    12,    31,    13,
      14,   119,    26,    17,    18,    26,    20,    33,    32,    32,
     343,    26,    36,   131,    28,   133,    30,    32,    32,    33,
       3,    36,   140,    33,    12,     8,   144,    32,   361,   147,
      13,    14,    33,    32,    17,    18,    33,    20,    26,    33,
      11,    12,    29,     3,    32,    28,   379,    30,     8,    32,
      33,    12,     3,    13,    14,    26,   174,    17,    18,    19,
      20,   394,     3,   181,   182,    26,    29,   400,    28,    34,
      30,    32,   405,    33,    12,     3,   194,    12,   411,    32,
       8,    12,    32,   201,   202,    13,    14,   420,    26,    17,
      18,    26,    20,   426,    32,    26,   429,    32,     3,   217,
      28,    32,    30,     8,    32,    33,   224,   225,    13,    14,
      12,    47,    17,    18,    32,    20,    32,    32,   236,   237,
      12,     3,    32,    28,    26,    30,     8,    32,    33,    32,
      32,    13,    14,    32,    26,    17,    18,    32,    20,    75,
      32,    32,    78,    79,    32,   263,    28,   265,    30,    33,
      32,    33,   270,   271,   272,   273,   274,    33,    32,    32,
     278,     8,   280,    10,    11,    12,   102,   285,   286,   287,
     288,   289,    32,   291,    32,    10,    11,    12,   296,    26,
     298,    29,    29,    26,    34,   303,   304,   305,   306,   307,
     308,    26,    12,    32,    29,   131,     1,   315,   316,     4,
       5,     6,     7,    32,     3,    32,    26,   325,   144,     8,
     328,   147,    32,     3,    13,    14,    32,   335,    17,    18,
      32,    20,    32,    13,    14,   343,    11,    12,    32,    28,
      32,    30,   350,    32,    33,    10,    11,    12,   174,    32,
      32,    26,     3,   361,    29,   181,   182,     8,    32,    32,
     368,    26,    13,    14,    29,    32,    17,    18,   194,    20,
      32,   379,    11,    12,     3,   201,   202,    28,    32,    30,
      29,    32,    33,    29,    13,    14,   394,    26,    47,    29,
      29,   217,   400,    29,     3,    32,     3,   405,   224,   225,
      32,    32,    32,   411,    13,    14,    13,    14,    17,    18,
     236,    20,   420,    32,    32,     3,    75,     3,   426,    78,
      79,   429,    32,     7,    33,    13,    14,    13,    14,    28,
     438,    -1,     8,     9,    10,    11,    12,   263,    -1,    98,
      -1,    -1,    -1,   102,   270,   271,   272,   273,   274,    -1,
      26,    -1,   278,    29,    -1,    31,    -1,    33,    -1,   285,
     286,   287,   288,   289,    -1,   291,     4,     5,     6,     7,
     296,    -1,   131,    -1,    -1,    -1,    -1,   303,    -1,   305,
     306,   307,   308,    -1,    -1,   144,     3,    -1,   147,   315,
     316,     8,    -1,    -1,    -1,    -1,    13,    14,    -1,   325,
      17,    18,   328,    20,     8,     9,    10,    11,    12,    -1,
      -1,    28,    -1,    30,    -1,    32,    33,   343,    -1,    -1,
      -1,    -1,    26,   182,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,   361,    -1,    13,    14,    15,
      16,    17,    18,   202,    20,    21,    22,    -1,    24,    25,
       3,    27,    28,   379,    30,    47,    -1,    33,    34,    35,
      13,    14,    -1,    -1,    17,    18,   225,    20,   394,    -1,
      -1,    -1,    -1,    -1,   400,    28,    -1,   236,     3,   405,
      33,    -1,    -1,    75,    -1,   411,    78,    79,    13,    14,
      -1,    -1,    17,    18,   420,    20,    -1,    -1,    -1,    -1,
     426,    -1,    -1,   429,   263,    97,     3,    -1,    33,    -1,
     102,   270,   271,   272,   273,   274,    13,    14,    -1,   278,
      17,    18,    -1,    20,    -1,    -1,   285,   286,   287,   288,
     289,    28,   291,    -1,    -1,    -1,    33,   296,    -1,   131,
      -1,    -1,    -1,    -1,   303,    -1,   305,   306,   307,   308,
      -1,    -1,   144,     3,    -1,   147,   315,   316,     8,    -1,
      -1,    -1,     3,    13,    14,    -1,   325,    17,    18,   328,
      20,    -1,    13,    14,    -1,    -1,    17,    18,    28,    20,
      30,    -1,    32,    33,   343,    -1,     3,    -1,    -1,    -1,
     182,     8,    33,    -1,    -1,    -1,    13,    14,    -1,    -1,
      17,    18,   361,    20,    -1,    -1,    -1,     3,    47,    -1,
     202,    28,     8,    30,    -1,    32,    33,    13,    14,    -1,
     379,    17,    18,    -1,    20,     8,     9,    10,    11,    12,
      -1,    -1,    28,   225,    30,   394,    75,    33,    -1,    78,
      79,   400,    -1,    26,   236,    -1,   405,    -1,    -1,    32,
      33,    -1,   411,    36,    -1,    -1,    -1,    96,    -1,    -1,
      -1,   420,    -1,   102,    -1,    -1,    -1,   426,    -1,    -1,
     429,   263,     8,     9,    10,    11,    12,    -1,   270,   271,
     272,   273,    -1,    -1,    -1,     8,   278,    10,    11,    12,
      26,    -1,   131,   285,   286,   287,    32,   289,    -1,   291,
      36,    -1,    -1,    26,   296,   144,    -1,    47,   147,    32,
      -1,   303,    -1,   305,   306,   307,    -1,     3,    -1,    -1,
      -1,    -1,     8,   315,   316,    -1,    -1,    13,    14,    -1,
      -1,    17,    18,   325,    20,    75,   328,    -1,    78,    79,
      -1,    -1,    28,   182,    30,    -1,    -1,    33,    -1,    -1,
       8,   343,    10,    11,    12,    95,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   202,    -1,     3,    -1,    -1,    26,   361,
       8,    -1,    -1,    -1,    32,    13,    14,    -1,    36,    17,
      18,    -1,    20,    -1,    -1,    -1,   225,   379,    -1,    -1,
      28,   131,    30,    -1,    -1,    33,    -1,   236,    -1,    -1,
       3,    -1,   394,    -1,   144,     8,    -1,   147,   400,    -1,
      13,    14,    -1,   405,    17,    18,    -1,    20,    -1,   411,
      -1,    -1,    -1,    -1,   263,    28,    -1,    30,   420,    -1,
      33,   270,   271,   272,   426,    -1,    -1,   429,    -1,   278,
      -1,     8,   182,    10,    11,    12,   285,   286,    -1,    -1,
     289,    -1,   291,    -1,    -1,    -1,    -1,   296,    -1,    26,
      47,    -1,   202,    -1,   303,    32,   305,   306,    -1,     8,
       9,    10,    11,    12,    -1,    -1,   315,   316,    -1,    -1,
       8,     9,    10,    11,    12,   225,   325,    26,    75,   328,
      -1,    78,    79,    32,    33,    -1,   236,    36,    26,    -1,
      -1,    29,    -1,    -1,   343,    33,    93,    -1,     8,     9,
      10,    11,    12,    -1,    -1,   102,     8,     9,    10,    11,
      12,    -1,   361,   263,    -1,    -1,    26,    -1,    -1,    -1,
     270,   271,    32,    -1,    26,    -1,    36,    29,   278,    -1,
     379,    33,    -1,    -1,   131,   285,    -1,    -1,    -1,   289,
       8,   291,    10,    11,    12,   394,   296,   144,    -1,    -1,
     147,   400,    -1,   303,    -1,   305,   405,    -1,    26,    -1,
      -1,    -1,   411,    -1,    32,   315,   316,    47,    36,    -1,
      -1,   420,    -1,    -1,    -1,   325,    -1,   426,   328,    -1,
     429,    -1,    -1,    -1,    -1,   182,     8,     9,    10,    11,
      12,    -1,    -1,   343,    -1,    75,     0,     1,    78,    79,
       4,     5,     6,     7,    26,   202,    -1,    -1,    -1,    -1,
      32,   361,    -1,    -1,    36,    -1,    -1,     8,     9,    10,
      11,    12,   102,    -1,    -1,    -1,    -1,    -1,   225,   379,
       8,     9,    10,    11,    12,    26,    -1,    -1,    -1,   236,
      47,    32,    -1,    -1,   394,    36,    -1,    -1,    26,    -1,
     400,   131,    -1,    -1,    32,   405,    -1,    -1,    36,    -1,
      -1,   411,    -1,    -1,   144,    -1,   263,   147,    75,    -1,
     420,    78,    79,   270,    -1,    -1,   426,    -1,    -1,   429,
      -1,   278,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,   289,    -1,   291,   102,    -1,    -1,    -1,   296,
      -1,    26,   182,    -1,    -1,    -1,   303,    32,    -1,    -1,
      -1,    36,     8,     9,    10,    11,    12,    -1,   315,   316,
      -1,    -1,   202,    -1,   131,    -1,    -1,    -1,   325,    -1,
      26,   328,     8,     9,    10,    11,    12,   144,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   225,   343,     0,     1,    -1,
      26,     4,     5,     6,     7,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,   361,    -1,     8,     9,    10,    11,
      12,    -1,     0,     1,    -1,   182,     4,     5,     6,     7,
      -1,    -1,   379,   263,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    36,   202,    -1,   394,   278,    -1,
       0,     1,    -1,   400,     4,     5,     6,     7,   405,   289,
      -1,   291,    -1,    -1,   411,    -1,   296,    -1,   225,    -1,
      -1,    -1,    -1,   420,     8,     9,    10,    11,    12,   426,
      -1,    -1,   429,    -1,    -1,   315,   316,     8,     9,    10,
      11,    12,    26,    -1,    -1,   325,    -1,    -1,   328,     8,
       9,    10,    11,    12,    -1,    26,   263,    -1,    -1,    -1,
      -1,    32,    -1,   343,    -1,    36,    -1,    26,    -1,    -1,
      -1,   278,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,   361,   289,    -1,   291,    -1,    -1,    -1,    -1,   296,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,   379,
      -1,     8,     9,    10,    11,    12,    -1,    -1,   315,   316,
      26,    -1,    -1,    29,   394,    -1,    -1,    33,   325,    26,
     400,   328,    29,    -1,    -1,   405,     8,     9,    10,    11,
      12,   411,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,
     420,    -1,    -1,    -1,    26,    -1,   426,    -1,    -1,   429,
      32,    33,    -1,    -1,   361,     8,     9,    10,    11,    12,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,   379,    26,    13,    14,    15,    16,    17,    18,
      33,    20,    21,    22,    -1,    24,    25,   394,    27,    28,
      -1,    30,    -1,   400,    33,    34,    35,    -1,   405,    -1,
      -1,     0,     1,    -1,   411,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,   420,     8,     9,    10,    11,    12,   426,
      -1,     1,   429,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    26,    13,    14,    15,    16,    17,    18,    33,
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
      -1,    33,    -1,    35,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    26,    -1,    -1,    -1,    -1,    26,    32,    -1,
      -1,    -1,    36,    32,    26,    -1,    -1,    36,    -1,    -1,
      32,    -1,    -1,    -1,    36,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    26,    -1,    -1,    -1,    -1,    26,    32,
      -1,    -1,    -1,    36,    32,    26,    -1,    -1,    36,    -1,
      -1,    32,    -1,    -1,    -1,    36,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    26,    -1,    -1,    -1,    -1,    26,
      32,    -1,    -1,    -1,    36,    32,    26,    -1,    -1,    36,
      -1,    -1,    32,    -1,    -1,    -1,    36,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    26,    -1,    -1,    -1,    -1,
      26,    32,    -1,    -1,    -1,    36,    32,    26,    -1,    -1,
      36,    -1,    -1,    32,    -1,    -1,    -1,    36,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
       8,     9,    10,    11,    12,    -1,    26,    -1,    -1,    -1,
      -1,    26,    32,    -1,    -1,    -1,    36,    32,    26,    -1,
      -1,    36,    -1,    -1,    32,    -1,    -1,    -1,    36,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     0,     1,    -1,    26,     4,     5,
       6,     7,    26,    32,    33,    -1,    -1,    26,    32,    33,
      -1,    -1,    -1,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     0,
       1,    -1,    26,     4,     5,     6,     7,    26,    32,    -1,
       0,     1,    26,    32,     4,     5,     6,     7,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     0,     1,    -1,    26,     4,     5,
       6,     7,    26,    32,    -1,     0,     1,    26,    32,     4,
       5,     6,     7,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     0,
       1,    -1,    26,     4,     5,     6,     7,    26,    32,    -1,
       0,     1,    26,    32,     4,     5,     6,     7,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    26,    32,    -1,    -1,    -1,    26,    32,    -1,
      -1,    -1,    -1,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    26,    32,    -1,
      -1,    -1,    26,    32,    -1,    -1,    -1,    -1,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    26,    32,    -1,    -1,    -1,    26,    32,    -1,
      -1,    -1,    -1,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    26,    32,    -1,
      -1,    -1,    26,    32,    -1,    -1,    -1,    -1,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    26,    32,    -1,    -1,    -1,    26,    32,    -1,
      -1,    -1,    -1,    32,     8,     9,    10,    11,    12,     8,
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
      -1,    -1,    29,    -1,    26,    -1,    -1,    29,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,    29,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,     8,
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
      -1,    -1,    26,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26
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
      32,    62,     3,    58,    63,    64,    65,    66,    57,    71,
      32,    67,    32,    26,    32,    32,    32,    32,    32,    29,
      26,    32,    32,    32,    69,     3,    58,    36,    32,    71,
      58,    29,    29,    29,    49,    57,    58,    71,    32,    32,
      71,    32,    22,    29,    32,    32,    49,    56,    49,    32,
      49,     1,    35,     3,     8,    13,    14,    17,    18,    20,
      28,    30,    33,    58,    60,    61,    62,    63,    64,    65,
      66,    70,    73,     3,     8,    13,    14,    17,    18,    20,
      28,    30,    33,    58,    62,    63,    64,    65,    66,    70,
      73,    13,    14,    13,    14,    29,     3,     8,    13,    14,
      17,    18,    20,    28,    30,    33,    58,    60,    61,    62,
      63,    64,    65,    66,    70,    73,    12,    26,     1,    15,
      16,    21,    24,    25,    27,    35,    41,    46,    50,    51,
      52,    53,    54,    55,    56,    57,    72,     3,    34,    47,
      33,     3,    70,    33,    33,    33,     3,    28,    70,    57,
      12,    11,    10,     8,     9,    33,     3,    70,    33,    33,
      33,     3,    28,    70,    57,    11,    10,     8,     9,    33,
      33,    33,    33,    33,     3,    70,    33,    33,    33,     3,
      28,    70,    57,    12,    26,    11,    10,     8,     9,    62,
       3,    13,    14,    58,    33,    33,    33,    33,    57,    33,
      34,    47,    29,    29,     3,    31,    48,    32,    68,    33,
      60,    59,     3,    58,    33,    33,    32,    62,    63,    64,
      65,    66,    32,    68,    33,    60,    59,     3,    58,    33,
      33,    32,    63,    64,    65,    66,    60,    59,    60,    59,
      32,    68,    33,    60,    59,     3,    58,    33,    33,    32,
      62,     3,    13,    14,    58,    63,    64,    65,    66,    33,
      33,     3,    19,    57,    57,    56,    29,     3,    48,    29,
      57,    34,    71,    32,    67,    32,    32,    32,    32,    32,
      69,     3,    58,    71,    32,    67,    32,    32,    32,    32,
      32,    69,     3,    58,    32,    32,    32,    32,    71,    32,
      67,    32,    32,    32,    32,    32,    69,     3,    58,    33,
      33,    60,    59,    32,    32,    32,    32,    29,    26,    34,
      32,    71,    71,    32,    32,    32,    71,    71,    32,    32,
      32,    71,    71,    32,    32,    60,    59,    32,    32,    29,
      29,    29,    49,    57,    58,    32,    32,    32,    32,    32,
      32,    32,    32,    22,    29,    32,    49,    56,    49,    32,
      49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    43,
      42,    44,    42,    45,    45,    47,    46,    46,    46,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    50,    51,    52,    52,    53,    54,    55,    56,
      57,    58,    58,    59,    60,    60,    61,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    67,    66,    68,    66,    66,    69,    66,    66,    66,
      66,    66,    66,    70,    70,    70,    70,    71,    71,    72,
      72,    72,    72,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       7,     0,     6,     4,     2,     0,     4,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       5,     5,     5,     9,     5,     7,     3,     7,     2,     3,
       1,     4,     4,     3,     3,     3,     3,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     2,     2,
       4,     0,     6,     0,     5,     3,     0,     6,     4,     4,
       4,     5,     5,     1,     1,     3,     1,     3,     1,     1,
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
#line 105 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2535 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 113 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2546 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 119 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2554 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 124 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2562 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 127 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2570 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 130 "sintatico.y"
          {}
#line 2576 "sintatico.tab.c"
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
#line 2603 "sintatico.tab.c"
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
#line 2634 "sintatico.tab.c"
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
#line 2647 "sintatico.tab.c"
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
#line 2674 "sintatico.tab.c"
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
#line 2686 "sintatico.tab.c"
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
#line 2721 "sintatico.tab.c"
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
#line 2755 "sintatico.tab.c"
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
#line 2769 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 289 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2778 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: '{' '}'  */
#line 293 "sintatico.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_brackets");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "empty", 4);
  }
#line 2788 "sintatico.tab.c"
    break;

  case 18: /* brackets_stmt: error  */
#line 298 "sintatico.y"
          {}
#line 2794 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt stmts  */
#line 301 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2805 "sintatico.tab.c"
    break;

  case 20: /* stmts: stmt  */
#line 307 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2813 "sintatico.tab.c"
    break;

  case 21: /* stmt: for_stmt  */
#line 312 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2821 "sintatico.tab.c"
    break;

  case 22: /* stmt: if_else_stmt  */
#line 315 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2829 "sintatico.tab.c"
    break;

  case 23: /* stmt: return_stmt  */
#line 318 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2837 "sintatico.tab.c"
    break;

  case 24: /* stmt: io_stmt  */
#line 321 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2845 "sintatico.tab.c"
    break;

  case 25: /* stmt: exp_stmt  */
#line 324 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2853 "sintatico.tab.c"
    break;

  case 26: /* stmt: set_stmt  */
#line 327 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2861 "sintatico.tab.c"
    break;

  case 27: /* stmt: var_declaration  */
#line 330 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2869 "sintatico.tab.c"
    break;

  case 28: /* stmt: assignment ';'  */
#line 333 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2877 "sintatico.tab.c"
    break;

  case 29: /* stmt: brackets_stmt  */
#line 336 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2885 "sintatico.tab.c"
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
#line 2905 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 356 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 2915 "sintatico.tab.c"
    break;

  case 32: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 361 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2925 "sintatico.tab.c"
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
#line 2938 "sintatico.tab.c"
    break;

  case 34: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 378 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2949 "sintatico.tab.c"
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
#line 2961 "sintatico.tab.c"
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
#line 2980 "sintatico.tab.c"
    break;

  case 37: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
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
#line 3002 "sintatico.tab.c"
    break;

  case 38: /* exp_stmt: exp ';'  */
#line 428 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3012 "sintatico.tab.c"
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
#line 3034 "sintatico.tab.c"
    break;

  case 40: /* exp: or_exp  */
#line 454 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3042 "sintatico.tab.c"
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
#line 3054 "sintatico.tab.c"
    break;

  case 42: /* set_exp: SET_OP2 '(' set_aux_exp ')'  */
#line 466 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");

  }
#line 3067 "sintatico.tab.c"
    break;

  case 43: /* set_aux_exp: ID INFIX_OP set_exp  */
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
#line 3088 "sintatico.tab.c"
    break;

  case 44: /* set_in_exp: or_exp INFIX_OP ID  */
#line 494 "sintatico.y"
                     {
    (yyval.nodo) = retornaNodo();
    
    int check = checkDeclarado((yyvsp[0].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "Undeclared variable", (yyvsp[0].lexema).corpo);
      errosSemanticos++;
    }
    else{
      if(!checkSet(tabelaSimbolos[check].tipo)) {
        printf("%-15s %d:%-3d - %s\n", "SEMANTIC ERROR", (yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, "'in' right operator only supports the type SET");
        errosSemanticos++;
      }
      (yyval.nodo)->tipo = strdup("INT");
    }

    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 2);
  }
#line 3113 "sintatico.tab.c"
    break;

  case 45: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 514 "sintatico.y"
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
#line 3131 "sintatico.tab.c"
    break;

  case 46: /* or_exp: or_exp OR and_exp  */
#line 529 "sintatico.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3146 "sintatico.tab.c"
    break;

  case 47: /* or_exp: and_exp  */
#line 539 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3154 "sintatico.tab.c"
    break;

  case 48: /* or_exp: set_in_exp  */
#line 542 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3162 "sintatico.tab.c"
    break;

  case 49: /* and_exp: and_exp AND relational_exp  */
#line 547 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3177 "sintatico.tab.c"
    break;

  case 50: /* and_exp: relational_exp  */
#line 557 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3185 "sintatico.tab.c"
    break;

  case 51: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 562 "sintatico.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

    fazCast((yyvsp[-2].nodo), (yyvsp[0].nodo), &errosSemanticos, (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna);
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup((yyvsp[-2].nodo)->tipo);
  }
#line 3200 "sintatico.tab.c"
    break;

  case 52: /* relational_exp: sum_exp  */
#line 572 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3208 "sintatico.tab.c"
    break;

  case 53: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 577 "sintatico.y"
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
#line 3230 "sintatico.tab.c"
    break;

  case 54: /* sum_exp: mul_exp  */
#line 594 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3238 "sintatico.tab.c"
    break;

  case 55: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 599 "sintatico.y"
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
#line 3260 "sintatico.tab.c"
    break;

  case 56: /* mul_exp: unary_exp  */
#line 616 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3268 "sintatico.tab.c"
    break;

  case 57: /* unary_exp: primal_exp  */
#line 621 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3276 "sintatico.tab.c"
    break;

  case 58: /* unary_exp: '!' primal_exp  */
#line 624 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3285 "sintatico.tab.c"
    break;

  case 59: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 628 "sintatico.y"
                             {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3294 "sintatico.tab.c"
    break;

  case 60: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 632 "sintatico.y"
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
#line 3319 "sintatico.tab.c"
    break;

  case 61: /* $@4: %empty  */
#line 652 "sintatico.y"
                         {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

  }
#line 3331 "sintatico.tab.c"
    break;

  case 62: /* unary_exp: ARITMETIC_OP1 ID '(' $@4 arg_list ')'  */
#line 658 "sintatico.y"
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
#line 3358 "sintatico.tab.c"
    break;

  case 63: /* $@5: %empty  */
#line 680 "sintatico.y"
           {
      indiceArg = 0;
      strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
      prevFuncao.linha = (yyvsp[-1].lexema).linha;
      prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

    }
#line 3370 "sintatico.tab.c"
    break;

  case 64: /* unary_exp: ID '(' $@5 arg_list ')'  */
#line 686 "sintatico.y"
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
#line 3396 "sintatico.tab.c"
    break;

  case 65: /* unary_exp: ID '(' ')'  */
#line 707 "sintatico.y"
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
#line 3422 "sintatico.tab.c"
    break;

  case 66: /* $@6: %empty  */
#line 728 "sintatico.y"
               {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;
  }
#line 3433 "sintatico.tab.c"
    break;

  case 67: /* unary_exp: '!' ID '(' $@6 arg_list ')'  */
#line 733 "sintatico.y"
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
#line 3460 "sintatico.tab.c"
    break;

  case 68: /* unary_exp: '!' ID '(' ')'  */
#line 755 "sintatico.y"
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
#line 3486 "sintatico.tab.c"
    break;

  case 69: /* unary_exp: ISSET '(' ID ')'  */
#line 776 "sintatico.y"
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
#line 3506 "sintatico.tab.c"
    break;

  case 70: /* unary_exp: ISSET '(' set_exp ')'  */
#line 791 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3517 "sintatico.tab.c"
    break;

  case 71: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 797 "sintatico.y"
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
#line 3537 "sintatico.tab.c"
    break;

  case 72: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 812 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3548 "sintatico.tab.c"
    break;

  case 73: /* primal_exp: ID  */
#line 822 "sintatico.y"
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
#line 3569 "sintatico.tab.c"
    break;

  case 74: /* primal_exp: const  */
#line 838 "sintatico.y"
          {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3577 "sintatico.tab.c"
    break;

  case 75: /* primal_exp: '(' exp ')'  */
#line 841 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3585 "sintatico.tab.c"
    break;

  case 76: /* primal_exp: set_exp  */
#line 844 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3593 "sintatico.tab.c"
    break;

  case 77: /* arg_list: exp ',' arg_list  */
#line 849 "sintatico.y"
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
#line 3614 "sintatico.tab.c"
    break;

  case 78: /* arg_list: exp  */
#line 865 "sintatico.y"
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
#line 3635 "sintatico.tab.c"
    break;

  case 79: /* type: INT_TYPE  */
#line 883 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3647 "sintatico.tab.c"
    break;

  case 80: /* type: FLOAT_TYPE  */
#line 890 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3659 "sintatico.tab.c"
    break;

  case 81: /* type: SET_TYPE  */
#line 897 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3671 "sintatico.tab.c"
    break;

  case 82: /* type: ELEM_TYPE  */
#line 904 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3683 "sintatico.tab.c"
    break;

  case 83: /* const: INTEGER  */
#line 913 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3694 "sintatico.tab.c"
    break;

  case 84: /* const: FLOAT  */
#line 919 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("FLOAT");
  }
#line 3705 "sintatico.tab.c"
    break;

  case 85: /* const: EMPTY  */
#line 925 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3716 "sintatico.tab.c"
    break;


#line 3720 "sintatico.tab.c"

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

#line 932 "sintatico.y"


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

