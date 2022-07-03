#include <stdio.h>
/**
 * main - This is the Starting point of the program
 * Return: main function
 */
int main(void)

{
	char c = 'a';

	while (c <= 'z')

	{
		if (c != 'q' && c != 'e')

		{

			printf("%c", c);

		}
		c++;
	}
	printf("\n");

	return (0);

}
