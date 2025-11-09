#include<stdio.h>

// void printfarray( int arr[],int n);

// int main (){
// int arr[100];
// int n,i;
// printf(" entre your size of array");
// scanf("%d",&n);

// printf(" print your arry element");
// for(i=0;i<n;i++){

//     scanf("%d",&arr[i]);
// }


//  printfarray( arr,n ); //  argument / actual prametre
//                        // only pass the argument don`t need to pass data types

// return 0;
// }

// void printfarray( int arr[], int n ) // defination//prameters //formul perametres
//  {
// for( int i=0;i<n;i++){
// printf(" \ngiven array element %d",arr[i]);

// }

//  }

void printfarray( int *arr,int n);   // we can use arrys like pointer 
                                   // *arr/arr[];
int main (){
    
int arr[100];
int n,i;
printf(" entre your size of array");
scanf("%d",&n);


for(i=0;i<n;i++){
printf(" entre your  %d arry element",i);
    scanf("%d",(arr+i));
}


 printfarray( arr,n ); //  argument / actual prametre
                       // onlyn pass the argument don`t need to pass data types and *arr

return 0;
}

void printfarray( int *arr, int n ) // defination//prameters //formul perametres
 {  
for( int i=0;i<n;i++){                                  // *(arr+i)/arr[i],
printf(" \n %d:given array element = %d",i,*(arr+i));   // wen can use both for output  and input also

}

 }
