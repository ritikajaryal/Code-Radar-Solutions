#include<stdio.h>
void prime(int);
int main(){
    int i;
    scanf("%d",&i);
    prime(i);
}
void prime (int i){
    int x,count=0;
    for (x=1;x<=i;x++){
        if(i%x==0)
          count++;
    }
    if(count==2)
       printf("prime");
    else
       printf("not");
    return 0;      
}