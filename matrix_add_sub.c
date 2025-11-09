#include<stdio.h>

int main(){

int r1,r2,c1,c2,i,j,k;
int a[10][10],b[10][10],c[10][10];
int choice;
printf("enter your choice \n1 for addition\n2 for multiplication ");
scanf("%d",&choice);


printf(" entre your first martrix row element ");
scanf("%d",&r1);
printf(" entre your first martrix column element ");
scanf("%d",&r2);
printf(" entre your second martrix row element ");
scanf("%d",&c1);
printf(" entre your second martrix column element ");
scanf("%d",&c2);

if(r1==r2&&c1==c2){


printf(" entre your first matrix element ");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
printf("[%d][%d] = ",i+1,j+1);  
scanf(" %d ",&a[i][j]);
}
printf("\n");
}


printf(" entre your second matrix element ");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){

printf("[%d][%d] = ",i+1,j+1);
scanf(" %d ",&b[i][j]);
}
printf("\n");
}


printf(" first matrix element \n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){

printf(" %d\t",a[i][j]);
}
printf("\n");
}


printf(" second  matrix element \n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){

printf(" %d\t ",b[i][j]);
}
printf("\n");
}
if(choice==1){
printf(" the addition of two matrice is \n");

for(i=0;i<r1;i++){
for(j=0;j<c2;j++){

   printf("%d\t",c[i][j]=a[i][j]+b[i][j]);
    }
printf("\n");
}

}
if(choice==2){
printf(" the addition of two matrice is \n");

for(i=0;i<r1;i++){
for(j=0;j<c2;j++){

   printf("%d\t",c[i][j]=a[i][j]-b[i][j]);
    }
printf("\n");
}

}

}else{
      printf(" martrix  opretation is not possiable becuse the both matrix order is not same ");
}

return 0;
}