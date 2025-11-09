#include<stdio.h>

float squareArea(float side);         // declearation 
float circleArea(float redious);
float trangulre (float lanth ,float weitdh);     // here value is passed is calle arrgumrnt  
int main (){
    
 float  lanth ,weitdh;
 printf("%f is a area of tranguler ",trangulre (lanth ,weitdh));


// float side;
// printf("%f is a area of square ",squareArea( side)); 

return 0;

}

float squareArea(float side){

printf(" entre your side ");
scanf("%f",&side);

return side*side;


}        // definition 
float circleArea(float redious){


    // printf(" entre your radiuos ");
    // scanf("%f",&redious);
     return 3.14159*(redious*redious);
}
float trangulre (float lanth ,float weidht){

    printf(" entre your lanth and height ");
    scanf("%f %f",&lanth,&weidht);
     return lanth*weidht;

}