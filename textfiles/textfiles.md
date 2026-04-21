**search_key.txt**
7 : AVL

**search_notfound.txt**
1 : AVL

**subtree_found.txt**
5 7 : AVL

**subtree_notfound.txt**
7 2 : AVL

**tree_basic.txt**
5 3 7 : AVL

**tree_normal.txt**
5 3 8 7 22 2 : AVL

**tree_unbalanced.txt**
1 2 3 4 5 : kein AVL

**tree_example.txt**
5 3 17 9 23 54 11 79 30 12: kein AVL


## Commands ##
  ```c
  gcc main.c tree.c avl.c fileio.c search.c -o treecheck
  ```
**1. Baum einlesen + AVL-Check + Statistik**

*case1: AVL (5 3 7)
  ```c
  ./treecheck textfiles/tree_basic.txt
  ```
```c
  treecheck.exe textfiles/tree_basic.txt
  ```
*case2: kein AVL (1 2 3 4 5)
  ```c
　./treecheck textfiles/tree_unbalanced.txt
  ```
```c
  treecheck.exe textfiles/tree_unbalanced.txt
  ```

**2-1. Einfache Suche**

*case1: found (5 3 8 7 22 2 / 7)
  ```c
  ./treecheck textfiles/tree_normal.txt textfiles/search_key.txt
  ```
  ```c
  treecheck.exe textfiles/tree_normal.txt textfiles/search_key.txt
  ```

*case2: not found (5 3 8 7 22 2 / 1)
  ```c
  ./treecheck textfiles/tree_normal.txt textfiles/search_notfound.txt
  ```
```c
   treecheck.exe textfiles/tree_normal.txt textfiles/search_notfound.txt
  ```

**2-2. Subtree Suche**

*case1: found (5 3 8 7 22 2 / 5 7)
  ```c
  ./treecheck textfiles/tree_normal.txt textfiles/subtree_found.txt
  ```
```c
  treecheck.exe textfiles/tree_normal.txt textfiles/subtree_found.txt
  ```
*case2: not found (5 3 8 7 22 2 / 7 2)
  ```c
  ./treecheck textfiles/tree_normal.txt textfiles/subtree_notfound.txt
  ```
```c
  treecheck.exe textfiles/tree_normal.txt textfiles/subtree_notfound.txt
  ```
