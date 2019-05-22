#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  int c = 2;
 // if statement to test is a is equal to 0
  printf("a is %d, b is %d, and c is %d\n", a, b, c);
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (a == b)
  {
    printf("a is equal to b\n");
  }
  else 
  {
    printf("a is not equal to b\n");
  }
  if (c > b) 
  {
    printf("c is greater than b\n");
  }
  if (a >= 0) 
  {
    printf("a is greater than or equal to 0\n");
  }
  if (a == 0 && c > b) 
  {
    printf("a is 0 and c is greater than b\n");
  }
  if (!(a == 0))    
  {
    printf("a is not equal to 0\n");
  }
  if (a != c) 
  {
    printf("a is not equal to c\n");
  }
  if (!(a == c) || b == a )
  {
    printf("a is not c or b is a\n");
  }
}
