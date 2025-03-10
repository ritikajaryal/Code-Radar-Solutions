// Your code here...
#include<stdio.h>
int main(){
    int i,j,space,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}