#include <stdio.h>
int main(){
    char a;
    scanf("%s",&a);
    if (isupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase")
    }
    return 0;
}