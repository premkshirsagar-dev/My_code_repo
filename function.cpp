#include<iostream>

using namespace std;

int add(int a,int b);

int main(){

 int sum=0;
int x=10,y=12;

 sum=add(x,y);
 cout<<"sum of given nuber is "<<sum << endl<<add(x,y);

    return 0;
}

int add(int a,int b){

    return a+b;
}
