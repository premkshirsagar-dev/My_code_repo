#include<stdio.h>

void sorting(int arr[],int n);

int main(){

    int arr[100],i,j,t,n;

    printf(" enter your size of numbers ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
sorting(arr,n);

return 0;
}
void sorting(int arr[],int n){
    int i,j,t;
    printf(" befor the sorting\n");
    
    for(i=0;i<n;i++){
    printf("%d\n",arr[i]);

}

printf(" after the sorting\n");

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

}
