#include<stdio.h>
int main(){
    int i;
    int array[3];
    int revrse[3];
    printf("the element of array:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&array[i]);
    }

   
    for(i=0;i<3;i++)
    {
       revrse[i]=array[i];
    }

    printf("the  revrse is:\n");
    for(i=2;i>=0;i--)
    {
        printf("%d\n",revrse[i]);
    }

    return 0;
}