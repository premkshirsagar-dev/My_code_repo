#include<stdio.h>
int main(){

    int n,c=0;
    int a=0; int b=1;
    printf(" enter your  number of value that of want get the number ");
    scanf("%d",&n);

    for( int i=0;i<=n;i++){
        
          c=a+b;
           a=b;
           b=c;

        printf("%d\n",c);

    }
    printf("%d is the %d term ",c,n);
    

return 0;
}