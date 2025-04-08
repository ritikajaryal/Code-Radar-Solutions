// Your code here...
#include <stdio.h>
int main(){
    int a,x,totalpairs=0;
    scanf("%d %d",&a,&x);
    int arr[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                totalpairs++;
                printf("%d %d",arr[i],arr[j]);
            }
        }
    }
    return 0;
}