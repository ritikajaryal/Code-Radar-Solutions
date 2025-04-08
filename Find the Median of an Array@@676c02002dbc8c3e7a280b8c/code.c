// Your code here...
#include <stdio.h>

// Function to sort the array (using Bubble Sort for simplicity)
void sortArray(int arr[], int n) {
    int temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, n);

    float median;
    if(n % 2 == 0) {
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        median = arr[n/2];
    }

    printf(" %.2f\n", median);
    return 0;
}
