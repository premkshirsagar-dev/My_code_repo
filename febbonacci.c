#include<stdio.h>

int main(){
    int n,c;

    printf("enter your size term of febbinachi");
    scanf("%d",&n);
    int a=0,b=1;

    for(int i=0;i<n;i++){
        
c=a+b;
a=b;
b=c;
printf("%d is %d trem \n",c,i+1);

    }
    printf("%d is the %d trem ",c,n);
    return 0;
}