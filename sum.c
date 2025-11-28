#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter any number: ");
    scanf("%d",&n);

    if (n<0)
    {
        n = -n;
    }

    for (;n > 0;n = n / 10)
    {
        sum += n % 10;
    }
    printf("The sum of the digits is %d ",sum);
    return 0;

}
