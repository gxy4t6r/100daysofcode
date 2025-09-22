#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
