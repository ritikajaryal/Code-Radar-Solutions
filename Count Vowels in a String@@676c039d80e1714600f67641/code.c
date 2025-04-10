#include <stdio.h>
int main(){
    char str[100];
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}