#include <stdio.h>
#include "search.h"

// einfache Suche
static int printPath(tnode* root, int key)
{
    if (root == NULL)
    {
        return 0;
    }
    printf("%d", root->key);
    if (key == root->key)
    {
        return 1;
    }
    if (key < root->key)
    {
        if (root->left != NULL)
        {
            printf(", ");
        }
        return printPath(root->left, key);
    }
    if (root->right != NULL)
    {
        printf(", ");
    }
    return printPath(root->right, key);
}

static int searchRecursive(tnode* node, int key)
{
    if (node == NULL)
    {
        return 0;
    }

    if (key == node->key)
    {
        return 1;
    }

    if (key < node->key)
    {
        return searchRecursive(node->left, key);
    }
    else
    {
        return searchRecursive(node->right, key);
    }
}

int searchKeyPath(tnode* root, int key)
{
    printf("%d ", key);

    if (searchRecursive(root, key))
    {
        printf("found ");
        printPath(root, key);
        printf("\n");
        return 1;
    }

    printf("not found!\n");
    return 0;
}

int containsSubtree(tnode* root, tnode* subtree)
{
    if (subtree == NULL)
    {
        return 1;
    }
    if (root == NULL)
    {
        return 0;
    }
    if (root->key == subtree->key)
    {
        if (containsSubtree(root->left, subtree->left) &&
            containsSubtree(root->right, subtree->right))
        {
            return 1;
        }
    }
    return containsSubtree(root->left, subtree) ||
           containsSubtree(root->right, subtree);
}