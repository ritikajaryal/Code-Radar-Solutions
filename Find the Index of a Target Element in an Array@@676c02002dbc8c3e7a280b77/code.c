// Your code here...
#include <stdio.h>

int main() {
    int n, target, found = 0;

    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //printf("Enter the target element: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("%d\n", i);
            found = 1;
            break; // remove this if you want to find all indices
        }
    }

    if (!found) {
        printf("%d\n", target);
    }

    return 0;
}
