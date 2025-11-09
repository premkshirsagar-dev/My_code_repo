/* this program for finding the sum of total sold items by four salce girls and print their items value
  and greand total of all items that is sold by all selce girls*/

  #include<stdio.h>
  int main(){

    int value[4][3];
    int i,j;
                           
    int grandtotal=0;
    int totalsale=0;

    for(i=0;i<4;i++){              // this pART IS use for read the array element 
        for(j=0;j<3;j++){              

            printf("sold by %d salcegirl %d item value",i+1,j+1);
            scanf("%d",&value[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<4;i++){          //this part is compute the total value of items that is sold by each salesgirl
        int totalsale=0;
        for(j=0;j<3;j++){
         totalsale=totalsale+value[i][j];
        } 
        printf("\n%d is the total items  value  which is sold by %d sales girl\n",totalsale,i+1); 

    }    for(i=0;i<3;i++){
         int eachitem=0;
             for(j=0;j<4;j++){
                eachitem+=value[j][i];
              }

         printf("\n%d is the valu of %d item sold by all girl\n",eachitem,i+1);

    }
        for(i=0;i<4;i++){
            for(j=0;j<3;j++){ //this part is use for find the grand total of all sold items value by each salce girl

                grandtotal+=value[i][j];
            }
        }
          printf("\n%d is the grand total of all sold items value ",grandtotal);
  return 0;
  }