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
#define YYLAST   4456

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

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1237,  1717,    21,    29,    40,    41,    48,  1853,  2217,  3768,
    3806,    46,  -300,  3844,   -14,  3882,   400,  1286,    19,    38,
      92,    12,    12,   -16,  3920,  1461,  3958,  4269,  1286,  4298,
    1649,    66,   750,   219,    70,    75,    80,    85,  3960,  3966,
    3971,   108,   112,   293,   117,   132,    79,   805,  2586,  2621,
     120,  2656,  2691,  2726,  2761,  2796,  2831,  2866,   137,   138,
    3993,   246,   561,  1073,  1405,   594,  3998,  4003,  4025,   175,
    4030,   293,    97,   934,  4035,  1565,   184,   190,   178,   805,
     191,  1149,   171,   198,   235,  1687,   169,  4057,   173,  4327,
     187,  2901,  2936,   293,   268,   293,   293,   293,   293,   183,
     194,  4062,  1930,   196,   111,    68,   201,   199,   211,   212,
     221,   224,   215,   230,  2971,   204,   241,   245,   237,   321,
    4067,  1593,   641,   687,  1531,   719,  4089,  4094,   104,   251,
    4099,  1930,  4121,   805,  4126,   258,   262,   266,  3426,   293,
     805,  4131,  4153,  4158,  1930,   267,   270,  1930,  4163,   272,
     492,  3006,  3041,  3076,    51,   276,   521,   282,  4185,  4190,
     290,  4195,  1649,   324,  1649,  4217,  3111,   299,  3146,  1649,
    3181,  3216,  3251,  1963,   369,   320,   333,  1580,  3732,  3739,
     348,   407,   805,  3744,   542,   586,   123,   526,   850,  3751,
    3770,  3777,  3782,  1816,   495,   352,   360,  1136,  1856,  4222,
     367,   431,   805,  4227,    78,   208,   330,  4246,  4251,  4256,
    4275,   368,   378,   389,   393,  3286,  1061,   642,   408,   409,
     761,   820,  1909,   410,   449,   805,  2012,    14,   116,    90,
     121,   307,  2043,  2080,  3454,  3459,  1565,   493,   155,   413,
     414,   420,   425,   293,   432,  3321,   673,   888,   980,  1031,
    1103,  1195,  1246,  1318,   303,   362,   427,   805,   437,  3356,
    1649,   531,  3705,  3789,  1565,   184,   596,  3713,   439,  3808,
     451,   805,   805,   805,   805,   552,  2110,  4280,  1565,   184,
     959,  2222,   456,  4285,   459,  1565,  1565,  1565,  1565,  1565,
     184,  1565,   184,   583,  1276,  3466,  1565,   184,  1013,  1974,
     460,  3495,   465,  1930,  1016,  1930,  1930,  1930,  1930,   366,
     615,   481,   483,   632,   478,   618,   805,   191,   512,   543,
    1786,  1649,  2141,  2177,   527,   318,   805,   528,  3815,  1930,
     772,   670,   539,   544,   545,  1373,  1064,  3820,   756,  1362,
    3827,  3846,  4304,  1930,  1427,   692,   546,   551,   557,  1507,
    1140,  4309,   402,  1289,  4314,  4333,   789,   562,   794,   575,
    3500,  1930,  1615,   837,   585,   592,   601,  1731,  1174,  3507,
     358,   254,   595,   606,   397,   252,  1497,  3536,  3541,  1565,
     184,   622,   625,   629,   631,   637,  2236,   643,   634,  2271,
     639,  3391,   651,  3853,  1930,  3858,  3865,  3884,  3891,  3896,
    1930,   660,   677,   679,  4338,  1930,  4343,  4362,  4367,  4372,
    4391,  1930,   683,   685,   691,   693,   902,   935,   700,  3548,
    1930,  3577,  3582,  3589,  3618,  3623,  1930,   708,   711,  1565,
     184,   858,   715,   720,   721,   728,  3426,   293,   805,  2306,
    3903,   746,   763,  3922,  3929,  4396,   767,   779,  4401,  4420,
    3630,   780,   782,  3659,  3664,   885,   785,   907,   991,  2341,
    2376,  2411,  2446,   795,  1050,  3934,  3941,  4425,  4430,  3671,
    3700,   458,   499,  3426,   324,  3426,  2481,   802,  2516,  3426,
    2551
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
    -300,  -300,  -300,   829,     1,  -300,  -300,  -300,   811,   -19,
    -162,   -45,  -127,  -124,  -116,  -111,  -108,  -100,   -99,   -76,
     -18,   448,  -256,  1703,  1809,  1636,  1469,  1281,  1093,   878,
    -299,  -187,  -258,   214,  -126,     0,   663
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
      11,     9,    26,    27,   113,   149,    90,    11,     9,   332,
     260,   154,    59,    24,   248,    15,   -14,    20,   157,    16,
      28,   160,   249,   346,   -80,    82,   -48,   250,    20,    88,
     251,   394,   -79,    59,   357,   166,   359,   168,   252,   253,
     -48,   364,   170,   -81,   -82,   405,   -48,    25,    12,    14,
     -48,    21,   -34,   100,   -34,   -34,   -34,   -34,   -34,   -34,
     110,   111,   254,   420,   -34,   -34,   -34,   -34,   -34,   -34,
      22,   -34,   -34,   162,   329,   -34,   -34,   400,   -34,   -34,
     236,   -34,    85,   321,   -34,   -34,   -34,   167,   343,   285,
     -47,   411,    34,    35,   237,    23,    38,    39,   -13,    40,
     -63,   305,   -47,    75,   -47,   -63,   361,    86,    76,   426,
     -63,   -63,    47,    77,   -63,   -63,   -47,   -63,    78,   247,
     255,   155,   -47,   -48,   432,   -63,   -47,   -63,   303,   101,
     -63,   306,   -50,   -50,   271,   -47,   -78,   -48,   256,   246,
     147,    79,   304,   132,    59,    80,    59,   -50,   -40,   -47,
      83,    59,   -40,   -50,    89,   -47,   -18,   -50,   -18,   -18,
     -18,   -18,   -18,   -18,   270,    84,    91,    92,   -18,   -18,
     -18,   -18,   -18,   -18,   456,   -18,   -18,   -18,    99,   -18,
     -18,   173,   -18,   -18,   284,   -18,   174,   106,   -18,   -18,
     -18,   175,   176,   108,   112,   177,   178,   109,   179,   -61,
     114,   115,   119,   392,   -61,   120,   180,   302,   181,   -61,
     -61,   182,   215,   -61,   -61,   327,   -61,   403,   286,   -50,
     -50,   -19,    73,   -39,   -61,   318,   -61,   133,   130,   -61,
     140,   134,    34,    35,   -50,   418,    38,    39,   116,    40,
     -66,   385,    59,   135,   136,   -66,    71,    74,   211,   212,
     -66,   -66,    47,   137,   -66,   -66,   138,   -66,   -48,   139,
      87,   191,   306,   -49,   -49,   -66,   -44,   -66,   441,   143,
     -66,   122,   -48,   141,   442,   -48,   388,   142,   -49,   446,
     -44,   213,   214,   148,   -49,   447,   -44,   151,   -49,   209,
     -44,   152,   191,   191,   451,   153,    81,   383,   384,   158,
     452,    33,   159,    59,   161,   163,    34,    35,   390,   462,
      38,    39,   248,    40,   165,   307,   234,   -52,   -52,   -52,
     249,    45,   -77,    46,   145,   250,    47,   258,   251,   271,
     -46,   169,   322,   -52,   211,   212,   252,   253,   287,   -52,
     -52,   -52,   -52,   -52,   -46,   234,   476,   191,   478,   248,
     -46,   248,   480,   264,   191,   248,   -52,   249,   234,   249,
     254,   234,   250,   249,   250,   251,   265,   251,   250,   305,
     -46,   251,   262,   252,   253,   252,   253,   285,   -46,   252,
     253,   266,   175,   176,   -46,   278,   177,   178,   263,   179,
     -46,   323,   -46,   279,   -46,   269,   191,   254,   477,   254,
     280,   289,   182,   254,    -9,    -9,    -9,    -9,   277,   -45,
     267,   290,   286,   -49,   -49,   283,   191,   247,   255,   463,
     175,   176,   291,   -45,   177,   178,   292,   179,   -49,   -45,
     324,   295,   -11,   -45,   281,   268,   256,   246,   301,   191,
     182,   296,   297,   298,   195,   196,   314,   315,   197,   198,
     209,   199,   299,   316,   247,   255,   247,   255,   317,   282,
     247,   255,   218,   219,   202,   319,   220,   221,   326,   222,
     -41,   191,   336,   256,   246,   256,   246,   300,   209,   256,
     246,   381,   225,   337,   -41,   191,   191,   191,   191,   350,
     -41,   351,   209,   368,   -41,   183,   310,   369,   276,   209,
     209,   209,   209,   209,   257,   209,   311,   312,   195,   196,
     209,   -42,   197,   198,   379,   199,   380,   234,   237,   234,
     234,   234,   234,   203,   -43,   -42,   183,   183,   202,   191,
     191,   -42,   117,   257,   -63,   -42,   272,   -50,   -50,   -63,
     191,   386,   123,   234,   -63,   -63,   387,   237,   -63,   -63,
     226,   -63,   -50,   164,   -48,   -63,   389,   234,   -50,   -63,
     -63,   -63,   391,   328,   -63,   -63,   -63,   146,   -48,   -63,
     -63,   396,   -63,    93,   -48,   234,   397,   398,   407,   226,
     -63,   183,   -63,   408,   342,   -63,   -63,    94,   183,   409,
     -40,   -63,   226,   209,   415,   226,   -63,   -63,   257,   333,
     -63,   -63,    97,   -63,   -52,   -52,   -52,   417,   234,   211,
     212,   -63,   237,   -63,   234,   360,   -63,   422,   -40,   234,
     -52,   173,   183,   -52,   423,   234,   174,   -44,   429,   183,
     183,   175,   176,   424,   234,   177,   178,   382,   179,   430,
     234,   -44,   203,   209,   -45,   294,   180,   -44,   181,   203,
     183,   182,   191,   -44,   433,   218,   219,   434,   -45,   220,
     221,   435,   222,   436,   -45,   226,   437,   -44,   439,   438,
     -44,   -39,   226,   183,   -27,   225,   -27,   -27,   -27,   -27,
     -27,   -27,   -48,   440,   203,   313,   -27,   -27,   -27,   -27,
     -27,   -27,   443,   -27,   -27,   -27,   -48,   -27,   -27,   -45,
     -27,   -27,   395,   -27,   -48,   183,   -27,   -27,   -27,   444,
     192,   445,   203,   -45,   334,   448,   -45,   449,   -48,   183,
     183,   183,   183,   -41,   406,   -42,   203,    97,   348,   -51,
     -51,   -51,   450,   203,   203,   203,   203,   203,   210,   203,
     453,   192,   192,   454,   203,   -51,   366,   458,   -51,   459,
     460,   226,   374,   226,   226,   226,   226,   461,   -73,   -73,
     -73,   -73,   -73,   183,   183,   235,   272,   -49,   -49,   -83,
     -83,   -83,   -83,   -83,   183,   -61,   -73,   226,   465,   -73,
     -61,    71,   -49,    72,   402,   -61,   -61,   -83,   -49,   -61,
     -61,   226,   -61,   -83,   235,   466,   192,   -83,   413,   467,
     -61,   -48,   -61,   192,   393,   -61,   -48,   235,   173,   226,
     235,   468,   469,   174,   470,   -48,   428,   472,   175,   176,
     -48,   414,   177,   178,   474,   179,   416,   203,   -84,   -84,
     -84,   -84,   -84,   180,   479,   181,    13,   192,   182,    31,
       0,     0,   226,     0,   192,   192,   -84,     0,   226,   -48,
       0,     0,   -84,   226,     0,     0,   -84,   210,   273,   226,
     -52,   -52,   -52,   -48,   210,   192,     0,     0,   226,   421,
     -48,     0,     0,     0,   226,     0,   -52,   203,     0,     0,
     235,     0,   -52,     0,   -48,     0,   183,   235,   192,   -29,
     457,   -29,   -29,   -29,   -29,   -29,   -29,   -48,     0,   210,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -48,   -29,   -29,   -41,   -29,   -29,   471,   -29,   -41,
     192,   -29,   -29,   -29,     0,   190,     0,   210,   -41,     0,
       0,   -41,     0,   -41,   192,   192,   192,   192,     0,   -41,
       0,   210,   -73,   -73,   -73,   -73,   -73,   -42,   210,   210,
     210,   210,   210,   208,   210,     0,   190,   190,     0,   210,
     -73,   -42,   347,   -73,   -42,     0,   235,   103,   235,   235,
     235,   235,   211,   212,     0,     0,   127,     0,   192,   192,
     233,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   192,
       0,     0,   235,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -42,   -24,   -24,   235,   -24,   -24,   233,
     -24,   190,     0,   -24,   -24,   -24,   365,   -42,   190,   371,
       0,     0,   233,   -42,   235,   233,   211,   212,     0,   372,
     373,     0,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,   210,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,   235,   -21,   -21,
     190,   -21,   257,   235,   -21,   -21,   -21,   401,   235,   -73,
     -73,   -73,   -73,   -73,   235,     0,   237,   211,   212,     0,
     190,     0,   475,   235,    95,   -47,     0,   -73,     0,   235,
       0,     0,   210,   -73,   293,     0,     0,   -73,     0,   -47,
       0,   192,   -47,   190,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,   208,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,   -22,   -22,   -22,     0,   -22,   -22,     0,
     -22,   -22,     0,   -22,     0,   190,   -22,   -22,   -22,     0,
     189,     0,   208,   412,   -83,   -83,   -83,   -83,   -83,   190,
     190,   190,   341,   211,   212,     0,   208,   -73,   -73,   -73,
     -73,   -73,   -83,   208,   208,   208,   355,   208,   207,   208,
       0,   189,   189,     0,   208,   -73,     0,   427,   -73,     0,
       0,   233,    72,   233,   233,   233,   378,   211,   212,     0,
     126,     0,     0,   190,   190,   232,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,   190,     0,     0,   233,   -23,   -23,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,
     -23,   233,   -23,   -23,   232,   -23,   189,     0,   -23,   -23,
     -23,     0,     0,   189,     0,     0,     0,   232,     1,   233,
     232,     2,     3,     4,     5,     0,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   208,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,
     -26,   -26,   233,   -26,   -26,   189,   -26,     0,   233,   -26,
     -26,   -26,     0,   233,   -73,   -73,   -73,   -73,   -73,   233,
       2,     3,     4,     5,     0,   189,     0,   287,   233,   -51,
     -51,   -51,   -73,     0,   233,     0,     0,   208,   -73,   362,
       0,     0,   -73,     0,     0,   -51,   190,     0,   189,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,   188,   207,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,     0,   -25,   -25,     0,   -25,     0,
     189,   -25,   -25,   -25,     0,     0,   206,   207,     0,   188,
     188,     0,     0,     0,   189,   189,   340,     0,     0,     0,
     273,   207,   -51,   -51,   -51,     0,   -66,   125,   207,   207,
     354,   -66,   207,   231,   207,     0,   -66,   -66,   -51,   207,
     -66,   -66,     0,   -66,   -51,     0,   232,     0,   232,   232,
     377,   -66,     0,   -66,     0,   399,   -66,     0,   189,   189,
       0,     0,   231,     0,   188,    96,   -50,   -50,     0,   189,
       0,   188,   232,     0,     0,   231,     0,     0,   231,     0,
     -61,   -50,     0,     0,   -50,   -61,   232,     0,     0,     0,
     -61,   -61,     0,     0,   -61,   -61,     0,   -61,     0,     0,
       0,     0,     0,     0,   232,   -61,     0,   -61,     0,   404,
     -61,     0,   -15,   188,   -15,   -15,   -15,   -15,   -15,   -15,
       0,     0,   207,     0,   -15,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,   188,     0,   -15,   -15,   232,   -15,   -15,
       0,   -15,     0,   232,   -15,    29,   -15,     0,   232,     0,
       0,     0,     0,     0,   232,   307,   188,   -51,   -51,   -51,
     -66,     0,     0,   232,     0,   -66,   187,   206,     0,   232,
     -66,   -66,   207,   -51,   -66,   -66,     0,   -66,     0,   -51,
       0,   189,     0,   -51,     0,   -66,     0,   -66,   188,   410,
     -66,    96,   -49,   -49,   205,   206,     0,   187,   187,     0,
       0,     0,   188,   339,     0,     0,     0,   -49,     0,   206,
     -49,     0,     0,     0,   124,     0,   206,   353,   193,     0,
     206,   230,   206,   194,     0,     0,     0,   206,   195,   196,
       0,     0,   197,   198,   231,   199,   231,   376,   -83,   -83,
     -83,   -83,   -83,   200,     0,   201,   188,   188,   202,     0,
     230,     0,   187,     0,    95,   -46,   -83,   188,     0,   187,
     231,     0,   -83,   230,     0,     0,   230,     0,   -61,   -46,
       0,     0,   -46,   -61,   231,     0,     0,     0,   -61,   -61,
       0,     0,   -61,   -61,     0,   -61,     0,     0,     0,     0,
       0,     0,   231,   -61,     0,   -61,     0,   419,   -61,     0,
     171,   187,    32,     2,     3,     4,     5,    33,     0,     0,
     206,     0,    34,    35,    36,    37,    38,    39,     0,    40,
      41,   187,     0,    42,    43,   231,    44,    45,     0,    46,
       0,   231,    47,   186,   172,     0,   231,     0,     0,     0,
       0,     0,   231,     0,   187,   -73,   -73,   -73,   -73,   -73,
       0,   231,     0,     0,     0,   205,     0,   231,     0,     0,
     206,   204,     0,   -73,   186,   186,   -73,    -7,    -7,   188,
     118,    -7,    -7,    -7,    -7,     0,   187,     0,     0,   121,
       0,     0,     0,   205,   -66,     0,     0,     0,   229,   -66,
     338,     0,     0,     0,   -66,   -66,     0,   205,   -66,   -66,
     184,   -66,     0,     0,   352,     0,     0,     0,   205,   -66,
     205,   -66,     0,   425,   -66,   205,     0,   229,     0,   186,
       0,     0,   230,     0,   375,     0,   186,     0,   104,     0,
     229,   184,   184,   229,   187,   187,     0,   -17,     0,   -17,
     -17,   -17,   -17,   -17,   -17,   187,     0,     0,   230,   -17,
     -17,   -17,   -17,   -17,   -17,   227,   -17,   -17,   -17,     0,
     -17,   -17,   230,   -17,   -17,     0,   -17,     0,   186,   -17,
     -17,   -17,     0,     0,   -73,   -73,   -73,   -73,   -73,     0,
     230,     0,     0,     0,   227,     0,   184,     0,   186,     0,
       0,     0,   -73,   184,     0,     0,     0,   227,   205,   275,
     227,     0,     0,    -2,     1,     0,   185,     2,     3,     4,
       5,   186,     0,   230,   -84,   -84,   -84,   -84,   -84,   230,
       0,     0,   309,     0,   230,     0,     0,     0,     0,     0,
     230,     0,   -84,     0,   105,   184,     0,   185,   185,   230,
       0,     0,     0,   325,     0,   230,     0,     0,   205,     0,
     204,     0,     0,     0,     0,   184,     0,   187,     0,     0,
       0,   228,     0,     0,   204,     0,     0,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,   204,     0,   204,   184,     0,
       0,     0,   204,   216,     0,   -85,     0,     0,   217,   370,
     228,   -85,   150,   218,   219,   -85,     0,   220,   221,   156,
     222,   186,   186,   228,     0,     0,   228,     0,   223,     0,
     224,     0,   186,   225,     0,   229,     0,   331,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,   229,
       0,   345,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,
       0,   185,   356,     0,   358,   -73,   261,   229,     0,   363,
     -73,     0,     0,     0,     0,     0,   -73,   367,     0,     0,
     -73,   185,     0,     0,     0,   204,     0,     0,   184,   184,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,   184,
     229,     0,   227,     0,   185,     0,   229,     0,   -76,     0,
       0,   229,     0,     0,   -76,     0,   227,   229,   -76,     0,
       0,   -54,   308,   -54,   -54,   -54,   229,     0,     0,     0,
       0,     0,   229,     0,   227,   204,     0,     0,     0,   -54,
       0,     0,     0,   105,   186,   -54,     0,     0,     0,   -54,
       0,     0,   431,     0,     0,     0,     0,   105,   -56,   -56,
     -56,   -56,   -56,     0,     0,     0,     0,   227,   105,     0,
     105,     0,     0,   227,     0,   105,   -56,     0,   227,     0,
       0,     0,   -56,     0,   227,     0,   -56,     0,   -73,   -73,
     -73,   -73,   -73,   227,   185,   185,     0,     0,     0,   227,
       0,     0,   455,     0,     0,   185,   -73,     0,   228,     0,
       0,   184,   -28,   344,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   228,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,
     228,   -28,     0,     0,   -28,   -28,   -28,     0,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   105,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
       0,   -38,   -38,   228,   -38,   -38,     0,   -38,     0,   228,
     -38,   -38,   -38,     0,   228,     0,     0,    -4,    -4,     0,
     228,    -4,    -4,    -4,    -4,     0,     0,     0,     0,   228,
     -73,   -73,   -73,   -73,   -73,   228,     0,   -36,   105,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   464,   -73,   -36,
     -36,   -36,   -36,   -36,   -36,   349,   -36,   -36,   -36,     0,
     -36,   -36,     0,   -36,   -36,     0,   -36,     0,     0,   -36,
     -36,   -36,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,    -8,    -8,    -8,     0,    -8,    -8,     0,    -8,    -8,
       0,    -8,     0,     0,    -8,    -8,    -8,   -16,     0,   -16,
     -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,   -16,
     -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,     0,
     -16,   -16,     0,   -16,   -16,     0,   -16,     0,     0,   -16,
     -16,   -16,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,     0,   -30,   -30,
       0,   -30,     0,     0,   -30,   -30,   -30,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,
     -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,   -31,
     -31,   -31,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,
       0,   -32,     0,     0,   -32,   -32,   -32,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   473,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,     0,     0,   -34,
     -34,   -34,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,
       0,   -35,     0,     0,   -35,   -35,   -35,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,
     -37,   -37,     0,   -37,   -37,     0,   -37,     0,     0,   -37,
     -37,   -37,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,     0,   -33,   -33,
       0,   -33,     0,     0,   -33,   -33,   -33,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,
     -27,   -27,     0,   -27,   -27,     0,   -27,     0,     0,   -27,
     -27,   -27,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,     0,     0,   -29,   -29,     0,   -29,   -29,
       0,   -29,     0,     0,   -29,   -29,   -29,   171,     0,    32,
       2,     3,     4,     5,    33,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,     0,    40,    41,     0,     0,
      42,    43,     0,    44,    45,     0,    46,     0,     0,    47,
     -20,   172,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,     0,     0,   -24,   -24,     0,   -24,   -24,
       0,   -24,     0,     0,   -24,   -24,   -24,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,     0,
     -21,   -21,     0,   -21,   -21,     0,   -21,     0,     0,   -21,
     -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,     0,     0,   -22,   -22,     0,   -22,   -22,
       0,   -22,     0,     0,   -22,   -22,   -22,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,     0,
     -23,   -23,     0,   -23,   -23,     0,   -23,     0,     0,   -23,
     -23,   -23,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,     0,     0,   -26,   -26,     0,   -26,   -26,
       0,   -26,     0,     0,   -26,   -26,   -26,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,
     -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,   -25,
     -25,   -25,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,     0,     0,   -28,   -28,     0,   -28,   -28,
       0,   -28,     0,     0,   -28,   -28,   -28,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,
     -38,   -38,     0,   -38,   -38,     0,   -38,     0,     0,   -38,
     -38,   -38,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,     0,     0,   -36,   -36,     0,   -36,   -36,
       0,   -36,     0,     0,   -36,   -36,   -36,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,
     -30,   -30,     0,   -30,   -30,     0,   -30,     0,     0,   -30,
     -30,   -30,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,   -31,   -31,     0,   -31,   -31,
       0,   -31,     0,     0,   -31,   -31,   -31,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
     -32,   -32,     0,   -32,   -32,     0,   -32,     0,     0,   -32,
     -32,   -32,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,
       0,   -35,     0,     0,   -35,   -35,   -35,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,     0,     0,
     -37,   -37,     0,   -37,   -37,     0,   -37,     0,     0,   -37,
     -37,   -37,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,     0,     0,   -33,   -33,     0,   -33,   -33,
       0,   -33,     0,     0,   -33,   -33,   -33,   -18,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,     0,     0,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,     0,     0,
     -18,   -18,     0,   -18,   -18,     0,   -18,     0,     0,   -18,
     -18,   -18,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,
       0,     0,     0,     0,   -15,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,     0,     0,   -15,   -15,     0,   -15,   -15,
       0,   -15,     0,     0,   -15,   259,   -15,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,     0,     0,
      -8,    -8,     0,    -8,    -8,     0,    -8,     0,     0,    -8,
      -8,    -8,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,
       0,     0,     0,     0,   -15,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,     0,     0,   -15,   -15,     0,   -15,   -15,
       0,   -15,     0,     0,   -15,   320,   -15,   -17,     0,   -17,
     -17,   -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,
     -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,     0,
     -17,   -17,     0,   -17,   -17,     0,   -17,     0,     0,   -17,
     -17,   -17,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,
       0,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,
       0,   -16,   -16,     0,     0,   -16,   -16,     0,   -16,   -16,
       0,   -16,     0,     0,   -16,   -16,   -16,   238,     0,    32,
       2,     3,     4,     5,    33,     0,     0,     0,     0,    34,
      35,   239,   240,    38,    39,     0,    40,   241,     0,     0,
     242,   243,     0,   244,    45,     0,    46,     0,     0,    47,
       0,   245,   -57,   -57,   -57,   -57,   -57,   -74,   -74,   -74,
     -74,   -74,     0,     0,   -59,   -59,   -59,   -59,   -59,     0,
     -57,     0,     0,     0,     0,   -74,   -57,     0,     0,     0,
     -57,   -74,   -59,     0,     0,   -74,     0,     0,   -59,     0,
       0,     0,   -59,   -58,   -58,   -58,   -58,   -58,   -65,   -65,
     -65,   -65,   -65,     0,     0,   -75,   -75,   -75,   -75,   -75,
       0,   -58,     0,     0,     0,     0,   -65,   -58,     0,     0,
       0,   -58,   -65,   -75,     0,     0,   -65,     0,     0,   -75,
       0,     0,     0,   -75,   -53,   308,   -53,   -53,   -53,   -55,
     -55,   -55,   -55,   -55,     0,     0,   -60,   -60,   -60,   -60,
     -60,     0,   -53,     0,     0,     0,     0,   -55,   -53,     0,
       0,     0,   -53,   -55,   -60,     0,     0,   -55,     0,     0,
     -60,     0,     0,     0,   -60,   -41,   -41,   -41,   -41,   -41,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -69,   -69,   -69,
     -69,   -69,     0,   -41,     0,     0,     0,     0,   -42,   -41,
       0,     0,     0,   -41,   -42,   -69,     0,     0,   -42,     0,
       0,   -69,     0,     0,     0,   -69,   -70,   -70,   -70,   -70,
     -70,   -68,   -68,   -68,   -68,   -68,     0,     0,   -64,   -64,
     -64,   -64,   -64,     0,   -70,     0,     0,     0,     0,   -68,
     -70,     0,     0,     0,   -70,   -68,   -64,     0,     0,   -68,
       0,     0,   -64,     0,     0,     0,   -64,   -71,   -71,   -71,
     -71,   -71,   -72,   -72,   -72,   -72,   -72,     0,     0,   -62,
     -62,   -62,   -62,   -62,     0,   -71,     0,     0,     0,     0,
     -72,   -71,     0,     0,     0,   -71,   -72,   -62,     0,     0,
     -72,     0,     0,   -62,     0,     0,     0,   -62,   -67,   -67,
     -67,   -67,   -67,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -67,     0,     0,     0,
       0,   -73,   -67,     0,     0,     0,   -67,   -73,   330,   -73,
     -84,   -84,   -84,   -84,   -84,   -73,   335,   -85,   -85,   -85,
     -85,   -85,   -76,   -76,   -76,   -76,   -76,     0,   -84,   -54,
     274,   -54,   -54,   -54,   -84,   -85,     0,     0,    -6,    -6,
     -76,   -85,    -6,    -6,    -6,    -6,   -76,   -54,   -56,   -56,
     -56,   -56,   -56,   -54,     0,   -57,   -57,   -57,   -57,   -57,
     -74,   -74,   -74,   -74,   -74,     0,   -56,   -59,   -59,   -59,
     -59,   -59,   -56,   -57,     0,     0,    -5,    -5,   -74,   -57,
      -5,    -5,    -5,    -5,   -74,   -59,   -58,   -58,   -58,   -58,
     -58,   -59,     0,   -65,   -65,   -65,   -65,   -65,   -75,   -75,
     -75,   -75,   -75,     0,   -58,   -53,   274,   -53,   -53,   -53,
     -58,   -65,     0,     0,    -3,    -3,   -75,   -65,    -3,    -3,
      -3,    -3,   -75,   -53,   -55,   -55,   -55,   -55,   -55,   -53,
       0,   -60,   -60,   -60,   -60,   -60,   -41,   -41,   -41,   -41,
     -41,     0,   -55,   -42,   -42,   -42,   -42,   -42,   -55,   -60,
       0,     0,    -8,    -8,   -41,   -60,    -8,    -8,    -8,    -8,
     -41,   -42,   -69,   -69,   -69,   -69,   -69,   -42,     0,   -70,
     -70,   -70,   -70,   -70,   -68,   -68,   -68,   -68,   -68,     0,
     -69,   -64,   -64,   -64,   -64,   -64,   -69,   -70,     0,     0,
     -18,   -18,   -68,   -70,   -18,   -18,   -18,   -18,   -68,   -64,
     -71,   -71,   -71,   -71,   -71,   -64,     0,   -72,   -72,   -72,
     -72,   -72,   -62,   -62,   -62,   -62,   -62,     0,   -71,   -67,
     -67,   -67,   -67,   -67,   -71,   -72,     0,     0,   -12,   -12,
     -62,   -72,   -12,   -12,   -12,   -12,   -62,   -67,   -83,   -83,
     -83,   -83,   -83,   -67,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -83,     0,     0,   -83,
       0,     0,   -84,     0,     0,   -84,     0,   -85,     0,     0,
     -85,   -76,   -76,   -76,   -76,   -76,   -54,    98,   -54,   -54,
     -54,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,   -76,
       0,     0,   -76,     0,   -54,     0,     0,   -54,     0,   -56,
       0,     0,   -56,   -57,   -57,   -57,   -57,   -57,   -74,   -74,
     -74,   -74,   -74,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,   -57,     0,     0,   -57,     0,   -74,     0,     0,   -74,
       0,   -59,     0,     0,   -59,   -58,   -58,   -58,   -58,   -58,
     -65,   -65,   -65,   -65,   -65,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,   -58,     0,     0,   -58,     0,   -65,     0,
       0,   -65,     0,   -75,     0,     0,   -75,   -53,    98,   -53,
     -53,   -53,   -55,   -55,   -55,   -55,   -55,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,   -53,     0,     0,   -53,     0,
     -55,     0,     0,   -55,     0,   -60,     0,     0,   -60,   -41,
     -41,   -41,   -41,   -41,   -42,   -42,   -42,   -42,   -42,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,   -41,     0,     0,
     -41,     0,   -42,     0,     0,   -42,     0,   -69,     0,     0,
     -69,   -70,   -70,   -70,   -70,   -70,   -68,   -68,   -68,   -68,
     -68,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,   -70,
       0,     0,   -70,     0,   -68,     0,     0,   -68,     0,   -64,
       0,     0,   -64,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,   -72,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,   -71,     0,     0,   -71,     0,   -72,     0,     0,   -72,
       0,   -62,     0,     0,   -62,   -67,   -67,   -67,   -67,   -67,
     -85,   -85,   -85,   -85,   -85,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,   -67,     0,     0,   -67,     0,   -85,     0,
       0,     0,     0,   -76,   -54,   288,   -54,   -54,   -54,   -56,
     -56,   -56,   -56,   -56,   -57,   -57,   -57,   -57,   -57,   -10,
     -10,     0,   -54,   -10,   -10,   -10,   -10,   -56,     0,     0,
       0,     0,   -57,   -74,   -74,   -74,   -74,   -74,   -59,   -59,
     -59,   -59,   -59,   -58,   -58,   -58,   -58,   -58,   -17,   -17,
       0,   -74,   -17,   -17,   -17,   -17,   -59,     0,     0,     0,
       0,   -58,   -65,   -65,   -65,   -65,   -65,   -75,   -75,   -75,
     -75,   -75,   -53,   288,   -53,   -53,   -53,   -16,   -16,     0,
     -65,   -16,   -16,   -16,   -16,   -75,     0,     0,     0,     0,
     -53,   -55,   -55,   -55,   -55,   -55,   -60,   -60,   -60,   -60,
     -60,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,   -55,
       0,     0,     0,     0,   -60,     0,     0,     0,     0,   -41,
     -42,   -42,   -42,   -42,   -42,   -69,   -69,   -69,   -69,   -69,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,   -42,     0,
       0,     0,     0,   -69,     0,     0,     0,     0,   -70,   -68,
     -68,   -68,   -68,   -68,   -64,   -64,   -64,   -64,   -64,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,   -68,     0,     0,
       0,     0,   -64,     0,     0,     0,     0,   -71,   -72,   -72,
     -72,   -72,   -72,   -62,   -62,   -62,   -62,   -62,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,   -72,     0,     0,     0,
       0,   -62,     0,     0,     0,     0,   -67
};

