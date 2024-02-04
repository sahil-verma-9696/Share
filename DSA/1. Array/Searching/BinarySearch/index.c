#include <stdio.h>
int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) { if (array[i] == key) return i; } return -1; 
}
int binarySearch(int array[], int size, int key) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == key) return mid; 
        if (array[mid] < key) low = mid + 1;
        else high = mid - 1;
    } return -1; 
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int choice, key, index;
    do {
        printf("\nSearch Menu:\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the key to search: ");
                scanf("%d", &key);
                index = linearSearch(array, size, key);
                if (index != -1) printf("Element found at index %d\n", index);
                else printf("Element not found\n"); break;
            case 2:
                printf("Enter the key to search: ");
                scanf("%d", &key);
                index = binarySearch(array, size, key);
                if (index != -1) printf("Element found at index %d\n", index);
                else printf("Element not found\n"); break;
            case 3: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);
    return 0;
}