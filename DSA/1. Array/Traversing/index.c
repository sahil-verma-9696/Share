#include<stdio.h>
void main()
{
    // first creating array
    int size = 5;
    // printf("Enter the size : ");
    // scanf("%d",&size);

    // declaring array
    int arr[size];

    // assigning elements to array by user.
    printf("Assigning elements to array : \n");
    for(int i = 0; i<size; i++)
    {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    // traversing and printing elements of array.
    printf("\nTraversing the array \n");
    for(int i = 0; i<size; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

}