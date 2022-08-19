#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, num = 1, len;
	unsigned int number = 0;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	for (i = len; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
			number = number + (num * (b[i] - '0'));
		else
			return (0);
		num *= 2;
	}
	return (number);
}
