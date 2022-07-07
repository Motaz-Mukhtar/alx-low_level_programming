#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 * @n: integer type
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int key;

	if (n != 98)
	{
		if (n <= 98)
		{
			key = 1;
		}
		else
		{
			key = 0;
		}
		while (n <= 98 && key == 1)
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
		while (n >= 98 && key == 0)
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
	}
	else
	{
		printf("98\n");
	}
}
