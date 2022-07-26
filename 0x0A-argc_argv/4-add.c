#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function of te program
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum, k, i, j, result = 0;
	
	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			sum += atoi(argv[k]);
			result += sum;
		}
		printf("%d\n", result);
	}
	return (0);
}
