#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 * @n: integer type
 * Return: Always 0.
 */
void print_to_98(int n)
{
	bool key;

	if (n != 98)
	{
		if (n < 98)
			key = true;
		else
			key = false;
		while (n < 98 && key == true)
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
		while (n >= 98 && key == false)
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
