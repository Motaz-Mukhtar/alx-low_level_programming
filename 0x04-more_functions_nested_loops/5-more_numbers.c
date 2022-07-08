#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers
 * Return: Alwyas 0.
 */
void more_numbers(void)
{
	int n, j;

	for (j = 0; j < 10; j++)
	{
		for (n = 0; n < 15; n++)
		{
			putchar(n + '0');
		}
		putchar('\n');
	}
}
int main(void)
{
	more_numbers();
	return (0);
}
