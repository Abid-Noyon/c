#include <stdio.h>
#include <string.h>

int main()
{
   char s[100];

   printf("Enter a string to reverse: ");
   gets(s);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}
// 5.2.0_input_string_gets.c
//_string_reverse