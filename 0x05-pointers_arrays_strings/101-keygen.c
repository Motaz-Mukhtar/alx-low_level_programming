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
	char *randChar
	=
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*";
	char n, i = 0;

	srand(time(0));

	while (i < 10)
	{
		n = 0 + (rand() % (strlen(randChar) - 1));
		printf("%c", randChar[n]);
		i++;
	}
	printf("\n");
	return (0);
}
