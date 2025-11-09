#include<stdio.h>

 void square(int x,int y);

int main(){

int x,y;
printf(" entre your numbre  ");
scanf("%d",&x);
printf("enter your power ");
scanf("%d",&y);
square( x, y);
return 0;
}

 void square(int x,int y){
int i,pow=1;
    for(i=1;i<=y;i++){

      pow=pow*x;
  
   }
   printf("%d to the power %d is : %d",x,y,pow);

}

