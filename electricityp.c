#include<stdio.h>



struct person{
    float unit;
    char namr[100];
};

int main(){

//  int users[100];
//  int n,i;
//  char name[50];

struct preson p[100];
 float units,amount=0.0,charge=0.0;
 int i,n;
printf(" enter the total  numbers of users  ");
scanf("%d",&n);

for( i=0;i<=n;i++){



//     if(unit<200){

//         amount=(unit*0.80);
//     }
//     else if(unit >= 200  &&  unit <= 300){

//         amount =(160+(unit-200)*0.80);
//     }
    
//     else{
//         amount=(160+90+(unit-300)*1.0);
//     }

//     if(amount<100){
//         amount=100;

//     }

//     if( amount>=400){
//         charge=(amount*0.15);
//         amount=amount+charge;
//     }

printf(" entre %d preson info and unit\n ",i+1);
printf(" entre %d preson unit\n ",i+1);
scanf("%f",&p[i].unit);
printf(" entre %d preson name\n ",i+1);
scanf("%f",p[i].name);












 if (units < 200) {                                  // first 200 unite charge is 160
        amount = (units * 0.80); 
                                                  
    } else if (units>=200 && units<= 300) {      //  amount =(200*0.80)+((unit-200)*0.90); then beyond  200 to 300 charge is 0.90 pre unite
    amount= 160 + ((units - 200) * 0.90);        // but first add 1-200 unite charge  which is 160 and then add remain unite amount 0.90 pre unite 
                                                          
    } else {
        amount= 160 + 90 + ((units- 300) * 1.00);        // here 160 is first 200 unite charge and 90 is the next 200 to 300 unite  amount is 100*0.90=90
                                                          // and then add remain unite charage beyoned 300 unite for 1 rupess pre unite  then amd all charge 
    }
    // Ensure minimum meter charge
    if (amount < 100) {
        amount = 100;
    }
    // Add surcharge if total exceeds ₹400
   
}



for( int i=0;i<n;i++){
     if (amount> 400) {
        charge= amount * 0.15;
        amount=amount+charge;
  
 
    printf("\n electricity bill is %d preson\n",i+1);
    printf("Additional subcharge is:  becuse your total amount is >400\n " );
    printf("Total Charge is : ₹ %f for Consumed %d Unit  \n",amount, units);

    }

    printf("\n electricity bill is %d preson\n",i+1);
    printf("name :%s \n",p[i].name);
   printf("%d is the total cunsum unit by %d user  \n and total amount is %f",i+1,amount);
}
    return 0;

}

