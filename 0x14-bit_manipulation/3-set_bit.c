#include "main.h"
/**
 * set_bit - sets the valu of a bit to 1
 * @n: unsigned long int type
 * @index: unsigned int type
 * Return: 1 if it worked or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= 1 << index;
	return (1);
}
