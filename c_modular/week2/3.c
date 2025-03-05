#include <stdio.h>
int main(void) {
	char letter;
	int num;
	scanf("%c %d", &letter, &num);
	int total = 0;
	if(letter == 'i'){
		total = sizeof(int)*num;
        }
	else if(letter == 'd'){
                total = sizeof(double)*num;
	}
	else if(letter == 's'){
		total = sizeof(short)*num;
	}
	else if(letter == 'c'){
		total = sizeof(char)*num;
	}
	
	
	int mb = total / (1000 * 1000);
        int kb = (total % (1000 * 1000)) / 1000;
        int b = total % 1000;


	if (mb > 0) {
		printf("%d MB", mb);
		if (kb > 0 || b > 0) {
			printf(" and ");
		}
	}

	if (kb > 0) {
		printf("%d KB", kb);
		if (b >= 0) {
			printf(" and ");
		}
	}

	if (b >= 0) {
		printf("%d B", b);
	}
        printf("\n");
}
