#include<stdio.h>

void prem( int );
 // static int a=10;           // we can declared both this on gloable level and local level globly and localy
int main(){
int i;
for(i=0;i<9;i++){
prem(i);  

}

// printf("%d=a",a);                                            this is the complite 

return 0;
}

void prem(i){
    // static int i=1;
    static int a=10;  // it's retain it's value by last execution 
     int y=10;        // it's again initillize it's value by 10; 
    
      y++;

// printf("%d in calling\n",i);  // this is   the best example of static varible 
printf("%d in calling\n",i+1);
    printf("x=%d\n",a);
    printf("y=%d\n",y);
    a++;
    i++;

}