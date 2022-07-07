#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}


int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);
