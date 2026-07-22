# Listes Chaînées Simples en C

Un projet éducatif Holberton School sur l'implémentation et la manipulation de listes chaînées simples en C.

## 📚 Vue d'ensemble

Ce projet explore les concepts fondamentaux des structures de données en implémentant une liste chaînée simple. Les listes chaînées sont une structure de données linéaire où chaque élément (nœud) contient des données et un pointeur vers le nœud suivant.

## 🎯 Objectifs d'apprentissage

- Comprendre les pointeurs et l'allocation mémoire dynamique en C
- Implémenter une structure de liste chaînée
- Manipuler des listes chaînées (insertion, suppression, affichage)
- Gérer la mémoire efficacement avec `malloc()` et `free()`
- Écrire du code C robuste et sans fuites mémoire

## 📁 Fichiers du projet

| Fichier | Description |
|---------|-------------|
| `lists.h` | Fichier d'en-tête contenant les définitions de structures et prototypes |
| `0-print_list.c` | Fonction pour afficher les éléments de la liste |
| `main.c` | Fichier principal pour tester les fonctionnalités |

## 🔗 Structure de données

```c
typedef struct s_list
{
    int n;
    struct s_list *next;
} list_t;
```

## 🚀 Utilisation

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o list_program
./list_program
```

## 💡 Concepts clés

- **Nœuds** : Éléments de la liste contenant des données et un pointeur
- **Pointeurs** : Utilisation intensive pour naviguer entre les nœuds
- **Allocation dynamique** : Création de nœuds à l'exécution
- **Traversée** : Parcourir la liste pour effectuer des opérations

## 📝 Notes

- Attention à la gestion mémoire pour éviter les fuites
- Toujours vérifier que les allocations `malloc()` réussissent
- Libérer la mémoire avec `free()` quand elle n'est plus utilisée

## 👨‍🎓 Auteur

Projet Holberton School - Programmation C et structures de données
