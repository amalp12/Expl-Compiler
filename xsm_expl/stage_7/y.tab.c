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
FILE * target_file ;
int _INIT_STATE ;

int yylex(void);


#line 161 "y.tab.c"

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
#line 91 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct FieldList * typeField;

#line 328 "y.tab.c"

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
  YYSYMBOL_ClassStmt = 77,                 /* ClassStmt  */
  YYSYMBOL_InsideClassStmt = 78,           /* InsideClassStmt  */
  YYSYMBOL_OutsideClassStmt = 79,          /* OutsideClassStmt  */
  YYSYMBOL_ClassField = 80,                /* ClassField  */
  YYSYMBOL_ClassFieldFunction = 81,        /* ClassFieldFunction  */
  YYSYMBOL_ClassArgList = 82,              /* ClassArgList  */
  YYSYMBOL_TypeDefBlock = 83,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 84,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 85,                   /* TypeDef  */
  YYSYMBOL_TypeFieldDeclList = 86,         /* TypeFieldDeclList  */
  YYSYMBOL_TypeFieldDecl = 87,             /* TypeFieldDecl  */
  YYSYMBOL_TypeField = 88,                 /* TypeField  */
  YYSYMBOL_GDeclBlock = 89,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 90,                 /* GDeclList  */
  YYSYMBOL_GDecl = 91,                     /* GDecl  */
  YYSYMBOL_GidList = 92,                   /* GidList  */
  YYSYMBOL_Gid = 93,                       /* Gid  */
  YYSYMBOL_GParamList = 94,                /* GParamList  */
  YYSYMBOL_identifierDecl = 95,            /* identifierDecl  */
  YYSYMBOL_identifierUse = 96,             /* identifierUse  */
  YYSYMBOL_FDefBlock = 97,                 /* FDefBlock  */
  YYSYMBOL_FDef = 98,                      /* FDef  */
  YYSYMBOL_Body = 99,                      /* Body  */
  YYSYMBOL_ParamList = 100,                /* ParamList  */
  YYSYMBOL_Param = 101,                    /* Param  */
  YYSYMBOL_LDeclBlock = 102,               /* LDeclBlock  */
  YYSYMBOL_LDecList = 103,                 /* LDecList  */
  YYSYMBOL_LDecl = 104,                    /* LDecl  */
  YYSYMBOL_LIdList = 105,                  /* LIdList  */
  YYSYMBOL_ArgList = 106,                  /* ArgList  */
  YYSYMBOL_Slist = 107,                    /* Slist  */
  YYSYMBOL_Stmt = 108,                     /* Stmt  */
  YYSYMBOL_ReturnStmt = 109,               /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 110,                 /* DeclStmt  */
  YYSYMBOL_DeclList = 111,                 /* DeclList  */
  YYSYMBOL_Decl = 112,                     /* Decl  */
  YYSYMBOL_Type = 113,                     /* Type  */
  YYSYMBOL_VarList = 114,                  /* VarList  */
  YYSYMBOL_brkStmt = 115,                  /* brkStmt  */
  YYSYMBOL_contStmt = 116,                 /* contStmt  */
  YYSYMBOL_brkpointStmt = 117,             /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 118,                   /* Ifstmt  */
  YYSYMBOL_Whilestmt = 119,                /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 120,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 121,              /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 122,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 123,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 124,                  /* AsgStmt  */
  YYSYMBOL_expr = 125                      /* expr  */
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
#define YYLAST   859

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  381

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
       0,   123,   123,   127,   132,   137,   142,   147,   152,   157,
     165,   195,   198,   202,   209,   220,   225,   233,   238,   245,
     252,   256,   263,   273,   279,   284,   290,   295,   303,   313,
     314,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   336,   337,   338,   339,   343,   344,
     348,   349,   353,   354,   355,   359,   360,   364,   368,   369,
     373,   380,   385,   392,   401,   407,   456,   464,   475,   476,
     480,   487,   491,   498,   499,   509,   515,   520,   525,   529,
     535,   542,   550,   558,   566,   577,   581,   587,   594,   595,
     599,   603,   615,   619,   625,   636,   641,   649,   656,   662,
     668,   676,   677,   685,   686,   689,   696,   701,   712,   717,
     725,   726,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   747,   751,   758,   759,   761,
     762,   765,   773,   776,   777,   781,   784,   787,   790,   791,
     794,   797,   800,   803,   806,   809,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834
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
  "ClassFunctionDef", "ClassFunctionBody", "ClassStmt", "InsideClassStmt",
  "OutsideClassStmt", "ClassField", "ClassFieldFunction", "ClassArgList",
  "TypeDefBlock", "TypeDefList", "TypeDef", "TypeFieldDeclList",
  "TypeFieldDecl", "TypeField", "GDeclBlock", "GDeclList", "GDecl",
  "GidList", "Gid", "GParamList", "identifierDecl", "identifierUse",
  "FDefBlock", "FDef", "Body", "ParamList", "Param", "LDeclBlock",
  "LDecList", "LDecl", "LIdList", "ArgList", "Slist", "Stmt", "ReturnStmt",
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

