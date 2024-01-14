#include <stdio.h>
#define capacity 10

void main()
{
    int size = 4;
    int arr[capacity] = {8, 0, 9, 0};

    int choice = 1;
    while (choice == 1)
    {
        printf("Enter 1 for insertion.\nEnter 0 for exit.");
        scanf("%d", &choice);

        if (choice != 1)
        {
            printf("you are exit.");
            break;
        }

        int position;
        printf("Enter the position : ");
        scanf("%d", &position);

        if (position < 0)
        {
            printf("Invalid ! position.");
            break;
        }

        if (position > size)
        {
            printf("Invalid ! position.");
            break;
        }

        int newElement;
        printf("Enter the new element : ");
        scanf("%d", &newElement);

        for (int i = size; i != position; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[position] = newElement;
        size++;
         for (int i = 0; i <size ; i++)
        {
            printf("%d ",arr[i]);
        }
        
    }
}