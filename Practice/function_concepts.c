#include<stdio.h>
void swap(int *num){
    *num = 5;
}
void arr_swap(int *arr){
    arr[2] = 3;

}

int main(){
    int a = 0;
    int arr[3];
    swap(&a);
    printf("%d",a);

    arr[2] = 1;
    printf("%d",arr[2]);
    arr_swap(arr);
    printf("%d",arr[2]);
    


    printf("\n");

    return 0;
}