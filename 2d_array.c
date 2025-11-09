#include<stdio.h>
int main (){


    int arr[10][10],i,j,n,n1;
    

    printf(" entre numbre of  total student ");
    scanf("%d",&n);
    printf(" entre the number of  total subject ");
    scanf("%d",&n1);

    // for(i=0;i<n;i++){

    //     for(j=0;j<n1;j++){
    //        printf("[%d][%d]=",i,j+1);
    //         scanf("%d",&arr[i][j]);
    //     }
    //     printf("\n");
    // }


    printf(" entre your entry \n");
for(i=0;i<n;i++){

for(j=0;j<n1;j++){
printf("  enter your %d student of  %d subject marke \n",i+1,j+1); /// 2d array concepte clear

printf("[%d][%d] = ",i,j+1);
scanf("%d",&arr[i][j]);
}
printf("\n");
}

for(i=0;i<n;i++){

     for(j=0;j<n1;j++){
printf("your %d student %d subject marke is =%d\n",i+1,j+1,arr[i][j]);
   
}
printf("\n\n");
}
 return 0;   
}