#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - is the number @n pos or neg
 * @i: integar type.
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
}

int main(void)
{
	positive_or_negative(3);
	return (0);
}
