#include "tree.h"
#include <stdio.h>

//Höhe eines Knotens
int height(tnode* node) {
    if (node == NULL) return 0;

    int leftHeight = height(node->left);
    int rightHeight = height(node->right);
    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
    // ?
}

//bal(k) = h(rechter Teilbaum) - h(linker Teilbaum)
int getBalance(tnode* node)
{
    if (node == NULL) return 0;

    return height(node->right) - height(node->left);
}


//einfache isAVL, TODO: Laufzeit verbessern
int isAVL(tnode* root)
{
    if (root == NULL) return 1;

    int leftOK = isAVL(root->left);
    int rightOK = isAVL(root->right);

    int balance = getBalance(root);

    printf("bal(%d) = %d", root->key, balance);

    int currentOK;

    if (balance < -1 || balance > 1)
    {
        currentOK = 0;
        printf(" (AVL violation!)");
    }
    else
    {
        currentOK = 1;
    }
    printf("\n");
    return currentOK && leftOK && rightOK;
}

