#include<stdio.h>
#include<stdlib.h>

int main (){

FILE*fp=NULL;

    int a[100];
    int n,i;

printf(" enter your lanth of array");
scanf("%d",&n);

// file opening 
fp=fopen("1.txt","w");
if(fp==NULL){

    printf(" not a vaild file ");
    exit(1);
}

for(i=0;i<n;i++){

    printf("enter %d element: ",i);
    scanf("%d",&a[i]);
}


for(i=0;i<n;i++){
fprintf(fp,"\n%d",a[i]);
}

fclose(fp);
return 0;
}