#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0) {
		printf("is Positive %d", n);
	}
	if(n == 0) {
		printf("is zero %d", n);
	}
	if(n < 0) {
		printf("is negative %d", n);
	}
	
	return (0);


}
