#include<stdio.h>
int main(){
    char name[100];
    float unit,total_pesa=0.0,subcharge=0.0;

    printf("entre your name of user :  ");
    gets(name);
    printf(" entre your total consume units");
    scanf("%f",&unit);

    if(unit>=0&&unit<=200){
        total_pesa =(unit*0.80);
    }
    else if (unit<=300){
   total_pesa=(unit*0.80)+(unit-200)*0.90;
    }

     else if (unit<=100){
        unit=100;
    }
  
    else if(unit>=300&&unit<=400){
        total_pesa=((unit*0.80)+((unit-200)*0.90)+((unit-300)*1.0));
     }
        else if(unit>=400){
         total_pesa=((unit*0.80)+((unit-200)*0.90)+((unit-300)*1.0));
           subcharge=total_pesa*0.15;
        total_pesa=total_pesa+subcharge;
    }
    else{

        printf(" not valid  unit reading ");
    }
    

   
    
    printf("\n ELECTRICITY BILL\n");
    printf(" %s is the name of user \n",name);

    printf("%f is the total unite consumtion\n",unit);
    printf("%d is the subchrge that is add for your unit is > 400 \n",subcharge);
    printf("total pesa which takes for elecricity is %f \n",total_pesa);
    return 0;
}