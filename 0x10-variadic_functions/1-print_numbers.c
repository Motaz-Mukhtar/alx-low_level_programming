#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: const char type
 * @n: const unsigned int type
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int *p;

	va_start(ap, n);
	p = malloc(va_arg(ap, int));
	if (p != NULL)
	{
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	}
	printf("\n");
	va_end(ap);
}
