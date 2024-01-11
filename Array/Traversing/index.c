#include<stdio.h>
#include "../include/display.h"

void main()
{
    int arr[] = {8,0,9,0,7,6,8,9,3,3};

    int size = sizeof(arr)/sizeof(int);

    display_array(arr,size);
}