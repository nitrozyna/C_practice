#include <stdio.h>

/** Exercise 1-10, program that replaces each tab with \t, each backspace with \b and each backslash with \\ **/

int main(void){

  printf("Input some characters and press Ctrl+D.\n");

  int c;

  while ((c = getchar()) != EOF)

    if ( c == '\n')
      printf("\\n");

    else if (c == '\t')
      printf("\\t");

    else if (c == '\\')
      printf("\\\\");

    else
      printf("%c",c);

  return 0;

}
