#include<iostream>
using namespace std;

class Employee{
    public:
    static string name;
     void nameOfEmployee(string name){
        this->name = name;
    }
    void getNameOfEmployee(void){
        cout << name <<endl;
    }
    static void getNameOfEmployee2(void){
        cout << name <<endl;
    }

};
string Employee::name="Ankit";

int main(){
    Employee e1;
    // e1.name="Ankit";
    e1.getNameOfEmployee2();
    e1.getNameOfEmployee();
    cout<<Employee::name;
    return 0;
}