#include<stdio.h>
void swap( int a,int b);
int main(){

 int a,b;
 printf(" entre the value of a");
 scanf("%d",&a);
 printf(" entre the value of a");
 scanf("%d",&b);

 swap(a,b);
 printf("\na=%d,b=%d",a,b);
 return 0;

}void swap( int x,int y){

int t;
 t=x;
 x=y;
 y=t;
 printf("\nx=%d,y=%d",x,y);

}
