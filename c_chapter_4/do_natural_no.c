#include<stdio.h>
int main(){
    int i=1;
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("the natural numbers are\n");
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}