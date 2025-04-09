// Your code here...
#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    num = num < 0 ? -num : num; // Handle negative numbers
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //printf("Sum of digits for each element:\n");
    for (int i = 0; i < n; i++) {
        int sum = sumOfDigits(arr[i]);
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}
