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
	char chars[]
	=
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*";
	char n;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		n = 0 + (rand() % (strlen(chars) - 1));
		printf("%c", chars[n]);
	}
	printf("\n");
	return (0);
}
