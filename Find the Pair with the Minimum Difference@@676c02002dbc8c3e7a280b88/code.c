// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void findMinDiffPair(int arr[], int n) {
    if (n < 2) {
        printf("-1\n");  // Not enough elements to form a pair
        return;
    }

    qsort(arr, n, sizeof(int), compare);  // Sort the array

    int minDiff = abs(arr[1] - arr[0]);
    int pair1 = arr[0], pair2 = arr[1];

    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            pair1 = arr[i];
            pair2 = arr[i + 1];
        }
    }

    // Optional: define a threshold for "too large" difference
    if (minDiff > 10) {
        printf("-1\n");  // No pair with small enough difference
    } else {
        printf("%d %d\n", pair1, pair2);
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

    findMinDiffPair(arr, n);

    return 0;
}
