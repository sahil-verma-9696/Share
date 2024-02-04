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

Node *linkedListCreator()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int choice;
        printf("1. for newNode.\n0. for Exit\n");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("You are exit.\n");
            break;
        }

        int data;
        printf("Ente the data : ");
        scanf("%d", &data);

        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
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

Node *deletion(Node *head)
{

    while (1)
    {
        int size = 0;
        for (Node *i = head; i != NULL; i = i->next)
            size++;
        int choice;
        printf("1. for deletion.\n0. for exit.\n");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("You are exit\n");
            break;
        }

        if (head == NULL)
        {
            printf("Invalid Linked list\n");
            return NULL;
        }

        int position;
        printf("Enter the deletion's position (1 to %d) : ", size);
        scanf("%d", &position);

        if (position < 1 || position > size)
        {
            printf("Invalid position\n");
            break;
        }

        if (position == 1)
        {
            Node *temp = head;
            head = temp->next;
            free(temp);
            display(head);
        }
        else
        {
            Node *current = head;
            for (int i = 1; i < position - 1; i++)
                current = current->next;
            Node *temp = current->next;
            current->next = current->next->next;
            free(temp);
            display(head);
        }
    }
    return head;
}

void main()
{
    Node *head1 = linkedListCreator();

    display(deletion(head1));
}