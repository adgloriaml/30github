#include <stdio.h>
int main(void) {
	int n, i;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		char name[101], surname[101];
		scanf("%s %s", name, surname); 
		printf("%s %s\n", surname, name);
	}
	return 0;
}

