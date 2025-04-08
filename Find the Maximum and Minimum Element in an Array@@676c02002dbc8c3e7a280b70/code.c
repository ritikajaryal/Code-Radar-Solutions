// Your code here..
#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);

    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<a;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }

    }
    printf("%d %d",min,max);
    return 0;
}