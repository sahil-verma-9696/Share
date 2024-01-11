#include "../include/display.h"
#include<stdio.h>

void display_array(int arr[],int size)
{
    printf("[");
    for(int i = 0; i<size; i++)
    {
        printf("%d",arr[i]);
        if(i<size-1)
        {
            printf(", ");
        }
    }
    printf("]");
}