%{
#include <stdio.h>
int int_cnt;
int float_cnt;
int char_cnt;
int res;
%}

integer [0-9]*
floating_point [0-9]*.[0-9]*
character [a-zA-Z]* 
%%

{integer} {
    int_cnt++;
    printf("Int Cnt %d  , Float Cnt %d, Char Cnt %d\n", int_cnt, float_cnt,char_cnt);
}
{floating_point} {
    float_cnt++;
    printf("Int Cnt %d  , Float Cnt %d, Char Cnt %d\n", int_cnt, float_cnt,char_cnt);
    
}
{character} {
    char_cnt++;
    printf("Int Cnt %d  , Float Cnt %d, Char Cnt %d\n", int_cnt, float_cnt,char_cnt);

}

%%

int yywrap()
{
    return 1;
}

int main()
{
    int_cnt = 0;
    float_cnt = 0;
    char_cnt = 0;
    res = yylex();

    return 1;

}