#include<iostream>
#include<string>
using namespace std;

struct employe{
    int id;
    float salary;
    string name;
};

int main(){

employe e1[10];
int n,i;
cout<<"Enter the number of employee :  ";
cin>>n;
cout<<endl;

for(i=0;i<n;i++){

    cout<<"Enter the Id of :"<<  i+1 <<" employee ";
    cin>>e1[i].id;
    cout<<"Enter the name OF :"<< i+1 <<" employee ";
    cin>>e1[i].name;
    cout<<"Enter the saLary of :"<< i+1 <<" employee ";
    cin>>e1[i].salary;
   cout<<endl;

}

for(i=0;i<n;i++){

    cout<<"The Id of :"<<  i+1 <<" employee is "<<e1[i].id<<endl;
    cout<<"The name OF :"<< i+1 <<" employee  is "<<e1[i].name<<endl;
    cout<<"The saLary of :"<< i+1 <<" employee is "<<e1[i].salary<<endl;
     cout<<endl;

}

return 0;
}
