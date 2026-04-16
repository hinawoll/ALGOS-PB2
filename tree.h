#ifndef TREE_H
#define TREE_H

typedef struct tnode {
    int key;
    struct tnode *left;//für kleinere Knoten
    struct tnode *right;//für größere Knoten
} tnode;

tnode* createNode(int key);
tnode* insertNode(tnode* root, int key);
void freeTree(tnode* root);

//zum debugging
void inorder(tnode* root);


#endif