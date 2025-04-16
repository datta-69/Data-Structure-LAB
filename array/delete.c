#include <stdio.h>
void input_array(int n, int arr[]){
    printf("Enter %d elements: ",n);
    for (int i = 0; i <n ; i++)
    {
        scanf("%d",&arr[i]);
    }    
}
void print_array(int n, int arr[]){
    printf("The array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }  
}
int main() {
    int Arr[100], n, position, j;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    input_array(n,Arr);
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position >= n) {
        printf("Deletion is not possible.\n");
    } 
    else {
        j = position;
        while (j < n) {
            Arr[j - 1] = Arr[j];
            j++;
        }
        n = n - 1;
        printf("Array after deletion:\n");
        print_array(n,Arr);
        printf("\n");
    }
return 0;
}
