#include "function_pointers.h"
/**
 * array_iterator - executes a function given as  a param
 * @array: int type
 * @size: size_t type
 * @action: void fucntion pointer type
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*func)(int);
	int i;

	func = action;
	while (i < size)
	{
		func(array[i]);
		i++;
	}
}
