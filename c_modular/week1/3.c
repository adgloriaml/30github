#include <stdio.h>
void meterToFeet(double length);
void gramToPounds(double length);
void farenToCels(double length);

int main(void) {
	int num;
	scanf("%d", &num);
	int i = 0;
	for (i=0; i<num; i++) {
		double length;
		char letter;
		scanf("%lf %c", &length, &letter);
		if (letter == 'm') {
			meterToFeet(length);
		}
		if (letter == 'g') {
			gramToPounds(length);
		}
		if (letter == 'c') {
			farenToCels(length);
		}
	}
	return 0;
}

void meterToFeet(double length) {
	printf("%.6lf ft\n", length*3.2808);
}

void gramToPounds(double length) {
	printf("%.6lf lbs\n", length*0.002205);
}

void farenToCels(double length) {
	printf("%.6lf f\n", 32+(1.8*length));
}
