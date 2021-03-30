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
#define YYLAST   3656

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  466

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
     374,   381,   386,   391,   396,   401,   408,   414,   420,   426,
     434,   440,   445,   452,   458,   465,   471,   478,   484,   491,
     497,   504,   509,   514,   519,   525,   533,   538,   543,   550,
     556,   563,   570,   577,   584,   593,   598,   603
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

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3170,  3181,     9,    14,    24,    26,    49,  3215,  3249,  3283,
    3317,    58,  -132,  3525,   102,  3553,    16,    18,    35,    82,
    3581,  2983,  3632,    18,   219,  3082,   339,    89,   107,   115,
    3318,  3323,  3328,   117,   122,    60,   130,   131,   134,   207,
    2201,  2235,    45,  2269,  2303,  2337,  2371,  2405,  2439,  2473,
     142,   149,    10,    34,    46,   378,  3471,   766,  3349,  3354,
    3359,   184,  3380,  3641,  1397,   493,    67,  3385,  3390,   516,
     202,   106,   207,   229,  3113,  2507,   193,   230,   272,   203,
    3411,   209,  3649,   236,  2541,  2575,   283,   414,   385,   414,
     414,   414,   414,   234,   239,   264,   277,  3416,   220,   276,
     284,    29,     3,   286,   291,   298,   303,   285,   307,  2609,
     327,   328,   334,   332,   464,  3421,   191,   312,   339,   502,
     689,   744,  3475,  3076,  3442,  3447,   580,  3452,    83,   352,
     353,   354,  3015,   612,   579,   259,   269,   336,   356,   371,
    2643,  2677,  2711,   864,   383,   395,   398,   302,   382,  2983,
     433,  2983,  2983,  2745,   406,  2779,  2813,  2983,  2847,  2881,
    2983,  3118,   367,   413,  3148,  3153,  3158,   415,   195,   207,
      -1,   206,   409,    70,   830,   133,  3182,  3187,  3192,  3216,
     755,   544,   416,   164,   898,  1002,   420,   244,   207,    75,
     486,   625,  1230,  1163,   715,  1147,  1192,  1221,  1228,  3123,
     555,   423,  3480,  3498,  3503,   427,   261,   207,    44,  1437,
     788,  3508,  3526,  3531,  3536,   430,   442,   446,   458,   438,
    2915,   676,   649,   768,   460,  1412,   462,   467,   471,   483,
      99,   484,  2983,  1451,  1487,  1521,  1555,  1589,  1623,  1657,
    1691,   452,   490,   520,   496,   501,   152,  3221,  3226,   516,
     799,   510,  3250,   515,   667,   667,   667,   667,   667,   177,
    1259,  1264,   516,   847,   517,  1303,   526,   901,   726,   914,
     726,   726,   726,   726,   287,  3554,  3559,   516,   921,   519,
    3564,   538,   649,   649,   649,   649,   516,   929,   516,   950,
     541,   441,   543,   545,   552,   780,   555,   247,   796,   874,
     995,   577,   468,   207,   229,  1725,   553,   583,   556,  1759,
    1793,   562,   632,  2949,  3255,   560,   900,   564,   570,  1023,
    3260,   367,   407,   926,   992,  3284,  3289,  1315,   571,   935,
     582,   587,  1048,  1355,   642,   578,   602,   584,   716,   544,
    1266,  1223,  1317,  1364,  1181,  3042,  3047,  3582,   588,   940,
     607,   615,  1057,  3587,  3058,  3603,  3592,  3610,  1018,   624,
     631,  1033,   638,   640,  1063,   516,  1066,   648,   641,   643,
     657,   666,   669,   671,   586,  1827,   686,  1861,  1895,  3088,
     681,   684,  3294,     1,   157,   166,   685,   700,  3054,   121,
     448,   591,   702,   704,   516,  1108,   705,  3615,   711,   719,
     728,   723,   729,   730,   731,   739,   781,   890,   993,   742,
     757,  1069,   758,   772,  1113,   783,   791,   635,   797,   808,
    3015,   612,  1120,   182,   218,   827,  1275,  1077,   806,   817,
    1184,   734,   828,  1089,  1094,  1129,  1195,  1267,   835,   861,
    1929,  1963,  1997,  2031,   831,   863,   869,  1318,  1375,  1438,
     872,   882,  1348,  1380,  3015,   433,  3015,  3015,  1474,  3002,
    2065,   909,  2099,  2133,  3015,  2167
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,   888,     4,  -132,   880,   -15,   -40,  -118,
    -131,  -107,   -92,   -88,   -79,   -41,   -60,   -29,   -21,  1059,
    1095,   922,   850,   785,   713,   561,   282,  -117,     0,   436
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    40,    10,    18,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    99,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   235,    22,    83,     9,    95,    76,    11,    63,   139,
      81,     9,   -72,   108,   143,   222,    19,   -71,   170,    20,
       2,     3,     4,     5,   221,   236,   -41,   -73,   223,   -74,
     -40,   153,   -41,   155,   156,    86,    96,    98,   -40,   158,
     237,   -52,   105,   106,   238,   189,   -52,    17,   100,    12,
     170,   170,    21,   239,   -52,   282,   -51,   113,    87,   -52,
     128,    14,   -52,    74,    19,   117,    23,   121,    26,   -51,
     180,    88,   241,    27,   -39,   181,    30,    31,    82,    32,
     182,   255,   -51,   183,   184,    24,   185,    37,    75,    38,
     154,   240,    39,   138,   186,   -51,   187,    98,    97,   188,
     267,   -51,    74,   242,   144,   189,   -40,    26,   -41,   161,
     -40,   -41,    27,   146,   162,    30,    31,   234,    32,   163,
     245,    69,   164,   165,   104,   166,    37,   305,    38,   315,
      15,    39,   243,   167,    16,   168,   233,    67,   169,    70,
     253,   257,   328,   -56,   -56,   -56,   -41,    71,   170,    72,
      30,    31,   -41,    32,    73,   180,   -41,   348,   -56,   266,
     181,    79,    77,    78,   -56,   182,    39,   170,   183,   184,
      84,   185,   -75,   -75,   -75,   -75,   -75,    85,   281,   186,
     180,   187,   -42,   314,   188,   181,   170,    93,   -42,   -75,
     182,   -43,   308,   183,   184,   -75,   185,   -43,   247,   -75,
     295,   306,   299,   -49,   186,   103,   187,   -44,   327,   188,
     161,   164,   165,   -44,   166,   162,   -49,    98,   -52,   -49,
     163,   109,   251,   164,   165,   189,   166,   169,   100,   318,
      98,   -52,   107,   110,   167,   114,   168,   -52,   189,   169,
     115,   100,   331,   -45,   374,    98,   338,   260,   342,   -45,
     -12,   -70,   380,   189,    64,   126,   100,   351,   282,   -50,
     183,   184,   220,   185,   275,   100,   360,   100,   363,   -15,
     -11,   264,   -50,   372,   373,   111,   188,   202,   203,   369,
     204,   170,   170,   381,   -42,   215,   116,   -42,   279,   235,
     180,   170,   -38,   207,   -43,   181,   217,   -43,   387,   216,
     182,   112,   443,   183,   184,   -37,   185,   127,    68,   221,
     218,   393,   219,   236,   186,    65,   187,   129,   347,   188,
      80,   178,   130,   235,   -48,   235,   235,   -44,   237,   131,
     -44,   402,   238,   235,   132,   133,   460,   -48,   462,   463,
     -48,   239,    67,   410,   100,   413,   465,   236,   197,   236,
     236,   213,   134,   178,   178,    30,    31,   236,    32,   135,
     241,   224,   237,   136,   237,   237,   238,   147,   238,   238,
     247,    39,   237,   100,   429,   239,   238,   239,   239,   240,
     140,   141,   142,   164,   165,   239,   166,   148,   120,    89,
     -51,   242,   444,   439,   241,   461,   241,   241,   217,   169,
      80,   446,   -69,   -51,   241,   234,   -51,   -45,   197,   451,
     -45,   150,   218,   240,   219,   240,   240,    74,   255,   -50,
     243,   254,    26,   240,   233,   242,   151,   242,   242,   152,
      30,    31,   -50,    32,   223,   242,   244,   157,   -50,   234,
     -39,   234,   234,   118,   248,   249,    39,   250,   262,   234,
     252,   178,   263,   -49,   243,   277,   243,   243,   233,   278,
     233,   233,   286,   261,   243,   290,   -49,   137,   233,   265,
     178,   161,   -49,   -42,   287,   179,   162,   215,   288,   -42,
     309,   163,   276,   -42,   164,   165,   371,   166,   280,   178,
     289,   216,   300,   112,   301,   167,    25,   168,   -52,   302,
     169,    26,   198,   303,   213,   214,    27,   179,   179,    30,
      31,   -52,    32,    89,   -50,   304,   307,   -52,   310,   199,
      37,   -52,    38,   311,   200,    39,   312,   -50,   197,   201,
     -50,   213,   202,   203,   313,   204,   178,   178,   178,   178,
     178,   197,   319,   205,   213,   206,   320,   260,   207,   332,
     197,   352,   197,   197,   197,   197,   197,   333,   275,   213,
     183,   184,   198,   185,   213,   213,   213,   213,   213,   353,
     213,   202,   203,   364,   204,   365,   188,   366,   280,   367,
     370,   375,   145,   180,   178,   178,   376,   207,   181,   377,
     378,   382,   215,   182,   178,   384,   183,   184,   179,   185,
     177,   385,   388,   252,   179,   179,   216,   186,   112,   187,
     394,   396,   188,   390,   421,    74,   -43,   198,   391,   397,
      26,   265,   -43,   198,   179,    27,   -43,   196,    30,    31,
     212,    32,   177,   177,   395,   379,   214,   268,   399,    37,
     162,    38,   214,   179,    39,   163,   400,   213,   164,   165,
     269,   166,   199,   125,   -49,   404,   -39,   200,   214,   167,
     -39,   168,   405,   440,   169,   202,   203,   -49,   204,   407,
     161,   408,   415,   -49,   416,   162,   213,   -49,   296,   291,
     414,   207,   198,   164,   165,   214,   166,   196,   417,   292,
     179,   179,   179,   179,   179,   198,   321,   418,   214,   169,
     419,   -46,   420,   293,   198,   294,   198,   198,   198,   198,
     198,   422,   -38,   214,   -46,   -37,   423,   -46,   214,   214,
     214,   214,   214,   272,   214,   -56,   -56,   -56,   -48,   180,
     177,   424,   214,   425,   181,   426,   -41,   430,   179,   179,
     -56,   -48,   183,   184,   -42,   185,   -56,   -48,   179,   177,
     -56,   -48,   176,   -43,   431,   339,   -47,   179,   188,   -44,
     432,   -41,   -42,   -66,   -66,   -66,   -66,   -66,   177,   -47,
     -43,   298,   -47,   433,    91,   198,   -56,   -56,   -56,   195,
     -66,   292,   211,   212,   176,   176,   -66,   259,   434,   436,
     -66,   -56,   -48,   -41,   -56,   293,   284,   294,   -56,   -56,
     -56,   214,   317,   437,   124,   -48,   -41,   196,   -46,   -41,
     212,   -48,   215,   -56,   -44,   177,   177,   177,   177,   326,
     196,   -46,   -45,   212,   175,   441,   216,   -46,   112,   196,
     214,   196,   196,   196,   346,   196,   442,   448,   212,   195,
     256,   -54,   -54,   212,   212,   212,   357,   212,   449,   212,
     330,   194,   -44,   -45,   210,   -54,   175,   175,   -44,   455,
     215,   -54,   -44,   177,   177,   -30,   452,   -30,   -30,   -30,
     -30,   -30,   -30,   177,   216,   123,   112,   -30,   -30,   -30,
     -30,   -30,   176,   -30,   -30,   149,   -47,   -30,   -30,   174,
     -30,   -30,   453,   -30,   456,    13,   -30,   -30,   -30,   -47,
     457,   176,   -42,   458,   334,   -47,   -76,   -76,   -76,   -76,
     -76,   194,   -52,   459,   335,   -42,   193,   341,   -42,   209,
     176,   174,   174,   -76,   350,   -52,   212,   335,   336,   -76,
     337,   383,   359,   -76,   215,   211,   256,   -53,   -53,   122,
     464,   336,   215,   337,    94,     0,     0,   -52,   216,     0,
     112,   -53,   -52,   362,   175,   212,   216,   -53,   112,   195,
     -52,   173,   211,   215,     0,   -52,   389,   176,   176,   176,
     325,   398,   195,   175,     0,   211,   193,   216,     0,   112,
       0,   195,     0,   195,   195,   345,     0,   195,   192,     0,
     211,   208,   175,   173,   173,   211,   211,   356,   368,   211,
     257,   211,   -55,   -55,   -55,   -43,     0,   210,   215,   119,
     -77,   -77,   -77,   -77,   -77,   176,   176,   -55,   -43,   174,
       0,   -43,   216,   -55,   112,   176,   386,   -77,     0,     0,
     -52,   194,     0,   -77,   210,     0,   215,   -77,   174,   175,
     175,   324,     0,   -52,   194,   -52,     0,   210,   192,   403,
     216,   392,   112,   194,     0,   194,   344,   174,   -52,   194,
     401,   215,   210,     0,   406,     0,   409,   210,   355,   412,
     215,   210,   209,   210,     0,   216,   215,   112,   211,   215,
       0,   -52,     0,     0,   216,     0,   112,   175,   175,   -52,
     216,   173,   112,   216,   -52,   112,   193,   175,   171,   209,
     435,   -44,   -52,     0,   174,   323,   -45,   211,   447,   193,
     173,   428,   209,     0,   -44,     0,   438,   -44,   193,   -45,
     343,   215,   -45,   445,   193,   190,   215,   209,   101,   173,
     171,   171,   354,   215,   172,   216,   209,   112,   209,     0,
     216,   -41,   112,     0,   297,     0,     0,   216,     0,   112,
     210,     0,   174,   174,   -41,   -58,   273,   -58,   -58,   -58,
     -41,   191,   174,     0,   102,     0,   172,   172,   192,     0,
       0,   208,   -58,   271,   -54,   -54,   322,     0,   -58,   210,
       0,   192,   -58,     0,   208,   190,     0,   450,   -54,   272,
     340,   -55,   -55,   -55,   -54,     0,   192,   215,   -54,   208,
     -60,   -60,   -60,   -60,   -60,     0,   -55,   -42,   208,     0,
     208,   216,   -55,   112,     0,   209,   -55,   -60,     0,     0,
     -42,   191,     0,   -60,   173,   173,   -42,   -60,   171,   -61,
     -61,   -61,   -61,   -61,   173,   -46,   -67,   -67,   -67,   -67,
     -67,   270,   -51,     0,   209,     0,   -61,   171,   -46,     0,
       0,     0,   -61,   -67,   -46,   -51,   -61,     0,   -46,   -67,
       0,   -51,     0,   -67,   172,   -51,   171,   -66,   -66,   -66,
     -66,   -66,   -63,   -63,   -63,   -63,   -63,   270,   -50,   -43,
       0,     0,     0,   172,   -66,     0,     0,   208,     0,   -63,
     -66,   -50,   -43,     0,   -66,   -63,     0,   -50,   -43,   -63,
     -45,   -50,   172,     0,     0,   190,   -45,     0,   316,     0,
     -45,   -62,   -62,   -62,   -62,   -62,   208,     0,   190,     0,
       0,   329,     0,   -65,   -65,   -65,   -65,   -65,   -62,   -47,
     -41,     0,     0,   190,   -62,     0,   349,     0,   -62,     0,
     -65,   191,   -47,   -41,   102,   358,   -65,   361,   -47,   -41,
     -65,     0,   -47,   -41,   191,     0,     0,   102,     0,     0,
     -44,   171,   171,   -68,   -68,   -68,   -68,   -68,     0,   191,
       0,   171,   102,   -44,   271,   -53,   -53,     0,     0,   -44,
     -68,   102,     0,   102,     0,     0,   -68,   -42,     0,   -53,
     -68,     0,   -45,     0,     0,   -53,     0,   172,   172,   -53,
     -42,     2,     3,     4,     5,   -45,   -42,   172,     0,     0,
     -42,   -45,     0,   -14,     0,   -14,   -14,   -14,   -14,   -14,
     -14,     0,     0,     0,   411,   -14,   -14,   -14,   -14,   -14,
       0,   -14,   -14,   -14,     0,   -14,   -14,     0,   -14,   -14,
       0,   -14,     0,     0,   -14,   -14,   -14,   283,   -54,   -54,
     -43,     0,   -23,   427,   -23,   -23,   -23,   -23,   -23,   -23,
     102,     0,   -54,   -43,   -23,   -23,   -23,   -23,   -23,   -43,
     -23,   -23,   -23,   -43,   -23,   -23,     0,   -23,   -23,     0,
     -23,     0,     0,   -23,   -23,   -23,   -44,     0,   -25,   102,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,   -44,
     -25,   -25,   -25,   -25,   -25,   -44,   -25,   -25,   -25,   -44,
     -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,   -25,
     -25,   -25,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,
       0,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,     0,   -20,   -20,     0,   -20,   -20,     0,
     -20,     0,     0,   -20,   -20,   -20,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,   -17,     0,   -17,   -17,
       0,   -17,   -17,     0,   -17,     0,     0,   -17,   -17,   -17,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
       0,     0,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,
     -18,     0,   -18,   -18,     0,   -18,   -18,     0,   -18,     0,
       0,   -18,   -18,   -18,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,     0,     0,     0,   -19,   -19,   -19,   -19,
     -19,     0,   -19,   -19,   -19,     0,   -19,   -19,     0,   -19,
     -19,     0,   -19,     0,     0,   -19,   -19,   -19,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,
     -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,   -22,
     -22,   -22,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,     0,   -21,   -21,     0,   -21,   -21,     0,
     -21,     0,     0,   -21,   -21,   -21,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,   -32,     0,     0,   -32,   -32,   -32,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
       0,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,     0,
       0,   -24,   -24,   -24,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,     0,   -36,   -36,     0,   -36,
     -36,     0,   -36,     0,     0,   -36,   -36,   -36,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,     0,   -33,   -33,     0,   -33,     0,     0,   -33,
     -33,   -33,   -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,   -13,     0,   -13,   -13,     0,   -13,   -13,     0,
     -13,     0,     0,   -13,   -13,   -13,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -8,     0,    -8,    -8,
       0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,     0,   -26,   -26,     0,   -26,     0,
       0,   -26,   -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,     0,     0,   -27,   -27,   -27,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,     0,   -28,   -28,     0,   -28,     0,     0,   -28,
     -28,   -28,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   454,     0,   -30,   -30,     0,   -30,   -30,     0,
     -30,     0,     0,   -30,   -30,   -30,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,     0,   -31,     0,     0,   -31,   -31,   -31,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,     0,   -35,   -35,     0,   -35,   -35,     0,   -35,     0,
       0,   -35,   -35,   -35,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,     0,   -34,   -34,     0,   -34,
     -34,     0,   -34,     0,     0,   -34,   -34,   -34,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,
     -29,   -29,     0,   -29,   -29,     0,   -29,     0,     0,   -29,
     -29,   -29,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,     0,     0,   -23,   -23,     0,   -23,   -23,     0,
     -23,     0,     0,   -23,   -23,   -23,   -25,     0,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,     0,     0,   -25,   -25,
       0,   -25,   -25,     0,   -25,     0,     0,   -25,   -25,   -25,
     159,     0,    25,     2,     3,     4,     5,    26,     0,     0,
       0,     0,    27,    28,    29,    30,    31,     0,    32,    33,
       0,     0,    34,    35,     0,    36,    37,     0,    38,     0,
       0,    39,   -16,   160,   -20,     0,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,     0,     0,   -20,   -20,   -20,   -20,
     -20,     0,   -20,   -20,     0,     0,   -20,   -20,     0,   -20,
     -20,     0,   -20,     0,     0,   -20,   -20,   -20,   -17,     0,
     -17,   -17,   -17,   -17,   -17,   -17,     0,     0,     0,     0,
     -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,     0,
     -17,   -17,     0,   -17,   -17,     0,   -17,     0,     0,   -17,
     -17,   -17,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,
       0,     0,     0,     0,   -18,   -18,   -18,   -18,   -18,     0,
     -18,   -18,     0,     0,   -18,   -18,     0,   -18,   -18,     0,
     -18,     0,     0,   -18,   -18,   -18,   -19,     0,   -19,   -19,
     -19,   -19,   -19,   -19,     0,     0,     0,     0,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,     0,     0,   -19,   -19,
       0,   -19,   -19,     0,   -19,     0,     0,   -19,   -19,   -19,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
       0,     0,   -22,   -22,     0,   -22,   -22,     0,   -22,     0,
       0,   -22,   -22,   -22,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,   -21,   -21,   -21,   -21,
     -21,     0,   -21,   -21,     0,     0,   -21,   -21,     0,   -21,
     -21,     0,   -21,     0,     0,   -21,   -21,   -21,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
     -32,   -32,     0,   -32,   -32,     0,   -32,     0,     0,   -32,
     -32,   -32,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,     0,     0,   -24,   -24,     0,   -24,   -24,     0,
     -24,     0,     0,   -24,   -24,   -24,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,     0,     0,   -36,   -36,
       0,   -36,   -36,     0,   -36,     0,     0,   -36,   -36,   -36,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
       0,     0,   -33,   -33,     0,   -33,   -33,     0,   -33,     0,
       0,   -33,   -33,   -33,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,     0,     0,   -26,   -26,     0,   -26,
     -26,     0,   -26,     0,     0,   -26,   -26,   -26,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,
     -27,   -27,     0,   -27,   -27,     0,   -27,     0,     0,   -27,
     -27,   -27,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,     0,     0,   -28,   -28,   -28,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,
       0,   -31,   -31,     0,   -31,     0,     0,   -31,   -31,   -31,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
       0,     0,   -35,   -35,     0,   -35,   -35,     0,   -35,     0,
       0,   -35,   -35,   -35,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,     0,     0,   -34,   -34,     0,   -34,
     -34,     0,   -34,     0,     0,   -34,   -34,   -34,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,
     -29,   -29,     0,   -29,   -29,     0,   -29,     0,     0,   -29,
     -29,   -29,   -14,     0,   -14,   -14,   -14,   -14,   -14,   -14,
       0,     0,     0,     0,   -14,   -14,   -14,   -14,   -14,     0,
     -14,   -14,     0,     0,   -14,   -14,     0,   -14,   -14,     0,
     -14,     0,     0,   -14,   -14,   -14,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,
       0,    -8,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,
     -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,     0,     0,
       0,     0,   -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,
       0,     0,   -13,   -13,     0,   -13,   -13,     0,   -13,     0,
       0,   -13,   -13,   -13,   159,     0,    25,     2,     3,     4,
       5,    26,     0,     0,     0,     0,    27,    28,    29,    30,
      31,     0,    32,    33,     0,     0,    34,    35,     0,    36,
      37,     0,    38,     0,   -45,    39,   225,   160,    25,     2,
       3,     4,     5,    26,     0,     0,     0,   -45,    27,   226,
     227,    30,    31,   -45,    32,   228,     0,   -45,   229,   230,
       0,   231,    37,     0,    38,     0,     0,    39,     0,   232,
     -57,   273,   -57,   -57,   -57,   -59,   -59,   -59,   -59,   -59,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -57,   283,   -53,
     -53,     0,   -59,   -57,     0,     0,     0,   -57,   -59,   -64,
       0,     0,   -59,   -53,    91,   -64,   -55,   -55,   -55,   -64,
     -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -55,     0,     0,   -55,     0,     0,   -66,     0,     0,
     -66,     0,    65,   -66,    66,     0,     0,     0,   312,   -66,
     246,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,     0,
       0,   -66,     0,   -66,     0,    66,     0,     0,   -66,   -66,
     246,     0,     0,     0,     0,   274,   -75,   -75,   -75,   -75,
     -75,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,
     -77,     1,     0,   -75,     2,     3,     4,     5,   -76,   -75,
       0,    -7,    -7,   -77,   -76,    -7,    -7,    -7,    -7,   -77,
     -58,   258,   -58,   -58,   -58,   -60,   -60,   -60,   -60,   -60,
     -61,   -61,   -61,   -61,   -61,     0,     0,   -58,     0,     0,
       0,     0,   -60,   -58,     0,    -2,     1,   -61,   -60,     2,
       3,     4,     5,   -61,   -67,   -67,   -67,   -67,   -67,   -66,
     -66,   -66,   -66,   -66,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -67,     0,     0,     0,     0,   -66,   -67,     0,    -4,
      -4,   -63,   -66,    -4,    -4,    -4,    -4,   -63,   -62,   -62,
     -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -62,     0,     0,     0,     0,
     -65,   -62,     0,    -6,    -6,   -68,   -65,    -6,    -6,    -6,
      -6,   -68,   -57,   258,   -57,   -57,   -57,   -59,   -59,   -59,
     -59,   -59,   -64,   -64,   -64,   -64,   -64,     0,     0,   -57,
       0,     0,     0,     0,   -59,   -57,     0,    -5,    -5,   -64,
     -59,    -5,    -5,    -5,    -5,   -64,   -75,   -75,   -75,   -75,
     -75,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,
     -77,     0,     0,   -75,     0,     0,   -75,     0,   -76,     0,
       0,   -76,     0,   -77,     0,     0,   -77,   -58,    92,   -58,
     -58,   -58,   -60,   -60,   -60,   -60,   -60,   -61,   -61,   -61,
     -61,   -61,     0,     0,   -58,     0,     0,   -58,     0,   -60,
       0,     0,   -60,     0,   -61,     0,     0,   -61,   -67,   -67,
     -67,   -67,   -67,   -66,   -66,   -66,   -66,   -66,   -63,   -63,
     -63,   -63,   -63,     0,     0,   -67,     0,     0,   -67,     0,
     -66,     0,     0,   -66,     0,   -63,     0,     0,   -63,   -62,
     -62,   -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,   -68,
     -68,   -68,   -68,   -68,     0,     0,   -62,     0,     0,   -62,
       0,   -65,     0,     0,   -65,     0,   -68,     0,     0,   -68,
     -57,    92,   -57,   -57,   -57,   -59,   -59,   -59,   -59,   -59,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -57,     0,     0,
     -57,     0,   -59,     0,     0,   -59,     0,   -64,     0,     0,
     -64,    90,   -54,   -54,     0,    90,   -53,   -53,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,   -54,     0,     0,   -54,
     -53,     0,     0,   -53,     0,   -75,   -76,   -76,   -76,   -76,
     -76,   -77,   -77,   -77,   -77,   -77,   -58,   285,   -58,   -58,
     -58,     0,     0,   -76,     0,    -3,    -3,     0,   -77,    -3,
      -3,    -3,    -3,   -58,   -60,   -60,   -60,   -60,   -60,   -61,
     -61,   -61,   -61,   -61,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -60,     0,    -8,    -8,     0,   -61,    -8,    -8,    -8,
      -8,   -67,   -66,   -66,   -66,   -66,   -66,   -63,   -63,   -63,
     -63,   -63,   -62,   -62,   -62,   -62,   -62,     0,     0,   -66,
       0,   -14,   -14,     0,   -63,   -14,   -14,   -14,   -14,   -62,
     -65,   -65,   -65,   -65,   -65,   -68,   -68,   -68,   -68,   -68,
     -57,   285,   -57,   -57,   -57,     0,     0,   -65,     0,     0,
       0,   284,   -68,   -55,   -55,   -55,     0,   -57,   -59,   -59,
     -59,   -59,   -59,   -64,   -64,   -64,   -64,   -64,   -55,     0,
       0,     0,   -10,   -10,     0,   -59,   -10,   -10,   -10,   -10,
     -64,    -9,    -9,     0,     0,    -9,    -9,    -9,    -9,   -13,
     -13,     0,     0,   -13,   -13,   -13,   -13
};

