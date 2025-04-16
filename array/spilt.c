#include <stdio.h>

int main() {
    int A[100], B[100], C[100];
    int n, i, j = -1, k = -1;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Handle empty array
    if (n == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Reset index to start processing
    i = 0;
    while (i < n) {
        if (A[i] % 2 == 0) {
            k++;
            C[k] = A[i];  // Even numbers
        } else {
            j++;
            B[j] = A[i];  // Odd numbers
        }
        i++;
    }

    // Output even numbers
    printf("\nEven numbers:\n");
    for (i = 0; i <= k; i++) {
        printf("%d ", C[i]);
    }

    // Output odd numbers
    printf("\nOdd numbers:\n");
    for (i = 0; i <= j; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");
    return 0;
}
