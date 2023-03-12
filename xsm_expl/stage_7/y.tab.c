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

#ifndef _CLASS_H
#define _CLASS_H
#include "class.h"
#endif

#ifndef _CLASS_C
#define _CLASS_C
#include "class.c"
#endif



void yyerror(char const *s);
extern FILE* yyin;
extern char * yytext;
extern int yylineno; 
FILE * target_file ;
int _INIT_STATE ;

int yylex(void);


#line 162 "y.tab.c"

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
    INITIALIZE = 296,              /* INITIALIZE  */
    ALLOC = 297,                   /* ALLOC  */
    FREE = 298,                    /* FREE  */
    NULLVAL = 299,                 /* NULLVAL  */
    CLASS = 300,                   /* CLASS  */
    ENDCLASS = 301,                /* ENDCLASS  */
    EXTENDS = 302,                 /* EXTENDS  */
    NEW = 303,                     /* NEW  */
    DELETE = 304,                  /* DELETE  */
    SELF = 305,                    /* SELF  */
    AND = 306,                     /* AND  */
    OR = 307,                      /* OR  */
    NOT = 308                      /* NOT  */
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
#define INITIALIZE 296
#define ALLOC 297
#define FREE 298
#define NULLVAL 299
#define CLASS 300
#define ENDCLASS 301
#define EXTENDS 302
#define NEW 303
#define DELETE 304
#define SELF 305
#define AND 306
#define OR 307
#define NOT 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 92 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct FieldList * typeField;

