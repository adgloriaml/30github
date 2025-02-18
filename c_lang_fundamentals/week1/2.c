#include <stdio.h>

int main(void) {
        int a, b;
        scanf("%d %d", &a, &b);
        int c = a + b;
        if (c >= 10) {
                printf("Special tax\n");
                printf("36");
        } else {
                printf("Regular tax\n");
                printf("%d", (a+b) * 2);
        }
        return 0;
}
