// Your code here...
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        //printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MAX)
        printf("No second smallest element found (all elements may be equal).\n");
    else
        printf("%d\n", second);

    return 0;
}
