#include "main.h"
/**
 * print_alphabet_x10 - Entry point of the program
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n, i = 1;
	
	while (i <= 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
