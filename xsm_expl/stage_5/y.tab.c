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
  

#ifndef _STDIO_H
#define _STDIO_H
#include <stdio.h>
#endif

#ifndef _STDLIB_H
#define _STDLIB_H
#include <stdlib.h>
#endif

#ifndef _STRING_H
#define _STRING_H
#include <string.h>
#endif

#ifndef _CODEGEN_H
#define _CODEGEN_H
#include "codegen.h"
#endif

#ifndef _CODEGEN_C
#define _CODEGEN_C
#include "codegen.c"
#endif

#ifndef _EXPR_TREE_H
#define _EXPR_TREE_H
#include "expr_tree.h"
#endif

#ifndef _EXPR_TREE_C
#define _EXPR_TREE_C
#include "expr_tree.c"
#endif

#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H
#include "symbolTable.h"
#endif

#ifndef _SYMBOL_TABLE_C
#define _SYMBOL_TABLE_C
#include "symbolTable.c"
#endif

#ifndef _DECLARATIONS_H
#define _DECLARATIONS_H
#include "declarations.h"
#endif

#ifndef _DECLARATIONS_C
#define _DECLARATIONS_C
#include "declarations.c"
#endif




void yyerror(char const *s);
extern FILE* yyin;
extern char * yytext;
FILE * target_file ;
int _INIT_STATE ;

int yylex(void);


#line 141 "y.tab.c"

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
    MOD = 271,                     /* MOD  */
    GT = 272,                      /* GT  */
    LT = 273,                      /* LT  */
    GE = 274,                      /* GE  */
    LE = 275,                      /* LE  */
    NE = 276,                      /* NE  */
    EQ = 277,                      /* EQ  */
    IF = 278,                      /* IF  */
    THEN = 279,                    /* THEN  */
    ELSE = 280,                    /* ELSE  */
    ENDIF = 281,                   /* ENDIF  */
    WHILE = 282,                   /* WHILE  */
    DO = 283,                      /* DO  */
    ENDWHILE = 284,                /* ENDWHILE  */
    REPEAT = 285,                  /* REPEAT  */
    UNTIL = 286,                   /* UNTIL  */
    DECL = 287,                    /* DECL  */
    ENDDECL = 288,                 /* ENDDECL  */
    INT_DECL = 289,                /* INT_DECL  */
    STRING_DECL = 290,             /* STRING_DECL  */
    BREAK = 291,                   /* BREAK  */
    BREAKPOINT = 292,              /* BREAKPOINT  */
    CONTINUE = 293,                /* CONTINUE  */
    RETURN = 294,                  /* RETURN  */
    MAIN = 295                     /* MAIN  */
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
#define MOD 271
#define GT 272
#define LT 273
#define GE 274
#define LE 275
#define NE 276
#define EQ 277
#define IF 278
#define THEN 279
#define ELSE 280
#define ENDIF 281
#define WHILE 282
#define DO 283
#define ENDWHILE 284
#define REPEAT 285
#define UNTIL 286
#define DECL 287
#define ENDDECL 288
#define INT_DECL 289
#define STRING_DECL 290
#define BREAK 291
#define BREAKPOINT 292
#define CONTINUE 293
#define RETURN 294
#define MAIN 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 71 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;