static const yytype_int16 yycheck[] =
{
       0,     0,    21,    22,    80,   131,    51,     7,     7,   265,
     172,   138,    30,     1,   138,    29,    32,    17,   144,    33,
      36,   147,   138,   279,     3,    43,    12,   138,    28,    47,
     138,   330,     3,    51,   290,   162,   292,   164,   138,   138,
      26,   297,   169,     3,     3,   344,    32,    35,     0,     3,
      36,    32,     1,    71,     3,     4,     5,     6,     7,     8,
      78,    79,   138,   362,    13,    14,    15,    16,    17,    18,
      32,    20,    21,    22,   261,    24,    25,   335,    27,    28,
      12,    30,     3,   245,    33,    34,    35,   163,   275,    11,
      12,   349,    13,    14,    26,     3,    17,    18,    32,    20,
       3,    11,    12,    33,    26,     8,   293,    28,    33,   367,
      13,    14,    33,    33,    17,    18,    26,    20,    33,   138,
     138,   139,    32,    12,   380,    28,    36,    30,    12,    32,
      33,    10,    11,    12,    11,    12,    32,    26,   138,   138,
      36,    33,    26,    32,   162,    33,   164,    26,    32,    26,
      33,   169,    36,    32,    34,    32,     1,    36,     3,     4,
       5,     6,     7,     8,   182,    33,    29,    29,    13,    14,
      15,    16,    17,    18,   430,    20,    21,    22,     3,    24,
      25,     3,    27,    28,   202,    30,     8,     3,    33,    34,
      35,    13,    14,     3,     3,    17,    18,    19,    20,     3,
      29,     3,    33,   329,     8,    32,    28,   225,    30,    13,
      14,    33,    29,    17,    18,   260,    20,   343,    10,    11,
      12,    34,     3,    29,    28,   243,    30,    26,    32,    33,
      26,    32,    13,    14,    26,   361,    17,    18,     3,    20,
       3,   317,   260,    32,    32,     8,    31,    33,    13,    14,
      13,    14,    33,    32,    17,    18,    32,    20,    12,    29,
      46,    47,    10,    11,    12,    28,    12,    30,   394,    32,
      33,     3,    26,    32,   400,    29,   321,    32,    26,   405,
      26,    13,    14,    32,    32,   411,    32,    29,    36,    75,
      36,    29,    78,    79,   420,    29,     3,   315,   316,    32,
     426,     8,    32,   321,    32,    29,    13,    14,   326,   436,
      17,    18,   436,    20,    32,     8,   102,    10,    11,    12,
     436,    28,    32,    30,     3,   436,    33,     3,   436,    11,
      12,    32,    29,    26,    13,    14,   436,   436,     8,    32,
      10,    11,    12,    36,    26,   131,   473,   133,   475,   473,
      32,   475,   479,    33,   140,   479,    26,   473,   144,   475,
     436,   147,   473,   479,   475,   473,    33,   475,   479,    11,
      12,   479,     3,   473,   473,   475,   475,    11,    12,   479,
     479,    33,    13,    14,    26,    33,    17,    18,   174,    20,
      32,    29,    26,    33,    36,   181,   182,   473,   474,   475,
      33,    33,    33,   479,     4,     5,     6,     7,   194,    12,
       3,    33,    10,    11,    12,   201,   202,   436,   436,   437,
      13,    14,    33,    26,    17,    18,    33,    20,    26,    32,
       3,   217,    32,    36,     3,    28,   436,   436,   224,   225,
      33,    33,    33,    33,    13,    14,    33,    33,    17,    18,
     236,    20,     3,    33,   473,   473,   475,   475,    33,    28,
     479,   479,    13,    14,    33,    33,    17,    18,    31,    20,
      12,   257,    33,   473,   473,   475,   475,    28,   264,   479,
     479,     3,    33,    32,    26,   271,   272,   273,   274,    33,
      32,    32,   278,    33,    36,    47,     3,    32,     3,   285,
     286,   287,   288,   289,    12,   291,    13,    14,    13,    14,
     296,    12,    17,    18,    33,    20,    33,   303,    26,   305,
     306,   307,   308,    75,    32,    26,    78,    79,    33,   315,
     316,    32,    84,    12,     3,    36,    10,    11,    12,     8,
     326,    29,    94,   329,    13,    14,     3,    26,    17,    18,
     102,    20,    26,    32,    12,     3,    29,   343,    32,    28,
       8,    30,    34,    32,    33,    13,    14,   119,    26,    17,
      18,    32,    20,    12,    32,   361,    32,    32,    32,   131,
      28,   133,    30,    32,    32,    33,     3,    26,   140,    32,
      29,     8,   144,   379,    32,   147,    13,    14,    12,     3,
      17,    18,     8,    20,    10,    11,    12,    32,   394,    13,
      14,    28,    26,    30,   400,    32,    33,    32,    32,   405,
      26,     3,   174,    29,    32,   411,     8,    12,    33,   181,
     182,    13,    14,    32,   420,    17,    18,    19,    20,    33,
     426,    26,   194,   429,    12,     3,    28,    32,    30,   201,
     202,    33,   438,    12,    32,    13,    14,    32,    26,    17,
      18,    32,    20,    32,    32,   217,    29,    26,    34,    26,
      29,    32,   224,   225,     1,    33,     3,     4,     5,     6,
       7,     8,    12,    32,   236,   237,    13,    14,    15,    16,
      17,    18,    32,    20,    21,    22,    26,    24,    25,    12,
      27,    28,    32,    30,    12,   257,    33,    34,    35,    32,
      47,    32,   264,    26,   266,    32,    29,    32,    26,   271,
     272,   273,   274,    32,    32,    32,   278,     8,   280,    10,
      11,    12,    32,   285,   286,   287,   288,   289,    75,   291,
      32,    78,    79,    32,   296,    26,   298,    32,    29,    29,
      29,   303,   304,   305,   306,   307,   308,    29,     8,     9,
      10,    11,    12,   315,   316,   102,    10,    11,    12,     8,
       9,    10,    11,    12,   326,     3,    26,   329,    32,    29,
       8,    31,    26,    33,   336,    13,    14,    26,    32,    17,
      18,   343,    20,    32,   131,    32,   133,    36,   350,    32,
      28,    12,    30,   140,    32,    33,    12,   144,     3,   361,
     147,    32,    32,     8,    32,    26,   368,    32,    13,    14,
      26,    32,    17,    18,    29,    20,    32,   379,     8,     9,
      10,    11,    12,    28,    32,    30,     7,   174,    33,    28,
      -1,    -1,   394,    -1,   181,   182,    26,    -1,   400,    12,
      -1,    -1,    32,   405,    -1,    -1,    36,   194,     8,   411,
      10,    11,    12,    26,   201,   202,    -1,    -1,   420,    32,
      12,    -1,    -1,    -1,   426,    -1,    26,   429,    -1,    -1,
     217,    -1,    32,    -1,    26,    -1,   438,   224,   225,     1,
      32,     3,     4,     5,     6,     7,     8,    12,    -1,   236,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    26,    24,    25,    12,    27,    28,    32,    30,    12,
     257,    33,    34,    35,    -1,    47,    -1,   264,    26,    -1,
      -1,    29,    -1,    26,   271,   272,   273,   274,    -1,    32,
      -1,   278,     8,     9,    10,    11,    12,    12,   285,   286,
     287,   288,   289,    75,   291,    -1,    78,    79,    -1,   296,
      26,    26,     3,    29,    29,    -1,   303,    33,   305,   306,
     307,   308,    13,    14,    -1,    -1,    98,    -1,   315,   316,
     102,     1,    -1,     3,     4,     5,     6,     7,     8,   326,
      -1,    -1,   329,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    12,    24,    25,   343,    27,    28,   131,
      30,   133,    -1,    33,    34,    35,     3,    26,   140,     3,
      -1,    -1,   144,    32,   361,   147,    13,    14,    -1,    13,
      14,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,   379,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,   394,    27,    28,
     182,    30,    12,   400,    33,    34,    35,     3,   405,     8,
       9,    10,    11,    12,   411,    -1,    26,    13,    14,    -1,
     202,    -1,    32,   420,    11,    12,    -1,    26,    -1,   426,
      -1,    -1,   429,    32,    33,    -1,    -1,    36,    -1,    26,
      -1,   438,    29,   225,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,   236,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,    28,    -1,    30,    -1,   257,    33,    34,    35,    -1,
      47,    -1,   264,     3,     8,     9,    10,    11,    12,   271,
     272,   273,   274,    13,    14,    -1,   278,     8,     9,    10,
      11,    12,    26,   285,   286,   287,   288,   289,    75,   291,
      -1,    78,    79,    -1,   296,    26,    -1,     3,    29,    -1,
      -1,   303,    33,   305,   306,   307,   308,    13,    14,    -1,
      97,    -1,    -1,   315,   316,   102,     1,    -1,     3,     4,
       5,     6,     7,     8,   326,    -1,    -1,   329,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,   343,    27,    28,   131,    30,   133,    -1,    33,    34,
      35,    -1,    -1,   140,    -1,    -1,    -1,   144,     1,   361,
     147,     4,     5,     6,     7,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,   379,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,   394,    27,    28,   182,    30,    -1,   400,    33,
      34,    35,    -1,   405,     8,     9,    10,    11,    12,   411,
       4,     5,     6,     7,    -1,   202,    -1,     8,   420,    10,
      11,    12,    26,    -1,   426,    -1,    -1,   429,    32,    33,
      -1,    -1,    36,    -1,    -1,    26,   438,    -1,   225,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    47,   236,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    -1,    24,    25,    -1,    27,    28,    -1,    30,    -1,
     257,    33,    34,    35,    -1,    -1,    75,   264,    -1,    78,
      79,    -1,    -1,    -1,   271,   272,   273,    -1,    -1,    -1,
       8,   278,    10,    11,    12,    -1,     3,    96,   285,   286,
     287,     8,   289,   102,   291,    -1,    13,    14,    26,   296,
      17,    18,    -1,    20,    32,    -1,   303,    -1,   305,   306,
     307,    28,    -1,    30,    -1,    32,    33,    -1,   315,   316,
      -1,    -1,   131,    -1,   133,    10,    11,    12,    -1,   326,
      -1,   140,   329,    -1,    -1,   144,    -1,    -1,   147,    -1,
       3,    26,    -1,    -1,    29,     8,   343,    -1,    -1,    -1,
      13,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,   361,    28,    -1,    30,    -1,    32,
      33,    -1,     1,   182,     3,     4,     5,     6,     7,     8,
      -1,    -1,   379,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,   202,    -1,    24,    25,   394,    27,    28,
      -1,    30,    -1,   400,    33,    34,    35,    -1,   405,    -1,
      -1,    -1,    -1,    -1,   411,     8,   225,    10,    11,    12,
       3,    -1,    -1,   420,    -1,     8,    47,   236,    -1,   426,
      13,    14,   429,    26,    17,    18,    -1,    20,    -1,    32,
      -1,   438,    -1,    36,    -1,    28,    -1,    30,   257,    32,
      33,    10,    11,    12,    75,   264,    -1,    78,    79,    -1,
      -1,    -1,   271,   272,    -1,    -1,    -1,    26,    -1,   278,
      29,    -1,    -1,    -1,    95,    -1,   285,   286,     3,    -1,
     289,   102,   291,     8,    -1,    -1,    -1,   296,    13,    14,
      -1,    -1,    17,    18,   303,    20,   305,   306,     8,     9,
      10,    11,    12,    28,    -1,    30,   315,   316,    33,    -1,
     131,    -1,   133,    -1,    11,    12,    26,   326,    -1,   140,
     329,    -1,    32,   144,    -1,    -1,   147,    -1,     3,    26,
      -1,    -1,    29,     8,   343,    -1,    -1,    -1,    13,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,   361,    28,    -1,    30,    -1,    32,    33,    -1,
       1,   182,     3,     4,     5,     6,     7,     8,    -1,    -1,
     379,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,   202,    -1,    24,    25,   394,    27,    28,    -1,    30,
      -1,   400,    33,    47,    35,    -1,   405,    -1,    -1,    -1,
      -1,    -1,   411,    -1,   225,     8,     9,    10,    11,    12,
      -1,   420,    -1,    -1,    -1,   236,    -1,   426,    -1,    -1,
     429,    75,    -1,    26,    78,    79,    29,     0,     1,   438,
      33,     4,     5,     6,     7,    -1,   257,    -1,    -1,    93,
      -1,    -1,    -1,   264,     3,    -1,    -1,    -1,   102,     8,
     271,    -1,    -1,    -1,    13,    14,    -1,   278,    17,    18,
      47,    20,    -1,    -1,   285,    -1,    -1,    -1,   289,    28,
     291,    30,    -1,    32,    33,   296,    -1,   131,    -1,   133,
      -1,    -1,   303,    -1,   305,    -1,   140,    -1,    75,    -1,
     144,    78,    79,   147,   315,   316,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,   326,    -1,    -1,   329,    13,
      14,    15,    16,    17,    18,   102,    20,    21,    22,    -1,
      24,    25,   343,    27,    28,    -1,    30,    -1,   182,    33,
      34,    35,    -1,    -1,     8,     9,    10,    11,    12,    -1,
     361,    -1,    -1,    -1,   131,    -1,   133,    -1,   202,    -1,
      -1,    -1,    26,   140,    -1,    -1,    -1,   144,   379,    33,
     147,    -1,    -1,     0,     1,    -1,    47,     4,     5,     6,
       7,   225,    -1,   394,     8,     9,    10,    11,    12,   400,
      -1,    -1,   236,    -1,   405,    -1,    -1,    -1,    -1,    -1,
     411,    -1,    26,    -1,    75,   182,    -1,    78,    79,   420,
      -1,    -1,    -1,   257,    -1,   426,    -1,    -1,   429,    -1,
     264,    -1,    -1,    -1,    -1,   202,    -1,   438,    -1,    -1,
      -1,   102,    -1,    -1,   278,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,   289,    -1,   291,   225,    -1,
      -1,    -1,   296,     3,    -1,    26,    -1,    -1,     8,   303,
     131,    32,   133,    13,    14,    36,    -1,    17,    18,   140,
      20,   315,   316,   144,    -1,    -1,   147,    -1,    28,    -1,
      30,    -1,   326,    33,    -1,   329,    -1,   264,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,   343,
      -1,   278,     8,     9,    10,    11,    12,    -1,    -1,    26,
      -1,   182,   289,    -1,   291,    32,    33,   361,    -1,   296,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      36,   202,    -1,    -1,    -1,   379,    -1,    -1,   315,   316,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,   326,
     394,    -1,   329,    -1,   225,    -1,   400,    -1,    26,    -1,
      -1,   405,    -1,    -1,    32,    -1,   343,   411,    36,    -1,
      -1,     8,     9,    10,    11,    12,   420,    -1,    -1,    -1,
      -1,    -1,   426,    -1,   361,   429,    -1,    -1,    -1,    26,
      -1,    -1,    -1,   264,   438,    32,    -1,    -1,    -1,    36,
      -1,    -1,   379,    -1,    -1,    -1,    -1,   278,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,   394,   289,    -1,
     291,    -1,    -1,   400,    -1,   296,    26,    -1,   405,    -1,
      -1,    -1,    32,    -1,   411,    -1,    36,    -1,     8,     9,
      10,    11,    12,   420,   315,   316,    -1,    -1,    -1,   426,
      -1,    -1,   429,    -1,    -1,   326,    26,    -1,   329,    -1,
      -1,   438,     1,    33,     3,     4,     5,     6,     7,     8,
      -1,    -1,   343,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
     361,    30,    -1,    -1,    33,    34,    35,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,   379,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,   394,    27,    28,    -1,    30,    -1,   400,
      33,    34,    35,    -1,   405,    -1,    -1,     0,     1,    -1,
     411,     4,     5,     6,     7,    -1,    -1,    -1,    -1,   420,
       8,     9,    10,    11,    12,   426,    -1,     1,   429,     3,
       4,     5,     6,     7,     8,    -1,    -1,   438,    26,    13,
      14,    15,    16,    17,    18,    33,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    33,
      -1,    35,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      26,    -1,    -1,    -1,    -1,    26,    32,    -1,    -1,    -1,
      36,    32,    26,    -1,    -1,    36,    -1,    -1,    32,    -1,
      -1,    -1,    36,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    26,    -1,    -1,    -1,    -1,    26,    32,    -1,    -1,
      -1,    36,    32,    26,    -1,    -1,    36,    -1,    -1,    32,
      -1,    -1,    -1,    36,     8,     9,    10,    11,    12,     8,
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
      -1,     8,     9,    10,    11,    12,    26,    -1,    -1,    -1,
      -1,    26,    32,    -1,    -1,    -1,    36,    32,    33,    26,
       8,     9,    10,    11,    12,    32,    33,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    26,     8,
       9,    10,    11,    12,    32,    26,    -1,    -1,     0,     1,
      26,    32,     4,     5,     6,     7,    32,    26,     8,     9,
      10,    11,    12,    32,    -1,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    26,     8,     9,    10,
      11,    12,    32,    26,    -1,    -1,     0,     1,    26,    32,
       4,     5,     6,     7,    32,    26,     8,     9,    10,    11,
      12,    32,    -1,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    26,     8,     9,    10,    11,    12,
      32,    26,    -1,    -1,     0,     1,    26,    32,     4,     5,
       6,     7,    32,    26,     8,     9,    10,    11,    12,    32,
      -1,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    26,     8,     9,    10,    11,    12,    32,    26,
      -1,    -1,     0,     1,    26,    32,     4,     5,     6,     7,
      32,    26,     8,     9,    10,    11,    12,    32,    -1,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      26,     8,     9,    10,    11,    12,    32,    26,    -1,    -1,
       0,     1,    26,    32,     4,     5,     6,     7,    32,    26,
       8,     9,    10,    11,    12,    32,    -1,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    26,     8,
       9,    10,    11,    12,    32,    26,    -1,    -1,     0,     1,
      26,    32,     4,     5,     6,     7,    32,    26,     8,     9,
      10,    11,    12,    32,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    26,    -1,    -1,    29,
      -1,    -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,
      29,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    26,    -1,    -1,    29,    -1,    26,
      -1,    -1,    29,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,    29,
      -1,    26,    -1,    -1,    29,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    26,    -1,
      -1,    29,    -1,    26,    -1,    -1,    29,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      26,    -1,    -1,    29,    -1,    26,    -1,    -1,    29,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,
      29,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    26,    -1,    -1,    29,    -1,    26,
      -1,    -1,    29,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    26,    -1,    -1,    29,
      -1,    26,    -1,    -1,    29,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    26,    -1,
      -1,    -1,    -1,    26,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     0,
       1,    -1,    26,     4,     5,     6,     7,    26,    -1,    -1,
      -1,    -1,    26,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     0,     1,
      -1,    26,     4,     5,     6,     7,    26,    -1,    -1,    -1,
      -1,    26,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     0,     1,    -1,
      26,     4,     5,     6,     7,    26,    -1,    -1,    -1,    -1,
      26,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    26,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    26
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
      61,    29,    29,    29,    49,    57,    61,    71,    32,    32,
      71,    32,    22,    29,    32,    32,    49,    56,    49,    32,
      49,     1,    35,     3,     8,    13,    14,    17,    18,    20,
      28,    30,    33,    58,    60,    61,    62,    63,    64,    65,
      66,    70,    73,     3,     8,    13,    14,    17,    18,    20,
      28,    30,    33,    58,    62,    63,    64,    65,    66,    70,
      73,    13,    14,    13,    14,    29,     3,     8,    13,    14,
      17,    18,    20,    28,    30,    33,    58,    60,    61,    62,
      63,    64,    65,    66,    70,    73,    12,    26,     1,    15,
      16,    21,    24,    25,    27,    35,    41,    46,    50,    51,
      52,    53,    54,    55,    56,    57,    72,    12,     3,    34,
      47,    33,     3,    70,    33,    33,    33,     3,    28,    70,
      57,    11,    10,     8,     9,    33,     3,    70,    33,    33,
      33,     3,    28,    70,    57,    11,    10,     8,     9,    33,
      33,    33,    33,    33,     3,    70,    33,    33,    33,     3,
      28,    70,    57,    12,    26,    11,    10,     8,     9,    62,
       3,    13,    14,    58,    33,    33,    33,    33,    57,    33,
      34,    47,    29,    29,     3,    62,    31,    48,    32,    68,
      33,    60,    59,     3,    58,    33,    33,    32,    63,    64,
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
      29,    29,    49,    57,    61,    32,    32,    32,    32,    32,
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
#line 2515 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 113 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2526 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 119 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2534 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 124 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2542 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 127 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2550 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 130 "sintatico.y"
          {}
#line 2556 "sintatico.tab.c"
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
#line 2583 "sintatico.tab.c"
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
#line 2614 "sintatico.tab.c"
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
#line 2627 "sintatico.tab.c"
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
#line 2654 "sintatico.tab.c"
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
#line 2666 "sintatico.tab.c"
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
#line 2701 "sintatico.tab.c"
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
#line 2735 "sintatico.tab.c"
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
#line 2749 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 289 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2758 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: '{' '}'  */
#line 293 "sintatico.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "empty_brackets");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "empty", 4);
  }
