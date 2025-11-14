#include <stdio.h> 
#include<stdlib.h>

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    return abs(a * b) / gcd(a, b);
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));
    return 0;
}
