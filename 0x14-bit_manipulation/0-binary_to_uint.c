#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int number = 0, num = 1;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		number += (b[len] - '0') * num;
		num *= 2;
	}
	return (number);
}
