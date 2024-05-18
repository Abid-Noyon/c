#include <stdio.h>
int main(void)
{
   int x;

   for (x = 0; x < 100; x++)
   {
      continue;
      printf("%d", x); //this line never printed because of continue
   }

   return 0;
}
//_continue_statement