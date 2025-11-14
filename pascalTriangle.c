#include<stdio.h>
int pascalTriangle(int n)
{   
    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int s = 0; s < n - i - 1; s++)
            printf("  ");
        for (int k = 0; k <= i; k++) {
            printf("%4d", val);
            val = val * (i - k) / (k + 1); 
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    pascalTriangle(rows);
    return 0;
}