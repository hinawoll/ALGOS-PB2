#include <stdio.h>
#include "tree.h"

//Laufzeit O(n), da jeder Knoten nur einmal besucht wird, Depth First Search
int checkAVL(tnode* node, int* isAVL)
{
    if (node == NULL)
        return 0;

    int rightHeight = checkAVL(node->right, isAVL);
    int leftHeight = checkAVL(node->left, isAVL);

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
