#include <stdio.h>

int main(void) {
        double total, books;
        scanf("%lf %lf", &total, &books);
        int amount;
        amount = (int) (total / books);
        printf("%d\n", amount);
        return 0;
}
