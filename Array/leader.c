#include <stdio.h>
#include <stdlib.h>

int *duplicates(int a[], int n, int *returnSize)
{
    int *result = NULL;
    int i;

    for (i = 0; i < n; i++)
    {
        int index = abs(a[i]); // Get the absolute value as an index

        // printf("a[%d] = %d i = %d\n",index,a[index],i);
        if (a[index] < 0)
        {
            printf("array at %d time : ", i);
            for (int j = 0; j < n; j++)
            {
                printf("%d ", a[j]);
            }
            printf("\n");
            printf("a[%d] = %d\n", index, a[index]);
            result = realloc(result, (*returnSize + 1) * sizeof(int));
            result[(*returnSize)++] = index;
        }
        else
        {
            printf("array at %d time : ", i);
            for (int j = 0; j < n; j++)
            {
                printf("%d ", a[j]);
            }
            printf("\n");
            a[index] = -a[index];
        }
    }

    if (*returnSize == 0)
    {
        result = malloc(sizeof(int));
        result[0] = -1;
        *returnSize = 1;
    }

    return result;
}

int main()
{
    int arr2[] = {2, 3, 3, 2, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int size2 = 0;
    int *res2 = duplicates(arr2, n2, &size2);

    printf("Output for arr2: ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", res2[i]);
    }
    free(res2);
    printf("\n");

    return 0;
}