#define YYPACT_NINF (-180)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      82,  -180,    86,    16,    42,  -180,    43,    36,    70,  -180,
      90,  -180,    60,    68,    49,  -180,  -180,   154,  -180,   155,
      36,    36,  -180,    33,  -180,    36,   134,  -180,  -180,   129,
       6,  -180,  -180,    36,  -180,  -180,   149,     3,  -180,   171,
      36,  -180,    36,  -180,  -180,   150,  -180,   180,    36,    50,
    -180,    60,    -1,  -180,   228,   243,  -180,  -180,   208,    36,
     256,  -180,    36,   221,   195,  -180,   300,   248,   253,  -180,
    -180,  -180,   325,  -180,    36,  -180,   197,  -180,   309,  -180,
      36,  -180,   282,   283,  -180,    36,  -180,   336,   289,    36,
     107,   334,  -180,    94,   203,  -180,   112,  -180,   339,   337,
     309,  -180,   347,  -180,   122,  -180,   772,   302,   295,   305,
     307,   312,    36,  -180,   352,    24,  -180,   334,  -180,     8,
    -180,  -180,    72,   313,   338,   340,   341,   772,   772,   125,
     382,   385,   386,    84,   344,   345,   353,   354,  -180,   356,
     397,   772,  -180,   399,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
      10,  -180,   410,   367,    36,   366,  -180,   414,   416,   478,
      64,   478,   478,   478,   797,  -180,   697,  -180,   128,  -180,
     417,  -180,  -180,  -180,  -180,   115,  -180,  -180,  -180,   368,
     478,   478,   373,  -180,  -180,   562,   378,   379,   478,   387,
     430,   411,  -180,   434,  -180,  -180,  -180,   394,   220,  -180,
    -180,  -180,  -180,     9,   395,   278,   299,   306,   403,   404,
    -180,  -180,   389,  -180,    28,   226,   452,   454,   837,   358,
     459,   478,   478,   478,   478,  -180,   478,   478,   478,   478,
     478,   478,   478,   478,   478,  -180,  -180,   365,   409,    54,
    -180,   415,   581,  -180,    36,   461,    36,   413,   466,   469,
     446,   455,   478,   478,  -180,   417,  -180,   231,   619,   420,
     428,  -180,   431,  -180,  -180,   166,   166,  -180,   196,   196,
     161,   161,   333,   333,   837,   837,  -180,   476,   477,   479,
     486,  -180,   232,  -180,  -180,   478,  -180,  -180,   772,   772,
     384,   424,  -180,  -180,   478,   478,   478,   478,  -180,  -180,
    -180,   440,   441,   241,   672,   722,   148,   488,   619,   233,
     619,   276,   277,   489,   309,  -180,   772,   492,   497,  -180,
    -180,  -180,   478,  -180,  -180,  -180,   636,   747,  -180,  -180,
     619,   456,   515,  -180,  -180,    18,   495,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,   501,
     387,  -180,  -180,   448,   463,  -180,   140,   460,   600,   464,
     504,   518,  -180,   519,  -180,   474,   475,   522,   523,  -180,
    -180
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   132,     0,     0,     0,     9,     0,     0,     0,    67,
       0,    69,     0,     0,     0,    59,     1,     0,     6,     0,
       0,     0,    93,     0,     8,     0,     0,    66,    68,    78,
       0,    72,    73,     0,    57,    58,    15,     0,    13,     0,
       0,     4,     0,     5,    92,     0,     7,     0,    77,     0,
      70,     0,     0,    62,     0,     0,    11,    12,     0,     0,
       0,     3,    99,     0,     0,    76,     0,     0,     0,    71,
      60,    61,     0,    16,     0,     2,     0,    98,     0,    74,
       0,   100,    79,    84,    63,     0,    18,     0,     0,     0,
       0,     0,    75,     0,     0,    17,     0,    21,     0,     0,
       0,    97,     0,   102,     0,   104,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,    19,     0,   107,     0,
     101,   103,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,    88,
       0,     0,   111,   123,   122,   117,   118,   119,   115,   116,
     120,   121,   112,   113,   114,    10,    80,    82,    81,    83,
       0,    27,     0,     0,    25,     0,   105,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,   128,     0,   130,
       0,   135,   137,   136,   152,    85,   126,   154,   166,     0,
       0,     0,   167,   168,   153,     0,     0,     0,     0,     0,
       0,     0,   110,   123,    96,    14,    26,     0,     0,    24,
      94,   106,    65,     0,     0,     0,     0,     0,     0,     0,
     127,   129,    78,   134,     0,     0,     0,     0,   163,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
      64,     0,     0,    95,    99,     0,     0,    86,     0,     0,
       0,     0,     0,     0,   131,     0,   164,     0,   109,    65,
      50,   151,    51,   148,   149,   146,   147,   150,   156,   155,
     158,   157,   159,   160,   161,   162,    91,     0,     0,     0,
       0,   145,     0,    22,    23,     0,   143,   144,     0,     0,
       0,     0,   133,   165,     0,     0,     0,     0,    50,    49,
      51,     0,     0,     0,     0,     0,     0,     0,   108,     0,
      56,     0,     0,     0,     0,    87,     0,     0,     0,   142,
     141,    53,     0,    52,    54,    48,     0,     0,   139,   140,
      55,     0,     0,    30,    43,     0,     0,    42,    41,    36,
      37,    38,    34,    35,    39,    40,    31,    32,    33,     0,
       0,    28,    29,     0,     0,   138,     0,     0,     0,     0,
       0,     0,    44,     0,    47,     0,     0,     0,     0,    45,
      46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,    97,  -180,  -180,   498,  -180,  -180,   451,  -180,
     443,  -180,  -180,   377,  -180,   198,  -180,  -180,  -179,  -180,
     -84,  -180,  -180,   527,  -180,   494,  -180,    44,  -180,   534,
    -180,   499,  -180,  -174,  -105,    14,    34,   432,   294,   -43,
     -96,  -180,   457,  -180,  -180,  -119,  -129,  -103,  -152,  -180,
     381,     0,  -180,  -145,  -144,  -117,  -116,  -112,   -98,   -93,
     -71,   -70,   -35,   -90
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,    19,    37,    38,    39,    85,    86,    96,
      97,   208,   160,   161,   342,   343,   344,   138,   192,   193,
     319,     6,    14,    15,    52,    53,   139,     7,    10,    11,
      30,    31,    64,    32,   194,    21,    22,   107,    76,    77,
      91,   104,   105,   119,   267,   141,   142,   175,   144,   178,
     179,    23,   224,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   320
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,   140,    12,   143,   117,    65,   223,     1,   174,   176,
      12,    36,   202,   231,   232,   233,   234,    50,     1,   166,
     249,    25,   140,   140,    13,   236,   237,   238,   239,   240,
     241,   242,   363,    54,    42,   116,   140,    92,   203,   264,
      60,    45,    16,   195,     1,   202,   101,   202,    66,    56,
      20,     1,    54,    67,    59,    44,    70,    13,    68,    44,
     243,   244,    66,    40,    51,   214,   167,   205,    29,   140,
     257,   140,   122,    26,    87,     2,    44,   289,   164,   213,
      66,   215,   216,   217,    34,    98,   265,   184,    17,    66,
       1,   302,   185,    44,     1,   186,   114,   108,     1,   187,
     228,   229,   109,    18,    24,   134,   135,   136,   247,   288,
      26,   252,   162,   289,     2,   102,     3,    41,    43,     9,
       1,   209,    46,    27,    33,   134,   135,   136,   188,   180,
     102,   168,   169,     1,   189,   268,     1,   190,   191,    61,
     103,   273,   274,   275,   276,   112,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   120,    75,   345,   177,   329,
     162,   220,    36,   345,    66,   231,   232,   233,   234,   225,
     231,   232,   300,   301,   226,   169,   299,   236,   180,   314,
     315,   366,   236,    48,   348,   202,   202,     2,    47,    49,
     348,   349,   350,   140,   140,   370,    55,   349,   350,   289,
     231,   232,   233,   234,    62,   313,   110,   337,   202,   140,
     140,   111,   236,   294,   318,   239,   240,   241,   242,   351,
     352,   140,   321,   322,   353,   351,   352,    58,   336,   184,
     353,   346,   140,   347,   185,    63,    72,   346,   354,   347,
      74,   187,   340,   355,   354,   231,   232,   233,   234,   355,
      79,    73,    88,    80,    66,    89,    66,   236,   237,   238,
     239,   240,   241,   242,    45,   356,   357,   134,   135,   136,
     188,   356,   357,   368,   252,   255,   189,    78,   256,   190,
     191,   266,   231,   232,   233,   234,   303,   312,   331,   304,
      89,   332,   243,   244,   236,   237,   238,   239,   240,   241,
     242,   358,   325,   231,   232,   233,   234,   358,    81,    82,
     231,   232,   233,   234,    83,   236,   237,   238,   239,   240,
     241,   242,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   333,   334,   259,   332,   332,    84,   231,   232,   233,
     234,    90,    93,    94,    99,   100,   106,   115,   116,   236,
     243,   244,   239,   240,   260,   118,   156,   243,   244,   155,
     163,   261,   231,   232,   233,   234,   157,   170,   158,   231,
     232,   233,   234,   159,   236,   237,   238,   239,   240,   241,
     242,   236,   237,   238,   239,   240,   241,   242,   231,   232,
     233,   234,   171,   181,   172,   173,   182,   183,   196,   197,
     236,   237,   238,   239,   240,   241,   242,   198,   199,   243,
     244,   201,   204,   271,   184,   200,   243,   244,   207,   185,
     286,   164,   211,   210,   212,   222,   187,   227,   231,   232,
     233,   234,   230,   245,   246,   243,   244,   248,   250,   316,
     236,   237,   238,   239,   240,   241,   242,   253,   254,    49,
     258,   184,   134,   135,   136,   188,   185,   262,   263,   251,
     269,   189,   270,   187,   190,   191,   184,   272,   287,   290,
     298,   185,   293,   295,   305,   243,   244,   296,   187,   317,
     297,   184,   306,   299,   308,   307,   185,   310,   309,   134,
     135,   136,   188,   187,   311,   323,   367,   324,   189,   330,
     335,   190,   191,   338,   134,   135,   136,   188,   339,   364,
     360,   369,   365,   189,   371,   374,   190,   191,   373,   134,
     135,   136,   188,   122,   123,   124,   375,   376,   189,   377,
     378,   190,   191,   379,   380,    57,    95,   206,   125,   113,
     362,    35,   126,   127,    28,   128,    71,   129,   292,   165,
      69,   130,   131,   132,   133,     0,   134,   135,   136,   221,
       0,   121,     0,     0,   341,   248,   231,   232,   233,   234,
       0,     0,   361,   235,     0,     0,     0,     0,   236,   237,
     238,   239,   240,   241,   242,   231,   232,   233,   234,     0,
       0,     0,   291,     0,     0,     0,     0,   236,   237,   238,
     239,   240,   241,   242,   231,   232,   233,   234,     0,     0,
       0,   372,     0,   243,   244,     0,   236,   237,   238,   239,
     240,   241,   242,   231,   232,   233,   234,     0,     0,     0,
       0,     0,   243,   244,     0,   236,   237,   238,   239,   240,
     241,   242,     0,     0,   122,   123,   124,     0,     0,     0,
       0,   243,   244,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,   126,   127,     0,   128,     0,   129,     0,
     243,   244,   130,   131,   132,   133,     0,   134,   135,   136,
     122,   123,   124,     0,     0,   341,   248,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,   326,   327,   126,
     127,     0,   128,     0,   129,   122,   123,   124,   130,   131,
     132,   133,     0,   134,   135,   136,     0,     0,     0,     0,
     125,   137,     0,     0,   126,   127,     0,   128,   219,   129,
     122,   123,   124,   130,   131,   132,   133,     0,   134,   135,
     136,     0,     0,     0,     0,   125,   137,     0,     0,   126,
     127,   328,   128,     0,   129,   122,   123,   124,   130,   131,
     132,   133,     0,   134,   135,   136,     0,     0,     0,     0,
     125,   137,     0,   359,   126,   127,     0,   128,     0,   129,
     122,   123,   124,   130,   131,   132,   133,     0,   134,   135,
     136,     0,     0,     0,     0,   125,   137,     0,     0,   126,
     127,     0,   128,     0,   129,   122,   123,   124,   130,   131,
     132,   133,     0,   134,   135,   136,     0,     0,     0,     0,
     125,   137,     0,     0,   218,   127,     0,   128,     0,   129,
       0,     0,     0,   130,   131,   132,   133,     0,   134,   135,
     136,   231,   232,   233,   234,     0,   137,     0,     0,     0,
       0,     0,     0,   236,   237,   238,   239,   240,   241,   242
};

