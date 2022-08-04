#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of the all its param
 * @n: const unsigned int type
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	sum = 0;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
