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

	for (j = 0; j < n; j++)
	{
		for (i = 0; i <= j; i++)
		{
			if (n > 0)
			{
				putchar(' ');
			}
		}
		if (n > 0)
		{
			putchar('\\');
		}
		putchar('\n');
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}

int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}
