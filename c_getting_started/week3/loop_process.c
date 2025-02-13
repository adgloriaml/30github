#include <stdio.h>
int main() {
    int howMany = 0;
    int sum = 0;
    int output = 0;
    int enginePower, resistance, weight, height = 0; 
    scanf("%d",&howMany);
    for(int i = 0; i < howMany; i++){
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        output = (enginePower + resistance) * (weight - height); 
        sum = sum + output; 
    }
    printf("%d", sum);
    return 0;
}
