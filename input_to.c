#include <stdio.h>

int main() {
	int c; 
	c = getchar(); 
	
	if (c != EOF) {
		printf("is true\n");
	}
	else {
		printf("is false\n");
	}

	printf("%d\n", EOF);	
}