static const yytype_int16 yycheck[] =
{
       0,   132,    17,    43,     0,    65,    35,     7,    23,   126,
      39,     7,     3,    73,   132,    12,    16,     3,    39,     1,
       4,     5,     6,     7,    25,   132,    25,     3,    25,     3,
      31,   149,    31,   151,   152,    25,    65,    66,    28,   157,
     132,    12,    71,    72,   132,    66,    12,    31,    69,     0,
      71,    72,    34,   132,    25,    11,    12,    78,    12,    25,
      31,     3,    28,     3,    64,    86,    31,    88,     8,    25,
       3,    25,   132,    13,    28,     8,    16,    17,    33,    19,
      13,    11,    12,    16,    17,     3,    19,    27,    28,    29,
     150,   132,    32,   114,    27,    25,    29,   126,    31,    32,
      25,    31,     3,   132,   133,   126,    31,     8,    25,     3,
      35,    28,    13,   134,     8,    16,    17,   132,    19,    13,
     160,    32,    16,    17,    18,    19,    27,    28,    29,   246,
      28,    32,   132,    27,    32,    29,   132,     3,    32,    32,
     169,     8,   259,    10,    11,    12,    25,    32,   169,    32,
      16,    17,    31,    19,    32,     3,    35,   274,    25,   188,
       8,    27,    32,    32,    31,    13,    32,   188,    16,    17,
      28,    19,     8,     9,    10,    11,    12,    28,   207,    27,
       3,    29,    25,    31,    32,     8,   207,     3,    31,    25,
      13,    25,   232,    16,    17,    31,    19,    31,     3,    35,
     221,   230,   223,    12,    27,     3,    29,    25,    31,    32,
       3,    16,    17,    31,    19,     8,    25,   246,    12,    28,
      13,    28,    27,    16,    17,   246,    19,    32,   249,   250,
     259,    25,     3,     3,    27,    32,    29,    31,   259,    32,
      31,   262,   263,    25,   304,   274,   267,     3,   269,    31,
      31,    31,   312,   274,    35,    35,   277,   278,    11,    12,
      16,    17,    28,    19,     3,   286,   287,   288,   289,    33,
      31,    27,    25,   302,   303,     3,    32,    16,    17,   300,
      19,   302,   303,   312,    25,    13,     3,    28,    27,   420,
       3,   312,    28,    32,    25,     8,    13,    28,   319,    27,
      13,    29,   420,    16,    17,    28,    19,    31,    26,    25,
      27,   332,    29,   420,    27,    30,    29,    31,    31,    32,
      38,    39,    31,   454,    12,   456,   457,    25,   420,    31,
      28,   352,   420,   464,    31,    28,   454,    25,   456,   457,
      28,   420,     3,   364,   365,   366,   464,   454,    66,   456,
     457,    69,    25,    71,    72,    16,    17,   464,    19,    31,
     420,    27,   454,    31,   456,   457,   454,    31,   456,   457,
       3,    32,   464,   394,   395,   454,   464,   456,   457,   420,
      28,    28,    28,    16,    17,   464,    19,    31,     3,    11,
      12,   420,   421,   414,   454,   455,   456,   457,    13,    32,
     118,   422,    31,    25,   464,   420,    28,    25,   126,   430,
      28,    28,    27,   454,    29,   456,   457,     3,    11,    12,
     420,    12,     8,   464,   420,   454,    31,   456,   457,    31,
      16,    17,    25,    19,    25,   464,     3,    31,    31,   454,
      31,   456,   457,    29,   162,    32,    32,    32,    32,   464,
     168,   169,    32,    12,   454,    32,   456,   457,   454,    32,
     456,   457,    32,   181,   464,    27,    25,     3,   464,   187,
     188,     3,    31,    25,    32,    39,     8,    13,    32,    31,
      28,    13,   200,    35,    16,    17,    18,    19,   206,   207,
      32,    27,    32,    29,    32,    27,     3,    29,    12,    32,
      32,     8,    66,    32,   222,    69,    13,    71,    72,    16,
      17,    25,    19,    11,    12,    32,    32,    31,    28,     3,
      27,    35,    29,     3,     8,    32,    30,    25,   246,    13,
      28,   249,    16,    17,    33,    19,   254,   255,   256,   257,
     258,   259,    32,    27,   262,    29,    31,     3,    32,    32,
     268,    32,   270,   271,   272,   273,   274,    31,     3,   277,
      16,    17,   126,    19,   282,   283,   284,   285,   286,    31,
     288,    16,    17,    32,    19,    32,    32,    32,   296,    27,
       3,    28,     3,     3,   302,   303,     3,    32,     8,    33,
      28,    31,    13,    13,   312,    31,    16,    17,   162,    19,
      39,    31,    31,   321,   168,   169,    27,    27,    29,    29,
      32,    27,    32,    31,    28,     3,    25,   181,    31,    31,
       8,   339,    31,   187,   188,    13,    35,    66,    16,    17,
      69,    19,    71,    72,    32,     3,   200,    12,    31,    27,
       8,    29,   206,   207,    32,    13,    31,   365,    16,    17,
      25,    19,     3,    92,    12,    31,    31,     8,   222,    27,
      35,    29,    31,    28,    32,    16,    17,    25,    19,    31,
       3,    31,    31,    31,    31,     8,   394,    35,    29,     3,
      32,    32,   246,    16,    17,   249,    19,   126,    31,    13,
     254,   255,   256,   257,   258,   259,    29,    31,   262,    32,
      31,    12,    31,    27,   268,    29,   270,   271,   272,   273,
     274,    25,    31,   277,    25,    31,    31,    28,   282,   283,
     284,   285,   286,     8,   288,    10,    11,    12,    12,     3,
     169,    31,   296,    31,     8,    31,    25,    32,   302,   303,
      25,    25,    16,    17,    25,    19,    31,    31,   312,   188,
      35,    35,    39,    25,    31,    29,    12,   321,    32,    25,
      31,    31,    31,     8,     9,    10,    11,    12,   207,    25,
      31,     3,    28,    31,     8,   339,    10,    11,    12,    66,
      25,    13,    69,   222,    71,    72,    31,    32,    31,    31,
      35,    25,    12,    12,    28,    27,     8,    29,    10,    11,
      12,   365,     3,    31,    91,    25,    25,   246,    12,    28,
     249,    31,    13,    25,    31,   254,   255,   256,   257,   258,
     259,    25,    31,   262,    39,    28,    27,    31,    29,   268,
     394,   270,   271,   272,   273,   274,    28,    31,   277,   126,
      10,    11,    12,   282,   283,   284,   285,   286,    31,   288,
       3,    66,    25,    25,    69,    25,    71,    72,    31,    28,
      13,    31,    35,   302,   303,     1,    31,     3,     4,     5,
       6,     7,     8,   312,    27,    90,    29,    13,    14,    15,
      16,    17,   169,    19,    20,    21,    12,    23,    24,    39,
      26,    27,    31,    29,    31,     7,    32,    33,    34,    25,
      31,   188,    12,    31,     3,    31,     8,     9,    10,    11,
      12,   126,    12,    31,    13,    25,    66,     3,    28,    69,
     207,    71,    72,    25,     3,    25,   365,    13,    27,    31,
      29,    31,     3,    35,    13,   222,    10,    11,    12,    89,
      31,    27,    13,    29,    64,    -1,    -1,    12,    27,    -1,
      29,    25,    12,     3,   169,   394,    27,    31,    29,   246,
      25,    39,   249,    13,    -1,    25,    31,   254,   255,   256,
     257,    31,   259,   188,    -1,   262,   126,    27,    -1,    29,
      -1,   268,    -1,   270,   271,   272,    -1,   274,    66,    -1,
     277,    69,   207,    71,    72,   282,   283,   284,     3,   286,
       8,   288,    10,    11,    12,    12,    -1,   222,    13,    87,
       8,     9,    10,    11,    12,   302,   303,    25,    25,   169,
      -1,    28,    27,    31,    29,   312,     3,    25,    -1,    -1,
      12,   246,    -1,    31,   249,    -1,    13,    35,   188,   254,
     255,   256,    -1,    25,   259,    12,    -1,   262,   126,    31,
      27,     3,    29,   268,    -1,   270,   271,   207,    25,   274,
       3,    13,   277,    -1,    31,    -1,     3,   282,   283,     3,
      13,   286,   222,   288,    -1,    27,    13,    29,   365,    13,
      -1,    12,    -1,    -1,    27,    -1,    29,   302,   303,    12,
      27,   169,    29,    27,    25,    29,   246,   312,    39,   249,
      31,    12,    25,    -1,   254,   255,    12,   394,    31,   259,
     188,     3,   262,    -1,    25,    -1,     3,    28,   268,    25,
     270,    13,    28,     3,   274,    66,    13,   277,    69,   207,
      71,    72,   282,    13,    39,    27,   286,    29,   288,    -1,
      27,    12,    29,    -1,   222,    -1,    -1,    27,    -1,    29,
     365,    -1,   302,   303,    25,     8,     9,    10,    11,    12,
      31,    66,   312,    -1,    69,    -1,    71,    72,   246,    -1,
      -1,   249,    25,    10,    11,    12,   254,    -1,    31,   394,
      -1,   259,    35,    -1,   262,   126,    -1,     3,    25,     8,
     268,    10,    11,    12,    31,    -1,   274,    13,    35,   277,
       8,     9,    10,    11,    12,    -1,    25,    12,   286,    -1,
     288,    27,    31,    29,    -1,   365,    35,    25,    -1,    -1,
      25,   126,    -1,    31,   302,   303,    31,    35,   169,     8,
       9,    10,    11,    12,   312,    12,     8,     9,    10,    11,
      12,    11,    12,    -1,   394,    -1,    25,   188,    25,    -1,
      -1,    -1,    31,    25,    31,    25,    35,    -1,    35,    31,
      -1,    31,    -1,    35,   169,    35,   207,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    11,    12,    12,
      -1,    -1,    -1,   188,    25,    -1,    -1,   365,    -1,    25,
      31,    25,    25,    -1,    35,    31,    -1,    31,    31,    35,
      25,    35,   207,    -1,    -1,   246,    31,    -1,   249,    -1,
      35,     8,     9,    10,    11,    12,   394,    -1,   259,    -1,
      -1,   262,    -1,     8,     9,    10,    11,    12,    25,    12,
      12,    -1,    -1,   274,    31,    -1,   277,    -1,    35,    -1,
      25,   246,    25,    25,   249,   286,    31,   288,    31,    31,
      35,    -1,    35,    35,   259,    -1,    -1,   262,    -1,    -1,
      12,   302,   303,     8,     9,    10,    11,    12,    -1,   274,
      -1,   312,   277,    25,    10,    11,    12,    -1,    -1,    31,
      25,   286,    -1,   288,    -1,    -1,    31,    12,    -1,    25,
      35,    -1,    12,    -1,    -1,    31,    -1,   302,   303,    35,
      25,     4,     5,     6,     7,    25,    31,   312,    -1,    -1,
      35,    31,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,   365,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    32,    33,    34,    10,    11,    12,
      12,    -1,     1,   394,     3,     4,     5,     6,     7,     8,
     365,    -1,    25,    25,    13,    14,    15,    16,    17,    31,
      19,    20,    21,    35,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,    12,    -1,     1,   394,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    25,
      13,    14,    15,    16,    17,    31,    19,    20,    21,    35,
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
      27,    -1,    29,    -1,    12,    32,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    25,    13,    14,
      15,    16,    17,    31,    19,    20,    -1,    35,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    -1,    34,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,     8,     9,    10,    11,    12,    25,    10,    11,
      12,    -1,    25,    31,    -1,    -1,    -1,    35,    31,    25,
      -1,    -1,    35,    25,     8,    31,    10,    11,    12,    35,
       8,     9,    10,    11,    12,    -1,     8,     9,    10,    11,
      12,    25,    -1,    -1,    28,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    25,    32,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    25,    -1,
      -1,    28,    -1,    25,    -1,    32,    -1,    -1,    25,    31,
      32,    -1,    -1,    -1,    -1,    32,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     1,    -1,    25,     4,     5,     6,     7,    25,    31,
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
      28,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,    -1,
      28,    10,    11,    12,    -1,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    25,    -1,    -1,    28,
      25,    -1,    -1,    28,    -1,    25,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    25,    -1,     0,     1,    -1,    25,     4,
       5,     6,     7,    25,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    25,    -1,     0,     1,    -1,    25,     4,     5,     6,
       7,    25,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    25,
      -1,     0,     1,    -1,    25,     4,     5,     6,     7,    25,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,
      -1,     8,    25,    10,    11,    12,    -1,    25,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    25,    -1,
      -1,    -1,     0,     1,    -1,    25,     4,     5,     6,     7,
      25,     0,     1,    -1,    -1,     4,     5,     6,     7,     0,
       1,    -1,    -1,     4,     5,     6,     7
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
      32,    32,    32,    32,     3,    28,    53,    32,    32,    27,
      62,    53,    33,    44,    28,    28,    25,    12,    25,    11,
      10,     8,     9,     3,    42,    52,    53,    31,    53,    63,
      54,    55,    56,     3,    18,    53,    53,     3,    52,    28,
       3,     3,    29,    54,    32,    31,     3,    54,    29,    57,
       3,    54,    58,    59,    60,    61,    35,    31,    31,    31,
      31,    31,    31,    28,    25,    31,    31,     3,    54,    63,
      28,    28,    28,    45,    53,     3,    54,    31,    31,    21,
      28,    31,    31,    45,    52,    45,    45,    31,    45,     1,
      34,     3,     8,    13,    16,    17,    19,    27,    29,    32,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    65,
       3,     8,    13,    16,    17,    19,    27,    29,    32,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    65,     3,
       8,    13,    16,    17,    19,    27,    29,    32,    57,    58,
      59,    60,    61,    62,    65,    13,    27,    13,    27,    29,
      28,    25,    12,    25,    27,     1,    14,    15,    20,    23,
      24,    26,    34,    40,    43,    46,    47,    48,    49,    50,
      51,    52,    53,    64,     3,    44,    32,     3,    62,    32,
      32,    27,    62,    53,    12,    11,    10,     8,     9,    32,
       3,    62,    32,    32,    27,    62,    53,    25,    12,    25,
      11,    10,     8,     9,    32,     3,    62,    32,    32,    27,
      62,    53,    11,    10,     8,     9,    32,    32,    32,    32,
      27,     3,    13,    27,    29,    54,    29,    57,     3,    54,
      32,    32,    32,    32,    32,    28,    53,    32,    44,    28,
      28,     3,    30,    33,    31,    63,    55,     3,    54,    32,
      31,    29,    57,    58,    59,    60,    61,    31,    63,    55,
       3,    54,    32,    31,     3,    13,    27,    29,    54,    29,
      57,     3,    54,    58,    59,    60,    61,    31,    63,    55,
       3,    54,    32,    31,    58,    59,    60,    61,    55,     3,
      54,    55,     3,    54,    32,    32,    32,    27,     3,    54,
       3,    18,    53,    53,    52,    28,     3,    33,    28,     3,
      52,    53,    31,    31,    31,    31,     3,    54,    31,    31,
      31,    31,     3,    54,    32,    32,    27,    31,    31,    31,
      31,     3,    54,    31,    31,    31,    31,    31,    31,     3,
      54,    55,     3,    54,    32,    31,    31,    31,    31,    31,
      31,    28,    25,    31,    31,    31,    31,    55,     3,    54,
      32,    31,    31,    31,    31,    31,    31,    31,     3,    54,
      28,    28,    28,    45,    53,     3,    54,    31,    31,    31,
       3,    54,    31,    31,    21,    28,    31,    31,    31,    31,
      45,    52,    45,    45,    31,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    40,    41,
      41,    42,    42,    43,    43,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    46,    47,
      48,    48,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     5,     5,     9,
       5,     7,     2,     3,     7,     7,     2,     3,     3,     1,
       1,     4,     4,     4,     5,     5,     3,     3,     3,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     4,     3,     1,     1,     3,     3,
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
#line 96 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2327 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 104 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2338 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 110 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2348 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 117 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2358 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 122 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2368 "syntax.tab.c"
    break;

  case 7: /* declaration: error  */
#line 127 "syntax.y"
          {}
#line 2374 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 130 "syntax.y"
              {
    Simbolo s = criarSimbolo((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2393 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 146 "syntax.y"
                                            {
    Simbolo s = criarSimbolo((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo);
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
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2415 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 163 "syntax.y"
                                  {
    Simbolo s = criarSimbolo((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo);
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
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo, 2);
    (yyvsp[-4].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2436 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 181 "syntax.y"
                         {
   Simbolo s = criarSimbolo((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-3].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyvsp[-3].nodo)->proximo = (yyvsp[0].nodo);
 }
#line 2456 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 196 "syntax.y"
           {
    Simbolo s = criarSimbolo((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
 }
#line 2475 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 212 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "brackets_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2485 "syntax.tab.c"
    break;

  case 14: /* brackets_stmt: error  */
#line 217 "syntax.y"
          {}
#line 2491 "syntax.tab.c"
    break;

  case 15: /* stmts: stmt stmts  */
#line 220 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2502 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt  */
#line 226 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2512 "syntax.tab.c"
    break;

  case 17: /* stmt: for_stmt  */
#line 233 "syntax.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2522 "syntax.tab.c"
    break;

  case 18: /* stmt: if_else_stmt  */
#line 238 "syntax.y"
                 {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2532 "syntax.tab.c"
    break;

  case 19: /* stmt: return_stmt  */
#line 243 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2542 "syntax.tab.c"
    break;

  case 20: /* stmt: io_stmt  */
#line 248 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2552 "syntax.tab.c"
    break;

  case 21: /* stmt: exp_stmt  */
#line 253 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2562 "syntax.tab.c"
    break;

  case 22: /* stmt: set_stmt  */
#line 258 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2572 "syntax.tab.c"
    break;

  case 23: /* stmt: var_declaration  */
#line 263 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2582 "syntax.tab.c"
    break;

  case 24: /* stmt: assignment ';'  */
#line 268 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2592 "syntax.tab.c"
    break;

  case 25: /* stmt: brackets_stmt  */
#line 273 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2602 "syntax.tab.c"
    break;

  case 26: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 280 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 2612 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 285 "syntax.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 1);
  }
#line 2622 "syntax.tab.c"
    break;

  case 28: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 290 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2632 "syntax.tab.c"
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
#line 2645 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 307 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2656 "syntax.tab.c"
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
#line 2668 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN ';'  */
#line 322 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
  }
#line 2677 "syntax.tab.c"
    break;

  case 33: /* return_stmt: RETURN exp ';'  */
#line 326 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2687 "syntax.tab.c"
    break;

  case 34: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 333 "syntax.y"
                                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2699 "syntax.tab.c"
    break;

  case 35: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 340 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2710 "syntax.tab.c"
    break;

  case 36: /* exp_stmt: exp ';'  */
#line 348 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2720 "syntax.tab.c"
    break;

  case 37: /* assignment: ID '=' exp  */
#line 355 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2731 "syntax.tab.c"
    break;

  case 38: /* assignment: ID '=' assignment  */
#line 361 "syntax.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2742 "syntax.tab.c"
    break;

  case 39: /* exp: or_exp  */
#line 369 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2752 "syntax.tab.c"
    break;

  case 40: /* exp: set_exp  */
#line 374 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2762 "syntax.tab.c"
    break;

  case 41: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 381 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2772 "syntax.tab.c"
    break;

  case 42: /* set_exp: ISSET '(' ID ')'  */
#line 386 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2782 "syntax.tab.c"
    break;

  case 43: /* set_exp: ISSET '(' set_exp ')'  */
#line 391 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2792 "syntax.tab.c"
    break;

  case 44: /* set_exp: '!' ISSET '(' ID ')'  */
#line 396 "syntax.y"
                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2802 "syntax.tab.c"
    break;

  case 45: /* set_exp: '!' ISSET '(' set_exp ')'  */
#line 401 "syntax.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2812 "syntax.tab.c"
    break;

  case 46: /* set_in_exp: or_exp INFIX_OP ID  */
#line 408 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 2823 "syntax.tab.c"
    break;

  case 47: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 414 "syntax.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2834 "syntax.tab.c"
    break;

  case 48: /* set_in_exp: set_exp INFIX_OP set_exp  */
#line 420 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2845 "syntax.tab.c"
    break;

  case 49: /* set_in_exp: set_exp INFIX_OP ID  */
#line 426 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 2856 "syntax.tab.c"
    break;

  case 50: /* or_exp: or_exp OR and_exp  */
#line 434 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2867 "syntax.tab.c"
    break;

  case 51: /* or_exp: and_exp  */
#line 440 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2877 "syntax.tab.c"
    break;

  case 52: /* or_exp: set_in_exp  */
#line 445 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2887 "syntax.tab.c"
    break;

  case 53: /* and_exp: and_exp AND relational_exp  */
#line 452 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2898 "syntax.tab.c"
    break;

  case 54: /* and_exp: relational_exp  */
#line 458 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2908 "syntax.tab.c"
    break;

  case 55: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 465 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2919 "syntax.tab.c"
    break;

  case 56: /* relational_exp: sum_exp  */
#line 471 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2929 "syntax.tab.c"
    break;

  case 57: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 478 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2940 "syntax.tab.c"
    break;

  case 58: /* sum_exp: mul_exp  */
#line 484 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2950 "syntax.tab.c"
    break;

  case 59: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 491 "syntax.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2961 "syntax.tab.c"
    break;

  case 60: /* mul_exp: unary_exp  */
#line 497 "syntax.y"
              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2971 "syntax.tab.c"
    break;

  case 61: /* unary_exp: primal_exp  */
#line 504 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2981 "syntax.tab.c"
    break;

  case 62: /* unary_exp: '!' primal_exp  */
#line 509 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2991 "syntax.tab.c"
    break;

  case 63: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 514 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3001 "syntax.tab.c"
    break;

  case 64: /* unary_exp: ID '(' arg_list ')'  */
#line 519 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3012 "syntax.tab.c"
    break;

  case 65: /* unary_exp: ID '(' ')'  */
#line 525 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 3022 "syntax.tab.c"
    break;

  case 66: /* primal_exp: ID  */
#line 533 "syntax.y"
     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 3032 "syntax.tab.c"
    break;

  case 67: /* primal_exp: const  */
#line 538 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3042 "syntax.tab.c"
    break;

  case 68: /* primal_exp: '(' exp ')'  */
#line 543 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3052 "syntax.tab.c"
    break;

  case 69: /* arg_list: exp ',' arg_list  */
#line 550 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3063 "syntax.tab.c"
    break;

  case 70: /* arg_list: exp  */
#line 556 "syntax.y"
        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3073 "syntax.tab.c"
    break;

  case 71: /* type: INT_TYPE  */
#line 563 "syntax.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3085 "syntax.tab.c"
    break;

  case 72: /* type: FLOAT_TYPE  */
#line 570 "syntax.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3097 "syntax.tab.c"
    break;

  case 73: /* type: SET_TYPE  */
#line 577 "syntax.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3109 "syntax.tab.c"
    break;

  case 74: /* type: ELEM_TYPE  */
#line 584 "syntax.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3121 "syntax.tab.c"
    break;

  case 75: /* const: INTEGER  */
#line 593 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3131 "syntax.tab.c"
    break;

  case 76: /* const: FLOAT  */
#line 598 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3141 "syntax.tab.c"
    break;

  case 77: /* const: EMPTY  */
#line 603 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3151 "syntax.tab.c"
    break;


#line 3155 "syntax.tab.c"

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

#line 609 "syntax.y"


void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.linha, yylval.token.coluna, msg);
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

