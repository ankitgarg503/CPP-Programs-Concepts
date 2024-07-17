#include<iostream>
using namespace std;
class A{
    public:
    int data;
    void virtual fun1(void){
        data=5;
        cout<<"Data="<<data<<endl;
    }
    void virtual fun2(void){
        data=2;
        cout<<"Data="<<data<<endl;
    }
    void fun3(void){
        cout<<"Data="<<data<<endl;
    }


};
class B:public A{
    public:
    int var;
    virtual  void fun1(void){
         var=1;
         cout<<"Var="<<var<<endl;
     }
    void fun2(void){
        var=22;
        cout<<"Var="<<var<<endl;
    }
    void fun4(void){
        cout<<"We are in Derived Class"<<endl;
    }

};

int main(){
    A *o1;
    B obj1;
    o1=&obj1;
    B *o2;
    B o3;
    o3.fun1();
    o2=&obj1;
  //  o1->fun1();//Early Binding //Compile time polymorphism
    o1->fun1();//Late Binding After making fun1 of base class virtual    //Runtime time polymorphism
  //  o1->fun2();//Early Binding
    o1->fun2();//Late Binding After making fun2 of base class virtual
    o1->fun3();//Late Binding After making fun3 of base class virtual
    o2->fun4();
    
    return 0;
}