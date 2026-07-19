
# argc_argv

Ce dépôt explique l'utilisation des paramètres `argc` et `argv` passés à la fonction `main` en langage C.

## Description

En C, la fonction `main` peut accepter deux paramètres permettant de récupérer les arguments passés au programme depuis la ligne de commande :

- `int argc` : nombre d'arguments (au moins 1, le nom du programme)
- `char *argv[]` : tableau de chaînes contenant les arguments (terminé par `NULL` dans la pratique)

## Prototype courant

```c
int main(int argc, char *argv[])
{
	/* ... */
}
```

## Exemples d'utilisation

- Afficher tous les arguments :

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);
	return 0;
}
```

Compilation et exécution :

```bash
gcc -Wall -Wextra -pedantic -std=c11 main.c -o myprog
./myprog arg1 arg2
```

Sortie attendue :

```
argv[0] = ./myprog
argv[1] = arg1
argv[2] = arg2
```

## Cas d'usage courants

- Vérifier la présence d'un argument :

```c
if (argc < 2) {
	fprintf(stderr, "Usage: %s <arg>\n", argv[0]);
	return 1;
}
```

- Convertir un argument en entier :

```c
#include <stdlib.h>
int value = atoi(argv[1]);
```

## Pièges et bonnes pratiques

- Ne pas accéder à `argv[i]` si `i >= argc`.
- `argv[0]` contient généralement le chemin vers l'exécutable, mais sa valeur peut varier.
- Préférer `strtol` plutôt que `atoi` pour une conversion sûre et la détection d'erreurs.

## Références

- ISO C standard — définition de `main`
- Documentation `strtol`, `atoi`, `printf`

---

Fichier mis à jour : README expliquant `argc` et `argv`, exemples et conseils.
