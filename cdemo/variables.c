#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  
  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  a = a + b;
  c = a - b;
  printf("The new values of a and c are %d and %d\n", a, c);
}
