#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers
 * Return: Alwyas 0.
 */
void more_numbers(void)
{
	int n = 0, j;
	while (n <= 14)
	{
		j = 0;
		while (j <= 10)
		{
			putchar(n);
			j++;
		}
		putchar('\n');
		n++;
	}
}

int main(void)
{
	more_numbers();
	return 0;
}
