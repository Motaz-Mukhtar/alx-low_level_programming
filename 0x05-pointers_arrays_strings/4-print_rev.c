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
	int len = strlen(s) - 1;

	while (len >= 0)
	{
		printf("%c", s[len]);
		len--;
	}
	printf("\n");
}
