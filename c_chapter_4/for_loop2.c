#include<stdio.h>
int main(){
    int i;
    int sum =1;
  
  printf("natural numbers are :");
    for(i=1;i<=20;i++)
    {
      
    printf("%d\n",i);
     sum +=i;
    }
    printf("the sum of natural number is: %d",sum);
  
    return 0;
}