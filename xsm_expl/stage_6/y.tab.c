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


#ifndef _TYPE_TABLE_H
#define _TYPE_TABLE_H
#include "typeTable.h"
#endif

#ifndef _TYPE_TABLE_C
#define _TYPE_TABLE_C
#include "typeTable.c"
#endif


void yyerror(char const *s);
extern FILE* yyin;
extern char * yytext;
FILE * target_file ;
int _INIT_STATE ;

int yylex(void);


#line 150 "y.tab.c"

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
    TYPE = 289,                    /* TYPE  */
    ENDTYPE = 290,                 /* ENDTYPE  */
    BREAK = 291,                   /* BREAK  */
    BREAKPOINT = 292,              /* BREAKPOINT  */
    CONTINUE = 293,                /* CONTINUE  */
    RETURN = 294,                  /* RETURN  */
    MAIN = 295,                    /* MAIN  */
    AND = 296,                     /* AND  */
    OR = 297,                      /* OR  */
    NOT = 298                      /* NOT  */
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
#define TYPE 289
#define ENDTYPE 290
#define BREAK 291
#define BREAKPOINT 292
#define CONTINUE 293
#define RETURN 294
#define MAIN 295
#define AND 296
#define OR 297
#define NOT 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 80 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct Fieldlist * typeField;

