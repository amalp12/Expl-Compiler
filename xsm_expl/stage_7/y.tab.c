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

#ifndef _UNISTD_H
#define _UNISTD_H
#include <unistd.h>
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


#line 167 "y.tab.c"

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
#line 97 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct FieldList * typeField;

#line 334 "y.tab.c"

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
  YYSYMBOL_64_1 = 64,                      /* $@1  */
  YYSYMBOL_MainBlock = 65,                 /* MainBlock  */
  YYSYMBOL_ClassDefBlock = 66,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 67,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 68,                  /* ClassDef  */
  YYSYMBOL_ClassName = 69,                 /* ClassName  */
  YYSYMBOL_ClassFieldLists = 70,           /* ClassFieldLists  */
  YYSYMBOL_ClassFieldDecl = 71,            /* ClassFieldDecl  */
  YYSYMBOL_ClassMethodDeclList = 72,       /* ClassMethodDeclList  */
  YYSYMBOL_ClassMethodDecl = 73,           /* ClassMethodDecl  */
  YYSYMBOL_ClassParamList = 74,            /* ClassParamList  */
  YYSYMBOL_ClassMethodDefns = 75,          /* ClassMethodDefns  */
  YYSYMBOL_ClassFunctionDef = 76,          /* ClassFunctionDef  */
  YYSYMBOL_ClassFieldFunction = 77,        /* ClassFieldFunction  */
  YYSYMBOL_TypeDefBlock = 78,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 79,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 80,                   /* TypeDef  */
  YYSYMBOL_TypeFieldDeclList = 81,         /* TypeFieldDeclList  */
  YYSYMBOL_TypeFieldDecl = 82,             /* TypeFieldDecl  */
  YYSYMBOL_Field = 83,                     /* Field  */
  YYSYMBOL_GDeclBlock = 84,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 85,                 /* GDeclList  */
  YYSYMBOL_GDecl = 86,                     /* GDecl  */
  YYSYMBOL_GidList = 87,                   /* GidList  */
  YYSYMBOL_Gid = 88,                       /* Gid  */
  YYSYMBOL_GParamList = 89,                /* GParamList  */
  YYSYMBOL_identifierDecl = 90,            /* identifierDecl  */
  YYSYMBOL_identifierUse = 91,             /* identifierUse  */
  YYSYMBOL_FDefBlock = 92,                 /* FDefBlock  */
  YYSYMBOL_FDef = 93,                      /* FDef  */
  YYSYMBOL_Body = 94,                      /* Body  */
  YYSYMBOL_ParamList = 95,                 /* ParamList  */
  YYSYMBOL_Param = 96,                     /* Param  */
  YYSYMBOL_LDeclBlock = 97,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 98,                  /* LDecList  */
  YYSYMBOL_LDecl = 99,                     /* LDecl  */
  YYSYMBOL_LIdList = 100,                  /* LIdList  */
  YYSYMBOL_ArgList = 101,                  /* ArgList  */
  YYSYMBOL_Slist = 102,                    /* Slist  */
  YYSYMBOL_Stmt = 103,                     /* Stmt  */
  YYSYMBOL_ClassDeleteStmt = 104,          /* ClassDeleteStmt  */
  YYSYMBOL_ReturnStmt = 105,               /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 106,                 /* DeclStmt  */
  YYSYMBOL_DeclList = 107,                 /* DeclList  */
  YYSYMBOL_Decl = 108,                     /* Decl  */
  YYSYMBOL_Type = 109,                     /* Type  */
  YYSYMBOL_VarList = 110,                  /* VarList  */
  YYSYMBOL_brkStmt = 111,                  /* brkStmt  */
  YYSYMBOL_contStmt = 112,                 /* contStmt  */
  YYSYMBOL_brkpointStmt = 113,             /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 114,                   /* Ifstmt  */
  YYSYMBOL_Whilestmt = 115,                /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 116,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 117,              /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 118,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 119,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 120,                  /* AsgStmt  */
  YYSYMBOL_expr = 121                      /* expr  */
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   866

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  344

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
       0,   130,   130,   129,   137,   141,   145,   150,   155,   160,
     165,   170,   175,   183,   213,   216,   222,   230,   238,   243,
     251,   256,   263,   271,   275,   282,   292,   298,   303,   309,
     313,   321,   330,   345,   360,   402,   444,   448,   458,   462,
     463,   467,   474,   479,   486,   495,   503,   516,   552,   560,
     571,   572,   576,   583,   587,   594,   595,   605,   611,   616,
     621,   625,   631,   638,   646,   654,   662,   673,   677,   683,
     690,   694,   698,   702,   706,   710,   722,   726,   733,   744,
     749,   756,   763,   769,   775,   783,   784,   789,   796,   797,
     800,   807,   812,   823,   828,   837,   838,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     858,   862,   866,   873,   874,   876,   877,   880,   888,   891,
     892,   896,   899,   902,   905,   906,   909,   912,   915,   918,
     921,   924,   927,   928,   929,   930,   931,   932,   933,   934,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947
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
  "Program", "$@1", "MainBlock", "ClassDefBlock", "ClassDefList",
  "ClassDef", "ClassName", "ClassFieldLists", "ClassFieldDecl",
  "ClassMethodDeclList", "ClassMethodDecl", "ClassParamList",
  "ClassMethodDefns", "ClassFunctionDef", "ClassFieldFunction",
  "TypeDefBlock", "TypeDefList", "TypeDef", "TypeFieldDeclList",
  "TypeFieldDecl", "Field", "GDeclBlock", "GDeclList", "GDecl", "GidList",
  "Gid", "GParamList", "identifierDecl", "identifierUse", "FDefBlock",
  "FDef", "Body", "ParamList", "Param", "LDeclBlock", "LDecList", "LDecl",
  "LIdList", "ArgList", "Slist", "Stmt", "ClassDeleteStmt", "ReturnStmt",
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

