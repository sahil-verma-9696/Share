#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *prev;
    Node *next;
};

void display(Node *head)
{
    printf("D-Linked List : ");
    Node *i = head;
    while (i != NULL)
    {
        printf("[ ");
        printf("%p <- %d -> %p",i->prev,i->data,i->next);
        i = i->next;
        printf(" ]");
        printf("<->");
    }
    printf("\n");
}

Node *linkedListCreator()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        printf("Enter\n1. for new node.\n0. for exit\n");
        int choice;
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("You are exit.\n");
            break;
        }

        printf("Enter data : ");
        int data;
        scanf("%d", &data);

        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        display(head);
    }
    return head;
}

int main()
{
    Node *Dhead = linkedListCreator();
    display(Dhead);
    return 0;
}