#line 297 "y.tab.c"

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
  YYSYMBOL_TYPE = 34,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 35,                   /* ENDTYPE  */
  YYSYMBOL_BREAK = 36,                     /* BREAK  */
  YYSYMBOL_BREAKPOINT = 37,                /* BREAKPOINT  */
  YYSYMBOL_CONTINUE = 38,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_MAIN = 40,                      /* MAIN  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_OR = 42,                        /* OR  */
  YYSYMBOL_NOT = 43,                       /* NOT  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '}'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_Program = 52,                   /* Program  */
  YYSYMBOL_MainBlock = 53,                 /* MainBlock  */
  YYSYMBOL_TypeDefBlock = 54,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 55,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 56,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 57,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 58,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 59,                  /* TypeName  */
  YYSYMBOL_GDeclBlock = 60,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 61,                 /* GDeclList  */
  YYSYMBOL_GDecl = 62,                     /* GDecl  */
  YYSYMBOL_GidList = 63,                   /* GidList  */
  YYSYMBOL_Gid = 64,                       /* Gid  */
  YYSYMBOL_GParamList = 65,                /* GParamList  */
  YYSYMBOL_identifierDecl = 66,            /* identifierDecl  */
  YYSYMBOL_identifierUse = 67,             /* identifierUse  */
  YYSYMBOL_FDefBlock = 68,                 /* FDefBlock  */
  YYSYMBOL_FDef = 69,                      /* FDef  */
  YYSYMBOL_Body = 70,                      /* Body  */
  YYSYMBOL_ParamList = 71,                 /* ParamList  */
  YYSYMBOL_Param = 72,                     /* Param  */
  YYSYMBOL_LDeclBlock = 73,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 74,                  /* LDecList  */
  YYSYMBOL_LDecl = 75,                     /* LDecl  */
  YYSYMBOL_LIdList = 76,                   /* LIdList  */
  YYSYMBOL_ArgList = 77,                   /* ArgList  */
  YYSYMBOL_Slist = 78,                     /* Slist  */
  YYSYMBOL_Stmt = 79,                      /* Stmt  */
  YYSYMBOL_ReturnStmt = 80,                /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 81,                  /* DeclStmt  */
  YYSYMBOL_DeclList = 82,                  /* DeclList  */
  YYSYMBOL_Decl = 83,                      /* Decl  */
  YYSYMBOL_Type = 84,                      /* Type  */
  YYSYMBOL_VarList = 85,                   /* VarList  */
  YYSYMBOL_brkStmt = 86,                   /* brkStmt  */
  YYSYMBOL_contStmt = 87,                  /* contStmt  */
  YYSYMBOL_brkpointStmt = 88,              /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 89,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 90,                 /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 91,                /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 92,               /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 93,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 94,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 95,                   /* AsgStmt  */
  YYSYMBOL_expr = 96                       /* expr  */
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   583

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  240

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      44,    45,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   110,   110,   115,   120,   125,   133,   162,   166,   167,
     171,   178,   183,   187,   194,   198,   206,   217,   218,   222,
     229,   233,   240,   241,   251,   257,   262,   267,   271,   277,
     284,   292,   300,   308,   319,   323,   329,   344,   348,   354,
     365,   370,   378,   385,   391,   397,   405,   406,   408,   415,
     416,   419,   426,   431,   442,   447,   455,   456,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     474,   478,   485,   486,   488,   489,   492,   500,   503,   504,
     508,   511,   514,   517,   518,   521,   524,   527,   530,   533,
     536,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558
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
  "DECL", "ENDDECL", "TYPE", "ENDTYPE", "BREAK", "BREAKPOINT", "CONTINUE",
  "RETURN", "MAIN", "AND", "OR", "NOT", "'('", "')'", "'{'", "'}'", "','",
  "'['", "']'", "$accept", "Program", "MainBlock", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "TypeName",
  "GDeclBlock", "GDeclList", "GDecl", "GidList", "Gid", "GParamList",
  "identifierDecl", "identifierUse", "FDefBlock", "FDef", "Body",
  "ParamList", "Param", "LDeclBlock", "LDecList", "LDecl", "LIdList",
  "ArgList", "Slist", "Stmt", "ReturnStmt", "DeclStmt", "DeclList", "Decl",
  "Type", "VarList", "brkStmt", "contStmt", "brkpointStmt", "Ifstmt",
  "Whilestmt", "RepeatStmt", "DoWhileStmt", "InputStmt", "OutputStmt",
  "AsgStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-134)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      49,  -134,     0,     6,    12,  -134,   -11,    21,    56,  -134,
      74,  -134,    33,    53,     1,  -134,  -134,    21,  -134,    21,
    -134,    -1,    16,  -134,  -134,   -12,     4,  -134,  -134,   110,
    -134,  -134,    21,   112,  -134,  -134,   102,    94,    21,    90,
    -134,    33,  -134,    -2,  -134,   139,  -134,    21,   132,    52,
    -134,   148,   144,   150,  -134,  -134,  -134,   171,    58,  -134,
     155,  -134,    21,  -134,   149,   152,  -134,   163,    21,    97,
     198,  -134,   176,   177,   155,  -134,   203,  -134,   100,  -134,
     493,   165,   168,   169,   174,   175,   198,  -134,    17,  -134,
    -134,   164,   195,   196,   197,   202,   493,   493,   101,   236,
     237,   244,    47,   235,   493,  -134,   243,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,   212,  -134,   252,    51,   261,    51,    51,
      51,   518,  -134,   418,  -134,   108,  -134,   262,  -134,  -134,
    -134,  -134,   137,  -134,  -134,    51,    51,  -134,   338,    51,
    -134,   258,  -134,  -134,  -134,   107,   227,   154,   186,   216,
     229,   230,  -134,  -134,   226,  -134,    23,    41,   554,   246,
      51,    51,    51,    51,  -134,    51,    51,    51,    51,    51,
      51,    51,    51,    51,   365,  -134,   228,   265,   267,   255,
     256,    51,    51,  -134,   262,  -134,    95,   392,  -134,  -134,
    -134,    14,    14,  -134,   561,   561,   238,   238,   210,   210,
     554,   554,  -134,    51,  -134,  -134,   493,   493,   276,   306,
    -134,  -134,    51,   147,   393,   443,    20,   274,   392,  -134,
     493,   275,   278,  -134,  -134,   468,  -134,  -134,   279,  -134
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    77,     0,     0,     0,     5,     0,     0,     0,    16,
       0,    18,     0,     0,     0,     9,     1,     0,     4,     0,
      38,     0,     0,    15,    17,    27,     0,    21,    22,     0,
       7,     8,     0,     0,     3,    37,     0,     0,    26,     0,
      19,     0,    14,     0,    12,     0,     2,    44,     0,     0,
      25,     0,     0,     0,    20,    10,    11,     0,     0,    43,
      48,    23,     0,    45,    28,    33,    13,     0,     0,     0,
       0,    24,     0,     0,    48,    42,     0,    47,     0,    50,
       0,     0,     0,     0,     0,     0,     0,    53,     0,    46,
      49,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    69,    68,    63,    64,
      65,    61,    62,    66,    67,    58,    59,    60,     6,    29,
      31,    30,    32,     0,    51,     0,     0,     0,     0,     0,
       0,     0,    69,     0,    73,     0,    75,     0,    80,    82,
      81,    97,    34,    71,    99,     0,     0,    98,     0,     0,
      56,    69,    41,    39,    52,     0,     0,     0,     0,     0,
       0,     0,    72,    74,    27,    79,     0,     0,   108,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    35,     0,     0,     0,
       0,     0,     0,    76,     0,   109,     0,    55,    96,    93,
      94,    91,    92,    95,   101,   100,   103,   102,   104,   105,
     106,   107,    90,     0,    88,    89,     0,     0,     0,     0,
      78,   110,     0,     0,     0,     0,     0,     0,    54,    36,
       0,     0,     0,    87,    86,     0,    84,    85,     0,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,    85,  -134,  -134,   285,  -134,   257,  -134,   295,
    -134,   292,  -134,   263,  -134,  -133,   -80,   286,    83,   219,
    -134,   115,   232,  -134,   231,  -134,  -134,   -95,   -93,   -17,
    -134,  -134,   172,     3,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -103
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    14,    15,    43,    44,    45,     7,
      10,    11,    26,    27,    49,    28,   147,    19,    20,    81,
      58,    50,    70,    78,    79,    88,   196,   104,   105,   132,
     107,   135,   136,    51,   166,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   148
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     103,   131,   133,     8,   165,    12,    42,    36,     1,    13,
      21,   150,    16,    12,    13,    40,   103,   103,   170,   171,
      33,     2,    21,   155,   103,   157,   158,   159,   124,     1,
     175,   233,    38,     9,   193,    21,    30,    39,   150,    22,
     150,    25,   168,   169,   141,    55,   184,   156,   217,   142,
     141,   103,    41,   103,   141,   142,   144,     1,   143,   142,
      37,   220,   144,   106,   197,   125,   144,   199,   200,   201,
     202,   194,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     2,     1,     3,   145,   146,   195,   151,   218,   219,
     145,   146,    18,    52,   145,   146,    22,    61,    53,    29,
      62,   137,    35,    67,    34,    76,    68,    23,    76,     1,
     223,   170,   171,   172,   173,    35,     1,    46,    42,   228,
      36,   224,   225,   175,   176,   177,   178,   179,   180,   181,
      77,   150,   150,    89,   134,   235,   103,   103,   137,    48,
     221,   162,   150,   222,   103,   103,    47,    57,   182,   183,
     103,   170,   171,   172,   173,   103,    63,   186,   170,   171,
     172,   173,    59,   175,   176,   177,   178,   179,   180,   181,
     175,   176,   177,   178,   179,   180,   181,    71,    60,    82,
      84,   167,    66,    75,    83,    85,   126,    69,   182,   183,
     170,   171,   172,   173,    64,   182,   183,   229,    72,   188,
      65,    73,   175,   176,   177,   178,   179,   180,   181,    74,
      80,    87,   118,   126,   170,   171,   172,   173,   119,   120,
     170,   171,   172,   173,   121,   122,   175,   182,   183,   178,
     179,   189,   175,   176,   177,   178,   179,   180,   181,   127,
     128,   129,   170,   171,   172,   173,   130,   138,   139,   149,
     170,   171,   172,   173,   175,   140,   152,   182,   183,   153,
     154,   190,   175,   176,   177,   178,   179,   180,   181,    91,
     164,   185,   187,   191,   192,    39,   214,   213,   215,   216,
     170,   171,   172,   173,   217,   234,   236,   182,   183,   237,
     239,   198,   175,   176,   177,   178,   179,   180,   181,    31,
      56,    17,    24,    32,    54,   123,    86,   163,     0,    90,
     170,   171,   172,   173,     0,     0,     0,   182,   183,     0,
       0,   226,   175,   176,   177,   178,   179,   180,   181,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,   171,   172,   173,     0,   182,   183,   174,
       0,   227,     0,     0,   175,   176,   177,   178,   179,   180,
     181,     0,     0,     0,     0,     0,     0,     0,     0,   170,
     171,   172,   173,     0,     0,     0,   212,     0,     0,   182,
     183,   175,   176,   177,   178,   179,   180,   181,     0,     0,
       0,     0,     0,     0,     0,     0,   170,   171,   172,   173,
       0,    91,    92,    93,     0,     0,   182,   183,   175,   176,
     177,   178,   179,   180,   181,     0,    94,     0,   230,   231,
      95,    96,     0,    97,     0,    98,    91,    92,    93,    99,
     100,   101,   102,   182,   183,     0,     0,     0,     0,     0,
       0,    94,     0,     0,     0,    95,    96,     0,    97,   161,
      98,    91,    92,    93,    99,   100,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
      95,    96,   232,    97,     0,    98,    91,    92,    93,    99,
     100,   101,   102,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,   238,    95,    96,     0,    97,     0,
      98,    91,    92,    93,    99,   100,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
      95,    96,     0,    97,     0,    98,    91,    92,    93,    99,
     100,   101,   102,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,     0,   160,    96,     0,    97,     0,
      98,     0,     0,     0,    99,   100,   101,   102,   170,   171,
     172,   173,     0,     0,     0,   170,   171,   172,   173,     0,
     175,   176,   177,   178,   179,   180,   181,   175,     0,     0,
     178,   179,   180,   181
};

