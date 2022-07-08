#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: int type
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (s = 1; s <= i; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
