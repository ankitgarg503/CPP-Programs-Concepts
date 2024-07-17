#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int age;
    
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    void show(void){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
    }
    Employee operator+(Employee e2){
        Employee e3;
        e3.name=e2.name+name;
        e3.age=e2.age+age;
        return e3;
    }
    Employee operator++(int age){
        Employee e4;
        e4.name="Sahana";
        e4.age=(++age)++;
        return e4;
    }

};

int main(){
    Employee e1;
    e1.setName("John");
    e1.setAge(12);
    e1.show();
    Employee e2;
    e2.setName("JohnSina");
    e2.setAge(42);
    e2.show();
    // Employee e3=e1.operator+(e2);
    Employee e3=e1+e2;
    e3.show();
    Employee e4=e4.operator++(e1.age);
    e4.show();
    return 0;
}