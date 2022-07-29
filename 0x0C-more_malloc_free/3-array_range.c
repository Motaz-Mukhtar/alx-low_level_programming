#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int type
 * @max: int type
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (min > max)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