#line 329 "y.tab.c"

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
  YYSYMBOL_INITIALIZE = 41,                /* INITIALIZE  */
  YYSYMBOL_ALLOC = 42,                     /* ALLOC  */
  YYSYMBOL_FREE = 43,                      /* FREE  */
  YYSYMBOL_NULLVAL = 44,                   /* NULLVAL  */
  YYSYMBOL_CLASS = 45,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 46,                  /* ENDCLASS  */
  YYSYMBOL_EXTENDS = 47,                   /* EXTENDS  */
  YYSYMBOL_NEW = 48,                       /* NEW  */
  YYSYMBOL_DELETE = 49,                    /* DELETE  */
  YYSYMBOL_SELF = 50,                      /* SELF  */
  YYSYMBOL_AND = 51,                       /* AND  */
  YYSYMBOL_OR = 52,                        /* OR  */
  YYSYMBOL_NOT = 53,                       /* NOT  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_ = 56,                       /* '{'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_60_ = 60,                       /* '['  */
  YYSYMBOL_61_ = 61,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_Program = 63,                   /* Program  */
  YYSYMBOL_MainBlock = 64,                 /* MainBlock  */
  YYSYMBOL_ClassDefBlock = 65,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 66,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 67,                  /* ClassDef  */
  YYSYMBOL_ClassName = 68,                 /* ClassName  */
  YYSYMBOL_ClassFieldLists = 69,           /* ClassFieldLists  */
  YYSYMBOL_ClassFieldDecl = 70,            /* ClassFieldDecl  */
  YYSYMBOL_ClassMethodDeclList = 71,       /* ClassMethodDeclList  */
  YYSYMBOL_ClassMethodDecl = 72,           /* ClassMethodDecl  */
  YYSYMBOL_ClassParamList = 73,            /* ClassParamList  */
  YYSYMBOL_ClassMethodDefns = 74,          /* ClassMethodDefns  */
  YYSYMBOL_ClassFunctionDef = 75,          /* ClassFunctionDef  */
  YYSYMBOL_ClassFunctionBody = 76,         /* ClassFunctionBody  */
  YYSYMBOL_ClassField = 77,                /* ClassField  */
  YYSYMBOL_ClassFieldFunction = 78,        /* ClassFieldFunction  */
  YYSYMBOL_ClassArgList = 79,              /* ClassArgList  */
  YYSYMBOL_TypeDefBlock = 80,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 81,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 82,                   /* TypeDef  */
  YYSYMBOL_TypeFieldDeclList = 83,         /* TypeFieldDeclList  */
  YYSYMBOL_TypeFieldDecl = 84,             /* TypeFieldDecl  */
  YYSYMBOL_TypeField = 85,                 /* TypeField  */
  YYSYMBOL_GDeclBlock = 86,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 87,                 /* GDeclList  */
  YYSYMBOL_GDecl = 88,                     /* GDecl  */
  YYSYMBOL_GidList = 89,                   /* GidList  */
  YYSYMBOL_Gid = 90,                       /* Gid  */
  YYSYMBOL_GParamList = 91,                /* GParamList  */
  YYSYMBOL_identifierDecl = 92,            /* identifierDecl  */
  YYSYMBOL_identifierUse = 93,             /* identifierUse  */
  YYSYMBOL_FDefBlock = 94,                 /* FDefBlock  */
  YYSYMBOL_FDef = 95,                      /* FDef  */
  YYSYMBOL_Body = 96,                      /* Body  */
  YYSYMBOL_ParamList = 97,                 /* ParamList  */
  YYSYMBOL_Param = 98,                     /* Param  */
  YYSYMBOL_LDeclBlock = 99,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 100,                 /* LDecList  */
  YYSYMBOL_LDecl = 101,                    /* LDecl  */
  YYSYMBOL_LIdList = 102,                  /* LIdList  */
  YYSYMBOL_ArgList = 103,                  /* ArgList  */
  YYSYMBOL_Slist = 104,                    /* Slist  */
  YYSYMBOL_Stmt = 105,                     /* Stmt  */
  YYSYMBOL_ClassDeleteStmt = 106,          /* ClassDeleteStmt  */
  YYSYMBOL_ReturnStmt = 107,               /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 108,                 /* DeclStmt  */
  YYSYMBOL_DeclList = 109,                 /* DeclList  */
  YYSYMBOL_Decl = 110,                     /* Decl  */
  YYSYMBOL_Type = 111,                     /* Type  */
  YYSYMBOL_VarList = 112,                  /* VarList  */
  YYSYMBOL_brkStmt = 113,                  /* brkStmt  */
  YYSYMBOL_contStmt = 114,                 /* contStmt  */
  YYSYMBOL_brkpointStmt = 115,             /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 116,                   /* Ifstmt  */
  YYSYMBOL_Whilestmt = 117,                /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 118,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 119,              /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 120,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 121,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 122,                  /* AsgStmt  */
  YYSYMBOL_expr = 123                      /* expr  */
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
#define YYLAST   786

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      54,    55,     2,     2,    58,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   124,   124,   128,   133,   138,   143,   148,   153,   158,
     166,   196,   199,   203,   210,   221,   226,   234,   239,   246,
     254,   258,   265,   275,   281,   286,   292,   297,   305,   315,
     320,   334,   358,   367,   368,   369,   373,   374,   378,   382,
     383,   387,   394,   399,   406,   415,   421,   470,   478,   489,
     490,   494,   501,   505,   512,   513,   523,   529,   534,   539,
     543,   549,   556,   564,   572,   580,   591,   595,   601,   608,
     609,   610,   614,   618,   622,   626,   634,   638,   644,   655,
     660,   668,   675,   681,   687,   695,   696,   701,   708,   709,
     712,   719,   724,   735,   740,   748,   749,   753,   754,   755,
     756,   757,   758,   759,   760,   761,   762,   763,   764,   765,
     769,   773,   777,   784,   785,   787,   788,   791,   799,   802,
     803,   807,   810,   813,   816,   817,   820,   823,   826,   829,
     832,   835,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     856,   857,   858
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
  "RETURN", "MAIN", "INITIALIZE", "ALLOC", "FREE", "NULLVAL", "CLASS",
  "ENDCLASS", "EXTENDS", "NEW", "DELETE", "SELF", "AND", "OR", "NOT",
  "'('", "')'", "'{'", "'}'", "','", "'.'", "'['", "']'", "$accept",
  "Program", "MainBlock", "ClassDefBlock", "ClassDefList", "ClassDef",
  "ClassName", "ClassFieldLists", "ClassFieldDecl", "ClassMethodDeclList",
  "ClassMethodDecl", "ClassParamList", "ClassMethodDefns",
  "ClassFunctionDef", "ClassFunctionBody", "ClassField",
  "ClassFieldFunction", "ClassArgList", "TypeDefBlock", "TypeDefList",
  "TypeDef", "TypeFieldDeclList", "TypeFieldDecl", "TypeField",
  "GDeclBlock", "GDeclList", "GDecl", "GidList", "Gid", "GParamList",
  "identifierDecl", "identifierUse", "FDefBlock", "FDef", "Body",
  "ParamList", "Param", "LDeclBlock", "LDecList", "LDecl", "LIdList",
  "ArgList", "Slist", "Stmt", "ClassDeleteStmt", "ReturnStmt", "DeclStmt",
  "DeclList", "Decl", "Type", "VarList", "brkStmt", "contStmt",
  "brkpointStmt", "Ifstmt", "Whilestmt", "RepeatStmt", "DoWhileStmt",
  "InputStmt", "OutputStmt", "AsgStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-173)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,  -173,    24,    42,    54,  -173,    69,    48,     2,  -173,
      90,  -173,    64,    46,    55,  -173,  -173,   101,  -173,   107,
      48,    48,  -173,    28,  -173,    48,    87,  -173,  -173,   127,
       8,  -173,  -173,    48,  -173,  -173,   110,    12,  -173,   115,
      48,  -173,    48,  -173,  -173,   149,  -173,   141,    48,    43,
    -173,    64,    -4,  -173,   181,   196,  -173,  -173,   180,    48,
     205,  -173,    48,   158,    67,  -173,   214,   165,   177,  -173,
    -173,  -173,   235,  -173,    48,  -173,   118,  -173,   217,  -173,
      48,  -173,   191,   193,  -173,    48,  -173,   242,   198,    48,
      91,   243,  -173,   103,   134,  -173,    95,  -173,   248,   247,
     217,  -173,   252,  -173,   105,  -173,   688,   208,   206,   210,
     211,   219,    48,  -173,   258,    38,  -173,   243,  -173,    13,
    -173,  -173,   135,   215,   227,   228,   233,   688,   688,   139,
     295,   296,   297,   399,   255,   256,   257,   259,   267,   253,
     263,  -173,   266,   312,   688,  -173,  -173,   315,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,    10,  -173,   321,   278,    48,   276,
    -173,   327,   328,   436,   119,   436,   436,   436,   724,  -173,
     580,  -173,   155,  -173,   329,  -173,  -173,  -173,  -173,   120,
    -173,  -173,  -173,   436,   436,  -173,   487,   283,   284,   436,
     332,   291,   339,   340,   343,   436,  -173,   333,  -173,  -173,
    -173,   311,   142,  -173,  -173,  -173,   313,     9,   317,   272,
     279,   298,   334,   337,  -173,  -173,   292,  -173,    23,   220,
     764,   338,   436,   436,   436,   436,  -173,   436,   436,   436,
     436,   436,   436,   436,   436,   436,  -173,  -173,   357,   341,
     307,   -38,   344,   345,  -173,   506,  -173,    48,   376,    48,
     436,   335,   381,   383,   373,   372,   436,   436,  -173,   329,
    -173,   163,   514,  -173,  -173,  -173,   154,   154,  -173,   453,
     453,   236,   236,   186,   186,   764,   764,  -173,   390,   395,
     393,   397,   436,   436,  -173,   169,  -173,  -173,   175,   514,
     436,  -173,  -173,   688,   688,   364,   416,  -173,  -173,   436,
    -173,  -173,  -173,  -173,   189,   190,   350,  -173,   436,   114,
     544,   616,    80,   400,   514,  -173,  -173,   217,   514,  -173,
     688,   402,   406,  -173,  -173,   412,   652,  -173,  -173,   688,
     361,   414,   688,   413,  -173,  -173,   415,  -173,  -173
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   118,     0,     0,     0,     9,     0,     0,     0,    48,
       0,    50,     0,     0,     0,    40,     1,     0,     6,     0,
       0,     0,    77,     0,     8,     0,     0,    47,    49,    59,
       0,    53,    54,     0,    38,    39,    15,     0,    13,     0,
       0,     4,     0,     5,    76,     0,     7,     0,    58,     0,
      51,     0,     0,    43,     0,     0,    11,    12,     0,     0,
       0,     3,    83,     0,     0,    57,     0,     0,     0,    52,
      41,    42,     0,    16,     0,     2,     0,    82,    87,    55,
       0,    84,    60,    65,    44,     0,    18,     0,     0,     0,
       0,     0,    56,     0,     0,    17,     0,    21,     0,     0,
      87,    81,     0,    86,     0,    89,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,    19,     0,    92,     0,
      85,    88,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    75,    69,     0,     0,    96,   109,   108,   107,   102,
     103,   104,   100,   101,   105,   106,    97,    98,    99,    10,
      61,    63,    62,    64,     0,    27,     0,     0,    25,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,   114,     0,   116,     0,   121,   123,   122,   138,    66,
     112,   140,   152,     0,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,   108,    80,    14,
      26,     0,     0,    24,    78,    91,    46,     0,     0,     0,
       0,     0,     0,     0,   113,   115,    59,   120,     0,     0,
     149,     0,     0,     0,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,     0,     0,
       0,     0,    31,    32,    45,     0,    79,    83,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,   117,     0,
     150,     0,    94,   137,   134,   135,   132,   133,   136,   142,
     141,   144,   143,   145,   146,   147,   148,    73,     0,     0,
       0,     0,     0,     0,   131,     0,    22,    23,     0,    37,
       0,   129,   130,     0,     0,     0,     0,   119,   151,     0,
      74,    31,   110,    32,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,    93,    33,    35,    87,    36,    68,
       0,     0,     0,   128,   127,     0,     0,   125,   126,     0,
       0,     0,     0,   108,    28,   124,   108,    30,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,    58,  -173,  -173,   392,  -173,  -173,   342,  -173,
     349,  -173,  -173,   282,  -173,   229,  -173,   -84,  -173,  -173,
     417,  -173,   396,  -173,    88,  -173,   440,  -173,   403,  -173,
    -172,  -105,    75,    34,   346,   199,   -42,   -95,  -173,   351,
    -173,  -173,  -120,  -135,  -173,  -103,  -173,  -173,   280,     0,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,   -89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,    19,    37,    38,    39,    85,    86,    96,
      97,   212,   164,   165,   340,   140,   141,   298,     6,    14,
      15,    52,    53,   142,     7,    10,    11,    30,    31,    64,
      32,   195,    21,    22,   107,    76,    77,    91,   104,   105,
     119,   271,   144,   145,   146,   179,   148,   182,   183,    23,
     228,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   299
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,   143,    12,   147,     1,   117,    65,   178,   180,   206,
      12,     1,   227,   232,   233,   234,   235,   290,     1,    50,
      36,   291,   143,   143,   170,   237,   238,   239,   240,   241,
     242,   243,     1,    54,   268,     2,    45,     3,    92,   143,
      60,   207,    26,   206,   196,   206,    67,   101,    66,   116,
      13,    68,    54,    70,    16,    44,     1,     9,    56,    44,
     244,   245,    66,    13,    18,    24,    51,   209,    26,   218,
     261,   171,    29,   143,    87,   143,    44,     1,    41,    43,
      66,   269,    25,    46,   217,    98,   219,   220,   221,    66,
      34,   333,   168,    44,    20,    42,   114,   307,     1,   102,
      61,     2,    33,     1,   230,   231,   108,    40,   304,    36,
     248,   109,   166,   102,    17,    59,   255,    75,   232,   233,
     234,   235,    79,    27,   103,    80,   213,   122,   112,   184,
     237,   238,   239,   240,   241,   242,   243,   110,   120,     2,
     272,    47,   111,   274,   275,   276,   277,     1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,    55,   232,   233,
     134,   135,   136,     1,   166,   244,   245,   137,    66,   139,
     237,    58,   181,    88,   229,   329,    89,   305,   306,   172,
     173,    48,   184,   320,   321,   206,   206,    49,   224,    72,
     232,   233,   234,   235,   172,   173,    63,   258,   143,   143,
     259,   206,   237,    62,    73,   240,   241,   206,   314,   315,
     336,   319,    74,    45,    78,   143,   143,   297,   308,   342,
     324,   309,    81,   188,   316,   143,    82,    89,   189,   328,
     317,   143,   335,   318,   143,   191,   343,   143,    83,   346,
     232,   233,   234,   235,   325,   326,    84,   318,   318,    90,
      99,    93,   237,    94,   100,   106,   115,    66,   116,    66,
     118,   134,   135,   136,   192,   159,   167,   160,   137,   174,
     139,   161,   162,   193,   194,   270,   232,   233,   234,   235,
     163,   175,   176,   232,   233,   234,   235,   177,   237,   238,
     239,   240,   241,   242,   243,   237,   238,   239,   240,   241,
     242,   243,   232,   233,   234,   235,   185,   186,   187,   197,
     198,   199,   202,   200,   237,   238,   239,   240,   241,   242,
     243,   201,   203,   244,   245,   204,   205,   263,   208,   211,
     244,   245,   168,   214,   264,   215,   216,   226,   246,   247,
     249,   250,   232,   233,   234,   235,   256,   252,   253,   244,
     245,   254,    49,   265,   237,   238,   239,   240,   241,   242,
     243,   232,   233,   234,   235,   257,   289,   260,   232,   233,
     234,   235,   262,   237,   238,   239,   240,   241,   242,   243,
     237,   238,   239,   240,   241,   242,   243,   296,   266,   244,
     245,   267,   301,   273,   302,   300,   288,   303,   292,   293,
     304,   310,   188,   311,   312,   313,   327,   189,   244,   245,
     190,   334,   287,   337,   191,   244,   245,   338,   344,   322,
     232,   233,   234,   235,   339,   345,   347,    95,   348,    57,
     251,    35,   237,   238,   239,   240,   241,   242,   243,   188,
     134,   135,   136,   192,   189,   113,   210,   137,    71,   139,
      28,   191,   193,   194,    69,   121,   295,   232,   233,   234,
     235,     0,   225,   169,     0,     0,     0,   244,   245,   237,
       0,   323,   240,   241,   242,   243,     0,   134,   135,   136,
     192,     0,     0,     0,   137,     0,   139,     0,     0,   193,
     194,   232,   233,   234,   235,     0,     0,     0,   236,     0,
       0,     0,     0,   237,   238,   239,   240,   241,   242,   243,
     232,   233,   234,   235,     0,     0,     0,   294,   232,   233,
     234,   235,   237,   238,   239,   240,   241,   242,   243,     0,
     237,   238,   239,   240,   241,   242,   243,     0,   244,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,   124,     0,     0,   244,   245,     0,
       0,     0,     0,     0,     0,   244,   245,   125,     0,   330,
     331,   126,   127,     0,   128,     0,   129,     0,     0,     0,
     130,   131,   132,   133,     0,   134,   135,   136,   122,   123,
     124,     0,   137,   138,   139,     0,     0,     0,     0,     0,
       0,     0,     0,   125,     0,     0,     0,   126,   127,     0,
     128,   223,   129,     0,     0,     0,   130,   131,   132,   133,
       0,   134,   135,   136,   122,   123,   124,     0,   137,   138,
     139,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,   126,   127,   332,   128,     0,   129,     0,
       0,     0,   130,   131,   132,   133,     0,   134,   135,   136,
     122,   123,   124,     0,   137,   138,   139,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,   341,   126,
     127,     0,   128,     0,   129,     0,     0,     0,   130,   131,
     132,   133,     0,   134,   135,   136,   122,   123,   124,     0,
     137,   138,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,     0,   126,   127,     0,   128,     0,
     129,     0,     0,     0,   130,   131,   132,   133,     0,   134,
     135,   136,   122,   123,   124,     0,   137,   138,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,   222,   127,     0,   128,     0,   129,     0,     0,     0,
     130,   131,   132,   133,     0,   134,   135,   136,   232,   233,
     234,   235,   137,   138,   139,     0,     0,     0,     0,     0,
     237,   238,   239,   240,   241,   242,   243
};

