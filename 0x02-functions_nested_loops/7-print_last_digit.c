#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer type.
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	n = n % 10;
	n = '0'+ n;
	_putchar(n);
	return (n);
}
