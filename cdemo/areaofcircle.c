#include <stdio.h>

float areaOfCircle(float radius)
{
   return 3.14 * radius * radius;
}
int main() {
  float i;
  for (i=3.5; i<=12.5; i++)
  {
   float a;
   a = areaOfCircle(i);
   printf("Area of circle with radius %f: %f\n", i, a);
  }
}


