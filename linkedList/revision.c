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

typedef struct Node Node;
typedef struct LinkedList LinkedList;

void display(Node *head)
{
    Node *i = head;
    printf("Linked list : ");
    while (i != NULL)
    {
        printf("%d ", i->data);
        i = i->next;
    }
    printf(" End\n");
}

Node *nodeCreator(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

LinkedList *linkedListCreator()
{
    int choice = 1;
    LinkedList *newLinkedList = (LinkedList *)malloc(sizeof(LinkedList));
    newLinkedList->head = NULL;
    newLinkedList->tail = NULL;

    while (choice)
    {
        printf("1: for newNode : \n0: for exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int data;
            printf("data : ");
            scanf("%d", &data);

            Node *newNode = nodeCreator(data);

            if (newLinkedList->head == NULL)
            {
                newLinkedList->head = newNode;
                newLinkedList->tail = newNode;
            }
            else
            {
                newLinkedList->tail->next = newNode;
                newLinkedList->tail = newLinkedList->tail->next;
            }
        }
        else
        {
            printf("Exiting !\n");
            break;
        }
    }

    return newLinkedList;
}

int main()
{
    LinkedList *ll1 = linkedListCreator();
    display(ll1->head);

    // Free allocated memory
    Node *temp;
    while (ll1->head != NULL)
    {
        temp = ll1->head;
        ll1->head = ll1->head->next;
        free(temp);
    }

    free(ll1);

    return 0;
}