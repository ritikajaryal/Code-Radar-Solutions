// Your code here...
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int x=-1;
    //printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <=2) {
        //printf("Array must have at least two elements.\n");
        printf("%d\n",x);
    }

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MAX)
        printf("%d\n",x);
    else
        printf("%d\n", second);

    return 0;
}
