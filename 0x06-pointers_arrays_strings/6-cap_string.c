#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @c: char type
 * Return: Always 0.
 */
char *cap_string(char *c)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (c[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || c[a - 1] == spc[i]) && (c[a] >= 97 &&
			c[a] <= 122))
			{
				c[a] = c[a] - 32;
			}
			i++;
		}
		a++;
	}
	return (c);
}
