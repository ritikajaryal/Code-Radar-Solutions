#include<stdio.h>
int main(){
    char str[100];
    int count=0;
    scanf("%s",&str)
    for(int i=0;str[i];i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
            count++;
        }
    }
    printf("%d",count)
}