#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[t])
    //! showArray(length, cursors=[i])
    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[11];
    int maxLength = 0;
    int length[10];//length[5] number of 5-letter-long words in the text
    for(i=0;i<10;i++){
        length[i]=0;
    }
    scanf("%d", &nbWords);
    for(t=0;t<nbWords;t++){
        scanf("%s", word);
        l = 0;
        while(word[l]!='\0'){
            l++;
        }
        length[l] = length[l] + 1;
	if (l > maxLength) {
            maxLength = l;
        }
    }


    printf("%d\n", maxLength);    
    return 0;
}
