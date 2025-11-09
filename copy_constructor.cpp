#include<iostream>
#include<string>
using namespace std;

class teacher {

    public:
    int id;
    string subject;   // proprtise and /attribute 


void setter(int id ,string subject ){

    this->id=id;
    this->subject=subject ;
}
 void getter(){

    cout<<"Id="<<id<<endl;
    cout<<"subject="<<subject<<endl;
 }

 teacher(teacher&t3){

    this->id=t3.id; 
    this->subject=t3.subject;
    
 }


};

int main(){

teacher t1; // declaration of object 
t1.setter(1,"data science"); // assigning the value to the of class 
t1.getter();                   // this funcation gets /print  the value 
teacher t2(t1);              //  default copy constructor 
t2.getter();                   // this funcation print simillely to t1

return 0;
}