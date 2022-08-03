#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as  a param
 * @array: int type
 * @size: size_t type
 * @action: void fucntion pointer type
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*func)(int);
	int i, ssize = size;

	func = action;
	i = 0;
	if (action != NULL && array != NULL)
	{
		while (i < ssize)
		{
			func(array[i]);
			i++;
		}
	}
}
