#include<stdio.h>
// void cmp(int*a ,int*b );
// int main(){
//  int x=11;
//  int y=13;
// //  printf(" %d is x ,%d is y\n",x,y);
// //    if(x==y){

// //     printf(" are equal \n");
// //     }
// //     else
// //     {
// //         printf(" value are not equal\n");
        
// //     }

// //     cmp(&x,&y);
// //     printf(" %d is x ,%d is y\n",x,y);
// //     return 0;
// // }
// // void cmp(int*a,int *b){
// //  *a=12;
// //  *b=12;                 // call by refrencence 
    
// //     printf("%d is the a,%d is the b\n",*a,*b);
// //     if(*a==*b){

// //     printf(" are equal \n");
// //     }
// //     else
// //     {
// //         printf(" value are not equal");
        
// //     }
// int a[100];
// int n,i;

// // this is comman statement for taking value of n meance size of arry
// printf(" entre your size of element ");   
// scanf("%d",&n);

// // loop is run unit the value n is stifhayed
// for(i=0;i<n;i++){
// printf(" enter %d index value",i);     // this part for taking the value 
//     scanf("%d",&a[i]);
// }

// for(i=0;i<n;i++){

// int *p=&a[i];
// int c=0;
//      if(*p%2==0){
//      printf("\n %d this value is even,at  %d index",*p,i);
//      c++;
// }else{
//  printf("\n %d this value is odd,at  %d index",*p,i);   
// }


// }

// }

/* this part of program find  highest  number form the  given */
#include<stdio.h>

void max(int *ptr,int n);

int main(){

int arr[100];
 int *ptr=arr;
int n,i;
printf("entre your size of array");
scanf("%d",&n);
for(i=0;i<n;i++){
printf(" enter your %d index value ",i);
scanf("%d",(ptr+i));

}
 max(ptr,n);

 return 0;
}
void max(int *ptr,int n){

    int m=0;
    int i;
    for(i=0;i<n;i++){

        if((*(ptr+i)<m)){
            m=(*(ptr+i));
        }
    }
    printf(" %d is the maxium given number ",m);
}
