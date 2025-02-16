#include <stdio.h>

int main(void) {
	int howMany;
	scanf("%d", &howMany); 
	int sum = 0;
	int grade;
	double marks;
	for(int i = 0; i < howMany; i++) {
		scanf("%d", &grade);
		sum = sum + grade;
	}
	marks = (double) sum;
	printf("%.2lf\n", marks / howMany);
	return 0;
}
