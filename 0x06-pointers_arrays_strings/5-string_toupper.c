#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 * string_toupper - chang all lowercase to upercase
 * @s: char type
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (i < strlen(s) - 1)
	{
		return (putchar(toupper(s[i])));
		i++;
	}
}
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr  = string_toupper(str);
	printf("%s", ptr);
	return (0);
}
