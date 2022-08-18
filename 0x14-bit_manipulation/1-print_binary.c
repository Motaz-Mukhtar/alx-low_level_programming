#include "main.h"
/**
 * _putchar -  print char
 * @c: char type
 * Return: the char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_binary - convert int number to binary num
 * @n: number
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
