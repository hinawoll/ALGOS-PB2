#ifndef TREE_H
#define TREE_H

typedef struct tnode {
    int key;
    struct tnode *left;
    struct tnode *right;
} tnode;

// Funktionen
tnode* insert(tnode* root, int key);
void freeTree(tnode* root);

#endif