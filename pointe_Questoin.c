#include<stdio.h>
int main(){

    int a[]={10,11,8,56,67,5,4};
    int *p;
    int *q;
    p=&a[3];
    printf("%d is the value of 56\n",*p);
    q=&a[0]+3;


    
    printf("%d %d %d ",(*p)++,(*p)++,*(++p));
    printf("\n%d",*p);
    printf("\n%d",(*p)++);
    printf("\n%d",(*p)++);
    
    q--;
                                  
    printf("\n%d ",(*(q)--)); 
    printf("\n%d",*(p+2)-2);         
    printf("\n%d",*(p++ -2)-1);   


    return 0; 
    }