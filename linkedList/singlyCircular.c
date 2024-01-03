#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("Empty linked list\n");
        return;
    }

    struct Node *i = head;
    printf("\nLinked List: ");
    while (1)
    {
        printf("%d ", i->data);
        i = i->next;
        if (i == head) // Check if 'i' reaches back to the head
        {
            break;
        }
    }
    printf("END\n");
}

struct Node *nodeCreator(int data)
{
    struct Node *bornNode = (struct Node *)malloc(sizeof(struct Node));
    bornNode->data = data;
    bornNode->next = NULL;
    return bornNode;
}

struct Node *linkeListCreator()
{
    struct Node *head = NULL;
    struct Node *tail = NULL;

    int choice = 1;
    int nodeLen = 0;

    while (choice)
    {
        printf("Enter choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int data;
            printf("Enter the data : ");
            scanf("%d", &data);

            struct Node *newNode = nodeCreator(data);
            nodeLen++;

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
        }
        else
        {
            printf("\n Exit \n");
            if(!nodeLen)
                return NULL;
            break;
        }
    }
    tail->next = head;

    return head;
}

struct Node *endInsert(struct Node *head, int data)
{
    if (head == NULL)
    {
        printf("linked list is Empty");
        struct Node *newNode = nodeCreator(data);
        head = newNode;
        newNode->next = head;
    }
    else
    {
        struct Node * i = head;
        while (i->next != head)
        {
            i = i->next;
        }

        struct Node * newNode = nodeCreator(data);

        newNode->next = i->next;
        i->next = newNode;
    }
    return head;
}

struct Node *endDelete(struct Node *head)
{
    if (head == NULL)
    {
        printf("linked list is Empty");
        return NULL;
    }
    else
    {
        struct Node * i = head;
        while (i->next->next != head)
        {
            i = i->next;
        }
        struct Node * temp = i->next;
        i->next = head;
        free(temp);
    }
    return head;
}

void main()
{
    struct Node * head_1 = linkeListCreator();
    display(head_1);
    struct Node * upHead_1 = endInsert(head_1,9696);
    display(upHead_1);
}