# Projektstruktur (empfohlen – minimal & konfliktarm)

Um Merge-Konflikte in Git zu vermeiden und die Aufgabe **TREECHECK**  effizient umzusetzen, verwenden wir folgende minimale Struktur:

```text
treecheck/
├── main.c
├── tree.h
├── tree.c
├── analysis.h
├── analysis.c
├── io.h
├── io.c
├── search.h
├── search.c
├── Makefile
└── testfiles/
```

---

# 👥 Aufgabenverteilung

## 👤 Person 1 – Datenstruktur (Baum)

**Dateien:**

* `tree.h`
* `tree.c`

**Aufgaben:**

* Definition von `struct tnode`
* Einfügen in den binären Suchbaum (`insert`)
* Speicherverwaltung

---

## 👤 Person 2 – Analyse (AVL & Logik)

**Dateien:**

* `analysis.h`
* `analysis.c`
* `search.h`
* `search.c`

**Aufgaben:**

* Höhe berechnen
* Balancefaktor bestimmen
* AVL-Baum überprüfen
* Suche im Baum:

  * einfache Suche
  * Subtree-Suche

---

## 👤 Person 3 – I/O & Main

**Dateien:**

* `io.h`
* `io.c`
* `main.c`

**Aufgaben:**

* Datei einlesen (Inputfile)
* Baum aufbauen (`insert`)
* Funktionen verbinden
* Ausgabe (AVL, Statistik, Suche)

---

# 🔗 Gemeinsame Schnittstelle

Die Struktur `tnode` wird zentral in `tree.h` definiert:

```c
typedef struct tnode {
    int key;
    struct tnode *left;
    struct tnode *right;
} tnode;
```

👉 Diese Definition darf nicht mehrfach geändert werden!

---

# ⚠️ Wichtige Hinweise

* Jede Person arbeitet **nur an eigenen Dateien**
* `main.c` wird **nur von Person 3** bearbeitet
* Funktionsnamen und Parameter müssen vorher abgestimmt werden
* Ausgabeformat muss exakt der Aufgabenstellung entsprechen

---

# 🎯 Ziel

* Klare Trennung der Verantwortlichkeiten
* Minimale Git-Konflikte
* Einfache Integration der einzelnen Teile
