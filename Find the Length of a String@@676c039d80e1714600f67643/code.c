#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    // Use scanf correctly without &
    scanf("%s", str);

    int length = strlen(str);

    printf("%d\n", length);
    return 0;
}

