#include <stdio.h>
int min(int n, int myNumbers[n]);


int main(void) {
    int n;
    scanf("%d", &n);  
    int myNumbers[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &myNumbers[i]);
    }
    
    int result = min(n, myNumbers); 
    printf("%d", result);
    return 0;
}

int min(int n, int myNumbers[n]) {
	int min = myNumbers[0];
	for (int i = 1; i < n; i++) {
		if (myNumbers[i] < min) {
			min = myNumbers[i];
		}		
	}
	return min;
}
