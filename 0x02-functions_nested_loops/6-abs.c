#include "main.h"
/**
 * _abs - absolute value of an integer.
 * @c - integer type
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c < 0)
	{
		c += c + c;
		return (c);
	}
}
