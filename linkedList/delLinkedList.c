#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct LinkedList
{
    struct Node *head;
    struct Node *tail;
    int size;
};

void display(struct Node *head)
{
    struct Node *i = head;
    printf("linked list : ");
    while (i != NULL)
    {
        printf("%d ", i->data);
        i = i->next;
    }
}

struct Node *nodeCreator(int data)
{
    struct Node *bornNode = (struct Node *)malloc(sizeof(struct Node));
    bornNode->data = data;
    bornNode->next = NULL;
    return bornNode;
}

struct LinkedList *linkedListCreator()
{
    struct LinkedList *bornLinkedList = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    bornLinkedList->head = NULL;
    bornLinkedList->tail = NULL;

    int choice = 1;
    int size = 0;

    while (choice)
    {
        printf("(1 for node) (0 for exit) ");
        scanf("%d", &choice);

        int data;
        if (choice == 1)
        {
            printf("Enter the data : ");
            scanf("%d", &data);

            struct Node *newNode = nodeCreator(data);

            if (bornLinkedList->head == NULL)
            {
                bornLinkedList->head = newNode;
                bornLinkedList->tail = newNode;
            }
            else
            {
                bornLinkedList->tail->next = newNode;
                bornLinkedList->tail = bornLinkedList->tail->next;
            }
            size++;
        }
        else
        {
            break;
        }
    }

    bornLinkedList->size = size;
    return bornLinkedList;
}

struct LinkedList *insertionByPosition(struct LinkedList *linkedList)
{
    int position, data;

    printf("Enter the position(%d to %d) for insertion: ", 0, linkedList->size);
    scanf("%d", &position);

    if (position < 0 || position > linkedList->size)
    {
        printf("Invalid position\n");
        return linkedList; // Return the original list without changes
    }

    printf("Enter the data for insertion: ");
    scanf("%d", &data);

    struct Node *newNode = nodeCreator(data);

    if (position == 0)
    {
        // Insert at the beginning
        newNode->next = linkedList->head;
        linkedList->head = newNode;
    }
    else
    {
        struct Node *current = linkedList->head;
        for (int i = 0; i < position - 1; i++)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    linkedList->size++;
    return linkedList;
}

void main()
{
    struct LinkedList *linkedList_1 = linkedListCreator();

    struct LinkedList *updatedLL = insertionByPosition(linkedList_1);

    display(updatedLL->head);

    printf("\nsize = %d", updatedLL->size);
}