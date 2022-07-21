#include "main.h"
#include <stdio.h>
/**
 * prime - write prime number
 * @n: int type
 * @i: int type
 * Return: Always 0.
 */
int prime(int n, int i)
{
	if (n % i == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (prime(n, i + 1));
}
/**
 * is_prime_number - write prime number
 * @n: int type
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (prime(n, 3));
}
