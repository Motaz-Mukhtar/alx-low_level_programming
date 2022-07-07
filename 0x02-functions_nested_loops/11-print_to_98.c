#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 * @n: integer type
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;
	if (n != 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}

int main(void)
{
	print_to_98(111);
	return (0);
}
