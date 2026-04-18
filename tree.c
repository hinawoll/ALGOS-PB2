#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

tnode* createNode(int key) {
    tnode* node = (tnode*)malloc(sizeof(tnode));
    if (node == NULL) {
        return NULL;
    }

    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

tnode* insertNode(tnode* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->key) {
        root->left = insertNode(root->left, key);
    } else if (key > root->key) {
        root->right = insertNode(root->right, key);
    }
    return root;
}

void freeTree(tnode* root) {
    if (root == NULL) {
        return;
    }

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

//zum debugging
void inorder(tnode* root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}