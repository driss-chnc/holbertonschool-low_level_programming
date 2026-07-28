# Doubly Linked Lists

Ce répertoire contient un exemple simple d'une liste doublement chaînée en langage C.

## Description

Une liste doublement chaînée (`dlistint_t`) est une structure de données composée de nœuds reliés dans les deux sens : chaque nœud possède un pointeur vers le nœud précédent et un pointeur vers le nœud suivant.

Dans ce projet :
- `lists.h` définit la structure `dlistint_t` et la fonction `print_dlistint`.
- `0-print_dlistint.c` implémente la fonction qui affiche tous les éléments d'une liste.
- `main.c` construit un petit exemple de liste à deux éléments, affiche son contenu et libère la mémoire allouée.

## Fichiers

- `lists.h` : définition de la structure de liste doublement chaînée.
- `0-print_dlistint.c` : fonction d'affichage de la liste.
- `main.c` : programme de test qui crée une liste, l'affiche et affiche le nombre d'éléments.

## Structure de `dlistint_t`

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

- `n` : valeur entière stockée dans le nœud.
- `prev` : pointeur vers le nœud précédent.
- `next` : pointeur vers le nœud suivant.

## Compilation

Pour compiler le projet :

```bash
gcc -Wall -Wextra -Werror -pedantic main.c 0-print_dlistint.c -o dlist
```

## Exécution

Lancer l'exécutable :

```bash
./dlist
```

La sortie attendue est :

```text
9
8
-> 2 elements
```

## Notes

- Le programme alloue un seul nœud dynamiquement et utilise un nœud statique pour démontrer la connexion entre deux éléments.
- `print_dlistint` parcourt la liste depuis le premier nœud et affiche chaque valeur.
- Cette base peut être étendue pour ajouter, supprimer ou rechercher des nœuds dans la liste.
