#include <stdio.h>

int main() {
    int array[100], size, i, position, value;

    printf("Enter number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position (1 to %d) to insert : ", size + 1);
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for (i = size; i >= position; i--) {
        array[i] = array[i - 1];
    }

    array[position - 1] = value;
    size++;

    printf("Array after insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}