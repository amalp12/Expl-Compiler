#ifndef TYPEDEF_H
#define TYPEDEF_H
#include "typedef.h"
#endif
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

int getVarAddress(char varname)
{
    return  4096+(varname-'a');
}

int evaluate( struct expr_tree_node *t, int * identifier) {
    
    // Corner null case
    if(t==NULL) return -1;

    // Evaluating the left and right trees respectively
    // Note that the order is very important
    int leftReg = evaluate(t->left, identifier);
    int rightReg = evaluate(t->right, identifier);

   
    int return_val=-1;
    switch (t->type)
    {
    
        case(_TYPE_ID):
        {
            int index= *(t->varname)-'a';
            return_val = identifier[index];
            break;
        }
        case(_TYPE_NUM):
        {
            return_val =  t->val;
            break;
        }
        // Addition
        case (_TYPE_PLUS):
        {

            return_val =  leftReg+rightReg;
            break;
        }
        // Subtraction
        case(_TYPE_MINUS):
        {

            return_val =  leftReg-rightReg;
            break;
        }

        // Muliplication
        case(_TYPE_MUL):
        {

            return_val =  leftReg*rightReg;
            break;
        }

        // Division
        case(_TYPE_DIV):
        {

            return_val =  leftReg/rightReg;
            break;
        }

        // EQUAL TO
        case(_TYPE_EQUALS):
        {
            identifier[*(t->left->varname)-'a'] = rightReg;
            return_val =  -1;
            break;
        }
        case(_TYPE_CONNECTOR):
        {
            return_val =  -1;
            break;
        }
        case(_TYPE_READ):
        {
            int index = *(t->left->varname)-'a';
            scanf("%d", &identifier[index]);
            return_val = -1;
            break;
        }
        case(_TYPE_WRITE):
        {    
          
            printf("%d\n", leftReg);
            return_val = -1;
            break;
        }
        default:
        {
            printf("Invalid type\n");
            break;
        }

    }

    

    // the result is stored in the register used for left tree evaluation
    // return register number storing result
    return return_val;
}


reg_index codeGen( struct expr_tree_node *t, FILE * target_file) {
    
    // Corner null case
    if(t==NULL) return -1;

    // Evaluating the left and right trees respectively
    // Note that the order is very important
    reg_index leftReg = codeGen(t->left, target_file);
    reg_index rightReg = codeGen(t->right, target_file);

   
    reg_index return_val;
    switch (t->type)
    {
    
        case(_TYPE_ID):
        {
            reg_index newReg= getFreeReg();
            // if leaf is an identifier
            fprintf(target_file, "MOV R%d, [%d]\n", newReg,  getVarAddress(*(t->varname)));
            return_val = newReg;
            break;
        }
        case(_TYPE_NUM):
        {
            reg_index newReg= getFreeReg();
            // if leaf is a number
            fprintf(target_file, "MOV R%d, %d\n", newReg,  t->val);
            return_val =  newReg;
            break;
        }
        // Addition
        case (_TYPE_PLUS):
        {

            fprintf(target_file, "ADD R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }
        // Subtraction
        case(_TYPE_MINUS):
        {
            fprintf(target_file, "SUB R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }

        // Muliplication
        case(_TYPE_MUL):
        {
            fprintf(target_file, "MUL R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }

        // Division
        case(_TYPE_DIV):
        {
            fprintf(target_file, "DIV R%d, R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }

        // EQUAL TO
        case(_TYPE_EQUALS):
        {
            fprintf(target_file, "MOV R%d, %d\n", leftReg, getVarAddress(*(t->left->varname)));
            fprintf(target_file, "MOV [R%d], R%d\n", leftReg, rightReg);
            // freeing the register used by the right tree evaluation
            freeLastReg();
            return_val =  leftReg;
            break;
        }
        case(_TYPE_CONNECTOR):
        {
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
        case(_TYPE_READ):
        {

            fprintf(target_file, "MOV R%d, %d\n", leftReg, getVarAddress(*(t->left->varname)));
            read(leftReg, target_file);
            freeLastReg();
            return_val = -1;
            break;
        }
        case(_TYPE_WRITE):
        {    
            write(leftReg, target_file);
            freeLastReg();
            return_val = -1;
            break;
        }
        default:
        {
            printf("Invalid type\n");
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
    switch (t->type)
    {
    
        // Addition
        case (_TYPE_PLUS):
        {
            printf("+ ");
            break;
        }
        // Subtraction
        case(_TYPE_MINUS):
        {
            printf("- ");
            break;
        }

        // Muliplication
        case(_TYPE_MUL):
        {
            printf("* ");
            break;
        }

        // Division
        case(_TYPE_DIV):
        {
            printf("/ ");
            break;
        }

        // EQUAL TO
        case(_TYPE_EQUALS):
        {
            printf("= ");
            break;
        }
        case(_TYPE_CONNECTOR):
        {
            printf("conn ");
            break;
        }
        case(_TYPE_READ):
        {
            printf("r ");
            break;
        }
        case(_TYPE_WRITE):
        {
            printf("w ");
            break;
        }
        case(_TYPE_ID):
        {
            printf("id ");
            break;
        }
        case(_TYPE_NUM):
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