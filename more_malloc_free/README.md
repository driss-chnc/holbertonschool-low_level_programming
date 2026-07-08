# more_malloc/free

Ce dossier contient des exercices avancés sur l'allocation dynamique de mémoire en C, approfondissant les concepts de `malloc` et `free`.

## Objectifs

- Maîtriser l'allocation dynamique de mémoire en profondeur.
- Implémenter des fonctions de gestion mémoire robustes.
- Gérer efficacement les structures de données complexes.
- Prévenir les fuites mémoire et les erreurs courantes.

## Concepts abordés

- Allocation de structures complexes
- Réallocation mémoire avec `realloc`
- Gestion de tableaux multidimensionnels dynamiques
- Création de listes chaînées et arbres dynamiques
- Dépistage des fuites mémoire

## Fichiers du projet

Les fichiers de ce dossier implémentent diverses fonctions de gestion mémoire et de manipulation de structures de données dynamiques.

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic [fichier_source] -o [fichier_exécutable]
```

## Bonnes pratiques

- Toujours vérifier le retour de `malloc` avant utilisation
- Utiliser `realloc` pour redimensionner un bloc mémoire existant
- Libérer la mémoire dans l'ordre inverse d'allocation
- Tester avec des outils comme `valgrind` pour détecter les fuites mémoire

## Exemple avec valgrind

```bash
valgrind --leak-check=full ./programme
```

## Notes importantes

- Chaque `malloc` doit être accompagné d'un `free`
- Les pointeurs NULL doivent être gérés correctement
- Éviter les accès mémoire après libération (use-after-free)
