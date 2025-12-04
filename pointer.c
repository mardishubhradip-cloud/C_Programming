#include <stdio.h>

int main()
{
    int n1, n2; 
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);      
    int *p = &n1;              
    int *q = &n2;              

    int sum = *p + *q;        

    printf("First number = %d\n", *p);
    printf("Second number = %d\n", *q);
    printf("Sum = %d\n", sum);

    return 0;
}
