#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr- locates a substring
 * @haystack: char type
 * @needle: char type
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
