#include <stdio.h>

int main(void) {
	int l, cnt;
	scanf("%d %d", &l, &cnt);
	if (l <= 5 && cnt >= 8) {
		printf("Tinuviel");
	}
	else if (l >= 10 && cnt >= 10) {
		printf("Calaelen");
	}
	else if (l <= 8 && cnt <= 5) {
		printf("Falarion");
	}
	else if (l >= 12 && cnt <= 7) {
		printf("Dorthonion"); 
	} else {
		printf("Uncertain"); 
	}
	return 0;
}
