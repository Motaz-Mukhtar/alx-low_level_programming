#include <stdio.h>
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
