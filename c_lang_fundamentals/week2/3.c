#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    double array[n];
    double readValue = 0.0;
    int cellNumber = 0;
    int i = 0;
    double sum = 0.0;
    for(i=0;i<n;i++){
        scanf("%lf",&readValue);
        array[cellNumber] = readValue;
        cellNumber = cellNumber + 1;
	sum = sum + readValue;
    }
    double average = sum / n;
    for(i=0;i<n;i++){
	printf("%.1lf\n", average - array[i]);
    }
    return 0;
}
