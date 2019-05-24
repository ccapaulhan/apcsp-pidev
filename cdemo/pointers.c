#include <stdio.h>

int main() {
  int a;
  int* ptrtoa;
  ptrtoa = &a;
  a = 5;
  printf("The value of a is %d\n", a);
  *ptrtoa = 6;
  printf("The value of a is %d\n", a);
  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 34.34;
  float e = 23.21;
  printf("The value of d is %f and the address is %d\n",d ,&d);
  printf("The value of e is %f and the address is %d\n", e,&e);

  float* pointerToD = &d;
  float* pointerToE = &e;
  float temp = *pointerToD;
  float temp2 = *pointerToE;
  *pointerToE = temp;
  *pointerToD = temp2;
  printf("The value of d is %f\n",d);
  printf("The value of e is %f\n",e);
 }



