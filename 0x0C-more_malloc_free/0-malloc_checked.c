#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory
 * @b: unsigned int type
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
