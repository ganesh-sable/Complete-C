#include<stdio.h>
int main(){
    
    int m1,m2,m3;
    printf("enter m1,m2,m3");
    scanf("%d %d %d",&m1,&m2,&m3);
    if(m1<33 || m2<33 || m3<33){
        printf("you are fail");
    }
   else if((m1+m2+m3)/3<40){
        printf("you are fail");
    }
    else{
        printf("you are pass");
    }

    return 0;
}