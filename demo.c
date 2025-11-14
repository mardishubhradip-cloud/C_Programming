// swapping of two numbers without using a third variable
#include <stdio.h>
int main()
 {   int a=4,b=6;
     a=a+b;
     b=a-b;
     a=a-b;
     printf("a = %d,b = %d\n",a,b);
     return 0;
 }

