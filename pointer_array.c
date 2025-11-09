#include<stdio.h>
int main(){

int aadhar[100];
int i,n;
printf(" entr your size of array");
scanf("%d",&n);

// input
int *ptr;
ptr=aadhar;   // this is the  pointer value initialization  // in both cases we can use (ptr+i) for scaning 

for(i=0;i<n;i++){

     printf(" %d : index ",i);
    //  scanf("%d",(ptr+i));  // we can also use at this place is aadhar[i];
    scanf("%d",&aadhar[i]);
}

//output
for(i=0;i<n;i++){

     printf("%d: index is =%d  ",i,*(ptr+i));
     printf("\n");
     
   
}
for(i=0;i<n;i++){

  printf("\n%d: index is =%d  ",i,aadhar[i]);
}
return 0;

}
