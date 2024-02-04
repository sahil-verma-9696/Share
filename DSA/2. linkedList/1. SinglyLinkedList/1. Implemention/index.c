#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    for (struct node *i = head; i != NULL; i = i->next)
    {
        printf("%d->", i->data);
    }
    printf("NULL\n");
}

struct node *linkListCreator()
{
    struct node *head = NULL;
    struct node *tail = NULL;

    int choice;

    while (1)
    {
        printf("1. for new node.\n0. for exit !.\n");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("You are exit!\n");
            break;
        }

        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        int userData;
        printf("Enter data : ");
        scanf("%d", &userData);

        newNode->data = userData;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        display(head);
    }
    return head;
}

void main()
{
    struct node * llHead1 = linkListCreator();
}