#include<stdio.h> // link secation 
                  // globle variable decleration section 
int main(){
    
int a=0,b=1,c,n;

printf(" enter n term that you want to ");
scanf("%d",&n);

for(int i=1;i<n;i++){

   int  c=a+b;
         b=c;
         a=b;

         printf("%d\n",c);


}
printf("%d is %d term ",c,n);
return 0;
}