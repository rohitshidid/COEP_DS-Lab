#include<stdio.h>
int n1,n2,n3;


void merge(int *arr1 , int n1, int *arr2, int n2, int *arr3, int n3){

    for(int i = 0;i<n1;i++){
        arr3[i] = arr1[i];
    }
    for(int j = 0;j<n2;j++){

        arr3[j+n1] = arr2[j];
    }


}

void sort(int *arr, int n){
    int temp,i,j;
    

    for(i =0; i < n; i++){
        for(j=0;j<n;j++){
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}



void display(int *arr,int n){
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    n3 = n1+n2;
    int arr1[n1],arr2[n2],arr3[n3];

    for(int i =0; i<n1;i++){
        printf("Elements for arr1: ");
        scanf("%d",&arr1[i]);
    }
    
    for (int i =0 ;i<n2;i++){
        printf("Elements for arr2: ");
        scanf("%d",&arr2[i]);
    }


    display(arr1,n1);
    display(arr2,n2);
    merge(arr1,n1,arr2,n2,arr3,n3);
    display(arr3,n3);

    sort(arr3,n3);
    display(arr3,n3);
    printf("\n");
    return 0;   
}