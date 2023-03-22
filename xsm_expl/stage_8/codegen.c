
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
    if(_LAST_USED_REGISTER == 19)
    {
        printf("Error : All registers used up!\n");
        return -1;
    }
    _LAST_USED_REGISTER++;
    return _LAST_USED_REGISTER;
}

void freeLastReg() // Free the last used register
{
    if(_LAST_USED_REGISTER==-1)
    {
        printf("Error : All available registers are already freed!\n");
        exit(1);
    }
    _LAST_USED_REGISTER--;
}

// save registers
int saveRegisters(FILE * target_file)
{
    int highest_used_register = _LAST_USED_REGISTER;
    for(int i = 0 ; i <= _LAST_USED_REGISTER; i++)
    {
        fprintf(target_file, "PUSH R%d\n", i);

    }
    _LAST_USED_REGISTER = -1;
    return highest_used_register;
}
int restoreRegistersAndGetReturnValueReg(FILE * target_file, int last_used_register, reg_index returnReg)
{
    // mov the return value to the register one higher than the last used register
    fprintf(target_file, "MOV R%d, R%d\n", last_used_register+1, returnReg);
    // pop all the registers
    for(int i = last_used_register ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }
    _LAST_USED_REGISTER = last_used_register+1;
    return _LAST_USED_REGISTER;
}

void explWrite(reg_index reg_number, FILE * target_file)
{
    for(int i = 0 ; i <= _LAST_USED_REGISTER; i++)
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


    for(int i = _LAST_USED_REGISTER ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }

}

reg_index initializeHeap(FILE * target_file)
{
    int last_used_register = _LAST_USED_REGISTER;
    for(int i = 0 ; i <= last_used_register; i++)
    {
        fprintf(target_file, "PUSH R%d\n", i);

    }

    // get a new register to store the return value
    reg_index returnReg = getFreeReg();

    fprintf(target_file, "MOV R0, \"Heapset\"\n"); 
    fprintf(target_file, "PUSH R0\n"); //func
    fprintf(target_file, "PUSH R0\n"); // 1
    fprintf(target_file, "PUSH R0\n"); // 2
    fprintf(target_file, "PUSH R0\n"); //3
    fprintf(target_file, "PUSH R0\n"); // ret
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R%d\n", returnReg); // ret
    fprintf(target_file, "POP R0\n"); //3
    fprintf(target_file, "POP R0\n"); // 2
    fprintf(target_file, "POP R0\n"); // 1
    fprintf(target_file, "POP R0\n"); //func


    for(int i = last_used_register ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }

    return returnReg;

}

reg_index allocHeap(FILE * target_file)
{
    int last_used_register = _LAST_USED_REGISTER;
    for(int i = 0 ; i <= _LAST_USED_REGISTER; i++)
    {
        fprintf(target_file, "PUSH R%d\n", i);

    }

    // get a new register to store the return value
    reg_index returnReg = getFreeReg();

    fprintf(target_file, "MOV R0, \"Alloc\"\n"); 
    fprintf(target_file, "MOV R1, 8\n"); 
    fprintf(target_file, "PUSH R0\n"); //func
    fprintf(target_file, "PUSH R1\n"); // 1
    fprintf(target_file, "PUSH R0\n"); // 2
    fprintf(target_file, "PUSH R0\n"); //3
    fprintf(target_file, "PUSH R0\n"); // ret
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R%d\n", returnReg); // ret
    fprintf(target_file, "POP R0\n"); //3
    fprintf(target_file, "POP R0\n"); // 2
    fprintf(target_file, "POP R0\n"); // 1
    fprintf(target_file, "POP R0\n"); //func


    for(int i = last_used_register ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }

    return returnReg;

}




reg_index freeHeap(reg_index inputReg, FILE * target_file)
{
    int last_used_register = _LAST_USED_REGISTER;
    for(int i = 0 ; i <= _LAST_USED_REGISTER; i++)
    {
        fprintf(target_file, "PUSH R%d\n", i);

    }

    // get a new register to store the return value
    reg_index returnReg = getFreeReg();

    // note inputReg is the address of the memory to be freed (it cannot be variable take care of that outside this function)

    fprintf(target_file, "MOV R1, R%d\n",inputReg); 
    fprintf(target_file, "MOV R0, \"Free\"\n"); 
    fprintf(target_file, "PUSH R0\n"); //func
    fprintf(target_file, "PUSH R1\n"); // 1
    fprintf(target_file, "PUSH R0\n"); // 2
    fprintf(target_file, "PUSH R0\n"); //3
    fprintf(target_file, "PUSH R0\n"); // ret
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R%d\n", returnReg); // ret
    fprintf(target_file, "POP R0\n"); //3
    fprintf(target_file, "POP R0\n"); // 2
    fprintf(target_file, "POP R0\n"); // 1
    fprintf(target_file, "POP R0\n"); //func


    for(int i = last_used_register ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }

    return returnReg;

}


