#include <stdio.h>

/**
 * main - this the Starting point of the program
 * description - print the alphbet of Uppercase and lowercase
 * Return: main function
*/
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		printf("%c", c);
		c++;
	}
	while (C <= 'Z')
	{
		printf("%c", C);
		C++;
	}
	printf("\n");
	return (0);
}
