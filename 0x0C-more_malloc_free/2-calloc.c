#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, suing malloc
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb);
	if (p == NULL)
		return (NULL);
	for (unsigned int i = 0; i < p; i++)
		return (p);
}
