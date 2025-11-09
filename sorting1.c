#include<stdio.h>
int main(){

    int arr[100];
    int n,i,j,t;
    printf(" enter the size of arry ");
    scanf("%d",&n);

for(i=0;i<n;i++){
    scanf("%d\n",&arr[i]);
}

printf("befor  bubble sorting ");
for(i=0;i<n;i++){

    printf("%d\n",arr[i]);

}
printf(" after bubble sorting ");

for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){

 if(arr[j]>arr[j+1]){

    t=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=t;
   }
   
 }
    // printf("\n");
}
for(i=0;i<n;i++){
printf("%d\n",arr[i]);
}

printf("\n");


for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){

            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;

        }
    }
}
for(i=0;i<n;i++){
printf("%d\n",arr[i]);
}
return 0;
}