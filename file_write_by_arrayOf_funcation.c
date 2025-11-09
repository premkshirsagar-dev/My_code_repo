#include<stdio.h>
#include<stdlib.h>

void file(int a[],int b[]);

int main(){

    int a[100];
    int b[100];
for( int i=0;i<5;i++){
    printf("%d index valude  of a",i+1);
    scanf("%d",&a[i]);
}
for( int i=0;i<5;i++){
    printf("%d index valude of b ",i+1);
    scanf("%d",&b[i]);
}
 
        file(a,b);
        
    return 0;
}
void file(int x[],int y[]){

for(int i=0;i<5;i++){

FILE*fptr=NULL;


fptr=fopen("1.txt","a");
if(fptr==NULL)
{
printf("file is not exist ");
exit(1);

}

fprintf(fptr,"\n%d",x[i]);
fclose(fptr);
}

for(int i=0;i<5;i++){

FILE*fptr=NULL;


fptr=fopen("1.txt","a");
if(fptr==NULL)
{
printf("file is not exist ");
exit(1);

}

fprintf(fptr,"\n%d",y[i]);
fclose(fptr);
}

}


// #include<stdio.h>
// #include<stdlib.h>

// void file(int *,int *);          /* same we can use alos pointre winth in function as parameter */


// int main(){

//     int a[100];
//     int b[100];
// for( int i=0;i<5;i++){
//     printf("%d index valude  of a",i+1);
//     scanf("%d",&a[i]);
// }
// for( int i=0;i<5;i++){
//     printf("%d index valude of b ",i+1);
//     scanf("%d",&b[i]);
// }
 
//         file(&a,&b);
        
//     return 0;
// }
// void file(int *x,int *y){

// for(int i=0;i<5;i++){

// FILE*fptr=NULL;


// fptr=fopen("1.txt","a");
// if(fptr==NULL)
// {
// printf("file is not exist ");
// exit(1);

// }

// fprintf(fptr,"\n%d",x[i]);
// fclose(fptr);
// }

// for(int i=0;i<5;i++){

// FILE*fptr=NULL;


// fptr=fopen("1.txt","a");
// if(fptr==NULL)
// {
// printf("file is not exist ");
// exit(1);

// }

// fprintf(fptr,"\n%d",y[i]);
// fclose(fptr);
// }

// }