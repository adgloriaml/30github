#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    double products[n];
    double weight[n];
    double sum = 0.0;
    int i;
    for (i=0; i<n; i++) {
        scanf("%lf", &products[i]);
    }
    for (i=0; i<n; i++) {
        scanf("%lf", &weight[i]);
    }
    for (i=0; i<n; i++) {
        double order = products[i] * weight[i];
	sum = sum + order;
    }
    printf("%.6lf", sum);
    return 0;
}
