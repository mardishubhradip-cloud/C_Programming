#include<stdio.h>
int factorial( int n )
{ int fact = 1;
  if(n<0)
       return 0;
  else 
  {
         for(int i=1;i<=n;i++)
         {
         fact *= i;
         }
         printf("factorial of %d = %d\n",n,fact);
  }
}
int main()
{   int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial(n);
    return 0;
  
}