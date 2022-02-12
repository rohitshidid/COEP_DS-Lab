#include"sort.h"

int main(){
    
int array[1000];
 int size, value;
printf("\nEnter the size of the array : ");
scanf("%d",&size);
 

init_array(array,size);
display(array,size);

printf("\nEnter the element to be found in the array : ");
scanf("%d",&value);
/*
linear_search_full(array,size,value);
*/
//linear_search(array,size,value);

binary_search(array,size);
display(array,size);

}