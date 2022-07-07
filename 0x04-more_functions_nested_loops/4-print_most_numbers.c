#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - This is the Starting point of the program
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			printf("%c", c);
		}
		c++;
	}
	printf("\n");
	return (0);
}
