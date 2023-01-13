/*
1.    At the leaf nodes of the tree (corresponding to a NUM), Allocate a new register and store the number to the register.

2.    At the intermediete nodes:

    a. Generate code for the left subtree (recursively). Find out the register holding the result.

    b. Evaluate the right subtree (recursively). Find out the register holding the result.

    c. ADD the contents of the two registers and store the result in the lower numbered register.

    d. Release the higher numbered register and return.
*/


int getFreeReg() // Allocate a free register
{
    if(LAST_USED_REGISTER == 19)
    {
        printf("Error : All registers used up!\n");
        return -1;
    }
    LAST_USED_REGISTER++;
    return LAST_USED_REGISTER;
}

void freeLastReg() // Free the last used register
{
    if(LAST_USED_REGISTER==-1)
    {
        printf("Error : All available registers are already freed!\n");
        return;
    }
    LAST_USED_REGISTER--;
}

reg_index codeGen( struct expr_tree_node *t, FILE * target_file) {
    
    
    
    

    // Corner null case
    if(t==NULL) return 0;

    // Evaluating the left and right trees respectively
    // Note that the order is very important
    reg_index leftReg = codeGen(t->left, target_file);
    reg_index rightReg = codeGen(t->right, target_file);

    // leaf node case (base case)
    if(t->left == NULL && t->right == NULL)
    {

        reg_index newReg= getFreeReg();
        fprintf(target_file, "MOV R%d, %d\n", newReg,  t->value);
        return newReg;

    }



    // Addition
    if(!strcmp(t->operator, "+"))
    {
        fprintf(target_file, "ADD R%d, R%d\n", leftReg, rightReg);
    }


    // Subtraction
    if(!strcmp(t->operator, "-"))
    {
        fprintf(target_file, "SUB R%d, R%d\n", leftReg, rightReg);
    }

    // Muliplication
    if(!strcmp(t->operator, "*"))
    {
        fprintf(target_file, "MUL R%d, R%d\n", leftReg, rightReg);
    }

    // Division
    if(!strcmp(t->operator, "/"))
    {
        fprintf(target_file, "DIV R%d, R%d\n", leftReg, rightReg);
    }


    // freeing the register used by the right tree evaluation
    freeLastReg();

    // the result is stored in the register used for left tree evaluation
    // return register number storing result
    if(leftReg<rightReg) return leftReg;
    else return rightReg;   


    
}

void write(reg_index reg_number, FILE * target_file)
{
    for(int i = 0 ; i <= LAST_USED_REGISTER; i++)
    {
        fprintf(target_file, "PUSH R%d\n", i);

    }


    fprintf(target_file, "MOV R1, R%d\n",reg_number); 
    fprintf(target_file, "MOV R0, \"Write\"\n"); 
    fprintf(target_file, "PUSH R0\n"); //func
    fprintf(target_file, "MOV R0, -2\n");
    fprintf(target_file, "PUSH R0\n"); // 1
    fprintf(target_file, "PUSH R1\n"); // 2
    fprintf(target_file, "PUSH R0\n"); //3
    fprintf(target_file, "PUSH R0\n"); // ret
    fprintf(target_file, "CALL 0\n");



    for(int i = LAST_USED_REGISTER ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }

}