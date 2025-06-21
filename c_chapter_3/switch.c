#include<stdio.h>

int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("we entered 1");
        break;
        case 2:
        printf("we entered 2");
        break;
        case 3:
        printf("we entered 3");
        break;
        case 4:
        printf("we entered 4");
        break;
        default:
        printf("out of block");
    }
    
    return 0;
}