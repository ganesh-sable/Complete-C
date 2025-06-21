   #include<stdio.h>
   int main(){
    int i,j;
    int array1[3][3];
    int array2[3][3];

    printf("the element of array1 is:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j <3; j++)
       {
       scanf("%d",&array1[i][j]);
       }   
    }

     for ( j = 0; j <3; j++)
    {
        for ( i = 0; i < 3; i++)
       {
        array2[i][j] = array1[j][i];
       }
    }

    printf("the element of array2 is :");
    for ( j = 0; j <3; j++)
    {
      for ( i = 0; i < 3; i++)
       {
      printf("%d\n",array2[j][i]);
       } 
    }
    return 0;
}