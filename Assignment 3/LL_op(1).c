#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node* start = NULL;


void traverse()
{
    struct node* temp;

    if (start == NULL)
        printf("\nList is empty\n");

    else {
        temp = start;
        while (temp != NULL) {
            printf("Data = %d\n",
                   temp->data);
            temp = temp->next;
        }
    }
}

void insertAtFront()
{
    int a;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted on the front position of the list: ");
    scanf("%d", &a);
    temp->data = a;


    temp->next = start;
    start = temp;
}


void insertAtEnd()
{
    int b;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));


    printf("\nEnter number to"
           " be inserted on the last position of the list: ");
    scanf("%d", &b);


    temp->next = NULL;
    temp->data = b;
    head = start;
    while (head->next != NULL) {
        head = head->next;
    }
    head->next = temp;
}

void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, c, i = 1;
    newnode = malloc(sizeof(struct node));


    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &c);

    temp = start;
    newnode->data = c;
    newnode->next = NULL;
    while (i < pos - 1) {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteFirst()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        start = start->next;
        free(temp);
    }
}

void deleteEnd()
{
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("\nList is Empty\n");
    else {
        temp = start;
        while (temp->next != 0) {
            prevnode = temp;
            temp = temp->next;
        }
        free(temp);
        prevnode->next = 0;
    }
}
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;


    if (start == NULL)
        printf("\nList is empty\n");


    else {
        printf("\nEnter index : ");


        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = start;


        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }


        position = temp->next;
        temp->next = position->next;


        free(position);
         }
}




int main()
{
    int choice;
    while (1) {

        printf("\n\t1  Show all elements of the list\n");
        printf("\t2  For insertion at"
               " front position\n");
        printf("\t3  For insertion at"
               " last position\n");
        printf("\t4  For insertion at "
               "any position\n");
        printf("\t5  For deletion of "
               "first element\n");
        printf("\t6  For deletion of "
               "last element\n");
        printf("\t7  For deletion of "
               "element at any position\n");

        printf("\t8 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
