#include <stdio.h>
double myFunction(int, double, char);
int main(void) {
    //! showMemory(start=65520)
    int i;
    double a,b;
    char c;
    int ar[3];
    a = 1.0;
    c = 'p';
    for (i=0; i<3; i++) {
        ar[i] = i*i+1;
        b = myFunction(i, a*i, c);
    }
    return(0);
}

double myFunction(int j, double d, char l) {
    printf("Function received %d, %lf and %c.\n", j, d, l);
    j++;
    d = j*d;
    l = 'b';
    printf("In function: changed values to %d, %lf, %c.\n", j, d, l);
    return d;
}

