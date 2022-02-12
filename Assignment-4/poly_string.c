#include<stdlib.h>
#include<stdio.h>
#include"poly.h"
#include <string.h>

int main(){
	char polynomial[256];
	int num;
	printf("Enter number of terms of first poly");
	scanf("%d",&num);
	printf("\n");
	printf("enter polynomial(ax^2+bx^1+cx^0):");
	scanf("%s",polynomial);
	//printf("%s",polynomial);
	create(polynomial,num,&head1);
	printf("\n");
	printf("\n");
	printf("Enter number of terms of second poly");
	scanf("%d",&num);
	printf("\n");
	printf("enter polynomial(ax^2+bx^1+cx^0):");
	scanf("%s",polynomial);
	//printf("%s",polynomial);
	create(polynomial,num,&head2);
	printf("\n");
	printf("first Polynomial: ");
	display(head1);
	printf("\n");
	printf("Second Polynomial: ");
	display(head2);
	add(head1,head2);
	printf("\n");
	printf("Added polynomials: ");
	printf("\n");
	display(final);
    printf("\n");

	
		
	
		return 0;
}