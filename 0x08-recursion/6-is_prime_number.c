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
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (prime(n, i + 1));
}
/**
 * is_prime_number - write prime number
 * @n: int type
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
