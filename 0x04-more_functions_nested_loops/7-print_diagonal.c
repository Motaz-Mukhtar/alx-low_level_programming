#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line
 * @n: int type
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i <= j; i++)
			{
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
			}
		}
	}
}
