#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0.
 */
int main(void)
{
	if (positive_or_negative(0))
	{
		positive_or_negative();
	}
	else
	{
		printf("Must be 0\n");
	}
	return (0);
}
