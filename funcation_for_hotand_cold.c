#include<stdio.h>
void hot();
void cold();
void normaltem();

int main(){

float tem;
printf(" entre your  tempretue in celsious ");
scanf("%f",&tem);
if(tem<23.0) {

cold();
}else if(tem>=23.0&&tem<=40.0){

normaltem();

}else{

    hot();
}
return 0;
}

 void cold(){

    printf(" wheater is cold ");
}
 void hot(){

    printf(" wheather is hot");
}
  void normaltem(){

    printf(" wheather is normal ");
}
