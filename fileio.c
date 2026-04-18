#include "fileio.h"
#include <string.h>
#include <stdlib.h>

void menu()
{
    printf("treecheck: \n");
}

tnode* loadtree(char* dateiname, tnode* root)
{
    FILE* file;
    int key = 0;
    file = fopen(dateiname, "r");
    if(file == NULL)
    {
        printf("Datei konnte nicht geöffnet werden!\n");
        return root;
    }
        freeTree(root);//baum wird bereinigt

    while(fscanf(file, "%d", &key) != EOF)
    {
        root = insertNode(root, key);
    }
    fclose(file);

    return root;
}

void minmaxavg(tnode* root, int* minimum, int* maximum, double* sum, double* counter)
{
    if(root == NULL)
    {
        return;
    }
    minmaxavg(root->left, minimum, maximum, sum, counter);

    if (root->key < *minimum)
        *minimum = root->key;

    if (root->key > *maximum)
        *maximum = root->key;

    *sum = *sum + root->key;
    *counter = *counter + 1;
    minmaxavg(root->right, minimum, maximum, sum, counter);
}







