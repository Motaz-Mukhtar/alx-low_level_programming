#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other char
 * @str: char type
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len = strlen(str) - 1, i = 0;

	while (i < len)
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
