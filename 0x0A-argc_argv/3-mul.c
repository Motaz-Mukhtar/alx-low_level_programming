#include <stdio.h>
#include <stdlib.h>
/**
 * main - main fucntion of the program
 * @argc: int type
 * @argv: char type
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
