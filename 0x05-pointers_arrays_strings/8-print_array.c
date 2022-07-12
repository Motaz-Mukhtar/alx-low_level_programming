#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elemnets of an array
 * @a: type of int
 * @n: type of int
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
