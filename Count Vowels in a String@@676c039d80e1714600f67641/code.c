// Your code here...
#include<stdio.h>
int main(){
    int len,count=0;
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i];i++){
        if(str[i]=='a' || str[i]=='A' || str[i]=='e'||str[i]=='E' || str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}