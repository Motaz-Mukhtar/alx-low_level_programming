#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - fucntion that prints a name;
 * @name: char type
 * @f: void fucntion to pointer type
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	void (*func)(char *);
	int *p;

	p = malloc(char);
	func = f;
	if (p != NULL)
	{
		func(name);
	}
}