#line 2768 "sintatico.tab.c"
    break;

  case 18: /* brackets_stmt: error  */
#line 298 "sintatico.y"
          {}
#line 2774 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt stmts  */
#line 301 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2785 "sintatico.tab.c"
    break;

  case 20: /* stmts: stmt  */
#line 307 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2793 "sintatico.tab.c"
    break;

  case 21: /* stmt: for_stmt  */
#line 312 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2801 "sintatico.tab.c"
    break;

  case 22: /* stmt: if_else_stmt  */
#line 315 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2809 "sintatico.tab.c"
    break;

  case 23: /* stmt: return_stmt  */
#line 318 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2817 "sintatico.tab.c"
    break;

  case 24: /* stmt: io_stmt  */
#line 321 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2825 "sintatico.tab.c"
    break;

  case 25: /* stmt: exp_stmt  */
#line 324 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2833 "sintatico.tab.c"
    break;

  case 26: /* stmt: set_stmt  */
#line 327 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2841 "sintatico.tab.c"
    break;

  case 27: /* stmt: var_declaration  */
#line 330 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2849 "sintatico.tab.c"
    break;

  case 28: /* stmt: assignment ';'  */
#line 333 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2857 "sintatico.tab.c"
    break;

  case 29: /* stmt: brackets_stmt  */
