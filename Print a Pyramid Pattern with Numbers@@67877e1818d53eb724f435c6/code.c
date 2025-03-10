#include <stdio.h>

int main() {
    int i, j, n, space;
    
    // Set the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
