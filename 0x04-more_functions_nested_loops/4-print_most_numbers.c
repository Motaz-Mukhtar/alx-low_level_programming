#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - This is the Starting point of the program
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
	return (0);
}
