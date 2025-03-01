#include <stdio.h>

int sumOfDigits(int n);

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", sumOfDigits(number));    
    return 0;
}

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

