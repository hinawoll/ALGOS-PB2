#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "avl.h"
#include "fileio.h"
#include "tree.h"
#include "search.h"

int main(int argCount, char *argVector[])
{
    tnode *root = NULL;
    tnode *subtree = NULL;
    int isAVL = 1;

    int minimum = INT_MAX; //2147483647
    int maximum = INT_MIN; //-2147483647
    double sum = 0.0, avg = 0.0, counter = 0.0;

    if (argCount == 2) //Aufgabe 1
    {
        root = loadtree(argVector[1], root);

        if (root == NULL) {
            printf("Diese Datei ist leer!\n");
            printf("min: 0, max: 0, avg: 0.0\n");
            return 0;
        }

        minmaxavg(root, &minimum, &maximum, &sum, &counter);

        if (counter > 0) {
            avg = sum / counter;
        } else {
            avg = 0.0;
        }

        checkAVL(root, &isAVL);

        if (isAVL)
            printf("AVL: yes\n");
        else
            printf("AVL: no\n");

        printf("min: %d, max: %d, avg: %.1lf\n", minimum, maximum, avg);

        freeTree(root);
        return 0;
    }
    else if (argCount == 3) //Aufgabe 2
    {
        root = loadtree(argVector[1], root);
        subtree = loadtree(argVector[2], subtree);

        if (root == NULL || subtree == NULL) {
            printf("Datei konnte nicht korrekt geladen werden!\n");
            freeTree(root);
            freeTree(subtree);
            return 1;
        }

        // Falls subtree nur einen Knoten hat -> einfache Suche
        if (subtree->left == NULL && subtree->right == NULL) {
            searchKeyPath(root, subtree->key);
        } else {
            if (containsSubtree(root, subtree))
                printf("Subtree found\n");
            else
                printf("Subtree not found!\n");
        }

        freeTree(root);
        freeTree(subtree);
        return 0;
    }
    //falsche Eingabe
    printf("Eingabe: treecheck filename\n");
    printf("   oder: treecheck filename-suchbaum filename-subtree\n");
    return 1;
}
