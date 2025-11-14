#include<stdio.h>
int main()
{
    int n,rem,og;
    int rev=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    og = n;
    
    while(n != 0)
    {
        rem = n % 10;
        rev = rev*10 + rem;
        n /= 10;
    }
    if(og==rev)
    {
        printf("%d is palindrome.\n",og);
    }
    else
    {
        printf("%d is not palindrome.\n",og);
    }
    return 0;
}