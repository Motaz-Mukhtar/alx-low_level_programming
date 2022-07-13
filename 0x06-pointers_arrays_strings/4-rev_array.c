#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of int
 * @a: the array
 * @n: number of element
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int *p, i = 1, aux, k = 0;

	aux = 1;
	p = a;
	while (i < n)
	{
		p++;
		i++;
	}
	while (k < n / 2)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
		k++;
	}
}
