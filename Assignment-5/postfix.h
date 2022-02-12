#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
typedef struct node{
	int data;
	struct node *next;
}node;

node *head=NULL;
void push(int data){
	node *t;
	t=(node *)malloc(sizeof(node));
	if(t==NULL){
		printf("full");
		free(t);
	}
	else{
			t->data=data;
	        t->next=head;
	        head=t;
	}

	}


int pop(){
	if(head==NULL){
		return -1;
	}
	else{
	node *temp;
	int x;
	temp=head;
	head=head->next;
	x=temp->data;
	free(temp);
	return x;
		
	}

	
	
	
}	
	
void display(node *p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}



int count(node *p){
	int count1=0;
	while(p!=NULL){
		count1++;
		p=p->next;
	}
	return count1;
}



int evaluate(char *s,node *p){
	int res;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '){
			continue;
		}
		else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
			int op1=pop();
			int op2=pop();
            if(op1==-1 || op2==-1){
                //printf("not valid");
                return INT_MIN;
            }
			switch(s[i]){
				case '+':res=op2+op1;
				break;
				case '-':res=op2-op1;
				break;
				case '*':res=op1*op2;
				break;
				case '/':res=op2/op1;
				break;
			}
			push(res);
		}
		else{
			int num=0;
			while(isdigit(s[i])){
				num=num*10+(int)(s[i]-'0');
				i++;
				
			}
			i--;
			push(num);
		}
		
	}
	return head->data;


	
}