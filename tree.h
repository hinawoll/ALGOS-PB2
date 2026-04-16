#ifndef TREE_H
#define TREE_H

typedef struct tnode {
    int key;
    struct tnode *left;//für kleinere Knoten
    struct tnode *right;//für größere Knoten
} tnode;

tnode* insert(tnode* root, int key);
void freeTree(tnode* root);

#endif