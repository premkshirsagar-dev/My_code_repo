#include<stdio.h>

void value(int x,int y);


void main(){

int x,y;

printf(" entre yuor value of x");
scanf("%d",&x);
printf(" enter your value of y ");
scanf("%d",&y);
printf("x=%d\ny=%d\n",x,y);

value(x,y);

}
void value(int a,int b){
    
int x=b;
int y=a;
printf("x=%d\ny=%d\n",x,y);

}

