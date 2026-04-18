#include <stdio.h>
#include <stdlib.h>
#include "avl.h"
#include "fileio.h"
#include "tree.h"
#include "search.h"

int main(void) {
    char filename[256];
    int isAVL = 1;
    int *minimum, *maximum;
    double* sum, *avg, *counter;
    *avg = *sum / *counter;
    tnode* root = (tnode*)malloc(sizeof(tnode));
    menu();
    scanf("%s", filename);
    root = loadtree(filename, root);

    checkAVL(root, &isAVL);

    if (isAVL)
        printf("AVL: yes\n");
    else
        printf("AVL: no\n");

    printf("min: %d, max: %d, avg: %lf");
    return 0;
}
