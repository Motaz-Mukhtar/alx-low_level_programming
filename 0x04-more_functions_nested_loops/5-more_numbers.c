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
				_putchar(n);
				n++;
			}
			_putchar('1');
			_putchar(nn);
			nn++;
		}
		printf("\n");
		j++;
	}
}
