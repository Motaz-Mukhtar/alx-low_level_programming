#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line
 * @n: int type
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
			{
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
