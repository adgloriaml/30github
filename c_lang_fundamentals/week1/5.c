#include <stdio.h>
#include <math.h>

int main(void) {
	double weight;
	scanf("%lf", &weight);
	int calc = (int)ceil(weight/120);
	printf("%d", calc * 45);
	return 0;
}
