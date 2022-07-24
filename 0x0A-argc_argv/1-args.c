#include <stdio.h>
/**
 * main - main fucntion of the program
 * @argc: int type
 * @argv: char type
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, count;

	for (i = 0; i < argc; i++)
	{
		argv[i] = "";
		count = i;
	}
	printf("%d\n", count);
	return (0);
}

