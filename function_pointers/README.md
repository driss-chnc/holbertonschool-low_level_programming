
# function_pointers

Ce dossier contient les exercices d'apprentissage des pointeurs de fonction en C (projets Holberton / Low-level programming).

**But :** comprendre et manipuler les pointeurs vers fonctions, apprendre à passer des fonctions comme paramètres, et implémenter des callbacks simples.

**Prérequis :**
- Un compilateur C (gcc)
- Make (optionnel)

**Compilation (exemples)**
- Compiler un fichier source :

	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o executable

- Compiler l'exécutable de test principal (quand présent) :

	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-print_name.c -o test

**Contenu important**
- Header principal : [function_pointers/function_pointers.h](function_pointers/function_pointers.h#L1)
- Exemples d'exercices : [function_pointers/0-print_name.c](function_pointers/0-print_name.c#L1), [function_pointers/main.c](function_pointers/main.c#L1)

Chaque fichier source illustre un cas d'usage différent des pointeurs de fonction (exécution de callbacks, itération avec fonctions applicatives, sélection dynamique d'opérations, ...).

**Bonnes pratiques**
- Protégez vos prototypes dans le header. Vérifiez les signatures des fonctions utilisées comme callbacks.
- Testez vos fonctions avec des cas simples puis étendez aux entrées limites.

**Utilisation**
1. Lire les commentaires dans chaque fichier source pour comprendre l'objectif.
2. Compiler les fichiers nécessaires avec `gcc`.
3. Exécuter et vérifier la sortie.

**Aide / tests**
- Ajoutez un `main.c` pour tester vos fonctions si le dépôt n'en fournit pas.
- Utilisez `valgrind` pour détecter d'éventuelles fuites mémoire.

Si vous voulez, je peux :
- ajouter des exemples d'utilisation concrets,
- créer un Makefile minimal,
- ou committer ce README pour vous.

