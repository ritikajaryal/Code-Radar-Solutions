#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f ",&a,&b,&c);
    if (a == b && b == c){
    printf("Equilateral");
    }
    else if (( a == b && b != c) || (a != b && b == c)){
        printf("Isosceles");
    }
    esle {
        printf("Scalene"):
    }
    return 0;
}