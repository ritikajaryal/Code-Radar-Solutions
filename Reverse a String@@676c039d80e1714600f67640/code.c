#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int temp,len;
    scanf("%s",&str);
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("%s",str);
    return 0;
}