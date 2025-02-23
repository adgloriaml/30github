#include <stdio.h>

int main(void) {
	int total;
	scanf("%d", &total);
	int alreadyInfected = 1;
	int days = 0;
	while(alreadyInfected < total) {
		alreadyInfected = alreadyInfected * 3;
		days++;
	}
	printf("%d\n", days + 1);
	return 0;
}