static const yytype_int16 yycheck[] =
{
      80,    96,    97,     0,   137,     2,     8,     8,     8,     8,
       7,   104,     0,    10,     8,    11,    96,    97,     4,     5,
      17,    32,    19,   126,   104,   128,   129,   130,    11,     8,
      16,    11,    44,    33,    11,    32,    35,    49,   131,    40,
     133,     8,   145,   146,     3,    47,   149,   127,    28,     8,
       3,   131,    48,   133,     3,     8,    15,     8,    11,     8,
      44,   194,    15,    80,   167,    48,    15,   170,   171,   172,
     173,    48,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    32,     8,    34,    43,    44,    45,   104,   191,   192,
      43,    44,     7,     3,    43,    44,    40,    45,     8,    46,
      48,    98,    19,    45,    19,     8,    48,    33,     8,     8,
     213,     4,     5,     6,     7,    32,     8,    32,     8,   222,
       8,   216,   217,    16,    17,    18,    19,    20,    21,    22,
      33,   224,   225,    33,    33,   230,   216,   217,   135,    45,
      45,    33,   235,    48,   224,   225,    44,     8,    41,    42,
     230,     4,     5,     6,     7,   235,     8,    50,     4,     5,
       6,     7,    47,    16,    17,    18,    19,    20,    21,    22,
      16,    17,    18,    19,    20,    21,    22,    62,    46,     3,
       3,    44,    11,    68,     8,     8,    49,    32,    41,    42,
       4,     5,     6,     7,    50,    41,    42,    50,    49,    45,
      50,    49,    16,    17,    18,    19,    20,    21,    22,    46,
      12,     8,    47,    49,     4,     5,     6,     7,    50,    50,
       4,     5,     6,     7,    50,    50,    16,    41,    42,    19,
      20,    45,    16,    17,    18,    19,    20,    21,    22,    44,
      44,    44,     4,     5,     6,     7,    44,    11,    11,    14,
       4,     5,     6,     7,    16,    11,    13,    41,    42,    47,
       8,    45,    16,    17,    18,    19,    20,    21,    22,     8,
       8,    13,    45,    44,    44,    49,    11,    49,    11,    24,
       4,     5,     6,     7,    28,    11,    11,    41,    42,    11,
      11,    45,    16,    17,    18,    19,    20,    21,    22,    14,
      43,     6,    10,    17,    41,    86,    74,   135,    -1,    78,
       4,     5,     6,     7,    -1,    -1,    -1,    41,    42,    -1,
      -1,    45,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,    -1,    41,    42,    11,
      -1,    45,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,    41,
      42,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
      -1,     8,     9,    10,    -1,    -1,    41,    42,    16,    17,
      18,    19,    20,    21,    22,    -1,    23,    -1,    25,    26,
      27,    28,    -1,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    31,
      32,     8,     9,    10,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    28,    -1,    30,    -1,
      32,     8,     9,    10,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    39,     4,     5,
       6,     7,    -1,    -1,    -1,     4,     5,     6,     7,    -1,
      16,    17,    18,    19,    20,    21,    22,    16,    -1,    -1,
      19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    32,    34,    52,    53,    54,    60,    84,    33,
      61,    62,    84,     8,    55,    56,     0,    60,    53,    68,
      69,    84,    40,    33,    62,     8,    63,    64,    66,    46,
      35,    56,    68,    84,    53,    69,     8,    44,    44,    49,
      11,    48,     8,    57,    58,    59,    53,    44,    45,    65,
      72,    84,     3,     8,    64,    47,    58,     8,    71,    72,
      46,    45,    48,     8,    50,    50,    11,    45,    48,    32,
      73,    72,    49,    49,    46,    72,     8,    33,    74,    75,
      12,    70,     3,     8,     3,     8,    73,     8,    76,    33,
      75,     8,     9,    10,    23,    27,    28,    30,    32,    36,
      37,    38,    39,    67,    78,    79,    80,    81,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    47,    50,
      50,    50,    50,    70,    11,    48,    49,    44,    44,    44,
      44,    78,    80,    78,    33,    82,    83,    84,    11,    11,
      11,     3,     8,    11,    15,    43,    44,    67,    96,    14,
      79,    80,    13,    47,     8,    96,    67,    96,    96,    96,
      27,    31,    33,    83,     8,    66,    85,    44,    96,    96,
       4,     5,     6,     7,    11,    16,    17,    18,    19,    20,
      21,    22,    41,    42,    96,    13,    50,    45,    45,    45,
      45,    44,    44,    11,    48,    45,    77,    96,    45,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    11,    49,    11,    11,    24,    28,    96,    96,
      66,    45,    48,    96,    78,    78,    45,    45,    96,    50,
      25,    26,    29,    11,    11,    78,    11,    11,    26,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    53,    54,    55,    55,
      56,    57,    57,    58,    59,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    65,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    68,    68,    69,
      70,    70,    71,    71,    71,    72,    73,    73,    73,    74,
      74,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    84,    85,    85,
      86,    87,    88,    89,    89,    90,    91,    92,    93,    94,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     1,     8,     3,     2,     1,
       4,     2,     1,     3,     1,     3,     2,     2,     1,     3,
       3,     1,     1,     4,     3,     1,     0,     1,     4,     7,
       7,     7,     7,     4,     1,     4,     7,     2,     1,     9,
       4,     3,     3,     1,     0,     2,     3,     2,     0,     2,
       1,     3,     3,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     2,     2,     1,     3,     1,     3,     1,
       2,     2,     2,    10,     8,     8,     7,     7,     5,     5,
       4,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       4
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
  case 2: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 111 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1604 "y.tab.c"
    break;

  case 3: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 116 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1613 "y.tab.c"
    break;

  case 4: /* Program: GDeclBlock MainBlock  */
#line 121 "expr_tree.y"
    {

      exit(1);
    }
#line 1622 "y.tab.c"
    break;

  case 5: /* Program: MainBlock  */
#line 126 "expr_tree.y"
    {
      exit(1);
    }
#line 1630 "y.tab.c"
    break;

  case 6: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 134 "expr_tree.y"
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
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-7].string), "main", NULL, (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;

    
      explEnd(target_file);
      printf("Complete \n");

      if(target_file) fclose(target_file);


    
    }
