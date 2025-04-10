#include <stdio.h>
#include <string.h>

int main() {
    int i, count = 0;
    char str[1000];
    //scanf("%s",str);

    // Read a full line including spaces
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    // If the string is not empty, word count = spaces + 1
    if (strlen(str) > 0) {
        printf("%d", count + 1);
    } else {
        printf("0");
    }

    return 0;
}
