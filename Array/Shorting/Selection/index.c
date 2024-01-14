//********************** Selection sort ***************************
#include <stdio.h>
void display(int arr[], int size)
{
    printf("Array : [");
    for (int i = 0; i < size; i++)
    {
        printf(" [%d] : %d ", i, arr[i]);
        if (i < size - 1)
        {
            printf(",");
        }
    }
    printf("]");
}
void main()
{
    int a[5] = {9, 3, 5, 0, 2};
    int n = 5;
    printf("original ");
    display(a, n);

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        // swap
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\nupdated  ");
    display(a, n);
}