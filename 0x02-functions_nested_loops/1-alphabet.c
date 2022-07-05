#include "main.h"
/**
 * main - Entry point of the program
 * Return: main function
*/
void print_alphabet(void)
{
	int n = 'a';

	while (a <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
