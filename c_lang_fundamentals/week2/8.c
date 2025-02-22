#include <stdio.h>
int main(void){
    int nb, i, j = 0;
    scanf("%d", &nb);
    for(i = 0; i<nb; i++){
        for(j = 0; j<nb; j++){
            printf("*");
        }
	printf("\n");
    }
    return 0;
}
