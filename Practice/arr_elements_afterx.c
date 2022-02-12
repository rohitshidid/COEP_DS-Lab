#include<stdio.h>
int n;
void display(int *arr,int x){
    for(int i = x-1; i<n;i++){
        printf("%d",arr[i]);
    }

}
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n ");
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to print from :");
    int x ;
    scanf("%d",&x);
    display(arr,x);
}