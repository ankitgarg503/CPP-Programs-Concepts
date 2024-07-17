#include<iostream>
#include <string>
using namespace std;
class Employee{
    int id;
    float salary;
    string s;
    public:
    void getId(void ){
        cout<<"Enter id of employee"<<endl;
        cin>>id;
        cout<<"Enter Salary of employee"<<endl;
        cin>>salary;
        cout<<"Enter name of employee"<<endl;
        cin>>s;
    }
    // void setId(int a,float b){
    //      id = a; salary = b; 
    // }
    void display(void ){
        cout<<"Employee id="<<id<<endl;
        cout<<"Employee Salary ="<<salary<<endl;
        cout<<"Employee Name ="<<s<<endl;
        cout<<"\n"<<endl;
    }

};

int main(){
    Employee e1[5];
    for (int  i = 0; i < 5; i++)
    {
        e1[i].getId();
        // e1[i].display();
    }
     for (int  i = 0; i < 5; i++)
    {
        // e1[i].getId();
        e1[i].display();
    }
    
    
    return 0;
}