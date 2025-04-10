// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    //printf("Enter a string: ");
    //fgets(str, sizeof(str), stdin);
    scanf("%s",&str);
    // Remove newline character if fgets includes it
    //str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    printf("%d\n", length);
    return 0;
}
