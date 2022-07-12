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
	for (n = 0; n <= *a; n++)
	{
		printf("%d, ", *a[n]);
	}
	printf('\n');
}
