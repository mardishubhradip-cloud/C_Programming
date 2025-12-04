#include <stdio.h>

void increment(int *num)
{
    *num = *num + 1;
}

void simpleTask(void)
{
    int marks = 90;
    int *p = &marks;
    printf("The value stored in the memory address %u is : %d\n", p, *p);
}

void addingWithPointers(void)
{
    int num1 = 10;
    int num2 = 5;
    int *p1 = &num1;
    int *p2 = &num2;
    printf("Sum of %d and %d is : %d\n", *p1, *p2, *p1 + *p2);
}

void add(int a)
{
    a = a + 1;
}

int main(void)
{
    int num = 5;
    printf("The value : %d\n", num);
    add(num);
    printf("The value : %d\n", num);

    printf("Using Pointer!\n");
    printf("The value : %d\n", num);
    increment(&num);
    printf("The value : %d\n", num);

    return 0;
}
