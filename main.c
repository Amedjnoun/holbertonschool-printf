#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str_null = NULL;

	int len1 = 0;
	int len2 = 0;

	printf("printf\t test 1 : b majuscule : %c et d majuscule : %c \n", 'B', 'D');
	_printf("_printf\t test 1 : b majuscule : %c et d majuscule : %c \n", 'B', 'D');

	printf("printf\t test 2.1 : b et d tout collé : %c%c \n", 'B', 'D');
	_printf("_printf\t test 2.1 : b et d tout collé : %c%c \n", 'B', 'D');

	printf("printf\t test 2.2 : Caractère avec espace : '%c' \n", 'Z');
	_printf("_printf\t test 2.2 : Caractère avec espace : '%c' \n", 'Z');

	printf("printf\t test 2.3 : Caractère ASCII 65 : %c \n", 65);
	_printf("_printf\t test 2.3 : Caractère ASCII 65 : %c \n", 65);

	printf("printf\t test 2.4 : Saut de ligne comme caractère : [%c] \n", '\n');
	_printf("_printf\t test 2.4 : Saut de ligne comme caractère : [%c] \n", '\n');

	printf("printf\t test 2.5 : Tabulation comme caractère : [%c] \n", '\t');
	_printf("_printf\t test 2.5 : Tabulation comme caractère : [%c] \n", '\t');

	printf("printf\t test 2.6 : Backslash comme caractère : [%c] \n", '\\');
	_printf("_printf\t test 2.6 : Backslash comme caractère : [%c] \n", '\\');

	printf("printf\t test 3 : pourcent %% \n");
	_printf("_printf\t test 3 : pourcent %% \n");

	printf("printf\t test 4 : 3 symbole pourcent Cas annulé pour éviter warning GCC \n");
	_printf("_printf\t test 4 : 3 symbole pourcent Cas annulé pour éviter warning GCC \n");

	printf("printf\t test 5 : 4 symboles pourcent %%%% \n");
	_printf("_printf\t test 5 : 4 symboles pourcent %%%% \n");

	printf("printf\t test 6 : 8 symboles pourcent %%%%%%%% \n");
	_printf("_printf\t test 6 : 8 symboles pourcent %%%%%%%% \n");

	printf("printf\t test 7 : 15 symboles pourcent Cas annulé pour éviter warning GCC \n");
	_printf("_printf\t test 7 : 15 symboles pourcent Cas annulé pour éviter warning GCC \n");

	printf("printf\t test 8 : pourcent début %% milieu %% fin %%\n");
	printf("_printf\t test 8 : pourcent début %% milieu %% fin %%\n");

	printf("printf\t test 9 : mix de pourcent et char : %% et %c \n",'Z');
	_printf("_printf\t test 9 : mix de pourcent et char : %% et %c \n",'Z');

	printf("printf\t test 10 : mix de pourcent et char tout collé à la suite : %%%c \n",'Z');
	_printf("_printf\t test 10 : mix de pourcent et char tout collé à la suite : %%%c \n",'Z');

	printf("printf\t test 11 : mix de pourcent et char tout collé à la suite x2 : %%%c%%%c  \n",'Z','y');
	_printf("_printf\t test 11 : mix de pourcent et char tout collé à la suite x2 : %%%c%%%c \n",'Z','y');

	printf("printf\t test 12 : Pourcent malformé (1 seul symbole) : Cas annulé pour éviter warning GCC \n");
	_printf("_printf\t test 12 : Pourcent malformé  (1 seul symbole) : Cas annulé pour éviter warning GCC \n");

	printf("printf\t test 13 : Une string simple : %s \n","Je suis une string simple !");
	_printf("_printf\t test 13 : Une string simple : %s \n","Je suis une string simple !");

	printf("printf\t test 13 : Une string vide : %s \n","");
	_printf("_printf\t test 13 : Une string vide : %s \n","");

	printf("printf\t test 14 : Des caractéres spéciaux : %s\n", "Tab:\tNewline:\n");
	_printf("_printf\t test 14 : Des caractéres spéciaux : %s\n", "Tab:\tNewline:\n");

	printf("printf\t test 15 : une chaine NULL : %s\n", str_null);
	_printf("_printf\t test 15 : une chaine NULL : %s\n", str_null);

	printf("printf\t test 17 : 100 pourcent ? %s\n", "100% !");
	_printf("_printf\t test 17 : 100 pourcent ? %s\n", "100% !");

	printf("printf\t test 18 : Mélange simple : %c (c), %s (s), %% (pourcent)\n",'A',"Lorem ipsum");
	_printf("_printf\t test 18 : Mélange simple: %c (c), %s (s), %% (pourcent)\n",'A',"Lorem ipsum");

	printf("printf\t test 19 : Mélange complexe %s (vide), ASCII 65 : %c, NULL : %s, spéciaux : [%c|%c|%c]\n", "", 65, str_null, '\n', '\t', '\\');
	_printf("_printf\t test 19 : Mélange complexe %s (vide), ASCII 65 : %c, NULL : %s, spéciaux : [%c|%c|%c]\n", "", 65, str_null, '\n', '\t', '\\');

	printf("\n#################################\n");

	printf("CALCUL DES LONGUEURS A \n");
	len1 = printf("vrai printf\t test A20 : Test des longueurs de chaine\n");
	len2 = _printf("holb printf\t test A20 : Test des longueurs de chaine\n");
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("CALCUL DES LONGUEURS B \n");
	len1 = printf("vrai printf\t test B21 : Test des longueurs de chaine ave une string simple : %s \n","Je suis une string simple !");
	len2 = _printf("holb printf\t test B21 : Test des longueurs de chaine ave une string simple : %s \n","Je suis une string simple !");
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("CALCUL DES LONGUEURS C \n");
	len1 = printf("vrai printf\t test C22 : char : %c \n",'A');
	len2 = _printf("holb printf\t test C22 : char : %c \n",'A');
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("CALCUL DES LONGUEURS D \n");
	len1 = printf("vrai printf\t test D23 : char x2 : %c et %c \n",'A','B');
	len2 = _printf("holb printf\t test D23 : char x2 : %c et %c \n",'A','B');
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("CALCUL DES LONGUEURS E \n");
	len1 = printf("vrai printf\t test E24 : string : %s et char %c et char %c et puis int négatif %d (d positif), %i (i négatif), %d (zéro) \n","Hello World", 'A','B',1991,-42,0);
	len2 = printf("holb printf\t test E24 : string : %s et char %c et char %c et puis int négatif %d (d positif), %i (i négatif), %d (zéro) \n","Hello World", 'A','B',1991,-42,0);
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("\n#################################\n");
	printf("Essais avec %%d \n");

	printf("printf\t test d-1 : Positif %d négatif %d zéro %d : \n",42,-42,0);
	_printf("_printf\t test d-1 : Positif %d négatif %d zéro %d : \n",42,-42,0);

	printf("printf\t test d-2 : INT MAX = %d // INT MIN = %d\n", INT_MAX, INT_MIN);
	_printf("_printf\t test d-2 : INT MAX = %d // INT MIN = %d\n", INT_MAX, INT_MIN);

	printf("printf\t test d-3 : Double pourcent avant %%d : Hello %d\n", 42);
	_printf("_printf\t test d-3 : Double pourcent avant %%d : Hello %d\n", 42);

	printf("printf\t test d-4 : Double pourcent aprés %d : Hello %%d\n", 42);
	_printf("_printf\t test d-4 : Double pourcent aprés %d : Hello %%d\n", 42);

	printf("printf\t test d-5 : Plusieurs %%d à la suite : %d %d %d %d %d\n",0,2,4,8,16);
	_printf("_printf\t test d-5 : Plusieurs %%d à la suite : %d %d %d %d %d\n",0,2,4,8,16);

	printf("printf\t test d-6 : Un caractére (A) en tant que paramétre %d\n", 'A');
	_printf("_printf\t test d-6 : Un caractére (A) en tant que paramétre %d\n", 'A');

	printf("\n#################################\n");
	printf("Essais avec %%i \n");

	printf("printf\t test d-1 : Positif %i négatif %i zéro %i : \n",42,-42,0);
	_printf("_printf\t test d-1 : Positif %i négatif %i zéro %i : \n",42,-42,0);

	printf("printf\t test d-2 : INT MAX = %i // INT MIN = %i\n", INT_MAX, INT_MIN);
	_printf("_printf\t test d-2 : INT MAX = %i // INT MIN = %i\n", INT_MAX, INT_MIN);

	printf("printf\t test d-3 : Double pourcent avant %%i : Hello %i\n", 42);
	_printf("_printf\t test d-3 : Double pourcent avant %%i : Hello %i\n", 42);

	printf("printf\t test d-4 : Double pourcent aprés %i : Hello %%i\n", 42);
	_printf("_printf\t test d-4 : Double pourcent aprés %i : Hello %%i\n", 42);

	printf("printf\t test d-5 : Plusieurs %%i à la suite : %i %i %i %i %i\n",0,2,4,8,16);
	_printf("_printf\t test d-5 : Plusieurs %%i à la suite : %i %i %i %i %i\n",0,2,4,8,16);

	printf("printf\t test d-6 : Un caractére (A) en tant que paramétre %i\n", 'A');
	_printf("_printf\t test d-6 : Un caractére (A) en tant que paramétre %i\n", 'A');

	printf("\n#################################\n");
	printf("\n SUPER CAS EXTRME OF THE DEAD AVEC CALCUL DES LONGUEURS : \n");
	len1 = printf("vrai printf\t Test extrême : Caractère : %c, Chaîne : %s, Pourcentage : %%, Entier (%%i) : %i, Entier (%%d) : %d\n",'A', "Hello, world!", -12345, 67890);
	len2 = _printf("vrai printf\t Test extrême : Caractère : %c, Chaîne : %s, Pourcentage : %%, Entier (%%i) : %i, Entier (%%d) : %d\n",'A', "Hello, world!", -12345, 67890);
	printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("\n ### CAS REPRIS DE L'EXO HBTN ### \n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len1 = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    printf("\n### TEST 1 ###\n");
    len1 = printf("%c", '\0');
    len2 = _printf("%c", '\0');
    printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 2 ###\n");
    len1 = printf("%s", (char *)NULL);
    len2 = _printf("%s", (char *)NULL);
    printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 3 ###\n");
    len1 = printf("%c", '%');
    len2 = _printf("%c", '%');
	printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 4 ###\n");
    len1 = printf("%s", "Hello\nWorld\t\n");
    len2 = _printf("%s", "Hello\nWorld\t\n");
    printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 5 ###\n");
    len1 = printf("%%%%%%");
    len2 = _printf("%%%%%%");
    printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 6 ###\n");
    len1 = printf("%c%s%%%c\n", '\0', "Hello\nWorld\t!", 'A');
    len2 = _printf("%c%s%%%c\n", '\0', "Hello\nWorld\t!", 'A');
    printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 7 ###\n");
    len1 = printf("");
    len2 = _printf("");
    printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 8 ###\n");
    len1 = printf("     ");
    len2 = _printf("     ");
    printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 9 ###\n");
    len1 = printf("\n\n\n\n\n");
    len2 = _printf("\n\n\n\n\n");
    printf("len printf = %d && len _printf = %d\n", len1, len2);

    printf("\n### TEST 10 ###\n");
    len1 = printf("\t\t\t\t\t");
    len2 = _printf("\t\t\t\t\t");
    printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("\n### TEST 11 ###\n");
    len1 = printf("vrai printf : blabla %~");
	printf("\n");
    len2 = _printf("holb printf : blabla %~");
	printf("\n");
    printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("\n### TEST 12 ###\n");
    len1 = printf("vrai printf : blabla %~ \n",1235);
    len2 = _printf("holb printf : blabla %~ \n",1235);
    printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("\n### TEST 13 ###\n");
    len1 = printf("vrai printf : blabla %% \n",1235);
    len2 = _printf("holb printf : blabla %% \n",1235);
    printf("len printf = %d && len _printf = %d\n", len1, len2);

	printf("\n### TEST 14 ###\n");
    len1 = printf("vrai printf : blabla %%% \n");
    len2 = _printf("holb printf : blabla %%% \n");
    printf("len printf = %d && len _printf = %d\n", len1, len2);


	return (0);
}