#include <stdio.h>

int main(void) 
{
	int c = 'a';
	int C = 'A';
	while (c <= 'z') 
	{
		printf("%c", c);
		c++;
	}
	while(C <= 'Z') 
	{
		printf("%c", C);
		C++;
	}
	printf("\n");
	return (0);
}
