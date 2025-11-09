#include<stdio.h>
int main(){

    FILE*fptr=NULL;
    int i,n;
    // int a,b;
    // // printf(" entre value of a and to print into file ");
    // // scanf("%d%d",&a,&b);

    // // fprintf(fptr,"%d,%d",a,b);

    // fptr=fopen("sum","r");

    

    // fscanf(fptr,"%d",&a);
    // fscanf(fptr,"%d",&b);
    // fclose(fptr);

    // fptr=fopen("sum","w");

    // int sum=a+b;
    // fprintf(fptr,"%d",sum);
    // fclose(fptr);


    int arr[10];
     int sum =0;

    printf(" enter number of element that you want to assecc");
    scanf("%d",&n);
fptr=fopen("sum","r");
    for(i=0;i<n;i++){
        fscanf(fptr,"%d",&arr[i]);
    }
    fclose(fptr);

fptr=fopen("sum","w");

    for(i=0;i<n;i++){
        sum=sum+arr[i];

    }
            fprintf(fptr,"%d",sum);

    fclose(fptr);
    return 0;
}