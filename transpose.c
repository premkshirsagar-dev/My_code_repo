#include<stdio.h>

int main(){

//     int m1[10][10],trans[10][10];
//     int i,j,c,r,n;

//     printf(" enter the size row ");
//     scanf("%d",&r);
//     printf("entre the size of column element ");
//     scanf("%d",&c);


//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//              printf("entre [%d][%d]",i+1,j+1);
//             scanf("%d",&m1[i][j]);

//         }
//     }
//  printf(" fgiven matrix elements\n");

//     for(i=0;i<r;i++){
//         // printf("entre [%d][%d]",i+1,j+1);
//         for(j=0;j<c;j++){
//             printf("%d\t",m1[i][j]);

//         }
//         printf("\n");
//     }

//      for(i=0;i<r;i++){
//         // printf("entre [%d][%d]",i+1,j+1);
//         for(j=0;j<c;j++){
//            trans[i][j]=m1[j][i];

//         }
    
//     }
//     printf(" Transpocse of given matrix element\n ");
//      for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//          printf("%d\t",trans[i][j]);
//         }
//          printf("\n");
//     }
//     return 0;

/* mutiplication of matrix */
printf(" this the multiplication of given matrix element ");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        m3[i][j]=0;
        for(k=0;k<r2;k++){
            m3[i][j]+=m1[i][k]*m2[k][j];
        
    }
}
printf("\n");


}