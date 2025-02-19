#include <stdio.h>

int main(void) {
	int howMany;
	scanf("%d", &howMany);
	int sumOne = 0;
	int sumTwo = 0;
	int person = 0;
	for(int i = 0; i < howMany; i++) {
		scanf("%d", &person);
		sumOne = sumOne + person;
	}
	for(int i = 0; i < howMany; i++) {                                                                                              scanf("%d", &person);
                sumTwo = sumTwo + person;
        }
	if (sumOne > sumTwo) {
		printf("Team 1 has an advantage\n");
		printf("Total weight for team 1: %d\n", sumOne);
		printf("Total weight for team 2: %d\n", sumTwo);
	} else {
		printf("Team 2 has an advantage\n");
                printf("Total weight for team 1: %d\n", sumOne);
                printf("Total weight for team 2: %d\n", sumTwo);
	}
	return 0;
}
