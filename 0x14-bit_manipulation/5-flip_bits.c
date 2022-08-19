#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: unsigned long int type
 * @m: unsigned long int type
 * Return: the number of bitsto flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m, bit = 0;

	if (n == m)
		return (0);

	while (num > 0)
	{
		bit += (num & 1);
		num >>= 1;
	}
	return (bit);
}
