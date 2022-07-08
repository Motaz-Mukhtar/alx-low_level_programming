#include "main.h"
#include <stdio.h>
/**
 * printnumber - print int
 * @n: int type
 * Return: Always 0.
 */
void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		printnumber(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * more_numbers - prints 10 times the numbers
 * Return: Alwyas 0.
 */
void more_numbers(void)
{
	int n, j;

	for (j = 0; j < 10; j++)
	{
		for (n = 0; n < 15; n++)
		{
			printnumber(n);
		}
		_putchar('\n');
	}
}
