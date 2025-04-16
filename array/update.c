#include <stdio.h>

int main() {
    int A[100], n, i, v, j;

    // Input number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (j = 0; j < n; j++) {
        scanf("%d", &A[j]);
    }

    // Input position and value to update
    printf("Enter position to update (0 to %d): ", n - 1); // 0-based index
    scanf("%d", &i);
    printf("Enter new value: ");
    scanf("%d", &v);

    // Update logic
    if (i >= n) {
        printf("Update is not possible.\n");
    } else {
        A[i] = v;

        // Output updated array
        printf("Array after update:\n");
        for (j = 0; j < n; j++) {
            printf("%d ", A[j]);
        }
        printf("\n");
    }

    return 0;
}
