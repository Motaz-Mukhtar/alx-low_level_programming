#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: Always 0.
 */
void times_table(void)
{
	int n, j = 0;
	
	while (j <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			printf("%d", j * n);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			n++;
		}
		_putchar('\n');
		j++;
	}
}