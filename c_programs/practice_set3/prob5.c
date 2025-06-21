//www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html;
#include<stdio.h>

int main(){

    char ch ='a';
    printf("the character is %c\n",ch);

    printf("the value of character is %d\n",ch);

    if(ch>=97 && ch<=122){
        printf("the character is lowercase\n");
    }
    else{
        printf("the character is not lowercase\n");
    }
    return 0;
}