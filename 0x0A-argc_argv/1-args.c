#include <stdio.h>
/**
 * main - main fucntion of the program
 * @argc: int type
 * @argv: char type
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
