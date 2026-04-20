#ifndef SEARCH_H
#define SEARCH_H

#include "tree.h"

//für Einfache Suche (für den Fall mit einer Datei mit nur einen Knoten)
int searchKeyPath(tnode* root, int key);
// Subtree-Suche
int containsSubtree(tnode* root, tnode* subtree);


#endif