#line 281 "y.tab.c"

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
  YYSYMBOL_MOD = 16,                       /* MOD  */
  YYSYMBOL_GT = 17,                        /* GT  */
  YYSYMBOL_LT = 18,                        /* LT  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_LE = 20,                        /* LE  */
  YYSYMBOL_NE = 21,                        /* NE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_THEN = 24,                      /* THEN  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_ENDIF = 26,                     /* ENDIF  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_DO = 28,                        /* DO  */
  YYSYMBOL_ENDWHILE = 29,                  /* ENDWHILE  */
  YYSYMBOL_REPEAT = 30,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 31,                     /* UNTIL  */
  YYSYMBOL_DECL = 32,                      /* DECL  */
  YYSYMBOL_ENDDECL = 33,                   /* ENDDECL  */
  YYSYMBOL_INT_DECL = 34,                  /* INT_DECL  */
  YYSYMBOL_STRING_DECL = 35,               /* STRING_DECL  */
  YYSYMBOL_BREAK = 36,                     /* BREAK  */
  YYSYMBOL_BREAKPOINT = 37,                /* BREAKPOINT  */
  YYSYMBOL_CONTINUE = 38,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_MAIN = 40,                      /* MAIN  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* ','  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_Program = 49,                   /* Program  */
  YYSYMBOL_MainBlock = 50,                 /* MainBlock  */
  YYSYMBOL_GDeclBlock = 51,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 52,                 /* GDeclList  */
  YYSYMBOL_GDecl = 53,                     /* GDecl  */
  YYSYMBOL_GidList = 54,                   /* GidList  */
  YYSYMBOL_Gid = 55,                       /* Gid  */
  YYSYMBOL_GParamList = 56,                /* GParamList  */
  YYSYMBOL_identifierDecl = 57,            /* identifierDecl  */
  YYSYMBOL_identifierUse = 58,             /* identifierUse  */
  YYSYMBOL_FDefBlock = 59,                 /* FDefBlock  */
  YYSYMBOL_FDef = 60,                      /* FDef  */
  YYSYMBOL_Body = 61,                      /* Body  */
  YYSYMBOL_ParamList = 62,                 /* ParamList  */
  YYSYMBOL_Param = 63,                     /* Param  */
  YYSYMBOL_LDeclBlock = 64,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 65,                  /* LDecList  */
  YYSYMBOL_LDecl = 66,                     /* LDecl  */
  YYSYMBOL_LIdList = 67,                   /* LIdList  */
  YYSYMBOL_ArgList = 68,                   /* ArgList  */
  YYSYMBOL_Slist = 69,                     /* Slist  */
  YYSYMBOL_Stmt = 70,                      /* Stmt  */
  YYSYMBOL_ReturnStmt = 71,                /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 72,                  /* DeclStmt  */
  YYSYMBOL_DeclList = 73,                  /* DeclList  */
  YYSYMBOL_Decl = 74,                      /* Decl  */
  YYSYMBOL_Type = 75,                      /* Type  */
  YYSYMBOL_VarList = 76,                   /* VarList  */
  YYSYMBOL_brkStmt = 77,                   /* brkStmt  */
  YYSYMBOL_contStmt = 78,                  /* contStmt  */
  YYSYMBOL_brkpointStmt = 79,              /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 80,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 81,                 /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 82,                /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 83,               /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 84,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 85,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 86,                   /* AsgStmt  */
  YYSYMBOL_expr = 87                       /* expr  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      41,    42,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   127,   127,   132,   137,   145,   179,   187,   198,   199,
     203,   210,   214,   221,   222,   232,   238,   243,   248,   252,
     258,   265,   273,   281,   289,   300,   304,   310,   325,   329,
     335,   346,   351,   359,   366,   372,   378,   386,   387,   389,
     396,   397,   400,   407,   412,   423,   428,   436,   437,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   455,   459,   466,   467,   469,   470,   473,   481,   482,
     485,   486,   490,   493,   496,   499,   500,   503,   506,   509,
     512,   515,   518,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537
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
  "EQUALS", "STRING", "MOD", "GT", "LT", "GE", "LE", "NE", "EQ", "IF",
  "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "REPEAT", "UNTIL",
  "DECL", "ENDDECL", "INT_DECL", "STRING_DECL", "BREAK", "BREAKPOINT",
  "CONTINUE", "RETURN", "MAIN", "'('", "')'", "'{'", "'}'", "','", "'['",
  "']'", "$accept", "Program", "MainBlock", "GDeclBlock", "GDeclList",
  "GDecl", "GidList", "Gid", "GParamList", "identifierDecl",
  "identifierUse", "FDefBlock", "FDef", "Body", "ParamList", "Param",
  "LDeclBlock", "LDecList", "LDecl", "LIdList", "ArgList", "Slist", "Stmt",
  "ReturnStmt", "DeclStmt", "DeclList", "Decl", "Type", "VarList",
  "brkStmt", "contStmt", "brkpointStmt", "Ifstmt", "Whilestmt",
  "RepeatStmt", "DoWhileStmt", "InputStmt", "OutputStmt", "AsgStmt",
  "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-113)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,   112,  -113,  -113,    15,  -113,   -13,    -5,  -113,   130,
    -113,    20,  -113,  -113,   -13,  -113,     0,    23,  -113,  -113,
     -12,    -4,  -113,  -113,  -113,  -113,    36,    65,   -13,    49,
    -113,    20,   -13,    69,    77,  -113,   106,    78,    80,  -113,
      81,  -113,   101,  -113,   -13,  -113,    86,   102,   107,   -13,
     133,   139,  -113,    98,   100,   101,  -113,  -113,   176,  -113,
     116,   353,   125,   123,   135,   137,   138,   139,  -113,  -113,
    -113,     1,   169,   187,   188,   189,   190,   353,   353,   179,
     225,   226,   227,    28,   244,   353,  -113,   246,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,   216,  -113,   256,    41,   257,    41,
      41,    41,   378,  -113,   278,  -113,   192,  -113,   258,  -113,
    -113,  -113,  -113,    64,  -113,  -113,    41,  -113,   414,    41,
    -113,   254,  -113,  -113,  -113,    74,   229,   155,   174,   182,
     231,   232,  -113,  -113,   222,  -113,     3,    94,   201,    41,
      41,    41,    41,  -113,    41,    41,    41,    41,    41,    41,
      41,   433,  -113,   223,   263,   264,   260,   265,    41,    41,
    -113,   258,  -113,    92,   441,  -113,  -113,  -113,    95,    95,
    -113,   460,   460,    82,    82,   393,   393,  -113,    41,  -113,
    -113,   353,   353,   228,   235,  -113,  -113,    41,   136,   253,
     303,     9,   271,   441,  -113,   353,   283,   284,  -113,  -113,
     328,  -113,  -113,   285,  -113
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    68,    69,     0,     4,     0,     0,     7,     0,
       9,     0,     1,     3,     0,    29,     0,     0,     6,     8,
      18,     0,    12,    13,     2,    28,     0,     0,    17,     0,
      10,     0,    35,     0,     0,    16,     0,     0,     0,    11,
       0,    34,    39,    14,     0,    36,    19,    24,     0,     0,
       0,     0,    15,     0,     0,    39,    33,    38,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    40,
      44,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    60,    59,    54,
      55,    56,    52,    53,    57,    58,    49,    50,    51,     5,
      20,    22,    21,    23,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    60,     0,    64,     0,    66,     0,    72,
      74,    73,    89,    25,    62,    91,     0,    90,     0,     0,
      47,    60,    32,    30,    43,     0,     0,     0,     0,     0,
       0,     0,    63,    65,    18,    71,     0,     0,     0,     0,
       0,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    26,     0,     0,     0,     0,     0,     0,
      67,     0,    98,     0,    46,    88,    85,    86,    83,    84,
      87,    93,    92,    95,    94,    96,    97,    82,     0,    80,
      81,     0,     0,     0,     0,    70,    99,     0,     0,     0,
       0,     0,     0,    45,    27,     0,     0,     0,    79,    78,
       0,    76,    77,     0,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,     5,  -113,  -113,   288,  -113,   267,  -113,  -112,
     -61,  -113,   286,   236,  -113,     6,   247,  -113,   241,  -113,
    -113,   -76,   -82,   -52,  -113,  -113,   191,     4,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,   -84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     9,    10,    21,    22,    34,    23,
     127,    14,    15,    62,    40,    35,    51,    58,    59,    71,
     173,    85,    86,   113,    88,   116,   117,    36,   146,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      84,   112,   114,   130,     7,    11,   145,    30,    26,    87,
      16,    13,   105,    11,   170,    12,    84,    84,    16,    24,
     208,     2,     3,   135,    84,   137,   138,   139,    20,    28,
     130,   122,   130,   131,    29,    17,   123,   192,    41,   124,
      17,    31,   148,   125,   122,   161,   106,   136,   171,   123,
      52,    84,    37,    84,    60,    56,   125,    38,     1,   195,
       2,     3,    60,   174,    27,   176,   177,   178,   179,   126,
     180,   181,   182,   183,   184,   185,   186,    32,   149,   150,
     151,   152,   126,   118,   193,   194,   149,   150,   151,   152,
     154,   155,   156,   157,   158,   159,   160,   122,   154,   149,
     150,    63,   123,    65,   198,   147,    64,    33,    66,   125,
     107,   154,    42,   203,    45,   199,   200,   130,   130,    43,
     118,   163,    44,    48,    70,    46,    49,    47,   130,   210,
      84,    84,    53,    50,   196,   126,   172,   197,    84,    84,
     149,   150,   151,   152,    84,     8,     2,     3,    54,    84,
      55,    61,   154,   155,   156,   157,   158,   159,   160,   149,
     150,   151,   152,    18,     2,     3,    57,     2,     3,    99,
     100,   154,   155,   156,   157,   158,   159,   160,   149,   150,
     151,   152,   101,   204,   102,   103,   149,   150,   151,   152,
     154,   155,   156,   157,   158,   159,   160,   165,   154,   155,
     156,   157,   158,   159,   160,   149,   150,   151,   152,    68,
       2,     3,   115,     2,     3,   107,   166,   154,   155,   156,
     157,   158,   159,   160,   167,   142,     2,     3,   108,   109,
     110,   111,   149,   150,   151,   152,   119,   120,   121,   149,
     150,   151,   152,   175,   154,   155,   156,   157,   158,   159,
     160,   154,   155,   156,   157,   158,   159,   160,   129,   132,
     133,    72,    73,    74,   134,    72,   144,   162,    29,   188,
     201,   164,   168,   169,   189,   190,    75,   202,   205,   206,
      76,    77,   209,    78,   191,    79,    72,    73,    74,    80,
      81,    82,    83,   192,   211,   212,   214,    19,    39,    69,
      25,    75,    67,   104,     0,    76,    77,   143,    78,   141,
      79,    72,    73,    74,    80,    81,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      76,    77,   207,    78,     0,    79,    72,    73,    74,    80,
      81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,   213,    76,    77,     0,    78,     0,
      79,    72,    73,    74,    80,    81,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      76,    77,     0,    78,     0,    79,    72,    73,    74,    80,
      81,    82,    83,     0,     0,     0,     0,   149,   150,   151,
     152,    75,     0,     0,     0,   140,    77,     0,    78,   154,
      79,     0,   157,   158,    80,    81,    82,    83,   149,   150,
     151,   152,     0,     0,     0,   153,     0,     0,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   149,   150,   151,
     152,     0,     0,     0,   187,   149,   150,   151,   152,   154,
     155,   156,   157,   158,   159,   160,     0,   154,   155,   156,
     157,   158,   159,   160,   149,   150,   151,   152,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,     0,   157,
     158,   159,   160
};

static const yytype_int16 yycheck[] =
{
      61,    77,    78,    85,     0,     1,   118,    11,     8,    61,
       6,     6,    11,     9,    11,     0,    77,    78,    14,    14,
      11,    34,    35,   107,    85,   109,   110,   111,     8,    41,
     112,     3,   114,    85,    46,    40,     8,    28,    32,    11,
      40,    45,   126,    15,     3,   129,    45,   108,    45,     8,
      44,   112,     3,   114,    50,    49,    15,     8,    32,   171,
      34,    35,    58,   147,    41,   149,   150,   151,   152,    41,
     154,   155,   156,   157,   158,   159,   160,    41,     4,     5,
       6,     7,    41,    79,   168,   169,     4,     5,     6,     7,
      16,    17,    18,    19,    20,    21,    22,     3,    16,     4,
       5,     3,     8,     3,   188,    41,     8,    42,     8,    15,
      46,    16,    43,   197,     8,   191,   192,   199,   200,    42,
     116,    47,    45,    42,     8,    47,    45,    47,   210,   205,
     191,   192,    46,    32,    42,    41,    42,    45,   199,   200,
       4,     5,     6,     7,   205,    33,    34,    35,    46,   210,
      43,    12,    16,    17,    18,    19,    20,    21,    22,     4,
       5,     6,     7,    33,    34,    35,    33,    34,    35,    44,
      47,    16,    17,    18,    19,    20,    21,    22,     4,     5,
       6,     7,    47,    47,    47,    47,     4,     5,     6,     7,
      16,    17,    18,    19,    20,    21,    22,    42,    16,    17,
      18,    19,    20,    21,    22,     4,     5,     6,     7,    33,
      34,    35,    33,    34,    35,    46,    42,    16,    17,    18,
      19,    20,    21,    22,    42,    33,    34,    35,    41,    41,
      41,    41,     4,     5,     6,     7,    11,    11,    11,     4,
       5,     6,     7,    42,    16,    17,    18,    19,    20,    21,
      22,    16,    17,    18,    19,    20,    21,    22,    14,    13,
      44,     8,     9,    10,     8,     8,     8,    13,    46,    46,
      42,    42,    41,    41,    11,    11,    23,    42,    25,    26,
      27,    28,    11,    30,    24,    32,     8,     9,    10,    36,
      37,    38,    39,    28,    11,    11,    11,     9,    31,    58,
      14,    23,    55,    67,    -1,    27,    28,   116,    30,    31,
      32,     8,     9,    10,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    28,    -1,    30,    -1,
      32,     8,     9,    10,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    16,
      32,    -1,    19,    20,    36,    37,    38,    39,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,     4,     5,     6,
       7,    -1,    -1,    -1,    11,     4,     5,     6,     7,    16,
      17,    18,    19,    20,    21,    22,    -1,    16,    17,    18,
      19,    20,    21,    22,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    32,    34,    35,    49,    50,    51,    75,    33,    52,
      53,    75,     0,    50,    59,    60,    75,    40,    33,    53,
       8,    54,    55,    57,    50,    60,     8,    41,    41,    46,
      11,    45,    41,    42,    56,    63,    75,     3,     8,    55,
      62,    63,    43,    42,    45,     8,    47,    47,    42,    45,
      32,    64,    63,    46,    46,    43,    63,    33,    65,    66,
      75,    12,    61,     3,     8,     3,     8,    64,    33,    66,
       8,    67,     8,     9,    10,    23,    27,    28,    30,    32,
      36,    37,    38,    39,    58,    69,    70,    71,    72,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    44,
      47,    47,    47,    47,    61,    11,    45,    46,    41,    41,
      41,    41,    69,    71,    69,    33,    73,    74,    75,    11,
      11,    11,     3,     8,    11,    15,    41,    58,    87,    14,
      70,    71,    13,    44,     8,    87,    58,    87,    87,    87,
      27,    31,    33,    74,     8,    57,    76,    41,    87,     4,
       5,     6,     7,    11,    16,    17,    18,    19,    20,    21,
      22,    87,    13,    47,    42,    42,    42,    42,    41,    41,
      11,    45,    42,    68,    87,    42,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    11,    46,    11,
      11,    24,    28,    87,    87,    57,    42,    45,    87,    69,
      69,    42,    42,    87,    47,    25,    26,    29,    11,    11,
      69,    11,    11,    26,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    49,    50,    51,    51,    52,    52,
      53,    54,    54,    55,    55,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    58,    59,    59,
      60,    61,    61,    62,    62,    62,    63,    64,    64,    64,
      65,    65,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    75,    75,
      76,    76,    77,    78,    79,    80,    80,    81,    82,    83,
      84,    85,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     8,     3,     2,     2,     1,
       3,     3,     1,     1,     4,     3,     1,     0,     1,     4,
       7,     7,     7,     7,     4,     1,     4,     7,     2,     1,
       9,     4,     3,     3,     1,     0,     2,     3,     2,     0,
       2,     1,     3,     3,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     2,     2,     1,     3,     1,     1,
       3,     1,     2,     2,     2,    10,     8,     8,     7,     7,
       5,     5,     4,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     4
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
  case 2: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 128 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1544 "y.tab.c"
    break;

  case 3: /* Program: GDeclBlock MainBlock  */
