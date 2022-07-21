#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns the natural sqre root
 * @n: int type
 * Return: Always 0.
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	if (square == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
