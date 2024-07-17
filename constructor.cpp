#include<iostream>
using namespace std;
class Employee{
    
    int id;
    float salary;
    public:
    Employee(){
        int x=5;
        salary=345000;
        id=x;
        cout<<"Constrcutor called"<<endl;
        printf("This program is going to crate parametirzed constructor\n");

    }
    Employee(int eid, float sal){
        id=eid;
        salary=sal;
        printf("This program is going to crate parametirzed constructor\n");

    }
    void display(){

        cout<<"Employee id  "<<id<<endl;
        cout<<"Employee Salary  "<<salary<<endl;
    }

};

int main(){
    Employee e1(2,4),e2(3,4),e3,e4,e5;
    // e5=e3.display;
    e1.display();
    e2.display();
    return 0;
}