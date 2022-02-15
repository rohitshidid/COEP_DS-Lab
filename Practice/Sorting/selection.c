#include <stdio.h>
int size;
  
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void selectionSort(int arr[])
{
    int i, j, min_idx;
  
    // One by one move boundary of unsorted subarray
    for (i = 0; i < size-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < size; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}


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
  
// Driver program to test above functions
int main()
{
   printf("Enter the Size");
    scanf("%d",&size);
    int arr[size];
    insert(arr);
    selectionSort(arr);
   display(arr);
    return 0;
}