static const yytype_int16 yycheck[] =
{
       0,   106,     2,   106,   100,    48,   180,     8,   127,   128,
      10,     8,   141,     4,     5,     6,     7,    11,     8,    11,
     199,     7,   127,   128,     8,    16,    17,    18,    19,    20,
      21,    22,    14,    33,    20,    11,   141,    80,   141,    11,
      40,     8,     0,   133,     8,   174,    89,   176,    48,    46,
       6,     8,    52,     3,    40,    21,    57,     8,     8,    25,
      51,    52,    62,    19,    58,   170,    58,    57,     8,   174,
      61,   176,     8,    40,    74,    32,    42,    59,    54,   169,
      80,   171,   172,   173,    35,    85,    58,     3,    45,    89,
       8,   265,     8,    59,     8,    11,    96,     3,     8,    15,
     190,   191,     8,     6,     7,    41,    42,    43,   198,    55,
      40,   201,   112,    59,    32,     8,    34,    20,    21,    33,
       8,   164,    25,    33,    56,    41,    42,    43,    44,   129,
       8,    59,    60,     8,    50,   225,     8,    53,    54,    42,
      33,   231,   232,   233,   234,    33,   236,   237,   238,   239,
     240,   241,   242,   243,   244,    33,    59,   336,    33,    11,
     160,    33,     8,   342,   164,     4,     5,     6,     7,    54,
       4,     5,   262,   263,    59,    60,    28,    16,   178,   298,
     299,   360,    16,    54,   336,   314,   315,    32,    54,    60,
     342,   336,   336,   298,   299,    55,    47,   342,   342,    59,
       4,     5,     6,     7,    54,   295,     3,   326,   337,   314,
     315,     8,    16,   256,   304,    19,    20,    21,    22,   336,
     336,   326,   306,   307,   336,   342,   342,    56,   324,     3,
     342,   336,   337,   336,     8,    55,     8,   342,   336,   342,
      32,    15,   332,   336,   342,     4,     5,     6,     7,   342,
      55,     8,    55,    58,   254,    58,   256,    16,    17,    18,
      19,    20,    21,    22,     8,   336,   336,    41,    42,    43,
      44,   342,   342,   363,   364,    55,    50,    56,    58,    53,
      54,    55,     4,     5,     6,     7,    55,    55,    55,    58,
      58,    58,    51,    52,    16,    17,    18,    19,    20,    21,
      22,   336,    61,     4,     5,     6,     7,   342,     8,    61,
       4,     5,     6,     7,    61,    16,    17,    18,    19,    20,
      21,    22,    16,    17,    18,    19,    20,    21,    22,    51,
      52,    55,    55,    55,    58,    58,    11,     4,     5,     6,
       7,    32,    60,    60,     8,    56,    12,     8,    11,    16,
      51,    52,    19,    20,    55,     8,    61,    51,    52,    57,
       8,    55,     4,     5,     6,     7,    61,    54,    61,     4,
       5,     6,     7,    61,    16,    17,    18,    19,    20,    21,
      22,    16,    17,    18,    19,    20,    21,    22,     4,     5,
       6,     7,    54,    11,    54,    54,    11,    11,    54,    54,
      16,    17,    18,    19,    20,    21,    22,    54,    54,    51,
      52,    14,    13,    55,     3,    59,    51,    52,     8,     8,
      55,    54,     8,    57,     8,     8,    15,    59,     4,     5,
       6,     7,    59,    55,    55,    51,    52,    50,     8,    55,
      16,    17,    18,    19,    20,    21,    22,    13,    54,    60,
      55,     3,    41,    42,    43,    44,     8,    54,    54,    48,
       8,    50,     8,    15,    53,    54,     3,     8,    59,    54,
      24,     8,    11,    60,    54,    51,    52,    11,    15,    55,
      11,     3,    54,    28,     8,    54,     8,     8,    11,    41,
      42,    43,    44,    15,     8,    55,    48,    56,    50,    11,
      11,    53,    54,    11,    41,    42,    43,    44,    11,    14,
      54,    48,    11,    50,    54,    11,    53,    54,    54,    41,
      42,    43,    44,     8,     9,    10,     8,     8,    50,    55,
      55,    53,    54,    11,    11,    37,    85,   160,    23,    96,
     342,    14,    27,    28,    10,    30,    52,    32,   254,   117,
      51,    36,    37,    38,    39,    -1,    41,    42,    43,   178,
      -1,   104,    -1,    -1,    49,    50,     4,     5,     6,     7,
      -1,    -1,    57,    11,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    -1,    51,    52,    -1,    16,    17,    18,    19,
      20,    21,    22,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      51,    52,    36,    37,    38,    39,    -1,    41,    42,    43,
       8,     9,    10,    -1,    -1,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,    27,
      28,    -1,    30,    -1,    32,     8,     9,    10,    36,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      23,    49,    -1,    -1,    27,    28,    -1,    30,    31,    32,
       8,     9,    10,    36,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    23,    49,    -1,    -1,    27,
      28,    29,    30,    -1,    32,     8,     9,    10,    36,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      23,    49,    -1,    26,    27,    28,    -1,    30,    -1,    32,
       8,     9,    10,    36,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    23,    49,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,     8,     9,    10,    36,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      23,    49,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    -1,    -1,    36,    37,    38,    39,    -1,    41,    42,
      43,     4,     5,     6,     7,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    32,    34,    63,    64,    83,    89,   113,    33,
      90,    91,   113,     8,    84,    85,     0,    45,    64,    65,
      89,    97,    98,   113,    64,    97,    40,    33,    91,     8,
      92,    93,    95,    56,    35,    85,     8,    66,    67,    68,
      89,    64,    97,    64,    98,     8,    64,    54,    54,    60,
      11,    58,    86,    87,   113,    47,    46,    67,    56,    97,
     113,    64,    54,    55,    94,   101,   113,     3,     8,    93,
      57,    87,     8,     8,    32,    64,   100,   101,    56,    55,
      58,     8,    61,    61,    11,    69,    70,   113,    55,    58,
      32,   102,   101,    60,    60,    70,    71,    72,   113,     8,
      56,   101,     8,    33,   103,   104,    12,    99,     3,     8,
       3,     8,    33,    72,   113,     8,    11,   102,     8,   105,
      33,   104,     8,     9,    10,    23,    27,    28,    30,    32,
      36,    37,    38,    39,    41,    42,    43,    49,    79,    88,
      96,   107,   108,   109,   110,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    57,    61,    61,    61,    61,
      74,    75,   113,     8,    54,    99,    11,    58,    59,    60,
      54,    54,    54,    54,   107,   109,   107,    33,   111,   112,
     113,    11,    11,    11,     3,     8,    11,    15,    44,    50,
      53,    54,    80,    81,    96,   125,    54,    54,    54,    54,
      59,    14,   108,   109,    13,    57,    75,     8,    73,   101,
      57,     8,     8,   125,    96,   125,   125,   125,    27,    31,
      33,   112,     8,    95,   114,    54,    59,    59,   125,   125,
      59,     4,     5,     6,     7,    11,    16,    17,    18,    19,
      20,    21,    22,    51,    52,    55,    55,   125,    50,    80,
       8,    48,   125,    13,    54,    55,    58,    61,    55,    55,
      55,    55,    54,    54,    11,    58,    55,   106,   125,     8,
       8,    55,     8,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,    55,    59,    55,    59,
      54,    11,   100,    11,   101,    60,    11,    11,    24,    28,
     125,   125,    95,    55,    58,    54,    54,    54,     8,    11,
       8,     8,    55,   125,   107,   107,    55,    55,   125,    82,
     125,    82,    82,    55,    56,    61,    25,    26,    29,    11,
      11,    55,    58,    55,    55,    11,   102,   107,    11,    11,
     125,    49,    76,    77,    78,    80,    96,   109,   110,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    26,
      54,    57,    77,    14,    14,    11,    80,    48,   125,    48,
      55,    54,    11,    54,    11,     8,     8,    55,    55,    11,
      11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    65,    66,    66,    67,    68,    68,    69,    69,    70,
      71,    71,    72,    73,    73,    73,    74,    74,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    82,    82,    83,    84,    84,
      85,    86,    86,    87,    88,    88,    89,    89,    90,    90,
      91,    92,    92,    93,    93,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    97,    97,    98,    99,    99,   100,   100,   100,
     101,   102,   102,   103,   103,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   113,   114,   114,   115,   116,   117,   118,   118,
     119,   120,   121,   122,   123,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     2,     3,     2,     1,
       8,     3,     2,     1,     8,     1,     3,     2,     1,     3,
       2,     1,     6,     3,     1,     0,     2,     1,     9,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     7,     7,     5,     7,     5,
       3,     3,     6,     6,     6,     3,     1,     3,     2,     1,
       4,     2,     1,     3,     3,     3,     3,     2,     2,     1,
       3,     3,     1,     1,     4,     3,     1,     0,     1,     4,
       7,     7,     7,     7,     4,     1,     4,     7,     1,     3,
       3,     4,     2,     1,     9,     4,     3,     3,     1,     0,
       2,     3,     2,     2,     1,     3,     3,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     2,     2,
       1,     3,     1,     3,     1,     2,     2,     2,    10,     8,
       8,     7,     7,     5,     5,     4,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     4,     1,     1,     1
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
#line 124 "expr_tree.y"
    {
      exit(1);
    }
#line 1788 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 128 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1797 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock GDeclBlock MainBlock  */
#line 133 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1806 "y.tab.c"
    break;

  case 5: /* Program: TypeDefBlock FDefBlock MainBlock  */
#line 138 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1815 "y.tab.c"
    break;

  case 6: /* Program: TypeDefBlock MainBlock  */
#line 143 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1824 "y.tab.c"
    break;

  case 7: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 148 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1833 "y.tab.c"
    break;

  case 8: /* Program: GDeclBlock MainBlock  */
#line 153 "expr_tree.y"
    {

      exit(1);
    }
#line 1842 "y.tab.c"
    break;

  case 9: /* Program: MainBlock  */
#line 158 "expr_tree.y"
    {
      exit(1);
    }
#line 1850 "y.tab.c"
    break;

  case 10: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 166 "expr_tree.y"
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
#line 1879 "y.tab.c"
    break;

  case 12: /* ClassDefList: ClassDefList ClassDef  */
#line 199 "expr_tree.y"
    {
      defineClass((yyvsp[0].node), target_file);
    }
#line 1887 "y.tab.c"
    break;

  case 13: /* ClassDefList: ClassDef  */
#line 203 "expr_tree.y"
    {
      defineClass((yyvsp[0].node), target_file);
    }
#line 1895 "y.tab.c"
    break;

  case 14: /* ClassDef: ClassName '{' DECL ClassFieldLists ClassMethodDeclList ENDDECL ClassMethodDefns '}'  */
#line 210 "expr_tree.y"
    {
      popAllClassLocalDeclarationsAndCreateEntry((yyvsp[-7].string));

      
      // class name, class fields, class methods declarations, class methods definitions
      (yyval.node) = makeClassNode((yyvsp[-7].string), (yyvsp[-4].typeField), (yyvsp[-1].node));
    }
#line 1907 "y.tab.c"
    break;

  case 15: /* ClassName: ID  */
#line 221 "expr_tree.y"
    {
      classInstall((yyvsp[0].string),NULL);
      (yyval.string) = (yyvsp[0].string);
    }
#line 1916 "y.tab.c"
    break;

  case 16: /* ClassName: ID EXTENDS ID  */
#line 226 "expr_tree.y"
    {
      classInstall((yyvsp[-2].string),(yyvsp[0].string));
      (yyval.string) = (yyvsp[-2].string);
    }
#line 1925 "y.tab.c"
    break;

  case 17: /* ClassFieldLists: ClassFieldLists ClassFieldDecl  */
#line 234 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1934 "y.tab.c"
    break;

  case 18: /* ClassFieldLists: ClassFieldDecl  */
#line 239 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1942 "y.tab.c"
    break;

  case 19: /* ClassFieldDecl: Type ID SEMICOLON  */
#line 246 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1950 "y.tab.c"
    break;

  case 20: /* ClassMethodDeclList: ClassMethodDeclList ClassMethodDecl  */
#line 253 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
    }
