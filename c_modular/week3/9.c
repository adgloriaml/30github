#include <stdio.h>
void reverseArray(int *);
int main() {
     int myNumbers[6];
     int i = 0;
     for(i = 0; i<6; i++) {
	     scanf("%d", &myNumbers[i]);
     }
     int *ptr = myNumbers;
     reverseArray(myNumbers);
     for (i = 0; i < 6; i++) {
	     printf("%d ", *(ptr + i));
     }
     return 0;
}

void reverseArray(int *ptr) {
	int tmp = *(ptr + 0);
        *(ptr + 0) = *(ptr + 5) ;
        *(ptr + 5) = tmp;

	tmp = *(ptr + 1);
        *(ptr + 1) = *(ptr + 4) ;
        *(ptr + 4) = tmp;

	tmp = *(ptr + 2);
        *(ptr + 2) = *(ptr + 3) ;
        *(ptr + 3) = tmp;	
}