#define YYPACT_NINF (-211)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      65,  -211,    29,    53,    55,    26,  -211,   -27,    33,    87,
      73,  -211,    60,  -211,    97,    69,    14,  -211,   121,    12,
    -211,    79,  -211,    87,  -211,   -27,    87,    87,  -211,    39,
    -211,    87,   127,  -211,  -211,   109,    16,  -211,  -211,    87,
    -211,  -211,   181,  -211,  -211,   155,  -211,    87,    87,  -211,
      87,  -211,  -211,   140,  -211,   145,    87,    42,  -211,    97,
      13,  -211,   196,  -211,    87,   175,  -211,  -211,  -211,    87,
     152,   106,  -211,   204,   153,   164,  -211,  -211,  -211,   202,
      87,  -211,   218,   182,   147,  -211,   208,  -211,    87,  -211,
     186,   197,  -211,  -211,    90,  -211,   233,   228,   -27,   214,
      87,    93,   262,  -211,   174,   185,    87,  -211,   267,    -3,
    -211,    87,   208,  -211,   268,  -211,    99,  -211,   768,   221,
     219,   220,   224,   225,    15,  -211,   271,   234,    87,    87,
     279,   262,  -211,    18,  -211,  -211,   120,   235,   236,   237,
     243,   768,   768,   100,   287,   288,   290,   479,   250,   255,
     260,   264,   266,   257,  -211,   270,   307,   768,  -211,  -211,
     312,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,   272,
     165,  -211,  -211,   273,  -211,   319,   320,   516,    88,   516,
     516,   516,   804,  -211,   660,  -211,   104,  -211,   323,  -211,
    -211,  -211,  -211,    62,  -211,  -211,  -211,   516,   516,  -211,
     567,   277,   278,   516,   326,   327,   328,   329,   516,  -211,
     325,  -211,    87,   334,    87,  -211,  -211,   285,   212,   291,
     352,   359,   378,   286,   293,  -211,  -211,   289,  -211,    23,
     112,   844,   418,   516,   516,   516,   516,  -211,   516,   516,
     516,   516,   516,   516,   516,   516,   516,  -211,  -211,   437,
     296,   297,   306,   308,   586,  -211,   201,  -211,  -211,   252,
     301,   356,   375,   363,   360,   516,   516,  -211,   323,  -211,
     203,   594,  -211,  -211,  -211,   154,   154,  -211,   533,   533,
     238,   238,   179,   179,   844,   844,  -211,  -211,   379,   269,
     300,  -211,   333,  -211,   207,   516,  -211,  -211,   768,   768,
     444,   496,  -211,  -211,   516,  -211,  -211,   211,  -211,   213,
     208,  -211,   231,   624,   696,    91,   380,   594,  -211,  -211,
     262,  -211,   768,   381,   382,  -211,  -211,   344,   732,  -211,
    -211,  -211,   391,  -211
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   118,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    49,     0,    51,     0,     0,     0,    40,    18,     0,
      16,     0,     1,     0,     9,     0,     0,     0,    77,     0,
      11,     0,     0,    48,    50,    60,     0,    54,    55,     0,
      38,    39,     0,    14,    15,     0,     2,     0,     0,     7,
       0,     8,    76,     0,    10,     0,    59,     0,    52,     0,
       0,    43,     0,    19,     0,     0,     4,     5,     6,    83,
       0,     0,    58,     0,     0,     0,    53,    41,    42,     0,
       0,    21,     0,     0,     0,    82,    87,    56,     0,    84,
      61,    66,    44,    20,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,     0,    23,     0,     0,
      22,     0,    87,    81,     0,    86,     0,    89,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,    28,     0,
       0,     0,    92,     0,    85,    88,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    74,     0,     0,    96,   109,
     108,   107,   102,   103,   104,   100,   101,   105,   106,    97,
      98,    99,    13,    62,    64,    63,    65,    17,    29,     0,
       0,    27,     3,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,   114,     0,   116,     0,   121,
     123,   122,   138,    67,   112,   140,   152,     0,     0,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
     108,    80,    83,     0,     0,    78,    91,    46,     0,     0,
       0,     0,     0,     0,     0,   113,   115,    60,   120,     0,
       0,   149,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,     0,
       0,     0,    47,    45,     0,    79,     0,    25,    26,     0,
      68,     0,     0,     0,     0,     0,     0,   117,     0,   150,
       0,    94,   137,   134,   135,   132,   133,   136,   142,   141,
     144,   143,   145,   146,   147,   148,    72,    73,     0,     0,
       0,   131,     0,    35,     0,     0,   129,   130,     0,     0,
       0,     0,   119,   151,     0,   110,    33,     0,    37,     0,
      87,    34,     0,     0,     0,     0,     0,    93,    32,    36,
       0,    69,     0,     0,     0,   128,   127,     0,     0,   125,
     126,    31,     0,   124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,  -211,  -211,     5,     9,  -211,   386,  -211,  -211,   332,
    -211,   314,  -211,  -211,   282,  -211,   348,  -211,   393,  -211,
     355,  -211,    59,  -211,   404,  -211,   358,  -211,  -187,  -117,
       7,   -12,  -127,   198,   -46,  -109,  -211,   302,  -211,  -210,
    -135,  -148,  -211,  -100,  -211,  -211,   223,     0,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,    65,     6,     7,    19,    20,    21,    80,    81,
      94,    95,   180,   124,   125,   154,     8,    16,    17,    60,
      61,   155,     9,    12,    13,    36,    37,    71,    38,   209,
      27,    28,   119,    84,    85,   102,   116,   117,   133,   280,
     157,   158,   159,   193,   161,   196,   197,    29,   239,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   281
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   156,    14,   131,   183,     2,   192,   194,   110,   219,
      72,   238,    14,    24,    30,    52,    31,    25,   160,    52,
      18,     1,    15,     1,   156,   156,    22,    58,    46,   184,
      47,    49,    51,    50,   277,    52,    54,     1,    52,    62,
     156,     1,   103,   210,   219,    74,   219,    53,    10,    40,
      75,   128,    66,    67,   113,    68,    73,   220,    43,   304,
      62,    15,    11,    18,    82,     2,    23,    26,     1,    73,
      77,   229,   177,     1,    59,   156,   185,   156,     4,    32,
      96,   278,   181,   228,    48,   230,   231,   232,    73,   317,
     319,   312,    98,    33,   108,     1,   136,     2,     1,     3,
      73,   114,   335,   241,   242,    35,   126,   114,     1,   259,
       4,   130,     1,    32,   264,   202,   240,    52,   129,   309,
     203,   186,   187,   106,   126,    39,   115,   205,    73,   148,
     149,   150,   134,   195,   182,    45,   151,   235,   153,   283,
     284,   285,   286,   198,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   148,   149,   150,   206,   111,   243,   244,
     151,    87,   153,    56,    88,   207,   208,   279,    42,    57,
     248,   310,   311,   323,   324,   219,   219,   120,   268,   186,
     187,    55,   121,   243,   244,   245,   246,    64,   122,    63,
     219,   156,   156,   123,    69,   248,   198,   338,   251,   252,
      70,   322,    99,   337,    79,   100,   156,   156,    86,     3,
     327,   330,    89,    92,    90,   156,   243,   244,   245,   246,
     223,   156,    73,   224,    73,    91,    97,     4,   248,   249,
     250,   251,   252,   253,   254,   243,   244,   245,   246,   110,
     101,   109,   243,   244,   245,   246,   104,   248,   249,   250,
     251,   252,   253,   254,   248,   202,   302,   105,   313,   100,
     203,   314,   321,   255,   256,   314,   328,   205,   329,   314,
     112,   314,   202,   270,   118,   127,   132,   203,   172,   179,
     173,   174,   255,   256,   205,   175,   176,    53,   128,   188,
     189,   190,   331,   148,   149,   150,   206,   191,   199,   200,
     151,   201,   153,   202,   211,   207,   208,   303,   203,   212,
     148,   149,   150,   206,   213,   205,   216,   151,   214,   153,
     215,   218,   207,   208,   316,   221,   222,   226,   227,   217,
     225,   237,   257,   258,   260,   261,   262,   263,   265,   269,
     275,   148,   149,   150,   206,   267,   271,   276,   151,    57,
     153,   297,   298,   207,   208,   318,   243,   244,   245,   246,
     299,   305,   300,   243,   244,   245,   246,   306,   248,   249,
     250,   251,   252,   253,   254,   248,   249,   250,   251,   252,
     253,   254,   243,   244,   245,   246,   307,   308,   309,   320,
     315,   336,   339,   340,   248,   249,   250,   251,   252,   253,
     254,   341,   343,   255,   256,    44,   178,   272,   107,    41,
     255,   256,    93,    83,   273,    78,    34,    76,   135,   236,
     266,     0,   243,   244,   245,   246,     0,     0,     0,   255,
     256,     0,     0,   274,   248,   249,   250,   251,   252,   253,
     254,   243,   244,   245,   246,     0,     0,     0,   243,   244,
     245,   246,     0,   248,   249,   250,   251,   252,   253,   254,
     248,   249,   250,   251,   252,   253,   254,     0,     0,   255,
     256,     0,     0,   282,     0,     0,     0,     0,     0,     0,
       0,     0,   202,     0,     0,     0,     0,   203,   255,   256,
     204,     0,   296,     0,   205,   255,   256,     0,     0,   325,
     243,   244,   245,   246,     0,     0,     0,     0,     0,     0,
       0,     0,   248,   249,   250,   251,   252,   253,   254,   202,
     148,   149,   150,   206,   203,     0,     0,   151,     0,   153,
       0,   205,   207,   208,     0,     0,     0,   243,   244,   245,
     246,     0,     0,     0,     0,     0,     0,   255,   256,   248,
       0,   326,   251,   252,   253,   254,     0,   148,   149,   150,
     206,     0,     0,     0,   151,     0,   153,     0,     0,   207,
     208,   243,   244,   245,   246,     0,     0,     0,   247,     0,
       0,     0,     0,   248,   249,   250,   251,   252,   253,   254,
     243,   244,   245,   246,     0,     0,     0,   301,   243,   244,
     245,   246,   248,   249,   250,   251,   252,   253,   254,     0,
     248,   249,   250,   251,   252,   253,   254,     0,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   137,   138,     0,     0,   255,   256,     0,
       0,     0,     0,     0,     0,   255,   256,   139,     0,   332,
     333,   140,   141,     0,   142,     0,   143,     0,     0,     0,
     144,   145,   146,   147,     0,   148,   149,   150,   136,   137,
     138,     0,   151,   152,   153,     0,     0,     0,     0,     0,
       0,     0,     0,   139,     0,     0,     0,   140,   141,     0,
     142,   234,   143,     0,     0,     0,   144,   145,   146,   147,
       0,   148,   149,   150,   136,   137,   138,     0,   151,   152,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,     0,     0,   140,   141,   334,   142,     0,   143,     0,
       0,     0,   144,   145,   146,   147,     0,   148,   149,   150,
     136,   137,   138,     0,   151,   152,   153,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,     0,   342,   140,
     141,     0,   142,     0,   143,     0,     0,     0,   144,   145,
     146,   147,     0,   148,   149,   150,   136,   137,   138,     0,
     151,   152,   153,     0,     0,     0,     0,     0,     0,     0,
       0,   139,     0,     0,     0,   140,   141,     0,   142,     0,
     143,     0,     0,     0,   144,   145,   146,   147,     0,   148,
     149,   150,   136,   137,   138,     0,   151,   152,   153,     0,
       0,     0,     0,     0,     0,     0,     0,   139,     0,     0,
       0,   233,   141,     0,   142,     0,   143,     0,     0,     0,
     144,   145,   146,   147,     0,   148,   149,   150,   243,   244,
     245,   246,   151,   152,   153,     0,     0,     0,     0,     0,
     248,   249,   250,   251,   252,   253,   254
};

