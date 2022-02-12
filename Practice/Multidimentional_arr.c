#include<stdio.h>
void display(int arr[][4]){
     for(int i =0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }


}


int main(){
    int arr[2][4];
    printf("Enter elements");
    for(int i=0;i<2;i++){
        for(int j =0 ;j<4;j++){
            scanf("%d",&arr[i][j]);
        }

    }

   display(arr);

    return 0;
}