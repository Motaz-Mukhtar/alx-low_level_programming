#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: Always 0.
 */
void times_table(void)
{
	int n, j = 0;
	
	while (j <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			if (j * n >= 10)
			{
				printf(" %d", j * n);
				putchar(',');

			}
			else
			{
				if (j * n <= 9)
				{
				
				printf("  %d", j * n);
				putchar(',');
				}
				else
				{
					if ((9 * n) % 9 == 0)
					{
						printf("  %d", j * n);
						putchar(',');
					}
				}
			}
			n++;
		}
		putchar('\n');
		j++;
	}
}
int main(void)
{
	times_table();
	return (0);
}
