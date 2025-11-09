#include<stdio.h>

int main(){

int r1,r2,c1,c2;
int a[10][10],b[10][10],c[10][10],i,j,k;


printf(" enter your number of rows  of first matrix");
scanf("%d",&r1);
printf(" enter your number of column  of first matrix");
scanf("%d",&c1);
printf(" enter your number of rows  of second  matrix");
scanf("%d",&r2);
printf(" enter your number of column  of  second matrix");
scanf("%d",&c2);


if(c1!=r2){

    printf(" Addition is not possibale becuse the order of rows and cloumn are not same ");

}

else{

    printf(" entre your first matrix element ");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("[%d][%d]= ",i,i+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf(" entre your second  matrix element ");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("[%d][%d]= ",i,i+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf(" your first matrix element\n ");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
           // printf("[%d][%d]= "i,i+1);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf(" your second  matrix element \n");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
           // printf("[%d][%d]= "i,i+1);
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
   
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
          
           for(k=0;k<r2;k++){
           c[i][j]+=a[i][k]*b[k][j];
        }
    }
}
printf("    multiple matrix element \n");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
          
          
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}
return 0;



}