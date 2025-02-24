#include <stdio.h>
int main(void) {
    int n, i = 0;
    scanf("%d", &n);
    char word[101]; 
    scanf("%s", word);
    for(i=0; i<n; i++) {
	    printf("%s\n", word);
    }
    return 0;
}
