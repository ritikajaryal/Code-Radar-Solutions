// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findDuplicates(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);  // Sort the array

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            // Avoid printing same duplicate again
            if (i == 1 || arr[i] != arr[i - 2]) {
                printf("%d\n", arr[i]);
            }
        }
    }
}

int main() {
    int a;
    //printf("Enter number of elements: ");
    scanf("%d", &a);

    int arr[a];

    //printf("Enter %d elements:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, a);

    return 0;
}
