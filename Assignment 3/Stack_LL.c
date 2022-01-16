// C program for linked list implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct StackNode {
    int data;
    struct StackNode* next;
};

struct StackNode* newNode(int data)
{
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
    }

int isEmpty(struct StackNode* top)
{
    return !top;
}

void push(struct StackNode** top, int data)
{
    struct StackNode* stackNode = newNode(data);
    stackNode->next = *top;
    *top = stackNode;
    printf("Element pushed to stack is:%d\n", data);
}

int pop(struct StackNode** top)
{
    if (isEmpty(*top))
        return INT_MIN;
    struct StackNode* temp = *top;
    *top = (*top)->next;
    int pop_data = temp->data;
    free(temp);

    return pop_data;
}


int main()
{
    struct StackNode* top = NULL;

    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
    push(&top, 4);
    push(&top, 5);
    printf("Element popped from stack is:%d\n", pop(&top));

    printf("Top element is %d\n", top->data);

    return 0;
}
