#include <stdio.h>

/**Program that counts blanks, tabs and new lines**/
int main(void) {

  int c, b, t, n;

  b = 0;
  t = 0;
  n = 0;

  printf("Please enter a number of characters: (Press CTRL + D to see the count) \n");

  while ((c = getchar()) != EOF)

    if ( c == '\n')
      ++n;
    else if (c == '\t')
      ++t;
    else if (c == ' ')
      ++b;

  printf("The amount of blanks:%d, amount of tabs:%d, amount of new lines:%d\n",b,t,n);

  return 0;
  
}
