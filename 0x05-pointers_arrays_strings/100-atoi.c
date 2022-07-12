#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - conver a string to int
 * @s: char type
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int val;

	val = atoi(s);
	if (val == 0)
	{
		return (0);
	}
	else
	{
		return (val);
	}
}
