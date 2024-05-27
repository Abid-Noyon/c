#include <stdio.h>

int main(void)
{
  unsigned u;
  long l;
  short s;

  printf("Enter an unsigned: ");
  scanf("%u", &u);
  printf("Enter a long: ");
  scanf("%ld", &l);
  printf("Enter a short: ");
  scanf("%hd", &s);

  printf("%u %ld %hd\n", u, l, s);

  return 0;
}
//_type_modiferes
// When outputting integers modified by short, long, or unsigned
// using printi(), you cannot simply use the %d specifier.The reason is that printf() needs to know precisely what type of data it is receiving.To use printf() to output a short, use %hd.To output a long, use %ld. When outputting an unsigned value, use %u.To ouutput an unsigned long int, use %lu. Also, to output a long double use %Lf.Flie scanf() function operates in a fashion similar to printf(). When reading a short int using scanf(), use %hd. When reading a long int, use %ld. To read an unsigned long int, use %lu. To read a double, USe %lf. To read a long double, use %Lf.

// Data Type	printf() Specifier	scanf() Specifier
// short int	%hd	%hd
// long int	%ld	%ld
// unsigned int	%u	%u
// unsigned long int	%lu	%lu
// long double	%Lf	%Lf
// double (note: standard double in printf uses %f or %lf)	%lf	%lf