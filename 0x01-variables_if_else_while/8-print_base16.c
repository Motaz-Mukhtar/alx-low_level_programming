#include <stdio.h>
/**
 * main - This is the starting point of the program
 * Return: main function
 */
int main(void)

{
	char n = '0';
	char h = 'a';

	while (n <= '9')

	{
		putchar(n);
		n++;
	}

	while (h <= 'f')
	{
		putchar(h);
		h++;
	}

	printf("\n");
	return (0);

}