#line 336 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2865 "sintatico.tab.c"
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
#line 2885 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 356 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 2895 "sintatico.tab.c"
    break;

  case 32: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 361 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2905 "sintatico.tab.c"
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
#line 2918 "sintatico.tab.c"
    break;

  case 34: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 378 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2929 "sintatico.tab.c"
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
#line 2941 "sintatico.tab.c"
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
#line 2960 "sintatico.tab.c"
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
#line 2982 "sintatico.tab.c"
    break;

  case 38: /* exp_stmt: exp ';'  */
#line 428 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2992 "sintatico.tab.c"
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
#line 3014 "sintatico.tab.c"
    break;

  case 40: /* exp: or_exp  */
#line 454 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3022 "sintatico.tab.c"
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
#line 3034 "sintatico.tab.c"
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
#line 3047 "sintatico.tab.c"
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
#line 3068 "sintatico.tab.c"
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
#line 3093 "sintatico.tab.c"
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
#line 3111 "sintatico.tab.c"
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
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup("INT");
  }
#line 3126 "sintatico.tab.c"
    break;

  case 47: /* or_exp: and_exp  */
#line 539 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3134 "sintatico.tab.c"
    break;

  case 48: /* or_exp: set_in_exp  */
#line 542 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3142 "sintatico.tab.c"
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
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup("INT");
  }
