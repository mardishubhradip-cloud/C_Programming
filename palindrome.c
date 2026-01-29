#include <stdio.h>
int isPalindrome(int n) {
    int original = n, reversed = 0, digit;
    while(n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, isPalindrome(n) ? "PALINDROME" : "not palindrome");
    return 0;
}