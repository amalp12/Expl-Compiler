#!/bin/bash
path="input.expl"
yacc -d expr_tree.y -Wcounterexamples
lex expr_tree.l
gcc -g -ll y.tab.c lex.yy.c -o a.out
echo "Generating Assembly Code..."
./a.out $path
retVal=$?
if [ $retVal -eq 0 ]; then
    echo "Compilation successful"
    lex label_translation.l
    gcc -g lex.yy.c -o a.out
    ./a.out  
    cd ../
    echo "Executing the assembly code..."
    ./xsm -l library.lib -e ./stage_8/assemblycode.xsm --debug
    cd stage_8
else
    echo "Compilation failed"
    exit 1
fi