#line 3157 "sintatico.tab.c"
    break;

  case 50: /* and_exp: relational_exp  */
#line 557 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3165 "sintatico.tab.c"
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
    if((yyvsp[-2].nodo)->tipo) (yyval.nodo)->tipo = strdup("INT");
  }
#line 3180 "sintatico.tab.c"
    break;

  case 52: /* relational_exp: sum_exp  */
#line 572 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3188 "sintatico.tab.c"
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
#line 3210 "sintatico.tab.c"
    break;

  case 54: /* sum_exp: mul_exp  */
#line 594 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3218 "sintatico.tab.c"
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
#line 3240 "sintatico.tab.c"
    break;

  case 56: /* mul_exp: unary_exp  */
#line 616 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3248 "sintatico.tab.c"
    break;

  case 57: /* unary_exp: primal_exp  */
#line 621 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3256 "sintatico.tab.c"
    break;

  case 58: /* unary_exp: '!' primal_exp  */
#line 624 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3265 "sintatico.tab.c"
    break;

  case 59: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 628 "sintatico.y"
                             {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3274 "sintatico.tab.c"
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
#line 3299 "sintatico.tab.c"
    break;

  case 61: /* $@4: %empty  */
#line 652 "sintatico.y"
                         {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

  }
#line 3311 "sintatico.tab.c"
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
#line 3338 "sintatico.tab.c"
    break;

  case 63: /* $@5: %empty  */
#line 680 "sintatico.y"
           {
      indiceArg = 0;
      strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
      prevFuncao.linha = (yyvsp[-1].lexema).linha;
      prevFuncao.coluna = (yyvsp[-1].lexema).coluna;

    }
#line 3350 "sintatico.tab.c"
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
#line 3376 "sintatico.tab.c"
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
#line 3402 "sintatico.tab.c"
    break;

  case 66: /* $@6: %empty  */
#line 728 "sintatico.y"
               {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, (yyvsp[-1].lexema).corpo); 
    prevFuncao.linha = (yyvsp[-1].lexema).linha;
    prevFuncao.coluna = (yyvsp[-1].lexema).coluna;
  }
