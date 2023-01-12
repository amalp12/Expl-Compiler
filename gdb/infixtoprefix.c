#include <stdio.h>
#include "tree.h"

void infixtoprefix(FILE* fp, struct tnode* root){
  if(root!=NULL){
    printf("%s ",root->symbol);
    fprintf(fp,"%s ",root->symbol);
    infixtoprefix(fp,root->left);
    infixtoprefix(fp,root->right);
  }
}
