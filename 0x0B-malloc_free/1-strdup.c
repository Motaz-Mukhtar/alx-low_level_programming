#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space
 * @str: char type
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		s = malloc(i * sizeof(str) + 1);
		i++;
	}
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
	free(s);
}
