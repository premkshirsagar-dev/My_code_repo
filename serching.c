#include<stdio.h>

int main(){
    int arr[100];
    int i,sereach=0;
    int c,found=0,n;
    printf(" enter your size of array elemrnt ");
    scanf("%d",&n);

    printf("  enter %d element ",n);

for(i=0;i<n;i++){

    scanf("%d",&arr[i]);
}

printf(" enter the element that you wantb to sereach ");
scanf("%d",&sereach);

for(i=0;i<n;i++){

    if(arr[i]==sereach){
    
    printf("%d repert at %d position\n ",sereach,i+1);
    c++;
    found=1;
}
}
if(found==1){
    printf(" %d elenment ocuurance %d time ",sereach ,c);
}
if(!found ){
    printf(" %d  is not exits in given arry elements ",c);
}
}