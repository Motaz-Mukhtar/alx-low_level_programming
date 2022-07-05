#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times, in lowercase
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n, i = 1;

	while (i <= 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			putchar(n);
			n++;
		}
		putchar('\n');
		i++;
	}
}
/**
 * main - Entry point of the program
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
