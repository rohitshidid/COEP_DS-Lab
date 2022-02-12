#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next ;
    struct Node *prev;
}Node;

void create_list(Node **ptr){
    int size, data;
    Node *prev,*ne,*temp;

    printf("Enter the size of list: ");
    scanf("%d",&size);
    if(size != 0 ){
        (*ptr) = (Node *)malloc(sizeof(Node));
        printf("Enter the first node data ");
        scanf("%d", &data);
        (*ptr)->data=data;
        (*ptr)->next=NULL;
        (*ptr)->prev =NULL;
        prev = (*ptr);
        for(int i = 0 ; i<size-1;i++){
            printf("Enter the node data: ");
            scanf("%d",&data);
            temp = (Node *)malloc(sizeof(Node));
            temp->data = data;
            temp->next =NULL;
            temp->prev = prev;
            prev->next =temp ;
            prev =temp;
        }
    }

}

void display(Node *ptr){
    while (ptr != NULL){
        printf("data of node = %d \n",ptr->data);
        ptr=ptr->next;

    }
}


int main(){
    Node *list1;
    create_list(&list1);
    display(list1);
    

    return 0;
}