static const yytype_int16 yycheck[] =
{
       0,   106,     2,   106,     8,   100,    48,   127,   128,   144,
      10,     8,   184,     4,     5,     6,     7,    55,     8,    11,
       8,    59,   127,   128,    11,    16,    17,    18,    19,    20,
      21,    22,     8,    33,    11,    32,     8,    34,    80,   144,
      40,   144,    40,   178,   133,   180,     3,    89,    48,    11,
       8,     8,    52,    57,     0,    21,     8,    33,    46,    25,
      51,    52,    62,     8,     6,     7,    58,    57,    40,   174,
      61,    58,     8,   178,    74,   180,    42,     8,    20,    21,
      80,    58,     7,    25,   173,    85,   175,   176,   177,    89,
      35,    11,    54,    59,     6,    20,    96,   269,     8,     8,
      42,    32,    56,     8,   193,   194,     3,    19,    28,     8,
     199,     8,   112,     8,    45,    40,   205,    59,     4,     5,
       6,     7,    55,    33,    33,    58,   168,     8,    33,   129,
      16,    17,    18,    19,    20,    21,    22,     3,    33,    32,
     229,    54,     8,   232,   233,   234,   235,     8,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    47,     4,     5,
      41,    42,    43,     8,   164,    51,    52,    48,   168,    50,
      16,    56,    33,    55,    54,    61,    58,   266,   267,    59,
      60,    54,   182,   303,   304,   320,   321,    60,    33,     8,
       4,     5,     6,     7,    59,    60,    55,    55,   303,   304,
      58,   336,    16,    54,     8,    19,    20,   342,   292,   293,
     330,   300,    32,     8,    56,   320,   321,   259,    55,   339,
     309,    58,     8,     3,    55,   330,    61,    58,     8,   318,
      55,   336,   327,    58,   339,    15,   339,   342,    61,   342,
       4,     5,     6,     7,    55,    55,    11,    58,    58,    32,
       8,    60,    16,    60,    56,    12,     8,   257,    11,   259,
       8,    41,    42,    43,    44,    57,     8,    61,    48,    54,
      50,    61,    61,    53,    54,    55,     4,     5,     6,     7,
      61,    54,    54,     4,     5,     6,     7,    54,    16,    17,
      18,    19,    20,    21,    22,    16,    17,    18,    19,    20,
      21,    22,     4,     5,     6,     7,    11,    11,    11,    54,
      54,    54,    59,    54,    16,    17,    18,    19,    20,    21,
      22,    54,    59,    51,    52,    59,    14,    55,    13,     8,
      51,    52,    54,    57,    55,     8,     8,     8,    55,    55,
       8,    50,     4,     5,     6,     7,    13,     8,     8,    51,
      52,     8,    60,    55,    16,    17,    18,    19,    20,    21,
      22,     4,     5,     6,     7,    54,    59,    54,     4,     5,
       6,     7,    55,    16,    17,    18,    19,    20,    21,    22,
      16,    17,    18,    19,    20,    21,    22,    11,    54,    51,
      52,    54,    11,    55,    11,    60,    55,    24,    54,    54,
      28,    11,     3,     8,    11,     8,    56,     8,    51,    52,
      11,    11,    55,    11,    15,    51,    52,    11,    57,    55,
       4,     5,     6,     7,    12,    11,    13,    85,    13,    37,
     201,    14,    16,    17,    18,    19,    20,    21,    22,     3,
      41,    42,    43,    44,     8,    96,   164,    48,    52,    50,
      10,    15,    53,    54,    51,   104,   257,     4,     5,     6,
       7,    -1,   182,   117,    -1,    -1,    -1,    51,    52,    16,
      -1,    55,    19,    20,    21,    22,    -1,    41,    42,    43,
      44,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    53,
      54,     4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
       4,     5,     6,     7,    -1,    -1,    -1,    11,     4,     5,
       6,     7,    16,    17,    18,    19,    20,    21,    22,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    23,    -1,    25,
      26,    27,    28,    -1,    30,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    -1,    41,    42,    43,     8,     9,
      10,    -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,     8,     9,    10,    -1,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    -1,    41,    42,    43,
       8,     9,    10,    -1,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    -1,    41,    42,    43,     8,     9,    10,    -1,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,    41,
      42,    43,     8,     9,    10,    -1,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    -1,    41,    42,    43,     4,     5,
       6,     7,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    32,    34,    63,    64,    80,    86,   111,    33,
      87,    88,   111,     8,    81,    82,     0,    45,    64,    65,
      86,    94,    95,   111,    64,    94,    40,    33,    88,     8,
      89,    90,    92,    56,    35,    82,     8,    66,    67,    68,
      86,    64,    94,    64,    95,     8,    64,    54,    54,    60,
      11,    58,    83,    84,   111,    47,    46,    67,    56,    94,
     111,    64,    54,    55,    91,    98,   111,     3,     8,    90,
      57,    84,     8,     8,    32,    64,    97,    98,    56,    55,
      58,     8,    61,    61,    11,    69,    70,   111,    55,    58,
      32,    99,    98,    60,    60,    70,    71,    72,   111,     8,
      56,    98,     8,    33,   100,   101,    12,    96,     3,     8,
       3,     8,    33,    72,   111,     8,    11,    99,     8,   102,
      33,   101,     8,     9,    10,    23,    27,    28,    30,    32,
      36,    37,    38,    39,    41,    42,    43,    48,    49,    50,
      77,    78,    85,    93,   104,   105,   106,   107,   108,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    57,
      61,    61,    61,    61,    74,    75,   111,     8,    54,    96,
      11,    58,    59,    60,    54,    54,    54,    54,   104,   107,
     104,    33,   109,   110,   111,    11,    11,    11,     3,     8,
      11,    15,    44,    53,    54,    93,   123,    54,    54,    54,
      54,    54,    59,    59,    59,    14,   105,   107,    13,    57,
      75,     8,    73,    98,    57,     8,     8,   123,    93,   123,
     123,   123,    27,    31,    33,   110,     8,    92,   112,    54,
     123,   123,     4,     5,     6,     7,    11,    16,    17,    18,
      19,    20,    21,    22,    51,    52,    55,    55,   123,     8,
      50,    77,     8,     8,     8,   123,    13,    54,    55,    58,
      54,    61,    55,    55,    55,    55,    54,    54,    11,    58,
      55,   103,   123,    55,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,    55,    55,    59,
      55,    59,    54,    54,    11,    97,    11,    98,    79,   123,
      60,    11,    11,    24,    28,   123,   123,    92,    55,    58,
      11,     8,    11,     8,    79,    79,    55,    55,    58,   123,
     104,   104,    55,    55,   123,    55,    55,    56,   123,    61,
      25,    26,    29,    11,    11,    99,   104,    11,    11,    12,
      76,    26,   104,   107,    57,    11,   107,    13,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    65,    66,    66,    67,    68,    68,    69,    69,    70,
      71,    71,    72,    73,    73,    73,    74,    74,    75,    76,
      76,    77,    77,    78,    78,    78,    79,    79,    80,    81,
      81,    82,    83,    83,    84,    85,    85,    86,    86,    87,
      87,    88,    89,    89,    90,    90,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    95,    96,
      96,    97,    97,    97,    98,    99,    99,    99,   100,   100,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   107,   107,   108,   108,   109,   109,   110,   111,   112,
     112,   113,   114,   115,   116,   116,   117,   118,   119,   120,
     121,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     2,     3,     2,     1,
       8,     3,     2,     1,     8,     1,     3,     2,     1,     3,
       2,     1,     6,     3,     1,     0,     2,     1,     9,     4,
       3,     3,     3,     6,     6,     6,     3,     1,     3,     2,
       1,     4,     2,     1,     3,     3,     3,     3,     2,     2,
       1,     3,     3,     1,     1,     4,     3,     1,     0,     1,
       4,     7,     7,     7,     7,     4,     1,     4,     7,     1,
       1,     3,     3,     4,     5,     1,     2,     1,     9,     4,
       3,     3,     1,     0,     2,     3,     2,     0,     2,     1,
       3,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     3,     2,     3,     2,     2,     1,     3,     1,     3,
       1,     2,     2,     2,    10,     8,     8,     7,     7,     5,
       5,     4,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     1
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
  case 2: /* Program: TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 125 "expr_tree.y"
    {
      exit(1);
    }
#line 1758 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 129 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1767 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock GDeclBlock MainBlock  */
#line 134 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1776 "y.tab.c"
    break;

  case 5: /* Program: TypeDefBlock FDefBlock MainBlock  */
#line 139 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1785 "y.tab.c"
    break;

  case 6: /* Program: TypeDefBlock MainBlock  */
#line 144 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1794 "y.tab.c"
    break;

  case 7: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 149 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1803 "y.tab.c"
    break;

  case 8: /* Program: GDeclBlock MainBlock  */
#line 154 "expr_tree.y"
    {

      exit(1);
    }
#line 1812 "y.tab.c"
    break;

  case 9: /* Program: MainBlock  */
#line 159 "expr_tree.y"
    {
      exit(1);
    }
#line 1820 "y.tab.c"
    break;

  case 10: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 167 "expr_tree.y"
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
#line 1849 "y.tab.c"
    break;

  case 12: /* ClassDefList: ClassDefList ClassDef  */
#line 200 "expr_tree.y"
    {
      defineClass((yyvsp[0].node), target_file);
    }
#line 1857 "y.tab.c"
    break;

  case 13: /* ClassDefList: ClassDef  */
#line 204 "expr_tree.y"
    {
      defineClass((yyvsp[0].node), target_file);
    }
#line 1865 "y.tab.c"
    break;

  case 14: /* ClassDef: ClassName '{' DECL ClassFieldLists ClassMethodDeclList ENDDECL ClassMethodDefns '}'  */
#line 211 "expr_tree.y"
    {
      popAllClassLocalDeclarationsAndCreateEntry((yyvsp[-7].string));

      
      // class name, class fields, class methods declarations, class methods definitions
      (yyval.node) = makeClassNode((yyvsp[-7].string), (yyvsp[-4].typeField), (yyvsp[-1].node));
    }
#line 1877 "y.tab.c"
    break;

  case 15: /* ClassName: ID  */
#line 222 "expr_tree.y"
    {
      classInstall((yyvsp[0].string),NULL);
      (yyval.string) = (yyvsp[0].string);
    }
#line 1886 "y.tab.c"
    break;

  case 16: /* ClassName: ID EXTENDS ID  */
#line 227 "expr_tree.y"
    {
      classInstall((yyvsp[-2].string),(yyvsp[0].string));
      (yyval.string) = (yyvsp[-2].string);
    }
#line 1895 "y.tab.c"
    break;

  case 17: /* ClassFieldLists: ClassFieldLists ClassFieldDecl  */
#line 235 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1904 "y.tab.c"
    break;

  case 18: /* ClassFieldLists: ClassFieldDecl  */
#line 240 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1912 "y.tab.c"
    break;

  case 19: /* ClassFieldDecl: Type ID SEMICOLON  */
#line 247 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
      classFieldInstall(getCurrentClassBeingDefined(), (yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1921 "y.tab.c"
    break;

  case 20: /* ClassMethodDeclList: ClassMethodDeclList ClassMethodDecl  */
#line 255 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1929 "y.tab.c"
    break;

  case 21: /* ClassMethodDeclList: ClassMethodDecl  */
#line 259 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1937 "y.tab.c"
    break;

  case 22: /* ClassMethodDecl: Type ID '(' ClassParamList ')' SEMICOLON  */
#line 266 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-4].string), NULL);
    idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
    idNode->left = (yyvsp[-2].node);
    idNode->type = typeLookup((yyvsp[-5].string));
    (yyval.node) = idNode; 
  }
#line 1949 "y.tab.c"
    break;

  case 23: /* ClassParamList: ClassParamList ',' Param  */
#line 276 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1959 "y.tab.c"
    break;

  case 24: /* ClassParamList: Param  */
#line 282 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1967 "y.tab.c"
    break;

  case 25: /* ClassParamList: %empty  */
#line 286 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 1975 "y.tab.c"
    break;

  case 26: /* ClassMethodDefns: ClassMethodDefns ClassFunctionDef  */
#line 293 "expr_tree.y"
    {
      insertIntoMethodTree((yyvsp[-1].node), (yyvsp[0].node));
      (yyval.node) = (yyvsp[-1].node);
    }
#line 1984 "y.tab.c"
    break;

  case 27: /* ClassMethodDefns: ClassFunctionDef  */
#line 298 "expr_tree.y"
  {
    (yyval.node) = makeConnectorNode(NULL, (yyvsp[0].node));
  }
#line 1992 "y.tab.c"
    break;

  case 28: /* ClassFunctionDef: Type ID '(' ParamList ')' '{' LDeclBlock ClassFunctionBody '}'  */
#line 306 "expr_tree.y"
    {

      struct expr_tree_node * funcNode = makeMethodDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineClassMethod(getCurrentClassBeingDefined(),funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2003 "y.tab.c"
    break;

  case 29: /* ClassFunctionBody: START Slist ReturnStmt END  */
#line 316 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2012 "y.tab.c"
    break;

  case 30: /* ClassFunctionBody: START ReturnStmt END  */
#line 321 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[0].node),NULL);
      (yyval.node) = NULL;
    }
#line 2021 "y.tab.c"
    break;

  case 31: /* ClassField: SELF '.' ID  */
#line 335 "expr_tree.y"
    {
      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode("self",rightFieldNode,NULL);
      leftFieldNode->classType = getCurrentClassBeingDefined();

      
 
      // get the type of the right field node
      struct FieldList * rightType = classFieldLookup(leftFieldNode->classType, rightFieldNode->varname);
      // if right type is null
      if(rightType == NULL)
      {
        yyerror("Field not found in class \n");
        exit(1);
      }
     
      // set the type of the right field node
      rightFieldNode->type = rightType->type;
      (yyval.node) = leftFieldNode;


    }
#line 2049 "y.tab.c"
    break;

  case 32: /* ClassField: ClassField '.' ID  */
#line 359 "expr_tree.y"
    {
      insertIntoClassFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);

    }
#line 2059 "y.tab.c"
    break;

  case 41: /* TypeDef: ID '{' TypeFieldDeclList '}'  */
#line 388 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 2067 "y.tab.c"
    break;

  case 42: /* TypeFieldDeclList: TypeFieldDeclList TypeFieldDecl  */
#line 395 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2076 "y.tab.c"
    break;

  case 43: /* TypeFieldDeclList: TypeFieldDecl  */
#line 400 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2084 "y.tab.c"
    break;

  case 44: /* TypeFieldDecl: Type ID SEMICOLON  */
#line 407 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 2092 "y.tab.c"
    break;

  case 45: /* TypeField: TypeField '.' ID  */
#line 416 "expr_tree.y"
    { 
      insertIntoTypeFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);
      
    }
#line 2102 "y.tab.c"
    break;

  case 46: /* TypeField: ID '.' ID  */
#line 422 "expr_tree.y"
    { 

      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode((yyvsp[-2].string),rightFieldNode,NULL);

      // get the LST entry for the variable
      struct LocalSymbolTable * lstEntry = LSTLookup((yyvsp[-2].string));
      // if lst entry is not null
      if(lstEntry != NULL)
      {
        // set the type of the left field node
        leftFieldNode->type = lstEntry->type;
      }
      else
      {
        // get the GST entry for the variable
        struct GlobalSymbolTable * gstEntry = GSTLookup((yyvsp[-2].string));
        // if gst entry is not null
        if(gstEntry != NULL)
        {
          // set the type of the left field node
          leftFieldNode->type = gstEntry->type;
        }
        else
        {
          // error
          printf("Error: Variable %s not declared \n", (yyvsp[-2].string));
          exit(1);
        }
      } 
      // get the type of the right field node
      struct FieldList * rightType = typeFieldLookup(leftFieldNode->type, (yyvsp[0].string));
      // if right type is null throw error
      if(rightType == NULL)
      {
        printf("Error: Field %s not found in type %s \n", (yyvsp[0].string), leftFieldNode->type->name);
        exit(1);
      }
      // set the type of the right field node
      rightFieldNode->type = rightType->type;
      (yyval.node) = leftFieldNode;


    }
#line 2152 "y.tab.c"
    break;

  case 47: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 471 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2164 "y.tab.c"
    break;

  case 48: /* GDeclBlock: DECL ENDDECL  */
#line 479 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2176 "y.tab.c"
    break;

  case 51: /* GDecl: Type GidList SEMICOLON  */
#line 495 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 2184 "y.tab.c"
    break;

  case 52: /* GidList: GidList ',' Gid  */
#line 502 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2192 "y.tab.c"
    break;

  case 53: /* GidList: Gid  */
#line 506 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2200 "y.tab.c"
    break;

  case 54: /* Gid: identifierDecl  */
#line 512 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 2206 "y.tab.c"
    break;

  case 55: /* Gid: ID '(' GParamList ')'  */
#line 514 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 2217 "y.tab.c"
    break;

  case 56: /* GParamList: GParamList ',' Param  */
#line 524 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2227 "y.tab.c"
    break;

  case 57: /* GParamList: Param  */
#line 530 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2235 "y.tab.c"
    break;

  case 58: /* GParamList: %empty  */
#line 534 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2243 "y.tab.c"
    break;

  case 59: /* identifierDecl: ID  */
#line 540 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 2251 "y.tab.c"
    break;

  case 60: /* identifierDecl: ID '[' INT ']'  */
#line 544 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2261 "y.tab.c"
    break;

  case 61: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 550 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2272 "y.tab.c"
    break;

  case 62: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 557 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2284 "y.tab.c"
    break;

  case 63: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 565 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2296 "y.tab.c"
    break;

  case 64: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 573 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2308 "y.tab.c"
    break;

  case 65: /* identifierDecl: ID '[' ID ']'  */
#line 581 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2318 "y.tab.c"
    break;

  case 66: /* identifierUse: ID  */
#line 592 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 2326 "y.tab.c"
    break;

  case 67: /* identifierUse: ID '[' expr ']'  */
#line 596 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2336 "y.tab.c"
    break;

  case 68: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 602 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2347 "y.tab.c"
    break;

  case 69: /* identifierUse: TypeField  */
#line 608 "expr_tree.y"
              {(yyval.node) = (yyvsp[0].node);}
#line 2353 "y.tab.c"
    break;

  case 70: /* identifierUse: ClassField  */
#line 609 "expr_tree.y"
               {(yyval.node) = (yyvsp[0].node);}
#line 2359 "y.tab.c"
    break;

  case 71: /* identifierUse: INITIALIZE '(' ')'  */
#line 611 "expr_tree.y"
    {
      (yyval.node) = makeHeapInitNode();
    }
#line 2367 "y.tab.c"
    break;

  case 72: /* identifierUse: ALLOC '(' ')'  */
#line 615 "expr_tree.y"
    {
      (yyval.node) = makeHeapAllocateNode();
    }
#line 2375 "y.tab.c"
    break;

  case 73: /* identifierUse: FREE '(' expr ')'  */
#line 619 "expr_tree.y"
    {
      (yyval.node) = makeHeapFreeNode((yyvsp[-1].node));
    }
#line 2383 "y.tab.c"
    break;

  case 74: /* identifierUse: NEW '(' ID ')' SEMICOLON  */
#line 623 "expr_tree.y"
  {
    (yyval.node) = makeNewNode((yyvsp[-2].string));
  }
#line 2391 "y.tab.c"
    break;

  case 75: /* identifierUse: ClassFieldFunction  */
#line 626 "expr_tree.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2397 "y.tab.c"
    break;

  case 76: /* FDefBlock: FDefBlock FDef  */
#line 635 "expr_tree.y"
      {

      }
#line 2405 "y.tab.c"
    break;

  case 77: /* FDefBlock: FDef  */
#line 639 "expr_tree.y"
      {
      }
#line 2412 "y.tab.c"
    break;

  case 78: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 645 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2422 "y.tab.c"
    break;

  case 79: /* Body: START Slist ReturnStmt END  */
#line 656 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2431 "y.tab.c"
    break;

  case 80: /* Body: START ReturnStmt END  */
#line 661 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[0].node),NULL);
      (yyval.node) = NULL;
    }
