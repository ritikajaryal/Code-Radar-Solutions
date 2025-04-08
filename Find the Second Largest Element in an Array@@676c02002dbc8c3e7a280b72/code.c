#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    //printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
