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
#line 5 "syntax.y"

  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include "tabela.h"
  #include "arvore.h"

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;

  char tipo[100];

  int error = 0;

  int indiceTabela = -1;

  NodoArvore* raiz;

#line 93 "syntax.tab.c"

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
  YYSYMBOL_INT_TYPE = 4,                   /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 5,                 /* FLOAT_TYPE  */
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
  YYSYMBOL_STRING = 16,                    /* STRING  */
  YYSYMBOL_INTEGER = 17,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 18,                     /* FLOAT  */
  YYSYMBOL_EMPTY = 19,                     /* EMPTY  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_INFIX_OP = 24,                  /* INFIX_OP  */
  YYSYMBOL_FORALL = 25,                    /* FORALL  */
  YYSYMBOL_ISSET = 26,                     /* ISSET  */
  YYSYMBOL_27_ = 27,                       /* ';'  */
  YYSYMBOL_28_ = 28,                       /* ','  */
  YYSYMBOL_29_ = 29,                       /* '{'  */
  YYSYMBOL_30_ = 30,                       /* '}'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '='  */
  YYSYMBOL_34_ = 34,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_declaration_list = 37,          /* declaration_list  */
  YYSYMBOL_declaration = 38,               /* declaration  */
  YYSYMBOL_var_declaration = 39,           /* var_declaration  */
  YYSYMBOL_function_declaration = 40,      /* function_declaration  */
  YYSYMBOL_params_list = 41,               /* params_list  */
  YYSYMBOL_brackets_stmt = 42,             /* brackets_stmt  */
  YYSYMBOL_stmts = 43,                     /* stmts  */
  YYSYMBOL_stmt = 44,                      /* stmt  */
  YYSYMBOL_io_stmt = 45,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 46,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 47,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 48,               /* return_stmt  */
  YYSYMBOL_set_stmt = 49,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 50,                  /* exp_stmt  */
  YYSYMBOL_assignment = 51,                /* assignment  */
  YYSYMBOL_exp = 52,                       /* exp  */
  YYSYMBOL_set_exp = 53,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 54,                /* set_in_exp  */
  YYSYMBOL_or_exp = 55,                    /* or_exp  */
  YYSYMBOL_and_exp = 56,                   /* and_exp  */
  YYSYMBOL_relational_exp = 57,            /* relational_exp  */
  YYSYMBOL_sum_exp = 58,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 59,                   /* mul_exp  */
  YYSYMBOL_unary_exp = 60,                 /* unary_exp  */
  YYSYMBOL_primal_exp = 61,                /* primal_exp  */
  YYSYMBOL_arg_list = 62,                  /* arg_list  */
  YYSYMBOL_type = 63,                      /* type  */
  YYSYMBOL_const = 64                      /* const  */
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
#define YYLAST   2530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
       2,     2,     2,    34,     2,     2,     2,     2,     2,     2,
      31,    32,     2,     2,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
       2,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   106,   106,   113,   118,   124,   128,   132,   135,   149,
     163,   178,   184,   191,   195,   198,   203,   209,   213,   217,
     221,   225,   229,   233,   237,   241,   247,   251,   255,   261,
     270,   275,   283,   286,   292,   298,   303,   307,   313,   319,
     326,   330,   336,   342,   347,   355,   360,   364,   370,   375,
     381,   386,   392,   397,   403,   408,   414,   418,   422,   426,
     431,   438,   442,   446,   452,   457,   463,   467,   471,   475,
     481,   485,   489
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT_TYPE",
  "FLOAT_TYPE", "SET_TYPE", "ELEM_TYPE", "ARITMETIC_OP1", "ARITMETIC_OP2",
  "RELATIONAL_OP", "AND", "OR", "SET_OP1", "INPUT", "OUTPUT", "STRING",
  "INTEGER", "FLOAT", "EMPTY", "IF", "ELSE", "FOR", "RETURN", "INFIX_OP",
  "FORALL", "ISSET", "';'", "','", "'{'", "'}'", "'('", "')'", "'='",
  "'!'", "$accept", "program", "declaration_list", "declaration",
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
     275,   276,   277,   278,   279,   280,   281,    59,    44,   123,
     125,    40,    41,    61,    33
};
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     812,  2371,    35,    50,    58,    82,    88,  2398,  2425,  2452,
    2474,    90,  -116,  2483,   -17,  2491,    45,     4,    64,   115,
    2499,    61,  2507,     4,   101,   727,   121,   132,   148,   154,
     766,  2171,  2176,   156,   170,     3,   178,   185,   407,   121,
     915,   947,   165,   979,  1011,  1043,  1075,  1107,  1139,  1171,
     151,   192,   200,     5,    32,    36,   653,  2301,  2181,  2201,
    2206,   226,  2211,  2515,   920,    23,   414,  2231,  2236,   542,
     233,    94,   407,   244,  2118,  1203,   229,   261,    15,   237,
    2241,  2523,   242,  1235,  1267,   666,    22,   666,   666,   666,
     666,   252,   258,  2261,   152,   260,   271,   186,    92,   268,
     276,   282,   283,   291,   306,  1299,   311,   307,   308,  2266,
     249,    46,   141,  2323,  2319,  2271,  2291,   600,  2296,   321,
     327,   328,   330,  1747,   414,    86,   341,   342,   334,  1331,
    1363,  1395,   781,  1427,   345,   350,   351,  1459,  1491,    61,
     383,    61,    61,  1523,   353,  1555,  1587,    61,  1619,  1651,
      61,   111,   142,   357,   732,  1949,  1954,   407,   142,   363,
     213,   275,   551,   164,   759,  1959,  1984,  1989,  1994,  1774,
     343,   366,   853,  1779,  1784,   407,   343,   210,    -5,   310,
     196,  2136,   519,  1809,  1814,  1819,  1844,  2142,   611,  2328,
    2345,  2350,   407,   611,   103,  1824,   859,  2355,  2372,  2377,
    2382,   376,  1683,   542,   145,   824,    61,   378,   386,   138,
    2019,  2024,   542,   364,  2029,   670,   670,   670,   670,   670,
     231,  1849,  1854,   542,   380,  1879,   691,   168,   691,   691,
     691,   691,   313,  2399,  2404,   381,  2409,   542,   542,   542,
     542,   542,   299,   277,   387,   382,   389,   407,  1715,  2054,
     396,   397,  2059,   558,   317,  2112,  2064,  2089,  1884,   410,
     423,  1889,   243,   339,   412,   460,  2146,  2082,  1914,  1919,
    2426,   418,  2431,  1859,  1789,  2436,  2453,   437,   542,   883,
     421,  2107,   422,  1924,   238,   542,  2458,   219,   485,   532,
     583,   577
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,   449,   147,  -116,   394,   -14,   -42,   -41,
    -116,  -116,  -116,  -116,  -116,  -116,   -69,   588,   648,   470,
     483,   429,   365,   287,   248,   161,   -26,  -115,     8,    65
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    40,    10,    18,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    95,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    82,   128,    22,   104,    20,    74,   -47,    11,    63,
      15,    26,   167,    80,    16,    11,    27,   -47,   107,   -47,
      30,    31,    32,   -47,    19,   111,   169,   -47,   153,   -47,
      75,   170,   -47,    21,    38,   201,   171,    39,   -66,   185,
     172,   173,   174,   199,    85,   167,   167,    87,   -46,     2,
       3,     4,     5,   -67,   175,    93,    86,   176,   -43,   -40,
     -46,   -68,   149,   -46,    25,     2,     3,     4,     5,    26,
     -43,   144,    19,   -43,    27,    28,    29,    17,    30,    31,
      32,    33,   133,    34,    35,   -69,    36,    37,    12,   135,
     150,   185,    38,    14,   250,    39,    23,   151,   143,   153,
     145,   146,   152,   168,   203,   259,   148,   153,   208,   132,
     100,   154,   155,   156,   237,   -46,   204,   271,    24,   -61,
     -61,   -61,   -61,   -61,    67,   157,   211,   -46,   158,    64,
     186,   167,   214,   -12,   200,   -61,   168,   168,    30,    31,
      32,   169,   209,   -61,   222,   210,   170,     9,   243,   167,
     225,   171,    38,   -44,     9,   172,   173,   174,   244,   154,
     155,   156,   234,    69,   246,   -44,   167,   236,   -44,   175,
     249,   263,   176,   157,   217,   -49,   -49,   199,    83,    70,
     117,   264,   186,   185,   -65,    71,   199,    72,   -49,   167,
     167,   167,   167,   167,   185,    81,   -49,   199,   -47,   166,
     185,    73,   185,   185,   185,   185,   185,   228,   -46,    77,
     -47,   199,   199,   199,   199,   199,    78,   168,   119,    84,
     -46,   167,   168,   168,   -46,   -47,   184,   -41,   -46,    91,
     198,   -42,   166,   166,   169,   186,    99,   -47,   -41,   170,
     168,   186,   -41,   -42,   171,   -47,   -42,   103,   172,   173,
     174,   116,   199,   200,   228,   -45,   105,   168,   200,   199,
      87,   -45,   175,   258,   106,   176,   -42,   -45,   200,   109,
     -42,   -45,   -15,   -45,   186,   -45,   -45,   200,   184,   202,
     168,   168,   168,   168,   168,   186,   165,   215,   200,   -43,
     -11,   186,   118,   186,   186,   186,   186,   186,   -39,   204,
     120,   -43,   200,   200,   200,   200,   200,   -40,   121,   -43,
     237,   -45,   168,   183,   122,   123,   169,   197,   166,   165,
     165,   170,   226,   -45,    66,   164,   171,   217,   -48,   -48,
     172,   173,   174,   124,   227,   125,   166,   115,   -40,   126,
     127,   -48,   -40,   200,   175,   270,   221,   176,   -42,   -48,
     200,   -43,   182,   166,   129,   130,   196,   131,   164,   164,
     172,   173,   174,   -43,   198,   183,   -64,   -43,   137,   138,
     184,   -43,   140,   198,   175,   114,   166,   166,   166,   166,
     257,   184,   141,   142,   198,   147,   207,   184,   212,   184,
     184,   184,   269,   184,   -44,   -41,   252,   223,   198,   198,
     198,   276,   198,   163,   182,   165,   -44,   241,   166,   -47,
     151,   247,   261,   272,   -44,   152,   248,    74,   278,   279,
     153,   -47,    26,   165,   154,   155,   156,    27,   281,   282,
     181,    30,    31,    32,   195,   -47,   163,   163,   157,   198,
     165,   158,   283,   285,   164,    38,   198,   -47,    39,   -47,
     286,   197,   113,   -39,   -42,   284,    13,   183,    92,     0,
     197,   -47,   164,   165,   165,   165,   256,   162,   183,   287,
       0,   197,   -44,     0,   183,     0,   183,   183,   268,   164,
     183,     0,   181,     0,   -44,   197,   197,   275,   -44,   197,
     196,     0,   -44,     0,   180,   165,   182,   -47,   194,   196,
     162,   162,   164,   164,   255,     0,     0,   182,   160,   -47,
     196,     0,     0,   182,   110,   182,   267,   290,     0,   182,
       0,   161,   163,     0,   196,   274,   197,   230,   196,   -51,
     -51,   -51,     0,   197,   164,   178,     0,     0,     0,    97,
     163,   160,   160,   -51,   -47,   187,   180,   -51,   179,     0,
     188,   -51,    98,     0,   161,   161,   -47,   163,     0,   189,
     190,   191,   216,   -46,   291,   196,     0,     0,   195,   216,
     -45,     0,   196,   192,   181,   -46,   193,   195,     0,     0,
     163,   254,   -45,   -46,     0,   181,   162,   178,   195,   -42,
     -45,   181,     0,   266,     0,   -42,     0,   181,     0,     0,
     179,   -42,   273,   169,   162,   -42,   195,   -42,   170,   -42,
       0,     0,   163,   171,   233,   -42,     0,   172,   173,   174,
       0,   162,     0,    76,     0,     0,    79,   160,   189,   190,
     191,   175,   242,     0,   176,     0,     0,     0,   180,     0,
     161,   194,   192,   195,   253,   160,     0,     0,     0,   180,
     195,     0,   194,    94,    96,   262,     0,     0,   161,   101,
     102,   180,   160,    88,   -49,   -49,     0,     0,     0,    74,
     194,     0,     0,   151,    26,   161,   162,   -49,   152,   178,
     -49,     0,   251,    30,    31,    32,   159,   154,   155,   156,
     178,     0,   179,   260,   169,    98,     0,    38,     0,   170,
      39,   157,   178,   179,   158,    94,    98,   194,   172,   173,
     174,   277,   134,   177,   194,   179,     0,   160,     0,   159,
     159,     0,   175,     0,    98,   176,   108,     0,     0,     0,
     161,     0,     0,     0,   112,   -61,   -61,   -61,   -61,   -61,
     -70,   -70,   -70,   -70,   -70,   213,     0,     0,   288,     0,
       0,   -61,     0,     0,   -61,   289,   -70,     0,    65,     0,
      66,    98,     0,   224,   -70,   177,     0,   218,    98,   -51,
     -51,   -51,     0,   136,   -70,   -70,   -70,   -70,   -70,     0,
     235,     0,   -25,   -51,   -25,   -25,   -25,   -25,   -25,   -25,
     -70,   -51,     0,   -70,   -25,   -25,   -25,    94,   -25,   -25,
     -25,   -25,   139,   -25,   -25,   159,   -25,   -25,    94,     0,
     -25,   -25,   -25,     1,     0,   -25,     2,     3,     4,     5,
      94,     0,     0,   159,     0,   -14,     0,   -14,   -14,   -14,
     -14,   -14,   -14,     0,     0,   280,     0,   -14,   -14,   -14,
     159,   -14,   -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,
     -14,     0,   245,   -14,   -14,   -14,     0,   177,   -14,     0,
       0,   -70,   -70,   -70,   -70,   -70,     0,   239,   177,   -51,
     -51,   -51,     0,     0,     0,   265,     0,   -70,     0,     0,
     177,   -70,     0,   -51,   -13,   -70,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,     0,   159,   -13,   -13,   -13,     0,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,
       0,     0,   -13,   -13,   -13,     0,   -23,   -13,   -23,   -23,
     -23,   -23,   -23,   -23,     2,     3,     4,     5,   -23,   -23,
     -23,     0,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,
     -23,   -23,     0,     0,   -23,   -23,   -23,     0,   -25,   -23,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,     0,   -25,
     -25,     0,   -25,   -25,     0,     0,   -25,   -25,   -25,     0,
     149,   -25,    25,     2,     3,     4,     5,    26,     0,     0,
       0,     0,    27,    28,    29,     0,    30,    31,    32,    33,
       0,    34,    35,     0,    36,    37,     0,     0,   150,   -16,
      38,     0,   -20,    39,   -20,   -20,   -20,   -20,   -20,   -20,
       0,     0,     0,     0,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,     0,   -20,   -20,     0,   -20,   -20,     0,     0,
     -20,   -20,   -20,     0,   -17,   -20,   -17,   -17,   -17,   -17,
     -17,   -17,     0,     0,     0,     0,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,   -17,
       0,     0,   -17,   -17,   -17,     0,   -18,   -17,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,     0,     0,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,     0,   -18,   -18,     0,
     -18,   -18,     0,     0,   -18,   -18,   -18,     0,   -19,   -18,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,   -19,
     -19,     0,   -19,   -19,     0,     0,   -19,   -19,   -19,     0,
     -22,   -19,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
       0,   -22,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,
     -22,     0,   -21,   -22,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,     0,   -21,   -21,     0,   -21,   -21,     0,     0,
     -21,   -21,   -21,     0,   -32,   -21,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,
       0,     0,   -32,   -32,   -32,     0,   -24,   -32,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,     0,   -24,   -24,     0,
     -24,   -24,     0,     0,   -24,   -24,   -24,     0,   -38,   -24,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,     0,   -38,
     -38,     0,   -38,   -38,     0,     0,   -38,   -38,   -38,     0,
     -33,   -38,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,
     -33,     0,   -26,   -33,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,     0,
     -26,   -26,   -26,     0,   -27,   -26,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,
       0,     0,   -27,   -27,   -27,     0,   -28,   -27,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,   -28,     0,   -30,   -28,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,   -30,
     -30,     0,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,
     -36,   -30,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
       0,   -36,   -36,     0,   -36,   -36,     0,     0,   -36,   -36,
     -36,     0,   -37,   -36,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,     0,
     -37,   -37,   -37,     0,   -31,   -37,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,
       0,     0,   -31,   -31,   -31,     0,   -35,   -31,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,
     -35,   -35,     0,     0,   -35,   -35,   -35,     0,   -34,   -35,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,   -34,
     -34,     0,   -34,   -34,     0,     0,   -34,   -34,   -34,     0,
     -29,   -34,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
       0,   -29,   -29,     0,   -29,   -29,     0,     0,   -29,   -29,
     -29,     0,   -14,   -29,   -14,   -14,   -14,   -14,   -14,   -14,
       0,     0,     0,     0,   -14,   -14,   -14,     0,   -14,   -14,
     -14,   -14,     0,   -14,   -14,     0,   -14,   -14,     0,     0,
     -14,   -14,   -14,     0,    -8,   -14,    -8,    -8,    -8,    -8,
      -8,    -8,     0,     0,     0,     0,    -8,    -8,    -8,     0,
      -8,    -8,    -8,    -8,     0,    -8,    -8,     0,    -8,    -8,
       0,     0,    -8,    -8,    -8,     0,   -13,    -8,   -13,   -13,
     -13,   -13,   -13,   -13,     0,     0,     0,     0,   -13,   -13,
     -13,     0,   -13,   -13,   -13,   -13,     0,   -13,   -13,     0,
     -13,   -13,     0,     0,   -13,   -13,   -13,     0,   205,   -13,
      25,     2,     3,     4,     5,    26,     0,     0,     0,     0,
      27,    28,    29,     0,    30,    31,    32,    33,     0,    34,
      35,     0,    36,    37,     0,     0,   206,     0,    38,     0,
       0,    39,   -61,   -61,   -61,   -61,   -61,   -71,   -71,   -71,
     -71,   -71,   -72,   -72,   -72,   -72,   -72,   239,   -61,   -50,
     -50,   -50,   -61,   -71,     0,   220,   -61,   -71,   -72,     0,
       0,   -71,   -72,   -50,     0,     0,   -72,   -53,   231,   -53,
     -53,   -53,   -55,   -55,   -55,   -55,   -55,   -56,   -56,   -56,
     -56,   -56,     0,   -53,   238,   -49,   -49,   -53,   -55,     0,
       0,   -53,   -55,   -56,     0,     0,   -55,   -56,   -49,     0,
       0,   -56,   -62,   -62,   -62,   -62,   -62,   -61,   -61,   -61,
     -61,   -61,   -58,   -58,   -58,   -58,   -58,     0,   -62,   238,
     -48,   -48,   -62,   -61,     0,     0,   -62,   -61,   -58,     0,
       0,   -61,   -58,   -48,     0,     0,   -58,   -57,   -57,   -57,
     -57,   -57,   -60,   -60,   -60,   -60,   -60,   -63,   -63,   -63,
     -63,   -63,     0,   -57,     0,     0,     0,   -57,   -60,     0,
       0,   -57,   -60,   -63,     0,     0,   -60,   -63,     0,     0,
       0,   -63,   -52,   231,   -52,   -52,   -52,   -54,   -54,   -54,
     -54,   -54,   -59,   -59,   -59,   -59,   -59,     0,   -52,     0,
       0,     0,   -52,   -54,     0,     0,   -52,   -54,   -59,     0,
       0,   -54,   -59,     0,     0,     0,   -59,   -71,   -71,   -71,
     -71,   -71,   -72,   -72,   -72,   -72,   -72,   -53,   219,   -53,
     -53,   -53,     0,   -71,     0,     0,     0,     0,   -72,     0,
       0,   -71,     0,   -53,     0,     0,   -72,     0,     0,     0,
       0,   -53,   -55,   -55,   -55,   -55,   -55,   -56,   -56,   -56,
     -56,   -56,   -62,   -62,   -62,   -62,   -62,     0,   -55,     0,
       0,     0,     0,   -56,     0,     0,   -55,     0,   -62,     0,
       0,   -56,     0,     0,     0,     0,   -62,   -61,   -61,   -61,
     -61,   -61,   -58,   -58,   -58,   -58,   -58,   -57,   -57,   -57,
     -57,   -57,     0,   -61,     0,     0,     0,     0,   -58,     0,
       0,   -61,     0,   -57,     0,     0,   -58,     0,     0,     0,
       0,   -57,   -60,   -60,   -60,   -60,   -60,   -63,   -63,   -63,
     -63,   -63,   -52,   219,   -52,   -52,   -52,     0,   -60,     0,
       0,     0,     0,   -63,     0,     0,   -60,     0,   -52,     0,
     230,   -63,   -50,   -50,   -50,     0,   -52,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,     0,   -50,     0,     0,     0,
     -50,     0,     0,   -54,   -50,   -59,   -59,   -59,   -59,   -59,
     218,   -54,   -50,   -50,   -50,     0,   -61,   -61,   -61,   -61,
     -61,   -59,     0,     0,     0,     0,   -50,     0,     0,   -59,
       0,     0,   -61,     0,   -50,   -61,   229,   -49,   -49,    65,
     -61,   -61,   -61,   -61,   -61,     0,   229,   -48,   -48,     0,
     -49,     0,     0,     0,   -49,     0,   -61,     0,   -49,     0,
     -48,     0,     0,   232,   -48,     0,     0,     0,   -48,   -71,
     -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,   -53,
      90,   -53,   -53,   -53,     0,   -71,     0,     0,   -71,     0,
     -72,     0,     0,   -72,     0,   -53,     0,     0,   -53,   -55,
     -55,   -55,   -55,   -55,   -56,   -56,   -56,   -56,   -56,   -62,
     -62,   -62,   -62,   -62,     0,   -55,     0,     0,   -55,     0,
     -56,     0,     0,   -56,     0,   -62,     0,     0,   -62,   -61,
     -61,   -61,   -61,   -61,   -58,   -58,   -58,   -58,   -58,   -57,
     -57,   -57,   -57,   -57,     0,   -61,     0,     0,   -61,     0,
     -58,     0,     0,   -58,     0,   -57,     0,     0,   -57,   -60,
     -60,   -60,   -60,   -60,   -63,   -63,   -63,   -63,   -63,   -52,
      90,   -52,   -52,   -52,     0,   -60,     0,     0,   -60,     0,
     -63,     0,     0,   -63,     0,   -52,     0,     0,   -52,   -54,
     -54,   -54,   -54,   -54,   -59,   -59,   -59,   -59,   -59,    89,
       0,   -51,   -51,   -51,     0,   -54,     0,     0,   -54,     0,
     -59,     0,     0,   -59,     0,   -51,     0,    89,   -51,   -50,
     -50,   -50,     0,    88,   -48,   -48,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -50,     0,     0,   -50,   -48,     0,     0,
     -48,     0,   -70,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,   -72,   -53,   240,   -53,   -53,   -53,     0,   -71,
       0,    -7,    -7,     0,   -72,    -7,    -7,    -7,    -7,   -53,
     -55,   -55,   -55,   -55,   -55,   -56,   -56,   -56,   -56,   -56,
     -62,   -62,   -62,   -62,   -62,     0,   -55,     0,    -2,     1,
       0,   -56,     2,     3,     4,     5,   -62,   -61,   -61,   -61,
     -61,   -61,   -58,   -58,   -58,   -58,   -58,   -57,   -57,   -57,
     -57,   -57,     0,   -61,     0,    -4,    -4,     0,   -58,    -4,
      -4,    -4,    -4,   -57,   -60,   -60,   -60,   -60,   -60,   -63,
     -63,   -63,   -63,   -63,   -52,   240,   -52,   -52,   -52,     0,
     -60,     0,    -6,    -6,     0,   -63,    -6,    -6,    -6,    -6,
     -52,   -54,   -54,   -54,   -54,   -54,   -59,   -59,   -59,   -59,
     -59,     0,     0,     0,    -5,    -5,     0,   -54,    -5,    -5,
      -5,    -5,   -59,    -3,    -3,     0,     0,    -3,    -3,    -3,
      -3,    -8,    -8,     0,     0,    -8,    -8,    -8,    -8,   -14,
     -14,     0,     0,   -14,   -14,   -14,   -14,   -10,   -10,     0,
       0,   -10,   -10,   -10,   -10,    -9,    -9,     0,     0,    -9,
      -9,    -9,    -9,   -13,   -13,     0,     0,   -13,   -13,   -13,
     -13
};

