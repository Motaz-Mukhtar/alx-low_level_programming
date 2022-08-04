#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: const char const * type
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		if (i && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, float));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
