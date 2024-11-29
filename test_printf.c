#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for testing _printf.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	/* Test for character */
	count = _printf("Character: %c\n", 'A');
	printf("Printed characters: %d\n", count);

	/* Test for string */
	count = _printf("String: %s\n", "Hello, world!");
	printf("Printed characters: %d\n", count);

	/* Test for percentage sign */
	count = _printf("Percentage: %%\n");
	printf("Printed characters: %d\n", count);

	return (0);
}
