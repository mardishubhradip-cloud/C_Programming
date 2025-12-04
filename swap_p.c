#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap : a = %d, b = %d\n", a, b);
}

void swapWithPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Before swap (main): x = %d, y = %d\n", x, y);

    swap(x, y);
    printf("After swap (call by value, main): x = %d, y = %d\n", x, y);

    printf("Using Pointers!\n");
    printf("Before swapWithPointers: x = %d, y = %d\n", x, y);
    swapWithPointers(&x, &y);
    printf("After swapWithPointers: x = %d, y = %d\n", x, y);

    return 0;
}
