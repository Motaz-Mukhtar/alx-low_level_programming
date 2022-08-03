#include "function_pointers.h"
/**
 * print_name - fucntion that prints a name;
 * @name: char type
 * @f: void fucntion to pointer type
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	char (*func)(char *);

	func = f;
	func(name);
}
