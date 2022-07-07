#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Checks for a digit
 * @c: int type
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c <= 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
