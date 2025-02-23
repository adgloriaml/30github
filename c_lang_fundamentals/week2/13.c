#include <stdio.h>

int main(void) {
        int min,max;
        scanf("%d %d", &min, &max);
        int temp;
        while(1) {
                scanf("%d", &temp);
                if(temp == -999) {
                        break;
                }
                if(min<=temp && temp<=max) {
                        printf("Nothing to report\n");
                } else {
                        printf("Alert!\n");
                        break;
                }
        }
        return 0;
}
