#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int sum = 0;
	for(int i=0; i<num; i++) {
		int number;
		char value;
		scanf("%d %c", &number, &value);
		if (value=='c') {
			sum = sum + (number * 1);
		}
		else if (value=='i') {
			sum = sum + (number * 4);
		}
		else if (value=='d') {
			sum = sum + (number * 8);
		} else {
			printf("Invalid tracking code type\n");
			return 0;
		}
	}
	
	printf("%d bytes\n", sum);
	return 0;
}
