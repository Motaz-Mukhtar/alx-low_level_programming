#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two int
 * @a: type of int
 * @b: type of int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	
}
int main(void)
{
	int a;
	int b;

	a = 98;
	b  = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
