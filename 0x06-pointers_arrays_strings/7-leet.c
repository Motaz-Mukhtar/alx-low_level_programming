#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - ecnodes string int 1337.
 * @s: char type
 * Return: Always 0.
 */
char *leet(char *s)
{
	char numbers[5] = {'4', '3', '0', '7', '1'};
	char chars[5] = {'a', 'e', 'o', 't', 'l'};
	int i = 0, l = 5, b;

	while (i < strlen(s) - 1)
	{
		b = 0;
		while (b < l)
		{
			if (s[i] == chars[b] || s[i] == chars[b] - 32)
				s[i] = numbers[b];
			b++;
		}
		i++;
	}
	return (s);
}
