#include "main.h"
/**
 * create_array - initializes it with a specific char
 * @size: int type
 * @c: car type
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(c));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
