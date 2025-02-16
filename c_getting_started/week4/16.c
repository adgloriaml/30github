#include <stdio.h>

int main(void) {
	int number;
	double inc;
	scanf("%d %lf", &number, &inc);
	int sol = (int) (number + (number * inc / 100));
	printf("%d\n", sol);
	return 0;
}
