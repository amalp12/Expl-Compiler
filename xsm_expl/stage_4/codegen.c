
/*
1.    At the leaf nodes of the tree (corresponding to a NUM), Allocate a new register and store the number to the register.

2.    At the intermediete nodes:

    a. Generate code for the left subtree (recursively). Find out the register holding the result.

    b. Evaluate the right subtree (recursively). Find out the register holding the result.

    c. ADD the contents of the two registers and store the result in the lower numbered register.

    d. Release the higher numbered register and return.
*/


int getNewLabel() // Get a new label number
{
    LAST_USED_LABEL++;
    return LAST_USED_LABEL;
}

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
    fprintf(target_file, "POP R0\n"); // ret
    fprintf(target_file, "POP R0\n"); //3
    fprintf(target_file, "POP R1\n"); // 2
    fprintf(target_file, "POP R0\n"); // 1
    fprintf(target_file, "POP R0\n"); //func


    for(int i = LAST_USED_REGISTER ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }

}




void read(reg_index reg_number, FILE * target_file)
{
    for(int i = 0 ; i <= LAST_USED_REGISTER; i++)
    {
        fprintf(target_file, "PUSH R%d\n", i);

    }


    fprintf(target_file, "MOV R1, R%d\n",reg_number); 
    fprintf(target_file, "MOV R0, \"Read\"\n"); 
    fprintf(target_file, "PUSH R0\n"); //func
    fprintf(target_file, "MOV R0, -1\n");
    fprintf(target_file, "PUSH R0\n"); // 1
    fprintf(target_file, "PUSH R1\n"); // 2
    fprintf(target_file, "PUSH R0\n"); //3
    fprintf(target_file, "PUSH R0\n"); // ret
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R0\n"); // ret
    fprintf(target_file, "POP R0\n"); //3
    fprintf(target_file, "POP R1\n"); // 2
    fprintf(target_file, "POP R0\n"); // 1
    fprintf(target_file, "POP R0\n"); //func


    for(int i = LAST_USED_REGISTER ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }

}

// int getVarAddress(char * varname)
// {
//     struct Gsymbol * entry = GSTLookup(varname);

//     if(entry==NULL)
//     {
//         printf("Variable Doesn't Exist!");
//         exit(1);
//     }
//     return entry -> binding; 

// }

int evaluate( struct expr_tree_node *t, int * identifier) {
    
    // Corner null case
    if(t==NULL) return -1;

    

   
    int return_val=-1;
    switch (t->nodetype)
    {
    
        case(_NODE_TYPE_ID):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);
            int index= *(t->varname)-'a';
            return_val = identifier[index];
            break;
        }
        case(_NODE_TYPE_NUM):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);
            return_val =  t->val;
            break;
        }
        // Addition
        case (_NODE_TYPE_PLUS):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg+rightReg;
            break;
        }
        // Subtraction
        case(_NODE_TYPE_MINUS):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg-rightReg;
            break;
        }

        // Muliplication
        case(_NODE_TYPE_MUL):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg*rightReg;
            break;
        }

        // Division
        case(_NODE_TYPE_DIV):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg/rightReg;
            break;
        }

        // EQUAL TO
        case(_NODE_TYPE_EQUALS):
        {
            
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);
            identifier[*(t->left->varname)-'a'] = rightReg;
            return_val =  -1;
            break;
        }
        case(_NODE_TYPE_CONNECTOR):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);
            return_val =  -1;
            break;
        }
        case(_NODE_TYPE_READ):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);
            int index = *(t->left->varname)-'a';
            scanf("%d", &identifier[index]);
            return_val = -1;
            break;
        }
        case(_NODE_TYPE_WRITE):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);    
          
            printf("%d\n", leftReg);
            return_val = -1;
            break;
        }
        case(_NODE_TYPE_WHILE):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int conditionReg = evaluate(t->left, identifier);
            int codeBlockReg ;
            while(conditionReg)
            {
                codeBlockReg = evaluate(t->right, identifier);
                conditionReg = evaluate(t->left, identifier);
            }
            return_val = -1;
            break;
        }
        case (_NODE_TYPE_IF_ELSE):
        {
            // Evaluating the condtion
            int conditionReg = evaluate(t->left, identifier);

            if(conditionReg)
            {

                evaluate(t->right->left, identifier);            }
            else
            {
                if(t->right->right)
                    evaluate(t->right->right, identifier);
            }
            return_val = -1;

        }
        case (_NODE_TYPE_THEN):
        {
            return_val = -1;
            break;
        }
        case (_NODE_TYPE_LE):
        {
            // check the types of the left and right trees
            // if they are not the same, throw an error
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                printf("1\n");
                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg<=rightReg;
            break;
        }
        case (_NODE_TYPE_GE):
        {
            // check the types of the left and right trees
            // if they are not the same, throw an error
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg>=rightReg;
            break;
        }
        case (_NODE_TYPE_LT):
        {
            
            // check the types of the left and right trees
            // if they are not the same, throw an error
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                printf("3\n");

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg<rightReg;
            break;
        }
        case (_NODE_TYPE_GT):
        {
            // check the types of the left and right trees
            // if they are not the same, throw an error
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                printf("4\n");
            
                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg>rightReg;
            break;
        }
        case (_NODE_TYPE_NE):
        {
            // check the types of the left and right trees
            // if they are not the same, throw an error
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                printf("5\n");

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg!=rightReg;
            break;
        }
        case (_NODE_TYPE_EQ):
        {
            // check the types of the left and right trees
            // if they are not the same, throw an error
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                printf("6\n");
                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            int leftReg = evaluate(t->left, identifier);
            int rightReg = evaluate(t->right, identifier);

            return_val =  leftReg==rightReg;
            break;
        }

        default:
        {
            printf("Evaluate : Invalid Node Type : %d\n", t->nodetype);
            break;
        }

    }

    

    // the result is stored in the register used for left tree evaluation
    // return register number storing result
    return return_val;
}

