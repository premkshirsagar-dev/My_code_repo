#include<stdio.h>
#include<conio.h>


int main(){
     int flag =0;
    int n,i;

    printf(" enter the number for is prime or not");
    scanf("%d",&n);

    for(int i=2;i<n;i++){

   if(n%i==0)
   flag=1;
    break;
    }
    

if(flag==0){
    printf(" given number %d is prime ",n);

}
else{
    printf(" given number %d is not prime ",n);
}
return 0;

}