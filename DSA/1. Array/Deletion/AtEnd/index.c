#include <stdio.h>
#define capacity 10

void diplay(int arr[], int size)
{
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
        {
            printf(" , ");
        }
    }
    printf(" ]\n");
}

void delAtEnd(int * size)
{
    if (*size == 0)
    {
        printf("Array is empty\n");
        return;
    }
    (*size)--;
}

void main()
{
    int arr[capacity];
    int size;

    printf("Enter the size : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    delAtEnd(&size);

    diplay(arr, size);
}