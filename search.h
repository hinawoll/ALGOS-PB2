#ifndef SEARCH_H
#define SEARCH_H

#include "tree.h"

//für Einfache Suche (für den Fall mit einer Datei mit nur einen Knoten)
int searchKeyPath(tnode* root, int key);
//für Subtree Suche (für den Fall mit einer Datei mit meheren Knoten)
static int findNode(tnode* root, int key, tnode** found);
//prüfen, ob das root das Subtree enthält
int containsSubtree(tnode* root, tnode* subtree);

#endif