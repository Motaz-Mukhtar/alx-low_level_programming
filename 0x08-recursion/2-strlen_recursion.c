#include "main.h"
#include <stdio.h>
/**
 * strlen_recursion - returns the length of a sring
 * @s: char type
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
