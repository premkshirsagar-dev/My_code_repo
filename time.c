#include<stdio.h>
#include<time.h>
int main(){

int t,out;
    printf(" entre time");
    scanf("%d",&t);

   out= time(t);
   printf("%d is the current time ",out );
   return 0;

}