static const yytype_int16 yycheck[] =
{
      26,    43,   117,    17,    73,     1,     3,    12,     0,    23,
      27,     8,    38,    39,    31,     7,    13,    12,     3,    24,
      17,    18,    19,    28,    16,     3,     3,    32,    13,    24,
      27,     8,    27,    29,    31,    13,    13,    34,     3,    65,
      17,    18,    19,    69,    12,    71,    72,    11,    12,     4,
       5,     6,     7,     3,    31,    32,    24,    34,    12,    27,
      24,     3,     1,    27,     3,     4,     5,     6,     7,     8,
      24,   140,    64,    27,    13,    14,    15,    32,    17,    18,
      19,    20,   123,    22,    23,     3,    25,    26,     0,     3,
      29,   117,    31,     3,   209,    34,    32,     3,   139,    13,
     141,   142,     8,    38,    12,   220,   147,    13,   150,   123,
      16,    17,    18,    19,    11,    12,    24,   232,     3,     8,
       9,    10,    11,    12,     3,    31,   152,    24,    34,    28,
      65,   157,   158,    32,    69,    24,    71,    72,    17,    18,
      19,     3,    31,    32,   170,     3,     8,     0,     3,   175,
     176,    13,    31,    12,     7,    17,    18,    19,    13,    17,
      18,    19,   188,    31,   206,    24,   192,   193,    27,    31,
      32,     3,    34,    31,    10,    11,    12,   203,    27,    31,
      28,    13,   117,   209,    32,    31,   212,    31,    24,   215,
     216,   217,   218,   219,   220,    30,    32,   223,    12,    38,
     226,    31,   228,   229,   230,   231,   232,    11,    12,    31,
      24,   237,   238,   239,   240,   241,    31,   152,    32,    27,
      24,   247,   157,   158,    28,    12,    65,    27,    32,     3,
      69,    12,    71,    72,     3,   170,     3,    24,    28,     8,
     175,   176,    32,    24,    13,    32,    27,     3,    17,    18,
      19,    90,   278,   188,    11,    12,    27,   192,   193,   285,
      11,    12,    31,    32,     3,    34,    28,    24,   203,    32,
      32,    28,    30,    24,   209,    32,    27,   212,   117,    27,
     215,   216,   217,   218,   219,   220,    38,    12,   223,    12,
      32,   226,    32,   228,   229,   230,   231,   232,    27,    24,
      32,    24,   237,   238,   239,   240,   241,    32,    32,    32,
      11,    12,   247,    65,    32,    32,     3,    69,   157,    71,
      72,     8,    12,    24,    33,    38,    13,    10,    11,    12,
      17,    18,    19,    27,    24,    24,   175,    89,    28,    32,
      32,    24,    32,   278,    31,    32,     3,    34,    27,    32,
     285,    12,    65,   192,    27,    27,    69,    27,    71,    72,
      17,    18,    19,    24,   203,   117,    32,    28,    27,    27,
     209,    32,    27,   212,    31,    88,   215,   216,   217,   218,
     219,   220,    32,    32,   223,    32,     3,   226,    31,   228,
     229,   230,   231,   232,    12,    32,    32,    31,   237,   238,
     239,   240,   241,    38,   117,   157,    24,    31,   247,    12,
       3,    33,    32,    32,    32,     8,    30,     3,    31,    30,
      13,    24,     8,   175,    17,    18,    19,    13,    32,    32,
      65,    17,    18,    19,    69,    12,    71,    72,    31,   278,
     192,    34,    32,    31,   157,    31,   285,    24,    34,    12,
      32,   203,    87,    32,    32,    32,     7,   209,    64,    -1,
     212,    24,   175,   215,   216,   217,   218,    38,   220,    32,
      -1,   223,    12,    -1,   226,    -1,   228,   229,   230,   192,
     232,    -1,   117,    -1,    24,   237,   238,   239,    28,   241,
     203,    -1,    32,    -1,    65,   247,   209,    12,    69,   212,
      71,    72,   215,   216,   217,    -1,    -1,   220,    38,    24,
     223,    -1,    -1,   226,    85,   228,   229,    32,    -1,   232,
      -1,    38,   157,    -1,   237,   238,   278,     8,   241,    10,
      11,    12,    -1,   285,   247,    65,    -1,    -1,    -1,    69,
     175,    71,    72,    24,    12,     3,   117,    28,    65,    -1,
       8,    32,    69,    -1,    71,    72,    24,   192,    -1,    17,
      18,    19,    11,    12,    32,   278,    -1,    -1,   203,    11,
      12,    -1,   285,    31,   209,    24,    34,   212,    -1,    -1,
     215,   216,    24,    32,    -1,   220,   157,   117,   223,    12,
      32,   226,    -1,   228,    -1,    12,    -1,   232,    -1,    -1,
     117,    24,   237,     3,   175,    28,   241,    24,     8,    32,
      -1,    -1,   247,    13,     3,    32,    -1,    17,    18,    19,
      -1,   192,    -1,    35,    -1,    -1,    38,   157,    17,    18,
      19,    31,   203,    -1,    34,    -1,    -1,    -1,   209,    -1,
     157,   212,    31,   278,   215,   175,    -1,    -1,    -1,   220,
     285,    -1,   223,    65,    66,   226,    -1,    -1,   175,    71,
      72,   232,   192,    10,    11,    12,    -1,    -1,    -1,     3,
     241,    -1,    -1,     3,     8,   192,   247,    24,     8,   209,
      27,    -1,   212,    17,    18,    19,    38,    17,    18,    19,
     220,    -1,   209,   223,     3,   212,    -1,    31,    -1,     8,
      34,    31,   232,   220,    34,   117,   223,   278,    17,    18,
      19,   241,   124,    65,   285,   232,    -1,   247,    -1,    71,
      72,    -1,    31,    -1,   241,    34,    78,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    86,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,   157,    -1,    -1,   278,    -1,
      -1,    24,    -1,    -1,    27,   285,    24,    -1,    31,    -1,
      33,   278,    -1,   175,    32,   117,    -1,     8,   285,    10,
      11,    12,    -1,   125,     8,     9,    10,    11,    12,    -1,
     192,    -1,     1,    24,     3,     4,     5,     6,     7,     8,
      24,    32,    -1,    27,    13,    14,    15,   209,    17,    18,
      19,    20,    21,    22,    23,   157,    25,    26,   220,    -1,
      29,    30,    31,     1,    -1,    34,     4,     5,     6,     7,
     232,    -1,    -1,   175,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,   247,    -1,    13,    14,    15,
     192,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,   204,    29,    30,    31,    -1,   209,    34,    -1,
      -1,     8,     9,    10,    11,    12,    -1,     8,   220,    10,
      11,    12,    -1,    -1,    -1,   227,    -1,    24,    -1,    -1,
     232,    28,    -1,    24,     1,    32,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,   247,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,     4,     5,     6,     7,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,
       1,    34,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,     1,    34,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    -1,     1,    34,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      -1,    34,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,    24,    10,
      11,    12,    28,    24,    -1,    31,    32,    28,    24,    -1,
      -1,    32,    28,    24,    -1,    -1,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    24,    10,    11,    12,    28,    24,    -1,
      -1,    32,    28,    24,    -1,    -1,    32,    28,    24,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    24,    10,
      11,    12,    28,    24,    -1,    -1,    32,    28,    24,    -1,
      -1,    32,    28,    24,    -1,    -1,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    24,    -1,    -1,    -1,    28,    24,    -1,
      -1,    32,    28,    24,    -1,    -1,    32,    28,    -1,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    24,    -1,
      -1,    -1,    28,    24,    -1,    -1,    32,    28,    24,    -1,
      -1,    32,    28,    -1,    -1,    -1,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    24,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    32,    -1,    24,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    24,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    32,    -1,    24,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    32,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    24,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    32,    -1,    24,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    32,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    24,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    32,    -1,    24,    -1,
       8,    32,    10,    11,    12,    -1,    32,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    24,    32,     8,     9,    10,    11,    12,
       8,    32,    10,    11,    12,    -1,     8,     9,    10,    11,
      12,    24,    -1,    -1,    -1,    -1,    24,    -1,    -1,    32,
      -1,    -1,    24,    -1,    32,    27,    10,    11,    12,    31,
       8,     9,    10,    11,    12,    -1,    10,    11,    12,    -1,
      24,    -1,    -1,    -1,    28,    -1,    24,    -1,    32,    -1,
      24,    -1,    -1,    31,    28,    -1,    -1,    -1,    32,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,    -1,    27,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
      -1,    10,    11,    12,    -1,    24,    -1,    -1,    27,    -1,
      24,    -1,    -1,    27,    -1,    24,    -1,     8,    27,    10,
      11,    12,    -1,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    24,    -1,    -1,    27,    24,    -1,    -1,
      27,    -1,    24,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    24,
      -1,     0,     1,    -1,    24,     4,     5,     6,     7,    24,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    24,    -1,     0,     1,
      -1,    24,     4,     5,     6,     7,    24,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    24,    -1,     0,     1,    -1,    24,     4,
       5,     6,     7,    24,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      24,    -1,     0,     1,    -1,    24,     4,     5,     6,     7,
      24,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    -1,     0,     1,    -1,    24,     4,     5,
       6,     7,    24,     0,     1,    -1,    -1,     4,     5,     6,
       7,     0,     1,    -1,    -1,     4,     5,     6,     7,     0,
       1,    -1,    -1,     4,     5,     6,     7,     0,     1,    -1,
      -1,     4,     5,     6,     7,     0,     1,    -1,    -1,     4,
       5,     6,     7,     0,     1,    -1,    -1,     4,     5,     6,
       7
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    36,    37,    38,    39,
      40,    63,     0,    38,     3,    27,    31,    32,    41,    63,
       1,    29,    42,    32,     3,     3,     8,    13,    14,    15,
      17,    18,    19,    20,    22,    23,    25,    26,    31,    34,
      39,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    63,    64,    42,    28,    31,    33,     3,    61,    31,
      31,    31,    31,    31,     3,    27,    52,    31,    31,    52,
      61,    30,    43,    27,    27,    12,    24,    11,    10,     8,
       9,     3,    41,    32,    52,    62,    52,    54,    55,     3,
      16,    52,    52,     3,    51,    27,     3,     3,    53,    32,
      56,     3,    53,    57,    58,    59,    60,    28,    32,    32,
      32,    32,    32,    32,    27,    24,    32,    32,    62,    27,
      27,    27,    42,    44,    52,     3,    53,    27,    27,    21,
      27,    32,    32,    44,    51,    44,    44,    32,    44,     1,
      29,     3,     8,    13,    17,    18,    19,    31,    34,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    64,     3,
       8,    13,    17,    18,    19,    31,    34,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    64,     3,     8,    17,
      18,    19,    31,    34,    56,    57,    58,    59,    60,    61,
      64,    13,    27,    12,    24,     1,    29,     3,    43,    31,
       3,    61,    31,    52,    61,    12,    11,    10,     8,     9,
      31,     3,    61,    31,    52,    61,    12,    24,    11,    10,
       8,     9,    31,     3,    61,    52,    61,    11,    10,     8,
       9,    31,    56,     3,    13,    53,    43,    33,    30,    32,
      62,    54,    32,    56,    57,    58,    59,    60,    32,    62,
      54,    32,    56,     3,    13,    53,    57,    58,    59,    60,
      32,    62,    32,    57,    58,    59,    60,    54,    31,    30,
      52,    32,    32,    32,    32,    31,    32,    32,    54,    54,
      32,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    39,    40,
      40,    41,    41,    42,    42,    43,    43,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    45,    46,
      47,    47,    48,    48,    49,    49,    49,    49,    50,    51,
      52,    52,    53,    54,    54,    55,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    60,
      60,    61,    61,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     5,     5,     9,
       5,     7,     2,     3,     7,     7,     5,     5,     2,     3,
       1,     1,     4,     3,     3,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     2,     2,     4,
       3,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 106 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2044 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 113 "syntax.y"
                                {
    (yyval.nodo) = criarNodo("declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2054 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 118 "syntax.y"
                {
    (yyval.nodo) = criarNodo("declaration_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2063 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 124 "syntax.y"
                       {
    (yyval.nodo) = criarNodo("declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2072 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 128 "syntax.y"
                    {
    (yyval.nodo) = criarNodo("declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2081 "syntax.tab.c"
    break;

  case 7: /* declaration: error  */
#line 132 "syntax.y"
          {}
#line 2087 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 135 "syntax.y"
              {
    Simbolo s = criarSimbolo((yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-1].token).body);
    s.escopo = escopoAtual(&escopo);
    s.ehFuncao = 0;
    s.tipo = strdup(tipo);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = criarNodo("var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-1].token).body);
  }
#line 2104 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 149 "syntax.y"
                                            {
    Simbolo s = criarSimbolo((yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-4].token).body);
    s.escopo = escopoAtual(&escopo);
    s.ehFuncao = 1;
    s.tipo = strdup(tipo);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = criarNodo("function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-4].token).body);
    (yyvsp[-5].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2123 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 163 "syntax.y"
                                  {
    Simbolo s = criarSimbolo((yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);
    s.escopo = escopoAtual(&escopo);
    s.ehFuncao = 1;
    s.tipo = strdup(tipo);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = criarNodo("function_declaration");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);
    (yyvsp[-4].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2141 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 178 "syntax.y"
                         {
    (yyval.nodo) = criarNodo("params_list");
    (yyval.nodo)->filho = (yyvsp[-3].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
    (yyvsp[-3].nodo)->proximo = (yyvsp[0].nodo);
 }
#line 2152 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 184 "syntax.y"
           {
    (yyval.nodo) = criarNodo("params_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
 }
#line 2162 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 191 "syntax.y"
                {
    (yyval.nodo) = criarNodo("brackets_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2171 "syntax.tab.c"
    break;

  case 14: /* brackets_stmt: error  */
#line 195 "syntax.y"
          {}
#line 2177 "syntax.tab.c"
    break;

  case 15: /* stmts: stmt stmts  */
#line 198 "syntax.y"
             {
    (yyval.nodo) = criarNodo("stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2187 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt  */
#line 203 "syntax.y"
         {
    (yyval.nodo) = criarNodo("stmts");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2196 "syntax.tab.c"
    break;

  case 17: /* stmt: for_stmt  */
#line 209 "syntax.y"
           {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2205 "syntax.tab.c"
    break;

  case 18: /* stmt: if_else_stmt  */
#line 213 "syntax.y"
                 {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2214 "syntax.tab.c"
    break;

  case 19: /* stmt: return_stmt  */
#line 217 "syntax.y"
                {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2223 "syntax.tab.c"
    break;

  case 20: /* stmt: io_stmt  */
#line 221 "syntax.y"
            {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2232 "syntax.tab.c"
    break;

  case 21: /* stmt: exp_stmt  */
#line 225 "syntax.y"
             {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2241 "syntax.tab.c"
    break;

  case 22: /* stmt: set_stmt  */
#line 229 "syntax.y"
             {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2250 "syntax.tab.c"
    break;

  case 23: /* stmt: var_declaration  */
#line 233 "syntax.y"
                    {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2259 "syntax.tab.c"
    break;

  case 24: /* stmt: assignment ';'  */
#line 237 "syntax.y"
                  {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2268 "syntax.tab.c"
    break;

  case 25: /* stmt: brackets_stmt  */
#line 241 "syntax.y"
                  {
    (yyval.nodo) = criarNodo("stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2277 "syntax.tab.c"
    break;

  case 26: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 247 "syntax.y"
                       {
    (yyval.nodo) = criarNodo("io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
  }
#line 2286 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 251 "syntax.y"
                              {
    (yyval.nodo) = criarNodo("io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
  }
#line 2295 "syntax.tab.c"
    break;

  case 28: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 255 "syntax.y"
                           {
    (yyval.nodo) = criarNodo("io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2304 "syntax.tab.c"
    break;

  case 29: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 261 "syntax.y"
                                                     {
    (yyval.nodo) = criarNodo("for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2316 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 270 "syntax.y"
                      {
    (yyval.nodo) = criarNodo("if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2326 "syntax.tab.c"
    break;

  case 31: /* if_else_stmt: IF '(' exp ')' brackets_stmt ELSE stmt  */
#line 275 "syntax.y"
                                           {
    (yyval.nodo) = criarNodo("if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2337 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN ';'  */
#line 283 "syntax.y"
             {
    (yyval.nodo) = criarNodo("return_stmt");
  }
#line 2345 "syntax.tab.c"
    break;

  case 33: /* return_stmt: RETURN exp ';'  */
#line 286 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2354 "syntax.tab.c"
    break;

  case 34: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 292 "syntax.y"
                                          {
    (yyval.nodo) = criarNodo("set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-4].token).body);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2365 "syntax.tab.c"
    break;

  case 35: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 298 "syntax.y"
                                       {
    (yyval.nodo) = criarNodo("set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-4].token).body);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2375 "syntax.tab.c"
    break;

  case 36: /* set_stmt: ISSET '(' ID ')' ';'  */
#line 303 "syntax.y"
                         {
    (yyval.nodo) = criarNodo("set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
  }
#line 2384 "syntax.tab.c"
    break;

  case 37: /* set_stmt: ISSET '(' set_exp ')' ';'  */
#line 307 "syntax.y"
                              {
    (yyval.nodo) = criarNodo("set_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2393 "syntax.tab.c"
    break;

  case 38: /* exp_stmt: exp ';'  */
#line 313 "syntax.y"
          {
    (yyval.nodo) = criarNodo("exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2402 "syntax.tab.c"
    break;

  case 39: /* assignment: ID '=' exp  */
#line 319 "syntax.y"
             {
    (yyval.nodo) = criarNodo("assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2412 "syntax.tab.c"
    break;

  case 40: /* exp: or_exp  */
#line 326 "syntax.y"
         {
    (yyval.nodo) = criarNodo("exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2421 "syntax.tab.c"
    break;

  case 41: /* exp: set_exp  */
#line 330 "syntax.y"
            {
    (yyval.nodo) = criarNodo("exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2430 "syntax.tab.c"
    break;

  case 42: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 336 "syntax.y"
                             {
    (yyval.nodo) = criarNodo("set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2439 "syntax.tab.c"
    break;

  case 43: /* set_in_exp: or_exp INFIX_OP ID  */
#line 342 "syntax.y"
                     {
    (yyval.nodo) = criarNodo("set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2449 "syntax.tab.c"
    break;

  case 44: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 347 "syntax.y"
                            {
    (yyval.nodo) = criarNodo("set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);

  }
#line 2460 "syntax.tab.c"
    break;

  case 45: /* or_exp: or_exp OR and_exp  */
#line 355 "syntax.y"
                    {
    (yyval.nodo) = criarNodo("or_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2470 "syntax.tab.c"
    break;

  case 46: /* or_exp: and_exp  */
#line 360 "syntax.y"
            {
    (yyval.nodo) = criarNodo("or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2479 "syntax.tab.c"
    break;

  case 47: /* or_exp: set_in_exp  */
#line 364 "syntax.y"
               {
    (yyval.nodo) = criarNodo("or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2488 "syntax.tab.c"
    break;

  case 48: /* and_exp: and_exp AND relational_exp  */
#line 370 "syntax.y"
                             {
    (yyval.nodo) = criarNodo("and_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2498 "syntax.tab.c"
    break;

  case 49: /* and_exp: relational_exp  */
#line 375 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("and_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2507 "syntax.tab.c"
    break;

  case 50: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 381 "syntax.y"
                                       {
    (yyval.nodo) = criarNodo("relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2517 "syntax.tab.c"
    break;

  case 51: /* relational_exp: sum_exp  */
#line 386 "syntax.y"
            {
    (yyval.nodo) = criarNodo("relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2526 "syntax.tab.c"
    break;

  case 52: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 392 "syntax.y"
                                {
    (yyval.nodo) = criarNodo("sum_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2536 "syntax.tab.c"
    break;

  case 53: /* sum_exp: mul_exp  */
#line 397 "syntax.y"
            {
    (yyval.nodo) = criarNodo("sum_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2545 "syntax.tab.c"
    break;

  case 54: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 403 "syntax.y"
                                  {
    (yyval.nodo) = criarNodo("mul_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2555 "syntax.tab.c"
    break;

  case 55: /* mul_exp: unary_exp  */
#line 408 "syntax.y"
              {
    (yyval.nodo) = criarNodo("mul_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2564 "syntax.tab.c"
    break;

  case 56: /* unary_exp: primal_exp  */
#line 414 "syntax.y"
             {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2573 "syntax.tab.c"
    break;

  case 57: /* unary_exp: '!' primal_exp  */
#line 418 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2582 "syntax.tab.c"
    break;

  case 58: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 422 "syntax.y"
                             {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2591 "syntax.tab.c"
    break;

  case 59: /* unary_exp: ID '(' arg_list ')'  */
#line 426 "syntax.y"
                        {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).body);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2601 "syntax.tab.c"
    break;

  case 60: /* unary_exp: ID '(' ')'  */
#line 431 "syntax.y"
               {
    (yyval.nodo) = criarNodo("unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).body);
  }
#line 2610 "syntax.tab.c"
    break;

  case 61: /* primal_exp: ID  */
#line 438 "syntax.y"
     {
    (yyval.nodo) = criarNodo("primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2619 "syntax.tab.c"
    break;

  case 62: /* primal_exp: const  */
#line 442 "syntax.y"
          {
    (yyval.nodo) = criarNodo("primal_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2628 "syntax.tab.c"
    break;

  case 63: /* primal_exp: '(' exp ')'  */
#line 446 "syntax.y"
                {
    (yyval.nodo) = criarNodo("arg_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2637 "syntax.tab.c"
    break;

  case 64: /* arg_list: exp ',' arg_list  */
#line 452 "syntax.y"
                   {
    (yyval.nodo) = criarNodo("arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2647 "syntax.tab.c"
    break;

  case 65: /* arg_list: exp  */
#line 457 "syntax.y"
        {
    (yyval.nodo) = criarNodo("arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2656 "syntax.tab.c"
    break;

  case 66: /* type: INT_TYPE  */
#line 463 "syntax.y"
           {
    strcpy(tipo, "INT");
    (yyval.nodo) = criarNodo("INT_TYPE");
  }
#line 2665 "syntax.tab.c"
    break;

  case 67: /* type: FLOAT_TYPE  */
#line 467 "syntax.y"
               {
    strcpy(tipo, "FLOAT");
    (yyval.nodo) = criarNodo("FLOAT_TYPE");
  }
#line 2674 "syntax.tab.c"
    break;

  case 68: /* type: SET_TYPE  */
#line 471 "syntax.y"
             {
    strcpy(tipo, "SET");
    (yyval.nodo) = criarNodo("SET_TYPE");
  }
#line 2683 "syntax.tab.c"
    break;

  case 69: /* type: ELEM_TYPE  */
#line 475 "syntax.y"
              {
    strcpy(tipo,"ELEM");
    (yyval.nodo) = criarNodo("ELEM_TYPE");
  }
#line 2692 "syntax.tab.c"
    break;

  case 70: /* const: INTEGER  */
#line 481 "syntax.y"
          {
    (yyval.nodo) = criarNodo("const");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2701 "syntax.tab.c"
    break;

  case 71: /* const: FLOAT  */
#line 485 "syntax.y"
          {
    (yyval.nodo) = criarNodo("const");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2710 "syntax.tab.c"
    break;

  case 72: /* const: EMPTY  */
#line 489 "syntax.y"
          {
    (yyval.nodo) = criarNodo("const");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).body);
  }
#line 2719 "syntax.tab.c"
    break;


#line 2723 "syntax.tab.c"

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

#line 494 "syntax.y"


void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.line, yylval.token.column, msg);
  error++;
}

int main(int argc, char ** argv) {
    ++argv, --argc;
    if(argc > 0) {
        yyin = fopen(argv[0], "r");
    }
    else {
        yyin = stdin;
    }

    escopo.idx = -1;
    escopo.proximo = -1;
    
    yyparse();

    printTabela(indiceTabela);

    if (error) return 0;

    printArvore(raiz, 0);
    freeArvore(raiz);

    fclose(yyin);
    yylex_destroy();
    return 0;
}

