#include<stdio.h>
  int main(){

//     // printf("%d\n%d\n%d",'A','0','2');
//     // printf("%d",sizeof('A'));
//     // int x=5;
//     // int b=6;
//     // int c=x+++b;
//     // printf("%d\n",c);
//     //  printf("%d\n",++x + x++);
//     //  printf("%d\n%d\n",x++,++x);
//     // char*p="hello";
//     // p[0]='h';
//     // printf("%s",p);

//     int arr[]={ 10,20,30};
//     printf("%d\n\n",*(arr+2));

// int x=10;
// int *p,*q;
// p=&x;
// q=&x;
// printf("%d\n%d\n",*p,*q);
// int i=0;

// for(;i<5;i++)
// printf("%d\n",i);
// printf("%d\n",i); 
// int a[5]={1,2,3,4,5};
// printf("%d\n",*(a+1));


// FILE*fptr=NULL;  // pointer initilization

// int s1[100];
//  int n;
// printf(" entre you size array element ");
// scanf("%d",&n);
// printf("enter you %d array element ",n);
// for( int i=0;i<n;i++){

//     scanf("%d",&s1[i]);
// }
// fptr=fopen("PREM","w");
// if(fptr==NULL){

//     printf("  this file  IS not exsist ");
// return 1;
// }
// printf(" given array elements  see in the file that you define ");
// for( int i=0;i<n;i++){

//     fprintf(fptr,"%d\n",s1[i]);
// }
// // fputs(s1,fptr);

// fclose(fptr);

// fist declared the the file pointer 
//  then declared the variables as your requriment 
//  link int float char  and it is in array 


FILE*fptr=NULL;

int a,i,n;
float price;
char ch;

int a1[100];
float arr[100];
char s1[100];

printf(" enter value of a");
scanf("%d",&a);

printf(" enter the value price ");
scanf("%f",&price);

printf(" enter the  single character ch");
scanf("%c",&ch);

printf(" now enter the size of arrays for each \n");
scanf("%d",&n);

for(i=0;i<n;i++){
printf(" enter value of a");
scanf("%d",&a1[i]);
}


for(i=0;i<n;i++){

printf(" enter the value price ");
scanf("%f",&arr[i]);
}

printf(" enter the  single character ch");
fgets(s1,23,fptr);

fptr=fopen("PREM","w");
if(fptr==NULL){
    printf(" file is not exist ");
    return 1;
}

fprintf(fptr,"%d",a);
fprintf(fptr,"%f",price);
fprintf(fptr,"%c",ch);

for(i=0;i<n;i++){
printf(" value of a array");
fprintf(fptr,"%d",a1[i]);

}
for(i=0;i<n;i++){

printf(" the value price array ");
fprintf(fptr,"%f",arr[i]);
}

printf(" enter the  single character ch");
fputs(s1,fptr);

fclose(fptr);
return 0;
} 