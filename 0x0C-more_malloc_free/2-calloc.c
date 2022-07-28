#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, suing malloc
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	return (calloc(nmemb, size));
}


