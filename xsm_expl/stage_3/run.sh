yacc -d expr_tree.y
lex expr_tree.l
gcc -g -ll y.tab.c lex.yy.c -o a.out
lldb ./a.out
