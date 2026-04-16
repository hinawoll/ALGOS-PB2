#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

tnode* insert(tnode* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    // duplicate key -> ignore

    return root;
}
void freeTree(tnode* root) {

}

static tnode* createNode(int key) {//static: benutzbar nur in tree.c
    tnode* node = (tnode*)malloc(sizeof(tnode));
    if (node == NULL) {
        return NULL;
    }

    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}