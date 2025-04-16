#include<stdio.h>
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
int main(){
    int n,position,value,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    input_array(n,arr);
    print_array(n,arr);
    printf("\nEnter position to insert : ");
    scanf(" %d",&position);
    printf("\nEnter the value to insert: ");
    scanf("%d", &value);
    position = position -1;
    if(position>n){
        arr[n] = value;
        n = n+1;
    }
    else {
        j = n;
        while (j > position) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[position] = value;
        n = n + 1;
    }
    printf("After insert new value: ");
    print_array(n, arr);
return 0;
}