static const yytype_int16 yycheck[] =
{
       0,   118,     2,   112,   131,    32,   141,   142,    11,   157,
      56,   198,    12,     8,     9,    27,     9,     8,   118,    31,
       8,     8,     8,     8,   141,   142,     0,    11,    23,    11,
      23,    26,    27,    26,    11,    47,    31,     8,    50,    39,
     157,     8,    88,   147,   192,     3,   194,     8,    48,    35,
       8,    54,    47,    48,   100,    50,    56,   157,    46,   269,
      60,     8,    33,     8,    64,    32,     7,     8,     8,    69,
      57,   188,    57,     8,    58,   192,    58,   194,    45,    40,
      80,    58,   128,   187,    25,   189,   190,   191,    88,   299,
     300,   278,    83,    33,    94,     8,     8,    32,     8,    34,
     100,     8,    11,   207,   208,     8,   106,     8,     8,   213,
      45,   111,     8,    40,   218,     3,    54,   129,   111,    28,
       8,    59,    60,    33,   124,    56,    33,    15,   128,    41,
      42,    43,    33,    33,   129,    56,    48,    33,    50,   243,
     244,   245,   246,   143,   248,   249,   250,   251,   252,   253,
     254,   255,   256,    41,    42,    43,    44,    98,     4,     5,
      48,    55,    50,    54,    58,    53,    54,    55,    47,    60,
      16,   275,   276,   308,   309,   323,   324,     3,   224,    59,
      60,    54,     8,     4,     5,     6,     7,    32,     3,     8,
     338,   308,   309,     8,    54,    16,   196,   332,    19,    20,
      55,   305,    55,   330,     8,    58,   323,   324,    56,    34,
     314,   320,     8,    11,    61,   332,     4,     5,     6,     7,
      55,   338,   222,    58,   224,    61,     8,    45,    16,    17,
      18,    19,    20,    21,    22,     4,     5,     6,     7,    11,
      32,     8,     4,     5,     6,     7,    60,    16,    17,    18,
      19,    20,    21,    22,    16,     3,    55,    60,    55,    58,
       8,    58,    55,    51,    52,    58,    55,    15,    55,    58,
      56,    58,     3,    61,    12,     8,     8,     8,    57,     8,
      61,    61,    51,    52,    15,    61,    61,     8,    54,    54,
      54,    54,    61,    41,    42,    43,    44,    54,    11,    11,
      48,    11,    50,     3,    54,    53,    54,    55,     8,    54,
      41,    42,    43,    44,    54,    15,    59,    48,    54,    50,
      54,    14,    53,    54,    55,    13,    54,     8,     8,    59,
      57,     8,    55,    55,     8,     8,     8,     8,    13,    54,
      54,    41,    42,    43,    44,    11,    55,    54,    48,    60,
      50,    55,    55,    53,    54,    55,     4,     5,     6,     7,
      54,    60,    54,     4,     5,     6,     7,    11,    16,    17,
      18,    19,    20,    21,    22,    16,    17,    18,    19,    20,
      21,    22,     4,     5,     6,     7,    11,    24,    28,    56,
      11,    11,    11,    11,    16,    17,    18,    19,    20,    21,
      22,    57,    11,    51,    52,    19,   124,    55,    94,    16,
      51,    52,    80,    65,    55,    60,    12,    59,   116,   196,
     222,    -1,     4,     5,     6,     7,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    16,    17,    18,    19,    20,    21,
      22,     4,     5,     6,     7,    -1,    -1,    -1,     4,     5,
       6,     7,    -1,    16,    17,    18,    19,    20,    21,    22,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    51,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,     8,    51,    52,
      11,    -1,    55,    -1,    15,    51,    52,    -1,    -1,    55,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,     3,
      41,    42,    43,    44,     8,    -1,    -1,    48,    -1,    50,
      -1,    15,    53,    54,    -1,    -1,    -1,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    16,
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
       0,     8,    32,    34,    45,    63,    65,    66,    78,    84,
     109,    33,    85,    86,   109,     8,    79,    80,     8,    67,
      68,    69,     0,    84,    65,    66,    84,    92,    93,   109,
      65,    92,    40,    33,    86,     8,    87,    88,    90,    56,
      35,    80,    47,    46,    68,    56,    65,    92,    84,    65,
      92,    65,    93,     8,    65,    54,    54,    60,    11,    58,
      81,    82,   109,     8,    32,    64,    65,    65,    65,    54,
      55,    89,    96,   109,     3,     8,    88,    57,    82,     8,
      70,    71,   109,    78,    95,    96,    56,    55,    58,     8,
      61,    61,    11,    71,    72,    73,   109,     8,    66,    55,
      58,    32,    97,    96,    60,    60,    33,    73,   109,     8,
      11,    84,    56,    96,     8,    33,    98,    99,    12,    94,
       3,     8,     3,     8,    75,    76,   109,     8,    54,    92,
     109,    97,     8,   100,    33,    99,     8,     9,    10,    23,
      27,    28,    30,    32,    36,    37,    38,    39,    41,    42,
      43,    48,    49,    50,    77,    83,    91,   102,   103,   104,
     105,   106,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    57,    61,    61,    61,    61,    57,    76,     8,
      74,    96,    65,    94,    11,    58,    59,    60,    54,    54,
      54,    54,   102,   105,   102,    33,   107,   108,   109,    11,
      11,    11,     3,     8,    11,    15,    44,    53,    54,    91,
     121,    54,    54,    54,    54,    54,    59,    59,    14,   103,
     105,    13,    54,    55,    58,    57,     8,     8,   121,    91,
     121,   121,   121,    27,    31,    33,   108,     8,    90,   110,
      54,   121,   121,     4,     5,     6,     7,    11,    16,    17,
      18,    19,    20,    21,    22,    51,    52,    55,    55,   121,
       8,     8,     8,     8,   121,    13,    95,    11,    96,    54,
      61,    55,    55,    55,    55,    54,    54,    11,    58,    55,
     101,   121,    55,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,    55,    55,    55,    54,
      54,    11,    55,    55,   101,    60,    11,    11,    24,    28,
     121,   121,    90,    55,    58,    11,    55,   101,    55,   101,
      56,    55,   121,   102,   102,    55,    55,   121,    55,    55,
      97,    61,    25,    26,    29,    11,    11,    94,   102,    11,
      11,    57,    26,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    64,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    65,    66,    67,    67,    68,    69,    69,
      70,    70,    71,    72,    72,    73,    74,    74,    74,    75,
      75,    76,    77,    77,    77,    77,    77,    77,    78,    79,
      79,    80,    81,    81,    82,    83,    83,    83,    84,    84,
      85,    85,    86,    87,    87,    88,    88,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    93,    94,
      94,    95,    95,    95,    96,    97,    97,    97,    98,    98,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     104,   105,   105,   106,   106,   107,   107,   108,   109,   110,
     110,   111,   112,   113,   114,   114,   115,   116,   117,   118,
     119,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     4,     4,     4,     3,     3,     2,
       3,     2,     1,     8,     3,     2,     1,     8,     1,     3,
       2,     1,     3,     2,     1,     6,     3,     1,     0,     2,
       1,     9,     6,     5,     6,     5,     6,     5,     3,     2,
       1,     4,     2,     1,     3,     3,     3,     3,     3,     2,
       2,     1,     3,     3,     1,     1,     4,     3,     1,     0,
       1,     4,     7,     7,     7,     7,     4,     1,     4,     7,
       3,     3,     4,     4,     1,     1,     2,     1,     9,     4,
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
  case 2: /* $@1: %empty  */
#line 130 "expr_tree.y"
    {
      exit(1);
    }
#line 1774 "y.tab.c"
    break;

  case 3: /* Program: ClassDefBlock GDeclBlock MainBlock $@1 TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 134 "expr_tree.y"
    {
      exit(1);
    }
#line 1782 "y.tab.c"
    break;

  case 4: /* Program: ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 138 "expr_tree.y"
    {
      exit(1);
    }
#line 1790 "y.tab.c"
    break;

  case 5: /* Program: TypeDefBlock ClassDefBlock GDeclBlock MainBlock  */
#line 142 "expr_tree.y"
    {
      exit(1);
    }
#line 1798 "y.tab.c"
    break;

  case 6: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 146 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1807 "y.tab.c"
    break;

  case 7: /* Program: TypeDefBlock GDeclBlock MainBlock  */
#line 151 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1816 "y.tab.c"
    break;

  case 8: /* Program: TypeDefBlock FDefBlock MainBlock  */
#line 156 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1825 "y.tab.c"
    break;

  case 9: /* Program: TypeDefBlock MainBlock  */
#line 161 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1834 "y.tab.c"
    break;

  case 10: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 166 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1843 "y.tab.c"
    break;

  case 11: /* Program: GDeclBlock MainBlock  */
#line 171 "expr_tree.y"
    {

      exit(1);
    }
#line 1852 "y.tab.c"
    break;

  case 12: /* Program: MainBlock  */
#line 176 "expr_tree.y"
    {
      exit(1);
    }
#line 1860 "y.tab.c"
    break;

  case 13: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 184 "expr_tree.y"
    {
  

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
#line 1889 "y.tab.c"
    break;

  case 15: /* ClassDefList: ClassDefList ClassDef  */
#line 217 "expr_tree.y"
    {
      // reset 
      resetCurrentClassBeingDefined();

    }
#line 1899 "y.tab.c"
    break;

  case 16: /* ClassDefList: ClassDef  */
#line 223 "expr_tree.y"
    {
      // reset
      resetCurrentClassBeingDefined();
    }
#line 1908 "y.tab.c"
    break;

  case 17: /* ClassDef: ClassName '{' DECL ClassFieldLists ClassMethodDeclList ENDDECL ClassMethodDefns '}'  */
#line 231 "expr_tree.y"
    {
      
      // class name, class fields, class methods declarations, class methods definitions
    }
#line 1917 "y.tab.c"
    break;

  case 18: /* ClassName: ID  */
#line 239 "expr_tree.y"
    {
      classInstall((yyvsp[0].string),NULL);
      (yyval.string) = (yyvsp[0].string);
    }
#line 1926 "y.tab.c"
    break;

  case 19: /* ClassName: ID EXTENDS ID  */
#line 244 "expr_tree.y"
    {
      classInstall((yyvsp[-2].string),(yyvsp[0].string));
      (yyval.string) = (yyvsp[-2].string);
    }
#line 1935 "y.tab.c"
    break;

  case 20: /* ClassFieldLists: ClassFieldLists ClassFieldDecl  */
#line 252 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1944 "y.tab.c"
    break;

  case 21: /* ClassFieldLists: ClassFieldDecl  */
#line 257 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1952 "y.tab.c"
    break;

  case 22: /* ClassFieldDecl: Type ID SEMICOLON  */
#line 264 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
      classFieldInstall(getCurrentClassBeingDefined(), (yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1961 "y.tab.c"
    break;

  case 23: /* ClassMethodDeclList: ClassMethodDeclList ClassMethodDecl  */
#line 272 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1969 "y.tab.c"
    break;

  case 24: /* ClassMethodDeclList: ClassMethodDecl  */
#line 276 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1977 "y.tab.c"
    break;

  case 25: /* ClassMethodDecl: Type ID '(' ClassParamList ')' SEMICOLON  */
#line 283 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-4].string), NULL);
    idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
    idNode->left = (yyvsp[-2].node);
    idNode->type = typeLookup((yyvsp[-5].string));
    (yyval.node) = idNode; 
  }
#line 1989 "y.tab.c"
    break;

  case 26: /* ClassParamList: ClassParamList ',' Param  */
#line 293 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1999 "y.tab.c"
    break;

  case 27: /* ClassParamList: Param  */
#line 299 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2007 "y.tab.c"
    break;

  case 28: /* ClassParamList: %empty  */
#line 303 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2015 "y.tab.c"
    break;

  case 29: /* ClassMethodDefns: ClassMethodDefns ClassFunctionDef  */
#line 310 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry(NULL);
    }
#line 2023 "y.tab.c"
    break;

  case 30: /* ClassMethodDefns: ClassFunctionDef  */
#line 314 "expr_tree.y"
  {
    popAllLocalDeclarationsAndCreateEntry(NULL);
  }
#line 2031 "y.tab.c"
    break;

  case 31: /* ClassFunctionDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 322 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeMethodDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineClassMethod(getCurrentClassBeingDefined(),funcNode, target_file);
    }
#line 2040 "y.tab.c"
    break;

  case 32: /* ClassFieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 331 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeIdNode("self");
    // get current class being defined
    struct ClassTable * currentClass = getCurrentClassBeingDefined();
    // if current class is null
    if(currentClass == NULL)
    {
      yyerror("Self can only be used inside a class \n");
      exit(1);
    }
    idNode->classType = currentClass;
    (yyval.node) = makeMethodCallNode((yyvsp[-3].string),idNode , (yyvsp[-1].node));

  }
#line 2059 "y.tab.c"
    break;

  case 33: /* ClassFieldFunction: SELF '.' ID '(' ')'  */
#line 346 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeIdNode("self");
    // get current class being defined
    struct ClassTable * currentClass = getCurrentClassBeingDefined();
    // if current class is null
    if(currentClass == NULL)
    {
      printf("Self can only be used inside a class \n");
      exit(1);
    }
    idNode->classType = currentClass;
    (yyval.node) = makeMethodCallNode((yyvsp[-2].string), idNode, NULL);

  }
#line 2078 "y.tab.c"
    break;

  case 34: /* ClassFieldFunction: ID '.' ID '(' ArgList ')'  */
#line 361 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeIdNode((yyvsp[-5].string));
    // search the id in the local symbol table
    struct LocalSymbolTable * LSTEntry = LSTLookup(idNode->varname);

    // search the id in the global symbol table
    struct GlobalSymbolTable * GSTEntry = GSTLookup(idNode->varname);

    // if both not found
    if(GSTEntry == NULL && LSTEntry == NULL)
    {
      printf("Variable %s not declared \n", idNode->varname);
      exit(1);
    }
    // if found in local symbol table
    if(LSTEntry != NULL)
    {
      idNode->classType = LSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }    
    // if found in global symbol table
    if(GSTEntry != NULL)
    {
      idNode->classType = GSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }


    (yyval.node) = makeMethodCallNode((yyvsp[-3].string), idNode, (yyvsp[-1].node));

  }
