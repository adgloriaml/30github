#include <stdio.h>

int main(void) {
    int i = 0;
    int cnt = 0;
    for(i = 0; i < 11; i++){
        printf("%dx8 = %d\n", cnt, cnt * 8);
        cnt = cnt + 1;
    }
    return 0;
}
