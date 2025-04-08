#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

// Hashing approach for positive and negative values
int hash[MAX * 2] = {0};  // To store frequency of elements

void findPairs(int arr[], int n, int target) {
    //printf("Unique pairs with sum %d:\n", target);

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        // Check if complement exists in hash table
        if (hash[complement + MAX]) {
            printf("(%d, %d)\n", arr[i], complement);
            hash[complement + MAX] = 0;  // Mark as used
            hash[arr[i] + MAX] = 0;      // Mark current as used
        } else {
            hash[arr[i] + MAX] = 1;
        }
    }
}

int main() {
    int arr[] = {1, 5, 7, -1, 5, 2, -1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    findPairs(arr, n, target);

    return 0;
}