#line 1659 "y.tab.c"
    break;

  case 10: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 172 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 1667 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 179 "expr_tree.y"
    {
      (yyvsp[-1].typeField)->next = (yyvsp[0].typeField);
      (yyval.typeField) = (yyvsp[-1].typeField);
    }
#line 1676 "y.tab.c"
    break;

  case 13: /* FieldDecl: TypeName ID SEMICOLON  */
#line 188 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1684 "y.tab.c"
    break;

  case 15: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 199 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 1696 "y.tab.c"
    break;

  case 16: /* GDeclBlock: DECL ENDDECL  */
#line 207 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 1708 "y.tab.c"
    break;

  case 19: /* GDecl: Type GidList SEMICOLON  */
#line 223 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 1716 "y.tab.c"
    break;

  case 20: /* GidList: GidList ',' Gid  */
#line 230 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 1724 "y.tab.c"
    break;

  case 21: /* GidList: Gid  */
#line 234 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 1732 "y.tab.c"
    break;

  case 22: /* Gid: identifierDecl  */
#line 240 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 1738 "y.tab.c"
    break;

  case 23: /* Gid: ID '(' GParamList ')'  */
#line 242 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 1749 "y.tab.c"
    break;

  case 24: /* GParamList: GParamList ',' Param  */
#line 252 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1759 "y.tab.c"
    break;

  case 25: /* GParamList: Param  */
