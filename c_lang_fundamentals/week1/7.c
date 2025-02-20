#include <stdio.h>

int main(void) {
	int howMany;
	scanf("%d", &howMany);
	int i = 0;
	int sumOne = 0;
	int sumTwo = 0;
	int num = 0;
	for(i=0;i<(howMany*2);i++) {
		scanf("%d", &num);
		if (i % 2 == 0) {
			sumOne = sumOne + num;
		} else {
			sumTwo = sumTwo + num;
		}
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
