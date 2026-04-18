#ifndef AVL_H
#define AVL_H
typedef struct tnode tnode; //vorläufige Typdefinition

int height(tnode* node);
int getBalance(tnode* node);
int checkAVL(tnode* node, int* isAVL);
#endif