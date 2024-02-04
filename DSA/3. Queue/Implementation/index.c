#include <stdio.h>
#include <stdlib.h>
struct Node { int data;struct Node* next; };
struct Queue { struct Node* front;struct Node* rear; };
int is_empty(struct Queue* queue) { return queue->front == NULL; }
void enqueue(struct Queue* queue, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = data; new_node->next = NULL;
    if (is_empty(queue)) queue->front = queue->rear = new_node;
    else { queue->rear->next = new_node; queue->rear = new_node; }
}
int dequeue(struct Queue* queue) {
    if (is_empty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        exit(EXIT_FAILURE);
    }
    int dequeued_data = queue->front->data;
    struct Node* temp = queue->front;
    queue->front = queue->front->next;
    if (queue->front == NULL) queue->rear = NULL;
    free(temp);return dequeued_data;
}
void display(struct Queue* queue) {
    struct Node* current = queue->front;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }printf("NULL\n");
}
void main() {
    struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    int choice, data;
    do {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(queue, data);
                break;
            case 2:printf("Dequeued element: %d\n", dequeue(queue));break;
            case 3:display(queue);break;
            case 0:printf("Exiting program.\n");break;
            default:printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);
    free(queue);
}