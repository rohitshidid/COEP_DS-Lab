#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;
int size;
void create_list(Node **ptr){
   Node *temp,*prev;
   int data;
    (*ptr) = malloc(sizeof(Node));
    printf("Enter the size: ");
    scanf("%d",&size);
    if (size != 0){
        printf("Enter the First Node: ");
        scanf("%d",&data);
        (*ptr)->data = data;
        (*ptr)->next =NULL;
        prev =(*ptr);
        for (int i =0; i<size-1 ;i++){
            temp = malloc(sizeof(Node));
            printf("Enter The data for node: ");
            scanf("%d",&data);
            temp->data = data;
            temp->next =NULL;
            prev->next=temp;
            prev =temp;
        }
    }
}

void display (Node *ptr){
    while (ptr != NULL){
        printf("Node value = %d \n",ptr->data);
        ptr=ptr->next;
    }
}
/*
void remove_at_loc(Node **ptr,int location){
    Node **temp, **temp2;
    if (location==1){
        (*temp) =(*ptr);
        (*ptr)= (*ptr)->next;

    }else {
        (*temp) = (*ptr);
        for(int i =0;i<location-1;i++){
            (*temp)=(*temp)->next;
        }
        (*temp2) = malloc(sizeof(Node));
        (*temp2) = (*temp)->next;
        (*temp)->next = (*temp)->next;

        
    }
}
*/


void insert_node(Node **ptr){
    Node *temp;
    int data,loc;
    printf("Enter the element: ");
    scanf("%d",&data);
    printf("Enter Location: ");
    scanf("%d",&loc);

    temp = malloc(sizeof(Node));
    temp->data=data;
    temp->next=NULL;
    if(loc == 1){
        temp->next =(*ptr);
        (*ptr)= temp;
    }

}


void sort(Node **ptr){
    for(int i = 0 ; i <size; i++){
        for(j = 0 ; j < size ; j++){
            if (())
        }

    }


}