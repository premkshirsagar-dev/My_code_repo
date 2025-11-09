#include<stdio.h>
int main(){
    FILE*fptr=NULL;
    fptr=fopen("odd.txt","w");
    int n;
    printf(" entre your value n :");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\n",i);
        }
    }
    fclose(fptr);
    return 0;
}