#line 2124 "y.tab.c"
    break;

  case 35: /* ClassFieldFunction: ID '.' ID '(' ')'  */
#line 403 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeIdNode((yyvsp[-4].string));
    // search the id in the local symbol table
    struct LocalSymbolTable * LSTEntry = LSTLookup(idNode->varname);

    // search the id in the global symbol table
    struct GlobalSymbolTable * GSTEntry = GSTLookup(idNode->varname);

    // if both not found
    if(GSTEntry == NULL && LSTEntry == NULL)
    {
      printf("Variable %s not declared \n", idNode->varname);
      exit(1);
    }
    // if found in local symbol table
    if(LSTEntry != NULL)
    {
      idNode->classType = LSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }    
    // if found in global symbol table
    if(GSTEntry != NULL)
    {
      idNode->classType = GSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }


    (yyval.node) = makeMethodCallNode((yyvsp[-2].string), idNode, NULL);

  }
#line 2170 "y.tab.c"
    break;

  case 36: /* ClassFieldFunction: Field '.' ID '(' ArgList ')'  */
#line 445 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-3].string), (yyvsp[-5].node), (yyvsp[-1].node));
  }
#line 2178 "y.tab.c"
    break;

  case 37: /* ClassFieldFunction: Field '.' ID '(' ')'  */
