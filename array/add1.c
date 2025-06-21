#include<stdio.h>
int main()
{
   int i,j;
   int sum[3][3];
    int array1[3][3];
    int array2[3][3];
    
    printf("the element in array1 is :\n");
    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&array1[i][j]);
        }
        
    }

    printf("the element in array2 is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&array2[i][j]);
        }
    }


    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
      {
        sum[i][j] = array1[i][j] + array2[i][j];
      } 
    }

   
    printf("the sum of in array1 and array2 is :\n");

    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
      {
          printf("%d\n",sum[i][j]);      } 
    }
   

    return 0;
}