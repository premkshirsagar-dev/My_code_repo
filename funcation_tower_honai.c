#include<stdio.h>

void toh(int n,char,char,char);

int main(){
    int n;
    printf(" enter your number of disck ");
    scanf("%d",&n);
    toh(n,'a','b','c');
    return 0;

    }

    void toh(int n, char a,char b,char c){

 static int i=1;
if(n==1){
 printf(" move disck %d from %c to %c\n",n,a,c);
return ;
}else{
        
        toh(n-1,a,c,b);
        printf(" %d step \n move disck %d from %c to %c\n",i,n,a,c);
        toh(n-1,b,a,c);
        
    }
    }