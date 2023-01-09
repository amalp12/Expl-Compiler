/*Declarations section start here*/

/* Auxiliary declarations start here*/

%{
#include <stdlib.h>
 #include <stdio.h>
 int num_1;
%}

/*Auxiliary declarations end & Regular definitions start here*/

/*Regular definition*/
number [0-9]+           
/*Regular definition*/
op [-|+|*|/|^|=]    

    

/*Declarations section ends here*/

%%


{number} {
                printf("number");
               
              }
{op} {
        printf("operator");
     }

%%

/* Auxiliary functions */
int yywrap()
{
    return 1;
}

int main()
{
    num_1 = yylex();
    printf("%d\n",num_1);
    return 1;
}
