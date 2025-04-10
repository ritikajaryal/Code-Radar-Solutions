// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count = 0, inWord = 0;

    //printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("%d\n", count);
    return 0;
}
