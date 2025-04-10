#include <stdio.h>
int main(){
    char str[100];
    scanf("%s",&str)
    int count=0;
    for(int i=0;i< str[i];i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}