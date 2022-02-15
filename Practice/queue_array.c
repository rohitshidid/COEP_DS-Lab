#include<stdio.h>
#include<stdlib.h>
    int size, rear = -1, front = -1;
 


    void display( int *que){
        printf("\n");
        for(int i = rear; i<=front;i++){
            
        printf("\t %d",que[i]);
        }
    }

    void enq(int *arr){
        int val;
        printf("\n Enter the value: ");
        scanf("%d",&val);
        if(front == -1){
            front = 0;
            arr[front]=val;
            rear = front;
        }else{
            front++;
            if(front == size){
                printf("Stack is full\n");
                exit(0);
            }else{
            arr[front]= val;
            }
        }

    }

    void dque(int *arr){
        if(rear == front){
            printf("Stack Underflow"); 
            exit(0);
        }
        else{
            rear++;
        }
    }

int main(){



    printf("Enter the size of queue");
    scanf("%d",&size);
    int que[size],num;
 
   
   
    enq(que);
    display(que);
    enq(que);
    display(que);
    enq(que);
    display(que);
    dque(que);
    display(que);

    
    
    printf("\n");
    return 0;
}