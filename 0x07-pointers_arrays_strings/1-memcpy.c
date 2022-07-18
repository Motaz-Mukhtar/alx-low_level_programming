#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: char type
 * @src: char type
 * @n: char type
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
