#include<stdio.h>
#include<string.h>

struct vagitable {

    int  type ;
    char name[100];   // structure definition
    float price;

};

int main(){
int i,n;
    struct vagitable va[100];
printf("enter your limite of sabjee");
scanf("%d",&n);
for(i=0;i<n;i++){

 printf(" enter %d sabji type",i+1);
scanf("%d",&va[i].type);

 printf(" enter %d sabji name ",i+1);
scanf("%s",&va[i].name);

 printf(" enter %d sabji price",i+1);
scanf("%f",&va[i].price);

}

for(i=0;i<n;i++){
    struct vagitable *ptr=&va[i];

    printf("\n%d is the the type of vagitable",(*ptr).type);
    printf("\n%d is the the type of vagitable",ptr->type); 

    printf("\n%s is the  name ",(*ptr).name);
    printf("\n%s is the name ",ptr->name);

    printf("\n%f is the price of vagitable ",(*ptr).price);
    printf("\n%f is the price of vagitable ",ptr->price);
}
return 0;
}