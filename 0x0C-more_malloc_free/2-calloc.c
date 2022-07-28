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
	unsigned int i;

	p = (int *)malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		return (p);
		i++;
	}
	return (0);
}
