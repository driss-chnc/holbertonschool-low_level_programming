# Fonctions variadiques en C

Ce dossier présente les notions de base liées aux fonctions variadiques en langage C. Les fonctions variadiques acceptent un nombre variable d'arguments, ce qui les rend utiles pour des fonctions de type `printf`, `sum`, ou des gestionnaires génériques d'arguments.

## Concepts clés

- Une fonction variadique est déclarée avec au moins un argument fixe suivi de `...`.
- La bibliothèque standard C fournit quatre macros dans `<stdarg.h>` pour parcourir ces arguments :
  - `va_list` : type pour conserver l'état de la liste d'arguments.
  - `va_start` : initialise la lecture de la liste à partir du dernier paramètre fixe.
  - `va_arg` : lit l'argument suivant et effectue la conversion de type.
  - `va_end` : termine l'utilisation de la liste et libère les ressources éventuelles.

## Exemple d'utilisation

```c
#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...)
{
    int total = 0;
    va_list args;

    va_start(args, count);
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);

    return total;
}
```

Dans cet exemple, `sum` peut recevoir un nombre variable d'entiers. Le paramètre `count` indique combien d'arguments supplémentaires seront fournis.

## Bonnes pratiques

- Toujours fournir au moins un argument fixe avant `...`.
- Utiliser une convention claire pour savoir combien et quels types d'arguments sont attendus.
- Appeler `va_end` après `va_start` pour éviter des comportements indéfinis.
- Éviter les conversions de type incorrectes : la lecture avec `va_arg` doit correspondre au type réel de l'argument.

## Cas d'usage courants

- Fonctions de formatage comme `printf` et `fprintf`
- Fonctions de logging personnalisées
- Fonctions de calcul flexibles (somme, moyenne, maximum, etc.)

## Limitations

- Les fonctions variadiques ne permettent pas de vérifier le nombre ou les types d'arguments à la compilation.
- Les arguments flottants peuvent être promus en `double` et les types plus petits comme `char` ou `short` sont promus en `int`.
- Pour des interfaces plus sûres, privilégier les variadics de niveau supérieur comme les fonctions basées sur des tableaux ou des structures.

## Ressources

- Documentation POSIX `<stdarg.h>`
- Manuel de `printf` et de la gestion des arguments variadiques
- Exercices Holberton sur la manipulation d'arguments variables
