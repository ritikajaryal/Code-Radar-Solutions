#include <stdio.h>
int main(){
    float a;
    scanf("%d",&a);
    if (a & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}