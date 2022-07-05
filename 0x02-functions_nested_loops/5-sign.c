#include "main.h"
/**
 * print_sign - Entry point of the program
 * @n: integar type
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return ("-1");
	}
}