void loopStackPush( int start, int end)
{
    struct loopStack * newLoop = (struct loopStack *)malloc(sizeof(struct loopStack));
    newLoop->startLabel = start;
    newLoop->endLabel = end;
    newLoop->prev = NULL;
    if(LOOP_STACK== NULL) LOOP_STACK = newLoop;
    else
    {
        newLoop->prev = LOOP_STACK;
        LOOP_STACK = newLoop;
    }

  
}

void  loopStackPop()
{
    if(LOOP_STACK==NULL) 
    {
        printf("Loop Stack Empty\n");
        return;
    }
    struct loopStack * temp = LOOP_STACK;
    LOOP_STACK=LOOP_STACK->prev;
    free(temp);
}

int getTopLoopStartLabel()
{
    if(LOOP_STACK==NULL) return -1;
    return LOOP_STACK->startLabel;
}
int getTopLoopEndLabel()
{
    if(LOOP_STACK==NULL) return -1;
    return LOOP_STACK->endLabel;
}

reg_index codeGen( struct expr_tree_node *t, FILE * target_file) {
    
    // Corner null case
    if(t==NULL) return -1;

    
    reg_index return_val=-1;
    switch (t->nodetype)
    {
    
        case(_NODE_TYPE_ID):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

    
            /*
                If array is declared by a[m][n] where m is the number of rows while n is the number of columns,
                then address of an element a[i][j] of the array stored in row major order is calculated as,
                Address(a[i][j]) = B + (i * n + j) * size   
                where, B is the base address or the address of the first element of the array a[0][0] .
            */


            // checking if the variable has been declared or not
            if(t->GSTEntry==NULL)
            {
                printf("Variable %s not declared\n", t->varname);
                exit(1);
            }
            // for variable
            if(leftReg==-1 && rightReg==-1)
            {
                reg_index newReg = getFreeReg();
                // Address of the variable
                fprintf(target_file, "MOV R%d, %d\n", newReg, t->GSTEntry->binding);
                return_val = newReg;
            }  
            // for 1D array
            else if(leftReg!=-1 && rightReg==-1)
            {
                // if index is an identifier
                if(t->left->nodetype==_NODE_TYPE_ID)
                {
                    // load the value of the index into a register
                    fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
                }
                 
                // Address of the variable
                fprintf(target_file, "ADD R%d, %d\n", leftReg, t->GSTEntry->binding);
                return_val = leftReg;
            }
            // for 2D array
            else if(leftReg!=-1 && rightReg!=-1)
            {
                // total number of rows in the matrix
                int totalCols = t->GSTEntry->cols;
                

                // if row index is an identifier
                if(t->left->nodetype==_NODE_TYPE_ID)
                {
                    // load the value of the row index into a register
                    fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
                }

                // multiply row index by total number of cols
                fprintf(target_file, "MUL R%d, %d\n", leftReg, totalCols);
                

              
                // if column index is an identifier
                if(t->right->nodetype==_NODE_TYPE_ID)
                {
                    // load the value of the column index into a register
                    fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
                }
                // add column index to row index
                fprintf(target_file, "ADD R%d, R%d\n", leftReg, rightReg);
                freeLastReg();
                // Address of the variable
                fprintf(target_file, "ADD R%d, %d\n", leftReg, t->GSTEntry->binding);
                return_val = leftReg;
                
            }
            else
            {
                //error
                printf("Invalid array declaration\n");
                exit(1);
            }
            break;
        }
        case(_NODE_TYPE_NUM):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            reg_index newReg= getFreeReg();
            // if leaf is a number
            fprintf(target_file, "MOV R%d, %d\n", newReg,  t->val);
            return_val =  newReg;
            break;
        }
        case (_NODE_TYPE_STRING):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            reg_index newReg= getFreeReg();
            // if leaf is a number
            fprintf(target_file, "MOV R%d, \"%s\"\n", newReg,  t->varname);
            return_val =  newReg;
            break;   
        }
        // Addition
        case (_NODE_TYPE_PLUS):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "ADD R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }
        // Subtraction
        case(_NODE_TYPE_MINUS):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);
            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "SUB R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }

        // Muliplication
        case(_NODE_TYPE_MUL):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "MUL R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }

        // Division
        case(_NODE_TYPE_DIV):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "DIV R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }
        // MOD
        case(_NODE_TYPE_MOD):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "MOD R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }

        // EQUAL TO
        case(_NODE_TYPE_EQUALS):
        {
            // check the types of the left and right trees
            // if they are not the same, throw an error
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                printf("7\n");
                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

          
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }
           
            fprintf(target_file, "MOV [R%d], R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            freeLastReg();
            return_val =  -1;
            break;
        }
        case(_NODE_TYPE_CONNECTOR):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            if(leftReg!=-1)
            {
                freeLastReg();
            }
            if(rightReg!=-1)
            {
                freeLastReg();
            }
            return_val =  -1;
            break;
        }
        case(_NODE_TYPE_READ):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);


            read(leftReg, target_file);
            freeLastReg();
            return_val = -1;
            break;
        }
        case(_NODE_TYPE_WRITE):
        {    
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left node is id take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }

            write(leftReg, target_file);
            freeLastReg();
            return_val = -1;
            break;
        }
        case(_NODE_TYPE_WHILE):
        {
            if(t->left->type != _TYPE_BOOL)
            {
                printf("Error! Condtion is not a boolean!\n");
                exit(1);
            }

            // label for while block start
            int whileStartLabel = getNewLabel();
            // label for while block end
            int whileEndLabel = getNewLabel();
            // adding to loop stack
            loopStackPush(whileStartLabel, whileEndLabel);

            fprintf(target_file, "_L%d:\n", whileStartLabel);
            // Evaluating the condtion
            reg_index conditionReg = codeGen(t->left, target_file);  

    

            // jumping to end if condition is false
            fprintf(target_file, "JZ R%d, _L%d\n", conditionReg, whileEndLabel);

            // generating code for while block
            codeGen(t->right, target_file);

            // jumping back to condition evaluation
            fprintf(target_file, "JMP _L%d\n", whileStartLabel);
            // label for end of while block
            fprintf(target_file, "_L%d:\n", whileEndLabel);
            // freeing the register used by the condition evaluation
            freeLastReg();
            // popping from loop stack
            loopStackPop();
            return_val = -1;
            break;


        }
        case (_NODE_TYPE_DO_WHILE ):
        {
            if(t->left->type != _TYPE_BOOL)
            {
                printf("Error! Condtion is not a boolean!\n");
                exit(1);
            }
            // label for do while block start
            int doWhileStartLabel = getNewLabel();
            // label for do while block end
            int doWhileEndLabel = getNewLabel();
            // adding to loop stack
            loopStackPush(doWhileStartLabel, doWhileEndLabel);

            fprintf(target_file, "_L%d:\n", doWhileStartLabel);
            // generating code for do while block
            codeGen(t->left, target_file);

            // Evaluating the condtion
            reg_index conditionReg = codeGen(t->right, target_file);  

            // jumping to end if condition is false
            fprintf(target_file, "JNZ R%d, _L%d\n", conditionReg, doWhileStartLabel);
            // label for end of do while block
            fprintf(target_file, "_L%d:\n", doWhileEndLabel);
            // freeing the register used by the condition evaluation
            freeLastReg();
            // popping from loop stack
            loopStackPop();
            return_val = -1;
            break;
        }
        case (_NODE_TYPE_IF_ELSE):
        {
            // if the left node is not a boolean expression, throw an error
            if(t->left->type != _TYPE_BOOL)
            {
                printf("Error! Condtion is not a boolean!\n");
                exit(1);
            }
            // Evaluating the condtion
            reg_index conditionReg = codeGen(t->left, target_file);

            // label for if block
            int label1 = getNewLabel();
            fprintf(target_file, "JZ R%d, _L%d\n", conditionReg, label1);
            // generating code for if block
            codeGen(t->right->left, target_file);
            

            // if else code exists
            if(t->right->right!=NULL)
            {
                // end label
                int label2 = getNewLabel();
                // for jumping to end of if else block if  if code was executed
                fprintf(target_file, "JMP _L%d\n", label2);
                // generating code for else block
                fprintf(target_file, "_L%d:\n", label1);
                codeGen(t->right->right, target_file);
                fprintf(target_file, "_L%d:\n", label2);
            
            }
            else
            {
                // if else code does not exist
                // end of if block 
                fprintf(target_file, "_L%d:\n", label1);
            }
            freeLastReg();
            return_val = -1;
            break;

            
        }
        case (_NODE_TYPE_THEN):
        {
            return_val = -1;
            break;
        }
        case (_NODE_TYPE_LE):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "LE R%d, R%d\n", leftReg, rightReg);
            freeLastReg();
            return_val = leftReg;
            break;
        }
        case (_NODE_TYPE_GE):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "GE R%d, R%d\n", leftReg, rightReg);
            freeLastReg();
            return_val = leftReg;
            break;
        }
        case (_NODE_TYPE_LT):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "LT R%d, R%d\n", leftReg, rightReg);
            freeLastReg();
            return_val = leftReg;
            break;
        }
        case (_NODE_TYPE_GT):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "GT R%d, R%d\n", leftReg, rightReg);
            freeLastReg();
            return_val = leftReg;
            break;
        }
        case (_NODE_TYPE_NE):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "NE R%d, R%d\n", leftReg, rightReg);
            freeLastReg();
            return_val = leftReg;
            break;
        }
        case (_NODE_TYPE_EQ):
        {
            if(t->left->type != t->right->type)
            {
                printf("Type mismatch error\n");
                

                exit(1);
            }
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable take the value
            if(t->left->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable take the value
            if(t->right->nodetype == _NODE_TYPE_ID)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "EQ R%d, R%d\n", leftReg, rightReg);
            freeLastReg();
            return_val = leftReg;
            break;
        }
        case (_NODE_TYPE_BREAK):
        {
            // getting the label of the loop to break
            int loopEndLabel = getTopLoopEndLabel();
            // jumping to the end of the loop
            fprintf(target_file, "JMP _L%d\n", loopEndLabel);
            return_val = -1;
            break;
        }
        case (_NODE_TYPE_CONTINUE):
        {
            // getting the label of the loop to continue
            int loopStartLabel = getTopLoopStartLabel();
            // jumping to the start of the loop
            fprintf(target_file, "JMP _L%d\n", loopStartLabel);
            return_val = -1;
            break;
        }
        case (_NODE_TYPE_BREAKPOINT):
        {
            // generating code for breakpoint
            fprintf(target_file, "BRKP\n");
            return_val = -1;
            break;
        }



        default:
        {
            printf("Codegen : Invalid Node Type : %d\n", t->nodetype);

            break;
        }

    }

    

    // the result is stored in the register used for left tree evaluation
    // return register number storing result
    return return_val;
}