#line 2440 "y.tab.c"
    break;

  case 81: /* ParamList: ParamList ',' Param  */
#line 669 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2451 "y.tab.c"
    break;

  case 82: /* ParamList: Param  */
#line 676 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 2460 "y.tab.c"
    break;

  case 83: /* ParamList: %empty  */
#line 681 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2468 "y.tab.c"
    break;

  case 84: /* Param: Type ID  */
#line 688 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 2476 "y.tab.c"
    break;

  case 86: /* LDeclBlock: DECL ENDDECL  */
#line 697 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2484 "y.tab.c"
    break;

  case 87: /* LDeclBlock: %empty  */
#line 701 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2492 "y.tab.c"
    break;

  case 90: /* LDecl: ID LIdList SEMICOLON  */
#line 713 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2500 "y.tab.c"
    break;

  case 91: /* LIdList: LIdList ',' ID  */
#line 720 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 2509 "y.tab.c"
    break;

  case 92: /* LIdList: ID  */
#line 725 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 2518 "y.tab.c"
    break;

  case 93: /* ArgList: ArgList ',' expr  */
#line 736 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2527 "y.tab.c"
    break;

  case 94: /* ArgList: expr  */
#line 741 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2535 "y.tab.c"
    break;

  case 95: /* Slist: Slist Stmt  */
