#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: int type
 * @size: int type
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, i = 0;

	while (i < size)
	{
		d1 += a[i + 5];
		d2 += a[size - 5];
	}
	printf("%d, %d", d1, d2);
	printf("\n");
}
