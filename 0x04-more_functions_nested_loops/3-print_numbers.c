#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
