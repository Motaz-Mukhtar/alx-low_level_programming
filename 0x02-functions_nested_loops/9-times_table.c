#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: Always 0.
 */
void times_table(void)
{
	int n, j = 1, i = 0;
	
	while (j <= 10)
	{
		n = 1;
		while (n <= 10)
		{
			//putchar(i + '0');
			//putchar(',');
			//putchar(' ');
			printf("%d, ", i);
			n++;
			i -= j;
		}
		putchar('\n');
		j++;
		//i += j;
	}
}

int main(void)
{
	times_table();
	return (0);
}
