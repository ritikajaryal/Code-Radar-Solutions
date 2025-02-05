#include <stdio.h>
int main(){
    char op;
    int a,b;
    scanf("%d %d %c",&a,&b,&op);
    if (op=='+'){
        printf("%d",a+b);
    }
    else if (op=="-"){
        printf("%d",a-b);
    }
    else if (op=="*"){
        printf("%d",a*b);
    }
    else if(op=="/"){
        printf("%d",a/b);
    }
    else{
        printf("Invslid opeation");
    }
    return 0;
}