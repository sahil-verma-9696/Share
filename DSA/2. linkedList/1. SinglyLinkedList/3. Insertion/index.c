#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

void display(Node *head)
{
    printf("Linked list : ");
    for (Node *i = head; i != NULL; i = i->next)
    {
        printf("%d->", i->data);
    }
    printf("NULL\n");
}

Node *linkListCreator()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int choice;
        printf("1. for new node.\n0. for exit !.\n");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("You are exit!\n");
            break;
        }

        Node *newNode = (Node *)malloc(sizeof(Node));
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

Node *insBeg(Node *head)
{
    while (1)
    {
        int choice;
        printf("1. for new node.\n0. for exit !.\n");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("You are exit!\n");
            break;
        }

        printf("Data for new node : ");
        int userData;
        scanf("%d", &userData);

        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = userData;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    return head;
}

Node *insertion(Node *head)
{
    while (1)
    {
        int choice;
        printf("Enter 1 for insertion.\n0. for exit.\n");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("You are exit.\n");
            break;
        }

        int size;
        for (Node *i = head; i != head; i = i->next)
            size++;

        printf("Enter the position(1 to %d) : ", size);
        int position;
        scanf("%d", &position);

        if (position < 1)
        {
            printf("Invalid position\n");
            break;
        }
        printf("Enter the data : ");
        int data;
        scanf("%d", &data);

        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;

        if (position == 1)
        {
            newNode->next = head;
            head = newNode;
            display(head);
        }
        else
        {
            Node *current = head;
            for (int i = 1; i < position - 1; i++)
                current = current->next;

            newNode->next = current->next;
            current->next = newNode;
            display(head);
        }
    }
    return head;
}

void main()
{
    Node *llHead1 = linkListCreator();
    printf("current : ");
    display(llHead1);

    Node *updatedHead = insBeg(llHead1);
    printf("updated : ");
    display(updatedHead);
}