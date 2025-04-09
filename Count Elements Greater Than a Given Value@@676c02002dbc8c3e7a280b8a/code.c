// Your code here...
#include <stdio.h>

int main() {
    int n, value, count = 0;

    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //printf("Enter the value to compare: ");
    scanf("%d", &value);

    for (int i = 0; i < n; i++) {
        if (arr[i] > value)
            count++;
    }

    printf("%d\n",count);

    return 0;
}
