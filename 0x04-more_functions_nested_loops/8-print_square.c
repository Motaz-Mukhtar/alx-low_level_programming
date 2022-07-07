#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 * @size: int type
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	for (int i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}

int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}
