#include <stdio.h>

void printArray(int arr[], int size) {
    if (size == 0) 
        return;
    else {
        printArray(arr, size - 1); 
        printf("%d ", arr[size - 1]); 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements are: ");
    printArray(arr, size);
    return 0;
}