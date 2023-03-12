%{
#ifndef _YTAB_H
#define _YTAB_H
#include "y.tab.h"
#endif

#ifndef _TYPEDEF_H
#define _TYPE_DEF_H
#include "typedef.h"
#endif

extern struct expr_tree_node * makeStringNode(char * string, int offset);

extern struct expr_tree_node * makeIdNode(char * varname);

extern struct expr_tree_node * makeNumberNode(int num );

%}

identifier ([a-zA-Z]|_[a-zA-Z])[a-zA-Z0-9_]*
strings \"((\\\")|[^"])*\"
numbers [0-9]+

%%


{numbers} {
    yylval.node = makeNumberNode(atoi((yytext)));
    return INT;
}
    
"+" {
    return PLUS;
}
    
"-" {
    return MINUS;
}
    
"*" {
    return MUL;
}
    
"/" {
    return DIV;
}

"=" {
    return EQUALS;
}

";" {
    return SEMICOLON;
}
    
"read" {
    return READ;
}

"write" {
    return WRITE;
}

"begin" {
    return START;
}

"end" {
    return END;
}
"if" {
    return IF;
}
"else" {
    return ELSE;
}
"then" {
    return THEN;
}
"endif" {
    return ENDIF;
}
"while" {
    return WHILE;
}
"do" {
    return DO;
}
"endwhile" {
    return ENDWHILE;
}
"breakpoint" {
    return BREAKPOINT;
}
"break" {
    return BREAK;
}
"continue" {
    return CONTINUE;
}
"repeat" {
    return REPEAT;
}
"until" {
    return UNTIL;
}
"decl" {
    return DECL;
}
"enddecl" {
    return ENDDECL;
}
"type" {
    return TYPE;
}
"endtype" {
    return ENDTYPE;
}
">" {
    return GT;
}
"<" {
    return LT;
}
"==" {
    return EQ;
}
"!=" {
    return NE;
}
">=" {
    return GE;
}
"<=" {
    return LE;
}  
"%" {
    return MOD;
}

"return" {
    return RETURN;
}

"main" {
    return MAIN;
}
"AND"|"&&" {
    return AND;
}
"OR"|"||" {
    return OR;
}
"NOT" {
    return NOT;
}
"initialize" {
    return INITIALIZE;
}
"alloc" {
    return ALLOC;
}
"free" {
    return FREE;
}
"null"  {
    return NULLVAL;
}
"class" {
    return CLASS;
}
"endclass" {
    return ENDCLASS;
}
"extends" {
    return EXTENDS;
}
"new"   {
    return NEW;
}
"delete" {
    return DELETE;
}
"self" {
    return SELF;
}
[\t] {}
    
[(),\[\]%\{\}\|\&\.] {
    return *yytext;
}

[\n] {
    yylineno++;
}
    
{identifier} {
    //yylval.node = makeIdNode(yytext);
    yylval.string = strdup(yytext);
    return ID;
}
{strings} {
    // removing double quotes at either end
    yylval.node = makeStringNode(yytext+1,1);
    return STRING;
}

%%

int yywrap(void){
    return 1;
}