#include<stdio.h>
int main(void) {
    //! showArray(list, cursors=[i])
    // Sorting from smallest to largest
    char word[51];
    scanf("%s", word);
    int i, j;
    int swap;
    int length = 0;
    int repeat = 0; 
    while (word[length]!='\0')
            length++;


    for (j=0; j<length-1; j++) {
        for (i=0; i<length-1; i++) {
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
            }
        }
    }

    
    for (i=0; i<length-1; i++) {
	if (word[i] == word[i+1]) {
		repeat++;
	}
	char cur = word[i];
	while (i<length && word[i] == word[i+1]) {
		i++;
	}
    }

    printf("%d", repeat);
    printf("\n");

    return 0;
}
