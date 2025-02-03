#include <stdio.h>
int main(){
    char a;
    scanf("%s",&a);
    if (isupper(a)){
        printf("Uppercase");
    }
    else if (islower(a)){
        printf("Lowercase");
    }
    else{
        printf("Not alphabet");
    }
    return 0;
}