#line 748 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2541 "y.tab.c"
    break;

  case 96: /* Slist: Stmt  */
#line 749 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2547 "y.tab.c"
    break;

  case 111: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 774 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2555 "y.tab.c"
    break;

  case 112: /* ReturnStmt: RETURN SEMICOLON  */
#line 778 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2563 "y.tab.c"
    break;

  case 117: /* Decl: Type VarList SEMICOLON  */
#line 792 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
     
    }
#line 2573 "y.tab.c"
    break;

  case 119: /* VarList: VarList ',' identifierDecl  */
#line 802 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2579 "y.tab.c"
    break;

  case 120: /* VarList: identifierDecl  */
#line 803 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2585 "y.tab.c"
    break;

  case 121: /* brkStmt: BREAK SEMICOLON  */
#line 807 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2591 "y.tab.c"
    break;

  case 122: /* contStmt: CONTINUE SEMICOLON  */
#line 810 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2597 "y.tab.c"
    break;

  case 123: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 813 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2603 "y.tab.c"
    break;

  case 124: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 816 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2609 "y.tab.c"
    break;

  case 125: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 817 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2615 "y.tab.c"
    break;

  case 126: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 820 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2621 "y.tab.c"
    break;

  case 127: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 823 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2627 "y.tab.c"
    break;

  case 128: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 826 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2633 "y.tab.c"
    break;

  case 129: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 829 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2639 "y.tab.c"
    break;

  case 130: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 832 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2645 "y.tab.c"
    break;

  case 131: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 835 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2651 "y.tab.c"
    break;

  case 132: /* expr: expr PLUS expr  */
