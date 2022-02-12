#include<stdlib.h>
#include<stdio.h>
#include <string.h>


int coeff;
int pow1;
typedef struct poly{
	int coeff;
	int pow1;
	struct poly *next;
}node;


node *head1=NULL;
node *head2=NULL;
node *final=NULL;



void extract(int *coeff,int *pow1,char *term){
	char *temp;
	char *temp2;
	temp=strchr(term,'x');
	int l=temp-term;
	temp2=(char *)malloc(sizeof(char)*(l+1));
	strncpy(temp2,term,l);
	*coeff=atoi(temp2);
	*pow1=atoi(temp+2);
}
void create(char *polynomial,int num,node **head){
	char *p;
	node *t;
	node *q;
	int i=0;
	char *term;
	int coeff;
	int pow1;
	int l;
	while(1){
		p=strchr(polynomial,'+');
		if(p==NULL){
			l=strlen(polynomial);
			term=(char*)malloc(sizeof(char)*(l+1));
			strcpy(term,polynomial);
			//printf("%s\n",term);
			extract(&coeff,&pow1,term);
		    //printf("coeff: %d\n",coeff);
	        //printf("pow1: %d\n",pow1);
	        t=(node *)malloc(sizeof(node));
			t->coeff=coeff;
			t->pow1=pow1;
			t->next=NULL;
			q->next=t;
			q=t;
	        
	        free(term);
		
			
			return;
		}
		l=p-polynomial;
		term=(char*)malloc(sizeof(char)*(l+1));
		strncpy(term,polynomial,l);
		//printf("%s\n",term);
		extract(&coeff,&pow1,term);
		//printf("coeff: %d\n",coeff);
		//printf("pow1: %d\n",pow1);
			t=(node *)malloc(sizeof(node));
			t->coeff=coeff;
			t->pow1=pow1;
			t->next=NULL;
			if(*head==NULL){
				*head=t;
				q=t;
			}
			else{
				q->next=t;
				q=t;
			}
		
		free(term);
		polynomial=p+1;
	}
}




void display(node *p){
	while(p->next!=NULL){
		printf("%dx^%d + ",p->coeff,p->pow1);
		p=p->next;
	}
	printf("%dx^%d",p->coeff,p->pow1);
	
}
void add(node *temp1,node *temp2){
  	node *t;
    node *q;
	while(temp1!=NULL && temp2!=NULL){
		t=(node *)malloc(sizeof(node));
	
		if(final==NULL){
			final=t;
			q=t;
		}
		if(temp1->pow1==temp2->pow1){
			t->coeff=temp1->coeff+temp2->coeff;
			t->pow1=temp1->pow1;
			temp1=temp1->next;
			temp2=temp2->next;
			t->next=NULL;
		}
		else if(temp1->pow1>temp2->pow1){
			t->coeff=temp1->coeff;
			t->pow1=temp1->pow1;
			temp1=temp1->next;
			t->next=NULL;
		}
		else if(temp1->pow1<temp2->pow1){
			t->coeff=temp2->coeff;
			t->pow1=temp2->pow1;
			temp2=temp2->next;
			t->next=NULL;
			
		}
		q->next=t;
		q=t;
		
	}
	if(temp2!=NULL){
		while(temp2!=NULL){
			  t=(node *)malloc(sizeof(node));
		  t->coeff=temp2->coeff;
		  t->pow1=temp2->pow1;
		  t->next=NULL;
		  q->next=t;
		  q=t;
		  temp2=temp2->next;
		  
			
			
		}
	
		
			
	
	}
		
	else if(temp1!=NULL){
		while(temp1!=NULL){
		  t=(node *)malloc(sizeof(node));
		  t->coeff=temp1->coeff;
		  t->pow1=temp1->pow1;
		  t->next=NULL;
		  temp1=temp1->next;
		  q->next=t;
		  q=t;
			
			
		}
		
		
		
	}
}