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
    for (struct node *i = head; i != NULL; i = i->next)
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
        int choise;
        printf("1. for new node.\n0. for exit.\nChoise : ");
        scanf("%d", &choise);

        if (choise == 0)
        {
            printf("You are exit.\n");
            break;
        }

        int userData;
        printf("Enter the data : ");
        scanf("%d", &userData);

        Node *newNode = (Node *)malloc(sizeof(Node));
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

int len(Node *head)
{
    int count = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        count = count + 1;
    }
    return count;
}

int dataAt(Node *head, int size)
{
    int position;
    printf("Enter the position( 1 to %d) : ",size);
    scanf("%d", &position);

    if (position <= 0 || position > size)
    {
        printf("Invalid position.\n");
        return 0;
    }

    int count = 1;
    Node *i = head;
    while (count != position)
    {
        count++;
        i = i->next;
    }

    return i->data;
}

int positionAt()
{

}

void main()
{
    // Node *head = linkedListCreator();
    // int length = len(head);
    // int data = dataAt(head, length);

    // display(head);
    // printf("length : %d\n", length);
    // printf("data = %d\n", data);
    long a = 0;
    printf("%d",++a);
    // printf("%d",a++);
    // printf("%d",a);
}