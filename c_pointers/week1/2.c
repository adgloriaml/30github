#include <stdio.h>
void myFunction(int *, double *, char *);
int main(void) {
    //! showMemory(start=65520)
    int i = 42;
    int *iAdr = &i;
    double a = 3.14;
    double * aAdr = &a;
    char c = 'p';
    char * cAdr;
    cAdr = &c;
    printf("i = %d and its address is %p.\n", i, iAdr);
    printf("a = %lf and its address is %p.\n", a, aAdr);
    printf("c = %c and its address is %p.\n", c, cAdr);
    myFunction(iAdr, aAdr, cAdr);
    return(0);
}

void myFunction(int *iptr, double * aptr, char * cptr) {
    printf("Function receied addresses %p, %p and %p.\n", iptr, aptr, cptr);
}

