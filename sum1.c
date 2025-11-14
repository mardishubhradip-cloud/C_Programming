#include<stdio.h>
double sum(int number)
{
    double start = 0.0;
    for(int i = 1; i<=number;i++)
    {
        start += 1.0 / i;
    }
    return start;
}
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    double result = sum(n);
    printf("%lf\n",result);
    return 0;
}