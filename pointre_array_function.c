#include<stdio.h>

void phw(int*ptr,int n);
int main(){

    int n,i;
    int ptr[100];
    printf(" enter your size of array");
    scanf("%d",&n);
phw( ptr,n);
// for(i=0;i<n;i++){

//     printf("%d index value ",i);
//     scanf("%d",&ptr[i]);
// }
return 0;
}
 void phw(int* ptr,int n){
int i;
for(i=0;i<n;i++){
    
    printf(" hello world \t");
}

}
