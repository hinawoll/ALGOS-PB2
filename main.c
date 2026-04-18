#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "avl.h"
#include "fileio.h"
#include "tree.h"
#include "search.h"

int main(int argCount, char *argVector[]) {
    char filename[256];
    tnode *root = NULL;
    int isAVL = 1;

    int minimum = INT_MAX; //2147483647
    int maximum = INT_MIN; //-2147483647
    double sum = 0.0, avg = 0.0, counter = 0.0;

    if (argCount < 2) {
        printf("Usage: treecheck filename\n");
        return 1;
    }

    snprintf(filename, sizeof(filename), "%s", argVector[1]);
    root = loadtree(filename, root);

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
    else {
        printf("AVL: no\n");
    }

    printf("min: %d, max: %d, avg: %.1lf \n", minimum, maximum, avg);

    freeTree(root);
    return 0;
}
