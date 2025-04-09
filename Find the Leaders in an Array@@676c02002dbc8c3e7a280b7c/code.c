#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n];  // To store the leaders
    int index = 0;

    int maxFromRight = arr[n - 1];
    leaders[index++] = maxFromRight;  // Last element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {  // Allow equal values
            maxFromRight = arr[i];
            leaders[index++] = maxFromRight;
        }
    }

    //printf("Leaders in the array:\n");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
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


