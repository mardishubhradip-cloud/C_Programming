#include <stdio.h>

int main() {
    int n;
    long long binary = 0;
    int rem, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 2;            
        binary = binary + rem * place; 
        n = n / 2;            
        place = place * 10;     
    }

    printf("Binary: %lld\n", binary);
    return 0;
}
