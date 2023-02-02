/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "expr_tree.y"
  


#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#endif

#ifndef STRING_H
#define STRING_H
#include <string.h>
#endif

#ifndef CODEGEN_H
#define CODEGEN_H
#include "codegen.h"
#include "codegen.c"
#endif

#ifndef EXPR_TREE_H
#define EXPR_TREE_H
#include "expr_tree.h"
#include "expr_tree.c"
#endif

#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "symbolTable.h"
#include "symbolTable.c"
#endif

#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include "declarations.h"
#include "declarations.c"
#endif



void yyerror(char const *s);
extern FILE* yyin;
int identifiers[26];

int yylex(void);


#line 119 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    MUL = 259,                     /* MUL  */
    DIV = 260,                     /* DIV  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    ID = 263,                      /* ID  */
    READ = 264,                    /* READ  */
    WRITE = 265,                   /* WRITE  */
    SEMICOLON = 266,               /* SEMICOLON  */
    START = 267,                   /* START  */
    END = 268,                     /* END  */
    EQUALS = 269,                  /* EQUALS  */
    STRING = 270,                  /* STRING  */
    GT = 271,                      /* GT  */
    LT = 272,                      /* LT  */
    GE = 273,                      /* GE  */
    LE = 274,                      /* LE  */
    NE = 275,                      /* NE  */
    EQ = 276,                      /* EQ  */
    LTE = 277,                     /* LTE  */
    GTE = 278,                     /* GTE  */
    IF = 279,                      /* IF  */
    THEN = 280,                    /* THEN  */
    ELSE = 281,                    /* ELSE  */
    ENDIF = 282,                   /* ENDIF  */
    WHILE = 283,                   /* WHILE  */
    DO = 284,                      /* DO  */
    ENDWHILE = 285,                /* ENDWHILE  */
    REPEAT = 286,                  /* REPEAT  */
    UNTIL = 287,                   /* UNTIL  */
    DECL = 288,                    /* DECL  */
    ENDDECL = 289,                 /* ENDDECL  */
    STR = 290,                     /* STR  */
    BREAK = 291,                   /* BREAK  */
    BREAKPOINT = 292,              /* BREAKPOINT  */
    CONTINUE = 293                 /* CONTINUE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define MUL 259
#define DIV 260
#define PLUS 261
#define MINUS 262
#define ID 263
#define READ 264
#define WRITE 265
#define SEMICOLON 266
#define START 267
#define END 268
#define EQUALS 269
#define STRING 270
#define GT 271
#define LT 272
#define GE 273
#define LE 274
#define NE 275
#define EQ 276
#define LTE 277
#define GTE 278
#define IF 279
#define THEN 280
#define ELSE 281
#define ENDIF 282
#define WHILE 283
#define DO 284
#define ENDWHILE 285
#define REPEAT 286
#define UNTIL 287
#define DECL 288
#define ENDDECL 289
#define STR 290
#define BREAK 291
#define BREAKPOINT 292
#define CONTINUE 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 49 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;

#line 255 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_MUL = 4,                        /* MUL  */
  YYSYMBOL_DIV = 5,                        /* DIV  */
  YYSYMBOL_PLUS = 6,                       /* PLUS  */
  YYSYMBOL_MINUS = 7,                      /* MINUS  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_READ = 9,                       /* READ  */
  YYSYMBOL_WRITE = 10,                     /* WRITE  */
  YYSYMBOL_SEMICOLON = 11,                 /* SEMICOLON  */
  YYSYMBOL_START = 12,                     /* START  */
  YYSYMBOL_END = 13,                       /* END  */
  YYSYMBOL_EQUALS = 14,                    /* EQUALS  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_LT = 17,                        /* LT  */
  YYSYMBOL_GE = 18,                        /* GE  */
  YYSYMBOL_LE = 19,                        /* LE  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_EQ = 21,                        /* EQ  */
  YYSYMBOL_LTE = 22,                       /* LTE  */
  YYSYMBOL_GTE = 23,                       /* GTE  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_THEN = 25,                      /* THEN  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_ENDIF = 27,                     /* ENDIF  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_ENDWHILE = 30,                  /* ENDWHILE  */
  YYSYMBOL_REPEAT = 31,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 32,                     /* UNTIL  */
  YYSYMBOL_DECL = 33,                      /* DECL  */
  YYSYMBOL_ENDDECL = 34,                   /* ENDDECL  */
  YYSYMBOL_STR = 35,                       /* STR  */
  YYSYMBOL_BREAK = 36,                     /* BREAK  */
  YYSYMBOL_BREAKPOINT = 37,                /* BREAKPOINT  */
  YYSYMBOL_CONTINUE = 38,                  /* CONTINUE  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_Slist = 46,                     /* Slist  */
  YYSYMBOL_Stmt = 47,                      /* Stmt  */
  YYSYMBOL_DeclStmt = 48,                  /* DeclStmt  */
  YYSYMBOL_DeclList = 49,                  /* DeclList  */
  YYSYMBOL_Decl = 50,                      /* Decl  */
  YYSYMBOL_Type = 51,                      /* Type  */
  YYSYMBOL_VarList = 52,                   /* VarList  */
  YYSYMBOL_brkStmt = 53,                   /* brkStmt  */
  YYSYMBOL_contStmt = 54,                  /* contStmt  */
  YYSYMBOL_brkpointStmt = 55,              /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 56,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 57,                 /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 58,                /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 59,               /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 60,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 61,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 62,                   /* AsgStmt  */
  YYSYMBOL_expr = 63                       /* expr  */
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
typedef yytype_int8 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  122

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    78,    78,    96,   104,   105,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   121,   122,   124,
     125,   128,   131,   132,   135,   136,   137,   138,   141,   144,
     147,   150,   151,   154,   157,   160,   163,   166,   169,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "MUL", "DIV",
  "PLUS", "MINUS", "ID", "READ", "WRITE", "SEMICOLON", "START", "END",
  "EQUALS", "STRING", "GT", "LT", "GE", "LE", "NE", "EQ", "LTE", "GTE",
  "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "REPEAT",
  "UNTIL", "DECL", "ENDDECL", "STR", "BREAK", "BREAKPOINT", "CONTINUE",
  "','", "'['", "']'", "'('", "')'", "$accept", "program", "Slist", "Stmt",
  "DeclStmt", "DeclList", "Decl", "Type", "VarList", "brkStmt", "contStmt",
  "brkpointStmt", "Ifstmt", "Whilestmt", "RepeatStmt", "DoWhileStmt",
  "InputStmt", "OutputStmt", "AsgStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-28)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   172,     9,     0,   -25,   -24,     4,   -23,   -17,   271,
     271,    -2,    39,    40,    41,   189,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,    27,
      52,    27,   -28,    27,    27,   282,   206,   -28,   -28,   -28,
       2,   -28,    53,   -28,   -28,   -28,    66,   -28,   -28,   -28,
     -28,    27,   317,    19,     6,    51,    59,    28,    36,   -28,
     -28,    45,    20,   -28,    91,    27,    27,    27,    27,   -28,
      27,    27,    27,    27,    27,    27,    75,    76,    68,    70,
      27,    27,    97,   -28,    96,   -28,   139,   139,   171,   171,
     -28,   -28,    67,   -28,    67,    67,   -28,   -28,   271,   271,
     115,   123,    64,    69,   141,   223,     5,    95,   -28,   107,
     271,   104,   105,   -28,   -28,    77,   240,   -28,   -28,   -28,
     106,   -28
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,    16,    11,    12,
      13,     9,    10,    14,    15,     6,     7,     8,     1,     0,
       0,     0,     3,     0,     0,     0,     0,    22,    18,    23,
       0,    20,     0,    28,    30,    29,     0,     4,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      19,    25,     0,     2,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    43,    41,    42,    39,    40,
      48,    47,    51,    52,    49,    50,    36,    37,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,    27,     0,
       0,     0,     0,    35,    34,     0,     0,    32,    33,    26,
       0,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,    -7,   -15,   -28,   -28,    83,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    15,    16,    17,    40,    41,    42,    62,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      47,    37,    35,    36,    54,    37,    55,    56,     1,    28,
      65,    66,    67,    68,    29,    32,   113,    30,    31,    33,
      47,    47,    70,    71,    64,    34,    72,    73,    74,    75,
      48,    83,    38,    39,    99,    49,    59,    39,    86,    87,
      88,    89,    50,    90,    91,    92,    93,    94,    95,    77,
      43,    44,    45,   100,   101,    65,    66,    67,    68,    84,
      53,    61,    76,    65,    66,    67,    68,    70,    71,    51,
      80,    72,    73,    74,    75,    70,    71,    63,    81,    72,
      73,    74,    75,    70,    71,    82,    96,    97,    73,    47,
      47,   104,   105,    98,    78,    65,    66,    67,    68,    99,
     102,    47,    79,   116,   103,   108,   114,    70,    71,   109,
     115,    72,    73,    74,    75,   117,   118,   121,   119,    65,
      66,    67,    68,    60,     0,     0,     0,    65,    66,    67,
      68,    70,    71,     0,    85,    72,    73,    74,    75,    70,
      71,     0,     0,    72,    73,    74,    75,     0,     0,     3,
       4,     5,     0,     0,     0,    70,    71,     0,   106,    72,
      73,    74,    75,     0,     0,     7,   107,   110,   111,     8,
       9,     0,    10,     0,    11,    65,    66,    12,    13,    14,
       3,     4,     5,     0,     0,     6,     0,    70,    71,     0,
       0,    72,    73,    74,    75,     0,     7,     3,     4,     5,
       8,     9,    46,    10,     0,    11,     0,     0,    12,    13,
      14,     0,     0,     7,     3,     4,     5,     8,     9,     0,
      10,     0,    11,     0,     0,    12,    13,    14,     0,     0,
       7,     3,     4,     5,     8,     9,     0,    10,    58,    11,
       0,     0,    12,    13,    14,     0,     0,     7,     3,     4,
       5,     8,     9,   112,    10,     0,    11,     0,     0,    12,
      13,    14,     0,     0,     7,     0,     0,   120,     8,     9,
       0,    10,     0,    11,     0,     0,    12,    13,    14,     3,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     0,     0,     7,     0,     0,     0,     8,
       9,     0,    10,     0,    11,     0,     7,    12,    13,    14,
      57,     9,     0,    10,     0,    11,     0,     0,    12,    13,
      14,    65,    66,    67,    68,     0,     0,     0,    69,     0,
       0,     0,     0,    70,    71,     0,     0,    72,    73,    74,
      75
};

