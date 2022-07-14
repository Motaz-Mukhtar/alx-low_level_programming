#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * string_toupper - chang all lowercase to upercase
 * @s: char type
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	for (int i = 0; i <= strlen(s) - 1; i++)
	{
		if (s[i] != ' ' && (s[i] >= 97 && s[i] <= 172))
		{
			s[i] = s[i] - 32;
		}
		else if (!(s[i] >= 65 && s[i] <= 90) && (s[i] >= 65 && s[i] <= 90))
		{
			s[i] = ' ';
		}
	}
	return (s);
}