#line 449 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-2].string), (yyvsp[-4].node), NULL);
  }
#line 2186 "y.tab.c"
    break;

  case 41: /* TypeDef: ID '{' TypeFieldDeclList '}'  */
#line 468 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 2194 "y.tab.c"
    break;

  case 42: /* TypeFieldDeclList: TypeFieldDeclList TypeFieldDecl  */
#line 475 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2203 "y.tab.c"
    break;

  case 43: /* TypeFieldDeclList: TypeFieldDecl  */
#line 480 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2211 "y.tab.c"
    break;

  case 44: /* TypeFieldDecl: Type ID SEMICOLON  */
#line 487 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 2219 "y.tab.c"
    break;

  case 45: /* Field: Field '.' ID  */
#line 496 "expr_tree.y"
    { 
      insertIntoClassFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);

      
    }
#line 2230 "y.tab.c"
    break;

  case 46: /* Field: ID '.' ID  */
#line 504 "expr_tree.y"
    { 

      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode((yyvsp[-2].string),rightFieldNode,NULL);

      fieldCall(leftFieldNode,rightFieldNode);

      (yyval.node) = leftFieldNode;


    }
#line 2247 "y.tab.c"
    break;

  case 47: /* Field: SELF '.' ID  */
#line 517 "expr_tree.y"
    {
      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode("self",rightFieldNode,NULL);
      leftFieldNode->classType = getCurrentClassBeingDefined();

      // if left class type is null
      if(leftFieldNode->classType == NULL)
      {
        yyerror("Self not declared. Self can only be used inside classes.\n");
        exit(1);
      }

      
 
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
      // set the class type of the right field node
      rightFieldNode->classType = rightType->classType;
      (yyval.node) = leftFieldNode;


    }
