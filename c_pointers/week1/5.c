#include <stdio.h>
void timesTwo(int);
int main(void) {
    //! showMemory(start=65520)
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("In main: You entered %d.\n", n);
    timesTwo(n);
    printf("In main: The value of n is %d.\n", n);
    return 0;
}

void timesTwo(int num) {
    printf("In the function: the number is %d.\n", num);
    num = num * 2;
    printf("In the function: the new number is %d.\n", num);
}

