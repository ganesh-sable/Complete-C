#include<stdio.h>
int main(){
    int i;
    int n;
    printf("enter n:");
    scanf("%d",&n);

    printf("the natural number is :\n");
    for ( i = 1; i <=n; i++)
    {
      printf("%d\n",i);
    }
    
    return 0;
}