#line 2284 "y.tab.c"
    break;

  case 48: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 553 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2296 "y.tab.c"
    break;

  case 49: /* GDeclBlock: DECL ENDDECL  */
#line 561 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2308 "y.tab.c"
    break;

  case 52: /* GDecl: Type GidList SEMICOLON  */
#line 577 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 2316 "y.tab.c"
    break;

  case 53: /* GidList: GidList ',' Gid  */
#line 584 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2324 "y.tab.c"
    break;

  case 54: /* GidList: Gid  */
#line 588 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2332 "y.tab.c"
    break;

  case 55: /* Gid: identifierDecl  */
#line 594 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 2338 "y.tab.c"
    break;

  case 56: /* Gid: ID '(' GParamList ')'  */
#line 596 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 2349 "y.tab.c"
    break;

  case 57: /* GParamList: GParamList ',' Param  */
#line 606 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2359 "y.tab.c"
    break;

  case 58: /* GParamList: Param  */
#line 612 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2367 "y.tab.c"
    break;

  case 59: /* GParamList: %empty  */
#line 616 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2375 "y.tab.c"
    break;

  case 60: /* identifierDecl: ID  */
#line 622 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 2383 "y.tab.c"
    break;

  case 61: /* identifierDecl: ID '[' INT ']'  */
