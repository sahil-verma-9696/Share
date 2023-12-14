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
        }
        else
        {
            break;
        }
    }
    return bornLinkedList;
}

void main()
{
    struct LinkedList *linkedList_1 = linkedListCreator();
    display(linkedList_1->head);

    // Free allocated memory to prevent memory leaks
    struct Node *current = linkedList_1->head;
    while (current != NULL)
    {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }

    free(linkedList_1); // Free the main structure
}