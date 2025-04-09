// Your code here...
#include <stdio.h>

int main() {
    int n;
   // printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Assumption: array elements are in the range 0 to 99999
    int freq[100000] = {0};  

    int maxFreq = 0, maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            maxElement = arr[i];
        }
    }

    printf("%d \n", maxElement);

    return 0;
}
