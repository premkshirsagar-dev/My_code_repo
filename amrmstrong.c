#include<stdio.h>

int main (){

int n,arm=0,c,r;

printf("entre your number ");
scanf("%d ",&n);


c=n;
while(n>0){
    
r=n%10;
n=n/10;
arm+=(r*r*r);

}
if(arm==c){
    printf(" numbre is armstrong");
}
else{
    printf(" numbre is not a aremstrong ");}

return 0;
}