#include<stdio.h>
int main(){
    int a=3;
    int b=6;
    int c=9;
    
    printf("the value of %d",a*b/c+7);
    printf("the value of %d",a*b/b*c+a*7);
    // a*b/b*c+a*7;
    // a*b/b*c+21;
    // 18/45+21;
    // 48;
    
    return 0;
}