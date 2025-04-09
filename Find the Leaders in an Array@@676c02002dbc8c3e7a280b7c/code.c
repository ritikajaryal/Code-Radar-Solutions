#include <stdio.h>

void findLeaders(int arr[], int n) {
    int maxFromRight = arr[n - 1];

    //printf("Leaders in the array:\n");
    printf("%d ", maxFromRight);  // Last element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            printf("%d ", maxFromRight);
        }
    }

    printf("\n");
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findLeaders(arr, n);

    return 0;
}

