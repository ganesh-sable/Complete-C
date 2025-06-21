#include<stdio.h>

int main(){
    int a[3][3];
    int b[3][3];
    int i,j;
    printf("the elment of a is :\n");

    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
     
    for ( i = 2; i >=0; i--)
    {
        for ( j= 2; j>=0; j--)
        {
         b[i][j]=a[i][j];
        }
    }

    printf("the element of b is:\n");
    for ( i = 2; i>=0; i--)
    {
        for ( j= 2; j >=0; j--)
        {
         printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}