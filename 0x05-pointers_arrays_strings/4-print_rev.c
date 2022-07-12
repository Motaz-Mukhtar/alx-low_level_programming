#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: char type
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = strlen(s); i >= 0; --i)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
