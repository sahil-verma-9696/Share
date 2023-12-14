#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *finger = head;
    while (finger != NULL)
    {
        printf("%d ", finger->data);
        finger = finger->next;
    }
}

struct Node * structNode()
{
    
}

void main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *one = (struct Node *)malloc(sizeof(struct Node));
    struct Node *two = (struct Node *)malloc(sizeof(struct Node));
    struct Node *three = (struct Node *)malloc(sizeof(struct Node));

    head->data = 8;
    one->data = 0;
    two->data = 9;
    three->data = 0;

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    display(head);
}