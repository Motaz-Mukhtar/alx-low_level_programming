#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alpahbet_x10 - print the alphabet, in lowercase
 * Return - Always 0.
 */
void print_alphabet_x10(void)
{
	int n, i = 1;

	while (i <= 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
/**
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0.
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
