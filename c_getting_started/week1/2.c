#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ... 300 */ 

int main()
{
	/* variables declaration */
	float fahr, celcius;
	int lower, upper, step;

	/* assignment statement
	   set the variables to their initial values */
	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	printf("Temperature conversion\n");

	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius); 
		fahr = fahr + step;
	}
}
