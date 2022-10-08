#include "main.h"

int _strlen(char *s)
{
	int length;

	while (s[length])
		length++;
	return (length);
}
