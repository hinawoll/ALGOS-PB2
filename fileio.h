#ifndef FILEIO_H_INCLUDED
#define FILEIO_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include "tree.h"

tnode* loadtree(char* dateiname, tnode* root);
void minmaxavg(tnode* root, int* minimum, int* maximum, double* sum, double* counter);



#endif // FILEIO_H_INCLUDED



