// Your code here...
#include <stdio.h>

int findPeak(int arr[], int n) {
    int maxPeak = -1;

    if (n == 1)
        return arr[0];

    if (arr[0] >= arr[1])
        maxPeak = arr[0];

    if (arr[n - 1] >= arr[n - 2] && arr[n - 1] > maxPeak)
        maxPeak = arr[n - 1];

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            if (arr[i] > maxPeak)
                maxPeak = arr[i];
        }
    }

    return maxPeak;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int peak = findPeak(arr, n);
    printf("%d\n", peak);

    return 0;
}
