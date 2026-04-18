# 1. main-Branch aktualisieren
git checkout main
git pull

# 2. In den eigenen Branch wechseln und main mergen
git checkout <branch-name>
git merge main

# 3. Arbeiten
# (Code schreiben)

# 4. Änderungen hinzufügen und committen
git add .
git commit -m "Beschreibung der Änderungen"

# 5. Änderungen pushen
git push

# 6. Vor oder nach dem Pull Request den neuesten Stand von main erneut mergen
git checkout main
git pull
git checkout <branch-name>
git merge main
git push

# 7. Pull Request erstellen und mergen