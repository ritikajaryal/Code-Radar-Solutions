// Your code here...
#include <stdio.h>

int findFirstRepeating(int arr[], int n) {
    int freq[100000] = {0};  // Adjust size as needed based on max value

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            return arr[i];  // First repeating element
        }
    }

    return -1;  // No repeating element found
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = findFirstRepeating(arr, n);

    if (result == -1)
        printf("No repeating element found.\n");
    else
        printf("%d\n", result);

    return 0;
}