#line 258 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1767 "y.tab.c"
    break;

  case 26: /* GParamList: %empty  */
#line 262 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 1775 "y.tab.c"
    break;

  case 27: /* identifierDecl: ID  */
#line 268 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 1783 "y.tab.c"
    break;

  case 28: /* identifierDecl: ID '[' INT ']'  */
#line 272 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 1793 "y.tab.c"
    break;

  case 29: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 278 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1804 "y.tab.c"
    break;

  case 30: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 285 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1816 "y.tab.c"
    break;

  case 31: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 293 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1828 "y.tab.c"
    break;

  case 32: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 301 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1840 "y.tab.c"
    break;

  case 33: /* identifierDecl: ID '[' ID ']'  */
#line 309 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1850 "y.tab.c"
    break;

  case 34: /* identifierUse: ID  */
#line 320 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 1858 "y.tab.c"
    break;

  case 35: /* identifierUse: ID '[' expr ']'  */
#line 324 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 1868 "y.tab.c"
    break;

  case 36: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 330 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1879 "y.tab.c"
    break;

  case 37: /* FDefBlock: FDefBlock FDef  */
#line 345 "expr_tree.y"
      {

      }
#line 1887 "y.tab.c"
    break;

  case 38: /* FDefBlock: FDef  */
#line 349 "expr_tree.y"
      {
      }
