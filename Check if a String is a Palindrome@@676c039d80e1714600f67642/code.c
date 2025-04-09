#include<stdio.h>
#include<string.h>
int main(){
    int len,flag=0;
    char str[100];
    scanf("%s",&str);
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        flag=1;
    }
    if(flag){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}