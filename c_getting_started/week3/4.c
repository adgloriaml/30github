#include <stdio.h>
int main(void) {
    int i = 0;
    int cnt = 0; 
    int number = 0;
    scanf("%d", &number);
    for(i = 0; i < 11; i++){
        printf("%dx%d = %d\n", cnt, number, cnt * number);
        cnt = cnt + 1;
    }
    return 0;
}
