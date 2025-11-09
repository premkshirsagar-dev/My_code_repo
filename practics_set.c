
/* this program for finging  the prime number */

// #include<stdio.h>
// int main(){

//     int n;
//     int c;
// int i;
//     printf(" enter your that you want tyo \n  that is prime or not prime ");
//     scanf("%d",&n);

//     for(i=2;i<n/2;i++){
//         if(n%2==0){
//            break;
//         }
//     }
//      if (i>=n/2){
//             printf("%d is the prime number",n);
//         }
//         else{
//             printf("%d given numbre is nor prime ",n);
//         }

// return 0;
// }

/* this progra is use to find the febiinachio */

// #include<stdio.h>

// int main(){

//     int a=0,b=1,c=0;
//     int n,i;


//     printf(" enter your numer that you want to fint n term of febbinachi  ");
//     scanf("%d",&n);

//     for(i=0;i<=n;i++){

//         c=a+b;
//         a=b;
//         b=c;
//         printf("%d 1 is the %d term \n",a,i+1);
//         // printf("%d  is %d trem\n",c,i+1);

//     }
//     printf("\n%d is the %d term ",c,n);

//     return 0;
// }


//  that proram will find the sum of  diffrent number 
// #include<stdio.h>

// int  main(){

// int n,num ,sum=0;
//     printf(" entre  that number your want to aad ");
//     scanf("%d",&n);

// for(int i=0;i<n;i++){
//     printf(" entre that number ");
//     scanf("%d",&num);
//     sum+=num;
// }

// printf("%d is the sum of given number ",sum);
// return 0;
// }

//  this program  for value interchange using pointre 
// #include<stdio.h>


// void  ptr(int *a,int *b);

// int main(){


//     int a,b;

//     printf(" enter  first number ");
//     scanf("%d",&a);

//     printf(" entre second number ");
//     scanf("%d",&b);

// ptr(&a,&b);

// return 0;
// }

// void  ptr(int *a,int *b){

//     int c=0;

//     printf("a=%d\nb=%d",*a,*b); // befor swaping 
//     c=*a;
//     *a=*b;
//     *b=c;

//   printf("\na=%d\nb=%d",*a,*b); // after swaping 

// }


//  this progra  for searecing the element on give  array


#include<stdio.h>
int main(){

    int s1[100];
    int s=0;
    int c=0;
    int found =0;
int *ptr=s1;
 int n;
    printf("  enter the size of array");
    scanf("%d",&n);
printf(" \nenter value of ");
for( int i=0;i<n;i++){
    scanf("%d",(ptr+i));
}

// printf(" \ngiven element ");
// for(int i=0;i<n;i++){
// printf("%d",*(ptr+i));

// }

printf(" enter  numre that you wanto sereach ");
scanf("%d",&s);
for( int i=0;i<n;i++){
    if(*(ptr+i)==s){

        printf(" \ngiven array elem %darray eleme at position %d",s,i+1);
        c++;
        found=1;
        
    }
    else{
        found =0;
    }
}

if(!found){

    printf(" \nnot exist %d",s);
}

else{

    printf("%d elemenet is repreat %d time ",s,c);
}
return 0;

}