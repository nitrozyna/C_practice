#include <stdio.h>

/** Exercise 1-6, verifying if the expression getchar() != EOF is 0 or 1 **/

int main(void) {
  printf("Enter a character:\n");
  printf( "qetchar() != EOF is %d \n" , getchar() != EOF);
}
