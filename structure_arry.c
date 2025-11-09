#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[100];
    float marke;
};
int main(){


struct student s1[100];
int n,i;

printf(" enter your numbers of student contities");
scanf("%d",&n);

for(i=0;i<n;i++){

    printf(" enter %d student info \n roll n,name and marke",i+1);
    scanf("%d %s %f",&s1[i].roll,&s1[i].name,&s1[i].marke);
}
for(i=0;i<n;i++){

    printf("  %d student info \n roll n,name and marke",i+1);
    printf("%d\n%s\n%f\n",s1[i].roll,s1[i].name,s1[i].marke);
}
  float   hightest=0;
for(i=0;i<n;i++){

  
    if(s1[i].marke>hightest){
   hightest= s1[i].marke;
   printf("\n%s is the name of hightest makre\n",s1[i].name);
    }

}
printf("%f is the  hightest marke ",hightest);

return 0;
}