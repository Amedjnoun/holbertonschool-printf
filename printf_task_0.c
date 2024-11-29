#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Gère l'affichage d'un caractère.
 * @args: Liste des arguments.
 *
 * Return: Nombre de caractères imprimés.
 */
int print_char(va_list args)
{
	/* Récupération du caractère depuis la liste des arguments */
	char c = va_arg(args, int);

	/* Utilisation de write pour écrire le caractère sur stdout */
	return (write(1, &c, 1));
}

/**
 * print_string - Gère l'affichage d'une chaîne.
 * @args: Liste des arguments.
 *
 * Return: Nombre de caractères imprimés.
 */
int print_string(va_list args)
{
	/* Récupération de la chaîne de caract depuis la liste des arguments */
	char *str = va_arg(args, char *);
	int count = 0;

	/* Si la chaîne est NULL, afficher "(null)" à la place */
	if (!str)
		str = "(null)";

	/* Parcours de la chaîne et écriture caractère par caractère */
	while (*str)
		count += write(1, str++, 1);

	return (count);
}
/**
 * print_integer - Gère l'affichage d'un entier.
 * @args: Liste des arguments.
 * Return: Nombre de caractères imprimés.
 */
int print_integer(va_list args)
{
	/* Récupération de l'entier depuis la liste des arguments */
	int n = va_arg(args, int);

	return (print_integer_recursive(n));
}

/**
 * handle_format - Gère les spécificateurs de format.
 * @format: La chaîne de format.
 * @args: Liste des arguments.
 *
 * Return: Nombre de caractères imprimés.
 */
int handle_format(const char *format, va_list args)
{
	int count = 0;

	/* Vérification du spécificateur de format */
	if (*format == 'c')
		/* Affichage d'un caractère */
		count += print_char(args);
	else if (*format == 's')
		/* Affichage d'une chaîne de caractères */
		count += print_string(args);
	else if (*format == '%')
		/* Affichage du caractère '%' */
		count += write(1, "%", 1);
	else if (*format == 'd' || *format == 'i')
		/* Affichage d'un entier */
		count += print_integer(args);
	else
		/* Affichage du caractère inconnu tel quel */
		count += write(1, format, 1);

	return (count);
}

/**
 * _printf - Produit une sortie selon un format donné.
 * @format: La chaîne de format contenant des spécificateurs.
 *
 * Return: Nombre de caractères imprimés (hors octet nul).
 */
int _printf(const char *format, ...)
{
	va_list args; /* Liste des arguments variables */
	int i = 0, count = 0;

	/* Si le format est NULL, retourner une erreur */
	if (!format)
		return (-1);

	/* Initialisation de la liste des arguments */
	va_start(args, format);

	/* Parcours de la chaîne de format */
	while (format && format[i])
	{
		/* Si un spécificateur de format est détecté */
		if (format[i] == '%')
			/* Gérer le format et passer au caractère suivant */
			count += handle_format(&format[++i], args);
		else
			/* Écrire directement le caractère */
			count += write(1, &format[i], 1);
		i++;
	}

	/* Nettoyage de la liste des arguments */
	va_end(args);

	/* Retourner le nombre total de caractères imprimés */
	return (count);
}
