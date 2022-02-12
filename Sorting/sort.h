#include<stdio.h>
#include<stdlib.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void sort(int arr[], int n){
    int i, j, min_idx;
 
    
    for (i = 0; i < n - 1; i++) {
 
        
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        
        swap(&arr[min_idx], &arr[i]);
    }
}



void init_array(int arr[],int size){
    int d;
    if(size>1000){
        printf("Size too large, max = 100");
    }else{
        for(int i =0; i<size;i++){
            printf("\nEnter the element for %d pos in array : ",i);
            scanf("%d",&d);
            arr[i]=d;
        }
    }
}

void display(int arr[1000],int size){
    printf("\nDisplaying List \n");
     for(int i =0 ; i< size;i++){
         printf("%d ",arr[i]);
     }
     printf("\n\n");
    

}

int count(int arr[100]){
    int i = 0,len =0;
    while(arr[i]!=0){
        len++;
        i++;
    }
    return len;
}


void linear_search_full(int arr[1000],int size,int value){
    int found =0;

    printf("\n---------Linear Search Start---------\n");
    for(int i =0;i<size;i++){
          if(found>0&&arr[i]==value){
            found++;
        }
        
        if (arr[i]==value && found==0){
            printf("\nThe value %d first occurence was found at array[%d] postion of the array \n",arr[i],i);
                found ++;
        }
      
        
    }

    printf("\nIn total %d occurences were found. \n",found);
    
    printf("\n---------Linear Search End-----------\n\n\n");

}


void linear_search(int arr[1000],int size, int value){
    
    printf("\n---------Linear Search Start---------\n");
    for(int i =0;i<size;i++){
          if(arr[i]==value){
            printf("\nThe value %d first occurence was found at array[%d] postion of the array \n",arr[i],i);
            
            break;
        }
    }
     printf("\n---------Linear Search End-----------\n\n\n");

}


void binary_search(int arr[1000],int size){

sort(arr,size);


}


//omitted code
/*
void sort(int arr[1000],int size){
    int temp;

    for(int i = 0 ; i<size-1;i++){
        for(int j = 0;j<size;j++){
            if(arr[j]>arr[j+1]){
                temp= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                printf("rr");

            }
            printf("aa");
        }
        printf("ss");
    }
}
*/



 