#include<stdio.h>
void read( int a[], int n);
int main(){

int n,a[100];
printf("Entre the size of array element ");
scanf("%d",&n);
    read(a,n); // funcation calling 
return 0;
}
// this funcation will find the at what position the number is occurras and how many times  in array
void read(int a[],int n){
int i;
int c=0;
int serach=0,found=0;

     printf(" Enter %d element\n",n);
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }

    printf(" Entre your element that you want to serach ");
    printf("\n");
    scanf("%d",&serach);

    for( int i=0;i<n;i++){
        if(a[i]==serach){
            printf("Given %d element at %d :position\n",serach,i+1);
            c++;
            found=1;  // the value of found is still 1 ,till loop is run 
         }
         else{
            found=0;
         }
    }
     // if the element is not found 
      if(found!=0){
             printf("%d is not found in array .\n",serach);
       }
       else{
         printf("\n%d : Element is occurs element %d time\n",serach,c);

       }
}