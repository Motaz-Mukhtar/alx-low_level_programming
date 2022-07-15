#include "main.h"
#include <stdio.h>
/**
 * string_toupper - chang all lowercase to upercase
 * @s: char type
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
