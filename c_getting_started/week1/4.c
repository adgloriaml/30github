#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ... 300 */ 

#define LOWER 0 /* lower limit of temperature table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */


int main()
{
	/* variables declaration */
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32)); 
}
