#include <stdio.h>
#include <string.h>

int main(void) {
	char s[51];
	scanf("%s", s);
	int length = strlen(s);
	int half = length / 2;
	int i = 0;
	int found = 0; 

	while(!found && i<length) {
		if(s[i] == 't' || s[i] == 'T') {
			found = 1;
		} else {
			i++;
		}
	}
	
	if (found) {
		if (i <= half) {
			printf("1\n");
		} else if (i >= half)
			printf("2\n"); 
	}		
	else {
		printf("-1\n");
	}
	return 0;
}
