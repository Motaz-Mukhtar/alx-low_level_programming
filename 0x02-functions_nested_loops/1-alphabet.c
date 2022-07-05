#include <stdio.h>
/**
 * print_alphabet - print alphabet, in lowercase
 * Return: Always 0..
 */
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
/**
 * main - Entry point of the program
 * Return: main function
 */
int main(void)
{
	print_alphabet();
	return (0);
}
