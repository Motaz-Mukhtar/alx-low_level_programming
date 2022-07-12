#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: char type
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len  = strlen(s) - 1;

	while (len >= 0)
	{
		printf("%c", s[len]);
		len--;
	}
	printf("\n");
}
