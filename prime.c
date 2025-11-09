#include<stdio.h>
#include<conio.h>
int main (){

int n,i,c=0;
printf(" entre your numbre ");

scanf("%d",&n);

for(i=2;i<=n/2;i++){

if(n%i==0)
break;


}

if(n/2>i){

    printf(" %d numbre is   not prime ",n);
}
else {

    printf( " %d numbre is  prime ",n);
}

return 0;
}