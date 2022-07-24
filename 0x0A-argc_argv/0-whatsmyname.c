#include <stdio.h>
/**
 * main - the main fucntion in the program
 * @argc: int type
 * @argv: char type
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
