#include <stdio.h>

int main() {
    int A[] = {5, 10, 15, 20, 25, 30, 35};  // Sorted input array
    int n = 7;                              // Number of elements
    int Svalue;
    int BEG, END, MID;
    int found = 0;

    printf("Enter the value to search: ");
    scanf("%d", &Svalue);

    if (n == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    BEG = 0;
    END = n - 1;
    MID = (BEG + END) / 2;

    while (BEG <= END) {
        if (A[MID] == Svalue) {
            printf("Value %d is found at index %d.\n", Svalue, MID);
            found = 1;
            break;
        }
        else if (A[MID] > Svalue) {
            END = MID - 1;
        }
        else {
            BEG = MID + 1;
        }

        MID = (BEG + END) / 2;
    }

    if (!found) {
        printf("Value %d is not found in the array.\n", Svalue);
    }

    return 0;
}
