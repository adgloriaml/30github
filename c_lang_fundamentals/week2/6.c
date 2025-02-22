#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int a[n];
	int i = 0;
	int sum = 0;
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > 10000) {
			sum = sum + 1;
		}
	}
	printf("%d\n", sum);
	return 0;
}
