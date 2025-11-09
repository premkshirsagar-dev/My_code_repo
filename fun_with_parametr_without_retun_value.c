#include<stdio.h>

void add(int n);

int main(){
 int n;
    printf(" entre your value of n");
    scanf("%d",&n);

    add(n);
  return 0;
}

void add(int x){
 int sum=0;
for( int i=0;i<=x;i++){
sum=sum+x;
}
 
printf("%d is the sum of %d number ",sum,x);

}