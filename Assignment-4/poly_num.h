#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  typedef struct poly{
	int coeff;
	int power;
	struct poly* next;
	
}poly;


poly* h=NULL;
poly* head2=NULL;
poly* final=NULL;



void add(poly *temp1,poly *temp2){
	poly*t;
	poly *q;
	while(temp1!=NULL && temp2!=NULL){
		t=(poly *)malloc(sizeof(poly));
	
		if(final==NULL){
			final=t;
			q=t;
		}
		if(temp1->power==temp2->power){
			t->coeff=temp1->coeff+temp2->coeff;
			t->power=temp1->power;
			temp1=temp1->next;
			temp2=temp2->next;
			t->next=NULL;
		}
		else if(temp1->power>temp2->power){
			t->coeff=temp1->coeff;
			t->power=temp1->power;
			temp1=temp1->next;
			t->next=NULL;
		}
		else if(temp1->power<temp2->power){
			t->coeff=temp2->coeff;
			t->power=temp2->power;
			temp2=temp2->next;
			t->next=NULL;
			
		}
		q->next=t;
		q=t;
		
	}
	if(temp2!=NULL){
		while(temp2!=NULL){
			  t=(poly *)malloc(sizeof(poly));
		  t->coeff=temp2->coeff;
		  t->power=temp2->power;
		  t->next=NULL;
		  q->next=t;
		  q=t;
		  temp2=temp2->next;
		  
			
			
		}
	
		
			
	
	}
		
	else if(temp1!=NULL){
		while(temp1!=NULL){
		  t=(poly *)malloc(sizeof(poly));
		  t->coeff=temp1->coeff;
		  t->power=temp1->power;
		  t->next=NULL;
		  temp1=temp1->next;
		  q->next=t;
		  q=t;
			
			
		}
		
		
		
	}
}
	




  

void create(poly **head){
	poly*q;
	poly*t;
	int terms;
	printf("Enter number of terms of polynomial: ");
	scanf("%d",&terms);
	
	for(int i=0;i<terms;i++){
		t=(poly *)malloc(sizeof(poly));
		printf("Enter polynomial coefficient and power: ");
		scanf("%d %d",&t->coeff,&t->power);
		t->next=NULL;
		if(*head==NULL){
			*head=t;
			q=*head;
			
		}
		else{
			q->next=t;
			q=t;
		}
		
	}
}
void display(poly *p){
	while(p->next!=NULL){
		printf("%dx^%d + ",p->coeff,p->power);
		p=p->next;
	}
	if(p){
		printf("%dx^%d",p->coeff,p->power);
	}
	
}
			
	