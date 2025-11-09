#include<stdio.h>

int main(){

// int a[100]={1,2,3,4,-3.-3,0.-8,0};
// int *p=&a[0];                                 // this is the general from of the  pointer as arrays

// printf("%d is the value at &a[0] position\n",*p);
// printf(" and %d is the address of this value ",p);4

int a[100];
int n,i;
printf(" entre your size of element ");   // this is comman statement for taking value of n meance size of arry
scanf("%d",&n);


for(i=0;i<n;i++){
printf(" enter %d index value",i);     // this part for taking the value  meance reading
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++){

int *p=&a[i];

printf("\n %d is the value of %d index",*p,i);
printf("\n%d is address of this value ",p);

}

// int *p=&a[4];
// printf("\n %d is the value of index",*p);
// printf("\n%d is address of this value ",p);
// p++;
// printf("\n %d is the value of index",*p);
// printf("\n%d is address of this value ",p);

return 0;

}