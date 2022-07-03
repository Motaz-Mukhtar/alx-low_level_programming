#include <stdio.h>

int main(void) 
{
	char c = 'z';
	while (c >= 'a') 
	{
		printf("%c", c);
		c--;
	}
	printf("\n");
	return (0);
}
