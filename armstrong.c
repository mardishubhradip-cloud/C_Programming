#include<stdio.h>
#include<math.h>

int main()
{
    int n,og,rem,digs = 0;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d",&n);

    og = n;

    while(og != 0)
    {
        og /= 10;
        digs ++;
    }

    og = n;

    while(og != 0)
    {
        rem = og % 10;
        sum += pow(rem,digs);
        og /= 10;
    }

    if((int)sum == n)
    {
        printf("%d is an armstrong no.\n",n);
    }
    else
    {
        printf("%d is not an armstrong no.\n",n);
    }
    return 0;
}