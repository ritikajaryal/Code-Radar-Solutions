// Your code here...
#include <stdio.h>

// Function to find majority element
int findMajorityElement(int arr[], int n) {
    int candidate = -1;
    int count = 0;

    // Phase 1: Find a candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;  // No majority element
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = findMajorityElement(arr, n);
    if (result != -1)
        printf("%d\n", result);
    else
       int x=-1;
       printf("%d",x);

    return 0;
}
