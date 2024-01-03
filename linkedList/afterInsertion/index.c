#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nextNode;
};

void display(struct Node *head)
{
    struct Node *i = head;
    printf("\nLinked List : ");
    while (i != NULL)
    {
        printf("%d ", i->data);
        i = i->nextNode;
    }
    printf(" END\n");
}

struct Node *nodeCreator(int data)
{
    struct Node *bornNode = (struct Node *)malloc(sizeof(struct Node));
    bornNode->data = data;
    bornNode->nextNode = NULL;
    return bornNode;
}

struct Node *linkedListCreator()
{
    struct Node *head = NULL;
    struct Node *tail = NULL;

    int choice = 1;

    while (choice)
    {
        printf("Enter the choice :\n1 : for creating node.\n0 : for exit\n: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int data;
            printf("Enter the data : ");
            scanf("%d", &data);

            struct Node *newNode = nodeCreator(data);

            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->nextNode = newNode;
                tail = tail->nextNode;
            }
        }
        else
        {
            printf("Exit !");
            break;
        }
    }

    return head;
}

void afterInsert(struct Node *head, int targetNode, int newData)
{
    // if (head == NULL)
    // {
    //     head = nodeCreator(nodeData);
    // }
    // else
    // {
    //     struct Node *i = head;

    //     // Traverse the list until finding the node with data equal to 'targetNode'
    //     while (i->nextNode != NULL && i->data != targetNode)
    //     {
    //         i = i->nextNode;
    //     }

    //     if (i->data == targetNode) // Check if the targetNode is found
    //     {
    //         // Create a new node with data 'nodeData'
    //         struct Node *newNode = nodeCreator(nodeData);

    //         // Insert the new node after the target node
    //         newNode->nextNode = i->nextNode;
    //         i->nextNode = newNode;

    //         printf("prev = %d", i->data); // Prints the data of the previous node to the inserted node
    //     }
    //     else
    //     {
    //         printf("Node with data %d not found!\n", targetNode);
    //     }
    // }
    // return head;

    struct Node *newNode = nodeCreator(newData);

    struct Node *current = head;

    while (current->data != targetNode)
    {
        current = current->nextNode;
    }

    
    
}

void main()
{
    struct Node *head_1 = linkedListCreator();
    display(head_1);

    afterInsert(head_1, 0,5);

    // display(updHead1);

    // free(head_1);
    // free(updHead1);
}