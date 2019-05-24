#include <stdio.h>



float areaOfCircle(float radius)
{
   return 3.14 * radius * radius;
}
int main(int argc, int arg1, int arg2)
{
  float number1;
  float number2;
  if (argc == 0)
    printf("Put in first number\n");
   
    char input1[256], input2[256];
    fgets(input1, 256, stdin);
    printf("Put in second number\n");
    fgets(input2, 256, stdin);
    number1 = (float) input1;
    number2 = (float) input2;
  if (number1 < number2) 
    int i;
    for (i=number1; i<= number2; i++)
    {
      float r = areaOfCircle(i)
      printf("The area of circle with radius %f is %f\n", i, r);
    }
  else
    int ai;
    for (ai=number1; ai<= number2; ai++)
    {
      float r = areaOfCircle(ai)  
      printf("The area of circle with radius %f is %f\n", ai, r);
    }
}
