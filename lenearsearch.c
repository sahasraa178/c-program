#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 0, 1, 9};
    int x = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    (result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n", result);
    return 0;
}