#line 133 "expr_tree.y"
    {

      exit(1);
    }
#line 1553 "y.tab.c"
    break;

  case 4: /* Program: MainBlock  */
#line 138 "expr_tree.y"
    {
      exit(1);
    }
#line 1561 "y.tab.c"
    break;

  case 5: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 146 "expr_tree.y"
    {
  
      // printGST();
      // declare main function
      printf("Generating Assembly Code... \n");
      declareMain();
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-7].integer), "main", NULL, (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;

    
      
      // printInfix($<node>2);

      // codeGen($<node>2, target_file);
      // evaluate($<node>2, identifiers);
      explEnd(target_file);
      printf("Complete \n");

      if(target_file) fclose(target_file);


    
    }
#line 1595 "y.tab.c"
    break;

  case 6: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 180 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 1607 "y.tab.c"
    break;

  case 7: /* GDeclBlock: DECL ENDDECL  */
#line 188 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 1619 "y.tab.c"
    break;

  case 10: /* GDecl: Type GidList SEMICOLON  */
#line 204 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].integer));
    }
#line 1627 "y.tab.c"
    break;

  case 11: /* GidList: GidList ',' Gid  */
#line 211 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 1635 "y.tab.c"
    break;

  case 12: /* GidList: Gid  */
#line 215 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 1643 "y.tab.c"
    break;

  case 13: /* Gid: identifierDecl  */
