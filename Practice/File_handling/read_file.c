#include<stdio.h>
#include<stdlib.h>
 void display(int *arr, int i){
     for(int j = 0; j<i;j++){
         printf("%d \t",arr[j]);
     }
 }

 
 int main (){
     int d, i=0, j, arr[100000];
        FILE *fp = fopen("numbers.txt","r");
        
  while (fscanf(fp,"%d",&arr[i])!=-1){
      i++;
  }
  
  display(arr,i);
  fclose(fp);
   return 0;
 }