#include <stdio.h>
#define capacity 10

void main()
{
    int size;
    int arr[capacity];

    printf("Enter the size : ");
    scanf("%d", &size);

    if (size > capacity)
    {
        printf("Give size is out of capacity\n");
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("oringinal : ");
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
        {
            printf(" , ");
        }
    }
    printf(" ]\n");

    int choise = 1;

    while (choise == 1)
    {
        printf("Enter 1 for deletion\nEnter 0 for exit.\n");
        scanf("%d", &choise);

        if (choise != 1)
        {
            printf("You are exit.\n");
            break;
        }

        if (size == 0)
        {
            printf("Array is empty\n");
            break;
        }

        size--;

        printf("updated : ");
        printf("[ ");
        for (int i = 0; i < size; i++)
        {
            printf("%d", arr[i]);
            if (i < size - 1)
            {
                printf(" , ");
            }
        }
        printf(" ]\n");
    }
}