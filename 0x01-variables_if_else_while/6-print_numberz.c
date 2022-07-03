#include <stdio.h>
/**
 * main - This is the Staring point of the program
 * description - print the number from 0 to 9 using only putchar()
 * Return: main function
 */
int main(void)

{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
