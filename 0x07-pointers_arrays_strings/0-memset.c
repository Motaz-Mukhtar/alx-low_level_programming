#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memset - fills memory with const byte
 * @s: char type
 * @b: char type
 * @n: unsigned int type
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 1; i < n + 1; i++)
	{
		s[i - 1] = b;
		s[n] = s[i];
	}
	return (s);
}

