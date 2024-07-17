#include<iostream>
using namespace std;

struct Employee{
    public:
    int id;
    float salary;
    void getdata(int uid,float sal){
        uid=id;
        sal=salary;
    }
    void display(){
        cout<<"UID="<<id<<endl;
        cout<<"Salary="<<salary;

    }
};

  int  main(){
     Employee e1;
     e1.id=1009;
     e1.salary=300000.45;
     e1.getdata(e1.id=1023,e1.salary=300000.45);
    e1.display();
    
    return 0;
}