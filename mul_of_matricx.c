#include<stdio.h>

int main(){

int r1,r2,c1,c2,i,j,k;
int a[10][10],b[10][10],c[10][10];


printf(" entre your first martrix row element ");
scanf("%d",&r1);
printf(" entre your first martrix column element ");
scanf("%d",&r2);
printf(" entre your second martrix row element ");
scanf("%d",&c1);
printf(" entre your second martrix column element ");
scanf("%d",&c2);

if(c1!=r2){


    printf(" multiplication   is not possiable becuse the both matrix order is not same ");
}
else{
printf(" entre your first matrix element ");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
printf("[%d][%d]=",i,j+1);
scanf("%d",&a[i][j]);
}
printf("\n");
}


printf(" entre your second matrix element ");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){

printf("[%d][%d]= ",i,j+1);
scanf("%d",&b[i][j]);
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

printf(" the amultiplecation of two matrice is \n");

for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
    c[i][j]=0;

    for(k=0;k<c1;k++){  
    c[i][j]+=a[i][k]*b[k][j];
    }
}
printf("\n");
}

// printf(" this the multiplication of given matrix element ");
// for(i=0;i<r1;i++){
//     for(j=0;j<c2;j++){
//         m3[i][j]=0;
//         for(k=0;k<r2;k++){
//             m3[i][j]+=m1[i][k]*m2[k][j];
        
//     }
// }
// printf("\n");

for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
   

printf("%d\t",c[i][j]);
    }

printf("\n");

}

}

return 0;
}