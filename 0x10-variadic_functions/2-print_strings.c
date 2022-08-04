#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: char type
 * @n: unsigned int type
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) != NULL)
			printf("(nil)");
		else
		{
		if (i == n - 1 || separator == NULL)
		{
			printf("%s", va_arg(ap, char *));
		}
		else
		{
			if (i < n)
				printf("%s%s", va_arg(ap, char *), separator);
		}
		}
	}
	printf("\n");
	va_end(ap);
}