#line 1958 "y.tab.c"
    break;

  case 21: /* ClassMethodDeclList: ClassMethodDecl  */
#line 257 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
    }
#line 1966 "y.tab.c"
    break;

  case 22: /* ClassMethodDecl: Type ID '(' ClassParamList ')' SEMICOLON  */
#line 264 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-4].string), NULL);
    idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
    idNode->left = (yyvsp[-2].node);
    idNode->type = typeLookup((yyvsp[-5].string));
    (yyval.node) = idNode; 
  }
#line 1978 "y.tab.c"
    break;

  case 23: /* ClassParamList: ClassParamList ',' Param  */
#line 274 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1988 "y.tab.c"
    break;

  case 24: /* ClassParamList: Param  */
#line 280 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1996 "y.tab.c"
    break;

  case 25: /* ClassParamList: %empty  */
#line 284 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2004 "y.tab.c"
    break;

  case 26: /* ClassMethodDefns: ClassMethodDefns ClassFunctionDef  */
#line 291 "expr_tree.y"
    {
      insertIntoMethodTree((yyvsp[-1].node), (yyvsp[0].node));
      (yyval.node) = (yyvsp[-1].node);
    }
#line 2013 "y.tab.c"
    break;

  case 27: /* ClassMethodDefns: ClassFunctionDef  */
