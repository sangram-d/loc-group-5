//
#include <stdio.h>

#define MAX_SIZE 100

void sort(int arr[], int size);

int main() {
    int arr[MAX_SIZE], size, i;

    // Input array
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements of array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    sort(arr, size);

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void sort(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
