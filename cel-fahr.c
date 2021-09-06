#include <stdio.h>

/* Prints Celsius-Fahrenheit table
   for fahr = 0, 20, ..., 300; floating point vers */

main()
{
   float fahr, celsius;
   int lower, upper, step;

   lower = 0;     /* Lower limit of table */
   upper = 100;   /* upper limit */
   step = 5;     /* step size */
   
   printf("Prints Celsius-Fahrenheit Table\n");
   printf("-----------\n");

   celsius = lower;
   while (celsius<=upper) {
      fahr = (9.0/5.0 * celsius) + 32.0;
      printf("%3.0f %6.1f\n", celsius, fahr);
      celsius = celsius + step;
   }
}
