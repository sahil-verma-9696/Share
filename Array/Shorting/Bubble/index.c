//********************** Bubble sort ***************************
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

    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(a[j]> a[j+1])
            {
                //swap
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nupdated  ");
    display(a, n);
}