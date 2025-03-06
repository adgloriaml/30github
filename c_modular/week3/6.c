#include <stdio.h>

void elixir(int *); 

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	elixir(&age); 

	printf("Your new age will be %d!\n", age);
	return 0;
}


void elixir(int *ageAddr) {
	if (*ageAddr >= 21) {
		*ageAddr = *ageAddr - 10; 
	}
	else if (*ageAddr <= 20) {
		*ageAddr = *ageAddr * 2;
	}
}
