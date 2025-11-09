

#include<stdio.h>

void fun(int *,int *);

int main(){

    int a=10;
    int b=20;
printf("%d=a\n%d=b\n",a,b);

    fun(&a,&b);

    return 0;
}
void fun(int *a,int *b){
 
    int t=*a;
    *a=*b;
    *b=t;

    printf("%d=a\n%d=b\n",*a,*b);
}
