#include<stdio.h>
int main(){
    int r,c,i,j;
    int m1[100][100],tanspose[100][100];

    printf(" enter your size of first matrix element of rows");
    scanf("%d",&r);
    printf(" enter your size of first matrix element of column");
    scanf("%d",&c);
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){                    // this  part for   read the matrix element 
            printf(" [%d][%d]= ",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }
    printf(" Given matrix element \n");     // this part use for print given matrix element 
     for(i=0;i<r;i++){
           for(j=0;j<c;j++){
               printf("%d\t",m1[i][j]);
            }  
            printf("\n");
     }
for(i=0;i<r;i++){               // this part is convert rows into column and column into rows
    for(j=0;j<c;j++){
     printf("%d\t",tanspose[i][j]=m1[j][i]);
    }
    printf("\n");
}

return 0;
}
