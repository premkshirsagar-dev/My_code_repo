#include<stdio.h>

int sum(int);

int main(){
int n,s;
printf(" entre size of number ");
scanf("%d",&n);
s=sum(n);
printf("%d is the sum of given n numbers ",s);

    return 0;
}

int sum(int n){
    int i,sum=0,num;
for(i=1;i<=n;i++){
printf(" entre your number ") ;
scanf("%d",&num);

sum+=num;

}
return sum;
}