#line 221 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 1649 "y.tab.c"
    break;

  case 14: /* Gid: ID '(' GParamList ')'  */
#line 223 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), _NONE);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 1660 "y.tab.c"
    break;

  case 15: /* GParamList: GParamList ',' Param  */
#line 233 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1670 "y.tab.c"
    break;

  case 16: /* GParamList: Param  */
#line 239 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1678 "y.tab.c"
    break;

  case 17: /* GParamList: %empty  */
#line 243 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 1686 "y.tab.c"
    break;

  case 18: /* identifierDecl: ID  */
#line 249 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), _NONE);
    }
#line 1694 "y.tab.c"
    break;

  case 19: /* identifierDecl: ID '[' INT ']'  */
#line 253 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), _NONE);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 1704 "y.tab.c"
    break;

  case 20: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 259 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), _NONE);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1715 "y.tab.c"
    break;

  case 21: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 266 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), _NONE);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1727 "y.tab.c"
    break;

  case 22: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 274 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), _NONE);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1739 "y.tab.c"
    break;

  case 23: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 282 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), _NONE);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1751 "y.tab.c"
    break;

  case 24: /* identifierDecl: ID '[' ID ']'  */
#line 290 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), _NONE);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1761 "y.tab.c"
    break;

  case 25: /* identifierUse: ID  */