#line 3413 "sintatico.tab.c"
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
#line 3440 "sintatico.tab.c"
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
#line 3466 "sintatico.tab.c"
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
#line 3486 "sintatico.tab.c"
    break;

  case 70: /* unary_exp: ISSET '(' set_exp ')'  */
#line 791 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3497 "sintatico.tab.c"
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
#line 3517 "sintatico.tab.c"
    break;

  case 72: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 812 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3528 "sintatico.tab.c"
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
#line 3549 "sintatico.tab.c"
    break;

  case 74: /* primal_exp: const  */
#line 838 "sintatico.y"
          {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3557 "sintatico.tab.c"
    break;

  case 75: /* primal_exp: '(' exp ')'  */
#line 841 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3565 "sintatico.tab.c"
    break;

  case 76: /* primal_exp: set_exp  */
#line 844 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3573 "sintatico.tab.c"
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
#line 3594 "sintatico.tab.c"
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
#line 3615 "sintatico.tab.c"
    break;

  case 79: /* type: INT_TYPE  */
#line 883 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3627 "sintatico.tab.c"
    break;

  case 80: /* type: FLOAT_TYPE  */
#line 890 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3639 "sintatico.tab.c"
    break;

  case 81: /* type: SET_TYPE  */
#line 897 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3651 "sintatico.tab.c"
    break;

  case 82: /* type: ELEM_TYPE  */
#line 904 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3663 "sintatico.tab.c"
    break;

  case 83: /* const: INTEGER  */
#line 913 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("INT");
  }
#line 3674 "sintatico.tab.c"
    break;

  case 84: /* const: FLOAT  */
#line 919 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("FLOAT");
  }
#line 3685 "sintatico.tab.c"
    break;

  case 85: /* const: EMPTY  */
#line 925 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
    (yyval.nodo)->tipo = strdup("SET");
  }
#line 3696 "sintatico.tab.c"
    break;


#line 3700 "sintatico.tab.c"

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

