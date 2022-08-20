#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 1, len;
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] == '1' || b[len] == '0')
			number += (num * (b[len] - '0'));
		else
			return (0);
		num *= 2;
	}
	return (number);
}
