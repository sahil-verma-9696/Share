#include <stdio.h>
#define capacity 5

int main()
{
    int size = 3;
    int arr[capacity] = {2, 3, 4};

    int choice = 1;
    while (choice == 1)
    {
        printf("Enter 1 for insertion.\nEnter 0 for exit.\n");
        scanf("%d", &choice);

        if (size == capacity)
        {
            printf("Array is overflow\n");
            break;
        }

        if (choice != 1)
        {
            printf("You are exit\n");
            break;
        }

        if (choice == 1)
        {
            int newElement;
            printf("Enter the newElement : ");
            scanf("%d", &newElement);

            // Shift elements to the right
            for (int i = size - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }

            // Insert the new element at the beginning
            arr[0] = newElement;
            size++;

            printf("Element inserted successfully\n");

            // printf("\n");
        }
    }
    // Print the updated array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
