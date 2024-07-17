#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    float salary;
    static int count;
public:
    void setData(void){
        id=count;
        salary=count*100;
        }
    void Display(){
        cout<<"id="<<id<<endl<<"Salary="<<salary<<endl;
        count;
    }
    static void show(void){
        // cout<<id;
         cout<<"The value of count="<<count++<<endl;
    }
   
};

int Employee ::count=1;
  int main(){
    Employee e1;
    e1.setData();
    e1.Display();
    Employee::show();
    Employee e2;
    e2.setData();
    e2.Display();
    Employee::show();
    Employee e3;
    e3.setData();
    e3.Display();
    Employee::show();

  }