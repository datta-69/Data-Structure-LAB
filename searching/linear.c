#include <stdio.h>

int main() {
    int A[] = {10, 25, 28, 7, 30, 35};  // Example array
    int n = 6;                          // Number of elements in A
    int Svalue, i, found = 0;

    printf("Enter the value to search: ");
    scanf("%d", &Svalue);

    if (n == 0) {
        printf("Array is empty / Searching is not possible\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (A[i] == Svalue) {
            printf("Value %d is found at index %d.\n", Svalue, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value %d is not found in the array.\n", Svalue);
    }

    return 0;
}
