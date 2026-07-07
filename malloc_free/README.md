# malloc/free

Ce dossier regroupe des exercices sur l’allocation dynamique de mémoire en C avec les fonctions `malloc` et `free`.

## Objectifs

- Comprendre l’utilisation de la mémoire dynamique.
- Allouer et libérer de la mémoire proprement.
- Éviter les fuites mémoire et les erreurs de segmentation.
- Manipuler des tableaux et chaînes de caractères stockés dans le heap.

## Concepts abordés

- Allocation mémoire avec `malloc`
- Libération mémoire avec `free`
- Vérification des pointeurs retournés
- Utilisation de prototypes dans un fichier d’en-tête

## Fichiers principaux

- `0-create_array.c` : exercice de création d’un tableau dynamique
- `main.c` : programme de test ou d’exécution
- `main.h` : déclarations des fonctions du projet
- `README.md` : documentation du dossier

## Exemple de compilation

```bash
gcc -Wall -Wextra -Werror -pedantic main.c 0-create_array.c -o create_array
```

## Notes importantes

- Toujours vérifier si `malloc` a échoué.
- Libérer la mémoire allouée quand elle n’est plus utilisée.
- Éviter les accès mémoire invalides en utilisant correctement les pointeurs.
