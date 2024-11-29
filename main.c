#include <limits.h> /* Limit constants */
#include <stdio.h>  /* Standard input/output library */
#include "main.h"   /* Custom declarations */

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	unsigned int ui = (unsigned int)INT_MAX + 1024;
	void *addr = (void *)0x7ffe637541f0;

	/* Tests with _printf and printf */
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	/* Tests with different formats */
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");

	return (0);
}
