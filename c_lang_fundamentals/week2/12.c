#include <stdio.h>

int main(void) {
	int guessedNumber;
	scanf("%d", &guessedNumber);
	int childNumber = 0;
	int numberOfTries = 1;
	while(guessedNumber != childNumber) {
		scanf("%d", &childNumber);
		if (childNumber>guessedNumber) {
			printf("it is less\n");
			numberOfTries++;
		}
		if (childNumber<guessedNumber) {
                        printf("it is more\n");
                        numberOfTries++;
                }
	}
	printf("Number of tries needed:\n");
	printf("%d\n", numberOfTries);
	return 0;

}
