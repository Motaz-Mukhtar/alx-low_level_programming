#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer type.
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	n %= 10;
	_putchar(n);
	return (n);
}
