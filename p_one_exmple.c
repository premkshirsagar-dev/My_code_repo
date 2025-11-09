// #include<stdio.h>

// void print( int arr[],int n,int *ptr);
// int main(){

// int  n,i;
// int arr[100];

// printf(" entre your size of arr"); // size of arr
// scanf("%d",&n);

// int *ptr=arr;

// for(i=0;i<n;i++){
// printf(" enter your %d index value "i);  
// scanf("%d",(ptr+i));
// }

// print( arr[], n,*ptr);
// return 0;

// }
// void print( int arr[],int n,int *ptr){

// int i;
// for(i=0;i<n;i++){
//     printf("%d index`s value ",i);
//     printf("%d",*(ptr+1));
// }


// }

#include<stdio.h>

// void aadhar( int arr[],int n);
int main(){

int  n,evenc=0,oddc=0;
int arr[100];
 int *ptr=arr;

printf(" entre your size of arr"); // size of arr
scanf("%d",&n);


//input 
for( int i=0;i<n;i++){
printf(" enter your %d index value ",i);  
scanf("%d",(ptr+i));
}

//output
for( int i=0;i<n;i++){

    if(*(ptr+i)%2==0){

     printf("%d is the  even number \n",*(ptr+i));
     evenc++;

    }

    else{

     printf("%d is the  odd number \n",*(ptr+i));
     oddc++;

    }

}
printf("%d ,%d is total number of even or odd",evenc,oddc);

return 0;

}
