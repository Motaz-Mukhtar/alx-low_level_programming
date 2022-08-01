#include "main.h"
#include <stdio.h>
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
	if (min > max || array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}

void simple_printf_buffer(int *buffer, unsigned int size)
{
	unsigned int i;
	
	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x0%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int *a;

	a = array_range(12, 11);
	simple_printf_buffer(a, 11);
	free(a);
	return (0);
}
