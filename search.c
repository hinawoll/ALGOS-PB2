#include <stdio.h>
#include "search.h"

//einfache Suche
static int printPath(tnode* root, int key) {
    if (root == NULL) {
        return 0;
    }

    printf("%d", root->key);

    if (key == root->key) {
        return 1;
    }

    if (key < root->key) {
        if (root->left != NULL) {
            printf(", ");
        }
        return printPath(root->left, key);
    }

    if (root->right != NULL) {
            printf(", ");
        }
    return printPath(root->right, key);
}


int searchKeyPath(tnode* root, int key) {
    printf("%d ", key);

    if (root == NULL) {
        printf("not found!\n");
        return 0;
    }

    tnode* current = root;
    while (current != NULL) {
        if (key == current->key) {
            printf("found ");
            printPath(root, key);
            printf("\n");
            return 1;
        }
        if (key < current->key) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    printf("not found!\n");
    return 0;
}

//für Subtree Suche
int sameTree(tnode* a, tnode* b) {
    if (a == NULL && b == NULL) {
        return 1;
    }

    if (a == NULL || b == NULL) {
        return 0;
    }

    if (a->key != b->key) {
        return 0;
    }

    return sameTree(a->left, b->left) && sameTree(a->right, b->right);
}

int containsSubtree(tnode* root, tnode* subtree) {
    if (subtree == NULL) {
        return 1;
    }

    if (root == NULL) {
        return 0;
    }

    if (sameTree(root, subtree)) {
        return 1;
    }

    return containsSubtree(root->left, subtree) || containsSubtree(root->right, subtree);
}

