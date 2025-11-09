#include<stdio.h>
 
 int power(int x,int y );

int main (){
int x,y,p;
printf(" entre your value of n ");
scanf("%d%d",&x,&y);
 p=power(x,y);              //agrument /actual parametrs

printf("%d",p);

    return 0;
}
power(int x,int y ){       //parameters/formal parametrs valus which is we passing in this funcation 
int i,pow=1;
for(i=1;i<=y;i++){

pow=pow*x;

}

return pow;


}