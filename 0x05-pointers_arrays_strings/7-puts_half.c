#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: char type
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = (strlen(str)) / 2;

	while (len <= strlen(str))
	{
		printf("%c", str[len]);
		len++;
	}
	printf("\n");
}
