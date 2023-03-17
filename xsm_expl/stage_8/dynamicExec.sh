#!/bin/bash
echo Enter the test program number of the test program you want to execute:
read testNumber
yacc -d expr_tree.y -Wcounterexamples
lex expr_tree.l
gcc -g -ll y.tab.c lex.yy.c -o a.out
echo "Generating Assembly Code..."
./a.out ./test_programs/test_program_$testNumber.expl
retVal=$?
if [ $retVal -eq 0 ]; then
    echo "Compilation successful"
    lex label_translation.l
    gcc -g lex.yy.c -o a.out
    ./a.out  
    cd ../
    ./xsm -l library.lib -e ./stage_8/assemblycode.xsm --debug
    cd stage_8
else
    echo "Compilation failed"
    exit 1
fi
