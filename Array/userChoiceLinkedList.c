#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *i = head;
    while (i != NULL)
    {
        printf("%d ", i->data);
        i = i->next;
    }
}

struct Node * nodeCreator(int data)
{
    struct Node *bornNode = (struct Node *)malloc(sizeof(struct Node));
    bornNode->data = data;
    bornNode->next = NULL;
    return bornNode;
}

struct Node * linkedListCreator()
{
    struct Node *head = NULL;
    struct Node *tail = NULL;

    int data;
    int choice = 1;

    while (choice)
    {
        printf("Enter 1 for new Node and 0 for exit.\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter data \n");
            scanf("%d", &data);

            struct Node * newNode = nodeCreator(data);

            if(head == NULL)
            {
                head = newNode;
                tail = newNode;   
            }else{
                tail->next = newNode;
                tail = tail->next;
            }
        }
    }

    return head;
}

void main()
{
    struct Node * linkedList_1 = linkedListCreator();
    display(linkedList_1);
}