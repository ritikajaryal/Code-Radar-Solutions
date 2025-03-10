// Your code here...
#include <stdio.h>
int main(){
    int n,i,j,space;
    char ch;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        ch='A';
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}