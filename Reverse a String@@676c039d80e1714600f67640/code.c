#include<stdio.h>
#include<string.h>
int main(){
    int len,temp,i;
    char str[100];
    scanf("%s",&str);
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("%s",str[i]);
    return 0;
}