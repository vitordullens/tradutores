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
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_66_5 = 66,                      /* $@5  */
  YYSYMBOL_67_6 = 67,                      /* $@6  */
  YYSYMBOL_primal_exp = 68,                /* primal_exp  */
  YYSYMBOL_arg_list = 69,                  /* arg_list  */
  YYSYMBOL_type = 70,                      /* type  */
  YYSYMBOL_const = 71                      /* const  */
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
#define YYLAST   4285

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  463

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
       0,   101,   101,   109,   115,   120,   123,   126,   129,   153,
     153,   186,   186,   216,   246,   277,   277,   289,   292,   298,
     303,   306,   309,   312,   315,   318,   321,   324,   327,   332,
     343,   348,   355,   365,   371,   380,   384,   391,   404,   423,
     430,   442,   456,   459,   464,   472,   484,   490,   496,   510,
     517,   520,   525,   532,   537,   544,   549,   556,   561,   568,
     573,   576,   580,   584,   600,   600,   620,   620,   637,   654,
     654,   675,   692,   703,   708,   719,   728,   739,   742,   747,
     755,   764,   771,   778,   785,   794,   799,   804
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
     275,   276,   277,   278,   279,   280,   281,   282,    59,    33,
      61,    41,    40,   125,   123,    44
};
#endif

