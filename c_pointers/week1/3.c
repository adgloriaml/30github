#include <stdio.h>
int main(void) {
    //! showMemory(start=65520)
    int i = 42;
    int * iAdr; 
    double a = 3.14;
    double * aAdr = &a;
    char c = 'p';
    char * cAdr = &c;
    iAdr = &i; // alternatively int * iAdr = &i;
    printf("Address of i is %p and i = %d.\n", iAdr, *iAdr); // iAdr = address, *iAdr = variable's value
    printf("Address of a is %p and a = %lf.\n", aAdr, *aAdr);
    printf("Address of c is %p and c = %c.\n", cAdr, *cAdr);
    *iAdr = 50;
    printf("Address of i is %p and i = %d.\n", iAdr, i);
    *aAdr = 2.1718;
    printf("Address of a is %p and a = %lf.\n", aAdr, a);
    *cAdr = 'B';
    printf("Address of c is %p and c = %c.\n", cAdr, c);

    return(0);
}

