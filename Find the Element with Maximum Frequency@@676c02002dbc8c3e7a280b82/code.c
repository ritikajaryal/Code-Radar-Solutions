// Your code here...
#include <stdio.h>

int findMaxFrequency(int arr[], int n) {
    int maxCount = 0, maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("%d\n",maxElement);
    return maxElement;
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findMaxFrequency(arr, n);

    return 0;
}
