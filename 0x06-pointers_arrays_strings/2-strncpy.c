#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: char type
 * @src: char type
 * @n: int type
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
