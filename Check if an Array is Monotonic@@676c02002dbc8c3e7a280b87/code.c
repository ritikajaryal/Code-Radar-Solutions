// Your code here...
#include <stdio.h>
#include <stdbool.h>

bool isMonotonic(int arr[], int n) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1])
            decreasing = false;
        else if (arr[i] < arr[i - 1])
            increasing = false;
    }

    return increasing || decreasing;
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (isMonotonic(arr, n))
        printf("YES");
    else
        printf("NO");

    return 0;
}
