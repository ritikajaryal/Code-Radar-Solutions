#include <stdio.h>
#include <string.h>

int main() {
    int flag = 0, len;
    char str[100];

   // printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1; // Mismatch found
            break;
        }
    }

    if (flag) {
        printf("No\n"); // Not a palindrome
    } else {
        printf("Yes\n"); // Is a palindrome
    }

    return 0;
}

