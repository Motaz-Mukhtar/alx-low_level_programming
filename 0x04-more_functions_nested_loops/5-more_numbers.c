#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers
 * Return: Alwyas 0.
 */
void more_numbers(void)
{
	int n, nn, j = '0';

	while (j <= '9')
	{
		n = '0';
		nn = '0';
		while (nn <= '4')
		{
			while (n <= '9')
			{
				putchar(n);
				n++;
			}
			putchar('1');
			putchar(nn);
			nn++;
		}
		printf("\n");
		j++;
	}
}
