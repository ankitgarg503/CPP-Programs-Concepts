#include<iostream>
#include<string>
using namespace std;

class Employee{
    int x=5;
    int m=5;
    int &y=x;

   
    int id;
    float salary;
    string name;
    public:
    void setData(int i,float s,string n){
        id=i;
        salary=s;
        name=n;
    }
    void display(){
        cout<<"Employee id="<<id<<endl;
        cout<<"Employee Salary="<<salary<<endl;
        cout<<"Employee name="<<name<<endl;
        cout<<++y<<endl;
    }
};



int main(){
    // Employee e1;
    Employee *ptr=new Employee;
    // ptr=&e1;
    // (*ptr).setData(22,340000);
    // (*ptr).display();

    ptr->setData(22,340000,"Ankit Garg");
    ptr->display();

    cout<<"Making Object using new operator"<<endl;
    return 0;
}