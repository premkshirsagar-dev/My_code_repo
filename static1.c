#include<stdio.h>



int main (){
    static float num[100];
    int n,i;
    static float  max=0.0;
    printf(" ente your size of number ");
    scanf("%d",&n);
    for( i=0; i<n;i++){

        printf("enter your %d number |. ",i+1);
        scanf("%f",&num[i]);
    }
    for( i=0;i<n;i++){

if(num[i]>max){
    max=num[i];
printf(" max=%f\n",max);
}
    }

    printf("%f is the maximum number ",max);
    return 0;


}