#line 301 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 1769 "y.tab.c"
    break;

  case 26: /* identifierUse: ID '[' expr ']'  */
#line 305 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 1779 "y.tab.c"
    break;

  case 27: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 311 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1790 "y.tab.c"
    break;

  case 28: /* FDefBlock: FDefBlock FDef  */
#line 326 "expr_tree.y"
      {

      }
#line 1798 "y.tab.c"
    break;

  case 29: /* FDefBlock: FDef  */
#line 330 "expr_tree.y"
      {
      }
#line 1805 "y.tab.c"
    break;

  case 30: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 336 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].integer), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 1815 "y.tab.c"
    break;

  case 31: /* Body: START Slist ReturnStmt END  */
#line 347 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 1824 "y.tab.c"
    break;

  case 32: /* Body: START ReturnStmt END  */
#line 352 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[0].node),NULL);
      (yyval.node) = NULL;
    }
#line 1833 "y.tab.c"
    break;

  case 33: /* ParamList: ParamList ',' Param  */
#line 360 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1844 "y.tab.c"
    break;

  case 34: /* ParamList: Param  */
#line 367 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 1853 "y.tab.c"
    break;

  case 35: /* ParamList: %empty  */
#line 372 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 1861 "y.tab.c"
    break;

  case 36: /* Param: Type ID  */
