#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n=1;
    for (int i=2;i<a;i++){
        if (a%i == 0){
            n=0;
            break;
        }
    }
    if (a==1){
        printf("Prime");
    }
    else{
        printf("Not Prime ");
    }
    return 0;
}