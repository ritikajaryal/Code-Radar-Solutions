// Your code here...
#include <stdio.h>

// Function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k) {
    if (n == 0) return;

    k = k % n;  // Normalize k
    if (k == 0) return;

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the rest
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //printf("Enter number of rotations (k): ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    //printf("Array after rotating right by %d:\n", k);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
