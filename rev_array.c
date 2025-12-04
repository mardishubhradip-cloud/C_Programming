#include <stdio.h>

void reverseArray(int arr[], int n) {
    int ptr1 = 0;
    int ptr2 = n - 1;
    while (ptr1 < ptr2) {
        int temp = arr[ptr1];
        arr[ptr1] = arr[ptr2];
        arr[ptr2] = temp;
        ptr1++;
        ptr2--;
    }
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array:[");
    for (int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("]\n");
    
    reverseArray(arr, n);
    
    printf("Reversed array:[");
    for (int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("]\n");
    
    return 0;
}
