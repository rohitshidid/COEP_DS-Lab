#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;
int size;
 Node *front = NULL;
 Node  *rear = NULL;

void initi(Node **queue){
    
    printf("Enter size of queue");
    scanf("%d",&size);
    int val;
    printf("Enter the Node: ");
    scanf("%d",&val);
    (*queue) = (Node *)malloc(sizeof(Node ));
    (*queue)->data = val;
    (*queue)->next =NULL;
    front = (*queue);
    rear = (*queue);
}

void enque(Node **queue){
    int val;
    Node *temp, *prev;
    temp = (Node *)malloc(sizeof(Node));
    printf("Enter the data : ");
    scanf("%d",&val);
    temp->data = val;
    temp->next = NULL;
    front->next = temp;
    front = temp;
   

}

void deque(Node **queue){
    rear = (*queue);
    printf("%d fdf d",rear);
    if(rear == NULL){
        printf("\nQueue is Underflow\n");
        exit(0);
    }else{
        (*queue)= (*queue)->next;
    }
}

int count (Node *ptr){
    int i =0;
    for( i = 0 ; ptr != NULL; i++){
        ptr = ptr->next;
    }
    return i;
}
void display(Node *ptr){
    printf("\n");
    while(ptr!=NULL){
         printf("%d",ptr->data);
         ptr=ptr->next;
    }
}

int main(){
    Node *queu;
   
    initi(&queu);
   enque(&queu);
    display(queu);
    deque(&queu);
     deque(&queu);
     deque(&queu);
   display(queu);
    enque(&queu);
   
    display(queu);
     deque(&queu);
     deque(&queu);
   display(queu);
    return 0;
}