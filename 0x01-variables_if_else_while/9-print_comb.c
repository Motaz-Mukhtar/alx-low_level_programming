#include <stdio.h>
/**
 * main - This is the start point of the program
 * Return: main function
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);

}
