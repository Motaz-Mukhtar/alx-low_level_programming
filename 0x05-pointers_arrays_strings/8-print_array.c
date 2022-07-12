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
	int i = 0;

	while (i < n)
	{
		if (i == 4)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
