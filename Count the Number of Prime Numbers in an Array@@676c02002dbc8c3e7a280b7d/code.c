// Your code here...
#include <stdio.h>

int main() {
    int a, count = 0;
    scanf("%d", &a);

    int arr[a];  // Declare the array

    // Input elements
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for primes
    for (int i = 0; i < a; i++) {
        int prime = 1;

        if (arr[i] < 2) {
            prime = 0;
        } else {
            for (int j = 2; j <= arr[i] / 2; j++) {
                if (arr[i] % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime == 1) {
            count++;
        }
    }

    printf("%d\n", count);  // Print total count of prime numbers
    return 0;
}
