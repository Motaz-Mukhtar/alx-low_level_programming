#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of the all its param
 * @n: const unsigned int type
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list ap;
	int i, sum;

	va_start (ap, coutn);

	sum = 0;
	for (i = 0; i < coutn; i++)
		sum += var_arg (ap, int);
	va_end(ap);
	return (sum);
}
