#include<stdio.h>
int main()
{   int i,m,n,gcd;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=m && i<=n;i++)
    { 
        if(m % i == 0 && n % i == 0)
        {
        gcd = i;
        }
    }
    printf("GCD of %d and %d is %d",m,n,gcd);
return 0;
}
