#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int * ptr, int size) {
	int max = 0;
	int i = 0;
	for (i=0; i<size; i++) {
		if (ptr[i] > max) {
			max = ptr[i];
		}
	}
	for (i=0; i<size; i++) {
		ptr[i] = max - ptr[i]; 
	}
}