#line 296 "expr_tree.y"
  {
    (yyval.node) = makeConnectorNode(NULL, (yyvsp[0].node));
  }
#line 2021 "y.tab.c"
    break;

  case 28: /* ClassFunctionDef: Type ID '(' ParamList ')' '{' LDeclBlock ClassFunctionBody '}'  */
#line 304 "expr_tree.y"
    {

      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineClassMethod(getCurrentClassBeingDefined(),funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2032 "y.tab.c"
    break;

  case 60: /* TypeDef: ID '{' TypeFieldDeclList '}'  */
#line 374 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 2040 "y.tab.c"
    break;

  case 61: /* TypeFieldDeclList: TypeFieldDeclList TypeFieldDecl  */
#line 381 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2049 "y.tab.c"
    break;

  case 62: /* TypeFieldDeclList: TypeFieldDecl  */
#line 386 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2057 "y.tab.c"
    break;

  case 63: /* TypeFieldDecl: Type ID SEMICOLON  */
#line 393 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 2065 "y.tab.c"
    break;

  case 64: /* TypeField: TypeField '.' ID  */
#line 402 "expr_tree.y"
    { 
      insertIntoFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);
      
    }
#line 2075 "y.tab.c"
    break;

  case 65: /* TypeField: ID '.' ID  */
#line 408 "expr_tree.y"
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
#line 2125 "y.tab.c"
    break;

  case 66: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 457 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2137 "y.tab.c"
    break;

  case 67: /* GDeclBlock: DECL ENDDECL  */
#line 465 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2149 "y.tab.c"
    break;

  case 70: /* GDecl: Type GidList SEMICOLON  */
#line 481 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 2157 "y.tab.c"
    break;

  case 71: /* GidList: GidList ',' Gid  */
#line 488 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2165 "y.tab.c"
    break;

  case 72: /* GidList: Gid  */
#line 492 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2173 "y.tab.c"
    break;

  case 73: /* Gid: identifierDecl  */
#line 498 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 2179 "y.tab.c"
    break;

  case 74: /* Gid: ID '(' GParamList ')'  */
#line 500 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 2190 "y.tab.c"
    break;

  case 75: /* GParamList: GParamList ',' Param  */
#line 510 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2200 "y.tab.c"
    break;

  case 76: /* GParamList: Param  */
#line 516 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2208 "y.tab.c"
    break;

  case 77: /* GParamList: %empty  */
#line 520 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2216 "y.tab.c"
    break;

  case 78: /* identifierDecl: ID  */
#line 526 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 2224 "y.tab.c"
    break;

  case 79: /* identifierDecl: ID '[' INT ']'  */
#line 530 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2234 "y.tab.c"
    break;

  case 80: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 536 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2245 "y.tab.c"
    break;

  case 81: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 543 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2257 "y.tab.c"
    break;

  case 82: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 551 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2269 "y.tab.c"
    break;

  case 83: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 559 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2281 "y.tab.c"
    break;

  case 84: /* identifierDecl: ID '[' ID ']'  */
#line 567 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2291 "y.tab.c"
    break;

  case 85: /* identifierUse: ID  */
#line 578 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 2299 "y.tab.c"
    break;

  case 86: /* identifierUse: ID '[' expr ']'  */
#line 582 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2309 "y.tab.c"
    break;

  case 87: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 588 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2320 "y.tab.c"
    break;

  case 88: /* identifierUse: TypeField  */
#line 594 "expr_tree.y"
              {(yyval.node) = (yyvsp[0].node);}
#line 2326 "y.tab.c"
    break;

  case 89: /* identifierUse: INITIALIZE '(' ')'  */
#line 596 "expr_tree.y"
    {
      (yyval.node) = makeHeapInitNode();
    }
#line 2334 "y.tab.c"
    break;

  case 90: /* identifierUse: ALLOC '(' ')'  */
#line 600 "expr_tree.y"
    {
      (yyval.node) = makeHeapAllocateNode();
    }
#line 2342 "y.tab.c"
    break;

  case 91: /* identifierUse: FREE '(' expr ')'  */
#line 604 "expr_tree.y"
    {
      (yyval.node) = makeHeapFreeNode((yyvsp[-1].node));
    }
#line 2350 "y.tab.c"
    break;

  case 92: /* FDefBlock: FDefBlock FDef  */
#line 616 "expr_tree.y"
      {

      }
#line 2358 "y.tab.c"
    break;

  case 93: /* FDefBlock: FDef  */
#line 620 "expr_tree.y"
      {
      }
#line 2365 "y.tab.c"
    break;

  case 94: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 626 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2375 "y.tab.c"
    break;

  case 95: /* Body: START Slist ReturnStmt END  */
#line 637 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2384 "y.tab.c"
    break;

  case 96: /* Body: START ReturnStmt END  */
#line 642 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[0].node),NULL);
      (yyval.node) = NULL;
    }