void printNode(struct expr_tree_node * t)
{
    if(t==NULL) return;
    switch (t->nodetype)
    {
    
        // Addition
        case (_NODE_TYPE_PLUS):
        {
            printf("+ ");
            break;
        }
        // Subtraction
        case(_NODE_TYPE_MINUS):
        {
            printf("- ");
            break;
        }

        // Muliplication
        case(_NODE_TYPE_MUL):
        {
            printf("* ");
            break;
        }

        // Division
        case(_NODE_TYPE_DIV):
        {
            printf("/ ");
            break;
        }

        // EQUAL TO
        case(_NODE_TYPE_EQUALS):
        {
            printf("= ");
            break;
        }
        case(_NODE_TYPE_CONNECTOR):
        {
            printf("conn ");
            break;
        }
        case(_NODE_TYPE_READ):
        {
            printf("r ");
            break;
        }
        case(_NODE_TYPE_WRITE):
        {
            printf("w ");
            break;
        }
        case(_NODE_TYPE_ID):
        {
            printf("id ");
            break;
        }
        case(_NODE_TYPE_NUM):
        {
            printf("num ");
            break;
        }
        default:
        {
            printf("error ");
            break;
        }

    }



    if(t->varname!=NULL) printf("%c ", *(t->varname));
    else printf("%d ", t->val);
    printf("\n");

}


void printInfix(struct expr_tree_node * t)
{
    if(t==NULL) return;
    printInfix(t->left);
    printNode(t);
    printInfix(t->right);

}


void explInit(FILE * target_file)
{
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
    fprintf(target_file, "MOV SP, %d\n",_STACK_POINTER);
    fprintf(target_file, "MOV BP, %d\n", _BASE_POINTER);
}

void explEnd(FILE * target_file)
{
    if(LAST_USED_REGISTER!=-1)
    {
        printf("Warning: Register Leak! All registers are not freed.\n");
    }
    fprintf(target_file, "INT 10\n");

}