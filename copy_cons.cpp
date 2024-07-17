#include<iostream>
using namespace std;

class Employee{
    int id;
    float salary;
    public:
     Employee(){}
    Employee(int uid, float sal){
        id=uid;
        salary=sal;
    }
    Employee(Employee &s){
      id=s.id;
      salary=s.salary;
    }
    void display(){
        cout<<"Employee id="<<id<<"\nEmployee salary="<<salary<<endl;
    }

};



int main(){
    Employee e1,e2,e3(1009,350000);   
    e3.display();
     Employee e4=e3;
    // Employee e4(e3);
    e4.display();
    return 0;
}