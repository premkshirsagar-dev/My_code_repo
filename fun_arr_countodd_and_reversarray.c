#include<stdio.h>

int  countodd(int arr[],int n);
void  revers(int arr[],int n); 
void printarr(int arr[],int n);

int main(){

    int i,n; 
    int arr[100];
    printf(" entre your size of array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf(" entre %d  number ",i+1);
        scanf("%d",&arr[i]);
    }   

    revers(arr,n);
    printarr(arr,n);

    int c =countodd( arr, n);
    printf(" %d is total odd number ",c);

    return 0;

    }

void revers(int arr[],int n){

   int tem1[100],tem2[100],i;
   for(i=0;i<n/2;i++){

      tem1[i]=arr[i];
      tem2[i]=arr[n-i-1];
     arr[i]=tem2[i];
     arr[n-i-1]=tem1[i];
   }
 
}

void printarr( int arr[],int n){
int i;
   for(i=0;i<n;i++){

      printf("%d\n",arr[i]);
   }
}


 int  countodd(int arr[],int n){
    int i;
int count=0;
for(i=0;i<n;i++){
   if(arr[i]%2!=0){
count++;

   }
}
return count;
}