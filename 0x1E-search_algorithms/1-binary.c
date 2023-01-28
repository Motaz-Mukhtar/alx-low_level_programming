#include "search_algos.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>
/**
 * binary_search - Searches for a value in a sroted array of integers
 * @array: Pointer to the first element of the arrapy to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int m, R = size - 1, L = 0, i;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (L <= R)
	{
		i = L;
		printf("Searching in array: ");
		while (i <= R)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
			i++;
		}
		putchar('\n');
		m = floor((L + R) / 2);
		if (array[m] < value)
			L = m + 1;
		else
		{
			if (array[m] > value)
				R = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
