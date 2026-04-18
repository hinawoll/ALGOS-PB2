#include <stdio.h>
#include "tree.h"

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

//Variable isAVL in main anlegen!
//Laufzeit O(n), da jeder Knoten nur einmal besucht wird, Depth First Search
int checkAVL(tnode* node, int* isAVL)
{
    if (node == NULL)
        return 0;

    int leftHeight = checkAVL(node->left, isAVL);
    int rightHeight = checkAVL(node->right, isAVL);

    int balance = rightHeight - leftHeight;

    printf("bal(%d) = %d", node->key, balance);

    if (balance < -1 || balance > 1)
    {
        *isAVL = 0;
        printf(" (AVL violation!)");
    }

    printf("\n");

    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}