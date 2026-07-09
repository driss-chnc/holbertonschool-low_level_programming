# structures_typedef

Ce dossier propose des exercices sur l'utilisation des structures et des `typedef` en langage C.

## Objectifs

- Comprendre la déclaration et l'initialisation des structures.
- Utiliser `typedef` pour simplifier les types personnalisés.
- Manipuler des structures imbriquées et des pointeurs vers structures.
- Organiser des données complexes avec des types définis par l'utilisateur.

## Concepts abordés

- Définition de `struct`
- Alias de type avec `typedef`
- Accès aux membres de structure
- Pointeurs vers structures
- Structures imbriquées et tableaux de structures

## Fichiers du projet

- `README.md` : documentation du dossier
- Autres fichiers : exemples de structures et fonctions associées

## Exemple de compilation

```bash
gcc -Wall -Wextra -Werror -pedantic [fichier_source].c -o [nom_exécutable]
```

## Bonnes pratiques

- Déclarer clairement les structures avant utilisation.
- Utiliser `typedef` pour rendre le code plus lisible.
- Vérifier l'initialisation des champs de structure.
- Préférer des noms de membres explicites.

## Notes

- Les `typedef` ne créent pas de nouveaux types, ils créent des alias.
- Les structures permettent de regrouper des données hétérogènes.
- Les pointeurs vers structures facilitent la manipulation de données dynamiques.
