#include <stdio.h>

/* Print Fahreinheit-Celsius table for fahr = 0, 20, ..., 300 and
* Print Celsius-Fahreinheit table for fahr = 0, 20, ..., 300 */

main() {

  float fahr,celsius;
  int lower, upper, step;

  lower = 0; // lower limit of temperature
  upper = 300; // upper limit of temperature
  step = 20; // step size

  // Creating two scopes for two solutions since I couldn't be bothered to create a new program.

  {
    fahr = lower;

    printf("\nA table showing the Celsius to Fahreinheit conversion\n\n");

    printf(" F\t C\n");
    while (fahr <= upper) {
      celsius = (5.0/9.0) * (fahr-32.0);
      printf("%3.0f \t %6.1f\n",fahr,celsius);
      fahr = fahr + step;
    }

  }

  // This is a rather hacky solution from Celsius to Fahreinheit. You could also set Celsius as the lower limit and then derive fehr by adding 32 and multiplying by Celsius.

  printf("\nA table showing the Fahreinheit to Celsius conversion\n\n");

  printf(" C\t F\n");

  {
    fahr = lower;
    while (fahr <= upper) {
      celsius = (5.0/9.0) * (fahr-32.0);
      printf("%6.1f \t %3.0f \n",celsius,fahr);
      fahr = fahr + step;
    }
  
  }
}
