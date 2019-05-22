#include <stdio.h>

int main()
{
  
  // usual for loop
  printf("This will iterate through all values 1-100 that are divisible by 3\n");
  int div = 3;
  for (int i = 0; i < 100; i++)
  {
    if (i % div == 0)
    {
      printf("%d is divisble by 3\n", i);
    }
  }
  
}
