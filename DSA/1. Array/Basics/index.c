// Basics of array.

// *** syntax of declaring.

// data_type array_name[size];

// int arr_int[5];
// float arr_float[5];
// char arr_char[5];

// *** stytax of initializing.

// data_type array_name[] = {value-1,value-2,value-3,...value-n};

// int arr_int[] = {8,0,9,0,7,6,8,9,3,3};
// float arr_float[] = {1.2,3.444,1.14,3.5};
// char arr_char[] = {'s','o','n','a','l'};

// *** Accessing the elements of array.

#include <stdio.h>

void main()
{
    int arr_int[] = {8, 0, 9, 0, 7, 6, 8, 9, 3, 3};

    for(int i = 0; i<10; i++)
    {
        printf("arr_int[%d] = %d\n",i,arr_int[i]);
    }

    // printf("arr_int[0] = %d \n",arr_int[0]);
    // printf("arr_int[1] = %d \n",arr_int[1]);
    // printf("arr_int[2] = %d \n",arr_int[2]);
    // printf("arr_int[3] = %d \n",arr_int[3]);
}

// values = arr[ 8 , 0 , 9 , 0 , 7 , 6 ]
//  indexies =  [0] [1] [2] [3] [4] [5]

// jab hum loop chalyenge to i [ 0 to 5 ]

// i = 0,1,2,3,4,5

// printf("%d \n",arr[0]);
// printf("%d \n",arr[1]);
// printf("%d \n",arr[2]);
// printf("%d \n",arr[3]);
// printf("%d \n",arr[4]);
// printf("%d \n",arr[5]);
