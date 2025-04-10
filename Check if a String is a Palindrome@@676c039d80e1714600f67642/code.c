#include<stdio.h>
#include<string.h>
int main(){
    int flag=0,len;
    char str[100];
    scanf("%d",&str);
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
          flag=1;
          break;
        }
    }
    if(flag){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}