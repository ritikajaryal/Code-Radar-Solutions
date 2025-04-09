// Your code here...
#include <stdio.h>

void replaceWithGreatest(int arr[], int n) {
    int maxRight = -1;

    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i];
        arr[i] = maxRight;
        if (current > maxRight) {
            maxRight = current;
        }
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

    replaceWithGreatest(arr, n);

    //printf("Modified array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
