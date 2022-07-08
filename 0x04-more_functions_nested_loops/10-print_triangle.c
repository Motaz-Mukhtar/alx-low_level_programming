#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: int type
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}

int main(void)
{
	print_triangle(10);
	return (0);
}