#line 2393 "y.tab.c"
    break;

  case 97: /* ParamList: ParamList ',' Param  */
#line 650 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2404 "y.tab.c"
    break;

  case 98: /* ParamList: Param  */
#line 657 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 2413 "y.tab.c"
    break;

  case 99: /* ParamList: %empty  */
#line 662 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2421 "y.tab.c"
    break;

  case 100: /* Param: Type ID  */
#line 669 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 2429 "y.tab.c"
    break;

  case 102: /* LDeclBlock: DECL ENDDECL  */
#line 678 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2437 "y.tab.c"
    break;

  case 105: /* LDecl: ID LIdList SEMICOLON  */
#line 690 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2445 "y.tab.c"
    break;

  case 106: /* LIdList: LIdList ',' ID  */
#line 697 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 2454 "y.tab.c"
    break;

  case 107: /* LIdList: ID  */
#line 702 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 2463 "y.tab.c"
    break;

  case 108: /* ArgList: ArgList ',' expr  */
#line 713 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2472 "y.tab.c"
    break;

  case 109: /* ArgList: expr  */
#line 718 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2480 "y.tab.c"
    break;

  case 110: /* Slist: Slist Stmt  */
#line 725 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2486 "y.tab.c"
    break;

  case 111: /* Slist: Stmt  */
