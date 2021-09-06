#include <stdio.h>

/* Prints Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating point vers */

main()
{
   float fahr, celsius;
   int lower, upper, step;

   lower = 0;     /* Lower limit of table */
   upper = 400;   /* upper limit */
   step = 20;     /* step size */
   
   printf("Prints Fahrenheit-Celsius Table\n");
   printf("-----------\n");

   fahr = lower;
   while (fahr<=upper) {
      celsius = (5.0/9.0) * (fahr - 32.0);
      printf("%3.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
   }
}
