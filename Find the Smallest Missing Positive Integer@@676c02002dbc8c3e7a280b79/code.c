// Your code here..
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        while(arr[i]>0 && arr[i]<=n && arr[arr[i]-1]!= arr[i]){
            int temp=arr[i];
            arr[i]=arr[arr[i]-1];
            arr[temp -1]=temp;
        }

    }
    int smallestMissing=n+!;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            smallestMissing=i+ 1;
            break;
        }

    }
    printf("%d",smallestMissing);
    return 0;
}