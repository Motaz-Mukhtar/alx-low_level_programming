#include <stdio.h>

int main(void)
{
	/*
	 *
	 *This is betty styel
	 *
	 *
	 *
	 *
	 * */
	char c = 'a';
	while(c <= 'z') 
	{
		if (c != 'q' && c != 'e')
		{
			printf("%c", c);
		}
		c++;
	}
	printf("\n");
	return (0);
}
