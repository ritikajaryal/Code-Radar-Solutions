// Your code here...
#include <stdio.h>

void runningSum(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1];  // Add previous element to current
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

    runningSum(arr, n);

    //printf("Running sum:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
