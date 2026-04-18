#include <stdio.h>
#include <stdlib.h>
#include "avl.h"
#include "fileio.h"
#include "tree.h"
#include "search.h"

int main(void) {
    char filename[256];
    tnode* root = NULL;
    int isAVL = 1;
    int minimum, maximum;
    minimum = 1000;
    maximum = 0;
    double sum, avg, counter;


    menu();
    scanf("%s", filename);
    root = loadtree(filename, root);
    minmaxavg(root, &minimum, &maximum, &sum, &counter);
    if(root == NULL)
    {
        printf("Diese Datei ist leer!\n");
        avg = minimum = maximum = 0;
        printf("min: %d, max: %d, avg: %.1lf", minimum, maximum, avg);
    }
    else
    {
        if(counter > 0)
        {
            avg = sum/counter;
        }
        else
        {
            avg = minimum = maximum = 0;
        }
        checkAVL(root, &isAVL);

        if (isAVL)
            printf("AVL: yes\n");
        else
        {
            printf("AVL: no\n");
            printf("min: %d, max: %d, avg: %.1lf", minimum, maximum, avg);
        }
    }
    freeTree(root);

    return 0;
}
