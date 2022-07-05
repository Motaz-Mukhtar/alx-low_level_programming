#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0.
*/
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
