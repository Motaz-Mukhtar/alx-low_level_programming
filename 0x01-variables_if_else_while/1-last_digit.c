#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int n;
	int d;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5) 
	{
		printf("Last digit of %d is %d and is greater than 5", n, d);
	}
	if (d == 0) 
	{
		printf("Last digit of %d is %d and is 0", n, d);
	}
	if (d < 6 && !d == 0) 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, d);
	}
	return (0);
}
