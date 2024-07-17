#include<iostream>
using namespace std;

template<class T1=int,class T2=float>
class Employee{
    public:
    T1 age;
    T2 salary;
    Employee(T1 a,T2 s){
        age=a;
        salary=s;
    }
    void display(){
        cout<<"Employee age="<<age<<endl;
        cout<<"Employee salary="<<salary<<endl;
    }

};



int main(){
    Employee<char,int> e1(20,304.534);
    e1.display();     
    return 0;
}