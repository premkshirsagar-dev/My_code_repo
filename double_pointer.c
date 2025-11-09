#include<stdio.h>

int main(){

int a=10;

int *ptr=&a;
int **pt=&ptr;
int  ***p=&pt;
// int ***np=*(*p);

printf("%d        = is the simple value is a=10 \n",a);
printf("%d        = is address  the address where a is store \n",&a);
printf("%d        = *ptr which is access tha value form   a address  which is store in  a \n",*ptr);
printf("%d        = this print the address  of ptr where ptr value is store value of a \n",&ptr);
printf("%d        = is the value of double pointre that is access the value from address of ptr \n",*(*pt));
printf("%d        = this is the address of p  where ptr store the value  \n",&pt); 
printf("%d        *(&p)/*(*(*p) it is access the vlue form double p  pointre p \n",*(*(*p)));
printf("%d        = is address of pt where (***p) is store in  a \n",&p);



return 0;
}