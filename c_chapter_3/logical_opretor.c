#include<stdio.h>

int main(){
    
    int a=3;int b=3;int c=4;
    printf("the value of a and b is %d\n",a&&b);
    printf("the value of a and c is %d\n",a&&b);
    printf("the value of b and c is %d\n",a&&b);
    printf("the value of a and b is %d\n",a||b);
    printf("the value of a and c is %d\n",a||b);
    printf("the value of b and c is %d\n",a||b);
    return 0;
}