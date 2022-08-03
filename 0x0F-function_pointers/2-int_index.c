#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: int type
 * @size: int type
 * @cmp: int fucntion pointer type
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*func)(int);
	int i;

	func = cmp;
	if (size <= 0)
	{
		return (-1);
	}
	if (func == NULL && array == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		if (func(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
