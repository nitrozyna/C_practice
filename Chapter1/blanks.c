#include <stdio.h>

/**Exercise 1-9, program that replaces a string of one or more blanks by a single blank (accounts for tabs)**/

int main(void){

  int c;
  int blank = 0;

  printf("Input some characters and press Ctrl+D.\n");

  while (( c = getchar()) != EOF)

    if (c == ' ' || c == '\t') {

      if (!blank) {
        blank = 1;
        putchar(' ');
      }

    } else {
        blank = 0;
        putchar(c);
    }

    return 0;

}
