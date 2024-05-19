#include <stdio.h>

int main(void)
{
  int i;
  char j;

  i = 0;

  for (j = 1; j < 101; j++)
    i = j + i;

  printf("Total is: %d", i);

  return 0;
}

// char limit check
/* #include <stdio.h>
#include <limits.h>

int main()
{
  printf("Minimum value of char: %d\n", CHAR_MIN);
  printf("Maximum value of char: %d\n", CHAR_MAX);
  return 0;
}
 */

//   1. Signed Char : Range : -128 to 127 Representation : Uses two's complement to represent negative numbers.

//   2. Unsigned Char :   Range : 0 to 255 Representation : All bits are used to represent the value.

//_char_as_short_int