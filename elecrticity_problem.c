#include <stdio.h>

int main() {

    char name[50];
    int units;
    float amount = 0, charge = 0;

    // Input user details
    printf("Enter the name of the user: ");
    scanf("%s", name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate charges
    if (units < 200) {                                  // first 200 unite charge is 160
        amount = (units * 0.80); 
                                                  
    } else if (units>=200 && units <= 300) {      //  amount =(200*0.80)+((unit-200)*0.90); then beyond  200 to 300 charge is 0.90 pre unite
    amount= 160 + ((units - 200) * 0.90);        // but first add 1-200 unite charge  which is 160 and then add remain unite amount 0.90 pre unite 
                                                          
    } else {
        amount = 160 + 90 + ((units - 300) * 1.00);        // here 160 is first 200 unite charge and 90 is the next 200 to 300 unite  amount is 100*0.90=90
                                                          // and then add remain unite charage beyoned 300 unite for 1 rupess pre unite  then amd all charge 
    }
    // Ensure minimum meter charge
    if (amount < 100) {
        amount  = 100;
    }
    // Add surcharge if total exceeds ₹400
    if (amount > 400) {
         float charage = amount * 0.15;
        amount =amount+charge;
  
 
    printf("Additional subcharge is: %f becuse your total amount is >400\n ", charage );
    printf("Total Charge is : ₹ %f for Consumed %d Unit  ",amount, units);

    }

    // Display the result
    printf("\nElectricity Bill\n");
    printf("Name: %s\n", name);
    printf("Total Charge is : ₹ %f for Consumed %d Unit  ",amount, units);

return 0;
}