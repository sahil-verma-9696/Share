#include <stdio.h>
void main()
{
    int size = 5;
    int arr[size]; // [ 0, 1, 2, 3, 4]
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // arr[4] = 5;
    printf("enter the value of element");
    // 
    for (int i = 0; i <5; i++)
    {        
        scanf("%d",&arr[i]);
    }
    
    
    // printf("arr[0] = %d\n", arr[0]);
    // printf("arr[1] = %d\n", arr[1]);
    // printf("arr[2] = %d\n", arr[2]);
    // printf("arr[3] = %d\n", arr[3]);
    // printf("arr[4] = %d\n", arr[4]);

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("arr[%d] = %d\n", i,arr[i]);
    }
}