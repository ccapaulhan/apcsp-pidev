#include <stdio.h>


int* arrayAdd(int *arr, int s, int n)
{

 int a;
 for (a=0;a<s;a++)
 {
   arr[a] = arr[a] + n;
 }
 return arr;

}

int main(void) {
 int list[100];
 int i;
 for (i=0;i<100;i++)
 {
   list[i]= i * i;
 }
 int* pointer = arrayAdd((list), 100, 5);
 int c;
 for (c=0;c<100;c++)
 {
   printf("%d\n", pointer[c]);
 }
 printf("The arrays index is squared and 5 is added 1-100\n");
 return 0;
}


