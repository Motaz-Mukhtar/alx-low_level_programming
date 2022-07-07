#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - is the number @n pos or neg
 * Return: Always 0.
 */
void positive_or_negative(int n)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	if (n == 0)
	{
		printf("%d is zero", n);
	}
}
/**
 * main - Entry point of the program
 * Return: Always 0.
 */
int main(void)
{
	positive_or_negative(0);
	return (0);
}
