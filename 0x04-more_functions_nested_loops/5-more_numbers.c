#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers
 * Return: Alwyas 0.
 */
void more_numbers(void)
{
	int n, j = 0;

	while (j < 10)
	{
		n = 0;
		while (n <= 14)
		{
			printf("%d", n);
			n++;
		}
		_putchar('\n');
		j++;
	}

}
