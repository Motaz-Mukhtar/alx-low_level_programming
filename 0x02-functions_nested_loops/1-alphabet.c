#include "main.h"
/**
 * main - Entry point of the program
 * Return: main function
*/
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
