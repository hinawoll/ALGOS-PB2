# 📁 Projektstruktur

Dieses Projekt implementiert die Aufgabe **TREECHECK** .
Die Struktur ist so aufgebaut, dass **Merge-Konflikte minimiert** und die Arbeit klar getrennt wird.

```text
├── main.c
├── tree.c / tree.h
├── avl.c / avl.h
├── fileio.c / fileio.h
├── search.c / search.h
├── tree.txt
├── README.md
├── CMakeLists.txt
└── .gitignore
```

---

# 👥 Aufgabenverteilung

## 👤 Hina – Datenstruktur (Binary Search Tree)

**Dateien:**

* `tree.c`
* `tree.h`

**Aufgaben:**

* Definition von `struct tnode`
* Einfügen in den Baum (`insert`)
* Speicherverwaltung

---

## 👤 Sophia – AVL-Check & Suche

**Dateien:**

* `avl.c`
* `avl.h`
* `search.c`
* `search.h`

**Aufgaben:**

* Höhe berechnen (`height`)
* Balancefaktor berechnen (`getBalance`)
* AVL-Eigenschaft überprüfen (`checkAVL`)
* Suche im Baum:

  * einfache Suche (Key)
  * Subtree-Suche

---

## 👤 Micheal – Datei & Main

**Dateien:**

* `fileio.c`
* `fileio.h`
* `main.c`

**Aufgaben:**

* Datei einlesen (Inputfile)
* Baum aufbauen (`insert`)
* Programmsteuerung (`main`)
* Ausgabe der Ergebnisse

---

# 🔗 Gemeinsame Struktur

Alle arbeiten mit derselben Baumstruktur aus `tree.h`:

```c
typedef struct tnode {
    int key;
    struct tnode *left;
    struct tnode *right;
} tnode;
```

👉 Diese Struktur ist zentral und darf nicht geändert werden, ohne das Team abzusprechen.

---

# ⚠️ Wichtige Regeln

* Jede Person arbeitet nur an ihren eigenen Dateien
* `main.c` wird nur von Person 3 bearbeitet
* Funktionsschnittstellen müssen vorher festgelegt werden
* Ausgabeformat muss exakt der Aufgabenstellung entsprechen

---

# 🎯 Ziel

* Klare Trennung der Verantwortlichkeiten
* Einfache Zusammenarbeit mit Git
* Minimierung von Merge-Konflikten
