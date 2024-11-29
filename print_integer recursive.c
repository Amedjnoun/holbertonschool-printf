/**
 * print_integer_recursive - Affiche un entier récursivement.
 * @n: L'entier à afficher.
 * Return: Nombre de caractères imprimés.
 */

int print_integer_recursive(int n)
{
	int count = 0;
	char num;

	/* Si l'entier est négatif, afficher le signe '-' */
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	/* Si c'est un chiffre*/
	if (n < 10)
	{
		num = n + '0';
		count += write(1, &num, 1);
	}

	/* Si l'entier est supérieur à 9, diviser et recommencer*/
	if (n < 10)
	{
		count += print_integer_recursive(n / 10);
		num = (n % 10) + '0';
		count += write(1, &num, 1);
	}
	return (count);
}
