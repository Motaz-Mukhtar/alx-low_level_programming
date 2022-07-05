#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * print_alpahbet_x10 - print the alphabet, in lowercase
 * Return - Always 0.
 */

void print_alphabet_x10(void);
/*{
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
}*/
/**
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet(void);
/*{
	int n = 'a';
	
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
} */
/**
 * _islower - checks for lowercase character
 * Return: Always 0.
 */
/*int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}*/
/**
 * _isalpha - checks for alphabetic character.
 * Return: Always 0.
 */
/*int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}*/
/**
 * print_sign - prints the sign of a number
 * Return: Always 0.
 */
/*int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}*/
