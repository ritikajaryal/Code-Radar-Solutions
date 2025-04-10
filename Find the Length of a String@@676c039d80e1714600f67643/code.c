#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int length = 0;

    // Read entire line, including spaces
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = 0;

    // Count only non-space characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            length++;
        }
    }

    printf("%d\n", length);
    return 0;
}


