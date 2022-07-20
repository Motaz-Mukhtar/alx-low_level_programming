#include "main.h"
#include <stdio.h>
/**
 * factorial - returns fac of a given number
 * @n: int type
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
	}
	return (n * factorial(n - 1));
}
