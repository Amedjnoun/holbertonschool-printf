#include "main.h"

/**
 * _printf - Produit une sortie selon un format donné
 * @format: La chaîne de format contenant des spécificateurs
 *
 * Return: Le nombre de caractères imprimés (hors octet nul)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	/* Vérification si le format est NULL */
	if (!format)
		return (-1);

	/* Initialisation de la liste d'arguments */
	va_start(args, format);

	/* Boucle sur chaque caractère de la chaîne de format */
	while (format && format[i])
	{
		/* Vérification d'un spécificateur de format (%) */
		if (format[i] == '%')
		{
			i++;
			/* Cas du spécificateur de caractère ('c') */
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1); /* Affichage du caractère */
				count++;
			}
			/* Cas du spécificateur de chaîne ('s') */
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char *);

				/* Si la chaîne est NULL, afficher "(null)" */
				if (!str)
					str = "(null)";
				while (*str)
				{
					write(1, str++, 1); /* Affichage des caractères */
					count++;
				}
			}
			/* Cas du spécificateur de pourcentage ('%') */
			else if (format[i] == '%')
			{
				write(1, "%", 1); /* Affichage du caractère '%' */
				count++;
			}
			/* Si le spécificateur est inconnu, on l'affiche tel quel */
			else
			{
				write(1, &format[i], 1);
				count++;
			}
		}
		/* Si ce n'est pas un spécificateur, on affiche le caractère */
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	/* Fin de la liste d'arguments */
	va_end(args);
	return (count); /* Retourne le nombre de caractères imprimés */
}
