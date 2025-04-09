// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void findMinDiffPair(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);  // Step 1: Sort the array

    int minDiff = abs(arr[1] - arr[0]);
    int pair1 = arr[0], pair2 = arr[1];

    // Step 2: Find min difference among adjacent elements
    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            pair1 = arr[i];
            pair2 = arr[i + 1];
        }
    }

    printf("%d %d\n",pair1,pair2);
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
