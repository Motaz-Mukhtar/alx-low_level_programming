#include <stdio.h>

int main(void)
{
	int num = 10;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= (num - i); j++)
		{
			printf(" ");
		}
		for (int s = 1; s <= i; s++)
		{
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
