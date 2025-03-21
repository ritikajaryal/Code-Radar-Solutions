#include <stdio.h>
void reverse(int arr[],int a,int b){
    int i=a,j=b;
    while(i<j){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    i++;
    j--;
    }
}
int main(){
    int arr[7];
    int n=7;
    int k=3;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
       for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
       }
       return 0;
}
