#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - write prime number
 * @n: int type
 * Return: Always 0.
 */
int is_prime_umber(int n)
{
	int i = 2, m = 0, flag = 0;

	m = n / 2;
	if (n <= 1)
	{
		return (0);
	}
	if (n % m == 0)
	{
		return (0);
	}
	if (flag == 0)
	{
		if (n % 5 == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	i++;
	return (is_prime_number(n + 1));
}
