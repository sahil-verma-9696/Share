#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct stack
{
    struct node *top;
};

void display(struct stack *stack)
{
    printf("Stack : [ ");
    for (struct node *i = stack->top; i != NULL; i = i->next)
    {
        printf("%d ", i->data);
    }
    printf("]\n");
}

int isEmpty(struct stack *stack)
{
    return stack->top == NULL;
}

int isFull()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    int result = temp == NULL;
    free(temp);
    return result;
}

// struct node *push(struct stack * stack)
void push(struct stack **stack)
{
    // **stack means it hold the address of pointer
    // means *stack gives the address store in it.
    // stack gives the address of **stack
    // printf("Pushing the data.\n");
    // struct node *head = NULL;
    // struct node *tail = NULL;

    // while (1)
    // {
    //     printf("Enter\n1. for continue...\n0. for exit.\n");
    //     int choice;
    //     scanf("%d", &choice);

    //     if (choice == 0)
    //     {
    //         printf("You are exit.\n");
    //         break;
    //     }

    if (isFull)
    {
        printf("Stack overflow\n");
        return;
    }
    printf("Push : ");
    int data;
    scanf("%d", &data);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = (*stack)->top;
    (*stack)->top = newNode;
    // }
}

void peek(struct stack *stack)
{
    printf("top : %d\n", stack->top->data);
}

void pop(struct stack **stack)
{
    if (isEmpty(*stack))
    {
        printf("Stack underflow\n");
        return;
    }
    struct node *temp = (*stack)->top;
    (*stack)->top = (*stack)->top->next;
}
void main()
{
    // I want to create stack at main which is single and empty
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->top = NULL; // an empty stack's top should be null.
    // push(&stack);      // i pass this empty top node to function push by this it add into the stack
    // i pass the address of pointer for call by reference because
    // any changes which is done by done by push() function is reflect on main stack.
    // push(&stack);

    while (1)
    {
        printf("\nSelect stack operations.\n1 : Push.\n2 : Pop\n3 : Peek\n4 : Display\n0 : Exit\n");
        int opcode;
        scanf("%d", &opcode);

        if (opcode == 0)
        {
            printf("You are exit.\n");
            break;
        }
        if (opcode == 1)
            push(&stack);
        if (opcode == 2)
            pop(&stack);
        if (opcode == 3)
            peek(stack);
        if (opcode == 4)
            display(stack);
    }
}