#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - This is the starting point of the program
 * Return: main function
 */
int main(void)
{
	char n, i = 0;

	srand(time(0));
	n = 33 + (rand() % 125);
	while (i < 10)
	{
		n = 33 + (rand() % 125);
		putchar(n);
		i++;
	}
	printf("\n");
	return (0);
}
