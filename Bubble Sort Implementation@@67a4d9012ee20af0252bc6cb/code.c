#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    int bubbleSort;
    for(int i = 0; i< n; i++){
       scanf("%d",&arr[i]);

    }
    bubbleSort(arr,n);
    printfArray(arr,n);
    return 0;
}