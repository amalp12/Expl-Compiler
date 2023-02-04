yacc -d expr_tree.y
lex expr_tree.l
gcc -g -ll y.tab.c lex.yy.c -o a.out
./a.out
lex label_translation.l
gcc -g lex.yy.c -o a.out
./a.out  
cd ../
./xsm -l library.lib -e ./stage_5/assemblycode.xsm --debug
cd stage_5