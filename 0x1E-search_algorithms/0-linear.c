#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
/**
 * linear_search - Searches for 
 * @a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%d]\n = [%d]", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
