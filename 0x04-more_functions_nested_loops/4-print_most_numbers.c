#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - This is the Starting point of the program
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
	return (0);
}