static const yytype_int8 yycheck[] =
{
      15,     3,     9,    10,    31,     3,    33,    34,    12,     0,
       4,     5,     6,     7,    14,    11,    11,    42,    42,    42,
      35,    36,    16,    17,    51,    42,    20,    21,    22,    23,
       3,    11,    34,    35,    29,     8,    34,    35,    65,    66,
      67,    68,    15,    70,    71,    72,    73,    74,    75,    43,
      11,    11,    11,    80,    81,     4,     5,     6,     7,    39,
       8,     8,    43,     4,     5,     6,     7,    16,    17,    42,
      42,    20,    21,    22,    23,    16,    17,    11,    42,    20,
      21,    22,    23,    16,    17,    40,    11,    11,    21,   104,
     105,    98,    99,    25,    43,     4,     5,     6,     7,    29,
       3,   116,    43,   110,     8,    41,    11,    16,    17,    40,
       3,    20,    21,    22,    23,    11,    11,    11,    41,     4,
       5,     6,     7,    40,    -1,    -1,    -1,     4,     5,     6,
       7,    16,    17,    -1,    43,    20,    21,    22,    23,    16,
      17,    -1,    -1,    20,    21,    22,    23,    -1,    -1,     8,
       9,    10,    -1,    -1,    -1,    16,    17,    -1,    43,    20,
      21,    22,    23,    -1,    -1,    24,    43,    26,    27,    28,
      29,    -1,    31,    -1,    33,     4,     5,    36,    37,    38,
       8,     9,    10,    -1,    -1,    13,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    -1,    24,     8,     9,    10,
      28,    29,    13,    31,    -1,    33,    -1,    -1,    36,    37,
      38,    -1,    -1,    24,     8,     9,    10,    28,    29,    -1,
      31,    -1,    33,    -1,    -1,    36,    37,    38,    -1,    -1,
      24,     8,     9,    10,    28,    29,    -1,    31,    32,    33,
      -1,    -1,    36,    37,    38,    -1,    -1,    24,     8,     9,
      10,    28,    29,    30,    31,    -1,    33,    -1,    -1,    36,
      37,    38,    -1,    -1,    24,    -1,    -1,    27,    28,    29,
      -1,    31,    -1,    33,    -1,    -1,    36,    37,    38,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,    10,    -1,    -1,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    -1,    24,    36,    37,    38,
      28,    29,    -1,    31,    -1,    33,    -1,    -1,    36,    37,
      38,     4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    45,     8,     9,    10,    13,    24,    28,    29,
      31,    33,    36,    37,    38,    46,    47,    48,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,    14,
      42,    42,    11,    42,    42,    46,    46,     3,    34,    35,
      49,    50,    51,    11,    11,    11,    13,    47,     3,     8,
      15,    42,    63,     8,    63,    63,    63,    28,    32,    34,
      50,     8,    52,    11,    63,     4,     5,     6,     7,    11,
      16,    17,    20,    21,    22,    23,    43,    43,    43,    43,
      42,    42,    40,    11,    39,    43,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    11,    11,    25,    29,
      63,    63,     3,     8,    46,    46,    43,    43,    41,    40,
      26,    27,    30,    11,    11,     3,    46,    11,    11,    41,
      27,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    48,    48,    49,
      49,    50,    51,    51,    52,    52,    52,    52,    53,    54,
      55,    56,    56,    57,    58,    59,    60,    61,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       1,     3,     1,     1,     3,     1,     6,     4,     2,     2,
       2,    10,     8,     8,     7,     7,     5,     5,     4,     3,
       3,     3,     3,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* program: START Slist END SEMICOLON  */
#line 79 "expr_tree.y"
    {
      FILE * target_file = fopen("untranslated_assembly.xsm","w");
      
      // printInfix($<node>2);

      printf("Generating Assembly Code... \n");
      explInit(target_file);
      codeGen((yyvsp[-2].node), target_file);
      // evaluate($<node>2, identifiers);
      explEnd(target_file);
      printf("Complete \n");

      if(target_file) fclose(target_file);

      exit(1);

    }
#line 1431 "y.tab.c"
    break;

  case 3: /* program: START END SEMICOLON  */
#line 97 "expr_tree.y"
    {
        exit(1);
    }
#line 1439 "y.tab.c"
    break;

  case 4: /* Slist: Slist Stmt  */
#line 104 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 1445 "y.tab.c"
    break;

  case 5: /* Slist: Stmt  */
#line 105 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 1451 "y.tab.c"
    break;

  case 21: /* Decl: Type VarList SEMICOLON  */
#line 128 "expr_tree.y"
                           {popAllAndCreateEntry((yyvsp[-2].integer), 1);}
#line 1457 "y.tab.c"
    break;

  case 24: /* VarList: VarList ',' ID  */
#line 135 "expr_tree.y"
                   {pushDeclaration((yyvsp[0].node)->varname);}
#line 1463 "y.tab.c"
    break;

  case 25: /* VarList: ID  */
#line 136 "expr_tree.y"
       {pushDeclaration((yyvsp[0].node)->varname);}
#line 1469 "y.tab.c"
    break;

  case 28: /* brkStmt: BREAK SEMICOLON  */
#line 141 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 1475 "y.tab.c"
    break;

  case 29: /* contStmt: CONTINUE SEMICOLON  */
#line 144 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 1481 "y.tab.c"
    break;

  case 30: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 147 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 1487 "y.tab.c"
    break;

  case 31: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 150 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 1493 "y.tab.c"
    break;

  case 32: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 151 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 1499 "y.tab.c"
    break;

  case 33: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 154 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1505 "y.tab.c"
    break;

  case 34: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 157 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1511 "y.tab.c"
    break;

  case 35: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 160 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1517 "y.tab.c"
    break;

  case 36: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 163 "expr_tree.y"
                              {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 1523 "y.tab.c"
    break;

  case 37: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 166 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 1529 "y.tab.c"
    break;

  case 38: /* AsgStmt: ID EQUALS expr SEMICOLON  */
#line 169 "expr_tree.y"
                             {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 1535 "y.tab.c"
    break;

  case 39: /* expr: expr PLUS expr  */
#line 172 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1541 "y.tab.c"
    break;

  case 40: /* expr: expr MINUS expr  */
#line 173 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1547 "y.tab.c"
    break;

  case 41: /* expr: expr MUL expr  */
#line 174 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1553 "y.tab.c"
    break;

  case 42: /* expr: expr DIV expr  */
#line 175 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1559 "y.tab.c"
    break;

  case 43: /* expr: '(' expr ')'  */
#line 176 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 1565 "y.tab.c"
    break;

  case 44: /* expr: INT  */
#line 177 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 1571 "y.tab.c"
    break;

  case 45: /* expr: ID  */
#line 178 "expr_tree.y"
       {(yyval.node) = (yyvsp[0].node);}
#line 1577 "y.tab.c"
    break;

  case 46: /* expr: STRING  */
#line 179 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 1583 "y.tab.c"
    break;

  case 47: /* expr: expr LT expr  */
#line 180 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1589 "y.tab.c"
    break;

  case 48: /* expr: expr GT expr  */
#line 181 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1595 "y.tab.c"
    break;

  case 49: /* expr: expr LTE expr  */
#line 182 "expr_tree.y"
                   {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1601 "y.tab.c"
    break;

  case 50: /* expr: expr GTE expr  */
#line 183 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1607 "y.tab.c"
    break;

  case 51: /* expr: expr NE expr  */
#line 184 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1613 "y.tab.c"
    break;

  case 52: /* expr: expr EQ expr  */
#line 185 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1619 "y.tab.c"
    break;


#line 1623 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 188 "expr_tree.y"


void yyerror(char const *s)
{
    printf("yyerror %s",s);
}

int main()
{

  FILE * input_file=fopen("input.txt","r");
  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}