#line 379 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].integer), (yyvsp[0].string));
  }
#line 1869 "y.tab.c"
    break;

  case 39: /* LDeclBlock: %empty  */
#line 389 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(_NONE);
  }
#line 1877 "y.tab.c"
    break;

  case 42: /* LDecl: Type LIdList SEMICOLON  */
#line 401 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].integer));
    }
#line 1885 "y.tab.c"
    break;

  case 43: /* LIdList: LIdList ',' ID  */
#line 408 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 1894 "y.tab.c"
    break;

  case 44: /* LIdList: ID  */
#line 413 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 1903 "y.tab.c"
    break;

  case 45: /* ArgList: ArgList ',' expr  */
#line 424 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 1912 "y.tab.c"
    break;

  case 46: /* ArgList: expr  */
#line 429 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 1920 "y.tab.c"
    break;

  case 47: /* Slist: Slist Stmt  */
#line 436 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 1926 "y.tab.c"
    break;

  case 48: /* Slist: Stmt  */
#line 437 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 1932 "y.tab.c"
    break;

  case 61: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 456 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 1940 "y.tab.c"
    break;

  case 62: /* ReturnStmt: RETURN SEMICOLON  */
#line 460 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 1948 "y.tab.c"
    break;

  case 67: /* Decl: Type VarList SEMICOLON  */
