#include <stdio.h>
/**
 * sayHello - Print _putchar with a new line
 * Return: Always 0.
 */
int sayHello(void)
{
	printf("_putchar");
	return (0);
}

/**
 * print_alpahbet - print the alphabet, in lowercase
 * Return - Always 0.
 */
void print_alphabet(void)
{
	int n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
