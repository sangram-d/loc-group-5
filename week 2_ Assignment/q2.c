 
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
    int size1, size2, merged_size, i, j;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements of first array: ", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements of second array: ", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays
    merged_size = size1 + size2;
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (i = size1, j = 0; i < merged_size; i++, j++) {
        merged[i] = arr2[j];
    }

    // Print the merged array in reverse order
    printf("Merged array in reverse order: ");
    for (i = merged_size - 1; i >= 0; i--) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
