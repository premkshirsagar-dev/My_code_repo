#include<stdio.h>
 
 void lefhangle();
 void rightangle();
 void pearamid();
 void downparamid();
 void burfhi();

 int main(){

int choice;
printf(" entre your choice  ");
scanf("%d",&choice);

if(choice ==1){
   
lefhangle();

}
else if(choice==2){
    
    rightangle();

}
else if (choice ==3){
   
pearamid();
}
else if(choice==4){
    
 downparamid();
    
}else if (choice==5){
   
   burfhi();
 
}else{
    printf(" not valid value");
}
return 0;
 }

void lefhangle(){
int i,j;
 int n;
     printf(" enter your number of line ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        
        }
        printf("\n");
    }

}
 void rightangle(){
 int n;
     printf(" enter your number of line ");
    scanf("%d",&n);
int i,j,k; //here j is handling space 
    for(i=1;i<=n;i++){
        for(j=1;j<=n-1;j++){

                printf(" ");
        }  
         for(k=1;k<=i;k++){ 
         
                  printf("* ");
            }
        printf("\n");
    }
 }
 void pearamid(){
    int i,j,k;
     int n;
     printf(" enter your number of line ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");

        }
          for(k=1;k<=(2*i-1);k++){

            printf("*");

          }
          printf("\n");
    }
    
 }
 void downparamid(){
     int n;
     printf(" enter your number of line ");
    scanf("%d",&n);
    int i,j,k;
    for(i=n;i>=1;i--){

        for(j=i;j<=n;j++){
            printf(" ");

        }
          for(k=1;k<=2*i-1;k++){
            printf("*");

          }
           printf("\n");
    }
   
 }
 void burfhi(){
 int n;
     printf(" enter your number of line ");
    scanf("%d",&n);
int i,j,k;

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");

        }
          for(k=1;k<=2*i-1;k++){

            printf("*");

          }
          printf("\n");
    }
    for(i=n-1;i>=1;i--){

        for(j=i;j<=n;j++){
            printf(" ");

        }
          for(k=1;k<=2*i-1;k++){
            printf("*");

          }
          printf("\n");
    }
   
 }
 

 