#line 626 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2393 "y.tab.c"
    break;

  case 62: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 632 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2404 "y.tab.c"
    break;

  case 63: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 639 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2416 "y.tab.c"
    break;

  case 64: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 647 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2428 "y.tab.c"
    break;

  case 65: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 655 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2440 "y.tab.c"
    break;

  case 66: /* identifierDecl: ID '[' ID ']'  */
#line 663 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2450 "y.tab.c"
    break;

  case 67: /* identifierUse: ID  */
#line 674 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 2458 "y.tab.c"
    break;

  case 68: /* identifierUse: ID '[' expr ']'  */
#line 678 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2468 "y.tab.c"
    break;

  case 69: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 684 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2479 "y.tab.c"
    break;

  case 70: /* identifierUse: INITIALIZE '(' ')'  */
#line 691 "expr_tree.y"
    {
      (yyval.node) = makeHeapInitNode();
    }
#line 2487 "y.tab.c"
    break;

  case 71: /* identifierUse: ALLOC '(' ')'  */
#line 695 "expr_tree.y"
    {
      (yyval.node) = makeHeapAllocateNode();
    }
#line 2495 "y.tab.c"
    break;

  case 72: /* identifierUse: FREE '(' expr ')'  */
#line 699 "expr_tree.y"
    {
      (yyval.node) = makeHeapFreeNode((yyvsp[-1].node));
    }
#line 2503 "y.tab.c"
    break;

  case 73: /* identifierUse: NEW '(' ID ')'  */
#line 703 "expr_tree.y"
  {
    (yyval.node) = makeNewNode((yyvsp[-1].string));
  }
#line 2511 "y.tab.c"
    break;

  case 74: /* identifierUse: Field  */
#line 707 "expr_tree.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2519 "y.tab.c"
    break;

  case 75: /* identifierUse: ClassFieldFunction  */
#line 711 "expr_tree.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2527 "y.tab.c"
    break;

  case 76: /* FDefBlock: FDefBlock FDef  */
#line 723 "expr_tree.y"
      {

      }
#line 2535 "y.tab.c"
    break;

  case 77: /* FDefBlock: FDef  */
#line 727 "expr_tree.y"
      {
      }
#line 2542 "y.tab.c"
    break;

  case 78: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 734 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2552 "y.tab.c"
    break;

  case 79: /* Body: START Slist ReturnStmt END  */
