# holbertonschool-printf

## Description

Le projet **holbertonschool-printf** consiste à implémenter une version simplifiée de la fonction `printf` de la bibliothèque standard C. L'objectif est de gérer plusieurs spécificateurs de format et de reproduire le comportement de cette fonction dans des conditions spécifiques.

### Objectifs du projet :
1. Implémenter la fonction `_printf` pour gérer des spécificateurs de format de base.
2. Manipuler une liste d'arguments variable en utilisant `stdarg.h`.
3. Créer une page de manuel pour la fonction `_printf`.

## Fonctionnalités

Le projet est divisé en plusieurs étapes, chaque étape ajoutant une fonctionnalité supplémentaire. Voici un résumé des tâches à réaliser :

---

## Tâche 0 : _printf de base

### Description

Implémentation d'une fonction `_printf` qui produit une sortie formatée selon un format donné. Les spécificateurs pris en charge sont :
- `%c` : Affichage d'un caractère.
- `%s` : Affichage d'une chaîne de caractères.
- `%%` : Affichage du symbole pourcentage `%`.

#### Prototype :

```c
int _printf(const char *format, ...);
