#include<stdio.h>
void primefactors(int n)
{
    while(n % 2 == 0)
    {
        printf("%d\n",2);
        n = n / 2;
    }

    for(int i=3; i * i <= n; i = i + 2)
    {
        while(n % i == 0)
        {
            printf("%d\n",i);
            n = n / i;
        }
    }

    if(n > 2)
    {
       printf("%d\n",n);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Prime factors of %d are: \n",n);
    primefactors(n);
    return 0;
}
