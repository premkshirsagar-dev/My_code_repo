#include<stdio.h>
#include<string.h>

struct student{

    int number;
    char name[100];
    float cgpa;

};


int main(){

    int i,n;
    struct student s1[100];

    printf(" entre  your size of array  size");
    scanf("%d",&n);

    for(i=0;i<n;i++){
 struct student *stu=&s1[i];

 printf(" enter %d  student  number ",i);  // this is the run time initilization that`s  why we are 
scanf("%d",stu->number);

printf("enter the name of %d student ",i);
 scanf("%s",stu->name);

 printf(" enter  the %d student cgpa",i);
 scanf("%f",stu->cgpa);

    } 

   for(i=0;i<n;i++){
    struct student *stu=&s1[i];

    printf(" %d student number is %d",i,stu->number);
    printf(" %d student name  is %d",i,stu->name);
    printf(" %d student cgpa is %d",i,stu->cgpa);

   }

return 0;


}