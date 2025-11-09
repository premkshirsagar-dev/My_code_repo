#include<stdio.h>

void value(int *a,int *b);

int main(){
int x,y, s;

// printf(" entre first numbre ");
// scanf("%d",&x);                       
// printf(" entre second numbre ");
// scanf("%d",&y);

x=11;
y=12;

 value(&x,&y); // call to funcation, call by refrence

printf(" \n%d is the value of a \n%d is the value of b",x,y);
return 0;
}

void value(int *a,int *b){

*a=10;
*b=11;
printf("\n%d is the value of a\n%d is the of b",*a,*b);

}