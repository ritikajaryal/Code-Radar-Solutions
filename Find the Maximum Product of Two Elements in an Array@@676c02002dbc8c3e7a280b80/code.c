// Your code here...
#include <stdio.h>
#include <limits.h>

int maxProduct(int arr[], int n) {
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return -1;
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Find top 2 max values
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        // Find bottom 2 min values (for negatives)
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int prod1 = max1 * max2;
    int prod2 = min1 * min2;

    return (prod1 > prod2) ? prod1 : prod2;
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = maxProduct(arr, n);
    printf("%d\n", result);

    return 0;
}