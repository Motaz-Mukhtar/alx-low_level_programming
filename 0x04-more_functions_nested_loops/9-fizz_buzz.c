#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 * Return: Always 0.
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
