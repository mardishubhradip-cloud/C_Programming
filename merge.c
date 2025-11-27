#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int A[n1];
    printf("Enter %d sorted elements: ", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &A[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int B[n2];
    printf("Enter %d sorted elements: ", n2);
    for (int i = 0; i < n2; i++)
    
        scanf("%d", &B[i]);

    int C[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

 while (i < n1) C[k++] = A[i++];
    while (j < n2) C[k++] = B[j++];

    printf("Merged Sorted Array:\n");
    for (int x = 0; x < n1 + n2; x++)
        printf("%d ", C[x]);

return 0;
}