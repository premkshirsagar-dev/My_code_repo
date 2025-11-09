#include<stdio.h>

int main(){



    double x,y;
    read:
    scanf("%f",&x);
    if(x<0) goto read;
    y=s(x);
    printf("%f %f \n " ,x,y);
    goto read;


    return 0;
 
}