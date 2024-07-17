#include<iostream>
using namespace std;
class A{
    public:
    int data;
    void fun1(void){
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
class C:public A{
    public:
    int var;
    virtual  void fun1(void){
         var=111;
         cout<<"Var="<<var<<endl;
     }
    void fun2(void){
        var=222;
        cout<<"Var="<<var<<endl;
    }
    void fun5(void){
        cout<<"We are in Derived Class"<<endl;
    }

};

int main(){
    A *o1[2];
    B obj1;
    o1[0]=&obj1;
    C obj2;
    o1[1]=&obj2;
   
   o1[0]->fun1();
   o1[1]->fun1();
 
   
    
    return 0;
}