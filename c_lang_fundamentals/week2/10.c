#include <stdio.h>
int main(void) {
    int budgetValue, sum = 0;
    scanf("%d", &budgetValue);
    while(budgetValue != (-1)){
	 sum = sum + budgetValue;
	 scanf("%d", &budgetValue); 
    }
    printf("%d\n", sum);
    return 0;
}
