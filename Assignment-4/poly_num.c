#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include"poly_num.h"	
	
	
	
int main(){
    create(&h);
    printf("First polynomial:  ");
    display(h);
    printf("\n");
    create(&head2);
    printf("Second polynomial:  ");
    display(head2);
    printf("\n");
    add(h,head2);
    printf("Polynomials After Addition: ");
    display(final);
    
    printf("\n");
    
    
}