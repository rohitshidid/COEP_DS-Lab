
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    unsigned size;
    int* array;
};

struct Stack* createStack(unsigned size)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->array = (int*)malloc(stack->size * sizeof(int));
    return stack;
}

int isFull(struct Stack* stack)
{
    return stack->top == stack->size - 1;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

void push(struct Stack* stack, int data)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = data;
    printf("Element pushed to stack is: %d\n", data);
}

int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

int peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

int main()
{
    struct Stack* stack = createStack(20);

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);

    printf("%d popped from stack\n", pop(stack));
    printf("Top element is %d\n", stack->top);

    return 0;
}