#line 474 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].integer));
     
    }
#line 1958 "y.tab.c"
    break;

  case 70: /* VarList: VarList ',' identifierDecl  */
#line 485 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 1964 "y.tab.c"
    break;

  case 71: /* VarList: identifierDecl  */
#line 486 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 1970 "y.tab.c"
    break;

  case 72: /* brkStmt: BREAK SEMICOLON  */
#line 490 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 1976 "y.tab.c"
    break;

  case 73: /* contStmt: CONTINUE SEMICOLON  */
#line 493 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 1982 "y.tab.c"
    break;

  case 74: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 496 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 1988 "y.tab.c"
    break;

  case 75: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 499 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 1994 "y.tab.c"
    break;

  case 76: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 500 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2000 "y.tab.c"
    break;

  case 77: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 503 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2006 "y.tab.c"
    break;

  case 78: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 506 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2012 "y.tab.c"
    break;

  case 79: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 509 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2018 "y.tab.c"
    break;

  case 80: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 512 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2024 "y.tab.c"
    break;

  case 81: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 515 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2030 "y.tab.c"
    break;

  case 82: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 518 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2036 "y.tab.c"
    break;

  case 83: /* expr: expr PLUS expr  */
#line 521 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2042 "y.tab.c"
    break;

  case 84: /* expr: expr MINUS expr  */
#line 522 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2048 "y.tab.c"
    break;

  case 85: /* expr: expr MUL expr  */
#line 523 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2054 "y.tab.c"
    break;

  case 86: /* expr: expr DIV expr  */
#line 524 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2060 "y.tab.c"
    break;

  case 87: /* expr: expr MOD expr  */
#line 525 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2066 "y.tab.c"
    break;

  case 88: /* expr: '(' expr ')'  */
#line 526 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2072 "y.tab.c"
    break;

  case 89: /* expr: INT  */
#line 527 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2078 "y.tab.c"
    break;

  case 90: /* expr: identifierUse  */
#line 528 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2084 "y.tab.c"
    break;

  case 91: /* expr: STRING  */
#line 529 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2090 "y.tab.c"
    break;

  case 92: /* expr: expr LT expr  */
#line 530 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2096 "y.tab.c"
    break;

  case 93: /* expr: expr GT expr  */
#line 531 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2102 "y.tab.c"
    break;

  case 94: /* expr: expr LE expr  */
#line 532 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2108 "y.tab.c"
    break;

  case 95: /* expr: expr GE expr  */
#line 533 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2114 "y.tab.c"
    break;

  case 96: /* expr: expr NE expr  */
#line 534 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2120 "y.tab.c"
    break;

  case 97: /* expr: expr EQ expr  */
#line 535 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2126 "y.tab.c"
    break;

  case 98: /* expr: ID '(' ')'  */
#line 536 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2132 "y.tab.c"
    break;

  case 99: /* expr: ID '(' ArgList ')'  */
#line 537 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2138 "y.tab.c"
    break;


#line 2142 "y.tab.c"

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

#line 541 "expr_tree.y"


void yyerror(char const *s)
{
    printf("yyerror %s : %s\n",s, yytext);
}

int main()
{

  FILE * input_file=fopen("input.expl","r");
  target_file = fopen("untranslated_assembly.xsm","w");
  _INIT_STATE = _FALSE;

  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}