#line 838 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2657 "y.tab.c"
    break;

  case 133: /* expr: expr MINUS expr  */
#line 839 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2663 "y.tab.c"
    break;

  case 134: /* expr: expr MUL expr  */
#line 840 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2669 "y.tab.c"
    break;

  case 135: /* expr: expr DIV expr  */
#line 841 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2675 "y.tab.c"
    break;

  case 136: /* expr: expr MOD expr  */
#line 842 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2681 "y.tab.c"
    break;

  case 137: /* expr: '(' expr ')'  */
#line 843 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2687 "y.tab.c"
    break;

  case 138: /* expr: INT  */
#line 844 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2693 "y.tab.c"
    break;

  case 139: /* expr: identifierUse  */
#line 845 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2699 "y.tab.c"
    break;

  case 140: /* expr: STRING  */
#line 846 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2705 "y.tab.c"
    break;

  case 141: /* expr: expr LT expr  */
#line 847 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2711 "y.tab.c"
    break;

  case 142: /* expr: expr GT expr  */
#line 848 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2717 "y.tab.c"
    break;

  case 143: /* expr: expr LE expr  */
#line 849 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2723 "y.tab.c"
    break;

  case 144: /* expr: expr GE expr  */
#line 850 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2729 "y.tab.c"
    break;

  case 145: /* expr: expr NE expr  */
