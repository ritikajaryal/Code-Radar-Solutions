// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, len;

    //printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s\n", str);

    return 0;
}
