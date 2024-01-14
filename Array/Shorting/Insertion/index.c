//********************** Insertion sort ***************************
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
    for (int i = 1; i < n; i++) // 1,2,3,4
    {
        int key = a[i];
        int j;
        for (j = i - 1; j >= 0; j--) // 0 , 1,0 , 2,1,0 ,3,2,1,0
        {
            if (key < a[j])
            {
                a[j + 1] = a[j];
            }
            else{
                break;
            }
        }
        a[j + 1] = key;
    }
    printf("\nupdated  ");
    display(a, n);
}