#line 851 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2735 "y.tab.c"
    break;

  case 146: /* expr: expr EQ expr  */
#line 852 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2741 "y.tab.c"
    break;

  case 147: /* expr: expr AND expr  */
#line 853 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2747 "y.tab.c"
    break;

  case 148: /* expr: expr OR expr  */
#line 854 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2753 "y.tab.c"
    break;

  case 149: /* expr: NOT expr  */
#line 855 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2759 "y.tab.c"
    break;

  case 150: /* expr: ID '(' ')'  */
#line 856 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2765 "y.tab.c"
    break;

  case 151: /* expr: ID '(' ArgList ')'  */
#line 857 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2771 "y.tab.c"
    break;

  case 152: /* expr: NULLVAL  */
#line 858 "expr_tree.y"
             {(yyval.node) = makeNullNode();}
#line 2777 "y.tab.c"
    break;


#line 2781 "y.tab.c"

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

#line 861 "expr_tree.y"


void yyerror(char const *s)
{
    // print error and line number
    printf("yyerror %s : %s at line number %d\n",s, yytext, yylineno);
}

int main()
{

  FILE * input_file=fopen("input.expl","r");
  target_file = fopen("untranslated_assembly.xsm","w");
  // Initializing Type Table
  typeTableCreate();
  _INIT_STATE = _FALSE;
  // stack
  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  // heap
  _HEAP_POINTER = _INITIAL_HEAP_POINTER;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}
