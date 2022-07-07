#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 * @n: integer type
 * Return: Always 0.
 */
void print_to_98(int n)
{
	for (int i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", i);
		}
		else
		{
		printf("%d, ", i);
		}
	}
	_putchar('\n');
	printf("%d\n", n);
}
