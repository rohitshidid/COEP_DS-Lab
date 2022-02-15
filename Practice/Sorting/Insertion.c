#include<stdio.h>
int size;
void insertionSort(int arr[])
{
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array of size n
void insert(int *arr){
    for(int i = 0 ; i<size; i++){
        printf("enter the values: ");
        int val;
        scanf("%d",&arr[i]);
    }
}
void display(int *arr){
    printf("\n");
    for(int i =0; i <size; i++){
        printf("%d \t",arr[i]);
    }
}
 
/* Driver program to test insertion sort */
int main()
{
     printf("Enter the Size");
    scanf("%d",&size);
    int arr[size];
    insert(arr);
    insertionSort(arr);
    display(arr);
 
    return 0;
}