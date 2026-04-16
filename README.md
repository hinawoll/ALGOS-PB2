# ALGOS-PB2

# 👥 Team Aufteilung (3 Personen)

Dieses Projekt basiert auf der Aufgabe **TREECHECK** 
und ist in drei Rollen aufgeteilt.

---

## 👤 Hina – Datenstruktur & Einfügen

**Aufgabe:**
Verantwortlich für den binären Suchbaum

**Implementierung:**

* `struct tnode` definieren
* Einfügefunktion:

  ```c
  struct tnode* insert(struct tnode* root, int key);
  ```
* Duplikate ignorieren
* Speicherverwaltung (`malloc`)

**Optional:**

* Inorder-Traversierung (Test)

---

## 👤 Sophia – AVL-Check & Balancefaktor

**Aufgabe:**
Überprüfen, ob der Baum ein AVL-Baum ist

**Implementierung:**

* Höhe berechnen:

  ```c
  int height(struct tnode* node);
  ```
* Balancefaktor:

  ```c
  int getBalance(struct tnode* node);
  ```
* AVL-Check + Ausgabe:

  ```c
  int checkAVL(struct tnode* node);
  ```

**Output (wichtig):**

```
bal(key) = x
bal(key) = x (AVL violation!)
```

**Hinweis:**

* Effizient arbeiten → O(N) Lösung bevorzugt

---

## 👤 Micheal – Datei, Statistik & Main

**Aufgabe:**
Verbindet alle Teile des Programms

**Implementierung:**

* Datei einlesen:

  ```c
  FILE *f = fopen(filename, "r");
  ```

* Werte in Baum einfügen (`insert`)

* Statistik berechnen:

  ```c
  void stats(struct tnode* node, int* min, int* max, int* sum, int* count);
  ```

**Berechnet:**

* Minimum

* Maximum

* Durchschnitt

* `main()` Funktion:

  * Argumente lesen
  * Baum erstellen
  * AVL prüfen
  * Statistik ausgeben

---

## 🔗 Gemeinsame Definition (wichtig)

```c
struct tnode {
    int key;
    struct tnode *left;
    struct tnode *right;
};
```

👉 Diese Struktur muss für alle gleich sein!

---

## ⚠️ Hinweise

* Zusammenarbeit ist wichtig (v.a. Person 1 & 2)
* Ausgabeformat muss exakt stimmen
* Rekursive Funktionen verwenden
