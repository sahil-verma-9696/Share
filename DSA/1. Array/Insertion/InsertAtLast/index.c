#include <stdio.h>

void main()
{
    int capacity = 10;
    int size;
    printf("Enter the size of Array : ");
    scanf("%d", &size);

    // int arr[size];
    int arr[capacity];

    // Entering the elements by user
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int choice = 1;

    while (choice == 1)
    {
        printf("Enter 1 for insertion.\nEnter 0 for exit.");
        scanf("%d", &choice);

        if (choice != 1)
        {
            printf("You are exit from loop.\n");
            break;
        }

        if (size == capacity)
        {
            printf("Array is overflow\n");
            break;
        }

        if (choice == 1)
        {
            int newElement;
            printf("Enter the element you want to insert : ");
            scanf("%d", &newElement);

            arr[size] = newElement;
            size = size + 1;

            printf("Element entered successfully.\n");

            for(int i = 0; i<size; i++)
            {
                printf("%d, ",arr[i]);
            }
            printf("\n");
        }
    }
}