#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 42, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int index = linearSearch(arr, size, target);
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
}