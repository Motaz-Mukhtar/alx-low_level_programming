#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line
 * @n: int type
 * Return: Always 0.
 */
void print_line(int n)
{
	int j = 0;

	while (j < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		j++;
	}
	_putchar('$');
	_putchar('\n');
}
