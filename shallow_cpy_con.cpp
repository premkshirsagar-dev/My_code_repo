#include<iostream>
using namespace std;
class student_class
{
public:
   string name ;      // statically allocated
   string depl;

   student_class(string name ,string depl){

    this->name=name;
    this->depl=depl;

   }
   void getinfo(){

    cout<<"name "<<name<<endl;
    cout<<"depl "<<depl<<endl;
   }
   
   student_class(student_class&t1){
    this->name=t1.name;
    this->depl=t1.depl;
   }
   void setter()
};

int main(){

    student_class s1("prathamesh","c++");
    s1.getinfo();
    student_class s2(s1);
    s2.getinfo();
    
    return 0;
}
