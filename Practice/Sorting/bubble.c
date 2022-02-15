#include<stdio.h>
int size;
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
void bubble_sort(int *arr){
    int i,j,temp;
    for(i = 0; i<size; i++){
        for(j = 0; j<size-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}


int main(){
    
    printf("Enter the Size");
    scanf("%d",&size);
    int arr[size];
    insert(arr);
    display(arr);
    bubble_sort(arr);
    display(arr);
    return 0 ;
}