#define YYPACT_NINF (-304)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1226,  1485,    11,    27,    38,    59,    73,  1567,  1710,  1732,
    3660,   115,  -304,  3694,    -9,  3728,    61,  1277,   127,   138,
     197,     8,     8,    13,  3762,  3237,  3796,  3830,  1277,  3269,
     182,  3521,    19,   142,   177,   185,  3865,  3870,  3875,   186,
     201,    67,   214,   236,    88,   629,  2455,  2489,   240,  2523,
    2557,  2591,  2625,  2659,  2693,  2727,   244,   257,   125,   290,
     310,   354,   270,  1244,  3896,  3901,  3906,   281,  3927,   801,
     111,  1267,  3932,  1434,   297,   143,   629,   308,  3527,  2761,
     292,   353,    90,  3532,   338,  3937,   346,  3864,   348,  2795,
    2829,    95,   178,   120,   178,   178,   178,   178,   359,   361,
     404,  3958,  1452,   160,   372,    25,    14,   368,   389,   411,
     413,   416,   420,  2863,   439,   438,   442,   203,   126,  3963,
     627,   742,   994,   799,   909,  1052,  1311,  3968,  3989,    47,
     450,  3994,  1452,   382,   458,   463,   486,  3301,  1492,   131,
    3999,  4020,  4025,  1452,   470,   484,  1452,  4030,   485,  2897,
    2931,  2965,   726,   490,   491,   500,   501,  4051,  4056,   502,
    4061,  3269,   467,  3269,  3269,  4082,  2999,   508,  3033,  3067,
    3269,  3101,  3135,  3237,  3557,   435,   517,   772,  3627,  3632,
     519,   228,   629,   101,    75,   124,   530,   239,   970,  3637,
    3661,  3666,  3671,  3592,   504,   521,  1194,  3500,  4087,   528,
     369,   629,   171,   652,   229,  4092,  4110,  4115,  4120,   531,
     535,  3169,   683,   572,   537,   855,  1120,  1399,   550,   473,
     629,    46,   190,   282,   100,   329,   713,  1573,  1585,  1618,
    1623,   154,   936,   211,  1026,   554,   576,   578,   580,   455,
     584,  3237,  1669,  1741,  1775,  1809,  1843,  1877,  1911,  1945,
     589,   599,   626,   601,  3269,   527,  3562,  3695,  1434,   223,
    3567,   604,  3700,   602,  1086,  1086,  1086,  1086,  1086,   549,
    3597,  4138,  1434,   256,  3602,   609,  4143,   620,   936,   936,
     936,   936,  1434,  1434,   760,  1235,  1696,  1434,   276,  1545,
     621,  3328,   623,   296,  1158,   313,  1158,  1158,  1158,  1158,
     168,   625,   302,   691,   336,   454,   662,   582,   629,   308,
    1979,   645,   672,  3269,  2013,  2047,   651,  1519,   653,  3705,
    1452,   818,   494,   656,   657,   884,   331,  3729,   613,  1062,
    1611,  3734,  3739,  4148,  1452,   911,   647,   659,   666,   983,
     339,  4166,   701,  1368,  4171,  4176,   774,   798,  3333,  1452,
    1209,   873,   673,   674,  1339,   356,  3340,   392,   675,   468,
     153,   871,   978,   595,   963,  3368,  3373,  1434,   697,   704,
     706,   730,   729,  2081,   737,   731,  2115,   562,   734,   735,
    3203,   740,  3763,  1452,   394,  3768,  3773,  3797,  1452,   741,
     743,   747,  4194,  1452,   763,  4199,  4204,  4222,  1452,   762,
     765,   767,   964,   770,  3380,  1452,    54,  3408,  3413,  3420,
    1452,   771,   777,  1434,   900,   785,   788,   791,  3301,  1492,
     371,  2149,  3802,   794,   805,  3807,  3831,  4227,   812,   813,
    4232,  4250,  3448,   820,   827,  3453,  3460,   933,   935,  2183,
    2217,  2251,  2285,   831,   829,   838,  3836,  3841,  4255,  4260,
    3488,  3493,  1013,  3301,   467,  3301,  3301,  2319,   843,  2353,
    2387,  3301,  2421
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -304,  -304,  -304,   815,     4,  -304,  -304,  -304,   834,   -20,
    -167,   -46,  -106,  -132,  -125,  -110,   -47,   -40,   -27,   -61,
     -16,   -30,  1258,  1330,  1105,  1033,   875,   803,   574,  -303,
    -235,  -285,   230,  -122,     0,   402
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,    46,    10,    17,    18,    19,    47,
      29,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     129,    58,    59,    60,    61,    62,    63,    64,    65,   132,
     102,   143,    66,   130,    67,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    26,    27,    88,     9,   244,   254,    11,    99,    24,
     148,     9,   245,    57,   -82,   183,   112,    20,   383,    15,
     320,   156,    71,    16,   159,    80,   232,   246,    20,    86,
     -81,   152,   393,    57,   334,    36,    37,   -51,    38,   233,
     388,   -83,    25,   104,   -14,   183,   183,   405,    28,   349,
     -51,    45,   116,   100,   398,   166,   133,   168,   169,   109,
     110,   121,   -84,   124,   171,    -9,    -9,    -9,    -9,   410,
      78,   293,   221,    12,   313,    32,   250,   -43,   -80,   -44,
      33,   -43,   146,    36,    37,   -44,    38,   -51,   145,   -44,
     247,    83,   -11,   115,    43,    79,    44,   248,   120,    45,
     -51,   167,   221,   209,    36,    37,   -51,    38,   210,   155,
     249,   296,   -50,   221,   -66,    84,   221,   243,    14,   -66,
      45,   251,   153,   123,   -66,   -50,   231,   -66,   -66,   144,
     -66,   -50,   -43,   210,   154,   -50,   264,   252,   -66,   209,
     -66,   242,   101,   -66,   209,    57,   174,    57,    57,   233,
      91,   175,   183,   -43,    57,   -42,   176,   300,    21,   177,
     178,   108,   179,   -64,   296,   -49,   263,   301,   -64,    22,
     180,   183,   181,   -64,    73,   182,   -64,   -64,   -49,   -64,
     -48,    78,   278,   -50,   -49,   277,    32,   -64,   -49,   -64,
     183,   131,   -64,   -48,    36,    37,   -50,    38,   381,   -48,
      23,   302,   -51,   305,   292,    43,   -69,    44,   318,    74,
      45,   -69,   391,   -13,   304,   -51,   -69,    75,    76,   -69,
     -69,   -51,   -69,   311,   301,   -51,   323,   403,   104,   324,
     -69,   260,   -69,    77,   142,   -69,   209,   280,    57,   -55,
     -55,   -55,   104,   338,   177,   178,    81,   179,   372,   266,
     -53,   -53,   104,   104,   -55,   261,   378,   104,   353,   337,
     182,   423,    72,   359,   -53,   362,   424,   375,    82,   209,
     -53,   428,    89,    87,    85,   191,   429,   183,   183,   352,
      95,   -53,   -53,   433,    98,    90,   244,   183,   434,   209,
     221,   370,   371,   245,   294,   -53,   390,    57,   -53,   357,
     107,   379,   -51,   207,   221,   191,   191,   295,   246,   358,
     400,   111,   442,   -42,   -47,   -51,   361,   -42,   -51,   221,
     113,   244,    92,   244,   244,   412,   358,   -47,   245,   244,
     245,   245,   229,   -47,   389,    93,   245,   104,   -42,   297,
     -53,   -53,   399,   246,   209,   246,   246,   457,   -45,   459,
     460,   246,   209,   221,   -53,   462,   114,   250,   221,   411,
     -53,   -45,   229,   221,   -53,    94,   -50,   -45,   221,   209,
     118,   247,   274,   229,   444,   221,   229,   119,   248,   -50,
     221,   -18,   -50,   104,   209,   196,   197,   211,   198,   -41,
     445,   249,   250,   458,   250,   250,   275,   231,   243,   134,
     250,   201,   251,   443,   -48,   257,   247,   -44,   247,   247,
     -44,   262,   191,   248,   247,   248,   248,   -48,   252,   -44,
     135,   248,   242,   -48,   271,   -44,   249,   -48,   249,   249,
     276,   191,   -40,   243,   249,   243,   243,   251,   256,   251,
     251,   243,   136,   286,   137,   251,    69,   192,   138,   291,
     191,   177,   178,   252,   179,   252,   252,   242,    78,   242,
     242,   252,   207,    32,   139,   242,   -46,   182,    33,   140,
     253,    36,    37,   141,    38,   208,   289,   192,   192,   -46,
     -47,   147,    43,   310,    44,   -46,   149,    45,   207,   215,
     216,   150,   217,   -47,   191,   191,   191,   191,   191,   -47,
     290,   157,   207,   -47,   230,   220,   -51,   270,   207,   207,
     207,   207,   207,   207,   151,   158,   160,   207,   162,   -51,
     196,   197,   163,   198,   229,   384,   229,   229,   229,   229,
     -66,   164,   165,   -79,   230,   -66,   201,   191,   191,   170,
     -66,   265,   -50,   -66,   -66,   230,   -66,   191,   230,   258,
     229,   259,   -66,   272,   -66,   -50,   -66,   -66,   319,   -66,
     273,   -50,   -66,   282,   229,   -66,   -66,   283,   -66,   287,
     -76,   -76,   -76,   -76,   -76,   285,   -66,   192,   -66,   229,
     333,   -66,   288,   192,   192,   174,   306,   -76,   215,   216,
     175,   217,   317,   -76,   255,   176,   208,   207,   177,   178,
     369,   179,   208,   192,   220,   297,   -52,   -52,   307,   180,
     308,   181,   309,   229,   182,   230,   312,   314,   229,   190,
     -52,   230,   192,   229,   265,   -49,   -52,   315,   229,   316,
     -52,   317,   174,   327,   208,   229,   326,   175,   -49,   -48,
     229,   340,   176,   207,   -49,   177,   178,   206,   179,   190,
     190,   341,   -48,   355,   356,   -48,   180,   367,   181,   -51,
     208,   182,   279,   -53,   -53,   368,   192,   192,   192,   192,
     192,   128,   -51,   373,   208,   374,   228,   -53,   394,   376,
     208,   208,   208,   208,   208,   208,   380,   385,   386,   208,
     395,   -76,   -76,   -76,   -76,   -76,   230,   396,   230,   230,
     230,   230,   278,   -49,   407,   408,   228,   413,   -76,   192,
     192,   279,   -52,   -52,   -76,   284,   -49,   228,   -76,   192,
     228,   298,   230,   -55,   -55,   -55,   -52,   -33,   415,   -33,
     -33,   -33,   -33,   -33,   -33,   416,   230,   417,   -55,   -33,
     -33,   -33,   -33,   -33,   -55,   -33,   -33,   161,   -55,   -33,
     -33,   230,   -33,   -33,   -47,   -33,   190,   419,   -33,   -33,
     -33,   418,   420,   -66,   421,   -41,   -40,   -47,   -66,   208,
     -47,   422,   425,   -66,   426,   190,   -66,   -66,   427,   -66,
     -85,   -85,   -85,   -85,   -85,   230,   -51,   -66,   -44,   -66,
     230,   348,   -66,   430,   190,   230,   431,   -85,   -44,   -51,
     230,   432,   435,   -85,    31,   401,   206,   230,   436,    32,
     -51,   -45,   230,   439,    33,   208,   440,    36,    37,   441,
      38,   -64,    13,   -51,   -45,   446,   -64,   -45,    43,   402,
      44,   -64,   206,    45,   -64,   -64,   447,   -64,   190,   190,
     190,   190,   332,   448,   449,   -64,   206,   -64,   189,   382,
     -64,   450,   206,   206,   206,   345,   206,   206,   451,   454,
     455,   206,    30,   -85,   -85,   -85,   -85,   -85,   228,   456,
     228,   228,   228,   366,   461,     0,   205,     0,   189,   189,
     -85,   190,   190,   -45,     0,   -51,   -85,   -69,     0,     0,
     -85,   190,   -69,     0,   228,     0,   -45,   -69,   -51,   127,
     -69,   -69,   -45,   -69,   406,   227,   -45,     0,   228,     0,
       0,   -69,   -51,   -69,   -64,   387,   -69,     0,     0,   -64,
     188,   -46,     0,   228,   -64,   -51,     0,   -64,   -64,     0,
     -64,   438,     0,     0,   -46,   227,     0,   -46,   -64,   193,
     -64,   206,   392,   -64,   194,   -51,   227,   -44,   204,   227,
     188,   188,   196,   197,     0,   198,     0,   228,   -51,     0,
     -44,     0,   228,   199,   452,   200,   -44,   228,   201,     0,
     126,   298,   228,   -54,   -54,   -54,   -44,   226,   267,   228,
     -55,   -55,   -55,     0,   228,   189,   -69,   206,   -54,   -44,
     -46,   -69,   -44,     0,   -54,   -55,   -69,     0,   -54,   -69,
     -69,   -55,   -69,   -46,   189,    94,   -49,   226,     0,   -46,
     -69,     0,   -69,   -46,   397,   -69,     0,     0,   226,   -49,
       0,   226,   -49,   189,     0,   -44,     0,   -17,     0,   -17,
     -17,   -17,   -17,   -17,   -17,   205,     0,     0,   -44,   -17,
     -17,   -17,   -17,   -17,   -44,   -17,   -17,   -17,   -44,   -17,
     -17,     0,   -17,   -17,     0,   -17,     0,   188,   -17,   -17,
     -17,   205,    95,   -52,   -52,     0,     0,   189,   189,   189,
     331,     0,   266,   -52,   -52,   205,   188,   -52,   187,     0,
     -52,   205,   205,   344,     0,   205,   205,   -52,     0,   174,
     205,     0,     0,   -52,   175,   188,     0,   227,     0,   227,
     227,   365,   177,   178,     0,   179,   203,   204,   187,   187,
     189,   189,     0,   180,     0,   181,     0,     0,   182,     0,
     189,     0,     0,   227,     0,     0,     0,   125,   -86,   -86,
     -86,   -86,   -86,   204,     0,   225,     0,   227,     0,   188,
     188,   330,     0,     0,     0,   -86,     0,   204,     0,     0,
     186,   -86,   227,   204,   343,   -86,     0,   204,   204,     0,
       0,   212,   204,     0,     0,   225,   213,     0,     0,   226,
     205,   226,   364,     0,   215,   216,   225,   217,   202,   225,
     186,   186,   188,   188,     0,   218,   227,   219,     0,     0,
     220,   227,   188,     0,     0,   226,   227,   122,     0,     0,
       0,   227,   -85,   -85,   -85,   -85,   -85,   224,   227,   226,
       0,     0,   -64,   227,     0,   187,   205,   -64,     0,   -85,
       0,     0,   -64,     0,   226,   -64,   -64,     1,   -64,     0,
       2,     3,     4,     5,   187,     0,   -64,   224,   -64,     0,
     404,   -64,   204,   -76,   -76,   -76,   -76,   -76,   224,     0,
       0,   224,    96,   187,   -55,   -55,   -55,     0,   226,     0,
     -76,     0,     0,   226,     0,   203,   -76,   350,   226,   -55,
     -76,     0,   -55,   226,     0,   -76,   -76,   -76,   -76,   -76,
     226,     2,     3,     4,     5,   226,     0,   186,   204,     0,
       0,   203,   -76,     0,     0,   -76,     0,   187,   329,   103,
       0,     0,     0,   184,     0,   203,   186,     0,     0,     0,
       0,   342,     0,     0,     0,   203,   203,     0,     0,    96,
     203,   -54,   -54,   -54,     0,   186,     0,   225,     0,   363,
       0,   105,     0,   184,   184,     0,   -54,   303,     0,   -54,
     187,   187,   -69,     0,     0,     0,     0,   -69,     0,     0,
     187,     0,   -69,   225,     0,   -69,   -69,     0,   -69,     0,
     222,     0,     0,   202,     0,     0,   -69,   225,   -69,   328,
     409,   -69,     0,     0,     0,   185,   280,   202,   -54,   -54,
     -54,     0,   225,     0,     0,     0,     0,   202,   202,     0,
     222,     0,   202,   -54,     0,     0,     0,     0,     0,   360,
     203,   222,     0,   106,   222,   185,   185,   -87,   -87,   -87,
     -87,   -87,   186,   186,     0,     0,   225,     0,     0,     0,
       0,   225,   186,     0,   -87,   224,   225,     0,     0,     0,
     -87,   225,   223,     0,   -87,     0,     0,   193,   225,   224,
     184,     0,   194,   225,     0,     0,   203,   195,     0,     0,
     196,   197,     0,   198,   224,   212,     0,     0,     0,   184,
     213,   199,   223,   200,     0,   214,   201,     0,   215,   216,
       0,   217,   202,   223,     0,     0,   223,     0,   184,   218,
       0,   219,     0,     0,   220,    -7,    -7,     0,   224,    -7,
      -7,    -7,    -7,   224,     0,    78,     0,     0,   224,     0,
      32,     0,     0,   224,     0,    33,     0,     0,    36,    37,
     224,    38,   185,     0,     0,   224,   322,     0,   202,    43,
       0,    44,   377,     0,    45,     0,     0,   175,     0,     0,
     336,   185,   176,     0,     0,   177,   178,     0,   179,     0,
     346,   347,     0,     0,     0,   351,   180,     0,   181,     0,
     185,   182,     0,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,   184,   184,    -2,     1,     0,
     -76,     2,     3,     4,     5,   184,   -76,   354,   222,     0,
     -76,   -57,   299,   -57,   -57,   -57,     0,     0,   106,     0,
       0,     0,   222,   -59,   -59,   -59,   -59,   -59,   -57,     0,
       0,     0,   106,     0,   -57,     0,     0,   222,   -57,     0,
     -59,     0,   106,   106,     0,     0,   -59,   106,     0,   267,
     -59,   -54,   -54,   -54,     0,   414,   -60,   -60,   -60,   -60,
     -60,   -77,   -77,   -77,   -77,   -77,   -54,   185,   185,     0,
       0,   222,   -54,   -60,     0,     0,   222,   185,   -77,   -60,
     223,   222,     0,   -60,   -77,     0,   222,     0,   -77,     0,
       0,     0,     0,   222,   223,     0,     0,     0,   222,     0,
     -26,   437,   -26,   -26,   -26,   -26,   -26,   -26,     0,   223,
       0,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,     0,   -26,   -26,   106,   -26,     0,
       0,   -26,   -26,   -26,   -62,   -62,   -62,   -62,   -62,     0,
      -4,    -4,     0,   223,    -4,    -4,    -4,    -4,   223,     0,
       0,   -62,     0,   223,     0,     0,     0,   -62,   223,     0,
       0,   -62,    -6,    -6,     0,   223,    -6,    -6,    -6,    -6,
     223,     0,   -28,   106,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,     0,     0,   -28,   -28,   -28,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,     0,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,
       0,   -23,   -23,     0,   -23,     0,     0,   -23,   -23,   -23,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,
       0,     0,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,     0,   -20,   -20,     0,   -20,   -20,     0,   -20,     0,
       0,   -20,   -20,   -20,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,   -21,   -21,   -21,   -21,
     -21,     0,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,
     -21,     0,   -21,     0,     0,   -21,   -21,   -21,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,
     -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,   -22,
     -22,   -22,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,
     -25,     0,     0,   -25,   -25,   -25,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,
       0,   -24,   -24,     0,   -24,     0,     0,   -24,   -24,   -24,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,     0,   -35,   -35,     0,   -35,   -35,     0,   -35,     0,
       0,   -35,   -35,   -35,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,     0,     0,   -27,   -27,   -27,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,     0,
     -39,   -39,     0,   -39,   -39,     0,   -39,     0,     0,   -39,
     -39,   -39,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,
     -36,     0,     0,   -36,   -36,   -36,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -8,     0,    -8,    -8,
       0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,
     -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,
       0,     0,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,
     -16,     0,   -16,   -16,     0,   -16,   -16,     0,   -16,     0,
       0,   -16,   -16,   -16,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,   -29,     0,   -29,   -29,     0,   -29,
     -29,     0,   -29,     0,     0,   -29,   -29,   -29,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,     0,   -30,   -30,     0,   -30,     0,     0,   -30,
     -30,   -30,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,
     -31,     0,     0,   -31,   -31,   -31,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   453,     0,   -33,   -33,
       0,   -33,   -33,     0,   -33,     0,     0,   -33,   -33,   -33,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,     0,   -34,   -34,     0,   -34,   -34,     0,   -34,     0,
       0,   -34,   -34,   -34,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,   -38,   -38,   -38,   -38,
     -38,     0,   -38,   -38,   -38,     0,   -38,   -38,     0,   -38,
     -38,     0,   -38,     0,     0,   -38,   -38,   -38,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,
     -37,   -37,     0,   -37,   -37,     0,   -37,     0,     0,   -37,
     -37,   -37,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,
     -32,     0,     0,   -32,   -32,   -32,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,
       0,   -26,   -26,     0,   -26,     0,     0,   -26,   -26,   -26,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
       0,     0,   -28,   -28,     0,   -28,   -28,     0,   -28,     0,
       0,   -28,   -28,   -28,   172,     0,    31,     2,     3,     4,
       5,    32,     0,     0,     0,     0,    33,    34,    35,    36,
      37,     0,    38,    39,     0,     0,    40,    41,     0,    42,
      43,     0,    44,     0,     0,    45,   -19,   173,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,     0,
     -23,   -23,     0,   -23,   -23,     0,   -23,     0,     0,   -23,
     -23,   -23,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,
       0,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,     0,     0,   -20,   -20,     0,   -20,   -20,     0,
     -20,     0,     0,   -20,   -20,   -20,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,     0,     0,   -21,   -21,
       0,   -21,   -21,     0,   -21,     0,     0,   -21,   -21,   -21,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
       0,     0,   -22,   -22,     0,   -22,   -22,     0,   -22,     0,
       0,   -22,   -22,   -22,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,     0,     0,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,   -25,   -25,     0,   -25,
     -25,     0,   -25,     0,     0,   -25,   -25,   -25,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,     0,     0,
     -24,   -24,     0,   -24,   -24,     0,   -24,     0,     0,   -24,
     -24,   -24,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,     0,
     -35,     0,     0,   -35,   -35,   -35,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,   -27,
       0,   -27,   -27,     0,   -27,     0,     0,   -27,   -27,   -27,
     -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
       0,     0,   -39,   -39,     0,   -39,   -39,     0,   -39,     0,
       0,   -39,   -39,   -39,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,     0,     0,   -36,   -36,     0,   -36,
     -36,     0,   -36,     0,     0,   -36,   -36,   -36,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,
     -29,   -29,     0,   -29,   -29,     0,   -29,     0,     0,   -29,
     -29,   -29,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,     0,     0,   -30,   -30,     0,   -30,   -30,     0,
     -30,     0,     0,   -30,   -30,   -30,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,
       0,   -31,   -31,     0,   -31,     0,     0,   -31,   -31,   -31,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
       0,     0,   -34,   -34,     0,   -34,   -34,     0,   -34,     0,
       0,   -34,   -34,   -34,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,   -38,   -38,   -38,   -38,
     -38,     0,   -38,   -38,     0,     0,   -38,   -38,     0,   -38,
     -38,     0,   -38,     0,     0,   -38,   -38,   -38,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,     0,     0,
     -37,   -37,     0,   -37,   -37,     0,   -37,     0,     0,   -37,
     -37,   -37,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,     0,     0,   -32,   -32,     0,   -32,   -32,     0,
     -32,     0,     0,   -32,   -32,   -32,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,     0,     0,   -17,   -17,
       0,   -17,   -17,     0,   -17,     0,     0,   -17,   -17,   -17,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
       0,     0,    -8,    -8,     0,    -8,    -8,     0,    -8,     0,
       0,    -8,    -8,    -8,   -16,     0,   -16,   -16,   -16,   -16,
     -16,   -16,     0,     0,     0,     0,   -16,   -16,   -16,   -16,
     -16,     0,   -16,   -16,     0,     0,   -16,   -16,     0,   -16,
     -16,     0,   -16,     0,     0,   -16,   -16,   -16,   -15,     0,
     -15,   -15,   -15,   -15,   -15,   -15,     0,     0,     0,     0,
     -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,     0,
     -15,   -15,     0,   -15,   -15,     0,   -15,     0,     0,   -15,
     172,   -15,    31,     2,     3,     4,     5,    32,     0,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,    39,
       0,     0,    40,    41,     0,    42,    43,     0,    44,     0,
       0,    45,   234,   173,    31,     2,     3,     4,     5,    32,
       0,     0,     0,     0,    33,   235,   236,    36,    37,     0,
      38,   237,     0,     0,   238,   239,     0,   240,    43,     0,
      44,     0,     0,    45,     0,   241,   -61,   -61,   -61,   -61,
     -61,   -68,   -68,   -68,   -68,   -68,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -61,     0,     0,     0,     0,   -68,   -61,
       0,     0,     0,   -61,   -68,   -78,     0,     0,   -68,     0,
       0,   -78,     0,     0,     0,   -78,   -56,   299,   -56,   -56,
     -56,   -58,   -58,   -58,   -58,   -58,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -56,     0,     0,     0,     0,   -58,   -56,
       0,     0,     0,   -56,   -58,   -63,     0,     0,   -58,     0,
       0,   -63,     0,     0,     0,   -63,   -72,   -72,   -72,   -72,
     -72,   -73,   -73,   -73,   -73,   -73,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -72,     0,     0,     0,     0,   -73,   -72,
       0,     0,     0,   -72,   -73,   -71,     0,     0,   -73,     0,
       0,   -71,     0,     0,     0,   -71,   -67,   -67,   -67,   -67,
     -67,   -74,   -74,   -74,   -74,   -74,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -67,     0,     0,     0,     0,   -74,   -67,
       0,     0,     0,   -67,   -74,   -75,     0,     0,   -74,     0,
       0,   -75,     0,     0,     0,   -75,   -65,   -65,   -65,   -65,
     -65,   -70,   -70,   -70,   -70,   -70,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -65,     0,     0,     0,     0,   -70,   -65,
       0,     0,     0,   -65,   -70,   -86,     0,     0,   -70,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,   -76,     0,     0,   -76,
       0,    69,   -76,    70,     0,   -76,     0,   -76,     0,    70,
     -76,     0,     0,     0,   117,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,   -76,     0,     0,     0,     0,   -76,   -76,   255,
       0,     0,   -76,   -76,   321,     0,     0,     0,   -76,   325,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,   -76,     0,     0,
       0,     0,   -76,     0,   269,     0,     0,   -76,     0,   335,
       0,     0,     0,     0,   339,   -86,   -86,   -86,   -86,   -86,
     -87,   -87,   -87,   -87,   -87,   -57,   268,   -57,   -57,   -57,
       0,     0,   -86,     0,     0,     0,     0,   -87,   -86,     0,
      -5,    -5,   -57,   -87,    -5,    -5,    -5,    -5,   -57,   -59,
     -59,   -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,   -77,
     -77,   -77,   -77,   -77,     0,     0,   -59,     0,     0,     0,
       0,   -60,   -59,     0,    -3,    -3,   -77,   -60,    -3,    -3,
      -3,    -3,   -77,   -62,   -62,   -62,   -62,   -62,   -61,   -61,
     -61,   -61,   -61,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -62,     0,     0,     0,     0,   -61,   -62,     0,    -8,    -8,
     -68,   -61,    -8,    -8,    -8,    -8,   -68,   -78,   -78,   -78,
     -78,   -78,   -56,   268,   -56,   -56,   -56,   -58,   -58,   -58,
     -58,   -58,     0,     0,   -78,     0,     0,     0,     0,   -56,
     -78,     0,   -17,   -17,   -58,   -56,   -17,   -17,   -17,   -17,
     -58,   -63,   -63,   -63,   -63,   -63,   -72,   -72,   -72,   -72,
     -72,   -73,   -73,   -73,   -73,   -73,     0,     0,   -63,     0,
       0,     0,     0,   -72,   -63,     0,   -12,   -12,   -73,   -72,
     -12,   -12,   -12,   -12,   -73,   -71,   -71,   -71,   -71,   -71,
     -67,   -67,   -67,   -67,   -67,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -71,     0,     0,     0,     0,   -67,   -71,     0,
     -10,   -10,   -74,   -67,   -10,   -10,   -10,   -10,   -74,   -75,
     -75,   -75,   -75,   -75,   -65,   -65,   -65,   -65,   -65,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -75,     0,     0,     0,
       0,   -65,   -75,     0,   -16,   -16,   -70,   -65,   -16,   -16,
     -16,   -16,   -70,   -85,   -85,   -85,   -85,   -85,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,     0,     0,
     -85,     0,     0,   -85,     0,   -86,     0,     0,   -86,     0,
     -87,     0,     0,   -87,   -57,    97,   -57,   -57,   -57,   -59,
     -59,   -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,     0,
       0,   -57,     0,     0,   -57,     0,   -59,     0,     0,   -59,
       0,   -60,     0,     0,   -60,   -77,   -77,   -77,   -77,   -77,
     -62,   -62,   -62,   -62,   -62,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -77,     0,     0,   -77,     0,   -62,     0,     0,
     -62,     0,   -61,     0,     0,   -61,   -68,   -68,   -68,   -68,
     -68,   -78,   -78,   -78,   -78,   -78,   -56,    97,   -56,   -56,
     -56,     0,     0,   -68,     0,     0,   -68,     0,   -78,     0,
       0,   -78,     0,   -56,     0,     0,   -56,   -58,   -58,   -58,
     -58,   -58,   -63,   -63,   -63,   -63,   -63,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -58,     0,     0,   -58,     0,   -63,
       0,     0,   -63,     0,   -72,     0,     0,   -72,   -73,   -73,
     -73,   -73,   -73,   -71,   -71,   -71,   -71,   -71,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -73,     0,     0,   -73,     0,
     -71,     0,     0,   -71,     0,   -67,     0,     0,   -67,   -74,
     -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -74,     0,     0,   -74,
       0,   -75,     0,     0,   -75,     0,   -65,     0,     0,   -65,
     -70,   -70,   -70,   -70,   -70,   -87,   -87,   -87,   -87,   -87,
     -57,   281,   -57,   -57,   -57,     0,     0,   -70,     0,     0,
     -70,     0,   -87,     0,     0,     0,     0,   -57,   -59,   -59,
     -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,   -77,   -77,
     -77,   -77,   -77,     0,     0,   -59,     0,     0,     0,     0,
     -60,     0,     0,     0,     0,   -77,   -62,   -62,   -62,   -62,
     -62,   -61,   -61,   -61,   -61,   -61,   -68,   -68,   -68,   -68,
     -68,     0,     0,   -62,     0,     0,     0,     0,   -61,     0,
       0,     0,     0,   -68,   -78,   -78,   -78,   -78,   -78,   -56,
     281,   -56,   -56,   -56,   -58,   -58,   -58,   -58,   -58,     0,
       0,   -78,     0,     0,     0,     0,   -56,     0,     0,     0,
       0,   -58,   -63,   -63,   -63,   -63,   -63,   -72,   -72,   -72,
     -72,   -72,   -73,   -73,   -73,   -73,   -73,     0,     0,   -63,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,   -73,
     -71,   -71,   -71,   -71,   -71,   -67,   -67,   -67,   -67,   -67,
     -74,   -74,   -74,   -74,   -74,     0,     0,   -71,     0,     0,
       0,     0,   -67,     0,     0,     0,     0,   -74,   -75,   -75,
     -75,   -75,   -75,   -65,   -65,   -65,   -65,   -65,   -70,   -70,
     -70,   -70,   -70,     0,     0,   -75,     0,     0,     0,     0,
     -65,     0,     0,     0,     0,   -70
};

