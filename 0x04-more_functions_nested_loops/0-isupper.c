#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase cahracter.
 * @c: int type
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
