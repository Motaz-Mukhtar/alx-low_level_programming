#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - seaches a string for any set of bytes.
 * @s: char type
 * @accept: char type
 * Return: always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
