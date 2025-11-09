#include<stdio.h>

void feb(int n);
int main(){

  
    int n;
    printf(" enter any number ");
    scanf("%d",&n);

    feb(n);
}

void feb(int n){

      int a=1,b=2;

      while(n>=b){
      
        if(a==n||b==n)
            break;

            a=a+b;
            b+=a;
      }
      
      if(a==n||b==n){
        printf("%d is the fibbonacci",n);

      }else{
        printf(" %d is not a fibbonacci");
      }

 }