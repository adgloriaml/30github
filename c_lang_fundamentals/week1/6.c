#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int calc = (num * 5) + 10;
	if (calc > 53) {
		printf("53");
	} else {
		printf("%d", calc); 
	}
	return 0;
}
