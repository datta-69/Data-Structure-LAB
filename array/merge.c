#include <stdio.h>

int main() {
    int B[] = {10, 25, 28, 7, 30, 35};  // First array
    int C[] = {40, 12, 18, 45};         // Second array
    int m = 6;                          // Number of elements in B
    int p = 4;                          // Number of elements in C
    int A[100];                         // Output array (large enough)
    int i, j = 0, n;

    // Copy elements of B into A
    for (j = 0; j < m; j++) {
        A[j] = B[j];
    }

    // Copy elements of C into A starting from index j
    for (i = 0; i < p; i++) {
        A[j] = C[i];
        j++;
    }

    n = m + p;  // Total number of elements in A

    // Print merged array A
    printf("Merged Array A[]: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
