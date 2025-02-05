#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if (x=='R'){
    printf("Stop");
    }
    else if (x=='G'){
        printf("Go");
    }
    else if (x=='Y'){
        printf("slow Down");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}