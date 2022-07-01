#include <stdlib.h>
#include <time.h>

int main(void) {
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0) {
		printf("is Positive %i", n);
	}
	if(n == 0) {
		printf("is zero %i", n);
	}
	if(n < 0) {
		printf("is negative %i", n);
	}
	
	return (0);


}
