#include <stdio.h>

int main(void) {
        int age, weight;
        scanf("%d %d", &age, &weight);
        if (age == 60 && weight > 0) {
                printf("%d", 0);
        }
        if (age < 10 && weight > 0) {
                printf("%d", 5);
        }
        if (weight < 20 && age > 0){
                printf("%d", 30);
        }
        if (age != 60 && age > 10 && weight > 20) {
                printf("%d", 40);
        }
        return 0;
}