#line 1894 "y.tab.c"
    break;

  case 39: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 355 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 1904 "y.tab.c"
    break;

  case 40: /* Body: START Slist ReturnStmt END  */
#line 366 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 1913 "y.tab.c"
    break;

  case 41: /* Body: START ReturnStmt END  */
#line 371 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[0].node),NULL);
      (yyval.node) = NULL;
    }
#line 1922 "y.tab.c"
    break;

  case 42: /* ParamList: ParamList ',' Param  */
#line 379 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1933 "y.tab.c"
    break;

  case 43: /* ParamList: Param  */
#line 386 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 1942 "y.tab.c"
    break;

  case 44: /* ParamList: %empty  */
#line 391 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 1950 "y.tab.c"
    break;

  case 45: /* Param: Type ID  */
#line 398 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 1958 "y.tab.c"
    break;

  case 48: /* LDeclBlock: %empty  */
#line 408 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL);
  }
#line 1966 "y.tab.c"
    break;

  case 51: /* LDecl: ID LIdList SEMICOLON  */
#line 420 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 1974 "y.tab.c"
    break;

  case 52: /* LIdList: LIdList ',' ID  */
#line 427 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 1983 "y.tab.c"
    break;

  case 53: /* LIdList: ID  */
#line 432 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 1992 "y.tab.c"
    break;

  case 54: /* ArgList: ArgList ',' expr  */
#line 443 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2001 "y.tab.c"
    break;

  case 55: /* ArgList: expr  */
#line 448 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2009 "y.tab.c"
    break;

  case 56: /* Slist: Slist Stmt  */
