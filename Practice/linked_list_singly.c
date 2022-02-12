#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
int data;
struct Node *next;
}Node;

void create_node(Node **ptr){

    Node *first_node,*prev;
    int data,size;
    (*ptr) = (Node *)malloc(sizeof(Node));
    printf("Enter the number of nodes ");
    scanf("%d",&size);
    printf("Insert the first node: ");
    scanf("%d",&data);
    (*ptr)->data = data;
    (*ptr)->next=NULL;
    prev = (*ptr);
    Node *temp;
    for(int i =0; i <size -1; i++){
        temp = (Node *)malloc(sizeof(Node));
        printf("enter node data ");
        scanf("%d",&data);
        temp->data = data;
        prev->next =temp;
        temp->next=NULL;
        prev = temp;
    }


}

void display(Node *ptr){
    while(ptr != NULL){
        printf(" data from node %d \n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){

Node *head2;

create_node(&head2);
display(head2);


}