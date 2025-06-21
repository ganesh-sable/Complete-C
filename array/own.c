#include<stdio.h>

int main()
{
    int i,j;
    int trnasformer[2][2];
    int array1[2][2];
   
    printf("enter array1:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        { 
         scanf("%d",&array1[i][j]);
        }
      
    }

   

    
    for ( i = 0; i < 2; i++)
    { 
        for (j = 0; j < 2; j++)
        {
            trnasformer[i][j]= array1[j][i];
        }
    }
   
    printf("The transform of two array is:\n");
    for ( j = 0; j < 2; j++)
    { 
        for (i = 0; i < 2; i++)
        {
        printf("%d ",trnasformer[j][i]);
        }
        printf("\n");
    }
    return 0;
}