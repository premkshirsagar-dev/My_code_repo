#include <stdio.h>

float presentage(float ,float,float,float  );
int main (){
float pc,math,fun,c,total,pre=0.0;

printf("entre your  marke of pc ");
scanf("%f",&pc);
printf("entre your  marke of  math  ");
scanf("%f",&math);
printf("entre your  marke of  fundamental ");
scanf("%f",&fun);
printf("entre your  obtained c subjects ");
scanf("%f",&c);

 total=(pc+math+fun+c);

if(total<80.0){
  printf("%.2f is the sum of total  subject number\n ",total);
  float pre=presentage(pc,math,fun,c);

   if(pre<100){
printf(" %.2f is presentage of total subjects marke  ",pre);
}
else{
    printf(" it is techniquly not possibale ");
}

  }
else{
    printf(" it is not possiable becuse your is above the total marke");
}

 
    return 0;
}

 float presentage(float x,float y, float z,float n){
float pre,total;
total=(x+y+z+n);
return pre=(((total)/80)*100);
 }