static const yytype_int16 yycheck[] =
{
       0,    21,    22,    49,     0,   137,   173,     7,    69,     1,
     132,     7,   137,    29,     3,    45,    77,    17,   321,    28,
     255,   143,     3,    32,   146,    41,    12,   137,    28,    45,
       3,   137,   335,    49,   269,    16,    17,    12,    19,    25,
     325,     3,    34,    73,    31,    75,    76,   350,    35,   284,
      25,    32,    82,    69,   339,   161,    31,   163,   164,    75,
      76,    91,     3,    93,   170,     4,     5,     6,     7,   354,
       3,    25,   102,     0,   241,     8,   137,    31,    31,    25,
      13,    35,    35,    16,    17,    31,    19,    12,   118,    35,
     137,     3,    31,     3,    27,    28,    29,   137,     3,    32,
      25,   162,   132,    13,    16,    17,    31,    19,    13,   139,
     137,    11,    12,   143,     3,    27,   146,   137,     3,     8,
      32,   137,   138,     3,    13,    25,    25,    16,    17,     3,
      19,    31,    31,    13,     3,    35,    12,   137,    27,    13,
      29,   137,    31,    32,    13,   161,     3,   163,   164,    25,
      25,     8,   182,    28,   170,    31,    13,     3,    31,    16,
      17,    18,    19,     3,    11,    12,   182,    13,     8,    31,
      27,   201,    29,    13,    32,    32,    16,    17,    25,    19,
      12,     3,    11,    12,    31,   201,     8,    27,    35,    29,
     220,    31,    32,    25,    16,    17,    25,    19,   320,    31,
       3,   231,    12,   233,   220,    27,     3,    29,   254,    32,
      32,     8,   334,    31,     3,    25,    13,    32,    32,    16,
      17,    31,    19,   239,    13,    35,     3,   349,   258,   259,
      27,     3,    29,    32,    31,    32,    13,     8,   254,    10,
      11,    12,   272,   273,    16,    17,    32,    19,   309,    10,
      11,    12,   282,   283,    25,    27,   317,   287,   288,     3,
      32,   383,    32,   293,    25,   295,   388,   313,    32,    13,
      31,   393,    28,    33,    44,    45,   398,   307,   308,     3,
      10,    11,    12,   405,     3,    28,   418,   317,   410,    13,
     320,   307,   308,   418,    12,    25,   326,   313,    28,     3,
       3,   317,    12,    73,   334,    75,    76,    25,   418,    13,
     340,     3,   418,    31,    12,    25,     3,    35,    28,   349,
      28,   453,    12,   455,   456,   355,    13,    25,   453,   461,
     455,   456,   102,    31,     3,    25,   461,   367,    28,    10,
      11,    12,     3,   453,    13,   455,   456,   453,    12,   455,
     456,   461,    13,   383,    25,   461,     3,   418,   388,     3,
      31,    25,   132,   393,    35,    11,    12,    31,   398,    13,
      32,   418,     3,   143,     3,   405,   146,    31,   418,    25,
     410,    33,    28,   413,    13,    16,    17,    28,    19,    28,
     420,   418,   453,   454,   455,   456,    27,    25,   418,    31,
     461,    32,   418,   419,    12,   175,   453,    25,   455,   456,
      28,   181,   182,   453,   461,   455,   456,    25,   418,    25,
      31,   461,   418,    31,   194,    31,   453,    35,   455,   456,
     200,   201,    28,   453,   461,   455,   456,   453,     3,   455,
     456,   461,    31,   213,    31,   461,    30,    45,    28,   219,
     220,    16,    17,   453,    19,   455,   456,   453,     3,   455,
     456,   461,   232,     8,    25,   461,    12,    32,    13,    31,
       3,    16,    17,    31,    19,    73,     3,    75,    76,    25,
      12,    31,    27,    28,    29,    31,    28,    32,   258,    16,
      17,    28,    19,    25,   264,   265,   266,   267,   268,    31,
      27,    31,   272,    35,   102,    32,    12,     3,   278,   279,
     280,   281,   282,   283,    28,    31,    31,   287,    28,    25,
      16,    17,    31,    19,   294,    31,   296,   297,   298,   299,
       3,    31,    31,    31,   132,     8,    32,   307,   308,    31,
      13,    11,    12,    16,    17,   143,    19,   317,   146,    32,
     320,    32,     3,    32,    27,    25,    29,     8,    31,    32,
      32,    31,    13,    32,   334,    16,    17,    32,    19,    32,
       8,     9,    10,    11,    12,     3,    27,   175,    29,   349,
      31,    32,    32,   181,   182,     3,    32,    25,    16,    17,
       8,    19,    30,    31,    32,    13,   194,   367,    16,    17,
      18,    19,   200,   201,    32,    10,    11,    12,    32,    27,
      32,    29,    32,   383,    32,   213,    32,    28,   388,    45,
      25,   219,   220,   393,    11,    12,    31,    28,   398,     3,
      35,    30,     3,    31,   232,   405,    32,     8,    25,    12,
     410,    32,    13,   413,    31,    16,    17,    73,    19,    75,
      76,    31,    25,    32,    31,    28,    27,    32,    29,    12,
     258,    32,    10,    11,    12,     3,   264,   265,   266,   267,
     268,    97,    25,    28,   272,     3,   102,    25,    31,    28,
     278,   279,   280,   281,   282,   283,    33,    31,    31,   287,
      31,     8,     9,    10,    11,    12,   294,    31,   296,   297,
     298,   299,    11,    12,    31,    31,   132,    32,    25,   307,
     308,    10,    11,    12,    31,    32,    25,   143,    35,   317,
     146,     8,   320,    10,    11,    12,    25,     1,    31,     3,
       4,     5,     6,     7,     8,    31,   334,    31,    25,    13,
      14,    15,    16,    17,    31,    19,    20,    21,    35,    23,
      24,   349,    26,    27,    12,    29,   182,    28,    32,    33,
      34,    31,    25,     3,    33,    31,    31,    25,     8,   367,
      28,    31,    31,    13,    31,   201,    16,    17,    31,    19,
       8,     9,    10,    11,    12,   383,    12,    27,    25,    29,
     388,    31,    32,    31,   220,   393,    31,    25,    31,    25,
     398,    31,    31,    31,     3,    31,   232,   405,    31,     8,
      12,    12,   410,    28,    13,   413,    28,    16,    17,    28,
      19,     3,     7,    25,    25,    31,     8,    28,    27,    31,
      29,    13,   258,    32,    16,    17,    31,    19,   264,   265,
     266,   267,   268,    31,    31,    27,   272,    29,    45,    31,
      32,    31,   278,   279,   280,   281,   282,   283,    31,    28,
      31,   287,    28,     8,     9,    10,    11,    12,   294,    31,
     296,   297,   298,   299,    31,    -1,    73,    -1,    75,    76,
      25,   307,   308,    12,    -1,    12,    31,     3,    -1,    -1,
      35,   317,     8,    -1,   320,    -1,    25,    13,    25,    96,
      16,    17,    31,    19,    31,   102,    35,    -1,   334,    -1,
      -1,    27,    12,    29,     3,    31,    32,    -1,    -1,     8,
      45,    12,    -1,   349,    13,    25,    -1,    16,    17,    -1,
      19,    31,    -1,    -1,    25,   132,    -1,    28,    27,     3,
      29,   367,    31,    32,     8,    12,   143,    12,    73,   146,
      75,    76,    16,    17,    -1,    19,    -1,   383,    25,    -1,
      25,    -1,   388,    27,    31,    29,    31,   393,    32,    -1,
      95,     8,   398,    10,    11,    12,    12,   102,     8,   405,
      10,    11,    12,    -1,   410,   182,     3,   413,    25,    25,
      12,     8,    28,    -1,    31,    25,    13,    -1,    35,    16,
      17,    31,    19,    25,   201,    11,    12,   132,    -1,    31,
      27,    -1,    29,    35,    31,    32,    -1,    -1,   143,    25,
      -1,   146,    28,   220,    -1,    12,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,   232,    -1,    -1,    25,    13,
      14,    15,    16,    17,    31,    19,    20,    21,    35,    23,
      24,    -1,    26,    27,    -1,    29,    -1,   182,    32,    33,
      34,   258,    10,    11,    12,    -1,    -1,   264,   265,   266,
     267,    -1,    10,    11,    12,   272,   201,    25,    45,    -1,
      28,   278,   279,   280,    -1,   282,   283,    25,    -1,     3,
     287,    -1,    -1,    31,     8,   220,    -1,   294,    -1,   296,
     297,   298,    16,    17,    -1,    19,    73,   232,    75,    76,
     307,   308,    -1,    27,    -1,    29,    -1,    -1,    32,    -1,
     317,    -1,    -1,   320,    -1,    -1,    -1,    94,     8,     9,
      10,    11,    12,   258,    -1,   102,    -1,   334,    -1,   264,
     265,   266,    -1,    -1,    -1,    25,    -1,   272,    -1,    -1,
      45,    31,   349,   278,   279,    35,    -1,   282,   283,    -1,
      -1,     3,   287,    -1,    -1,   132,     8,    -1,    -1,   294,
     367,   296,   297,    -1,    16,    17,   143,    19,    73,   146,
      75,    76,   307,   308,    -1,    27,   383,    29,    -1,    -1,
      32,   388,   317,    -1,    -1,   320,   393,    92,    -1,    -1,
      -1,   398,     8,     9,    10,    11,    12,   102,   405,   334,
      -1,    -1,     3,   410,    -1,   182,   413,     8,    -1,    25,
      -1,    -1,    13,    -1,   349,    16,    17,     1,    19,    -1,
       4,     5,     6,     7,   201,    -1,    27,   132,    29,    -1,
      31,    32,   367,     8,     9,    10,    11,    12,   143,    -1,
      -1,   146,     8,   220,    10,    11,    12,    -1,   383,    -1,
      25,    -1,    -1,   388,    -1,   232,    31,    32,   393,    25,
      35,    -1,    28,   398,    -1,     8,     9,    10,    11,    12,
     405,     4,     5,     6,     7,   410,    -1,   182,   413,    -1,
      -1,   258,    25,    -1,    -1,    28,    -1,   264,   265,    32,
      -1,    -1,    -1,    45,    -1,   272,   201,    -1,    -1,    -1,
      -1,   278,    -1,    -1,    -1,   282,   283,    -1,    -1,     8,
     287,    10,    11,    12,    -1,   220,    -1,   294,    -1,   296,
      -1,    73,    -1,    75,    76,    -1,    25,   232,    -1,    28,
     307,   308,     3,    -1,    -1,    -1,    -1,     8,    -1,    -1,
     317,    -1,    13,   320,    -1,    16,    17,    -1,    19,    -1,
     102,    -1,    -1,   258,    -1,    -1,    27,   334,    29,   264,
      31,    32,    -1,    -1,    -1,    45,     8,   272,    10,    11,
      12,    -1,   349,    -1,    -1,    -1,    -1,   282,   283,    -1,
     132,    -1,   287,    25,    -1,    -1,    -1,    -1,    -1,   294,
     367,   143,    -1,    73,   146,    75,    76,     8,     9,    10,
      11,    12,   307,   308,    -1,    -1,   383,    -1,    -1,    -1,
      -1,   388,   317,    -1,    25,   320,   393,    -1,    -1,    -1,
      31,   398,   102,    -1,    35,    -1,    -1,     3,   405,   334,
     182,    -1,     8,   410,    -1,    -1,   413,    13,    -1,    -1,
      16,    17,    -1,    19,   349,     3,    -1,    -1,    -1,   201,
       8,    27,   132,    29,    -1,    13,    32,    -1,    16,    17,
      -1,    19,   367,   143,    -1,    -1,   146,    -1,   220,    27,
      -1,    29,    -1,    -1,    32,     0,     1,    -1,   383,     4,
       5,     6,     7,   388,    -1,     3,    -1,    -1,   393,    -1,
       8,    -1,    -1,   398,    -1,    13,    -1,    -1,    16,    17,
     405,    19,   182,    -1,    -1,   410,   258,    -1,   413,    27,
      -1,    29,     3,    -1,    32,    -1,    -1,     8,    -1,    -1,
     272,   201,    13,    -1,    -1,    16,    17,    -1,    19,    -1,
     282,   283,    -1,    -1,    -1,   287,    27,    -1,    29,    -1,
     220,    32,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,   308,     0,     1,    -1,
      25,     4,     5,     6,     7,   317,    31,    32,   320,    -1,
      35,     8,     9,    10,    11,    12,    -1,    -1,   258,    -1,
      -1,    -1,   334,     8,     9,    10,    11,    12,    25,    -1,
      -1,    -1,   272,    -1,    31,    -1,    -1,   349,    35,    -1,
      25,    -1,   282,   283,    -1,    -1,    31,   287,    -1,     8,
      35,    10,    11,    12,    -1,   367,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    25,   307,   308,    -1,
      -1,   383,    31,    25,    -1,    -1,   388,   317,    25,    31,
     320,   393,    -1,    35,    31,    -1,   398,    -1,    35,    -1,
      -1,    -1,    -1,   405,   334,    -1,    -1,    -1,   410,    -1,
       1,   413,     3,     4,     5,     6,     7,     8,    -1,   349,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,   367,    29,    -1,
      -1,    32,    33,    34,     8,     9,    10,    11,    12,    -1,
       0,     1,    -1,   383,     4,     5,     6,     7,   388,    -1,
      -1,    25,    -1,   393,    -1,    -1,    -1,    31,   398,    -1,
      -1,    35,     0,     1,    -1,   405,     4,     5,     6,     7,
     410,    -1,     1,   413,     3,     4,     5,     6,     7,     8,
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
      -1,    32,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    -1,    34,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,     8,     9,
      10,    11,    12,    25,    -1,    -1,    -1,    -1,    25,    31,
      -1,    -1,    -1,    35,    31,    25,    -1,    -1,    35,    -1,
      -1,    31,    -1,    -1,    -1,    35,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,     8,     9,
      10,    11,    12,    25,    -1,    -1,    -1,    -1,    25,    31,
      -1,    -1,    -1,    35,    31,    25,    -1,    -1,    35,    -1,
      -1,    31,    -1,    -1,    -1,    35,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,     8,     9,
      10,    11,    12,    25,    -1,    -1,    -1,    -1,    25,    31,
      -1,    -1,    -1,    35,    31,    25,    -1,    -1,    35,    -1,
      -1,    31,    -1,    -1,    -1,    35,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,     8,     9,
      10,    11,    12,    25,    -1,    -1,    -1,    -1,    25,    31,
      -1,    -1,    -1,    35,    31,    25,    -1,    -1,    35,    -1,
      -1,    31,    -1,    -1,    -1,    35,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,     8,     9,
      10,    11,    12,    25,    -1,    -1,    -1,    -1,    25,    31,
      -1,    -1,    -1,    35,    31,    25,    -1,    -1,    35,     8,
       9,    10,    11,    12,    -1,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    25,    -1,    -1,    28,
      -1,    30,    25,    32,    -1,    28,    -1,    25,    -1,    32,
      28,    -1,    -1,    -1,    32,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    25,    31,    32,
      -1,    -1,    25,    31,    32,    -1,    -1,    -1,    31,    32,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    25,    -1,    32,    -1,    -1,    25,    -1,    32,
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
      -1,    25,    31,    -1,     0,     1,    25,    31,     4,     5,
       6,     7,    31,     8,     9,    10,    11,    12,     8,     9,
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
      -1,    28,    -1,    25,    -1,    -1,    28,     8,     9,    10,
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
      28,    -1,    25,    -1,    -1,    -1,    -1,    25,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    25,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    25,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    25,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    25,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    25,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    25,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    37,    38,    39,    40,
      41,    70,     0,    39,     3,    28,    32,    42,    43,    44,
      70,    31,    31,     3,     1,    34,    45,    45,    35,    46,
      44,     3,     8,    13,    14,    15,    16,    17,    19,    20,
      23,    24,    26,    27,    29,    32,    40,    45,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    68,    70,    71,    30,
      32,     3,    68,    32,    32,    32,    32,    32,     3,    28,
      56,    32,    32,     3,    27,    68,    56,    33,    47,    28,
      28,    25,    12,    25,    11,    10,     8,     9,     3,    55,
      56,    31,    66,    32,    57,    58,    59,     3,    18,    56,
      56,     3,    55,    28,     3,     3,    57,    32,    32,    31,
       3,    57,    60,     3,    57,    61,    62,    63,    64,    56,
      69,    31,    65,    31,    31,    31,    31,    31,    28,    25,
      31,    31,    31,    67,     3,    57,    35,    31,    69,    28,
      28,    28,    48,    56,     3,    57,    69,    31,    31,    69,
      31,    21,    28,    31,    31,    31,    48,    55,    48,    48,
      31,    48,     1,    34,     3,     8,    13,    16,    17,    19,
      27,    29,    32,    57,    58,    59,    60,    61,    62,    63,
      64,    68,    71,     3,     8,    13,    16,    17,    19,    27,
      29,    32,    60,    61,    62,    63,    64,    68,    71,    13,
      13,    28,     3,     8,    13,    16,    17,    19,    27,    29,
      32,    57,    58,    59,    60,    61,    62,    63,    64,    68,
      71,    25,    12,    25,     1,    14,    15,    20,    23,    24,
      26,    34,    40,    45,    49,    50,    51,    52,    53,    54,
      55,    56,    70,     3,    46,    32,     3,    68,    32,    32,
       3,    27,    68,    56,    12,    11,    10,     8,     9,    32,
       3,    68,    32,    32,     3,    27,    68,    56,    11,    10,
       8,     9,    32,    32,    32,     3,    68,    32,    32,     3,
      27,    68,    56,    25,    12,    25,    11,    10,     8,     9,
       3,    13,    57,    60,     3,    57,    32,    32,    32,    32,
      28,    56,    32,    46,    28,    28,     3,    30,    47,    31,
      66,    32,    58,     3,    57,    32,    32,    31,    60,    61,
      62,    63,    64,    31,    66,    32,    58,     3,    57,    32,
      32,    31,    61,    62,    63,    64,    58,    58,    31,    66,
      32,    58,     3,    57,    32,    32,    31,     3,    13,    57,
      60,     3,    57,    61,    62,    63,    64,    32,     3,    18,
      56,    56,    55,    28,     3,    47,    28,     3,    55,    56,
      33,    69,    31,    65,    31,    31,    31,    31,    67,     3,
      57,    69,    31,    65,    31,    31,    31,    31,    67,     3,
      57,    31,    31,    69,    31,    65,    31,    31,    31,    31,
      67,     3,    57,    32,    58,    31,    31,    31,    31,    28,
      25,    33,    31,    69,    69,    31,    31,    31,    69,    69,
      31,    31,    31,    69,    69,    31,    31,    58,    31,    28,
      28,    28,    48,    56,     3,    57,    31,    31,    31,    31,
      31,    31,    31,    21,    28,    31,    31,    48,    55,    48,
      48,    31,    48
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
      64,    64,    64,    64,    65,    64,    66,    64,    64,    67,
      64,    64,    64,    64,    64,    64,    68,    68,    68,    69,
      69,    70,    70,    70,    70,    71,    71,    71
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
       1,     2,     2,     4,     0,     6,     0,     5,     3,     0,
       6,     4,     4,     4,     5,     5,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 101 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2470 "sintatico.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 109 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2481 "sintatico.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 115 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2489 "sintatico.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 120 "sintatico.y"
                       {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2497 "sintatico.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 123 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2505 "sintatico.tab.c"
    break;

  case 7: /* declaration: error  */
#line 126 "sintatico.y"
          {}
#line 2511 "sintatico.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 129 "sintatico.y"
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
#line 2538 "sintatico.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 153 "sintatico.y"
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
#line 2569 "sintatico.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' $@1 params_list ')' brackets_stmt  */
#line 178 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, (yyvsp[-5].lexema).corpo, 2);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2582 "sintatico.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 186 "sintatico.y"
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
#line 2609 "sintatico.tab.c"
    break;

  case 12: /* function_declaration: type ID '(' $@2 ')' brackets_stmt  */
#line 207 "sintatico.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2621 "sintatico.tab.c"
    break;

  case 13: /* params_list: type ID ',' params_list  */
#line 216 "sintatico.y"
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
#line 2656 "sintatico.tab.c"
    break;

  case 14: /* params_list: type ID  */
#line 246 "sintatico.y"
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
#line 2690 "sintatico.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 277 "sintatico.y"
      {
    if(ehFuncao) {
      ehFuncao = 0;
    } else {
      indiceEscopo++; 
      escopo++; 
      listaEscopo[indiceEscopo] = escopo; 
    }
  }
#line 2704 "sintatico.tab.c"
    break;

  case 16: /* brackets_stmt: '{' $@3 stmts '}'  */
#line 285 "sintatico.y"
               {
    indiceEscopo--;
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2713 "sintatico.tab.c"
    break;

  case 17: /* brackets_stmt: error  */
#line 289 "sintatico.y"
          {}
#line 2719 "sintatico.tab.c"
    break;

  case 18: /* stmts: stmt stmts  */
#line 292 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2730 "sintatico.tab.c"
    break;

  case 19: /* stmts: stmt  */
#line 298 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2738 "sintatico.tab.c"
    break;

  case 20: /* stmt: for_stmt  */
#line 303 "sintatico.y"
           {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2746 "sintatico.tab.c"
    break;

  case 21: /* stmt: if_else_stmt  */
#line 306 "sintatico.y"
                 {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2754 "sintatico.tab.c"
    break;

  case 22: /* stmt: return_stmt  */
#line 309 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2762 "sintatico.tab.c"
    break;

  case 23: /* stmt: io_stmt  */
#line 312 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2770 "sintatico.tab.c"
    break;

  case 24: /* stmt: exp_stmt  */
#line 315 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2778 "sintatico.tab.c"
    break;

  case 25: /* stmt: set_stmt  */
#line 318 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2786 "sintatico.tab.c"
    break;

  case 26: /* stmt: var_declaration  */
#line 321 "sintatico.y"
                    {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2794 "sintatico.tab.c"
    break;

  case 27: /* stmt: assignment ';'  */
#line 324 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 2802 "sintatico.tab.c"
    break;

  case 28: /* stmt: brackets_stmt  */
#line 327 "sintatico.y"
                  {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2810 "sintatico.tab.c"
    break;

  case 29: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 332 "sintatico.y"
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
#line 2826 "sintatico.tab.c"
    break;

  case 30: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 343 "sintatico.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 1);
  }
#line 2836 "sintatico.tab.c"
    break;

  case 31: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 348 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2846 "sintatico.tab.c"
    break;

  case 32: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 355 "sintatico.y"
                                                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2859 "sintatico.tab.c"
    break;

  case 33: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 365 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2870 "sintatico.tab.c"
    break;

  case 34: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 371 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2882 "sintatico.tab.c"
    break;

  case 35: /* return_stmt: RETURN ';'  */
#line 380 "sintatico.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
  }
#line 2891 "sintatico.tab.c"
    break;

  case 36: /* return_stmt: RETURN exp ';'  */
#line 384 "sintatico.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2901 "sintatico.tab.c"
    break;

  case 37: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 391 "sintatico.y"
                                          {
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared variable", (yyvsp[-4].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2919 "sintatico.tab.c"
    break;

  case 38: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 404 "sintatico.y"
                                       {
    int check = checkDeclarado((yyvsp[-4].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, "Undeclared variable", (yyvsp[-4].lexema).corpo);
      erros++;
    }
    check = checkDeclarado((yyvsp[-2].lexema).corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared variable", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2941 "sintatico.tab.c"
    break;

  case 39: /* exp_stmt: exp ';'  */
#line 423 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2951 "sintatico.tab.c"
    break;

  case 40: /* assignment: ID '=' exp  */
#line 430 "sintatico.y"
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
#line 2968 "sintatico.tab.c"
    break;

  case 41: /* assignment: ID '=' assignment  */
#line 442 "sintatico.y"
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
#line 2985 "sintatico.tab.c"
    break;

  case 42: /* exp: or_exp  */
#line 456 "sintatico.y"
         {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 2993 "sintatico.tab.c"
    break;

  case 43: /* exp: set_exp  */
#line 459 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3001 "sintatico.tab.c"
    break;

  case 44: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 464 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].lexema).linha, (yyvsp[-3].lexema).coluna, (yyvsp[-3].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3012 "sintatico.tab.c"
    break;

  case 45: /* set_in_exp: or_exp INFIX_OP ID  */
#line 472 "sintatico.y"
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
#line 3029 "sintatico.tab.c"
    break;

  case 46: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 484 "sintatico.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3040 "sintatico.tab.c"
    break;

  case 47: /* set_in_exp: set_exp INFIX_OP set_exp  */
#line 490 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3051 "sintatico.tab.c"
    break;

  case 48: /* set_in_exp: set_exp INFIX_OP ID  */
#line 496 "sintatico.y"
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
#line 3068 "sintatico.tab.c"
    break;

  case 49: /* or_exp: or_exp OR and_exp  */
#line 510 "sintatico.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3080 "sintatico.tab.c"
    break;

  case 50: /* or_exp: and_exp  */
#line 517 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3088 "sintatico.tab.c"
    break;

  case 51: /* or_exp: set_in_exp  */
#line 520 "sintatico.y"
               {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3096 "sintatico.tab.c"
    break;

  case 52: /* and_exp: and_exp AND relational_exp  */
#line 525 "sintatico.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3108 "sintatico.tab.c"
    break;

  case 53: /* and_exp: relational_exp  */
#line 532 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3116 "sintatico.tab.c"
    break;

  case 54: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 537 "sintatico.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3128 "sintatico.tab.c"
    break;

  case 55: /* relational_exp: sum_exp  */
#line 544 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3136 "sintatico.tab.c"
    break;

  case 56: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 549 "sintatico.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3148 "sintatico.tab.c"
    break;

  case 57: /* sum_exp: mul_exp  */
#line 556 "sintatico.y"
            {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3156 "sintatico.tab.c"
    break;

  case 58: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 561 "sintatico.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3168 "sintatico.tab.c"
    break;

  case 59: /* mul_exp: unary_exp  */
#line 568 "sintatico.y"
              {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3176 "sintatico.tab.c"
    break;

  case 60: /* unary_exp: primal_exp  */
#line 573 "sintatico.y"
             {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3184 "sintatico.tab.c"
    break;

  case 61: /* unary_exp: '!' primal_exp  */
#line 576 "sintatico.y"
                   {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3193 "sintatico.tab.c"
    break;

  case 62: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 580 "sintatico.y"
                             {
    (yyval.nodo) = (yyvsp[0].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, (yyvsp[-1].lexema).corpo, 3);
  }
#line 3202 "sintatico.tab.c"
    break;

  case 63: /* unary_exp: ARITMETIC_OP1 ID '(' ')'  */
#line 584 "sintatico.y"
                             {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }
    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3223 "sintatico.tab.c"
    break;

  case 64: /* $@4: %empty  */
#line 600 "sintatico.y"
                         {
    int check = checkDeclarado((yyvsp[-1].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared function", (yyvsp[-1].lexema).corpo);
      erros++;
    }
    indiceArg = 0;

  }
#line 3237 "sintatico.tab.c"
    break;

  case 65: /* unary_exp: ARITMETIC_OP1 ID '(' $@4 arg_list ')'  */
#line 608 "sintatico.y"
                 {
    int check = checkQuantidadeParametros((yyvsp[-4].lexema).corpo, (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }
    indiceArg = 0;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3254 "sintatico.tab.c"
    break;

  case 66: /* $@5: %empty  */
#line 620 "sintatico.y"
           {
      int check = checkDeclarado((yyvsp[-1].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
      if(!check){
        printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared function", (yyvsp[-1].lexema).corpo);
        erros++;
      }
      indiceArg = 0;

    }
#line 3268 "sintatico.tab.c"
    break;

  case 67: /* unary_exp: ID '(' $@5 arg_list ')'  */
#line 628 "sintatico.y"
                   {
      int check = checkQuantidadeParametros((yyvsp[-4].lexema).corpo, (yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
      if(!check){
        erros++;
      }
      indiceArg = 0;

      (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3282 "sintatico.tab.c"
    break;

  case 68: /* unary_exp: ID '(' ')'  */
#line 637 "sintatico.y"
               {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3304 "sintatico.tab.c"
    break;

  case 69: /* $@6: %empty  */
#line 654 "sintatico.y"
               {
    int check = checkDeclarado((yyvsp[-1].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-1].lexema).linha, (yyvsp[-1].lexema).coluna, "Undeclared function", (yyvsp[-1].lexema).corpo);
      erros++;
    }
    
    indiceArg = 0;

  }
#line 3319 "sintatico.tab.c"
    break;

  case 70: /* unary_exp: '!' ID '(' $@6 arg_list ')'  */
#line 663 "sintatico.y"
                 {
    int check = checkQuantidadeParametros((yyvsp[-5].lexema).corpo, (yyvsp[-5].lexema).linha, (yyvsp[-5].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }
    indiceArg = 0;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].lexema).linha, (yyvsp[-4].lexema).coluna, (yyvsp[-4].lexema).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3336 "sintatico.tab.c"
    break;

  case 71: /* unary_exp: '!' ID '(' ')'  */
#line 675 "sintatico.y"
                   {
    int check = checkDeclarado((yyvsp[-2].lexema).corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, "Undeclared function", (yyvsp[-2].lexema).corpo);
      erros++;
    }

    indiceArg = 0;
    check = checkQuantidadeParametros((yyvsp[-2].lexema).corpo, (yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].lexema).linha, (yyvsp[-2].lexema).coluna, (yyvsp[-2].lexema).corpo, 2);
  }
#line 3358 "sintatico.tab.c"
    break;

  case 72: /* unary_exp: ISSET '(' ID ')'  */
#line 692 "sintatico.y"
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
#line 3374 "sintatico.tab.c"
    break;

  case 73: /* unary_exp: ISSET '(' set_exp ')'  */
#line 703 "sintatico.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3384 "sintatico.tab.c"
    break;

  case 74: /* unary_exp: '!' ISSET '(' ID ')'  */
#line 708 "sintatico.y"
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
#line 3400 "sintatico.tab.c"
    break;

  case 75: /* unary_exp: '!' ISSET '(' set_exp ')'  */
#line 719 "sintatico.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3410 "sintatico.tab.c"
    break;

  case 76: /* primal_exp: ID  */
#line 728 "sintatico.y"
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
#line 3426 "sintatico.tab.c"
    break;

  case 77: /* primal_exp: const  */
#line 739 "sintatico.y"
          {
    (yyval.nodo) = (yyvsp[0].nodo);
  }
#line 3434 "sintatico.tab.c"
    break;

  case 78: /* primal_exp: '(' exp ')'  */
#line 742 "sintatico.y"
                {
    (yyval.nodo) = (yyvsp[-1].nodo);
  }
#line 3442 "sintatico.tab.c"
    break;

  case 79: /* arg_list: exp ',' arg_list  */
#line 747 "sintatico.y"
                   {
    indiceArg++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3455 "sintatico.tab.c"
    break;

  case 80: /* arg_list: exp  */
#line 755 "sintatico.y"
        {
    indiceArg++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3467 "sintatico.tab.c"
    break;

  case 81: /* type: INT_TYPE  */
#line 764 "sintatico.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3479 "sintatico.tab.c"
    break;

  case 82: /* type: FLOAT_TYPE  */
#line 771 "sintatico.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3491 "sintatico.tab.c"
    break;

  case 83: /* type: SET_TYPE  */
#line 778 "sintatico.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3503 "sintatico.tab.c"
    break;

  case 84: /* type: ELEM_TYPE  */
#line 785 "sintatico.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3515 "sintatico.tab.c"
    break;

  case 85: /* const: INTEGER  */
#line 794 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3525 "sintatico.tab.c"
    break;

  case 86: /* const: FLOAT  */
#line 799 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3535 "sintatico.tab.c"
    break;

  case 87: /* const: EMPTY  */
#line 804 "sintatico.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].lexema).linha, (yyvsp[0].lexema).coluna, (yyvsp[0].lexema).corpo, 1);
  }
#line 3545 "sintatico.tab.c"
    break;


#line 3549 "sintatico.tab.c"

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

#line 810 "sintatico.y"


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

