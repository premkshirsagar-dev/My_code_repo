#include<stdio.h>

int sumofd(int );

int main(){

int n, s;
printf(" enter your digite ");
scanf("%d",&n);
  s=sumofd(n);
printf(" %d  is the sum of given digits ",s);

}


int sumofd(int x){
int r,sum=0 ;                      // complited
while(x>0){

  r=x%10;
  sum+=r;
  x=x/10;
}

return sum;


}