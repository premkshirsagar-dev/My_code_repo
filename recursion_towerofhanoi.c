/* this program for find tower of honai using recursion */
#include<stdio.h>

void toh(int n,char,char,char);

int main(){

   int n;
   printf(" enter your number of disk");
   scanf("%d",&n);
   toh(n,'A','B','C');
   return 0;

}
void toh(int n, char A,char B,char C){

    if(n==1){
        printf(" move disk %d form %c to %c\n",n,A,C);
        return ;
        
    }else{
        toh(n-1,A,C,B);
        printf(" move disk %d from %c to %c \n",n,A,C);
        toh(n-1,B,A,C);
    }

}