#include <stdio.h>

int main(void)
{
	int i, num = 9, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d, ", j * i);
		}
		printf("\n");
	}
	return (0);
}
