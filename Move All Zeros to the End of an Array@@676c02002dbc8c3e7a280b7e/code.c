// Your code here...
#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int index = 0;  // Position to place the next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the rest with zeros
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    moveZerosToEnd(arr, n);

    //printf("Array after moving zeros to end:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