#line 726 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2492 "y.tab.c"
    break;

  case 125: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 748 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2500 "y.tab.c"
    break;

  case 126: /* ReturnStmt: RETURN SEMICOLON  */
#line 752 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2508 "y.tab.c"
    break;

  case 131: /* Decl: Type VarList SEMICOLON  */
#line 766 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
     
    }
#line 2518 "y.tab.c"
    break;

  case 133: /* VarList: VarList ',' identifierDecl  */
#line 776 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2524 "y.tab.c"
    break;

  case 134: /* VarList: identifierDecl  */
#line 777 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2530 "y.tab.c"
    break;

  case 135: /* brkStmt: BREAK SEMICOLON  */
#line 781 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2536 "y.tab.c"
    break;

  case 136: /* contStmt: CONTINUE SEMICOLON  */
#line 784 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2542 "y.tab.c"
    break;

  case 137: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 787 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2548 "y.tab.c"
    break;

  case 138: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 790 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2554 "y.tab.c"
    break;

  case 139: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 791 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2560 "y.tab.c"
    break;

  case 140: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 794 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2566 "y.tab.c"
    break;

  case 141: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 797 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2572 "y.tab.c"
    break;

  case 142: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 800 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2578 "y.tab.c"
    break;

  case 143: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 803 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2584 "y.tab.c"
    break;

  case 144: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 806 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2590 "y.tab.c"
    break;

  case 145: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 809 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2596 "y.tab.c"
    break;

  case 146: /* expr: expr PLUS expr  */
