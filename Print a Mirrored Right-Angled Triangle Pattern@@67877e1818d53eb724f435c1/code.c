// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, space;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for rows
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