void explRead(reg_index reg_number, FILE * target_file)
{
    for(int i = 0 ; i <= _LAST_USED_REGISTER; i++)
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


    for(int i = _LAST_USED_REGISTER ; i >=0; i--)
    {
        fprintf(target_file, "POP R%d\n", i);

    }

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


// push parameter values in the reverse order
void pushFunctionParametersInReverse(struct expr_tree_node *t, FILE * target_file)
{
    // null check
    if(t == NULL ) return;

    

    // get the binding for the variable from the LST/GST
    reg_index exprReg = codeGen(t->right, target_file);

    // if t->right is a variable or field, then we need to get the value of the variable
    if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
    {
        fprintf(target_file, "MOV R%d, [R%d]\n", exprReg, exprReg);
    }

   

    // push the value
    fprintf(target_file, "PUSH R%d\n", exprReg);
    freeLastReg();

    if(t->left!=NULL )
    {    // call recursively left node
        pushFunctionParametersInReverse(t->left, target_file);
    }

}
void typeCheck(struct expr_tree_node *leftNode, struct expr_tree_node * rightNode)
{
    struct TypeTable * leftType = leftNode->type;
    struct TypeTable * rightType = rightNode->type;
    struct ClassTable * leftClass = leftNode->classType;
    struct ClassTable * rightClass = rightNode->classType;
    // if either of the node is of nodetype _NODE_TYPE_FIELD, then we need to get the final type of the field
    if(leftNode->nodetype == _NODE_TYPE_FIELD)
    {
        leftType = leftNode->right->type;
        leftClass = leftNode->right->classType;
    }
    if(rightNode->nodetype == _NODE_TYPE_FIELD)
    {
        rightType = rightNode->right->type;
        rightClass = rightNode->right->classType;
    }
    struct TypeTable * nullType = typeLookup("null");

    // if wither of the node of null type, then no need to check
    if(leftType == nullType || rightType == nullType) return;

    // tyles do not match print type mismatch error
    if(leftType != rightType || leftClass != rightClass)
    {
        printf("Type mismatch error at line %d\n", _CURRENT_LINE);
        exit(1);
    }
    
}
struct TypeTable * getAssignmentType(struct expr_tree_node *node)
{
    struct TypeTable * type = node->type;
    // if either of the node is of nodetype _NODE_TYPE_FIELD, then we need to get the final type of the field
    if(node->nodetype == _NODE_TYPE_FIELD)
    {
        type = node->right->type;
    }
    return type;
    
}
struct ClassTable * getAssignmentClassType(struct expr_tree_node *node)
{
    struct ClassTable * class = node->classType;
    // if either of the node is of nodetype _NODE_TYPE_FIELD, then we need to get the final type of the field
    if(node->nodetype == _NODE_TYPE_FIELD)
    {
        class = node->right->classType;
    }
    return class;
    
}

// is ancestor of  iterative
int isAncestor(struct ClassTable * ancestor, struct ClassTable * child)
{
    if(ancestor == NULL || child == NULL) return _FALSE;
    struct ClassTable * temp = child;
    while(temp!=NULL)
    {
        if(temp == ancestor) return _TRUE;
        temp = temp->parent;
    }
    return _FALSE;
}
void typeCheckAssignmentOp(struct expr_tree_node *leftNode, struct expr_tree_node * rightNode)
{
    struct TypeTable * leftType = leftNode->type;
    struct TypeTable * rightType = rightNode->type;
    struct ClassTable * leftClass = leftNode->classType;
    struct ClassTable * rightClass = rightNode->classType;
    // if either of the node is of nodetype _NODE_TYPE_FIELD, then we need to get the final type of the field
    if(leftNode->nodetype == _NODE_TYPE_FIELD)
    {
        leftType = leftNode->right->type;
        leftClass = leftNode->right->classType;
    }
    if(rightNode->nodetype == _NODE_TYPE_FIELD)
    {
        rightType = rightNode->right->type;
        rightClass = rightNode->right->classType;
    }
    struct TypeTable * nullType = typeLookup("null");

    // if wither of the node of null type, then no need to check
    if(leftType == nullType || rightType == nullType) return;
    
    // when right node is of type HEAP INIT then left node should be of type int
    if(rightNode->nodetype == _NODE_TYPE_HEAP_INIT)
    {
        char * leftTypeName = leftType->name;
        if(strcmp(leftTypeName, "int") != 0)
        {
            printf("Assignment Type mismatch error at line %d\n", _CURRENT_LINE);
            exit(1);
        }
        // return as we have already checked the type
        return;
    }
    // if the right node is of type delete, then left node should be of type int
    if(rightNode->nodetype == _NODE_TYPE_DELETE)
    {
        if(strcmp(leftType->name ,"int")!=0)
        {
            printf("Assignment Type mismatch error at line %d\n", _CURRENT_LINE);
            exit(1);
        }
        return;
    }
    // if right node is  new, delete then check if left node is of type class 
    if(rightNode->nodetype == _NODE_TYPE_NEW)
    {
        if(leftClass==NULL)
        {
            printf("Assignment Type mismatch error at line %d\n", _CURRENT_LINE);
            exit(1);
        }
        // return as we have already checked the type
        return;
    }
    // if the right node is alloc, free then left node should be of user defined type
    if(rightNode->nodetype == _NODE_TYPE_HEAP_ALLOC || rightNode->nodetype == _NODE_TYPE_HEAP_FREE)
    {
        char * leftTypeName = leftType->name;
        if(strcmp(leftTypeName, "int") == 0 || strcmp(leftTypeName, "str") == 0 || strcmp(leftTypeName, "bool") == 0)
        {
            printf("Assignment Type mismatch error at line %d\n", _CURRENT_LINE);
            exit(1);
        }
        // return as we have already checked the type
        return;
    }
    // class types do not match print type mismatch error
    if(leftClass != NULL || rightClass != NULL)
    {
        if(isAncestor(leftClass, rightClass) == _FALSE)
        {
            printf("Assignment Class Type mismatch error at line %d\n", _CURRENT_LINE);
            exit(1);
        }
    
    }
  

    // types do not match print type mismatch error
    if(leftType != rightType )
    {
        printf("Assignment Type mismatch error at line %d\n", _CURRENT_LINE);
        exit(1);
    }
    
}

void typeCheckCondition(struct expr_tree_node * node)
{
    struct TypeTable * type = node->type;
    struct ClassTable * classType = node->classType;
    // if the node is of nodetype _NODE_TYPE_FIELD, then we need to get the final type of the field
    if(node->nodetype == _NODE_TYPE_FIELD)
    {
        type = node->right->type;
        classType = node->right->classType;
    }
    struct TypeTable * nullType = typeLookup("null");
    struct TypeTable * boolType = typeLookup("bool");
    // if the node is of null type, then no need to check
    if(type == nullType) return;

    // if the type is not bool, then print type mismatch error
    if(type != boolType || classType != NULL)
    {
        printf("Condition Type mismatch error at line %d\n", _CURRENT_LINE);
        exit(1);
    }
    
}



reg_index codeGen( struct expr_tree_node *t, FILE * target_file) {
    
    // Corner null case
    if(t==NULL) return -1;

    
    reg_index return_val=-1;
    switch (t->nodetype)
    {
    
        case(_NODE_TYPE_ID):
        {
            
           


            

    
            /*
                If array is declared by a[m][n] where m is the number of rows while n is the number of columns,
                then address of an element a[i][j] of the array stored in row major order is calculated as,
                Address(a[i][j]) = B + (i * n + j) * size   
                where, B is the base address or the address of the first element of the array a[0][0] .
            */


            // checking if the variable has been declared or not
            struct LocalSymbolTable * LSTEntry = LSTLookup(t->varname);
            struct GlobalSymbolTable * GSTEntry = GSTLookup(t->varname);

            if(GSTEntry==NULL && LSTEntry==NULL)
            {
                printf("Variable %s not declared\n", t->varname);
                exit(1);
            }
                

            struct expr_tree_node * indexPositionNode = t->indexList; // declaration of the array 
            struct IndexNode * indexSizeList; // size of the array

            // if the variable is a global variable
            if(GSTEntry != NULL)
            {
                indexSizeList = GSTEntry->indexList;
            }
            // if the variable is a local variable
            else
            {
                indexSizeList = LSTEntry->indexList;
            }
            // get the base address of the array
            reg_index baseAddressReg = getBinding(t->varname, target_file);
            
            // if array
            if(indexPositionNode != NULL && indexSizeList != NULL)
            {
                // get a free register
                reg_index prevIndex = getFreeReg();
                // move zero to the register
                fprintf(target_file, "MOV R%d, 0\n", prevIndex);

                while(indexPositionNode != NULL && indexSizeList != NULL)
                {
                    struct TypeTable * nodeType =   getAssignmentType(indexPositionNode->right);
                    // if the index position is not of type int, then print type mismatch error
                    if(strcmp(nodeType->name, "int") != 0)
                    {
                        printf("Array index position should be of type int\n");
                        exit(1);
                    }
                    reg_index indexPositionValueReg = codeGen(indexPositionNode->right, target_file);

                    // if indexPosition return an id or a field, then we need to get the value of the id or field
                    if(indexPositionNode->right->nodetype == _NODE_TYPE_ID || indexPositionNode->right->nodetype == _NODE_TYPE_FIELD)
                    {
                
                        fprintf(target_file, "MOV R%d, [R%d]\n", indexPositionValueReg, indexPositionValueReg);
                    }

                    // mulitply the index position value by the size of the array index
                    fprintf(target_file, "MUL R%d, %d\n", prevIndex, indexSizeList->index);
                    // add the index position value to the previous index
                    fprintf(target_file, "ADD R%d, R%d\n", prevIndex, indexPositionValueReg);

                    // get next index size
                    indexSizeList = indexSizeList->next;
                    // get next index position
                    indexPositionNode = indexPositionNode->left;
                    // free the index position value reg
                    freeLastReg();
                
                }

                // prevIndex now contains the place of the array element
                // mulitply it by size of one element
                fprintf(target_file, "MUL R%d, %d\n", prevIndex, _INT_SIZE);

                // add index register to the binding register
                fprintf(target_file, "ADD R%d, R%d\n", baseAddressReg, prevIndex);
                // free the prevIndex reg
                freeLastReg();

            }

           
            // if either of the index position or index size is not null, then print error
            if(indexPositionNode != NULL || indexSizeList != NULL)
            {
                printf("Array index mismatch error\n");
                exit(1);
            }

            
            

            // Address of the variable
            return_val = baseAddressReg;
            break;
        }
        case(_NODE_TYPE_NUM):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left and right regs are not _NONE then free them
            if(leftReg!=_NONE) freeLastReg();
            if(rightReg!=_NONE) freeLastReg();

            reg_index newReg= getFreeReg();
            // if leaf is a number
            fprintf(target_file, "MOV R%d, %d\n", newReg,  t->val);
            return_val =  newReg;
            break;
        }
        case(_NODE_TYPE_NULL):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left and right regs are not _NONE then free them
            if(leftReg!=_NONE) freeLastReg();
            if(rightReg!=_NONE) freeLastReg();

            reg_index newReg= getFreeReg();
            // if leaf is a number
            fprintf(target_file, "MOV R%d, 0\n", newReg);
            return_val =  newReg;
            break;
        }
        case (_NODE_TYPE_STRING):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left and right regs are not _NONE then free them
            if(leftReg!=_NONE) freeLastReg();
            if(rightReg!=_NONE) freeLastReg();

            reg_index newReg= getFreeReg();
            // if leaf is a number
            fprintf(target_file, "MOV R%d, \"%s\"\n", newReg,  t->varname);
            return_val =  newReg;
            break;   
        }
        // Addition
        case (_NODE_TYPE_PLUS):
        {
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or a field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or a field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);
            // if left is a variable or field take the value
            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or field take the value
            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD )
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheckAssignmentOp(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

          
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
            {
                if(getAssignmentClassType(t->left) !=NULL && getAssignmentClassType(t->right) != NULL)
                {
                    // copy virtual function table
                    reg_index virtualFunctionReg = getFreeReg();
                    fprintf(target_file, "MOV R%d, R%d\n", virtualFunctionReg, rightReg);
                    // Add 1 to the virtual function register
                    fprintf(target_file, "ADD R%d, 1\n", virtualFunctionReg);
                    // Add 1 to the left register
                    fprintf(target_file, "ADD R%d, 1\n", leftReg);
                    // copy the virtual function table
                    fprintf(target_file, "MOV [R%d], [R%d]\n", leftReg, virtualFunctionReg);
                    // subtract 1 from the left register
                    fprintf(target_file, "SUB R%d, 1\n", leftReg);
                    // free the virtual function table register
                    freeLastReg();                    
                }

                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }
           
            fprintf(target_file, "MOV [R%d], R%d\n", leftReg, rightReg);

            // if left is a variable of a class type and right is a new node
            if(t->right->nodetype == _NODE_TYPE_NEW)
            {
                // if classEntry is null then the class is not defined
                if(t->right->classType == NULL)
                {
                    printf("Class not provided for new\n");
                    exit(1);
                }
                // add one to the left register 
                fprintf(target_file, "ADD R%d, 1\n", leftReg);
                // move the class address to the address in left register
                fprintf(target_file, "MOV [R%d], %d\n", leftReg, getVirtualFunctionTableAddress(t->right->classType->classIndex));
                
            }
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

            if(leftReg!=_NONE)
            {
                freeLastReg();
            }
            if(rightReg!=_NONE)
            {
                freeLastReg();
            }
            return_val =  -1;
            break;
        }
        case(_NODE_TYPE_READ):
        {
            // type checking
            // read only if the left node is an id or a field
            if(t->left->nodetype != _NODE_TYPE_ID && t->left->nodetype != _NODE_TYPE_FIELD)
            {
                printf("Read can only be used with variables\n");
                exit(1);
            }
            // Evaluating the left expression
            reg_index leftReg = codeGen(t->left, target_file);


            explRead(leftReg, target_file);
            freeLastReg();
            return_val = -1;
            break;
        }
        case(_NODE_TYPE_WRITE):
        {    
           
            // type checking
            // write only if the left node final type is int or string
            struct TypeTable * finalType = getAssignmentType(t->left);
            if(finalType != typeLookup("int") && finalType != typeLookup("str"))
            {
                printf("Write can only be used with variables or constants\n");
                exit(1);
            }
            reg_index leftReg = codeGen(t->left, target_file);
        

            // if left node is id or feild take the value
            if(t->left->nodetype == _NODE_TYPE_ID ||  t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }

            explWrite(leftReg, target_file);
            freeLastReg();
            return_val = -1;
            break;
        }
        case(_NODE_TYPE_WHILE):
        {

            // label for while block start
            int whileStartLabel = getNewLabel();
            // label for while block end
            int whileEndLabel = getNewLabel();
            // adding to loop stack
            loopStackPush(whileStartLabel, whileEndLabel);

            fprintf(target_file, "_L%d:\n", whileStartLabel);
            
            // type checking the condition
            typeCheckCondition(t->left);

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
            // label for do while block start
            int doWhileStartLabel = getNewLabel();
            // label for do while block end
            int doWhileEndLabel = getNewLabel();
            // adding to loop stack
            loopStackPush(doWhileStartLabel, doWhileEndLabel);

            fprintf(target_file, "_L%d:\n", doWhileStartLabel);
            // generating code for do while block
            codeGen(t->left, target_file);

            // type checking the condition
            typeCheckCondition(t->right);
            
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
            // type checking the condition
            typeCheckCondition(t->left);

            // Evaluating the condtion
            reg_index conditionReg = codeGen(t->left, target_file);

            // label for if block
            int label1 = getNewLabel();
            fprintf(target_file, "JZ R%d, _L%d\n", conditionReg, label1);
            // generating code for if block
            reg_index codeEvalReg = codeGen(t->right->left, target_file);

            // if there is a register then its invalid
            if(codeEvalReg!=-1)
            {
                printf("Invalid code in if block\n");
                exit(1);
            }
            

            // if else code exists
            if(t->right->right!=NULL)
            {
                // end label
                int label2 = getNewLabel();
                // for jumping to end of if else block if  if code was executed
                fprintf(target_file, "JMP _L%d\n", label2);
                // generating code for else block
                fprintf(target_file, "_L%d:\n", label1);
                codeEvalReg = codeGen(t->right->right, target_file);

                // if there is a register then its invalid
                if(codeEvalReg!=-1)
                {
                    printf("Invalid code in else block\n");
                    exit(1);
                }

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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);


            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or field take the value
            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or field take the value
            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or field take the value
            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
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
            // type checking
            typeCheck(t->left, t->right);

            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // if left is a variable or field take the value
            // if left is a variable or field take the value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // if right is a variable or field take the value
            if(t->right->nodetype == _NODE_TYPE_ID || t->right->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", rightReg, rightReg);
            }

            fprintf(target_file, "EQ R%d, R%d\n", leftReg, rightReg);
            freeLastReg();
            return_val = leftReg;
            break;
        }
        case(_NODE_TYPE_AND):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // both the left and right trees should be of type boolean
            struct TypeTable * boolType = typeLookup("bool") ;
            if(t->left->type != boolType || t->right->type != boolType)
            {
                printf("Error: AND operator can only be applied on boolean values");
                exit(1);
            }

            //mulipling the left and right values and table
            fprintf(target_file, "MUL R%d, R%d\n", leftReg, rightReg);
            // freeing rightReg
            freeLastReg();
            return_val = leftReg;
            break;
        }
        case(_NODE_TYPE_OR):
        {
            // Evaluating the left and right trees respectively
            // Note that the order is very important
            reg_index leftReg = codeGen(t->left, target_file);
            reg_index rightReg = codeGen(t->right, target_file);

            // both the left and right trees should be of type boolean
            struct TypeTable * boolType = typeLookup("bool") ;
            if(t->left->type != boolType || t->right->type != boolType)
            {
                printf("Error: OR operator can only be applied on boolean values");
                exit(1);
            }
            //mulipling the left and right values and table
            fprintf(target_file, "ADD R%d, R%d\n", leftReg, rightReg);
            // freeing rightReg
            freeLastReg();
            // if the value in leftReg is 2 then make it 1
            
            // checking if the value is 2
            reg_index tempReg = getFreeReg();
            int codeSkipLabel = getNewLabel();
            fprintf(target_file, "MOV R%d, 2\n", tempReg);
            fprintf(target_file, "EQ R%d, R%d\n", tempReg,leftReg);
            // if the value is not 2 theb skip the code to make it 1
            fprintf(target_file, "JZ R%d, _L%d\n",tempReg, codeSkipLabel);
            // freeing tempReg
            freeLastReg();
            // if the value is 2 then make it 1
            fprintf(target_file, "MOV R%d, 1\n", leftReg);
            
            // print label 
            fprintf(target_file, "_L%d:\n",codeSkipLabel);
            return_val = leftReg;

            break;
        }
        case(_NODE_TYPE_NOT):
        {
            // Evaluating the left  tree 
            reg_index leftReg = codeGen(t->left, target_file);

            // both the left and right trees should be of type boolean
            struct TypeTable * boolType = typeLookup("bool") ;
            if(t->left->type != boolType)
            {
                printf("Error: NOT operator can only be applied on boolean values");
                exit(1);
            }
            /* 
                xor gate with 1 will give the opposite value
                A is variable x and B is always 1
                A B OUT
                0 1  1
                1 1  0
            
                xor is implemented by boolean addition mod 2
            */
            fprintf(target_file, "ADD R%d, 1\n", leftReg);
            fprintf(target_file, "MOD R%d, 2\n", leftReg);
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
         case (_NODE_TYPE_FUNCTION_CALL):
        {
            // push all used registers
            int highestUsedRegister = saveRegisters(target_file);
            // push all parameters on the stack in reverse and assign them their relative binding addresses
            pushFunctionParametersInReverse(t->left, target_file);


            
            // Check if function exists
            if (t->GSTEntry == NULL)
            {
                printf("Error : Function not found : %s\n", t->varname);
                exit(1);
            }
            // push the return value reg
            reg_index returnReg = getFreeReg();
            fprintf(target_file, "PUSH R%d\n", returnReg);
            //Call the function
            fprintf(target_file, "CALL _F%d\n", t->GSTEntry->functionLabelNumber);


            // when it it return pop the return value
            fprintf(target_file, "POP R%d\n", returnReg);
            
            
            // pop function parameters from the stack
            struct ParameterNode * temp = t->GSTEntry->paramList;
            return_val = returnReg;
            


            reg_index dummyRegister = getFreeReg();
            while (temp != NULL )
            {
                fprintf(target_file, "POP R%d\n", dummyRegister);
                temp = temp->next;
            }
            freeLastReg();
            

            //  restore all used registers
            return_val = restoreRegistersAndGetReturnValueReg(target_file, highestUsedRegister, returnReg);

            break;


        }
         case (_NODE_TYPE_METHOD_CALL):
        {
            // push all used registers
            int highestUsedRegister = saveRegisters(target_file);

            struct expr_tree_node * nodeJustBeforeMethod = t->right;

            // go to the node just before the method call
            while (nodeJustBeforeMethod->left !=NULL)
            {
                nodeJustBeforeMethod = nodeJustBeforeMethod->left;
            }

            // get the class type of the object
            struct ClassTable * classType = nodeJustBeforeMethod->classType;
            // if class not defined
            if (classType == NULL)
            {
                printf("Error : Class not defined : %s\n", nodeJustBeforeMethod->varname);
                exit(1);
            }

            // Check if function exists in class

            struct ClassMemberFunctionList * method = classMethodLookup(classType, t->varname);

            if (method == NULL)
            {
                printf("Error : Method not found : %s in class %s\n", t->varname, classType->name);
                exit(1);
            }

            
            // get the address of the object
            reg_index objectAddressReg = codeGen(t->right, target_file);

            // get the address of the function in the virtual function table
            reg_index methodCallReg = getFreeReg();

            fprintf(target_file, "MOV R%d, R%d\n", methodCallReg, objectAddressReg);
            fprintf(target_file, "ADD R%d, 1\n", methodCallReg);
            fprintf(target_file, "MOV R%d, [R%d]\n", methodCallReg, methodCallReg);
            // if the object is id then get the address of the object
            if (nodeJustBeforeMethod->nodetype == _NODE_TYPE_ID || nodeJustBeforeMethod->nodetype == _NODE_TYPE_FIELD)
            {
                // get the address of the object
                fprintf(target_file, "MOV R%d, [R%d]\n", objectAddressReg, objectAddressReg);
                // take value at the address
            }
            

            // before pushing the parameters push the object address (self)
            fprintf(target_file, "PUSH R%d\n", objectAddressReg);


            // get address to the virtual function table of the object and push it on the stack
            fprintf(target_file, "PUSH R%d\n", methodCallReg);
            
            
            
            // push all parameters on the stack in reverse and assign them their relative binding addresses
            pushFunctionParametersInReverse(t->left, target_file);



            // push the return value reg
            reg_index returnReg = methodCallReg;
            fprintf(target_file, "PUSH R%d\n", returnReg);
            

            
            // get the address of the function in the virtual function table
            fprintf(target_file, "ADD R%d, %d\n", methodCallReg, method->functionPosition);
            // get the label from the address
            fprintf(target_file, "MOV R%d, [R%d]\n", methodCallReg, methodCallReg);


            

            //Call the function
            fprintf(target_file, "CALL R%d\n", methodCallReg);

            // free method call reg
            freeLastReg();
            returnReg = objectAddressReg;

          
            // when it it return pop the return value
            fprintf(target_file, "POP R%d\n", returnReg);
            
            
            // pop function parameters from the stack
            struct ParameterNode * temp = method->paramList;
            


            reg_index dummyRegister = getFreeReg();            // pop self from the stack
            // pop all parameters from the stack (this includes virtual table address also)
            while (temp != NULL )
            {
                fprintf(target_file, "POP R%d\n", dummyRegister);
                temp = temp->next;
            }
            // pop object table address from the stack
            fprintf(target_file, "POP R%d\n", dummyRegister);

            freeLastReg();
            
            //  restore all used registers
            return_val = restoreRegistersAndGetReturnValueReg(target_file, highestUsedRegister, returnReg);
            
            break;


        }
        
        case (_NODE_TYPE_RETURN):
        {
            return_val = -1; 
            // if return value exits then evaluate it
            if(t->left != NULL)
            {
                reg_index returnReg = codeGen(t->left, target_file);
                // if return value is a variable or field then take its value
                if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
                {
                    fprintf(target_file, "MOV R%d, [R%d]\n", returnReg, returnReg);
                }
                // store the return value in R0
                fprintf(target_file, "MOV R0, R%d\n", returnReg);
                return_val = returnReg;
            }
            break;
        }
        case (_NODE_TYPE_FIELD):
        {
            // backend code for field
            // take the first varable and check if  its declared


            // if the variable is not declared then exit

            // if the varible is declared
            // while left node exists
                // check if the field is present in the structure
                // if the field is not present then exit
                // if the field is present then

            // checking if the variable has been declared or not
            struct LocalSymbolTable * LSTEntry = LSTLookup(t->varname);

            if(t->GSTEntry==NULL && LSTEntry==NULL)
            {
                printf("Variable %s not declared\n", t->varname);
                exit(1);
            }
            // for variable
            
            // Address of the variable
            reg_index newReg = getBinding(t->varname, target_file);

            // get the value in the variable
            fprintf(target_file, "MOV R%d, [R%d]\n", newReg, newReg);
            
            struct expr_tree_node * temp = t->left;
            struct expr_tree_node * parent = t;



            while (temp != NULL)
            {
                // checking if the field is present in the structure or class
                struct FieldList * field ;
                // if parent is a struct type
                if(parent->type != NULL)
                {
                    field = typeFieldLookup( parent->type, temp->varname);
                    if(field == NULL)
                    {
                        printf("Error: Field %s not found in structure %s\n", temp->varname, t->type->name);
                        exit(1);
                    }

                }
                // else if the parent is a class
                else if(parent->classType != NULL)
                {
                    field = classFieldLookup(parent->classType, temp->varname);
                    if(field == NULL)
                    {
                        printf("Error: Field %s not found in class %s\n", temp->varname, parent->classType->name);
                        exit(1);
                    }
                }

                
                // if the field is present then
               
                // if the field is int or str then
                // add the offset of the field to the address of the variable
                fprintf(target_file, "ADD R%d, %d\n", newReg, field->fieldIndex);
                
                // propogate the type upwards
                parent->type = field->type;


                temp = temp->left;
                parent = parent->left;
                // if temp is not null then take the value of the address
                if(temp != NULL)
                {
                    fprintf(target_file, "MOV R%d, [R%d]\n", newReg, newReg);
                }
            }
         
            

            return_val = newReg;
            

            break;
        }
        case (_NODE_TYPE_HEAP_INIT):
        {
            
            return_val = initializeHeap(target_file);;
            break;

        }
        case (_NODE_TYPE_HEAP_ALLOC):
        {
            // backend code for allocation
            // Evaluating the left tree
            return_val = allocHeap(target_file);
            break;
        }
        case (_NODE_TYPE_NEW):
        {
            // backend code for allocation
            // Evaluating the left tree
            return_val = allocHeap(target_file);
            break;
        }
        case (_NODE_TYPE_HEAP_FREE):
        {
            // backend code for free
            // Evaluating the left tree
            reg_index leftReg = codeGen(t->left, target_file);

            // both the left and right trees should return -1
            if(leftReg == -1)
            {
                printf("Error: Free can only be done with a address");
                exit(1);
            }
            // if left tree is a variable or Field then take its value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // free the memory
            reg_index success = freeHeap(leftReg, target_file);

            // move the return valuue to leftReg
            fprintf(target_file, "MOV R%d, R%d\n", leftReg, success);
            freeLastReg();

            return_val = leftReg;
            break;
        }
        case (_NODE_TYPE_DELETE):
        {
            // backend code for free
            // Evaluating the left tree
            reg_index leftReg = codeGen(t->left, target_file);

            // both the left and right trees should return -1
            if(leftReg == -1)
            {
                printf("Error: Free can only be done with a address");
                exit(1);
            }
            // if left tree is a variable or Field then take its value
            if(t->left->nodetype == _NODE_TYPE_ID || t->left->nodetype == _NODE_TYPE_FIELD)
            {
                fprintf(target_file, "MOV R%d, [R%d]\n", leftReg, leftReg);
            }
            // free the memory
            reg_index success = freeHeap(leftReg, target_file);

            // move the return valuue to leftReg
            fprintf(target_file, "MOV R%d, R%d\n", leftReg, success);
            freeLastReg();

            return_val = leftReg;
            break;
        }

        default:
        {
            printf("Codegen : Invalid Node Type : %d\n", t->nodetype);
            exit(1);
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

void printStringAtBeginning(FILE *fp, const char *str) {
    long int currentPosition = ftell(fp); // get the current position of the file pointer
    rewind(fp); // move the file pointer to the beginning of the file
    fputs(str, fp); // print the string at the beginning of the file
    fseek(fp, currentPosition, SEEK_SET); // move the file pointer back to its original position
}
void deleteFileContents(FILE *fp) {
    fseek(fp, 0, SEEK_SET); // move the file pointer to the beginning of the file
    ftruncate(fileno(fp), 0); // truncate the file to zero bytes
}

// method lookup based on function Position
struct ClassMemberFunctionList * classMethodPositionWiseLookup(int position, struct ClassTable * classTableEntry)
{
    struct ClassMemberFunctionList * method = classTableEntry->memberFunctionList;
    
    while(method)
    {
        if(method->functionPosition == position)
        {
            return method;
        }
        method = method->next;
    }
    return NULL;
}
// create virtual function table for classes
void createVirtualFunctionTable(FILE * target_file)
{
    // get the head of class table
    struct ClassTable * classTableEntry = getClassTableHead();

    // get a free register
    reg_index freeReg = getFreeReg();
    // iterate over the class table
    while (classTableEntry)
    {
        // get the head of the method table
        struct ClassMemberFunctionList * method ;
        int methodCount = 0;
        // iterate over the method table
        // for each method create a label and push it to the stack
        // while method count is less than _VIRTUAL_FUNCTION_TABLE_SIZE (here its 8)
        while(methodCount < _VIRTUAL_FUNCTION_TABLE_SIZE)
        {
            method = classMethodPositionWiseLookup(methodCount, classTableEntry);
            if(method != NULL)
            {
                // move the value of the label to the register
                fprintf(target_file, "MOV R%d, _F%d\n", freeReg, method->functionLabel);
                // push the value of the register to the stack
                fprintf(target_file, "PUSH R%d\n", freeReg);
                
            }
            else
            {
                // push -1 to the stack
                // move -1 to the register
                fprintf(target_file, "MOV R%d, -1\n", freeReg);
                fprintf(target_file, "PUSH R%d\n", freeReg);
            }

            // increment the method count
            methodCount++;
        }

        classTableEntry = classTableEntry->next;
    }
    // free the register
    freeLastReg();
    
}
void explInit(FILE * target_file)
{

    long int currentPosition = ftell(target_file); // get the current position of the file pointer
    char *buffer; // create a buffer to store the contents of the file
    size_t bufferSize;
    fseek(target_file, 0, SEEK_END); // move the file pointer to the end of the file
    bufferSize = ftell(target_file); // get the size of the file
    rewind(target_file); // move the file pointer to the beginning of the file

    buffer = (char *) malloc((bufferSize + 1)*sizeof(char)); // allocate memory for the buffer
    fread(buffer, sizeof(char), bufferSize, target_file); // read the contents of the file into the buffer
    buffer[bufferSize] = '\0'; // add null terminator to the end of the buffer
    
    deleteFileContents(target_file); // delete the contents of the file

    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
    fprintf(target_file, "MOV SP, %d\n",_INITIAL_STACK_POINTER);
    fprintf(target_file, "MOV BP, %d\n", _INITIAL_STACK_POINTER+1);
    createVirtualFunctionTable(target_file);
    fprintf(target_file, "MOV SP, %d\n",_STACK_POINTER);
    fprintf(target_file, "MOV BP, %d\n", _BASE_POINTER);
    // pushing the return address of the main function
    fprintf(target_file, "PUSH R0\n");
    fprintf(target_file, "CALL _F0\n");
    fprintf(target_file, "POP R0\n");
    
    // calling int 10
    fprintf(target_file, "INT 10\n");

    fprintf(target_file, "%s", buffer); // print the contents of the file after the string
    free(buffer); // free the memory used by the buffer


    
}

void explEnd(FILE * target_file)
{
    if(_LAST_USED_REGISTER!=-1)
    {
        printf("Warning: Register Leak! All registers are not freed.\n");
    }


}

reg_index getBinding(char * name, FILE * target_file)
{
    // check if string is valid
    if(name==NULL)
    {
        printf("Binding Address Error: Variable name is NULL.\n");
        exit(1);
    }

    // checking if local variable
    struct LocalSymbolTable * LSTEntry = LSTLookup(name);
    // check if global variabl
    struct GlobalSymbolTable * GSTEntry = GSTLookup(name);

    //if both are NULL, then variable not declared
    if(LSTEntry==NULL && GSTEntry==NULL)
    {
        printf("Binding Address Error: Variable %s not declared.\n", name);
        exit(1);
    }

    reg_index reg_with_binding_address = getFreeReg();
    // if local variable
    if(LSTEntry!=NULL)
    {
        // get the binding address relative to BP in the register reg_with_binding_address
        fprintf(target_file, "MOV R%d, %d\n", reg_with_binding_address, LSTEntry->binding);

        // add BP to the binding address
        fprintf(target_file, "ADD R%d, BP\n", reg_with_binding_address);


    }
    else if (GSTEntry!=NULL)
    {
        // if global variable
        // get the absolute binding address of the variable
        fprintf(target_file, "MOV R%d, %d\n", reg_with_binding_address, GSTEntry->binding);

    }
    else
    {
        freeLastReg();
        printf("Error: Variable %s not declared.\n", name);
        exit(1);
    }

    return reg_with_binding_address;

}

void funcCodegen(struct expr_tree_node * t, FILE * target_file)
{
    // if the node is null return
    if(t==NULL) return;

    // get the GST entry 
    struct GlobalSymbolTable * GSTEntry = t->GSTEntry;

    // set the function label
    fprintf(target_file, "_F%d:\n", GSTEntry->functionLabelNumber);

    int currentBindingAddress = _FUNCTION_ARGUMENT_OFFSET*_STACK_UNIT_SIZE;
    struct LocalSymbolTable * LSTEntry;
    // get the number of parameters
    struct ParameterNode * paramList = GSTEntry->paramList;
    while(paramList!=NULL)
    {
        //get the LST entry of the parameter
        LSTEntry = LSTLookup(paramList->name);

        // if the LST entry is null, then the parameter is not declared
        if(LSTEntry==NULL)
        {
            printf("Error: Parameter %s not declared.\n", paramList->name);
            exit(1);
        }

        // set the binding of the parameter
        LSTEntry->binding = currentBindingAddress;
        currentBindingAddress-=_STACK_UNIT_SIZE;
        paramList = paramList->next;
    }
    // pushing previous BP to the stack
    fprintf(target_file, "PUSH BP\n");
    // setting BP to SP
    fprintf(target_file, "MOV BP, SP\n");

    currentBindingAddress = _FUNCTION_LOCAL_VARIABLE_OFFSET*_STACK_UNIT_SIZE;
    LSTEntry = _LOCAL_SYMBOL_TABLE;

    // maintain local variable count
    int localVariableCount = 0;
    // set the binding of the local variables
    while(LSTEntry!=NULL )
    {
        if(LSTEntry->binding==_NONE)
        {
            // set the binding of the local variable relative to BP
            LSTEntry->binding = currentBindingAddress;
            currentBindingAddress+=_STACK_UNIT_SIZE;
            localVariableCount++;
            // push space for the local variable to the stack
            fprintf(target_file, "PUSH R0\n");
        }

        LSTEntry = LSTEntry->next;

    }
    // check if type of the function is equal to the return type of the function
    if(GSTEntry->type!=t->right->left->type)
    {
        printf("Error: The value returned by the function %s does not match the return type in the function definition.\n", GSTEntry->name);
        exit(1);
    }

    // codeGen for the body of the function
    reg_index bodyReg = codeGen(t->right->right, target_file);


    // codegen for the return statement
    reg_index returnReg = codeGen(t->right->left, target_file);

    // if return is not void then store the return value in the place allocated for the return value
    if(returnReg != _NONE)
    {
        // move the return value to the place allocated for the return value
        reg_index tempReg = getFreeReg();
        fprintf(target_file, "MOV R%d, BP\n", tempReg);
        fprintf(target_file, "ADD R%d, %d\n", tempReg, _FUNCTION_RETURN_VALUE_OFFSET);
        fprintf(target_file, "MOV [R%d], R%d\n",tempReg, returnReg);
        // free temp reg
        freeLastReg();
        // free the register
        freeLastReg();
    }



    // if the body reg is not -1, then it is invalid
    if(bodyReg!=_NONE)
    {
        printf("Error: Invalid return type of function %s.\n", GSTEntry->name);
        exit(1);
    }


    // pop the local variables from the stack
    LSTEntry = _LOCAL_SYMBOL_TABLE;
    while(localVariableCount--)
    {
        //push space for local variables
        fprintf(target_file, "POP R0\n");
    }

    // POP old BP
    fprintf(target_file, "POP BP\n");

    // return
    fprintf(target_file, "RET\n");

    // clear lst    
    clearLST();

    

}

void classMethodCodegen(struct ClassTable * classPtr, struct expr_tree_node * t, FILE * target_file)
{
    // if the node is null return
    if(t==NULL) return;

    // if class is not declared
    if(classPtr==NULL)
    {
        printf("Error: Class not found.\n");
        exit(1);
    }
    // get the method 
    struct ClassMemberFunctionList * method = classMethodLookup(classPtr, t->varname);

    // check if the method exists
    if(method == NULL)
    {
        printf("Error: Method %s not found in class %s.\n", t->varname, classPtr->name);
        exit(1);
    }

    // set the function label
    fprintf(target_file, "_F%d:\n", method->functionLabel);



    int currentBindingAddress = _FUNCTION_ARGUMENT_OFFSET*_STACK_UNIT_SIZE;
    struct expr_tree_node * methodNodeParameters = t->left;

    // get the number of parameters
    struct ParameterNode * param;
    int nodeParamCount = 0;

    // search for self
    struct LocalSymbolTable * LSTEntry ;


    while(methodNodeParameters!=NULL)
    {
        //get the ClassMemberFuntionNode of that parameter
        param = classMethodParamLookup( method, methodNodeParameters->varname);
        //get the LST entry of the parameter
        LSTEntry = LSTLookup(param->name);

        // if the LST entry is null, then the parameter is not declared
        if(LSTEntry==NULL)
        {
            printf("Error: Parameter %s not declared.\n", methodNodeParameters->varname);
            exit(1);
        }

        // if the LST entry is null, then the parameter is not declared
        if(param==NULL)
        {
            printf("Error: Parameter %s not declared.\n", methodNodeParameters->varname);
            exit(1);
        }
        // incrementing the node parameter count
        nodeParamCount++;
        // set the binding of the parameter
        LSTEntry->binding = currentBindingAddress;
        currentBindingAddress-=_STACK_UNIT_SIZE;
        methodNodeParameters = methodNodeParameters->left;
    }
   
    LSTEntry = LSTLookup("self");

    // throw error is self is not found
    if(LSTEntry==NULL)
    {
        printf("Error: Parameter self not declared.\n");
        exit(1);
    }
    currentBindingAddress-=_STACK_UNIT_SIZE;
    LSTEntry->binding = currentBindingAddress;
 
    // pushing previous BP to the stack
    fprintf(target_file, "PUSH BP\n");
    // setting BP to SP
    fprintf(target_file, "MOV BP, SP\n");

    currentBindingAddress = _FUNCTION_LOCAL_VARIABLE_OFFSET*_STACK_UNIT_SIZE;
    LSTEntry = _LOCAL_SYMBOL_TABLE;

    // maintain local variable count
    int localVariableCount = 0;
    // set the binding of the local variables
    while(LSTEntry!=NULL )
    {
        if(LSTEntry->binding==_NONE)
        {
            // set the binding of the local variable relative to BP
            LSTEntry->binding = currentBindingAddress;
            currentBindingAddress+=_STACK_UNIT_SIZE;
            localVariableCount++;
            // push space for the local variable to the stack
            fprintf(target_file, "PUSH R0\n");
        }

        LSTEntry = LSTEntry->next;

    }

    // codeGen for the body of the function
    reg_index bodyReg = codeGen(t->right->right, target_file);


    // codegen for the return statement
    reg_index returnReg = codeGen(t->right->left, target_file);

    // if return is not void then store the return value in the place allocated for the return value
    if(returnReg != _NONE)
    {
        // move the return value to the place allocated for the return value
        reg_index tempReg = getFreeReg();
        fprintf(target_file, "MOV R%d, BP\n", tempReg);
        fprintf(target_file, "ADD R%d, %d\n", tempReg, _FUNCTION_RETURN_VALUE_OFFSET);
        fprintf(target_file, "MOV [R%d], R%d\n",tempReg, returnReg);
        // free temp reg
        freeLastReg();
        // free the register
        freeLastReg();
    }



    // if the body reg is not -1, then it is invalid
    if(bodyReg!=_NONE)
    {
        printf("Error: Invalid body of function %s.\n", t->varname);
        exit(1);
    }


    // pop the local variables from the stack
    LSTEntry = _LOCAL_SYMBOL_TABLE;
    while(localVariableCount--)
    {
        //push space for local variables
        fprintf(target_file, "POP R0\n");
    }

    // POP old BP
    fprintf(target_file, "POP BP\n");

    // return
    fprintf(target_file, "RET\n");

    // clear lst    
    clearLST();

    

}
