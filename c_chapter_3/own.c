#include<stdio.h>
int main(){
    int i;
    printf("enter i");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("good");
        break;
    
    case 2:
        printf("very good");
        break;
    
    default:
    printf("out of block");
        break;
    }
    return 0;
}