#line 812 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2602 "y.tab.c"
    break;

  case 147: /* expr: expr MINUS expr  */
#line 813 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2608 "y.tab.c"
    break;

  case 148: /* expr: expr MUL expr  */
#line 814 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2614 "y.tab.c"
    break;

  case 149: /* expr: expr DIV expr  */
#line 815 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2620 "y.tab.c"
    break;

  case 150: /* expr: expr MOD expr  */
#line 816 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2626 "y.tab.c"
    break;

  case 151: /* expr: '(' expr ')'  */
#line 817 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2632 "y.tab.c"
    break;

  case 152: /* expr: INT  */
#line 818 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2638 "y.tab.c"
    break;

  case 153: /* expr: identifierUse  */
#line 819 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2644 "y.tab.c"
    break;

  case 154: /* expr: STRING  */
#line 820 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2650 "y.tab.c"
    break;

  case 155: /* expr: expr LT expr  */
#line 821 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2656 "y.tab.c"
    break;

  case 156: /* expr: expr GT expr  */
#line 822 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2662 "y.tab.c"
    break;

  case 157: /* expr: expr LE expr  */
#line 823 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2668 "y.tab.c"
    break;

  case 158: /* expr: expr GE expr  */
#line 824 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2674 "y.tab.c"
    break;

  case 159: /* expr: expr NE expr  */
#line 825 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2680 "y.tab.c"
    break;

  case 160: /* expr: expr EQ expr  */
#line 826 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2686 "y.tab.c"
    break;

  case 161: /* expr: expr AND expr  */
#line 827 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2692 "y.tab.c"
    break;

  case 162: /* expr: expr OR expr  */
#line 828 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2698 "y.tab.c"
    break;

  case 163: /* expr: NOT expr  */
#line 829 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2704 "y.tab.c"
    break;

  case 164: /* expr: ID '(' ')'  */
#line 830 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2710 "y.tab.c"
    break;

  case 165: /* expr: ID '(' ArgList ')'  */
#line 831 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2716 "y.tab.c"
    break;

  case 166: /* expr: NULLVAL  */
#line 832 "expr_tree.y"
             {(yyval.node) = makeNullNode();}
#line 2722 "y.tab.c"
    break;

  case 167: /* expr: ClassField  */
#line 833 "expr_tree.y"
               {}
#line 2728 "y.tab.c"
    break;

  case 168: /* expr: ClassFieldFunction  */
#line 834 "expr_tree.y"
                       {}
#line 2734 "y.tab.c"
    break;


#line 2738 "y.tab.c"

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

#line 837 "expr_tree.y"


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
  // stack
  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  // heap
  _HEAP_POINTER = _INITIAL_HEAP_POINTER;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}
