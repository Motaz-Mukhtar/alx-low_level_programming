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
	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i <= j; i++)
			{
				if (n > 0)
				{
					_putchar(' ');
				}
			}
			if (n > 0)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
