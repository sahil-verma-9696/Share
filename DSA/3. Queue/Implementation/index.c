#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
typedef struct queue Queue;

struct node
{
    int data;
    Node *next;
};

struct queue
{
    Node *front;
    Node *rear;
};

void display(Queue *myQueue)
{
    printf("Stack : [ ");
    Node *i = myQueue->front;
    while (i != NULL)
    {
        printf("%d ", i->data);
        i = i->next;
    }
    printf("]\n");
}

void enque(Queue **myQueue)
{
    printf("Enqueue : ");
    int data;
    scanf("%d", &data);

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if ((*myQueue)->front == NULL && (*myQueue)->rear == NULL)
    {
        (*myQueue)->front = newNode;
        (*myQueue)->rear = newNode;
    }
    else
    {
        (*myQueue)->rear->next = newNode;
        (*myQueue)->rear = newNode;
    }
    display(*myQueue);
}

int deque(Queue ** myQueue){
    if((*myQueue)->front == NULL)
    {
        printf("Queue is underflow\n");
        return -1;
    }
    Node * temp = (*myQueue)->front;
    (*myQueue)->front = (*myQueue)->front->next;
    int dequedData = temp->data;
    free(temp);
    display(*myQueue);
    return dequedData;
}

void main()
{
    Queue *myQueue = (Queue *)malloc(sizeof(Queue));
    myQueue->front = NULL;
    myQueue->rear = NULL;

    while (1)
    {
        printf("Select operations.\n1.Enque.\n2.Deque.\n");
        int choice;
        scanf("%d", &choice);

        if (!choice)
        {
            printf("You are exit.\n");
            break;
        }
        if(choice == 1)enque(&myQueue);
        if(choice == 2)printf("dequed data : %d\n",deque(&myQueue));
    }
}