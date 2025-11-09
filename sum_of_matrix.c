#include<stdio.h>

int main(){

int r1,r2,c1,c2,i,j;
int a[10][10],b[10][10],c[10][10];


printf(" entre your first martrix row element ");
scanf("%d",&r1);
printf(" entre your first martrix column element ");
scanf("%d",&r2);
printf(" entre your second martrix row element ");
scanf("%d",&c1);
printf(" entre your second martrix column element ");
scanf("%d",&c2);

if(r1!=r2&&c1!=c2){


    printf(" addition  is not possiable becuse the both matrix order is not same ");
}
else{
printf(" entre your first matrix element ");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
printf("[%d][%d] = ",i,j+1);
scanf(" %d ",&a[i][j]);
}
printf("\n");
}


printf(" entre your second matrix element ");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){

printf("[%d][%d] = ",i,j+1);
scanf(" %d ",&b[i][j]);
}
printf("\n");
}


printf(" first matrix element \n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){

printf(" %d ",a[i][j]);
}
printf("\n");
}


printf(" second  matrix element \n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){

printf(" %d ",b[i][j]);
}
printf("\n");
}

printf(" the additionof twon matrice is \n");

for(i=0;i<r1;i++){
for(j=0;j<c2;j++){

printf(" %d ",c[i][j]=a[i][j]+b[i][j]);
}
printf("\n");
}

}
return 0;
}