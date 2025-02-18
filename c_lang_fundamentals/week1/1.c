#include <stdio.h>

int main(void) {
	int passengers;
	double gas;
	scanf("%d %lf", &passengers, &gas);
	if (passengers == 0) {
		printf("%.2lf", gas);
	} else {
		printf("%.2lf", (gas + 1) / (passengers + 1));
	}
	return 0;
}
