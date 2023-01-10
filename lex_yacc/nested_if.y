%{
    #include<stdio.h>
    #include<stdlib.h>
    int count = 0;
%}

%token IF RELOP S NUMBER ID

%%

stmt: if_stmt {printf("No of nested if statements : %d\n",count);exit(0);}
    ;         

if_stmt: IF'('cond')''{'if_stmt'}' {count++;}
       |S
       ;

cond: x RELOP x
    ;

x: ID
 | NUMBER
 ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}

main()
{
    printf("Enter the statement : \n");
    yyparse();
}

