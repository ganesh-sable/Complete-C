#include<stdio.h>
int main()
{
    int age =25;
    printf("%p",&age);
    int*ptr=&age;

    printf("\nAddress :%p",ptr);
    printf("\nvalue:%d",*ptr);
    return 0;
}