#line 745 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2561 "y.tab.c"
    break;

  case 80: /* Body: START ReturnStmt END  */
#line 750 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),NULL);
    }
#line 2569 "y.tab.c"
    break;

  case 81: /* ParamList: ParamList ',' Param  */
#line 757 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2580 "y.tab.c"
    break;

  case 82: /* ParamList: Param  */
#line 764 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 2589 "y.tab.c"
    break;

  case 83: /* ParamList: %empty  */
#line 769 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2597 "y.tab.c"
    break;

  case 84: /* Param: Type ID  */
#line 776 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 2605 "y.tab.c"
    break;

  case 86: /* LDeclBlock: DECL ENDDECL  */
#line 785 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2613 "y.tab.c"
    break;

  case 87: /* LDeclBlock: %empty  */
#line 789 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2621 "y.tab.c"
    break;

  case 90: /* LDecl: ID LIdList SEMICOLON  */
#line 801 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2629 "y.tab.c"
    break;

  case 91: /* LIdList: LIdList ',' ID  */
#line 808 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 2638 "y.tab.c"
    break;

  case 92: /* LIdList: ID  */
#line 813 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 2647 "y.tab.c"
    break;

  case 93: /* ArgList: ArgList ',' expr  */
#line 824 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2656 "y.tab.c"
    break;

  case 94: /* ArgList: expr  */
#line 829 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2664 "y.tab.c"
    break;

  case 95: /* Slist: Slist Stmt  */
#line 837 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2670 "y.tab.c"
    break;

  case 96: /* Slist: Stmt  */
#line 838 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2676 "y.tab.c"
    break;

  case 111: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 863 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2684 "y.tab.c"
    break;

  case 112: /* ReturnStmt: RETURN SEMICOLON  */
#line 867 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2692 "y.tab.c"
    break;

  case 117: /* Decl: Type VarList SEMICOLON  */
#line 881 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
     
    }
#line 2702 "y.tab.c"
    break;

  case 119: /* VarList: VarList ',' identifierDecl  */
#line 891 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2708 "y.tab.c"
    break;

  case 120: /* VarList: identifierDecl  */
#line 892 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2714 "y.tab.c"
    break;

  case 121: /* brkStmt: BREAK SEMICOLON  */
#line 896 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2720 "y.tab.c"
    break;

  case 122: /* contStmt: CONTINUE SEMICOLON  */
#line 899 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2726 "y.tab.c"
    break;

  case 123: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 902 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2732 "y.tab.c"
    break;

  case 124: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 905 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2738 "y.tab.c"
    break;

  case 125: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 906 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2744 "y.tab.c"
    break;

  case 126: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 909 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2750 "y.tab.c"
    break;

  case 127: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 912 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2756 "y.tab.c"
    break;

  case 128: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 915 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2762 "y.tab.c"
    break;

  case 129: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 918 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2768 "y.tab.c"
    break;

  case 130: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 921 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2774 "y.tab.c"
    break;

  case 131: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 924 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2780 "y.tab.c"
    break;

  case 132: /* expr: expr PLUS expr  */
#line 927 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2786 "y.tab.c"
    break;

  case 133: /* expr: expr MINUS expr  */
#line 928 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2792 "y.tab.c"
    break;

  case 134: /* expr: expr MUL expr  */
#line 929 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2798 "y.tab.c"
    break;

  case 135: /* expr: expr DIV expr  */
#line 930 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2804 "y.tab.c"
    break;

  case 136: /* expr: expr MOD expr  */
#line 931 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2810 "y.tab.c"
    break;

  case 137: /* expr: '(' expr ')'  */
#line 932 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2816 "y.tab.c"
    break;

  case 138: /* expr: INT  */
#line 933 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2822 "y.tab.c"
    break;

  case 139: /* expr: identifierUse  */
#line 934 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2828 "y.tab.c"
    break;

  case 140: /* expr: STRING  */
#line 935 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2834 "y.tab.c"
    break;

  case 141: /* expr: expr LT expr  */
#line 936 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2840 "y.tab.c"
    break;

  case 142: /* expr: expr GT expr  */
#line 937 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2846 "y.tab.c"
    break;

  case 143: /* expr: expr LE expr  */
#line 938 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2852 "y.tab.c"
    break;

  case 144: /* expr: expr GE expr  */
#line 939 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2858 "y.tab.c"
    break;

  case 145: /* expr: expr NE expr  */
#line 940 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2864 "y.tab.c"
    break;

  case 146: /* expr: expr EQ expr  */
#line 941 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2870 "y.tab.c"
    break;

  case 147: /* expr: expr AND expr  */
#line 942 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2876 "y.tab.c"
    break;

  case 148: /* expr: expr OR expr  */
#line 943 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2882 "y.tab.c"
    break;

  case 149: /* expr: NOT expr  */
#line 944 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2888 "y.tab.c"
    break;

  case 150: /* expr: ID '(' ')'  */
#line 945 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2894 "y.tab.c"
    break;

  case 151: /* expr: ID '(' ArgList ')'  */
#line 946 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2900 "y.tab.c"
    break;

  case 152: /* expr: NULLVAL  */
#line 947 "expr_tree.y"
             {(yyval.node) = makeNullNode();}
#line 2906 "y.tab.c"
    break;


#line 2910 "y.tab.c"

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

#line 951 "expr_tree.y"


void yyerror(char const *s)
{
    // print error and line number
    printf("yyerror %s : %s at line number %d\n",s, yytext, yylineno);
}

int main()
{

  FILE * input_file=fopen("input.expl","r");
  target_file = fopen("untranslated_assembly.xsm","w+");
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
