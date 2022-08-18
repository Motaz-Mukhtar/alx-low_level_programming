#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

#endif