#line 455 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2015 "y.tab.c"
    break;

  case 57: /* Slist: Stmt  */
#line 456 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2021 "y.tab.c"
    break;

  case 70: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 475 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2029 "y.tab.c"
    break;

  case 71: /* ReturnStmt: RETURN SEMICOLON  */
#line 479 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2037 "y.tab.c"
    break;

  case 76: /* Decl: Type VarList SEMICOLON  */
#line 493 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
     
    }
#line 2047 "y.tab.c"
    break;

  case 78: /* VarList: VarList ',' identifierDecl  */
#line 503 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2053 "y.tab.c"
    break;

  case 79: /* VarList: identifierDecl  */
#line 504 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2059 "y.tab.c"
    break;

  case 80: /* brkStmt: BREAK SEMICOLON  */
#line 508 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2065 "y.tab.c"
    break;

  case 81: /* contStmt: CONTINUE SEMICOLON  */
#line 511 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2071 "y.tab.c"
    break;

  case 82: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 514 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2077 "y.tab.c"
    break;

  case 83: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 517 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2083 "y.tab.c"
    break;

  case 84: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 518 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2089 "y.tab.c"
    break;

  case 85: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 521 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2095 "y.tab.c"
    break;

  case 86: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 524 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2101 "y.tab.c"
    break;

  case 87: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 527 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2107 "y.tab.c"
    break;

  case 88: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 530 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2113 "y.tab.c"
    break;

  case 89: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 533 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2119 "y.tab.c"
    break;

  case 90: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 536 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2125 "y.tab.c"
    break;

  case 91: /* expr: expr PLUS expr  */
#line 539 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2131 "y.tab.c"
    break;

  case 92: /* expr: expr MINUS expr  */
#line 540 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2137 "y.tab.c"
    break;

  case 93: /* expr: expr MUL expr  */
#line 541 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2143 "y.tab.c"
    break;

  case 94: /* expr: expr DIV expr  */
#line 542 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2149 "y.tab.c"
    break;

  case 95: /* expr: expr MOD expr  */
#line 543 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2155 "y.tab.c"
    break;

  case 96: /* expr: '(' expr ')'  */
#line 544 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2161 "y.tab.c"
    break;

  case 97: /* expr: INT  */
#line 545 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2167 "y.tab.c"
    break;

  case 98: /* expr: identifierUse  */
#line 546 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2173 "y.tab.c"
    break;

  case 99: /* expr: STRING  */
#line 547 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2179 "y.tab.c"
    break;

  case 100: /* expr: expr LT expr  */
#line 548 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2185 "y.tab.c"
    break;

  case 101: /* expr: expr GT expr  */
#line 549 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2191 "y.tab.c"
    break;

  case 102: /* expr: expr LE expr  */
#line 550 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2197 "y.tab.c"
    break;

  case 103: /* expr: expr GE expr  */
#line 551 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2203 "y.tab.c"
    break;

  case 104: /* expr: expr NE expr  */
#line 552 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2209 "y.tab.c"
    break;

  case 105: /* expr: expr EQ expr  */
#line 553 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2215 "y.tab.c"
    break;

  case 106: /* expr: expr AND expr  */
#line 554 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2221 "y.tab.c"
    break;

  case 107: /* expr: expr OR expr  */
#line 555 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2227 "y.tab.c"
    break;

  case 108: /* expr: NOT expr  */
#line 556 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2233 "y.tab.c"
    break;

  case 109: /* expr: ID '(' ')'  */
#line 557 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2239 "y.tab.c"
    break;

  case 110: /* expr: ID '(' ArgList ')'  */
#line 558 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2245 "y.tab.c"
    break;


#line 2249 "y.tab.c"

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

#line 562 "expr_tree.y"


void yyerror(char const *s)
{
    printf("yyerror %s : %s\n",s, yytext);
}

int main()
{

  FILE * input_file=fopen("input.expl","r");
  target_file = fopen("untranslated_assembly.xsm","w");
  // Initializing Type Table
  typeTableCreate();
  _INIT_STATE = _FALSE;

  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}
